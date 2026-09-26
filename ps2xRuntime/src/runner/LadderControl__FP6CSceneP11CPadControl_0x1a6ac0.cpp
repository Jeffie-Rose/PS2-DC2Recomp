#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LadderControl__FP6CSceneP11CPadControl
// Address: 0x1a6ac0 - 0x1a76bc
void LadderControl__FP6CSceneP11CPadControl_0x1a6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LadderControl__FP6CSceneP11CPadControl_0x1a6ac0");
#endif

    switch (ctx->pc) {
        case 0x1a6ac0u: goto label_1a6ac0;
        case 0x1a6ac4u: goto label_1a6ac4;
        case 0x1a6ac8u: goto label_1a6ac8;
        case 0x1a6accu: goto label_1a6acc;
        case 0x1a6ad0u: goto label_1a6ad0;
        case 0x1a6ad4u: goto label_1a6ad4;
        case 0x1a6ad8u: goto label_1a6ad8;
        case 0x1a6adcu: goto label_1a6adc;
        case 0x1a6ae0u: goto label_1a6ae0;
        case 0x1a6ae4u: goto label_1a6ae4;
        case 0x1a6ae8u: goto label_1a6ae8;
        case 0x1a6aecu: goto label_1a6aec;
        case 0x1a6af0u: goto label_1a6af0;
        case 0x1a6af4u: goto label_1a6af4;
        case 0x1a6af8u: goto label_1a6af8;
        case 0x1a6afcu: goto label_1a6afc;
        case 0x1a6b00u: goto label_1a6b00;
        case 0x1a6b04u: goto label_1a6b04;
        case 0x1a6b08u: goto label_1a6b08;
        case 0x1a6b0cu: goto label_1a6b0c;
        case 0x1a6b10u: goto label_1a6b10;
        case 0x1a6b14u: goto label_1a6b14;
        case 0x1a6b18u: goto label_1a6b18;
        case 0x1a6b1cu: goto label_1a6b1c;
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b24u: goto label_1a6b24;
        case 0x1a6b28u: goto label_1a6b28;
        case 0x1a6b2cu: goto label_1a6b2c;
        case 0x1a6b30u: goto label_1a6b30;
        case 0x1a6b34u: goto label_1a6b34;
        case 0x1a6b38u: goto label_1a6b38;
        case 0x1a6b3cu: goto label_1a6b3c;
        case 0x1a6b40u: goto label_1a6b40;
        case 0x1a6b44u: goto label_1a6b44;
        case 0x1a6b48u: goto label_1a6b48;
        case 0x1a6b4cu: goto label_1a6b4c;
        case 0x1a6b50u: goto label_1a6b50;
        case 0x1a6b54u: goto label_1a6b54;
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6b5cu: goto label_1a6b5c;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b64u: goto label_1a6b64;
        case 0x1a6b68u: goto label_1a6b68;
        case 0x1a6b6cu: goto label_1a6b6c;
        case 0x1a6b70u: goto label_1a6b70;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b78u: goto label_1a6b78;
        case 0x1a6b7cu: goto label_1a6b7c;
        case 0x1a6b80u: goto label_1a6b80;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6b88u: goto label_1a6b88;
        case 0x1a6b8cu: goto label_1a6b8c;
        case 0x1a6b90u: goto label_1a6b90;
        case 0x1a6b94u: goto label_1a6b94;
        case 0x1a6b98u: goto label_1a6b98;
        case 0x1a6b9cu: goto label_1a6b9c;
        case 0x1a6ba0u: goto label_1a6ba0;
        case 0x1a6ba4u: goto label_1a6ba4;
        case 0x1a6ba8u: goto label_1a6ba8;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6bb4u: goto label_1a6bb4;
        case 0x1a6bb8u: goto label_1a6bb8;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6bc0u: goto label_1a6bc0;
        case 0x1a6bc4u: goto label_1a6bc4;
        case 0x1a6bc8u: goto label_1a6bc8;
        case 0x1a6bccu: goto label_1a6bcc;
        case 0x1a6bd0u: goto label_1a6bd0;
        case 0x1a6bd4u: goto label_1a6bd4;
        case 0x1a6bd8u: goto label_1a6bd8;
        case 0x1a6bdcu: goto label_1a6bdc;
        case 0x1a6be0u: goto label_1a6be0;
        case 0x1a6be4u: goto label_1a6be4;
        case 0x1a6be8u: goto label_1a6be8;
        case 0x1a6becu: goto label_1a6bec;
        case 0x1a6bf0u: goto label_1a6bf0;
        case 0x1a6bf4u: goto label_1a6bf4;
        case 0x1a6bf8u: goto label_1a6bf8;
        case 0x1a6bfcu: goto label_1a6bfc;
        case 0x1a6c00u: goto label_1a6c00;
        case 0x1a6c04u: goto label_1a6c04;
        case 0x1a6c08u: goto label_1a6c08;
        case 0x1a6c0cu: goto label_1a6c0c;
        case 0x1a6c10u: goto label_1a6c10;
        case 0x1a6c14u: goto label_1a6c14;
        case 0x1a6c18u: goto label_1a6c18;
        case 0x1a6c1cu: goto label_1a6c1c;
        case 0x1a6c20u: goto label_1a6c20;
        case 0x1a6c24u: goto label_1a6c24;
        case 0x1a6c28u: goto label_1a6c28;
        case 0x1a6c2cu: goto label_1a6c2c;
        case 0x1a6c30u: goto label_1a6c30;
        case 0x1a6c34u: goto label_1a6c34;
        case 0x1a6c38u: goto label_1a6c38;
        case 0x1a6c3cu: goto label_1a6c3c;
        case 0x1a6c40u: goto label_1a6c40;
        case 0x1a6c44u: goto label_1a6c44;
        case 0x1a6c48u: goto label_1a6c48;
        case 0x1a6c4cu: goto label_1a6c4c;
        case 0x1a6c50u: goto label_1a6c50;
        case 0x1a6c54u: goto label_1a6c54;
        case 0x1a6c58u: goto label_1a6c58;
        case 0x1a6c5cu: goto label_1a6c5c;
        case 0x1a6c60u: goto label_1a6c60;
        case 0x1a6c64u: goto label_1a6c64;
        case 0x1a6c68u: goto label_1a6c68;
        case 0x1a6c6cu: goto label_1a6c6c;
        case 0x1a6c70u: goto label_1a6c70;
        case 0x1a6c74u: goto label_1a6c74;
        case 0x1a6c78u: goto label_1a6c78;
        case 0x1a6c7cu: goto label_1a6c7c;
        case 0x1a6c80u: goto label_1a6c80;
        case 0x1a6c84u: goto label_1a6c84;
        case 0x1a6c88u: goto label_1a6c88;
        case 0x1a6c8cu: goto label_1a6c8c;
        case 0x1a6c90u: goto label_1a6c90;
        case 0x1a6c94u: goto label_1a6c94;
        case 0x1a6c98u: goto label_1a6c98;
        case 0x1a6c9cu: goto label_1a6c9c;
        case 0x1a6ca0u: goto label_1a6ca0;
        case 0x1a6ca4u: goto label_1a6ca4;
        case 0x1a6ca8u: goto label_1a6ca8;
        case 0x1a6cacu: goto label_1a6cac;
        case 0x1a6cb0u: goto label_1a6cb0;
        case 0x1a6cb4u: goto label_1a6cb4;
        case 0x1a6cb8u: goto label_1a6cb8;
        case 0x1a6cbcu: goto label_1a6cbc;
        case 0x1a6cc0u: goto label_1a6cc0;
        case 0x1a6cc4u: goto label_1a6cc4;
        case 0x1a6cc8u: goto label_1a6cc8;
        case 0x1a6cccu: goto label_1a6ccc;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6cd4u: goto label_1a6cd4;
        case 0x1a6cd8u: goto label_1a6cd8;
        case 0x1a6cdcu: goto label_1a6cdc;
        case 0x1a6ce0u: goto label_1a6ce0;
        case 0x1a6ce4u: goto label_1a6ce4;
        case 0x1a6ce8u: goto label_1a6ce8;
        case 0x1a6cecu: goto label_1a6cec;
        case 0x1a6cf0u: goto label_1a6cf0;
        case 0x1a6cf4u: goto label_1a6cf4;
        case 0x1a6cf8u: goto label_1a6cf8;
        case 0x1a6cfcu: goto label_1a6cfc;
        case 0x1a6d00u: goto label_1a6d00;
        case 0x1a6d04u: goto label_1a6d04;
        case 0x1a6d08u: goto label_1a6d08;
        case 0x1a6d0cu: goto label_1a6d0c;
        case 0x1a6d10u: goto label_1a6d10;
        case 0x1a6d14u: goto label_1a6d14;
        case 0x1a6d18u: goto label_1a6d18;
        case 0x1a6d1cu: goto label_1a6d1c;
        case 0x1a6d20u: goto label_1a6d20;
        case 0x1a6d24u: goto label_1a6d24;
        case 0x1a6d28u: goto label_1a6d28;
        case 0x1a6d2cu: goto label_1a6d2c;
        case 0x1a6d30u: goto label_1a6d30;
        case 0x1a6d34u: goto label_1a6d34;
        case 0x1a6d38u: goto label_1a6d38;
        case 0x1a6d3cu: goto label_1a6d3c;
        case 0x1a6d40u: goto label_1a6d40;
        case 0x1a6d44u: goto label_1a6d44;
        case 0x1a6d48u: goto label_1a6d48;
        case 0x1a6d4cu: goto label_1a6d4c;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d54u: goto label_1a6d54;
        case 0x1a6d58u: goto label_1a6d58;
        case 0x1a6d5cu: goto label_1a6d5c;
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6d64u: goto label_1a6d64;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d6cu: goto label_1a6d6c;
        case 0x1a6d70u: goto label_1a6d70;
        case 0x1a6d74u: goto label_1a6d74;
        case 0x1a6d78u: goto label_1a6d78;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d84u: goto label_1a6d84;
        case 0x1a6d88u: goto label_1a6d88;
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6d90u: goto label_1a6d90;
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6d9cu: goto label_1a6d9c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6da4u: goto label_1a6da4;
        case 0x1a6da8u: goto label_1a6da8;
        case 0x1a6dacu: goto label_1a6dac;
        case 0x1a6db0u: goto label_1a6db0;
        case 0x1a6db4u: goto label_1a6db4;
        case 0x1a6db8u: goto label_1a6db8;
        case 0x1a6dbcu: goto label_1a6dbc;
        case 0x1a6dc0u: goto label_1a6dc0;
        case 0x1a6dc4u: goto label_1a6dc4;
        case 0x1a6dc8u: goto label_1a6dc8;
        case 0x1a6dccu: goto label_1a6dcc;
        case 0x1a6dd0u: goto label_1a6dd0;
        case 0x1a6dd4u: goto label_1a6dd4;
        case 0x1a6dd8u: goto label_1a6dd8;
        case 0x1a6ddcu: goto label_1a6ddc;
        case 0x1a6de0u: goto label_1a6de0;
        case 0x1a6de4u: goto label_1a6de4;
        case 0x1a6de8u: goto label_1a6de8;
        case 0x1a6decu: goto label_1a6dec;
        case 0x1a6df0u: goto label_1a6df0;
        case 0x1a6df4u: goto label_1a6df4;
        case 0x1a6df8u: goto label_1a6df8;
        case 0x1a6dfcu: goto label_1a6dfc;
        case 0x1a6e00u: goto label_1a6e00;
        case 0x1a6e04u: goto label_1a6e04;
        case 0x1a6e08u: goto label_1a6e08;
        case 0x1a6e0cu: goto label_1a6e0c;
        case 0x1a6e10u: goto label_1a6e10;
        case 0x1a6e14u: goto label_1a6e14;
        case 0x1a6e18u: goto label_1a6e18;
        case 0x1a6e1cu: goto label_1a6e1c;
        case 0x1a6e20u: goto label_1a6e20;
        case 0x1a6e24u: goto label_1a6e24;
        case 0x1a6e28u: goto label_1a6e28;
        case 0x1a6e2cu: goto label_1a6e2c;
        case 0x1a6e30u: goto label_1a6e30;
        case 0x1a6e34u: goto label_1a6e34;
        case 0x1a6e38u: goto label_1a6e38;
        case 0x1a6e3cu: goto label_1a6e3c;
        case 0x1a6e40u: goto label_1a6e40;
        case 0x1a6e44u: goto label_1a6e44;
        case 0x1a6e48u: goto label_1a6e48;
        case 0x1a6e4cu: goto label_1a6e4c;
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6e5cu: goto label_1a6e5c;
        case 0x1a6e60u: goto label_1a6e60;
        case 0x1a6e64u: goto label_1a6e64;
        case 0x1a6e68u: goto label_1a6e68;
        case 0x1a6e6cu: goto label_1a6e6c;
        case 0x1a6e70u: goto label_1a6e70;
        case 0x1a6e74u: goto label_1a6e74;
        case 0x1a6e78u: goto label_1a6e78;
        case 0x1a6e7cu: goto label_1a6e7c;
        case 0x1a6e80u: goto label_1a6e80;
        case 0x1a6e84u: goto label_1a6e84;
        case 0x1a6e88u: goto label_1a6e88;
        case 0x1a6e8cu: goto label_1a6e8c;
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6e94u: goto label_1a6e94;
        case 0x1a6e98u: goto label_1a6e98;
        case 0x1a6e9cu: goto label_1a6e9c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ebcu: goto label_1a6ebc;
        case 0x1a6ec0u: goto label_1a6ec0;
        case 0x1a6ec4u: goto label_1a6ec4;
        case 0x1a6ec8u: goto label_1a6ec8;
        case 0x1a6eccu: goto label_1a6ecc;
        case 0x1a6ed0u: goto label_1a6ed0;
        case 0x1a6ed4u: goto label_1a6ed4;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6edcu: goto label_1a6edc;
        case 0x1a6ee0u: goto label_1a6ee0;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6eecu: goto label_1a6eec;
        case 0x1a6ef0u: goto label_1a6ef0;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6ef8u: goto label_1a6ef8;
        case 0x1a6efcu: goto label_1a6efc;
        case 0x1a6f00u: goto label_1a6f00;
        case 0x1a6f04u: goto label_1a6f04;
        case 0x1a6f08u: goto label_1a6f08;
        case 0x1a6f0cu: goto label_1a6f0c;
        case 0x1a6f10u: goto label_1a6f10;
        case 0x1a6f14u: goto label_1a6f14;
        case 0x1a6f18u: goto label_1a6f18;
        case 0x1a6f1cu: goto label_1a6f1c;
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f34u: goto label_1a6f34;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f3cu: goto label_1a6f3c;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f48u: goto label_1a6f48;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f54u: goto label_1a6f54;
        case 0x1a6f58u: goto label_1a6f58;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f60u: goto label_1a6f60;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6f68u: goto label_1a6f68;
        case 0x1a6f6cu: goto label_1a6f6c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f74u: goto label_1a6f74;
        case 0x1a6f78u: goto label_1a6f78;
        case 0x1a6f7cu: goto label_1a6f7c;
        case 0x1a6f80u: goto label_1a6f80;
        case 0x1a6f84u: goto label_1a6f84;
        case 0x1a6f88u: goto label_1a6f88;
        case 0x1a6f8cu: goto label_1a6f8c;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6f94u: goto label_1a6f94;
        case 0x1a6f98u: goto label_1a6f98;
        case 0x1a6f9cu: goto label_1a6f9c;
        case 0x1a6fa0u: goto label_1a6fa0;
        case 0x1a6fa4u: goto label_1a6fa4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6facu: goto label_1a6fac;
        case 0x1a6fb0u: goto label_1a6fb0;
        case 0x1a6fb4u: goto label_1a6fb4;
        case 0x1a6fb8u: goto label_1a6fb8;
        case 0x1a6fbcu: goto label_1a6fbc;
        case 0x1a6fc0u: goto label_1a6fc0;
        case 0x1a6fc4u: goto label_1a6fc4;
        case 0x1a6fc8u: goto label_1a6fc8;
        case 0x1a6fccu: goto label_1a6fcc;
        case 0x1a6fd0u: goto label_1a6fd0;
        case 0x1a6fd4u: goto label_1a6fd4;
        case 0x1a6fd8u: goto label_1a6fd8;
        case 0x1a6fdcu: goto label_1a6fdc;
        case 0x1a6fe0u: goto label_1a6fe0;
        case 0x1a6fe4u: goto label_1a6fe4;
        case 0x1a6fe8u: goto label_1a6fe8;
        case 0x1a6fecu: goto label_1a6fec;
        case 0x1a6ff0u: goto label_1a6ff0;
        case 0x1a6ff4u: goto label_1a6ff4;
        case 0x1a6ff8u: goto label_1a6ff8;
        case 0x1a6ffcu: goto label_1a6ffc;
        case 0x1a7000u: goto label_1a7000;
        case 0x1a7004u: goto label_1a7004;
        case 0x1a7008u: goto label_1a7008;
        case 0x1a700cu: goto label_1a700c;
        case 0x1a7010u: goto label_1a7010;
        case 0x1a7014u: goto label_1a7014;
        case 0x1a7018u: goto label_1a7018;
        case 0x1a701cu: goto label_1a701c;
        case 0x1a7020u: goto label_1a7020;
        case 0x1a7024u: goto label_1a7024;
        case 0x1a7028u: goto label_1a7028;
        case 0x1a702cu: goto label_1a702c;
        case 0x1a7030u: goto label_1a7030;
        case 0x1a7034u: goto label_1a7034;
        case 0x1a7038u: goto label_1a7038;
        case 0x1a703cu: goto label_1a703c;
        case 0x1a7040u: goto label_1a7040;
        case 0x1a7044u: goto label_1a7044;
        case 0x1a7048u: goto label_1a7048;
        case 0x1a704cu: goto label_1a704c;
        case 0x1a7050u: goto label_1a7050;
        case 0x1a7054u: goto label_1a7054;
        case 0x1a7058u: goto label_1a7058;
        case 0x1a705cu: goto label_1a705c;
        case 0x1a7060u: goto label_1a7060;
        case 0x1a7064u: goto label_1a7064;
        case 0x1a7068u: goto label_1a7068;
        case 0x1a706cu: goto label_1a706c;
        case 0x1a7070u: goto label_1a7070;
        case 0x1a7074u: goto label_1a7074;
        case 0x1a7078u: goto label_1a7078;
        case 0x1a707cu: goto label_1a707c;
        case 0x1a7080u: goto label_1a7080;
        case 0x1a7084u: goto label_1a7084;
        case 0x1a7088u: goto label_1a7088;
        case 0x1a708cu: goto label_1a708c;
        case 0x1a7090u: goto label_1a7090;
        case 0x1a7094u: goto label_1a7094;
        case 0x1a7098u: goto label_1a7098;
        case 0x1a709cu: goto label_1a709c;
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70a4u: goto label_1a70a4;
        case 0x1a70a8u: goto label_1a70a8;
        case 0x1a70acu: goto label_1a70ac;
        case 0x1a70b0u: goto label_1a70b0;
        case 0x1a70b4u: goto label_1a70b4;
        case 0x1a70b8u: goto label_1a70b8;
        case 0x1a70bcu: goto label_1a70bc;
        case 0x1a70c0u: goto label_1a70c0;
        case 0x1a70c4u: goto label_1a70c4;
        case 0x1a70c8u: goto label_1a70c8;
        case 0x1a70ccu: goto label_1a70cc;
        case 0x1a70d0u: goto label_1a70d0;
        case 0x1a70d4u: goto label_1a70d4;
        case 0x1a70d8u: goto label_1a70d8;
        case 0x1a70dcu: goto label_1a70dc;
        case 0x1a70e0u: goto label_1a70e0;
        case 0x1a70e4u: goto label_1a70e4;
        case 0x1a70e8u: goto label_1a70e8;
        case 0x1a70ecu: goto label_1a70ec;
        case 0x1a70f0u: goto label_1a70f0;
        case 0x1a70f4u: goto label_1a70f4;
        case 0x1a70f8u: goto label_1a70f8;
        case 0x1a70fcu: goto label_1a70fc;
        case 0x1a7100u: goto label_1a7100;
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7108u: goto label_1a7108;
        case 0x1a710cu: goto label_1a710c;
        case 0x1a7110u: goto label_1a7110;
        case 0x1a7114u: goto label_1a7114;
        case 0x1a7118u: goto label_1a7118;
        case 0x1a711cu: goto label_1a711c;
        case 0x1a7120u: goto label_1a7120;
        case 0x1a7124u: goto label_1a7124;
        case 0x1a7128u: goto label_1a7128;
        case 0x1a712cu: goto label_1a712c;
        case 0x1a7130u: goto label_1a7130;
        case 0x1a7134u: goto label_1a7134;
        case 0x1a7138u: goto label_1a7138;
        case 0x1a713cu: goto label_1a713c;
        case 0x1a7140u: goto label_1a7140;
        case 0x1a7144u: goto label_1a7144;
        case 0x1a7148u: goto label_1a7148;
        case 0x1a714cu: goto label_1a714c;
        case 0x1a7150u: goto label_1a7150;
        case 0x1a7154u: goto label_1a7154;
        case 0x1a7158u: goto label_1a7158;
        case 0x1a715cu: goto label_1a715c;
        case 0x1a7160u: goto label_1a7160;
        case 0x1a7164u: goto label_1a7164;
        case 0x1a7168u: goto label_1a7168;
        case 0x1a716cu: goto label_1a716c;
        case 0x1a7170u: goto label_1a7170;
        case 0x1a7174u: goto label_1a7174;
        case 0x1a7178u: goto label_1a7178;
        case 0x1a717cu: goto label_1a717c;
        case 0x1a7180u: goto label_1a7180;
        case 0x1a7184u: goto label_1a7184;
        case 0x1a7188u: goto label_1a7188;
        case 0x1a718cu: goto label_1a718c;
        case 0x1a7190u: goto label_1a7190;
        case 0x1a7194u: goto label_1a7194;
        case 0x1a7198u: goto label_1a7198;
        case 0x1a719cu: goto label_1a719c;
        case 0x1a71a0u: goto label_1a71a0;
        case 0x1a71a4u: goto label_1a71a4;
        case 0x1a71a8u: goto label_1a71a8;
        case 0x1a71acu: goto label_1a71ac;
        case 0x1a71b0u: goto label_1a71b0;
        case 0x1a71b4u: goto label_1a71b4;
        case 0x1a71b8u: goto label_1a71b8;
        case 0x1a71bcu: goto label_1a71bc;
        case 0x1a71c0u: goto label_1a71c0;
        case 0x1a71c4u: goto label_1a71c4;
        case 0x1a71c8u: goto label_1a71c8;
        case 0x1a71ccu: goto label_1a71cc;
        case 0x1a71d0u: goto label_1a71d0;
        case 0x1a71d4u: goto label_1a71d4;
        case 0x1a71d8u: goto label_1a71d8;
        case 0x1a71dcu: goto label_1a71dc;
        case 0x1a71e0u: goto label_1a71e0;
        case 0x1a71e4u: goto label_1a71e4;
        case 0x1a71e8u: goto label_1a71e8;
        case 0x1a71ecu: goto label_1a71ec;
        case 0x1a71f0u: goto label_1a71f0;
        case 0x1a71f4u: goto label_1a71f4;
        case 0x1a71f8u: goto label_1a71f8;
        case 0x1a71fcu: goto label_1a71fc;
        case 0x1a7200u: goto label_1a7200;
        case 0x1a7204u: goto label_1a7204;
        case 0x1a7208u: goto label_1a7208;
        case 0x1a720cu: goto label_1a720c;
        case 0x1a7210u: goto label_1a7210;
        case 0x1a7214u: goto label_1a7214;
        case 0x1a7218u: goto label_1a7218;
        case 0x1a721cu: goto label_1a721c;
        case 0x1a7220u: goto label_1a7220;
        case 0x1a7224u: goto label_1a7224;
        case 0x1a7228u: goto label_1a7228;
        case 0x1a722cu: goto label_1a722c;
        case 0x1a7230u: goto label_1a7230;
        case 0x1a7234u: goto label_1a7234;
        case 0x1a7238u: goto label_1a7238;
        case 0x1a723cu: goto label_1a723c;
        case 0x1a7240u: goto label_1a7240;
        case 0x1a7244u: goto label_1a7244;
        case 0x1a7248u: goto label_1a7248;
        case 0x1a724cu: goto label_1a724c;
        case 0x1a7250u: goto label_1a7250;
        case 0x1a7254u: goto label_1a7254;
        case 0x1a7258u: goto label_1a7258;
        case 0x1a725cu: goto label_1a725c;
        case 0x1a7260u: goto label_1a7260;
        case 0x1a7264u: goto label_1a7264;
        case 0x1a7268u: goto label_1a7268;
        case 0x1a726cu: goto label_1a726c;
        case 0x1a7270u: goto label_1a7270;
        case 0x1a7274u: goto label_1a7274;
        case 0x1a7278u: goto label_1a7278;
        case 0x1a727cu: goto label_1a727c;
        case 0x1a7280u: goto label_1a7280;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7288u: goto label_1a7288;
        case 0x1a728cu: goto label_1a728c;
        case 0x1a7290u: goto label_1a7290;
        case 0x1a7294u: goto label_1a7294;
        case 0x1a7298u: goto label_1a7298;
        case 0x1a729cu: goto label_1a729c;
        case 0x1a72a0u: goto label_1a72a0;
        case 0x1a72a4u: goto label_1a72a4;
        case 0x1a72a8u: goto label_1a72a8;
        case 0x1a72acu: goto label_1a72ac;
        case 0x1a72b0u: goto label_1a72b0;
        case 0x1a72b4u: goto label_1a72b4;
        case 0x1a72b8u: goto label_1a72b8;
        case 0x1a72bcu: goto label_1a72bc;
        case 0x1a72c0u: goto label_1a72c0;
        case 0x1a72c4u: goto label_1a72c4;
        case 0x1a72c8u: goto label_1a72c8;
        case 0x1a72ccu: goto label_1a72cc;
        case 0x1a72d0u: goto label_1a72d0;
        case 0x1a72d4u: goto label_1a72d4;
        case 0x1a72d8u: goto label_1a72d8;
        case 0x1a72dcu: goto label_1a72dc;
        case 0x1a72e0u: goto label_1a72e0;
        case 0x1a72e4u: goto label_1a72e4;
        case 0x1a72e8u: goto label_1a72e8;
        case 0x1a72ecu: goto label_1a72ec;
        case 0x1a72f0u: goto label_1a72f0;
        case 0x1a72f4u: goto label_1a72f4;
        case 0x1a72f8u: goto label_1a72f8;
        case 0x1a72fcu: goto label_1a72fc;
        case 0x1a7300u: goto label_1a7300;
        case 0x1a7304u: goto label_1a7304;
        case 0x1a7308u: goto label_1a7308;
        case 0x1a730cu: goto label_1a730c;
        case 0x1a7310u: goto label_1a7310;
        case 0x1a7314u: goto label_1a7314;
        case 0x1a7318u: goto label_1a7318;
        case 0x1a731cu: goto label_1a731c;
        case 0x1a7320u: goto label_1a7320;
        case 0x1a7324u: goto label_1a7324;
        case 0x1a7328u: goto label_1a7328;
        case 0x1a732cu: goto label_1a732c;
        case 0x1a7330u: goto label_1a7330;
        case 0x1a7334u: goto label_1a7334;
        case 0x1a7338u: goto label_1a7338;
        case 0x1a733cu: goto label_1a733c;
        case 0x1a7340u: goto label_1a7340;
        case 0x1a7344u: goto label_1a7344;
        case 0x1a7348u: goto label_1a7348;
        case 0x1a734cu: goto label_1a734c;
        case 0x1a7350u: goto label_1a7350;
        case 0x1a7354u: goto label_1a7354;
        case 0x1a7358u: goto label_1a7358;
        case 0x1a735cu: goto label_1a735c;
        case 0x1a7360u: goto label_1a7360;
        case 0x1a7364u: goto label_1a7364;
        case 0x1a7368u: goto label_1a7368;
        case 0x1a736cu: goto label_1a736c;
        case 0x1a7370u: goto label_1a7370;
        case 0x1a7374u: goto label_1a7374;
        case 0x1a7378u: goto label_1a7378;
        case 0x1a737cu: goto label_1a737c;
        case 0x1a7380u: goto label_1a7380;
        case 0x1a7384u: goto label_1a7384;
        case 0x1a7388u: goto label_1a7388;
        case 0x1a738cu: goto label_1a738c;
        case 0x1a7390u: goto label_1a7390;
        case 0x1a7394u: goto label_1a7394;
        case 0x1a7398u: goto label_1a7398;
        case 0x1a739cu: goto label_1a739c;
        case 0x1a73a0u: goto label_1a73a0;
        case 0x1a73a4u: goto label_1a73a4;
        case 0x1a73a8u: goto label_1a73a8;
        case 0x1a73acu: goto label_1a73ac;
        case 0x1a73b0u: goto label_1a73b0;
        case 0x1a73b4u: goto label_1a73b4;
        case 0x1a73b8u: goto label_1a73b8;
        case 0x1a73bcu: goto label_1a73bc;
        case 0x1a73c0u: goto label_1a73c0;
        case 0x1a73c4u: goto label_1a73c4;
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a73ccu: goto label_1a73cc;
        case 0x1a73d0u: goto label_1a73d0;
        case 0x1a73d4u: goto label_1a73d4;
        case 0x1a73d8u: goto label_1a73d8;
        case 0x1a73dcu: goto label_1a73dc;
        case 0x1a73e0u: goto label_1a73e0;
        case 0x1a73e4u: goto label_1a73e4;
        case 0x1a73e8u: goto label_1a73e8;
        case 0x1a73ecu: goto label_1a73ec;
        case 0x1a73f0u: goto label_1a73f0;
        case 0x1a73f4u: goto label_1a73f4;
        case 0x1a73f8u: goto label_1a73f8;
        case 0x1a73fcu: goto label_1a73fc;
        case 0x1a7400u: goto label_1a7400;
        case 0x1a7404u: goto label_1a7404;
        case 0x1a7408u: goto label_1a7408;
        case 0x1a740cu: goto label_1a740c;
        case 0x1a7410u: goto label_1a7410;
        case 0x1a7414u: goto label_1a7414;
        case 0x1a7418u: goto label_1a7418;
        case 0x1a741cu: goto label_1a741c;
        case 0x1a7420u: goto label_1a7420;
        case 0x1a7424u: goto label_1a7424;
        case 0x1a7428u: goto label_1a7428;
        case 0x1a742cu: goto label_1a742c;
        case 0x1a7430u: goto label_1a7430;
        case 0x1a7434u: goto label_1a7434;
        case 0x1a7438u: goto label_1a7438;
        case 0x1a743cu: goto label_1a743c;
        case 0x1a7440u: goto label_1a7440;
        case 0x1a7444u: goto label_1a7444;
        case 0x1a7448u: goto label_1a7448;
        case 0x1a744cu: goto label_1a744c;
        case 0x1a7450u: goto label_1a7450;
        case 0x1a7454u: goto label_1a7454;
        case 0x1a7458u: goto label_1a7458;
        case 0x1a745cu: goto label_1a745c;
        case 0x1a7460u: goto label_1a7460;
        case 0x1a7464u: goto label_1a7464;
        case 0x1a7468u: goto label_1a7468;
        case 0x1a746cu: goto label_1a746c;
        case 0x1a7470u: goto label_1a7470;
        case 0x1a7474u: goto label_1a7474;
        case 0x1a7478u: goto label_1a7478;
        case 0x1a747cu: goto label_1a747c;
        case 0x1a7480u: goto label_1a7480;
        case 0x1a7484u: goto label_1a7484;
        case 0x1a7488u: goto label_1a7488;
        case 0x1a748cu: goto label_1a748c;
        case 0x1a7490u: goto label_1a7490;
        case 0x1a7494u: goto label_1a7494;
        case 0x1a7498u: goto label_1a7498;
        case 0x1a749cu: goto label_1a749c;
        case 0x1a74a0u: goto label_1a74a0;
        case 0x1a74a4u: goto label_1a74a4;
        case 0x1a74a8u: goto label_1a74a8;
        case 0x1a74acu: goto label_1a74ac;
        case 0x1a74b0u: goto label_1a74b0;
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a74b8u: goto label_1a74b8;
        case 0x1a74bcu: goto label_1a74bc;
        case 0x1a74c0u: goto label_1a74c0;
        case 0x1a74c4u: goto label_1a74c4;
        case 0x1a74c8u: goto label_1a74c8;
        case 0x1a74ccu: goto label_1a74cc;
        case 0x1a74d0u: goto label_1a74d0;
        case 0x1a74d4u: goto label_1a74d4;
        case 0x1a74d8u: goto label_1a74d8;
        case 0x1a74dcu: goto label_1a74dc;
        case 0x1a74e0u: goto label_1a74e0;
        case 0x1a74e4u: goto label_1a74e4;
        case 0x1a74e8u: goto label_1a74e8;
        case 0x1a74ecu: goto label_1a74ec;
        case 0x1a74f0u: goto label_1a74f0;
        case 0x1a74f4u: goto label_1a74f4;
        case 0x1a74f8u: goto label_1a74f8;
        case 0x1a74fcu: goto label_1a74fc;
        case 0x1a7500u: goto label_1a7500;
        case 0x1a7504u: goto label_1a7504;
        case 0x1a7508u: goto label_1a7508;
        case 0x1a750cu: goto label_1a750c;
        case 0x1a7510u: goto label_1a7510;
        case 0x1a7514u: goto label_1a7514;
        case 0x1a7518u: goto label_1a7518;
        case 0x1a751cu: goto label_1a751c;
        case 0x1a7520u: goto label_1a7520;
        case 0x1a7524u: goto label_1a7524;
        case 0x1a7528u: goto label_1a7528;
        case 0x1a752cu: goto label_1a752c;
        case 0x1a7530u: goto label_1a7530;
        case 0x1a7534u: goto label_1a7534;
        case 0x1a7538u: goto label_1a7538;
        case 0x1a753cu: goto label_1a753c;
        case 0x1a7540u: goto label_1a7540;
        case 0x1a7544u: goto label_1a7544;
        case 0x1a7548u: goto label_1a7548;
        case 0x1a754cu: goto label_1a754c;
        case 0x1a7550u: goto label_1a7550;
        case 0x1a7554u: goto label_1a7554;
        case 0x1a7558u: goto label_1a7558;
        case 0x1a755cu: goto label_1a755c;
        case 0x1a7560u: goto label_1a7560;
        case 0x1a7564u: goto label_1a7564;
        case 0x1a7568u: goto label_1a7568;
        case 0x1a756cu: goto label_1a756c;
        case 0x1a7570u: goto label_1a7570;
        case 0x1a7574u: goto label_1a7574;
        case 0x1a7578u: goto label_1a7578;
        case 0x1a757cu: goto label_1a757c;
        case 0x1a7580u: goto label_1a7580;
        case 0x1a7584u: goto label_1a7584;
        case 0x1a7588u: goto label_1a7588;
        case 0x1a758cu: goto label_1a758c;
        case 0x1a7590u: goto label_1a7590;
        case 0x1a7594u: goto label_1a7594;
        case 0x1a7598u: goto label_1a7598;
        case 0x1a759cu: goto label_1a759c;
        case 0x1a75a0u: goto label_1a75a0;
        case 0x1a75a4u: goto label_1a75a4;
        case 0x1a75a8u: goto label_1a75a8;
        case 0x1a75acu: goto label_1a75ac;
        case 0x1a75b0u: goto label_1a75b0;
        case 0x1a75b4u: goto label_1a75b4;
        case 0x1a75b8u: goto label_1a75b8;
        case 0x1a75bcu: goto label_1a75bc;
        case 0x1a75c0u: goto label_1a75c0;
        case 0x1a75c4u: goto label_1a75c4;
        case 0x1a75c8u: goto label_1a75c8;
        case 0x1a75ccu: goto label_1a75cc;
        case 0x1a75d0u: goto label_1a75d0;
        case 0x1a75d4u: goto label_1a75d4;
        case 0x1a75d8u: goto label_1a75d8;
        case 0x1a75dcu: goto label_1a75dc;
        case 0x1a75e0u: goto label_1a75e0;
        case 0x1a75e4u: goto label_1a75e4;
        case 0x1a75e8u: goto label_1a75e8;
        case 0x1a75ecu: goto label_1a75ec;
        case 0x1a75f0u: goto label_1a75f0;
        case 0x1a75f4u: goto label_1a75f4;
        case 0x1a75f8u: goto label_1a75f8;
        case 0x1a75fcu: goto label_1a75fc;
        case 0x1a7600u: goto label_1a7600;
        case 0x1a7604u: goto label_1a7604;
        case 0x1a7608u: goto label_1a7608;
        case 0x1a760cu: goto label_1a760c;
        case 0x1a7610u: goto label_1a7610;
        case 0x1a7614u: goto label_1a7614;
        case 0x1a7618u: goto label_1a7618;
        case 0x1a761cu: goto label_1a761c;
        case 0x1a7620u: goto label_1a7620;
        case 0x1a7624u: goto label_1a7624;
        case 0x1a7628u: goto label_1a7628;
        case 0x1a762cu: goto label_1a762c;
        case 0x1a7630u: goto label_1a7630;
        case 0x1a7634u: goto label_1a7634;
        case 0x1a7638u: goto label_1a7638;
        case 0x1a763cu: goto label_1a763c;
        case 0x1a7640u: goto label_1a7640;
        case 0x1a7644u: goto label_1a7644;
        case 0x1a7648u: goto label_1a7648;
        case 0x1a764cu: goto label_1a764c;
        case 0x1a7650u: goto label_1a7650;
        case 0x1a7654u: goto label_1a7654;
        case 0x1a7658u: goto label_1a7658;
        case 0x1a765cu: goto label_1a765c;
        case 0x1a7660u: goto label_1a7660;
        case 0x1a7664u: goto label_1a7664;
        case 0x1a7668u: goto label_1a7668;
        case 0x1a766cu: goto label_1a766c;
        case 0x1a7670u: goto label_1a7670;
        case 0x1a7674u: goto label_1a7674;
        case 0x1a7678u: goto label_1a7678;
        case 0x1a767cu: goto label_1a767c;
        case 0x1a7680u: goto label_1a7680;
        case 0x1a7684u: goto label_1a7684;
        case 0x1a7688u: goto label_1a7688;
        case 0x1a768cu: goto label_1a768c;
        case 0x1a7690u: goto label_1a7690;
        case 0x1a7694u: goto label_1a7694;
        case 0x1a7698u: goto label_1a7698;
        case 0x1a769cu: goto label_1a769c;
        case 0x1a76a0u: goto label_1a76a0;
        case 0x1a76a4u: goto label_1a76a4;
        case 0x1a76a8u: goto label_1a76a8;
        case 0x1a76acu: goto label_1a76ac;
        case 0x1a76b0u: goto label_1a76b0;
        case 0x1a76b4u: goto label_1a76b4;
        case 0x1a76b8u: goto label_1a76b8;
        default: break;
    }

    ctx->pc = 0x1a6ac0u;

label_1a6ac0:
    // 0x1a6ac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a6ac4:
    // 0x1a6ac4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a6ac8:
    // 0x1a6ac8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a6acc:
    // 0x1a6acc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a6accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a6ad0:
    // 0x1a6ad0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a6ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a6ad4:
    // 0x1a6ad4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a6ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ad8:
    // 0x1a6ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a6ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a6adc:
    // 0x1a6adc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a6adcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a6ae0:
    // 0x1a6ae0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a6ae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a6ae4:
    // 0x1a6ae4: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1a6ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_1a6ae8:
    // 0x1a6ae8: 0xc0a0ed8  jal         func_283B60
label_1a6aec:
    if (ctx->pc == 0x1A6AECu) {
        ctx->pc = 0x1A6AECu;
            // 0x1a6aec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AF0u;
        goto label_1a6af0;
    }
    ctx->pc = 0x1A6AE8u;
    SET_GPR_U32(ctx, 31, 0x1A6AF0u);
    ctx->pc = 0x1A6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AE8u;
            // 0x1a6aec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF0u; }
        if (ctx->pc != 0x1A6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF0u; }
        if (ctx->pc != 0x1A6AF0u) { return; }
    }
    ctx->pc = 0x1A6AF0u;
label_1a6af0:
    // 0x1a6af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6af4:
    // 0x1a6af4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a6af8:
    if (ctx->pc == 0x1A6AF8u) {
        ctx->pc = 0x1A6AFCu;
        goto label_1a6afc;
    }
    ctx->pc = 0x1A6AF4u;
    {
        const bool branch_taken_0x1a6af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6af4) {
            ctx->pc = 0x1A6B0Cu;
            goto label_1a6b0c;
        }
    }
    ctx->pc = 0x1A6AFCu;
label_1a6afc:
    // 0x1a6afc: 0xc069aac  jal         func_1A6AB0
label_1a6b00:
    if (ctx->pc == 0x1A6B00u) {
        ctx->pc = 0x1A6B04u;
        goto label_1a6b04;
    }
    ctx->pc = 0x1A6AFCu;
    SET_GPR_U32(ctx, 31, 0x1A6B04u);
    ctx->pc = 0x1A6AB0u;
    if (runtime->hasFunction(0x1A6AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B04u; }
        if (ctx->pc != 0x1A6B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndLadder__Fv_0x1a6ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B04u; }
        if (ctx->pc != 0x1A6B04u) { return; }
    }
    ctx->pc = 0x1A6B04u;
label_1a6b04:
    // 0x1a6b04: 0x100002e5  b           . + 4 + (0x2E5 << 2)
label_1a6b08:
    if (ctx->pc == 0x1A6B08u) {
        ctx->pc = 0x1A6B08u;
            // 0x1a6b08: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1A6B0Cu;
        goto label_1a6b0c;
    }
    ctx->pc = 0x1A6B04u;
    {
        const bool branch_taken_0x1a6b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B04u;
            // 0x1a6b08: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b04) {
            ctx->pc = 0x1A769Cu;
            goto label_1a769c;
        }
    }
    ctx->pc = 0x1A6B0Cu;
label_1a6b0c:
    // 0x1a6b0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6b10:
    // 0x1a6b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b14:
    // 0x1a6b14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6b18:
    // 0x1a6b18: 0x320f809  jalr        $t9
label_1a6b1c:
    if (ctx->pc == 0x1A6B1Cu) {
        ctx->pc = 0x1A6B1Cu;
            // 0x1a6b1c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A6B20u;
        goto label_1a6b20;
    }
    ctx->pc = 0x1A6B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6B20u);
        ctx->pc = 0x1A6B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B18u;
            // 0x1a6b1c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6B20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B20u; }
            if (ctx->pc != 0x1A6B20u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6B20u;
label_1a6b20:
    // 0x1a6b20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6b24:
    // 0x1a6b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b28:
    // 0x1a6b28: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a6b2c:
    // 0x1a6b2c: 0x320f809  jalr        $t9
label_1a6b30:
    if (ctx->pc == 0x1A6B30u) {
        ctx->pc = 0x1A6B30u;
            // 0x1a6b30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A6B34u;
        goto label_1a6b34;
    }
    ctx->pc = 0x1A6B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6B34u);
        ctx->pc = 0x1A6B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B2Cu;
            // 0x1a6b30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6B34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B34u; }
            if (ctx->pc != 0x1A6B34u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6B34u;
label_1a6b34:
    // 0x1a6b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b38:
    // 0x1a6b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b3c:
    // 0x1a6b3c: 0xc05d3d4  jal         func_174F50
label_1a6b40:
    if (ctx->pc == 0x1A6B40u) {
        ctx->pc = 0x1A6B40u;
            // 0x1a6b40: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A6B44u;
        goto label_1a6b44;
    }
    ctx->pc = 0x1A6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B44u);
    ctx->pc = 0x1A6B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B3Cu;
            // 0x1a6b40: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B44u; }
        if (ctx->pc != 0x1A6B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B44u; }
        if (ctx->pc != 0x1A6B44u) { return; }
    }
    ctx->pc = 0x1A6B44u;
label_1a6b44:
    // 0x1a6b44: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6b48:
    // 0x1a6b48: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1a6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_1a6b4c:
    // 0x1a6b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6b50:
    // 0x1a6b50: 0x8f848bf4  lw          $a0, -0x740C($gp)
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937588)));
label_1a6b54:
    // 0x1a6b54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a6b58:
    // 0x1a6b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6b5c:
    // 0x1a6b5c: 0xc04c520  jal         func_131480
label_1a6b60:
    if (ctx->pc == 0x1A6B60u) {
        ctx->pc = 0x1A6B60u;
            // 0x1a6b60: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x1A6B64u;
        goto label_1a6b64;
    }
    ctx->pc = 0x1A6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B64u);
    ctx->pc = 0x1A6B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B5Cu;
            // 0x1a6b60: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131480u;
    if (runtime->hasFunction(0x131480u)) {
        auto targetFn = runtime->lookupFunction(0x131480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B64u; }
        if (ctx->pc != 0x1A6B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFPf_0x131480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B64u; }
        if (ctx->pc != 0x1A6B64u) { return; }
    }
    ctx->pc = 0x1A6B64u;
label_1a6b64:
    // 0x1a6b64: 0x8f828b9c  lw          $v0, -0x7464($gp)
    ctx->pc = 0x1a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937500)));
label_1a6b68:
    // 0x1a6b68: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1a6b6c:
    // 0x1a6b6c: 0x102002b9  beqz        $at, . + 4 + (0x2B9 << 2)
label_1a6b70:
    if (ctx->pc == 0x1A6B70u) {
        ctx->pc = 0x1A6B70u;
            // 0x1a6b70: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1A6B74u;
        goto label_1a6b74;
    }
    ctx->pc = 0x1A6B6Cu;
    {
        const bool branch_taken_0x1a6b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B6Cu;
            // 0x1a6b70: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b6c) {
            ctx->pc = 0x1A7654u;
            goto label_1a7654;
        }
    }
    ctx->pc = 0x1A6B74u;
label_1a6b74:
    // 0x1a6b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a6b78:
    // 0x1a6b78: 0x24635be0  addiu       $v1, $v1, 0x5BE0
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23520));
label_1a6b7c:
    // 0x1a6b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6b80:
    // 0x1a6b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6b84:
    // 0x1a6b84: 0x400008  jr          $v0
label_1a6b88:
    if (ctx->pc == 0x1A6B88u) {
        ctx->pc = 0x1A6B8Cu;
        goto label_1a6b8c;
    }
    ctx->pc = 0x1A6B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6B8Cu: goto label_1a6b8c;
            case 0x1A6BACu: goto label_1a6bac;
            case 0x1A6D00u: goto label_1a6d00;
            case 0x1A6D74u: goto label_1a6d74;
            case 0x1A6DB8u: goto label_1a6db8;
            case 0x1A6DF4u: goto label_1a6df4;
            case 0x1A6E1Cu: goto label_1a6e1c;
            case 0x1A6F80u: goto label_1a6f80;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A74ACu: goto label_1a74ac;
            case 0x1A7534u: goto label_1a7534;
            case 0x1A75BCu: goto label_1a75bc;
            case 0x1A7654u: goto label_1a7654;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6B8Cu;
label_1a6b8c:
    // 0x1a6b8c: 0x8f828bb4  lw          $v0, -0x744C($gp)
    ctx->pc = 0x1a6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
label_1a6b90:
    // 0x1a6b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6b94:
    // 0x1a6b94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a6b98:
    if (ctx->pc == 0x1A6B98u) {
        ctx->pc = 0x1A6B98u;
            // 0x1a6b98: 0xaf838b9c  sw          $v1, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 3));
        ctx->pc = 0x1A6B9Cu;
        goto label_1a6b9c;
    }
    ctx->pc = 0x1A6B94u;
    {
        const bool branch_taken_0x1a6b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B94u;
            // 0x1a6b98: 0xaf838b9c  sw          $v1, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b94) {
            ctx->pc = 0x1A6BACu;
            goto label_1a6bac;
        }
    }
    ctx->pc = 0x1A6B9Cu;
label_1a6b9c:
    // 0x1a6b9c: 0x8f848bf4  lw          $a0, -0x740C($gp)
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937588)));
label_1a6ba0:
    // 0x1a6ba0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1a6ba4:
    // 0x1a6ba4: 0xc04c504  jal         func_131410
label_1a6ba8:
    if (ctx->pc == 0x1A6BA8u) {
        ctx->pc = 0x1A6BA8u;
            // 0x1a6ba8: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x1A6BACu;
        goto label_1a6bac;
    }
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x1A6BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BA4u;
            // 0x1a6ba8: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BACu; }
        if (ctx->pc != 0x1A6BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BACu; }
        if (ctx->pc != 0x1A6BACu) { return; }
    }
    ctx->pc = 0x1A6BACu;
label_1a6bac:
    // 0x1a6bac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a6bb0:
    // 0x1a6bb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a6bb4:
    // 0x1a6bb4: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1a6bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1a6bb8:
    // 0x1a6bb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a6bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bbc:
    // 0x1a6bbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6bc0:
    // 0x1a6bc0: 0x24c6b3d0  addiu       $a2, $a2, -0x4C30
    ctx->pc = 0x1a6bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947792));
label_1a6bc4:
    // 0x1a6bc4: 0xc04c294  jal         func_130A50
label_1a6bc8:
    if (ctx->pc == 0x1A6BC8u) {
        ctx->pc = 0x1A6BC8u;
            // 0x1a6bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BCCu;
        goto label_1a6bcc;
    }
    ctx->pc = 0x1A6BC4u;
    SET_GPR_U32(ctx, 31, 0x1A6BCCu);
    ctx->pc = 0x1A6BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BC4u;
            // 0x1a6bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A50u;
    if (runtime->hasFunction(0x130A50u)) {
        auto targetFn = runtime->lookupFunction(0x130A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BCCu; }
        if (ctx->pc != 0x1A6BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorInterpolate__FPfPfPffi_0x130a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BCCu; }
        if (ctx->pc != 0x1A6BCCu) { return; }
    }
    ctx->pc = 0x1A6BCCu;
label_1a6bcc:
    // 0x1a6bcc: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1a6bd0:
    // 0x1a6bd0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a6bd4:
    // 0x1a6bd4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1a6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6bd8:
    // 0x1a6bd8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a6bdc:
    // 0x1a6bdc: 0xc78d8bfc  lwc1        $f13, -0x7404($gp)
    ctx->pc = 0x1a6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a6be0:
    // 0x1a6be0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1a6be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a6be4:
    // 0x1a6be4: 0xc04c2d8  jal         func_130B60
label_1a6be8:
    if (ctx->pc == 0x1A6BE8u) {
        ctx->pc = 0x1A6BE8u;
            // 0x1a6be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BECu;
        goto label_1a6bec;
    }
    ctx->pc = 0x1A6BE4u;
    SET_GPR_U32(ctx, 31, 0x1A6BECu);
    ctx->pc = 0x1A6BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BE4u;
            // 0x1a6be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BECu; }
        if (ctx->pc != 0x1A6BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BECu; }
        if (ctx->pc != 0x1A6BECu) { return; }
    }
    ctx->pc = 0x1A6BECu;
label_1a6bec:
    // 0x1a6bec: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1a6bf0:
    // 0x1a6bf0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a6bf4:
    // 0x1a6bf4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a6bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a6bf8:
    // 0x1a6bf8: 0xc04c018  jal         func_130060
label_1a6bfc:
    if (ctx->pc == 0x1A6BFCu) {
        ctx->pc = 0x1A6BFCu;
            // 0x1a6bfc: 0x24a5b3d0  addiu       $a1, $a1, -0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947792));
        ctx->pc = 0x1A6C00u;
        goto label_1a6c00;
    }
    ctx->pc = 0x1A6BF8u;
    SET_GPR_U32(ctx, 31, 0x1A6C00u);
    ctx->pc = 0x1A6BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BF8u;
            // 0x1a6bfc: 0x24a5b3d0  addiu       $a1, $a1, -0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C00u; }
        if (ctx->pc != 0x1A6C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C00u; }
        if (ctx->pc != 0x1A6C00u) { return; }
    }
    ctx->pc = 0x1A6C00u;
label_1a6c00:
    // 0x1a6c00: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a6c04:
    // 0x1a6c04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a6c08:
    // 0x1a6c08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6c0c:
    // 0x1a6c0c: 0x0  nop
    ctx->pc = 0x1a6c0cu;
    // NOP
label_1a6c10:
    // 0x1a6c10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a6c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6c14:
    // 0x1a6c14: 0x0  nop
    ctx->pc = 0x1a6c14u;
    // NOP
label_1a6c18:
    // 0x1a6c18: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_1a6c1c:
    if (ctx->pc == 0x1A6C1Cu) {
        ctx->pc = 0x1A6C20u;
        goto label_1a6c20;
    }
    ctx->pc = 0x1A6C18u;
    {
        const bool branch_taken_0x1a6c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6c18) {
            ctx->pc = 0x1A6CDCu;
            goto label_1a6cdc;
        }
    }
    ctx->pc = 0x1A6C20u;
label_1a6c20:
    // 0x1a6c20: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a6c24:
    // 0x1a6c24: 0xc78d8bfc  lwc1        $f13, -0x7404($gp)
    ctx->pc = 0x1a6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a6c28:
    // 0x1a6c28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a6c2c:
    // 0x1a6c2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1a6c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a6c30:
    // 0x1a6c30: 0xc04c344  jal         func_130D10
label_1a6c34:
    if (ctx->pc == 0x1A6C34u) {
        ctx->pc = 0x1A6C34u;
            // 0x1a6c34: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A6C38u;
        goto label_1a6c38;
    }
    ctx->pc = 0x1A6C30u;
    SET_GPR_U32(ctx, 31, 0x1A6C38u);
    ctx->pc = 0x1A6C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C30u;
            // 0x1a6c34: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C38u; }
        if (ctx->pc != 0x1A6C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C38u; }
        if (ctx->pc != 0x1A6C38u) { return; }
    }
    ctx->pc = 0x1A6C38u;
label_1a6c38:
    // 0x1a6c38: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1a6c3c:
    if (ctx->pc == 0x1A6C3Cu) {
        ctx->pc = 0x1A6C40u;
        goto label_1a6c40;
    }
    ctx->pc = 0x1A6C38u;
    {
        const bool branch_taken_0x1a6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c38) {
            ctx->pc = 0x1A6CDCu;
            goto label_1a6cdc;
        }
    }
    ctx->pc = 0x1A6C40u;
label_1a6c40:
    // 0x1a6c40: 0x8f838b98  lw          $v1, -0x7468($gp)
    ctx->pc = 0x1a6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937496)));
label_1a6c44:
    // 0x1a6c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6c48:
    // 0x1a6c48: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1a6c4c:
    if (ctx->pc == 0x1A6C4Cu) {
        ctx->pc = 0x1A6C4Cu;
            // 0x1a6c4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A6C50u;
        goto label_1a6c50;
    }
    ctx->pc = 0x1A6C48u;
    {
        const bool branch_taken_0x1a6c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C48u;
            // 0x1a6c4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c48) {
            ctx->pc = 0x1A6C8Cu;
            goto label_1a6c8c;
        }
    }
    ctx->pc = 0x1A6C50u;
label_1a6c50:
    // 0x1a6c50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6c54:
    // 0x1a6c54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6c58:
    // 0x1a6c58: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a6c5c:
    // 0x1a6c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6c60:
    // 0x1a6c60: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c64:
    // 0x1a6c64: 0x24a55b80  addiu       $a1, $a1, 0x5B80
    ctx->pc = 0x1a6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
label_1a6c68:
    // 0x1a6c68: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6c6c:
    // 0x1a6c6c: 0x320f809  jalr        $t9
label_1a6c70:
    if (ctx->pc == 0x1A6C70u) {
        ctx->pc = 0x1A6C70u;
            // 0x1a6c70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A6C74u;
        goto label_1a6c74;
    }
    ctx->pc = 0x1A6C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6C74u);
        ctx->pc = 0x1A6C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C6Cu;
            // 0x1a6c70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6C74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C74u; }
            if (ctx->pc != 0x1A6C74u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6C74u;
label_1a6c74:
    // 0x1a6c74: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1a6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1a6c78:
    // 0x1a6c78: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1a6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a6c7c:
    // 0x1a6c7c: 0x2463b3c0  addiu       $v1, $v1, -0x4C40
    ctx->pc = 0x1a6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947776));
label_1a6c80:
    // 0x1a6c80: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a6c80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a6c84:
    // 0x1a6c84: 0x10000275  b           . + 4 + (0x275 << 2)
label_1a6c88:
    if (ctx->pc == 0x1A6C88u) {
        ctx->pc = 0x1A6C88u;
            // 0x1a6c88: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x1A6C8Cu;
        goto label_1a6c8c;
    }
    ctx->pc = 0x1A6C84u;
    {
        const bool branch_taken_0x1a6c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C84u;
            // 0x1a6c88: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c84) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6C8Cu;
label_1a6c8c:
    // 0x1a6c8c: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1a6c90:
    // 0x1a6c90: 0x2442b3c0  addiu       $v0, $v0, -0x4C40
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947776));
label_1a6c94:
    // 0x1a6c94: 0xaf868b9c  sw          $a2, -0x7464($gp)
    ctx->pc = 0x1a6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 6));
label_1a6c98:
    // 0x1a6c98: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1a6c98u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6c9c:
    // 0x1a6c9c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a6ca0:
    // 0x1a6ca0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6ca4:
    // 0x1a6ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ca8:
    // 0x1a6ca8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1a6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_1a6cac:
    // 0x1a6cac: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a6cb0:
    // 0x1a6cb0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6cb4:
    // 0x1a6cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6cb8:
    // 0x1a6cb8: 0x0  nop
    ctx->pc = 0x1a6cb8u;
    // NOP
label_1a6cbc:
    // 0x1a6cbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6cc0:
    // 0x1a6cc0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a6cc4:
    // 0x1a6cc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6cc8:
    // 0x1a6cc8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6ccc:
    // 0x1a6ccc: 0x320f809  jalr        $t9
label_1a6cd0:
    if (ctx->pc == 0x1A6CD0u) {
        ctx->pc = 0x1A6CD0u;
            // 0x1a6cd0: 0x24a55b88  addiu       $a1, $a1, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
        ctx->pc = 0x1A6CD4u;
        goto label_1a6cd4;
    }
    ctx->pc = 0x1A6CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CD4u);
        ctx->pc = 0x1A6CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CCCu;
            // 0x1a6cd0: 0x24a55b88  addiu       $a1, $a1, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CD4u; }
            if (ctx->pc != 0x1A6CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6CD4u;
label_1a6cd4:
    // 0x1a6cd4: 0x10000262  b           . + 4 + (0x262 << 2)
label_1a6cd8:
    if (ctx->pc == 0x1A6CD8u) {
        ctx->pc = 0x1A6CD8u;
            // 0x1a6cd8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A6CDCu;
        goto label_1a6cdc;
    }
    ctx->pc = 0x1A6CD4u;
    {
        const bool branch_taken_0x1a6cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CD4u;
            // 0x1a6cd8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cd4) {
            ctx->pc = 0x1A7660u;
            goto label_1a7660;
        }
    }
    ctx->pc = 0x1A6CDCu;
label_1a6cdc:
    // 0x1a6cdc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6ce0:
    // 0x1a6ce0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6ce4:
    // 0x1a6ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ce8:
    // 0x1a6ce8: 0x24a55b58  addiu       $a1, $a1, 0x5B58
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
label_1a6cec:
    // 0x1a6cec: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6cf0:
    // 0x1a6cf0: 0x320f809  jalr        $t9
label_1a6cf4:
    if (ctx->pc == 0x1A6CF4u) {
        ctx->pc = 0x1A6CF4u;
            // 0x1a6cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF8u;
        goto label_1a6cf8;
    }
    ctx->pc = 0x1A6CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CF8u);
        ctx->pc = 0x1A6CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CF0u;
            // 0x1a6cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CF8u; }
            if (ctx->pc != 0x1A6CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6CF8u;
label_1a6cf8:
    // 0x1a6cf8: 0x10000258  b           . + 4 + (0x258 << 2)
label_1a6cfc:
    if (ctx->pc == 0x1A6CFCu) {
        ctx->pc = 0x1A6D00u;
        goto label_1a6d00;
    }
    ctx->pc = 0x1A6CF8u;
    {
        const bool branch_taken_0x1a6cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6cf8) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6D00u;
label_1a6d00:
    // 0x1a6d00: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d04:
    // 0x1a6d04: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6d08:
    // 0x1a6d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d0c:
    // 0x1a6d0c: 0x24a55b80  addiu       $a1, $a1, 0x5B80
    ctx->pc = 0x1a6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
label_1a6d10:
    // 0x1a6d10: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6d14:
    // 0x1a6d14: 0x320f809  jalr        $t9
label_1a6d18:
    if (ctx->pc == 0x1A6D18u) {
        ctx->pc = 0x1A6D18u;
            // 0x1a6d18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A6D1Cu;
        goto label_1a6d1c;
    }
    ctx->pc = 0x1A6D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D1Cu);
        ctx->pc = 0x1A6D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D14u;
            // 0x1a6d18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D1Cu; }
            if (ctx->pc != 0x1A6D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A6D1Cu;
label_1a6d1c:
    // 0x1a6d1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d20:
    // 0x1a6d20: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a6d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a6d24:
    // 0x1a6d24: 0x320f809  jalr        $t9
label_1a6d28:
    if (ctx->pc == 0x1A6D28u) {
        ctx->pc = 0x1A6D28u;
            // 0x1a6d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D2Cu;
        goto label_1a6d2c;
    }
    ctx->pc = 0x1A6D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D2Cu);
        ctx->pc = 0x1A6D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D24u;
            // 0x1a6d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6D2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D2Cu; }
            if (ctx->pc != 0x1A6D2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A6D2Cu;
label_1a6d2c:
    // 0x1a6d2c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1a6d30:
    // 0x1a6d30: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a6d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1a6d34:
    // 0x1a6d34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6d38:
    // 0x1a6d38: 0x0  nop
    ctx->pc = 0x1a6d38u;
    // NOP
label_1a6d3c:
    // 0x1a6d3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a6d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6d40:
    // 0x1a6d40: 0x0  nop
    ctx->pc = 0x1a6d40u;
    // NOP
label_1a6d44:
    // 0x1a6d44: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1a6d48:
    if (ctx->pc == 0x1A6D48u) {
        ctx->pc = 0x1A6D4Cu;
        goto label_1a6d4c;
    }
    ctx->pc = 0x1A6D44u;
    {
        const bool branch_taken_0x1a6d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6d44) {
            ctx->pc = 0x1A6D54u;
            goto label_1a6d54;
        }
    }
    ctx->pc = 0x1A6D4Cu;
label_1a6d4c:
    // 0x1a6d4c: 0x8f828c04  lw          $v0, -0x73FC($gp)
    ctx->pc = 0x1a6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
label_1a6d50:
    // 0x1a6d50: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x1a6d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
label_1a6d54:
    // 0x1a6d54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d58:
    // 0x1a6d58: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a6d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a6d5c:
    // 0x1a6d5c: 0x320f809  jalr        $t9
label_1a6d60:
    if (ctx->pc == 0x1A6D60u) {
        ctx->pc = 0x1A6D60u;
            // 0x1a6d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D64u;
        goto label_1a6d64;
    }
    ctx->pc = 0x1A6D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D64u);
        ctx->pc = 0x1A6D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D5Cu;
            // 0x1a6d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D64u; }
            if (ctx->pc != 0x1A6D64u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6D64u;
label_1a6d64:
    // 0x1a6d64: 0x1040023d  beqz        $v0, . + 4 + (0x23D << 2)
label_1a6d68:
    if (ctx->pc == 0x1A6D68u) {
        ctx->pc = 0x1A6D68u;
            // 0x1a6d68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1A6D6Cu;
        goto label_1a6d6c;
    }
    ctx->pc = 0x1A6D64u;
    {
        const bool branch_taken_0x1a6d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D64u;
            // 0x1a6d68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d64) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6D6Cu;
label_1a6d6c:
    // 0x1a6d6c: 0x1000023b  b           . + 4 + (0x23B << 2)
label_1a6d70:
    if (ctx->pc == 0x1A6D70u) {
        ctx->pc = 0x1A6D70u;
            // 0x1a6d70: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6D74u;
        goto label_1a6d74;
    }
    ctx->pc = 0x1A6D6Cu;
    {
        const bool branch_taken_0x1a6d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D6Cu;
            // 0x1a6d70: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d6c) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6D74u;
label_1a6d74:
    // 0x1a6d74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d78:
    // 0x1a6d78: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6d7c:
    // 0x1a6d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d80:
    // 0x1a6d80: 0x24a55b88  addiu       $a1, $a1, 0x5B88
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
label_1a6d84:
    // 0x1a6d84: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6d88:
    // 0x1a6d88: 0x320f809  jalr        $t9
label_1a6d8c:
    if (ctx->pc == 0x1A6D8Cu) {
        ctx->pc = 0x1A6D8Cu;
            // 0x1a6d8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A6D90u;
        goto label_1a6d90;
    }
    ctx->pc = 0x1A6D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D90u);
        ctx->pc = 0x1A6D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D88u;
            // 0x1a6d8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6D90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D90u; }
            if (ctx->pc != 0x1A6D90u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6D90u;
label_1a6d90:
    // 0x1a6d90: 0x8f828c04  lw          $v0, -0x73FC($gp)
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
label_1a6d94:
    // 0x1a6d94: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x1a6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
label_1a6d98:
    // 0x1a6d98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d9c:
    // 0x1a6d9c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a6d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a6da0:
    // 0x1a6da0: 0x320f809  jalr        $t9
label_1a6da4:
    if (ctx->pc == 0x1A6DA4u) {
        ctx->pc = 0x1A6DA4u;
            // 0x1a6da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DA8u;
        goto label_1a6da8;
    }
    ctx->pc = 0x1A6DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6DA8u);
        ctx->pc = 0x1A6DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DA0u;
            // 0x1a6da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DA8u; }
            if (ctx->pc != 0x1A6DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6DA8u;
label_1a6da8:
    // 0x1a6da8: 0x1040022c  beqz        $v0, . + 4 + (0x22C << 2)
label_1a6dac:
    if (ctx->pc == 0x1A6DACu) {
        ctx->pc = 0x1A6DACu;
            // 0x1a6dac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1A6DB0u;
        goto label_1a6db0;
    }
    ctx->pc = 0x1A6DA8u;
    {
        const bool branch_taken_0x1a6da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DA8u;
            // 0x1a6dac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6da8) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6DB0u;
label_1a6db0:
    // 0x1a6db0: 0x1000022a  b           . + 4 + (0x22A << 2)
label_1a6db4:
    if (ctx->pc == 0x1A6DB4u) {
        ctx->pc = 0x1A6DB4u;
            // 0x1a6db4: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6DB8u;
        goto label_1a6db8;
    }
    ctx->pc = 0x1A6DB0u;
    {
        const bool branch_taken_0x1a6db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DB0u;
            // 0x1a6db4: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6db0) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6DB8u;
label_1a6db8:
    // 0x1a6db8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a6db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6dbc:
    // 0x1a6dbc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a6dc0:
    // 0x1a6dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6dc4:
    // 0x1a6dc4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6dc8:
    // 0x1a6dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6dcc:
    // 0x1a6dcc: 0x24a55b90  addiu       $a1, $a1, 0x5B90
    ctx->pc = 0x1a6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
label_1a6dd0:
    // 0x1a6dd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6dd4:
    // 0x1a6dd4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a6dd8:
    // 0x1a6dd8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6ddc:
    // 0x1a6ddc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6de0:
    // 0x1a6de0: 0x320f809  jalr        $t9
label_1a6de4:
    if (ctx->pc == 0x1A6DE4u) {
        ctx->pc = 0x1A6DE4u;
            // 0x1a6de4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A6DE8u;
        goto label_1a6de8;
    }
    ctx->pc = 0x1A6DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6DE8u);
        ctx->pc = 0x1A6DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DE0u;
            // 0x1a6de4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6DE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DE8u; }
            if (ctx->pc != 0x1A6DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6DE8u;
label_1a6de8:
    // 0x1a6de8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a6dec:
    // 0x1a6dec: 0x1000021b  b           . + 4 + (0x21B << 2)
label_1a6df0:
    if (ctx->pc == 0x1A6DF0u) {
        ctx->pc = 0x1A6DF0u;
            // 0x1a6df0: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6DF4u;
        goto label_1a6df4;
    }
    ctx->pc = 0x1A6DECu;
    {
        const bool branch_taken_0x1a6dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DECu;
            // 0x1a6df0: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dec) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6DF4u;
label_1a6df4:
    // 0x1a6df4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6df8:
    // 0x1a6df8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6dfc:
    // 0x1a6dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e00:
    // 0x1a6e00: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0
    ctx->pc = 0x1a6e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
label_1a6e04:
    // 0x1a6e04: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6e08:
    // 0x1a6e08: 0x320f809  jalr        $t9
label_1a6e0c:
    if (ctx->pc == 0x1A6E0Cu) {
        ctx->pc = 0x1A6E0Cu;
            // 0x1a6e0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A6E10u;
        goto label_1a6e10;
    }
    ctx->pc = 0x1A6E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6E10u);
        ctx->pc = 0x1A6E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E08u;
            // 0x1a6e0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E10u; }
            if (ctx->pc != 0x1A6E10u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6E10u;
label_1a6e10:
    // 0x1a6e10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a6e14:
    // 0x1a6e14: 0x10000211  b           . + 4 + (0x211 << 2)
label_1a6e18:
    if (ctx->pc == 0x1A6E18u) {
        ctx->pc = 0x1A6E18u;
            // 0x1a6e18: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6E1Cu;
        goto label_1a6e1c;
    }
    ctx->pc = 0x1A6E14u;
    {
        const bool branch_taken_0x1a6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E14u;
            // 0x1a6e18: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e14) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6E1Cu;
label_1a6e1c:
    // 0x1a6e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e20:
    // 0x1a6e20: 0xc0bb548  jal         func_2ED520
label_1a6e24:
    if (ctx->pc == 0x1A6E24u) {
        ctx->pc = 0x1A6E24u;
            // 0x1a6e24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A6E28u;
        goto label_1a6e28;
    }
    ctx->pc = 0x1A6E20u;
    SET_GPR_U32(ctx, 31, 0x1A6E28u);
    ctx->pc = 0x1A6E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E20u;
            // 0x1a6e24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E28u; }
        if (ctx->pc != 0x1A6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E28u; }
        if (ctx->pc != 0x1A6E28u) { return; }
    }
    ctx->pc = 0x1A6E28u;
label_1a6e28:
    // 0x1a6e28: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1a6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_1a6e2c:
    // 0x1a6e2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a6e30:
    // 0x1a6e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6e34:
    // 0x1a6e34: 0x0  nop
    ctx->pc = 0x1a6e34u;
    // NOP
label_1a6e38:
    // 0x1a6e38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a6e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6e3c:
    // 0x1a6e3c: 0x0  nop
    ctx->pc = 0x1a6e3cu;
    // NOP
label_1a6e40:
    // 0x1a6e40: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1a6e44:
    if (ctx->pc == 0x1A6E44u) {
        ctx->pc = 0x1A6E44u;
            // 0x1a6e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E48u;
        goto label_1a6e48;
    }
    ctx->pc = 0x1A6E40u;
    {
        const bool branch_taken_0x1a6e40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E40u;
            // 0x1a6e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e40) {
            ctx->pc = 0x1A6EDCu;
            goto label_1a6edc;
        }
    }
    ctx->pc = 0x1A6E48u;
label_1a6e48:
    // 0x1a6e48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a6e4c:
    // 0x1a6e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e50:
    // 0x1a6e50: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a6e54:
    // 0x1a6e54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6e58:
    // 0x1a6e58: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x1a6e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_1a6e5c:
    // 0x1a6e5c: 0x320f809  jalr        $t9
label_1a6e60:
    if (ctx->pc == 0x1A6E60u) {
        ctx->pc = 0x1A6E60u;
            // 0x1a6e60: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A6E64u;
        goto label_1a6e64;
    }
    ctx->pc = 0x1A6E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6E64u);
        ctx->pc = 0x1A6E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E5Cu;
            // 0x1a6e60: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E64u; }
            if (ctx->pc != 0x1A6E64u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6E64u;
label_1a6e64:
    // 0x1a6e64: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6e68:
    // 0x1a6e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e6c:
    // 0x1a6e6c: 0xc04a38a  jal         func_128E28
label_1a6e70:
    if (ctx->pc == 0x1A6E70u) {
        ctx->pc = 0x1A6E70u;
            // 0x1a6e70: 0x24a55b90  addiu       $a1, $a1, 0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
        ctx->pc = 0x1A6E74u;
        goto label_1a6e74;
    }
    ctx->pc = 0x1A6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6E74u);
    ctx->pc = 0x1A6E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E6Cu;
            // 0x1a6e70: 0x24a55b90  addiu       $a1, $a1, 0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E74u; }
        if (ctx->pc != 0x1A6E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E74u; }
        if (ctx->pc != 0x1A6E74u) { return; }
    }
    ctx->pc = 0x1A6E74u;
label_1a6e74:
    // 0x1a6e74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a6e78:
    if (ctx->pc == 0x1A6E78u) {
        ctx->pc = 0x1A6E7Cu;
        goto label_1a6e7c;
    }
    ctx->pc = 0x1A6E74u;
    {
        const bool branch_taken_0x1a6e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e74) {
            ctx->pc = 0x1A6E80u;
            goto label_1a6e80;
        }
    }
    ctx->pc = 0x1A6E7Cu;
label_1a6e7c:
    // 0x1a6e7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e80:
    // 0x1a6e80: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6e84:
    // 0x1a6e84: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6e88:
    // 0x1a6e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e8c:
    // 0x1a6e8c: 0x24a55bb0  addiu       $a1, $a1, 0x5BB0
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23472));
label_1a6e90:
    // 0x1a6e90: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6e94:
    // 0x1a6e94: 0x320f809  jalr        $t9
label_1a6e98:
    if (ctx->pc == 0x1A6E98u) {
        ctx->pc = 0x1A6E98u;
            // 0x1a6e98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A6E9Cu;
        goto label_1a6e9c;
    }
    ctx->pc = 0x1A6E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6E9Cu);
        ctx->pc = 0x1A6E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E94u;
            // 0x1a6e98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E9Cu; }
            if (ctx->pc != 0x1A6E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A6E9Cu;
label_1a6e9c:
    // 0x1a6e9c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1a6ea0:
    if (ctx->pc == 0x1A6EA0u) {
        ctx->pc = 0x1A6EA0u;
            // 0x1a6ea0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1A6EA4u;
        goto label_1a6ea4;
    }
    ctx->pc = 0x1A6E9Cu;
    {
        const bool branch_taken_0x1a6e9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E9Cu;
            // 0x1a6ea0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e9c) {
            ctx->pc = 0x1A6EACu;
            goto label_1a6eac;
        }
    }
    ctx->pc = 0x1A6EA4u;
label_1a6ea4:
    // 0x1a6ea4: 0xae02050c  sw          $v0, 0x50C($s0)
    ctx->pc = 0x1a6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 2));
label_1a6ea8:
    // 0x1a6ea8: 0xae020508  sw          $v0, 0x508($s0)
    ctx->pc = 0x1a6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 2));
label_1a6eac:
    // 0x1a6eac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6eb0:
    // 0x1a6eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6eb4:
    // 0x1a6eb4: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a6eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a6eb8:
    // 0x1a6eb8: 0x320f809  jalr        $t9
label_1a6ebc:
    if (ctx->pc == 0x1A6EBCu) {
        ctx->pc = 0x1A6EBCu;
            // 0x1a6ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EC0u;
        goto label_1a6ec0;
    }
    ctx->pc = 0x1A6EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6EC0u);
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EB8u;
            // 0x1a6ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EC0u; }
            if (ctx->pc != 0x1A6EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6EC0u;
label_1a6ec0:
    // 0x1a6ec0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6ec4:
    // 0x1a6ec4: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a6ec8:
    // 0x1a6ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6ecc:
    // 0x1a6ecc: 0x0  nop
    ctx->pc = 0x1a6eccu;
    // NOP
label_1a6ed0:
    // 0x1a6ed0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6ed4:
    // 0x1a6ed4: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_1a6ed8:
    if (ctx->pc == 0x1A6ED8u) {
        ctx->pc = 0x1A6ED8u;
            // 0x1a6ed8: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->pc = 0x1A6EDCu;
        goto label_1a6edc;
    }
    ctx->pc = 0x1A6ED4u;
    {
        const bool branch_taken_0x1a6ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6ED4u;
            // 0x1a6ed8: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ed4) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6EDCu;
label_1a6edc:
    // 0x1a6edc: 0xc0bb548  jal         func_2ED520
label_1a6ee0:
    if (ctx->pc == 0x1A6EE0u) {
        ctx->pc = 0x1A6EE0u;
            // 0x1a6ee0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A6EE4u;
        goto label_1a6ee4;
    }
    ctx->pc = 0x1A6EDCu;
    SET_GPR_U32(ctx, 31, 0x1A6EE4u);
    ctx->pc = 0x1A6EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EDCu;
            // 0x1a6ee0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EE4u; }
        if (ctx->pc != 0x1A6EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6EE4u; }
        if (ctx->pc != 0x1A6EE4u) { return; }
    }
    ctx->pc = 0x1A6EE4u;
label_1a6ee4:
    // 0x1a6ee4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a6ee8:
    // 0x1a6ee8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a6eec:
    // 0x1a6eec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6ef0:
    // 0x1a6ef0: 0x0  nop
    ctx->pc = 0x1a6ef0u;
    // NOP
label_1a6ef4:
    // 0x1a6ef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a6ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6ef8:
    // 0x1a6ef8: 0x0  nop
    ctx->pc = 0x1a6ef8u;
    // NOP
label_1a6efc:
    // 0x1a6efc: 0x450101d7  bc1t        . + 4 + (0x1D7 << 2)
label_1a6f00:
    if (ctx->pc == 0x1A6F00u) {
        ctx->pc = 0x1A6F00u;
            // 0x1a6f00: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1A6F04u;
        goto label_1a6f04;
    }
    ctx->pc = 0x1A6EFCu;
    {
        const bool branch_taken_0x1a6efc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EFCu;
            // 0x1a6f00: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6efc) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6F04u;
label_1a6f04:
    // 0x1a6f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f08:
    // 0x1a6f08: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a6f0c:
    // 0x1a6f0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6f10:
    // 0x1a6f10: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x1a6f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_1a6f14:
    // 0x1a6f14: 0x320f809  jalr        $t9
label_1a6f18:
    if (ctx->pc == 0x1A6F18u) {
        ctx->pc = 0x1A6F18u;
            // 0x1a6f18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A6F1Cu;
        goto label_1a6f1c;
    }
    ctx->pc = 0x1A6F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F1Cu);
        ctx->pc = 0x1A6F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F14u;
            // 0x1a6f18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6F1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F1Cu; }
            if (ctx->pc != 0x1A6F1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A6F1Cu;
label_1a6f1c:
    // 0x1a6f1c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6f20:
    // 0x1a6f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f24:
    // 0x1a6f24: 0xc04a38a  jal         func_128E28
label_1a6f28:
    if (ctx->pc == 0x1A6F28u) {
        ctx->pc = 0x1A6F28u;
            // 0x1a6f28: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
        ctx->pc = 0x1A6F2Cu;
        goto label_1a6f2c;
    }
    ctx->pc = 0x1A6F24u;
    SET_GPR_U32(ctx, 31, 0x1A6F2Cu);
    ctx->pc = 0x1A6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F24u;
            // 0x1a6f28: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F2Cu; }
        if (ctx->pc != 0x1A6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F2Cu; }
        if (ctx->pc != 0x1A6F2Cu) { return; }
    }
    ctx->pc = 0x1A6F2Cu;
label_1a6f2c:
    // 0x1a6f2c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a6f30:
    if (ctx->pc == 0x1A6F30u) {
        ctx->pc = 0x1A6F34u;
        goto label_1a6f34;
    }
    ctx->pc = 0x1A6F2Cu;
    {
        const bool branch_taken_0x1a6f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f2c) {
            ctx->pc = 0x1A6F38u;
            goto label_1a6f38;
        }
    }
    ctx->pc = 0x1A6F34u;
label_1a6f34:
    // 0x1a6f34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f38:
    // 0x1a6f38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6f3c:
    // 0x1a6f3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a6f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a6f40:
    // 0x1a6f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f44:
    // 0x1a6f44: 0x24a55bb8  addiu       $a1, $a1, 0x5BB8
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23480));
label_1a6f48:
    // 0x1a6f48: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a6f4c:
    // 0x1a6f4c: 0x320f809  jalr        $t9
label_1a6f50:
    if (ctx->pc == 0x1A6F50u) {
        ctx->pc = 0x1A6F50u;
            // 0x1a6f50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A6F54u;
        goto label_1a6f54;
    }
    ctx->pc = 0x1A6F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F54u);
        ctx->pc = 0x1A6F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F4Cu;
            // 0x1a6f50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F54u; }
            if (ctx->pc != 0x1A6F54u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6F54u;
label_1a6f54:
    // 0x1a6f54: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1a6f58:
    if (ctx->pc == 0x1A6F58u) {
        ctx->pc = 0x1A6F58u;
            // 0x1a6f58: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1A6F5Cu;
        goto label_1a6f5c;
    }
    ctx->pc = 0x1A6F54u;
    {
        const bool branch_taken_0x1a6f54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F54u;
            // 0x1a6f58: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f54) {
            ctx->pc = 0x1A6F64u;
            goto label_1a6f64;
        }
    }
    ctx->pc = 0x1A6F5Cu;
label_1a6f5c:
    // 0x1a6f5c: 0xae02050c  sw          $v0, 0x50C($s0)
    ctx->pc = 0x1a6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 2));
label_1a6f60:
    // 0x1a6f60: 0xae020508  sw          $v0, 0x508($s0)
    ctx->pc = 0x1a6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 2));
label_1a6f64:
    // 0x1a6f64: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a6f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6f68:
    // 0x1a6f68: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a6f6c:
    // 0x1a6f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6f70:
    // 0x1a6f70: 0x0  nop
    ctx->pc = 0x1a6f70u;
    // NOP
label_1a6f74:
    // 0x1a6f74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6f78:
    // 0x1a6f78: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_1a6f7c:
    if (ctx->pc == 0x1A6F7Cu) {
        ctx->pc = 0x1A6F7Cu;
            // 0x1a6f7c: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->pc = 0x1A6F80u;
        goto label_1a6f80;
    }
    ctx->pc = 0x1A6F78u;
    {
        const bool branch_taken_0x1a6f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F78u;
            // 0x1a6f7c: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f78) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6F80u;
label_1a6f80:
    // 0x1a6f80: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6f84:
    // 0x1a6f84: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_1a6f88:
    // 0x1a6f88: 0x320f809  jalr        $t9
label_1a6f8c:
    if (ctx->pc == 0x1A6F8Cu) {
        ctx->pc = 0x1A6F8Cu;
            // 0x1a6f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F90u;
        goto label_1a6f90;
    }
    ctx->pc = 0x1A6F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F90u);
        ctx->pc = 0x1A6F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F88u;
            // 0x1a6f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F90u; }
            if (ctx->pc != 0x1A6F90u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6F90u;
label_1a6f90:
    // 0x1a6f90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6f94:
    // 0x1a6f94: 0x104301b1  beq         $v0, $v1, . + 4 + (0x1B1 << 2)
label_1a6f98:
    if (ctx->pc == 0x1A6F98u) {
        ctx->pc = 0x1A6F9Cu;
        goto label_1a6f9c;
    }
    ctx->pc = 0x1A6F94u;
    {
        const bool branch_taken_0x1a6f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a6f94) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A6F9Cu;
label_1a6f9c:
    // 0x1a6f9c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6fa0:
    // 0x1a6fa0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a6fa4:
    // 0x1a6fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6fa8:
    // 0x1a6fa8: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a6fac:
    // 0x1a6fac: 0x320f809  jalr        $t9
label_1a6fb0:
    if (ctx->pc == 0x1A6FB0u) {
        ctx->pc = 0x1A6FB0u;
            // 0x1a6fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FB4u;
        goto label_1a6fb4;
    }
    ctx->pc = 0x1A6FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6FB4u);
        ctx->pc = 0x1A6FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FACu;
            // 0x1a6fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6FB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FB4u; }
            if (ctx->pc != 0x1A6FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6FB4u;
label_1a6fb4:
    // 0x1a6fb4: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1a6fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1a6fb8:
    // 0x1a6fb8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_1a6fbc:
    // 0x1a6fbc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1a6fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6fc0:
    // 0x1a6fc0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a6fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1a6fc4:
    // 0x1a6fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6fc8:
    // 0x1a6fc8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a6fcc:
    // 0x1a6fcc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a6fd0:
    // 0x1a6fd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a6fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a6fd4:
    // 0x1a6fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6fd8:
    // 0x1a6fd8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a6fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a6fdc:
    // 0x1a6fdc: 0xc420b3f4  lwc1        $f0, -0x4C0C($at)
    ctx->pc = 0x1a6fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6fe0:
    // 0x1a6fe0: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x1a6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a6fe4:
    // 0x1a6fe4: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x1a6fe4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a6fe8:
    // 0x1a6fe8: 0xc0a248c  jal         func_289230
label_1a6fec:
    if (ctx->pc == 0x1A6FECu) {
        ctx->pc = 0x1A6FECu;
            // 0x1a6fec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x1A6FF0u;
        goto label_1a6ff0;
    }
    ctx->pc = 0x1A6FE8u;
    SET_GPR_U32(ctx, 31, 0x1A6FF0u);
    ctx->pc = 0x1A6FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FE8u;
            // 0x1a6fec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FF0u; }
        if (ctx->pc != 0x1A6FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FF0u; }
        if (ctx->pc != 0x1A6FF0u) { return; }
    }
    ctx->pc = 0x1A6FF0u;
label_1a6ff0:
    // 0x1a6ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6ff4:
    // 0x1a6ff4: 0x0  nop
    ctx->pc = 0x1a6ff4u;
    // NOP
label_1a6ff8:
    // 0x1a6ff8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a6ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a6ffc:
    // 0x1a6ffc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a6ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7000:
    // 0x1a7000: 0x0  nop
    ctx->pc = 0x1a7000u;
    // NOP
label_1a7004:
    // 0x1a7004: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1a7008:
    if (ctx->pc == 0x1A7008u) {
        ctx->pc = 0x1A7008u;
            // 0x1a7008: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1A700Cu;
        goto label_1a700c;
    }
    ctx->pc = 0x1A7004u;
    {
        const bool branch_taken_0x1a7004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7004u;
            // 0x1a7008: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7004) {
            ctx->pc = 0x1A7038u;
            goto label_1a7038;
        }
    }
    ctx->pc = 0x1A700Cu;
label_1a700c:
    // 0x1a700c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7010:
    // 0x1a7010: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a7010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a7014:
    // 0x1a7014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7018:
    // 0x1a7018: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a7018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a701c:
    // 0x1a701c: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
label_1a7020:
    // 0x1a7020: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7024:
    // 0x1a7024: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a7024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a7028:
    // 0x1a7028: 0x320f809  jalr        $t9
label_1a702c:
    if (ctx->pc == 0x1A702Cu) {
        ctx->pc = 0x1A702Cu;
            // 0x1a702c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A7030u;
        goto label_1a7030;
    }
    ctx->pc = 0x1A7028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7030u);
        ctx->pc = 0x1A702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7028u;
            // 0x1a702c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7030u; }
            if (ctx->pc != 0x1A7030u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7030u;
label_1a7030:
    // 0x1a7030: 0x1000018a  b           . + 4 + (0x18A << 2)
label_1a7034:
    if (ctx->pc == 0x1A7034u) {
        ctx->pc = 0x1A7038u;
        goto label_1a7038;
    }
    ctx->pc = 0x1A7030u;
    {
        const bool branch_taken_0x1a7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7030) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7038u;
label_1a7038:
    // 0x1a7038: 0xc7808bf8  lwc1        $f0, -0x7408($gp)
    ctx->pc = 0x1a7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a703c:
    // 0x1a703c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a703cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7040:
    // 0x1a7040: 0x0  nop
    ctx->pc = 0x1a7040u;
    // NOP
label_1a7044:
    // 0x1a7044: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_1a7048:
    if (ctx->pc == 0x1A7048u) {
        ctx->pc = 0x1A704Cu;
        goto label_1a704c;
    }
    ctx->pc = 0x1A7044u;
    {
        const bool branch_taken_0x1a7044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7044) {
            ctx->pc = 0x1A70E0u;
            goto label_1a70e0;
        }
    }
    ctx->pc = 0x1A704Cu;
label_1a704c:
    // 0x1a704c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a7050:
    // 0x1a7050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7054:
    // 0x1a7054: 0xc0bb548  jal         func_2ED520
label_1a7058:
    if (ctx->pc == 0x1A7058u) {
        ctx->pc = 0x1A7058u;
            // 0x1a7058: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A705Cu;
        goto label_1a705c;
    }
    ctx->pc = 0x1A7054u;
    SET_GPR_U32(ctx, 31, 0x1A705Cu);
    ctx->pc = 0x1A7058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7054u;
            // 0x1a7058: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A705Cu; }
        if (ctx->pc != 0x1A705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A705Cu; }
        if (ctx->pc != 0x1A705Cu) { return; }
    }
    ctx->pc = 0x1A705Cu;
label_1a705c:
    // 0x1a705c: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1a705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_1a7060:
    // 0x1a7060: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a7060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a7064:
    // 0x1a7064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7068:
    // 0x1a7068: 0x0  nop
    ctx->pc = 0x1a7068u;
    // NOP
label_1a706c:
    // 0x1a706c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a706cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7070:
    // 0x1a7070: 0x0  nop
    ctx->pc = 0x1a7070u;
    // NOP
label_1a7074:
    // 0x1a7074: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1a7078:
    if (ctx->pc == 0x1A7078u) {
        ctx->pc = 0x1A7078u;
            // 0x1a7078: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1A707Cu;
        goto label_1a707c;
    }
    ctx->pc = 0x1A7074u;
    {
        const bool branch_taken_0x1a7074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7074u;
            // 0x1a7078: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7074) {
            ctx->pc = 0x1A70B4u;
            goto label_1a70b4;
        }
    }
    ctx->pc = 0x1A707Cu;
label_1a707c:
    // 0x1a707c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a707cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7080:
    // 0x1a7080: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7084:
    // 0x1a7084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7088:
    // 0x1a7088: 0x24a55bb0  addiu       $a1, $a1, 0x5BB0
    ctx->pc = 0x1a7088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23472));
label_1a708c:
    // 0x1a708c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a708cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a7090:
    // 0x1a7090: 0x320f809  jalr        $t9
label_1a7094:
    if (ctx->pc == 0x1A7094u) {
        ctx->pc = 0x1A7094u;
            // 0x1a7094: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A7098u;
        goto label_1a7098;
    }
    ctx->pc = 0x1A7090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7098u);
        ctx->pc = 0x1A7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7090u;
            // 0x1a7094: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7098u; }
            if (ctx->pc != 0x1A7098u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7098u;
label_1a7098:
    // 0x1a7098: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a709c:
    // 0x1a709c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a70a0:
    // 0x1a70a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a70a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a70a4:
    // 0x1a70a4: 0x0  nop
    ctx->pc = 0x1a70a4u;
    // NOP
label_1a70a8:
    // 0x1a70a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a70a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a70ac:
    // 0x1a70ac: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a70b0:
    if (ctx->pc == 0x1A70B0u) {
        ctx->pc = 0x1A70B0u;
            // 0x1a70b0: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->pc = 0x1A70B4u;
        goto label_1a70b4;
    }
    ctx->pc = 0x1A70ACu;
    {
        const bool branch_taken_0x1a70ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70ACu;
            // 0x1a70b0: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70ac) {
            ctx->pc = 0x1A70E0u;
            goto label_1a70e0;
        }
    }
    ctx->pc = 0x1A70B4u;
label_1a70b4:
    // 0x1a70b4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a70b8:
    // 0x1a70b8: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a70b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a70bc:
    // 0x1a70bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a70c0:
    // 0x1a70c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a70c4:
    // 0x1a70c4: 0x24a55b90  addiu       $a1, $a1, 0x5B90
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
label_1a70c8:
    // 0x1a70c8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a70cc:
    // 0x1a70cc: 0x320f809  jalr        $t9
label_1a70d0:
    if (ctx->pc == 0x1A70D0u) {
        ctx->pc = 0x1A70D0u;
            // 0x1a70d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A70D4u;
        goto label_1a70d4;
    }
    ctx->pc = 0x1A70CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A70D4u);
        ctx->pc = 0x1A70D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70CCu;
            // 0x1a70d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A70D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A70D4u; }
            if (ctx->pc != 0x1A70D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A70D4u;
label_1a70d4:
    // 0x1a70d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a70d8:
    // 0x1a70d8: 0xae02050c  sw          $v0, 0x50C($s0)
    ctx->pc = 0x1a70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 2));
label_1a70dc:
    // 0x1a70dc: 0xae020508  sw          $v0, 0x508($s0)
    ctx->pc = 0x1a70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 2));
label_1a70e0:
    // 0x1a70e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a70e4:
    // 0x1a70e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a70e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a70e8:
    // 0x1a70e8: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a70ec:
    // 0x1a70ec: 0x320f809  jalr        $t9
label_1a70f0:
    if (ctx->pc == 0x1A70F0u) {
        ctx->pc = 0x1A70F0u;
            // 0x1a70f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A70F4u;
        goto label_1a70f4;
    }
    ctx->pc = 0x1A70ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A70F4u);
        ctx->pc = 0x1A70F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70ECu;
            // 0x1a70f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A70F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A70F4u; }
            if (ctx->pc != 0x1A70F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A70F4u;
label_1a70f4:
    // 0x1a70f4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a70f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a70f8:
    // 0x1a70f8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1a70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_1a70fc:
    // 0x1a70fc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1a70fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7100:
    // 0x1a7100: 0xc422b3e4  lwc1        $f2, -0x4C1C($at)
    ctx->pc = 0x1a7100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a7104:
    // 0x1a7104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7108:
    // 0x1a7108: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a710c:
    // 0x1a710c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a710cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7110:
    // 0x1a7110: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1a7110u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1a7114:
    // 0x1a7114: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a7114u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1a7118:
    // 0x1a7118: 0x0  nop
    ctx->pc = 0x1a7118u;
    // NOP
label_1a711c:
    // 0x1a711c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1a711cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a7120:
    // 0x1a7120: 0xc0a248c  jal         func_289230
label_1a7124:
    if (ctx->pc == 0x1A7124u) {
        ctx->pc = 0x1A7124u;
            // 0x1a7124: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1A7128u;
        goto label_1a7128;
    }
    ctx->pc = 0x1A7120u;
    SET_GPR_U32(ctx, 31, 0x1A7128u);
    ctx->pc = 0x1A7124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7120u;
            // 0x1a7124: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7128u; }
        if (ctx->pc != 0x1A7128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7128u; }
        if (ctx->pc != 0x1A7128u) { return; }
    }
    ctx->pc = 0x1A7128u;
label_1a7128:
    // 0x1a7128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a712c:
    // 0x1a712c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7130:
    // 0x1a7130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7134:
    // 0x1a7134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a7138:
    // 0x1a7138: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_1a713c:
    // 0x1a713c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1a713cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1a7140:
    // 0x1a7140: 0x320f809  jalr        $t9
label_1a7144:
    if (ctx->pc == 0x1A7144u) {
        ctx->pc = 0x1A7144u;
            // 0x1a7144: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1A7148u;
        goto label_1a7148;
    }
    ctx->pc = 0x1A7140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7148u);
        ctx->pc = 0x1A7144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7140u;
            // 0x1a7144: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7148u; }
            if (ctx->pc != 0x1A7148u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7148u;
label_1a7148:
    // 0x1a7148: 0xc7808c00  lwc1        $f0, -0x7400($gp)
    ctx->pc = 0x1a7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a714c:
    // 0x1a714c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1a7150:
    // 0x1a7150: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a7150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1a7154:
    // 0x1a7154: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7158:
    // 0x1a7158: 0x0  nop
    ctx->pc = 0x1a7158u;
    // NOP
label_1a715c:
    // 0x1a715c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a715cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7160:
    // 0x1a7160: 0x0  nop
    ctx->pc = 0x1a7160u;
    // NOP
label_1a7164:
    // 0x1a7164: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1a7168:
    if (ctx->pc == 0x1A7168u) {
        ctx->pc = 0x1A716Cu;
        goto label_1a716c;
    }
    ctx->pc = 0x1A7164u;
    {
        const bool branch_taken_0x1a7164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7164) {
            ctx->pc = 0x1A71B0u;
            goto label_1a71b0;
        }
    }
    ctx->pc = 0x1A716Cu;
label_1a716c:
    // 0x1a716c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a716cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7170:
    // 0x1a7170: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a7174:
    // 0x1a7174: 0x320f809  jalr        $t9
label_1a7178:
    if (ctx->pc == 0x1A7178u) {
        ctx->pc = 0x1A7178u;
            // 0x1a7178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A717Cu;
        goto label_1a717c;
    }
    ctx->pc = 0x1A7174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A717Cu);
        ctx->pc = 0x1A7178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7174u;
            // 0x1a7178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A717Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A717Cu; }
            if (ctx->pc != 0x1A717Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A717Cu;
label_1a717c:
    // 0x1a717c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1a717cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1a7180:
    // 0x1a7180: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a7180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1a7184:
    // 0x1a7184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7188:
    // 0x1a7188: 0x0  nop
    ctx->pc = 0x1a7188u;
    // NOP
label_1a718c:
    // 0x1a718c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a718cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7190:
    // 0x1a7190: 0x0  nop
    ctx->pc = 0x1a7190u;
    // NOP
label_1a7194:
    // 0x1a7194: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1a7198:
    if (ctx->pc == 0x1A7198u) {
        ctx->pc = 0x1A719Cu;
        goto label_1a719c;
    }
    ctx->pc = 0x1A7194u;
    {
        const bool branch_taken_0x1a7194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7194) {
            ctx->pc = 0x1A71B0u;
            goto label_1a71b0;
        }
    }
    ctx->pc = 0x1A719Cu;
label_1a719c:
    // 0x1a719c: 0x8f858c04  lw          $a1, -0x73FC($gp)
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
label_1a71a0:
    // 0x1a71a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a71a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a71a4:
    // 0x1a71a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a71a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a71a8:
    // 0x1a71a8: 0xc0aa038  jal         func_2A80E0
label_1a71ac:
    if (ctx->pc == 0x1A71ACu) {
        ctx->pc = 0x1A71ACu;
            // 0x1a71ac: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A71B0u;
        goto label_1a71b0;
    }
    ctx->pc = 0x1A71A8u;
    SET_GPR_U32(ctx, 31, 0x1A71B0u);
    ctx->pc = 0x1A71ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71A8u;
            // 0x1a71ac: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80E0u;
    if (runtime->hasFunction(0x2A80E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71B0u; }
        if (ctx->pc != 0x1A71B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayFoot__6CSceneFiiPf_0x2a80e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71B0u; }
        if (ctx->pc != 0x1A71B0u) { return; }
    }
    ctx->pc = 0x1A71B0u;
label_1a71b0:
    // 0x1a71b0: 0xc7808c00  lwc1        $f0, -0x7400($gp)
    ctx->pc = 0x1a71b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a71b4:
    // 0x1a71b4: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1a71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
label_1a71b8:
    // 0x1a71b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a71bc:
    // 0x1a71bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a71bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a71c0:
    // 0x1a71c0: 0x0  nop
    ctx->pc = 0x1a71c0u;
    // NOP
label_1a71c4:
    // 0x1a71c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a71c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a71c8:
    // 0x1a71c8: 0x0  nop
    ctx->pc = 0x1a71c8u;
    // NOP
label_1a71cc:
    // 0x1a71cc: 0x45000123  bc1f        . + 4 + (0x123 << 2)
label_1a71d0:
    if (ctx->pc == 0x1A71D0u) {
        ctx->pc = 0x1A71D4u;
        goto label_1a71d4;
    }
    ctx->pc = 0x1A71CCu;
    {
        const bool branch_taken_0x1a71cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71cc) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A71D4u;
label_1a71d4:
    // 0x1a71d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a71d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a71d8:
    // 0x1a71d8: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a71dc:
    // 0x1a71dc: 0x320f809  jalr        $t9
label_1a71e0:
    if (ctx->pc == 0x1A71E0u) {
        ctx->pc = 0x1A71E0u;
            // 0x1a71e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A71E4u;
        goto label_1a71e4;
    }
    ctx->pc = 0x1A71DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A71E4u);
        ctx->pc = 0x1A71E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71DCu;
            // 0x1a71e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A71E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A71E4u; }
            if (ctx->pc != 0x1A71E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A71E4u;
label_1a71e4:
    // 0x1a71e4: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1a71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
label_1a71e8:
    // 0x1a71e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a71e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a71ec:
    // 0x1a71ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a71ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a71f0:
    // 0x1a71f0: 0x0  nop
    ctx->pc = 0x1a71f0u;
    // NOP
label_1a71f4:
    // 0x1a71f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a71f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a71f8:
    // 0x1a71f8: 0x0  nop
    ctx->pc = 0x1a71f8u;
    // NOP
label_1a71fc:
    // 0x1a71fc: 0x45010117  bc1t        . + 4 + (0x117 << 2)
label_1a7200:
    if (ctx->pc == 0x1A7200u) {
        ctx->pc = 0x1A7204u;
        goto label_1a7204;
    }
    ctx->pc = 0x1A71FCu;
    {
        const bool branch_taken_0x1a71fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71fc) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7204u;
label_1a7204:
    // 0x1a7204: 0x8f858c04  lw          $a1, -0x73FC($gp)
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
label_1a7208:
    // 0x1a7208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a7208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a720c:
    // 0x1a720c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a720cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7210:
    // 0x1a7210: 0xc0aa038  jal         func_2A80E0
label_1a7214:
    if (ctx->pc == 0x1A7214u) {
        ctx->pc = 0x1A7214u;
            // 0x1a7214: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A7218u;
        goto label_1a7218;
    }
    ctx->pc = 0x1A7210u;
    SET_GPR_U32(ctx, 31, 0x1A7218u);
    ctx->pc = 0x1A7214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7210u;
            // 0x1a7214: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80E0u;
    if (runtime->hasFunction(0x2A80E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7218u; }
        if (ctx->pc != 0x1A7218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayFoot__6CSceneFiiPf_0x2a80e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7218u; }
        if (ctx->pc != 0x1A7218u) { return; }
    }
    ctx->pc = 0x1A7218u;
label_1a7218:
    // 0x1a7218: 0x10000110  b           . + 4 + (0x110 << 2)
label_1a721c:
    if (ctx->pc == 0x1A721Cu) {
        ctx->pc = 0x1A7220u;
        goto label_1a7220;
    }
    ctx->pc = 0x1A7218u;
    {
        const bool branch_taken_0x1a7218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7218) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7220u;
label_1a7220:
    // 0x1a7220: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7224:
    // 0x1a7224: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x1a7224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_1a7228:
    // 0x1a7228: 0x320f809  jalr        $t9
label_1a722c:
    if (ctx->pc == 0x1A722Cu) {
        ctx->pc = 0x1A722Cu;
            // 0x1a722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7230u;
        goto label_1a7230;
    }
    ctx->pc = 0x1A7228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7230u);
        ctx->pc = 0x1A722Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7228u;
            // 0x1a722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7230u; }
            if (ctx->pc != 0x1A7230u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7230u;
label_1a7230:
    // 0x1a7230: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a7230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a7234:
    // 0x1a7234: 0x10430109  beq         $v0, $v1, . + 4 + (0x109 << 2)
label_1a7238:
    if (ctx->pc == 0x1A7238u) {
        ctx->pc = 0x1A723Cu;
        goto label_1a723c;
    }
    ctx->pc = 0x1A7234u;
    {
        const bool branch_taken_0x1a7234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a7234) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A723Cu;
label_1a723c:
    // 0x1a723c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a723cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7240:
    // 0x1a7240: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a7240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a7244:
    // 0x1a7244: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7248:
    // 0x1a7248: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a7248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a724c:
    // 0x1a724c: 0x320f809  jalr        $t9
label_1a7250:
    if (ctx->pc == 0x1A7250u) {
        ctx->pc = 0x1A7250u;
            // 0x1a7250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7254u;
        goto label_1a7254;
    }
    ctx->pc = 0x1A724Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7254u);
        ctx->pc = 0x1A7250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A724Cu;
            // 0x1a7250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7254u; }
            if (ctx->pc != 0x1A7254u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7254u;
label_1a7254:
    // 0x1a7254: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1a7258:
    // 0x1a7258: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_1a725c:
    // 0x1a725c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1a725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7260:
    // 0x1a7260: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a7260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1a7264:
    // 0x1a7264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7268:
    // 0x1a7268: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a7268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a726c:
    // 0x1a726c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a7270:
    // 0x1a7270: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a7270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a7274:
    // 0x1a7274: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a7274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a7278:
    // 0x1a7278: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a7278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a727c:
    // 0x1a727c: 0xc421b3e4  lwc1        $f1, -0x4C1C($at)
    ctx->pc = 0x1a727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7280:
    // 0x1a7280: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1a7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a7284:
    // 0x1a7284: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1a7284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1a7288:
    // 0x1a7288: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a7288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a728c:
    // 0x1a728c: 0x0  nop
    ctx->pc = 0x1a728cu;
    // NOP
label_1a7290:
    // 0x1a7290: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1a7294:
    if (ctx->pc == 0x1A7294u) {
        ctx->pc = 0x1A7294u;
            // 0x1a7294: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1A7298u;
        goto label_1a7298;
    }
    ctx->pc = 0x1A7290u;
    {
        const bool branch_taken_0x1a7290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7290u;
            // 0x1a7294: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7290) {
            ctx->pc = 0x1A72C4u;
            goto label_1a72c4;
        }
    }
    ctx->pc = 0x1A7298u;
label_1a7298:
    // 0x1a7298: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a729c:
    // 0x1a729c: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a729cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a72a0:
    // 0x1a72a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a72a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a72a4:
    // 0x1a72a4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1a72a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a72a8:
    // 0x1a72a8: 0x24a55bd0  addiu       $a1, $a1, 0x5BD0
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23504));
label_1a72ac:
    // 0x1a72ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a72b0:
    // 0x1a72b0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a72b4:
    // 0x1a72b4: 0x320f809  jalr        $t9
label_1a72b8:
    if (ctx->pc == 0x1A72B8u) {
        ctx->pc = 0x1A72B8u;
            // 0x1a72b8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A72BCu;
        goto label_1a72bc;
    }
    ctx->pc = 0x1A72B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A72BCu);
        ctx->pc = 0x1A72B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72B4u;
            // 0x1a72b8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A72BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A72BCu; }
            if (ctx->pc != 0x1A72BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A72BCu;
label_1a72bc:
    // 0x1a72bc: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_1a72c0:
    if (ctx->pc == 0x1A72C0u) {
        ctx->pc = 0x1A72C4u;
        goto label_1a72c4;
    }
    ctx->pc = 0x1A72BCu;
    {
        const bool branch_taken_0x1a72bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a72bc) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A72C4u;
label_1a72c4:
    // 0x1a72c4: 0xc7808bf8  lwc1        $f0, -0x7408($gp)
    ctx->pc = 0x1a72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a72c8:
    // 0x1a72c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1a72c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a72cc:
    // 0x1a72cc: 0x0  nop
    ctx->pc = 0x1a72ccu;
    // NOP
label_1a72d0:
    // 0x1a72d0: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1a72d4:
    if (ctx->pc == 0x1A72D4u) {
        ctx->pc = 0x1A72D8u;
        goto label_1a72d8;
    }
    ctx->pc = 0x1A72D0u;
    {
        const bool branch_taken_0x1a72d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a72d0) {
            ctx->pc = 0x1A736Cu;
            goto label_1a736c;
        }
    }
    ctx->pc = 0x1A72D8u;
label_1a72d8:
    // 0x1a72d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a72d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a72dc:
    // 0x1a72dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a72dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a72e0:
    // 0x1a72e0: 0xc0bb548  jal         func_2ED520
label_1a72e4:
    if (ctx->pc == 0x1A72E4u) {
        ctx->pc = 0x1A72E4u;
            // 0x1a72e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A72E8u;
        goto label_1a72e8;
    }
    ctx->pc = 0x1A72E0u;
    SET_GPR_U32(ctx, 31, 0x1A72E8u);
    ctx->pc = 0x1A72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72E0u;
            // 0x1a72e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72E8u; }
        if (ctx->pc != 0x1A72E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72E8u; }
        if (ctx->pc != 0x1A72E8u) { return; }
    }
    ctx->pc = 0x1A72E8u;
label_1a72e8:
    // 0x1a72e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a72ec:
    // 0x1a72ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a72ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a72f0:
    // 0x1a72f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a72f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a72f4:
    // 0x1a72f4: 0x0  nop
    ctx->pc = 0x1a72f4u;
    // NOP
label_1a72f8:
    // 0x1a72f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a72f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a72fc:
    // 0x1a72fc: 0x0  nop
    ctx->pc = 0x1a72fcu;
    // NOP
label_1a7300:
    // 0x1a7300: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1a7304:
    if (ctx->pc == 0x1A7304u) {
        ctx->pc = 0x1A7304u;
            // 0x1a7304: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1A7308u;
        goto label_1a7308;
    }
    ctx->pc = 0x1A7300u;
    {
        const bool branch_taken_0x1a7300 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7300u;
            // 0x1a7304: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7300) {
            ctx->pc = 0x1A7340u;
            goto label_1a7340;
        }
    }
    ctx->pc = 0x1A7308u;
label_1a7308:
    // 0x1a7308: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a730c:
    // 0x1a730c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7310:
    // 0x1a7310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7314:
    // 0x1a7314: 0x24a55bb8  addiu       $a1, $a1, 0x5BB8
    ctx->pc = 0x1a7314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23480));
label_1a7318:
    // 0x1a7318: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a731c:
    // 0x1a731c: 0x320f809  jalr        $t9
label_1a7320:
    if (ctx->pc == 0x1A7320u) {
        ctx->pc = 0x1A7320u;
            // 0x1a7320: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A7324u;
        goto label_1a7324;
    }
    ctx->pc = 0x1A731Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7324u);
        ctx->pc = 0x1A7320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A731Cu;
            // 0x1a7320: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7324u; }
            if (ctx->pc != 0x1A7324u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7324u;
label_1a7324:
    // 0x1a7324: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1a7324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a7328:
    // 0x1a7328: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1a7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_1a732c:
    // 0x1a732c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a732cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a7330:
    // 0x1a7330: 0x0  nop
    ctx->pc = 0x1a7330u;
    // NOP
label_1a7334:
    // 0x1a7334: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a7334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a7338:
    // 0x1a7338: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a733c:
    if (ctx->pc == 0x1A733Cu) {
        ctx->pc = 0x1A733Cu;
            // 0x1a733c: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->pc = 0x1A7340u;
        goto label_1a7340;
    }
    ctx->pc = 0x1A7338u;
    {
        const bool branch_taken_0x1a7338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7338u;
            // 0x1a733c: 0xe7808bf8  swc1        $f0, -0x7408($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7338) {
            ctx->pc = 0x1A736Cu;
            goto label_1a736c;
        }
    }
    ctx->pc = 0x1A7340u;
label_1a7340:
    // 0x1a7340: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7344:
    // 0x1a7344: 0xaf828b9c  sw          $v0, -0x7464($gp)
    ctx->pc = 0x1a7344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
label_1a7348:
    // 0x1a7348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a734c:
    // 0x1a734c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a734cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7350:
    // 0x1a7350: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0
    ctx->pc = 0x1a7350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
label_1a7354:
    // 0x1a7354: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a7358:
    // 0x1a7358: 0x320f809  jalr        $t9
label_1a735c:
    if (ctx->pc == 0x1A735Cu) {
        ctx->pc = 0x1A735Cu;
            // 0x1a735c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7360u;
        goto label_1a7360;
    }
    ctx->pc = 0x1A7358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7360u);
        ctx->pc = 0x1A735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7358u;
            // 0x1a735c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7360u; }
            if (ctx->pc != 0x1A7360u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7360u;
label_1a7360:
    // 0x1a7360: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a7364:
    // 0x1a7364: 0xae02050c  sw          $v0, 0x50C($s0)
    ctx->pc = 0x1a7364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 2));
label_1a7368:
    // 0x1a7368: 0xae020508  sw          $v0, 0x508($s0)
    ctx->pc = 0x1a7368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 2));
label_1a736c:
    // 0x1a736c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7370:
    // 0x1a7370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a7374:
    // 0x1a7374: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a7378:
    // 0x1a7378: 0x320f809  jalr        $t9
label_1a737c:
    if (ctx->pc == 0x1A737Cu) {
        ctx->pc = 0x1A737Cu;
            // 0x1a737c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7380u;
        goto label_1a7380;
    }
    ctx->pc = 0x1A7378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7380u);
        ctx->pc = 0x1A737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7378u;
            // 0x1a737c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7380u; }
            if (ctx->pc != 0x1A7380u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7380u;
label_1a7380:
    // 0x1a7380: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a7384:
    // 0x1a7384: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_1a7388:
    // 0x1a7388: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1a7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a738c:
    // 0x1a738c: 0xc423b3f4  lwc1        $f3, -0x4C0C($at)
    ctx->pc = 0x1a738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a7390:
    // 0x1a7390: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7394:
    // 0x1a7394: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a7398:
    // 0x1a7398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a739c:
    // 0x1a739c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1a739cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1a73a0:
    // 0x1a73a0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a73a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1a73a4:
    // 0x1a73a4: 0x0  nop
    ctx->pc = 0x1a73a4u;
    // NOP
label_1a73a8:
    // 0x1a73a8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1a73a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a73ac:
    // 0x1a73ac: 0xc0a248c  jal         func_289230
label_1a73b0:
    if (ctx->pc == 0x1A73B0u) {
        ctx->pc = 0x1A73B0u;
            // 0x1a73b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1A73B4u;
        goto label_1a73b4;
    }
    ctx->pc = 0x1A73ACu;
    SET_GPR_U32(ctx, 31, 0x1A73B4u);
    ctx->pc = 0x1A73B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73ACu;
            // 0x1a73b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73B4u; }
        if (ctx->pc != 0x1A73B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73B4u; }
        if (ctx->pc != 0x1A73B4u) { return; }
    }
    ctx->pc = 0x1A73B4u;
label_1a73b4:
    // 0x1a73b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a73b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a73b8:
    // 0x1a73b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a73b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a73bc:
    // 0x1a73bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a73bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a73c0:
    // 0x1a73c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a73c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a73c4:
    // 0x1a73c4: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x1a73c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_1a73c8:
    // 0x1a73c8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1a73c8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1a73cc:
    // 0x1a73cc: 0x320f809  jalr        $t9
label_1a73d0:
    if (ctx->pc == 0x1A73D0u) {
        ctx->pc = 0x1A73D0u;
            // 0x1a73d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1A73D4u;
        goto label_1a73d4;
    }
    ctx->pc = 0x1A73CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A73D4u);
        ctx->pc = 0x1A73D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73CCu;
            // 0x1a73d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A73D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A73D4u; }
            if (ctx->pc != 0x1A73D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A73D4u;
label_1a73d4:
    // 0x1a73d4: 0xc7808c00  lwc1        $f0, -0x7400($gp)
    ctx->pc = 0x1a73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a73d8:
    // 0x1a73d8: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x1a73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
label_1a73dc:
    // 0x1a73dc: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x1a73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
label_1a73e0:
    // 0x1a73e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a73e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a73e4:
    // 0x1a73e4: 0x0  nop
    ctx->pc = 0x1a73e4u;
    // NOP
label_1a73e8:
    // 0x1a73e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a73e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a73ec:
    // 0x1a73ec: 0x0  nop
    ctx->pc = 0x1a73ecu;
    // NOP
label_1a73f0:
    // 0x1a73f0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1a73f4:
    if (ctx->pc == 0x1A73F4u) {
        ctx->pc = 0x1A73F8u;
        goto label_1a73f8;
    }
    ctx->pc = 0x1A73F0u;
    {
        const bool branch_taken_0x1a73f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a73f0) {
            ctx->pc = 0x1A743Cu;
            goto label_1a743c;
        }
    }
    ctx->pc = 0x1A73F8u;
label_1a73f8:
    // 0x1a73f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a73f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a73fc:
    // 0x1a73fc: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a73fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a7400:
    // 0x1a7400: 0x320f809  jalr        $t9
label_1a7404:
    if (ctx->pc == 0x1A7404u) {
        ctx->pc = 0x1A7404u;
            // 0x1a7404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7408u;
        goto label_1a7408;
    }
    ctx->pc = 0x1A7400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7408u);
        ctx->pc = 0x1A7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7400u;
            // 0x1a7404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7408u; }
            if (ctx->pc != 0x1A7408u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7408u;
label_1a7408:
    // 0x1a7408: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x1a7408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
label_1a740c:
    // 0x1a740c: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x1a740cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
label_1a7410:
    // 0x1a7410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7414:
    // 0x1a7414: 0x0  nop
    ctx->pc = 0x1a7414u;
    // NOP
label_1a7418:
    // 0x1a7418: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a7418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a741c:
    // 0x1a741c: 0x0  nop
    ctx->pc = 0x1a741cu;
    // NOP
label_1a7420:
    // 0x1a7420: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1a7424:
    if (ctx->pc == 0x1A7424u) {
        ctx->pc = 0x1A7428u;
        goto label_1a7428;
    }
    ctx->pc = 0x1A7420u;
    {
        const bool branch_taken_0x1a7420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7420) {
            ctx->pc = 0x1A743Cu;
            goto label_1a743c;
        }
    }
    ctx->pc = 0x1A7428u;
label_1a7428:
    // 0x1a7428: 0x8f858c04  lw          $a1, -0x73FC($gp)
    ctx->pc = 0x1a7428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
label_1a742c:
    // 0x1a742c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a7430:
    // 0x1a7430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7434:
    // 0x1a7434: 0xc0aa038  jal         func_2A80E0
label_1a7438:
    if (ctx->pc == 0x1A7438u) {
        ctx->pc = 0x1A7438u;
            // 0x1a7438: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A743Cu;
        goto label_1a743c;
    }
    ctx->pc = 0x1A7434u;
    SET_GPR_U32(ctx, 31, 0x1A743Cu);
    ctx->pc = 0x1A7438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7434u;
            // 0x1a7438: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80E0u;
    if (runtime->hasFunction(0x2A80E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A743Cu; }
        if (ctx->pc != 0x1A743Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayFoot__6CSceneFiiPf_0x2a80e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A743Cu; }
        if (ctx->pc != 0x1A743Cu) { return; }
    }
    ctx->pc = 0x1A743Cu;
label_1a743c:
    // 0x1a743c: 0xc7808c00  lwc1        $f0, -0x7400($gp)
    ctx->pc = 0x1a743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a7440:
    // 0x1a7440: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
label_1a7444:
    // 0x1a7444: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a7444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a7448:
    // 0x1a7448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a744c:
    // 0x1a744c: 0x0  nop
    ctx->pc = 0x1a744cu;
    // NOP
label_1a7450:
    // 0x1a7450: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a7450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7454:
    // 0x1a7454: 0x0  nop
    ctx->pc = 0x1a7454u;
    // NOP
label_1a7458:
    // 0x1a7458: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_1a745c:
    if (ctx->pc == 0x1A745Cu) {
        ctx->pc = 0x1A7460u;
        goto label_1a7460;
    }
    ctx->pc = 0x1A7458u;
    {
        const bool branch_taken_0x1a7458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7458) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7460u;
label_1a7460:
    // 0x1a7460: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7464:
    // 0x1a7464: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a7464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a7468:
    // 0x1a7468: 0x320f809  jalr        $t9
label_1a746c:
    if (ctx->pc == 0x1A746Cu) {
        ctx->pc = 0x1A746Cu;
            // 0x1a746c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7470u;
        goto label_1a7470;
    }
    ctx->pc = 0x1A7468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7470u);
        ctx->pc = 0x1A746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7468u;
            // 0x1a746c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7470u; }
            if (ctx->pc != 0x1A7470u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7470u;
label_1a7470:
    // 0x1a7470: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
label_1a7474:
    // 0x1a7474: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a7474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a7478:
    // 0x1a7478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a747c:
    // 0x1a747c: 0x0  nop
    ctx->pc = 0x1a747cu;
    // NOP
label_1a7480:
    // 0x1a7480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a7480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7484:
    // 0x1a7484: 0x0  nop
    ctx->pc = 0x1a7484u;
    // NOP
label_1a7488:
    // 0x1a7488: 0x45010074  bc1t        . + 4 + (0x74 << 2)
label_1a748c:
    if (ctx->pc == 0x1A748Cu) {
        ctx->pc = 0x1A7490u;
        goto label_1a7490;
    }
    ctx->pc = 0x1A7488u;
    {
        const bool branch_taken_0x1a7488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7488) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7490u;
label_1a7490:
    // 0x1a7490: 0x8f858c04  lw          $a1, -0x73FC($gp)
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
label_1a7494:
    // 0x1a7494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a7494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a7498:
    // 0x1a7498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a749c:
    // 0x1a749c: 0xc0aa038  jal         func_2A80E0
label_1a74a0:
    if (ctx->pc == 0x1A74A0u) {
        ctx->pc = 0x1A74A0u;
            // 0x1a74a0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A74A4u;
        goto label_1a74a4;
    }
    ctx->pc = 0x1A749Cu;
    SET_GPR_U32(ctx, 31, 0x1A74A4u);
    ctx->pc = 0x1A74A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A749Cu;
            // 0x1a74a0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A80E0u;
    if (runtime->hasFunction(0x2A80E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A80E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74A4u; }
        if (ctx->pc != 0x1A74A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlayFoot__6CSceneFiiPf_0x2a80e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A74A4u; }
        if (ctx->pc != 0x1A74A4u) { return; }
    }
    ctx->pc = 0x1A74A4u;
label_1a74a4:
    // 0x1a74a4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1a74a8:
    if (ctx->pc == 0x1A74A8u) {
        ctx->pc = 0x1A74ACu;
        goto label_1a74ac;
    }
    ctx->pc = 0x1A74A4u;
    {
        const bool branch_taken_0x1a74a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74a4) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A74ACu;
label_1a74ac:
    // 0x1a74ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a74acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a74b0:
    // 0x1a74b0: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a74b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a74b4:
    // 0x1a74b4: 0x320f809  jalr        $t9
label_1a74b8:
    if (ctx->pc == 0x1A74B8u) {
        ctx->pc = 0x1A74B8u;
            // 0x1a74b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A74BCu;
        goto label_1a74bc;
    }
    ctx->pc = 0x1A74B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A74BCu);
        ctx->pc = 0x1A74B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74B4u;
            // 0x1a74b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A74BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A74BCu; }
            if (ctx->pc != 0x1A74BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A74BCu;
label_1a74bc:
    // 0x1a74bc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1a74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_1a74c0:
    // 0x1a74c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a74c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a74c4:
    // 0x1a74c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a74c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a74c8:
    // 0x1a74c8: 0x0  nop
    ctx->pc = 0x1a74c8u;
    // NOP
label_1a74cc:
    // 0x1a74cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a74ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a74d0:
    // 0x1a74d0: 0x0  nop
    ctx->pc = 0x1a74d0u;
    // NOP
label_1a74d4:
    // 0x1a74d4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1a74d8:
    if (ctx->pc == 0x1A74D8u) {
        ctx->pc = 0x1A74DCu;
        goto label_1a74dc;
    }
    ctx->pc = 0x1A74D4u;
    {
        const bool branch_taken_0x1a74d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a74d4) {
            ctx->pc = 0x1A74E4u;
            goto label_1a74e4;
        }
    }
    ctx->pc = 0x1A74DCu;
label_1a74dc:
    // 0x1a74dc: 0x8f828c08  lw          $v0, -0x73F8($gp)
    ctx->pc = 0x1a74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937608)));
label_1a74e0:
    // 0x1a74e0: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x1a74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
label_1a74e4:
    // 0x1a74e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a74e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a74e8:
    // 0x1a74e8: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a74e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a74ec:
    // 0x1a74ec: 0x320f809  jalr        $t9
label_1a74f0:
    if (ctx->pc == 0x1A74F0u) {
        ctx->pc = 0x1A74F0u;
            // 0x1a74f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A74F4u;
        goto label_1a74f4;
    }
    ctx->pc = 0x1A74ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A74F4u);
        ctx->pc = 0x1A74F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74ECu;
            // 0x1a74f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A74F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A74F4u; }
            if (ctx->pc != 0x1A74F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A74F4u;
label_1a74f4:
    // 0x1a74f4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_1a74f8:
    if (ctx->pc == 0x1A74F8u) {
        ctx->pc = 0x1A74F8u;
            // 0x1a74f8: 0x3c0301ea  lui         $v1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A74FCu;
        goto label_1a74fc;
    }
    ctx->pc = 0x1A74F4u;
    {
        const bool branch_taken_0x1a74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74F4u;
            // 0x1a74f8: 0x3c0301ea  lui         $v1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74f4) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A74FCu;
label_1a74fc:
    // 0x1a74fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7500:
    // 0x1a7500: 0x2463b3e0  addiu       $v1, $v1, -0x4C20
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947808));
label_1a7504:
    // 0x1a7504: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1a7504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a7508:
    // 0x1a7508: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a7508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a750c:
    // 0x1a750c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a750cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7510:
    // 0x1a7510: 0x24a55af8  addiu       $a1, $a1, 0x5AF8
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23288));
label_1a7514:
    // 0x1a7514: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a7514u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1a7518:
    // 0x1a7518: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a751c:
    // 0x1a751c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a751cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a7520:
    // 0x1a7520: 0x320f809  jalr        $t9
label_1a7524:
    if (ctx->pc == 0x1A7524u) {
        ctx->pc = 0x1A7524u;
            // 0x1a7524: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A7528u;
        goto label_1a7528;
    }
    ctx->pc = 0x1A7520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7528u);
        ctx->pc = 0x1A7524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7520u;
            // 0x1a7524: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7528u; }
            if (ctx->pc != 0x1A7528u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7528u;
label_1a7528:
    // 0x1a7528: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a752c:
    // 0x1a752c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1a7530:
    if (ctx->pc == 0x1A7530u) {
        ctx->pc = 0x1A7530u;
            // 0x1a7530: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A7534u;
        goto label_1a7534;
    }
    ctx->pc = 0x1A752Cu;
    {
        const bool branch_taken_0x1a752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A752Cu;
            // 0x1a7530: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a752c) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7534u;
label_1a7534:
    // 0x1a7534: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7538:
    // 0x1a7538: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a7538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a753c:
    // 0x1a753c: 0x320f809  jalr        $t9
label_1a7540:
    if (ctx->pc == 0x1A7540u) {
        ctx->pc = 0x1A7540u;
            // 0x1a7540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7544u;
        goto label_1a7544;
    }
    ctx->pc = 0x1A753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7544u);
        ctx->pc = 0x1A7540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A753Cu;
            // 0x1a7540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7544u; }
            if (ctx->pc != 0x1A7544u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7544u;
label_1a7544:
    // 0x1a7544: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1a7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1a7548:
    // 0x1a7548: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a7548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1a754c:
    // 0x1a754c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a754cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7550:
    // 0x1a7550: 0x0  nop
    ctx->pc = 0x1a7550u;
    // NOP
label_1a7554:
    // 0x1a7554: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a7554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7558:
    // 0x1a7558: 0x0  nop
    ctx->pc = 0x1a7558u;
    // NOP
label_1a755c:
    // 0x1a755c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1a7560:
    if (ctx->pc == 0x1A7560u) {
        ctx->pc = 0x1A7564u;
        goto label_1a7564;
    }
    ctx->pc = 0x1A755Cu;
    {
        const bool branch_taken_0x1a755c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a755c) {
            ctx->pc = 0x1A756Cu;
            goto label_1a756c;
        }
    }
    ctx->pc = 0x1A7564u;
label_1a7564:
    // 0x1a7564: 0x8f828c0c  lw          $v0, -0x73F4($gp)
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937612)));
label_1a7568:
    // 0x1a7568: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x1a7568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
label_1a756c:
    // 0x1a756c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a756cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7570:
    // 0x1a7570: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a7574:
    // 0x1a7574: 0x320f809  jalr        $t9
label_1a7578:
    if (ctx->pc == 0x1A7578u) {
        ctx->pc = 0x1A7578u;
            // 0x1a7578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A757Cu;
        goto label_1a757c;
    }
    ctx->pc = 0x1A7574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A757Cu);
        ctx->pc = 0x1A7578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7574u;
            // 0x1a7578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A757Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A757Cu; }
            if (ctx->pc != 0x1A757Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A757Cu;
label_1a757c:
    // 0x1a757c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1a7580:
    if (ctx->pc == 0x1A7580u) {
        ctx->pc = 0x1A7580u;
            // 0x1a7580: 0x3c0301ea  lui         $v1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A7584u;
        goto label_1a7584;
    }
    ctx->pc = 0x1A757Cu;
    {
        const bool branch_taken_0x1a757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A757Cu;
            // 0x1a7580: 0x3c0301ea  lui         $v1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a757c) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7584u;
label_1a7584:
    // 0x1a7584: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7588:
    // 0x1a7588: 0x2463b3f0  addiu       $v1, $v1, -0x4C10
    ctx->pc = 0x1a7588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947824));
label_1a758c:
    // 0x1a758c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a7590:
    // 0x1a7590: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a7590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a7594:
    // 0x1a7594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7598:
    // 0x1a7598: 0x24a55af8  addiu       $a1, $a1, 0x5AF8
    ctx->pc = 0x1a7598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23288));
label_1a759c:
    // 0x1a759c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a759cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1a75a0:
    // 0x1a75a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a75a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a75a4:
    // 0x1a75a4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a75a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a75a8:
    // 0x1a75a8: 0x320f809  jalr        $t9
label_1a75ac:
    if (ctx->pc == 0x1A75ACu) {
        ctx->pc = 0x1A75ACu;
            // 0x1a75ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A75B0u;
        goto label_1a75b0;
    }
    ctx->pc = 0x1A75A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A75B0u);
        ctx->pc = 0x1A75ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75A8u;
            // 0x1a75ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A75B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A75B0u; }
            if (ctx->pc != 0x1A75B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A75B0u;
label_1a75b0:
    // 0x1a75b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a75b4:
    // 0x1a75b4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a75b8:
    if (ctx->pc == 0x1A75B8u) {
        ctx->pc = 0x1A75B8u;
            // 0x1a75b8: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A75BCu;
        goto label_1a75bc;
    }
    ctx->pc = 0x1A75B4u;
    {
        const bool branch_taken_0x1a75b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75B4u;
            // 0x1a75b8: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75b4) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A75BCu;
label_1a75bc:
    // 0x1a75bc: 0x8f838c0c  lw          $v1, -0x73F4($gp)
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937612)));
label_1a75c0:
    // 0x1a75c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a75c4:
    // 0x1a75c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a75c8:
    // 0x1a75c8: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1a75c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1a75cc:
    // 0x1a75cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a75ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a75d0:
    // 0x1a75d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a75d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a75d4:
    // 0x1a75d4: 0x24c6b400  addiu       $a2, $a2, -0x4C00
    ctx->pc = 0x1a75d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947840));
label_1a75d8:
    // 0x1a75d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a75d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a75dc:
    // 0x1a75dc: 0xc04c294  jal         func_130A50
label_1a75e0:
    if (ctx->pc == 0x1A75E0u) {
        ctx->pc = 0x1A75E0u;
            // 0x1a75e0: 0xae030580  sw          $v1, 0x580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 3));
        ctx->pc = 0x1A75E4u;
        goto label_1a75e4;
    }
    ctx->pc = 0x1A75DCu;
    SET_GPR_U32(ctx, 31, 0x1A75E4u);
    ctx->pc = 0x1A75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75DCu;
            // 0x1a75e0: 0xae030580  sw          $v1, 0x580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A50u;
    if (runtime->hasFunction(0x130A50u)) {
        auto targetFn = runtime->lookupFunction(0x130A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75E4u; }
        if (ctx->pc != 0x1A75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorInterpolate__FPfPfPffi_0x130a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75E4u; }
        if (ctx->pc != 0x1A75E4u) { return; }
    }
    ctx->pc = 0x1A75E4u;
label_1a75e4:
    // 0x1a75e4: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1a75e8:
    // 0x1a75e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a75ec:
    // 0x1a75ec: 0xc04c018  jal         func_130060
label_1a75f0:
    if (ctx->pc == 0x1A75F0u) {
        ctx->pc = 0x1A75F0u;
            // 0x1a75f0: 0x24a5b400  addiu       $a1, $a1, -0x4C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947840));
        ctx->pc = 0x1A75F4u;
        goto label_1a75f4;
    }
    ctx->pc = 0x1A75ECu;
    SET_GPR_U32(ctx, 31, 0x1A75F4u);
    ctx->pc = 0x1A75F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75ECu;
            // 0x1a75f0: 0x24a5b400  addiu       $a1, $a1, -0x4C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75F4u; }
        if (ctx->pc != 0x1A75F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75F4u; }
        if (ctx->pc != 0x1A75F4u) { return; }
    }
    ctx->pc = 0x1A75F4u;
label_1a75f4:
    // 0x1a75f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a75f8:
    // 0x1a75f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a75f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a75fc:
    // 0x1a75fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a75fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a7600:
    // 0x1a7600: 0x0  nop
    ctx->pc = 0x1a7600u;
    // NOP
label_1a7604:
    // 0x1a7604: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a7604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a7608:
    // 0x1a7608: 0x0  nop
    ctx->pc = 0x1a7608u;
    // NOP
label_1a760c:
    // 0x1a760c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a7610:
    if (ctx->pc == 0x1A7610u) {
        ctx->pc = 0x1A7610u;
            // 0x1a7610: 0x3c0201ea  lui         $v0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A7614u;
        goto label_1a7614;
    }
    ctx->pc = 0x1A760Cu;
    {
        const bool branch_taken_0x1a760c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A760Cu;
            // 0x1a7610: 0x3c0201ea  lui         $v0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a760c) {
            ctx->pc = 0x1A7630u;
            goto label_1a7630;
        }
    }
    ctx->pc = 0x1A7614u;
label_1a7614:
    // 0x1a7614: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1a7614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a7618:
    // 0x1a7618: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x1a7618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
label_1a761c:
    // 0x1a761c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1a761cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7620:
    // 0x1a7620: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a7624:
    // 0x1a7624: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1a7624u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1a7628:
    // 0x1a7628: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a762c:
    if (ctx->pc == 0x1A762Cu) {
        ctx->pc = 0x1A762Cu;
            // 0x1a762c: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->pc = 0x1A7630u;
        goto label_1a7630;
    }
    ctx->pc = 0x1A7628u;
    {
        const bool branch_taken_0x1a7628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7628u;
            // 0x1a762c: 0xaf828b9c  sw          $v0, -0x7464($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7628) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7630u;
label_1a7630:
    // 0x1a7630: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7634:
    // 0x1a7634: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7638:
    // 0x1a7638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a763c:
    // 0x1a763c: 0x24a55b58  addiu       $a1, $a1, 0x5B58
    ctx->pc = 0x1a763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
label_1a7640:
    // 0x1a7640: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a7640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a7644:
    // 0x1a7644: 0x320f809  jalr        $t9
label_1a7648:
    if (ctx->pc == 0x1A7648u) {
        ctx->pc = 0x1A7648u;
            // 0x1a7648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A764Cu;
        goto label_1a764c;
    }
    ctx->pc = 0x1A7644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A764Cu);
        ctx->pc = 0x1A7648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7644u;
            // 0x1a7648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A764Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A764Cu; }
            if (ctx->pc != 0x1A764Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A764Cu;
label_1a764c:
    // 0x1a764c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a7650:
    if (ctx->pc == 0x1A7650u) {
        ctx->pc = 0x1A7654u;
        goto label_1a7654;
    }
    ctx->pc = 0x1A764Cu;
    {
        const bool branch_taken_0x1a764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a764c) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A7654u;
label_1a7654:
    // 0x1a7654: 0xc069aac  jal         func_1A6AB0
label_1a7658:
    if (ctx->pc == 0x1A7658u) {
        ctx->pc = 0x1A765Cu;
        goto label_1a765c;
    }
    ctx->pc = 0x1A7654u;
    SET_GPR_U32(ctx, 31, 0x1A765Cu);
    ctx->pc = 0x1A6AB0u;
    if (runtime->hasFunction(0x1A6AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A765Cu; }
        if (ctx->pc != 0x1A765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndLadder__Fv_0x1a6ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A765Cu; }
        if (ctx->pc != 0x1A765Cu) { return; }
    }
    ctx->pc = 0x1A765Cu;
label_1a765c:
    // 0x1a765c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7660:
    // 0x1a7660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7664:
    // 0x1a7664: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1a7664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1a7668:
    // 0x1a7668: 0x320f809  jalr        $t9
label_1a766c:
    if (ctx->pc == 0x1A766Cu) {
        ctx->pc = 0x1A766Cu;
            // 0x1a766c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A7670u;
        goto label_1a7670;
    }
    ctx->pc = 0x1A7668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7670u);
        ctx->pc = 0x1A766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7668u;
            // 0x1a766c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7670u; }
            if (ctx->pc != 0x1A7670u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7670u;
label_1a7670:
    // 0x1a7670: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7674:
    // 0x1a7674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7678:
    // 0x1a7678: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a7678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a767c:
    // 0x1a767c: 0x320f809  jalr        $t9
label_1a7680:
    if (ctx->pc == 0x1A7680u) {
        ctx->pc = 0x1A7680u;
            // 0x1a7680: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A7684u;
        goto label_1a7684;
    }
    ctx->pc = 0x1A767Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7684u);
        ctx->pc = 0x1A7680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A767Cu;
            // 0x1a7680: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7684u; }
            if (ctx->pc != 0x1A7684u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7684u;
label_1a7684:
    // 0x1a7684: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7688:
    // 0x1a7688: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a7688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a768c:
    // 0x1a768c: 0x320f809  jalr        $t9
label_1a7690:
    if (ctx->pc == 0x1A7690u) {
        ctx->pc = 0x1A7690u;
            // 0x1a7690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7694u;
        goto label_1a7694;
    }
    ctx->pc = 0x1A768Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7694u);
        ctx->pc = 0x1A7690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A768Cu;
            // 0x1a7690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7694u; }
            if (ctx->pc != 0x1A7694u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7694u;
label_1a7694:
    // 0x1a7694: 0xe7808c00  swc1        $f0, -0x7400($gp)
    ctx->pc = 0x1a7694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937600), bits); }
label_1a7698:
    // 0x1a7698: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a7698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a769c:
    // 0x1a769c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a76a0:
    // 0x1a76a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a76a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a76a4:
    // 0x1a76a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a76a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a76a8:
    // 0x1a76a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a76a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a76ac:
    // 0x1a76ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a76acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a76b0:
    // 0x1a76b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a76b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a76b4:
    // 0x1a76b4: 0x3e00008  jr          $ra
label_1a76b8:
    if (ctx->pc == 0x1A76B8u) {
        ctx->pc = 0x1A76B8u;
            // 0x1a76b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1A76BCu;
        goto label_fallthrough_0x1a76b4;
    }
    ctx->pc = 0x1A76B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A76B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76B4u;
            // 0x1a76b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a76b4:
    ctx->pc = 0x1A76BCu;
}
