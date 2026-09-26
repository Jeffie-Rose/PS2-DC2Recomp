#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckWallEditParts__8CEditMapFP14CEditPartsInfoPfiiP13EP_PLACE_INFO
// Address: 0x1b3b00 - 0x1b4090
void CheckWallEditParts__8CEditMapFP14CEditPartsInfoPfiiP13EP_PLACE_INFO_0x1b3b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckWallEditParts__8CEditMapFP14CEditPartsInfoPfiiP13EP_PLACE_INFO_0x1b3b00");
#endif

    switch (ctx->pc) {
        case 0x1b3b00u: goto label_1b3b00;
        case 0x1b3b04u: goto label_1b3b04;
        case 0x1b3b08u: goto label_1b3b08;
        case 0x1b3b0cu: goto label_1b3b0c;
        case 0x1b3b10u: goto label_1b3b10;
        case 0x1b3b14u: goto label_1b3b14;
        case 0x1b3b18u: goto label_1b3b18;
        case 0x1b3b1cu: goto label_1b3b1c;
        case 0x1b3b20u: goto label_1b3b20;
        case 0x1b3b24u: goto label_1b3b24;
        case 0x1b3b28u: goto label_1b3b28;
        case 0x1b3b2cu: goto label_1b3b2c;
        case 0x1b3b30u: goto label_1b3b30;
        case 0x1b3b34u: goto label_1b3b34;
        case 0x1b3b38u: goto label_1b3b38;
        case 0x1b3b3cu: goto label_1b3b3c;
        case 0x1b3b40u: goto label_1b3b40;
        case 0x1b3b44u: goto label_1b3b44;
        case 0x1b3b48u: goto label_1b3b48;
        case 0x1b3b4cu: goto label_1b3b4c;
        case 0x1b3b50u: goto label_1b3b50;
        case 0x1b3b54u: goto label_1b3b54;
        case 0x1b3b58u: goto label_1b3b58;
        case 0x1b3b5cu: goto label_1b3b5c;
        case 0x1b3b60u: goto label_1b3b60;
        case 0x1b3b64u: goto label_1b3b64;
        case 0x1b3b68u: goto label_1b3b68;
        case 0x1b3b6cu: goto label_1b3b6c;
        case 0x1b3b70u: goto label_1b3b70;
        case 0x1b3b74u: goto label_1b3b74;
        case 0x1b3b78u: goto label_1b3b78;
        case 0x1b3b7cu: goto label_1b3b7c;
        case 0x1b3b80u: goto label_1b3b80;
        case 0x1b3b84u: goto label_1b3b84;
        case 0x1b3b88u: goto label_1b3b88;
        case 0x1b3b8cu: goto label_1b3b8c;
        case 0x1b3b90u: goto label_1b3b90;
        case 0x1b3b94u: goto label_1b3b94;
        case 0x1b3b98u: goto label_1b3b98;
        case 0x1b3b9cu: goto label_1b3b9c;
        case 0x1b3ba0u: goto label_1b3ba0;
        case 0x1b3ba4u: goto label_1b3ba4;
        case 0x1b3ba8u: goto label_1b3ba8;
        case 0x1b3bacu: goto label_1b3bac;
        case 0x1b3bb0u: goto label_1b3bb0;
        case 0x1b3bb4u: goto label_1b3bb4;
        case 0x1b3bb8u: goto label_1b3bb8;
        case 0x1b3bbcu: goto label_1b3bbc;
        case 0x1b3bc0u: goto label_1b3bc0;
        case 0x1b3bc4u: goto label_1b3bc4;
        case 0x1b3bc8u: goto label_1b3bc8;
        case 0x1b3bccu: goto label_1b3bcc;
        case 0x1b3bd0u: goto label_1b3bd0;
        case 0x1b3bd4u: goto label_1b3bd4;
        case 0x1b3bd8u: goto label_1b3bd8;
        case 0x1b3bdcu: goto label_1b3bdc;
        case 0x1b3be0u: goto label_1b3be0;
        case 0x1b3be4u: goto label_1b3be4;
        case 0x1b3be8u: goto label_1b3be8;
        case 0x1b3becu: goto label_1b3bec;
        case 0x1b3bf0u: goto label_1b3bf0;
        case 0x1b3bf4u: goto label_1b3bf4;
        case 0x1b3bf8u: goto label_1b3bf8;
        case 0x1b3bfcu: goto label_1b3bfc;
        case 0x1b3c00u: goto label_1b3c00;
        case 0x1b3c04u: goto label_1b3c04;
        case 0x1b3c08u: goto label_1b3c08;
        case 0x1b3c0cu: goto label_1b3c0c;
        case 0x1b3c10u: goto label_1b3c10;
        case 0x1b3c14u: goto label_1b3c14;
        case 0x1b3c18u: goto label_1b3c18;
        case 0x1b3c1cu: goto label_1b3c1c;
        case 0x1b3c20u: goto label_1b3c20;
        case 0x1b3c24u: goto label_1b3c24;
        case 0x1b3c28u: goto label_1b3c28;
        case 0x1b3c2cu: goto label_1b3c2c;
        case 0x1b3c30u: goto label_1b3c30;
        case 0x1b3c34u: goto label_1b3c34;
        case 0x1b3c38u: goto label_1b3c38;
        case 0x1b3c3cu: goto label_1b3c3c;
        case 0x1b3c40u: goto label_1b3c40;
        case 0x1b3c44u: goto label_1b3c44;
        case 0x1b3c48u: goto label_1b3c48;
        case 0x1b3c4cu: goto label_1b3c4c;
        case 0x1b3c50u: goto label_1b3c50;
        case 0x1b3c54u: goto label_1b3c54;
        case 0x1b3c58u: goto label_1b3c58;
        case 0x1b3c5cu: goto label_1b3c5c;
        case 0x1b3c60u: goto label_1b3c60;
        case 0x1b3c64u: goto label_1b3c64;
        case 0x1b3c68u: goto label_1b3c68;
        case 0x1b3c6cu: goto label_1b3c6c;
        case 0x1b3c70u: goto label_1b3c70;
        case 0x1b3c74u: goto label_1b3c74;
        case 0x1b3c78u: goto label_1b3c78;
        case 0x1b3c7cu: goto label_1b3c7c;
        case 0x1b3c80u: goto label_1b3c80;
        case 0x1b3c84u: goto label_1b3c84;
        case 0x1b3c88u: goto label_1b3c88;
        case 0x1b3c8cu: goto label_1b3c8c;
        case 0x1b3c90u: goto label_1b3c90;
        case 0x1b3c94u: goto label_1b3c94;
        case 0x1b3c98u: goto label_1b3c98;
        case 0x1b3c9cu: goto label_1b3c9c;
        case 0x1b3ca0u: goto label_1b3ca0;
        case 0x1b3ca4u: goto label_1b3ca4;
        case 0x1b3ca8u: goto label_1b3ca8;
        case 0x1b3cacu: goto label_1b3cac;
        case 0x1b3cb0u: goto label_1b3cb0;
        case 0x1b3cb4u: goto label_1b3cb4;
        case 0x1b3cb8u: goto label_1b3cb8;
        case 0x1b3cbcu: goto label_1b3cbc;
        case 0x1b3cc0u: goto label_1b3cc0;
        case 0x1b3cc4u: goto label_1b3cc4;
        case 0x1b3cc8u: goto label_1b3cc8;
        case 0x1b3cccu: goto label_1b3ccc;
        case 0x1b3cd0u: goto label_1b3cd0;
        case 0x1b3cd4u: goto label_1b3cd4;
        case 0x1b3cd8u: goto label_1b3cd8;
        case 0x1b3cdcu: goto label_1b3cdc;
        case 0x1b3ce0u: goto label_1b3ce0;
        case 0x1b3ce4u: goto label_1b3ce4;
        case 0x1b3ce8u: goto label_1b3ce8;
        case 0x1b3cecu: goto label_1b3cec;
        case 0x1b3cf0u: goto label_1b3cf0;
        case 0x1b3cf4u: goto label_1b3cf4;
        case 0x1b3cf8u: goto label_1b3cf8;
        case 0x1b3cfcu: goto label_1b3cfc;
        case 0x1b3d00u: goto label_1b3d00;
        case 0x1b3d04u: goto label_1b3d04;
        case 0x1b3d08u: goto label_1b3d08;
        case 0x1b3d0cu: goto label_1b3d0c;
        case 0x1b3d10u: goto label_1b3d10;
        case 0x1b3d14u: goto label_1b3d14;
        case 0x1b3d18u: goto label_1b3d18;
        case 0x1b3d1cu: goto label_1b3d1c;
        case 0x1b3d20u: goto label_1b3d20;
        case 0x1b3d24u: goto label_1b3d24;
        case 0x1b3d28u: goto label_1b3d28;
        case 0x1b3d2cu: goto label_1b3d2c;
        case 0x1b3d30u: goto label_1b3d30;
        case 0x1b3d34u: goto label_1b3d34;
        case 0x1b3d38u: goto label_1b3d38;
        case 0x1b3d3cu: goto label_1b3d3c;
        case 0x1b3d40u: goto label_1b3d40;
        case 0x1b3d44u: goto label_1b3d44;
        case 0x1b3d48u: goto label_1b3d48;
        case 0x1b3d4cu: goto label_1b3d4c;
        case 0x1b3d50u: goto label_1b3d50;
        case 0x1b3d54u: goto label_1b3d54;
        case 0x1b3d58u: goto label_1b3d58;
        case 0x1b3d5cu: goto label_1b3d5c;
        case 0x1b3d60u: goto label_1b3d60;
        case 0x1b3d64u: goto label_1b3d64;
        case 0x1b3d68u: goto label_1b3d68;
        case 0x1b3d6cu: goto label_1b3d6c;
        case 0x1b3d70u: goto label_1b3d70;
        case 0x1b3d74u: goto label_1b3d74;
        case 0x1b3d78u: goto label_1b3d78;
        case 0x1b3d7cu: goto label_1b3d7c;
        case 0x1b3d80u: goto label_1b3d80;
        case 0x1b3d84u: goto label_1b3d84;
        case 0x1b3d88u: goto label_1b3d88;
        case 0x1b3d8cu: goto label_1b3d8c;
        case 0x1b3d90u: goto label_1b3d90;
        case 0x1b3d94u: goto label_1b3d94;
        case 0x1b3d98u: goto label_1b3d98;
        case 0x1b3d9cu: goto label_1b3d9c;
        case 0x1b3da0u: goto label_1b3da0;
        case 0x1b3da4u: goto label_1b3da4;
        case 0x1b3da8u: goto label_1b3da8;
        case 0x1b3dacu: goto label_1b3dac;
        case 0x1b3db0u: goto label_1b3db0;
        case 0x1b3db4u: goto label_1b3db4;
        case 0x1b3db8u: goto label_1b3db8;
        case 0x1b3dbcu: goto label_1b3dbc;
        case 0x1b3dc0u: goto label_1b3dc0;
        case 0x1b3dc4u: goto label_1b3dc4;
        case 0x1b3dc8u: goto label_1b3dc8;
        case 0x1b3dccu: goto label_1b3dcc;
        case 0x1b3dd0u: goto label_1b3dd0;
        case 0x1b3dd4u: goto label_1b3dd4;
        case 0x1b3dd8u: goto label_1b3dd8;
        case 0x1b3ddcu: goto label_1b3ddc;
        case 0x1b3de0u: goto label_1b3de0;
        case 0x1b3de4u: goto label_1b3de4;
        case 0x1b3de8u: goto label_1b3de8;
        case 0x1b3decu: goto label_1b3dec;
        case 0x1b3df0u: goto label_1b3df0;
        case 0x1b3df4u: goto label_1b3df4;
        case 0x1b3df8u: goto label_1b3df8;
        case 0x1b3dfcu: goto label_1b3dfc;
        case 0x1b3e00u: goto label_1b3e00;
        case 0x1b3e04u: goto label_1b3e04;
        case 0x1b3e08u: goto label_1b3e08;
        case 0x1b3e0cu: goto label_1b3e0c;
        case 0x1b3e10u: goto label_1b3e10;
        case 0x1b3e14u: goto label_1b3e14;
        case 0x1b3e18u: goto label_1b3e18;
        case 0x1b3e1cu: goto label_1b3e1c;
        case 0x1b3e20u: goto label_1b3e20;
        case 0x1b3e24u: goto label_1b3e24;
        case 0x1b3e28u: goto label_1b3e28;
        case 0x1b3e2cu: goto label_1b3e2c;
        case 0x1b3e30u: goto label_1b3e30;
        case 0x1b3e34u: goto label_1b3e34;
        case 0x1b3e38u: goto label_1b3e38;
        case 0x1b3e3cu: goto label_1b3e3c;
        case 0x1b3e40u: goto label_1b3e40;
        case 0x1b3e44u: goto label_1b3e44;
        case 0x1b3e48u: goto label_1b3e48;
        case 0x1b3e4cu: goto label_1b3e4c;
        case 0x1b3e50u: goto label_1b3e50;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3e58u: goto label_1b3e58;
        case 0x1b3e5cu: goto label_1b3e5c;
        case 0x1b3e60u: goto label_1b3e60;
        case 0x1b3e64u: goto label_1b3e64;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e6cu: goto label_1b3e6c;
        case 0x1b3e70u: goto label_1b3e70;
        case 0x1b3e74u: goto label_1b3e74;
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e7cu: goto label_1b3e7c;
        case 0x1b3e80u: goto label_1b3e80;
        case 0x1b3e84u: goto label_1b3e84;
        case 0x1b3e88u: goto label_1b3e88;
        case 0x1b3e8cu: goto label_1b3e8c;
        case 0x1b3e90u: goto label_1b3e90;
        case 0x1b3e94u: goto label_1b3e94;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3e9cu: goto label_1b3e9c;
        case 0x1b3ea0u: goto label_1b3ea0;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3ea8u: goto label_1b3ea8;
        case 0x1b3eacu: goto label_1b3eac;
        case 0x1b3eb0u: goto label_1b3eb0;
        case 0x1b3eb4u: goto label_1b3eb4;
        case 0x1b3eb8u: goto label_1b3eb8;
        case 0x1b3ebcu: goto label_1b3ebc;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ec4u: goto label_1b3ec4;
        case 0x1b3ec8u: goto label_1b3ec8;
        case 0x1b3eccu: goto label_1b3ecc;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ed8u: goto label_1b3ed8;
        case 0x1b3edcu: goto label_1b3edc;
        case 0x1b3ee0u: goto label_1b3ee0;
        case 0x1b3ee4u: goto label_1b3ee4;
        case 0x1b3ee8u: goto label_1b3ee8;
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3ef0u: goto label_1b3ef0;
        case 0x1b3ef4u: goto label_1b3ef4;
        case 0x1b3ef8u: goto label_1b3ef8;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f00u: goto label_1b3f00;
        case 0x1b3f04u: goto label_1b3f04;
        case 0x1b3f08u: goto label_1b3f08;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f10u: goto label_1b3f10;
        case 0x1b3f14u: goto label_1b3f14;
        case 0x1b3f18u: goto label_1b3f18;
        case 0x1b3f1cu: goto label_1b3f1c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f24u: goto label_1b3f24;
        case 0x1b3f28u: goto label_1b3f28;
        case 0x1b3f2cu: goto label_1b3f2c;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f34u: goto label_1b3f34;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f3cu: goto label_1b3f3c;
        case 0x1b3f40u: goto label_1b3f40;
        case 0x1b3f44u: goto label_1b3f44;
        case 0x1b3f48u: goto label_1b3f48;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f50u: goto label_1b3f50;
        case 0x1b3f54u: goto label_1b3f54;
        case 0x1b3f58u: goto label_1b3f58;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f60u: goto label_1b3f60;
        case 0x1b3f64u: goto label_1b3f64;
        case 0x1b3f68u: goto label_1b3f68;
        case 0x1b3f6cu: goto label_1b3f6c;
        case 0x1b3f70u: goto label_1b3f70;
        case 0x1b3f74u: goto label_1b3f74;
        case 0x1b3f78u: goto label_1b3f78;
        case 0x1b3f7cu: goto label_1b3f7c;
        case 0x1b3f80u: goto label_1b3f80;
        case 0x1b3f84u: goto label_1b3f84;
        case 0x1b3f88u: goto label_1b3f88;
        case 0x1b3f8cu: goto label_1b3f8c;
        case 0x1b3f90u: goto label_1b3f90;
        case 0x1b3f94u: goto label_1b3f94;
        case 0x1b3f98u: goto label_1b3f98;
        case 0x1b3f9cu: goto label_1b3f9c;
        case 0x1b3fa0u: goto label_1b3fa0;
        case 0x1b3fa4u: goto label_1b3fa4;
        case 0x1b3fa8u: goto label_1b3fa8;
        case 0x1b3facu: goto label_1b3fac;
        case 0x1b3fb0u: goto label_1b3fb0;
        case 0x1b3fb4u: goto label_1b3fb4;
        case 0x1b3fb8u: goto label_1b3fb8;
        case 0x1b3fbcu: goto label_1b3fbc;
        case 0x1b3fc0u: goto label_1b3fc0;
        case 0x1b3fc4u: goto label_1b3fc4;
        case 0x1b3fc8u: goto label_1b3fc8;
        case 0x1b3fccu: goto label_1b3fcc;
        case 0x1b3fd0u: goto label_1b3fd0;
        case 0x1b3fd4u: goto label_1b3fd4;
        case 0x1b3fd8u: goto label_1b3fd8;
        case 0x1b3fdcu: goto label_1b3fdc;
        case 0x1b3fe0u: goto label_1b3fe0;
        case 0x1b3fe4u: goto label_1b3fe4;
        case 0x1b3fe8u: goto label_1b3fe8;
        case 0x1b3fecu: goto label_1b3fec;
        case 0x1b3ff0u: goto label_1b3ff0;
        case 0x1b3ff4u: goto label_1b3ff4;
        case 0x1b3ff8u: goto label_1b3ff8;
        case 0x1b3ffcu: goto label_1b3ffc;
        case 0x1b4000u: goto label_1b4000;
        case 0x1b4004u: goto label_1b4004;
        case 0x1b4008u: goto label_1b4008;
        case 0x1b400cu: goto label_1b400c;
        case 0x1b4010u: goto label_1b4010;
        case 0x1b4014u: goto label_1b4014;
        case 0x1b4018u: goto label_1b4018;
        case 0x1b401cu: goto label_1b401c;
        case 0x1b4020u: goto label_1b4020;
        case 0x1b4024u: goto label_1b4024;
        case 0x1b4028u: goto label_1b4028;
        case 0x1b402cu: goto label_1b402c;
        case 0x1b4030u: goto label_1b4030;
        case 0x1b4034u: goto label_1b4034;
        case 0x1b4038u: goto label_1b4038;
        case 0x1b403cu: goto label_1b403c;
        case 0x1b4040u: goto label_1b4040;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4048u: goto label_1b4048;
        case 0x1b404cu: goto label_1b404c;
        case 0x1b4050u: goto label_1b4050;
        case 0x1b4054u: goto label_1b4054;
        case 0x1b4058u: goto label_1b4058;
        case 0x1b405cu: goto label_1b405c;
        case 0x1b4060u: goto label_1b4060;
        case 0x1b4064u: goto label_1b4064;
        case 0x1b4068u: goto label_1b4068;
        case 0x1b406cu: goto label_1b406c;
        case 0x1b4070u: goto label_1b4070;
        case 0x1b4074u: goto label_1b4074;
        case 0x1b4078u: goto label_1b4078;
        case 0x1b407cu: goto label_1b407c;
        case 0x1b4080u: goto label_1b4080;
        case 0x1b4084u: goto label_1b4084;
        case 0x1b4088u: goto label_1b4088;
        case 0x1b408cu: goto label_1b408c;
        default: break;
    }

    ctx->pc = 0x1b3b00u;

label_1b3b00:
    // 0x1b3b00: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1b3b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_1b3b04:
    // 0x1b3b04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b3b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1b3b08:
    // 0x1b3b08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1b3b0c:
    // 0x1b3b0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b3b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1b3b10:
    // 0x1b3b10: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1b3b10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b14:
    // 0x1b3b14: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b3b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1b3b18:
    // 0x1b3b18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b3b1c:
    // 0x1b3b1c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1b3b1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b20:
    // 0x1b3b20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b3b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b3b24:
    // 0x1b3b24: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b3b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b3b28:
    // 0x1b3b28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b3b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b2c:
    // 0x1b3b2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b3b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b3b30:
    // 0x1b3b30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b3b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b3b34:
    // 0x1b3b34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b3b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b38:
    // 0x1b3b38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b3b3c:
    // 0x1b3b3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b3b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b40:
    // 0x1b3b40: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b3b40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b3b44:
    // 0x1b3b44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b3b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b48:
    // 0x1b3b48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1b3b4c:
    if (ctx->pc == 0x1B3B4Cu) {
        ctx->pc = 0x1B3B4Cu;
            // 0x1b3b4c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1B3B50u;
        goto label_1b3b50;
    }
    ctx->pc = 0x1B3B48u;
    {
        const bool branch_taken_0x1b3b48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B48u;
            // 0x1b3b4c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b48) {
            ctx->pc = 0x1B3B58u;
            goto label_1b3b58;
        }
    }
    ctx->pc = 0x1B3B50u;
label_1b3b50:
    // 0x1b3b50: 0x10000141  b           . + 4 + (0x141 << 2)
label_1b3b54:
    if (ctx->pc == 0x1B3B54u) {
        ctx->pc = 0x1B3B54u;
            // 0x1b3b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B58u;
        goto label_1b3b58;
    }
    ctx->pc = 0x1B3B50u;
    {
        const bool branch_taken_0x1b3b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B50u;
            // 0x1b3b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b50) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B3B58u;
label_1b3b58:
    // 0x1b3b58: 0xc06c310  jal         func_1B0C40
label_1b3b5c:
    if (ctx->pc == 0x1B3B5Cu) {
        ctx->pc = 0x1B3B5Cu;
            // 0x1b3b5c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B60u;
        goto label_1b3b60;
    }
    ctx->pc = 0x1B3B58u;
    SET_GPR_U32(ctx, 31, 0x1B3B60u);
    ctx->pc = 0x1B3B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B58u;
            // 0x1b3b5c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B60u; }
        if (ctx->pc != 0x1B3B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B60u; }
        if (ctx->pc != 0x1B3B60u) { return; }
    }
    ctx->pc = 0x1B3B60u;
label_1b3b60:
    // 0x1b3b60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b3b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b64:
    // 0x1b3b64: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_1b3b68:
    if (ctx->pc == 0x1B3B68u) {
        ctx->pc = 0x1B3B68u;
            // 0x1b3b68: 0x8c570324  lw          $s7, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->pc = 0x1B3B6Cu;
        goto label_1b3b6c;
    }
    ctx->pc = 0x1B3B64u;
    {
        const bool branch_taken_0x1b3b64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B64u;
            // 0x1b3b68: 0x8c570324  lw          $s7, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b64) {
            ctx->pc = 0x1B3B8Cu;
            goto label_1b3b8c;
        }
    }
    ctx->pc = 0x1B3B6Cu;
label_1b3b6c:
    // 0x1b3b6c: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_1b3b70:
    if (ctx->pc == 0x1B3B70u) {
        ctx->pc = 0x1B3B70u;
            // 0x1b3b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B74u;
        goto label_1b3b74;
    }
    ctx->pc = 0x1B3B6Cu;
    {
        const bool branch_taken_0x1b3b6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B6Cu;
            // 0x1b3b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b6c) {
            ctx->pc = 0x1B3B90u;
            goto label_1b3b90;
        }
    }
    ctx->pc = 0x1B3B74u;
label_1b3b74:
    // 0x1b3b74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b3b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b78:
    // 0x1b3b78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b7c:
    // 0x1b3b7c: 0xc06d6f4  jal         func_1B5BD0
label_1b3b80:
    if (ctx->pc == 0x1B3B80u) {
        ctx->pc = 0x1B3B80u;
            // 0x1b3b80: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B3B84u;
        goto label_1b3b84;
    }
    ctx->pc = 0x1B3B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3B84u);
    ctx->pc = 0x1B3B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B7Cu;
            // 0x1b3b80: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5BD0u;
    if (runtime->hasFunction(0x1B5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B84u; }
        if (ctx->pc != 0x1B3B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWallPlane__10CEditPartsFiPQ210CEditParts8WallInfo_0x1b5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B84u; }
        if (ctx->pc != 0x1B3B84u) { return; }
    }
    ctx->pc = 0x1B3B84u;
label_1b3b84:
    // 0x1b3b84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b3b88:
    if (ctx->pc == 0x1B3B88u) {
        ctx->pc = 0x1B3B88u;
            // 0x1b3b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B8Cu;
        goto label_1b3b8c;
    }
    ctx->pc = 0x1B3B84u;
    {
        const bool branch_taken_0x1b3b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B84u;
            // 0x1b3b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b84) {
            ctx->pc = 0x1B3B98u;
            goto label_1b3b98;
        }
    }
    ctx->pc = 0x1B3B8Cu;
label_1b3b8c:
    // 0x1b3b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b90:
    // 0x1b3b90: 0x10000132  b           . + 4 + (0x132 << 2)
label_1b3b94:
    if (ctx->pc == 0x1B3B94u) {
        ctx->pc = 0x1B3B94u;
            // 0x1b3b94: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x1B3B98u;
        goto label_1b3b98;
    }
    ctx->pc = 0x1B3B90u;
    {
        const bool branch_taken_0x1b3b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B90u;
            // 0x1b3b94: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b90) {
            ctx->pc = 0x1B405Cu;
            goto label_1b405c;
        }
    }
    ctx->pc = 0x1B3B98u;
label_1b3b98:
    // 0x1b3b98: 0xc059cc0  jal         func_167300
label_1b3b9c:
    if (ctx->pc == 0x1B3B9Cu) {
        ctx->pc = 0x1B3B9Cu;
            // 0x1b3b9c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1B3BA0u;
        goto label_1b3ba0;
    }
    ctx->pc = 0x1B3B98u;
    SET_GPR_U32(ctx, 31, 0x1B3BA0u);
    ctx->pc = 0x1B3B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B98u;
            // 0x1b3b9c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BA0u; }
        if (ctx->pc != 0x1B3BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BA0u; }
        if (ctx->pc != 0x1B3BA0u) { return; }
    }
    ctx->pc = 0x1B3BA0u;
label_1b3ba0:
    // 0x1b3ba0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b3ba4:
    // 0x1b3ba4: 0x27b30160  addiu       $s3, $sp, 0x160
    ctx->pc = 0x1b3ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1b3ba8:
    // 0x1b3ba8: 0x244269c0  addiu       $v0, $v0, 0x69C0
    ctx->pc = 0x1b3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27072));
label_1b3bac:
    // 0x1b3bac: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1b3bb0:
    // 0x1b3bb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b3bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3bb4:
    // 0x1b3bb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3bb8:
    // 0x1b3bb8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b3bbc:
    // 0x1b3bbc: 0xc041be0  jal         func_106F80
label_1b3bc0:
    if (ctx->pc == 0x1B3BC0u) {
        ctx->pc = 0x1B3BC0u;
            // 0x1b3bc0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1B3BC4u;
        goto label_1b3bc4;
    }
    ctx->pc = 0x1B3BBCu;
    SET_GPR_U32(ctx, 31, 0x1B3BC4u);
    ctx->pc = 0x1B3BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BBCu;
            // 0x1b3bc0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC4u; }
        if (ctx->pc != 0x1B3BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC4u; }
        if (ctx->pc != 0x1B3BC4u) { return; }
    }
    ctx->pc = 0x1B3BC4u;
label_1b3bc4:
    // 0x1b3bc4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1b3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b3bc8:
    // 0x1b3bc8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1b3bcc:
    // 0x1b3bcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b3bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3bd0:
    // 0x1b3bd0: 0xc041bce  jal         func_106F38
label_1b3bd4:
    if (ctx->pc == 0x1B3BD4u) {
        ctx->pc = 0x1B3BD4u;
            // 0x1b3bd4: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3BD8u;
        goto label_1b3bd8;
    }
    ctx->pc = 0x1B3BD0u;
    SET_GPR_U32(ctx, 31, 0x1B3BD8u);
    ctx->pc = 0x1B3BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BD0u;
            // 0x1b3bd4: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BD8u; }
        if (ctx->pc != 0x1B3BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BD8u; }
        if (ctx->pc != 0x1B3BD8u) { return; }
    }
    ctx->pc = 0x1B3BD8u;
label_1b3bd8:
    // 0x1b3bd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3bdc:
    // 0x1b3bdc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1b3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1b3be0:
    // 0x1b3be0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b3be4:
    // 0x1b3be4: 0xc041bce  jal         func_106F38
label_1b3be8:
    if (ctx->pc == 0x1B3BE8u) {
        ctx->pc = 0x1B3BE8u;
            // 0x1b3be8: 0xafa0014c  sw          $zero, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3BECu;
        goto label_1b3bec;
    }
    ctx->pc = 0x1B3BE4u;
    SET_GPR_U32(ctx, 31, 0x1B3BECu);
    ctx->pc = 0x1B3BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BE4u;
            // 0x1b3be8: 0xafa0014c  sw          $zero, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BECu; }
        if (ctx->pc != 0x1B3BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BECu; }
        if (ctx->pc != 0x1B3BECu) { return; }
    }
    ctx->pc = 0x1B3BECu;
label_1b3bec:
    // 0x1b3bec: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x1b3becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_1b3bf0:
    // 0x1b3bf0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b3bf4:
    // 0x1b3bf4: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1b3bf4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3bf8:
    // 0x1b3bf8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b3bfc:
    // 0x1b3bfc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1b3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1b3c00:
    // 0x1b3c00: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1b3c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b3c04:
    // 0x1b3c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b3c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3c08:
    // 0x1b3c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b3c0c:
    // 0x1b3c0c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1b3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_1b3c10:
    // 0x1b3c10: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1b3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_1b3c14:
    // 0x1b3c14: 0xc041bb0  jal         func_106EC0
label_1b3c18:
    if (ctx->pc == 0x1B3C18u) {
        ctx->pc = 0x1B3C18u;
            // 0x1b3c18: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1B3C1Cu;
        goto label_1b3c1c;
    }
    ctx->pc = 0x1B3C14u;
    SET_GPR_U32(ctx, 31, 0x1B3C1Cu);
    ctx->pc = 0x1B3C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C14u;
            // 0x1b3c18: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C1Cu; }
        if (ctx->pc != 0x1B3C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C1Cu; }
        if (ctx->pc != 0x1B3C1Cu) { return; }
    }
    ctx->pc = 0x1B3C1Cu;
label_1b3c1c:
    // 0x1b3c1c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1b3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b3c20:
    // 0x1b3c20: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1b3c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b3c24:
    // 0x1b3c24: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b3c24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3c28:
    // 0x1b3c28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b3c2c:
    // 0x1b3c2c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b3c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1b3c30:
    // 0x1b3c30: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1b3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1b3c34:
    // 0x1b3c34: 0xc041bb0  jal         func_106EC0
label_1b3c38:
    if (ctx->pc == 0x1B3C38u) {
        ctx->pc = 0x1B3C38u;
            // 0x1b3c38: 0xafa0019c  sw          $zero, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3C3Cu;
        goto label_1b3c3c;
    }
    ctx->pc = 0x1B3C34u;
    SET_GPR_U32(ctx, 31, 0x1B3C3Cu);
    ctx->pc = 0x1B3C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C34u;
            // 0x1b3c38: 0xafa0019c  sw          $zero, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C3Cu; }
        if (ctx->pc != 0x1B3C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C3Cu; }
        if (ctx->pc != 0x1B3C3Cu) { return; }
    }
    ctx->pc = 0x1B3C3Cu;
label_1b3c3c:
    // 0x1b3c3c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1b3c40:
    // 0x1b3c40: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1b3c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b3c44:
    // 0x1b3c44: 0xc04c094  jal         func_130250
label_1b3c48:
    if (ctx->pc == 0x1B3C48u) {
        ctx->pc = 0x1B3C48u;
            // 0x1b3c48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C4Cu;
        goto label_1b3c4c;
    }
    ctx->pc = 0x1B3C44u;
    SET_GPR_U32(ctx, 31, 0x1B3C4Cu);
    ctx->pc = 0x1B3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C44u;
            // 0x1b3c48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C4Cu; }
        if (ctx->pc != 0x1B3C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C4Cu; }
        if (ctx->pc != 0x1B3C4Cu) { return; }
    }
    ctx->pc = 0x1B3C4Cu;
label_1b3c4c:
    // 0x1b3c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3c50:
    // 0x1b3c50: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b3c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1b3c54:
    // 0x1b3c54: 0xc041bb0  jal         func_106EC0
label_1b3c58:
    if (ctx->pc == 0x1B3C58u) {
        ctx->pc = 0x1B3C58u;
            // 0x1b3c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C5Cu;
        goto label_1b3c5c;
    }
    ctx->pc = 0x1B3C54u;
    SET_GPR_U32(ctx, 31, 0x1B3C5Cu);
    ctx->pc = 0x1B3C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C54u;
            // 0x1b3c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C5Cu; }
        if (ctx->pc != 0x1B3C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C5Cu; }
        if (ctx->pc != 0x1B3C5Cu) { return; }
    }
    ctx->pc = 0x1B3C5Cu;
label_1b3c5c:
    // 0x1b3c5c: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1b3c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b3c60:
    // 0x1b3c60: 0xc047c76  jal         func_11F1D8
label_1b3c64:
    if (ctx->pc == 0x1B3C64u) {
        ctx->pc = 0x1B3C64u;
            // 0x1b3c64: 0xc7ac00f0  lwc1        $f12, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B3C68u;
        goto label_1b3c68;
    }
    ctx->pc = 0x1B3C60u;
    SET_GPR_U32(ctx, 31, 0x1B3C68u);
    ctx->pc = 0x1B3C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C60u;
            // 0x1b3c64: 0xc7ac00f0  lwc1        $f12, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C68u; }
        if (ctx->pc != 0x1B3C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C68u; }
        if (ctx->pc != 0x1B3C68u) { return; }
    }
    ctx->pc = 0x1B3C68u;
label_1b3c68:
    // 0x1b3c68: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b3c68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1b3c6c:
    // 0x1b3c6c: 0xc06c3d4  jal         func_1B0F50
label_1b3c70:
    if (ctx->pc == 0x1B3C70u) {
        ctx->pc = 0x1B3C70u;
            // 0x1b3c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C74u;
        goto label_1b3c74;
    }
    ctx->pc = 0x1B3C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C74u);
    ctx->pc = 0x1B3C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C6Cu;
            // 0x1b3c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C74u; }
        if (ctx->pc != 0x1B3C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C74u; }
        if (ctx->pc != 0x1B3C74u) { return; }
    }
    ctx->pc = 0x1B3C74u;
label_1b3c74:
    // 0x1b3c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3c78:
    // 0x1b3c78: 0xc06c3c0  jal         func_1B0F00
label_1b3c7c:
    if (ctx->pc == 0x1B3C7Cu) {
        ctx->pc = 0x1B3C7Cu;
            // 0x1b3c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C80u;
        goto label_1b3c80;
    }
    ctx->pc = 0x1B3C78u;
    SET_GPR_U32(ctx, 31, 0x1B3C80u);
    ctx->pc = 0x1B3C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C78u;
            // 0x1b3c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C80u; }
        if (ctx->pc != 0x1B3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C80u; }
        if (ctx->pc != 0x1B3C80u) { return; }
    }
    ctx->pc = 0x1B3C80u;
label_1b3c80:
    // 0x1b3c80: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1b3c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1b3c84:
    // 0x1b3c84: 0xc04c050  jal         func_130140
label_1b3c88:
    if (ctx->pc == 0x1B3C88u) {
        ctx->pc = 0x1B3C88u;
            // 0x1b3c88: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1B3C8Cu;
        goto label_1b3c8c;
    }
    ctx->pc = 0x1B3C84u;
    SET_GPR_U32(ctx, 31, 0x1B3C8Cu);
    ctx->pc = 0x1B3C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C84u;
            // 0x1b3c88: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C8Cu; }
        if (ctx->pc != 0x1B3C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C8Cu; }
        if (ctx->pc != 0x1B3C8Cu) { return; }
    }
    ctx->pc = 0x1B3C8Cu;
label_1b3c8c:
    // 0x1b3c8c: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x1b3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b3c90:
    // 0x1b3c90: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1b3c94:
    // 0x1b3c94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b3c94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3c98:
    // 0x1b3c98: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1b3c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1b3c9c:
    // 0x1b3c9c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1b3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b3ca0:
    // 0x1b3ca0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1b3ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_1b3ca4:
    // 0x1b3ca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b3ca8:
    // 0x1b3ca8: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x1b3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_1b3cac:
    // 0x1b3cac: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x1b3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
label_1b3cb0:
    // 0x1b3cb0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b3cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1b3cb4:
    // 0x1b3cb4: 0xc041bce  jal         func_106F38
label_1b3cb8:
    if (ctx->pc == 0x1B3CB8u) {
        ctx->pc = 0x1B3CB8u;
            // 0x1b3cb8: 0xafa201d4  sw          $v0, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
        ctx->pc = 0x1B3CBCu;
        goto label_1b3cbc;
    }
    ctx->pc = 0x1B3CB4u;
    SET_GPR_U32(ctx, 31, 0x1B3CBCu);
    ctx->pc = 0x1B3CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CB4u;
            // 0x1b3cb8: 0xafa201d4  sw          $v0, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CBCu; }
        if (ctx->pc != 0x1B3CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CBCu; }
        if (ctx->pc != 0x1B3CBCu) { return; }
    }
    ctx->pc = 0x1B3CBCu;
label_1b3cbc:
    // 0x1b3cbc: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1b3cc0:
    // 0x1b3cc0: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x1b3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1b3cc4:
    // 0x1b3cc4: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1b3cc4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3cc8:
    // 0x1b3cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b3ccc:
    // 0x1b3ccc: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1b3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1b3cd0:
    // 0x1b3cd0: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x1b3cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b3cd4:
    // 0x1b3cd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b3cd8:
    // 0x1b3cd8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1b3cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_1b3cdc:
    // 0x1b3cdc: 0xc06c4ec  jal         func_1B13B0
label_1b3ce0:
    if (ctx->pc == 0x1B3CE0u) {
        ctx->pc = 0x1B3CE0u;
            // 0x1b3ce0: 0xafa201ec  sw          $v0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
        ctx->pc = 0x1B3CE4u;
        goto label_1b3ce4;
    }
    ctx->pc = 0x1B3CDCu;
    SET_GPR_U32(ctx, 31, 0x1B3CE4u);
    ctx->pc = 0x1B3CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CDCu;
            // 0x1b3ce0: 0xafa201ec  sw          $v0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (runtime->hasFunction(0x1B13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE4u; }
        if (ctx->pc != 0x1B3CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE4u; }
        if (ctx->pc != 0x1B3CE4u) { return; }
    }
    ctx->pc = 0x1B3CE4u;
label_1b3ce4:
    // 0x1b3ce4: 0xc04c050  jal         func_130140
label_1b3ce8:
    if (ctx->pc == 0x1B3CE8u) {
        ctx->pc = 0x1B3CE8u;
            // 0x1b3ce8: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1B3CECu;
        goto label_1b3cec;
    }
    ctx->pc = 0x1B3CE4u;
    SET_GPR_U32(ctx, 31, 0x1B3CECu);
    ctx->pc = 0x1B3CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CE4u;
            // 0x1b3ce8: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CECu; }
        if (ctx->pc != 0x1B3CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CECu; }
        if (ctx->pc != 0x1B3CECu) { return; }
    }
    ctx->pc = 0x1B3CECu;
label_1b3cec:
    // 0x1b3cec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b3cf0:
    // 0x1b3cf0: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x1b3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_1b3cf4:
    // 0x1b3cf4: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x1b3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_1b3cf8:
    // 0x1b3cf8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b3cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b3cfc:
    // 0x1b3cfc: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x1b3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_1b3d00:
    // 0x1b3d00: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x1b3d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_1b3d04:
    // 0x1b3d04: 0x8e350104  lw          $s5, 0x104($s1)
    ctx->pc = 0x1b3d04u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1b3d08:
    // 0x1b3d08: 0x8e330100  lw          $s3, 0x100($s1)
    ctx->pc = 0x1b3d08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1b3d0c:
    // 0x1b3d0c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1b3d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1b3d10:
    // 0x1b3d10: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1b3d14:
    if (ctx->pc == 0x1B3D14u) {
        ctx->pc = 0x1B3D14u;
            // 0x1b3d14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D18u;
        goto label_1b3d18;
    }
    ctx->pc = 0x1B3D10u;
    {
        const bool branch_taken_0x1b3d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D10u;
            // 0x1b3d14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d10) {
            ctx->pc = 0x1B3D54u;
            goto label_1b3d54;
        }
    }
    ctx->pc = 0x1B3D18u;
label_1b3d18:
    // 0x1b3d18: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b3d1c:
    // 0x1b3d1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d20:
    // 0x1b3d20: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1b3d24:
    // 0x1b3d24: 0xc04bd60  jal         func_12F580
label_1b3d28:
    if (ctx->pc == 0x1B3D28u) {
        ctx->pc = 0x1B3D28u;
            // 0x1b3d28: 0x26670020  addiu       $a3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x1B3D2Cu;
        goto label_1b3d2c;
    }
    ctx->pc = 0x1B3D24u;
    SET_GPR_U32(ctx, 31, 0x1B3D2Cu);
    ctx->pc = 0x1B3D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D24u;
            // 0x1b3d28: 0x26670020  addiu       $a3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D2Cu; }
        if (ctx->pc != 0x1B3D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D2Cu; }
        if (ctx->pc != 0x1B3D2Cu) { return; }
    }
    ctx->pc = 0x1B3D2Cu;
label_1b3d2c:
    // 0x1b3d2c: 0xc04bff4  jal         func_12FFD0
label_1b3d30:
    if (ctx->pc == 0x1B3D30u) {
        ctx->pc = 0x1B3D30u;
            // 0x1b3d30: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1B3D34u;
        goto label_1b3d34;
    }
    ctx->pc = 0x1B3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D34u);
    ctx->pc = 0x1B3D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D2Cu;
            // 0x1b3d30: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D34u; }
        if (ctx->pc != 0x1B3D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D34u; }
        if (ctx->pc != 0x1B3D34u) { return; }
    }
    ctx->pc = 0x1B3D34u;
label_1b3d34:
    // 0x1b3d34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b3d38:
    // 0x1b3d38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b3d38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b3d3c:
    // 0x1b3d3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3d40:
    // 0x1b3d40: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x1b3d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1b3d44:
    // 0x1b3d44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b3d48:
    // 0x1b3d48: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x1b3d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1b3d4c:
    // 0x1b3d4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1b3d50:
    if (ctx->pc == 0x1B3D50u) {
        ctx->pc = 0x1B3D50u;
            // 0x1b3d50: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1B3D54u;
        goto label_1b3d54;
    }
    ctx->pc = 0x1B3D4Cu;
    {
        const bool branch_taken_0x1b3d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D4Cu;
            // 0x1b3d50: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d4c) {
            ctx->pc = 0x1B3D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3d18;
        }
    }
    ctx->pc = 0x1B3D54u;
label_1b3d54:
    // 0x1b3d54: 0x0  nop
    ctx->pc = 0x1b3d54u;
    // NOP
label_1b3d58:
    // 0x1b3d58: 0x8e350104  lw          $s5, 0x104($s1)
    ctx->pc = 0x1b3d58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1b3d5c:
    // 0x1b3d5c: 0x8e330100  lw          $s3, 0x100($s1)
    ctx->pc = 0x1b3d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1b3d60:
    // 0x1b3d60: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1b3d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b3d64:
    // 0x1b3d64: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1b3d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1b3d68:
    // 0x1b3d68: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1b3d6c:
    if (ctx->pc == 0x1B3D6Cu) {
        ctx->pc = 0x1B3D6Cu;
            // 0x1b3d6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D70u;
        goto label_1b3d70;
    }
    ctx->pc = 0x1B3D68u;
    {
        const bool branch_taken_0x1b3d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D68u;
            // 0x1b3d6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d68) {
            ctx->pc = 0x1B3DE0u;
            goto label_1b3de0;
        }
    }
    ctx->pc = 0x1B3D70u;
label_1b3d70:
    // 0x1b3d70: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1b3d74:
    // 0x1b3d74: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x1b3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b3d78:
    // 0x1b3d78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b3d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d7c:
    // 0x1b3d7c: 0xc04c228  jal         func_1308A0
label_1b3d80:
    if (ctx->pc == 0x1B3D80u) {
        ctx->pc = 0x1B3D80u;
            // 0x1b3d80: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B3D84u;
        goto label_1b3d84;
    }
    ctx->pc = 0x1B3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D84u);
    ctx->pc = 0x1B3D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D7Cu;
            // 0x1b3d80: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D84u; }
        if (ctx->pc != 0x1B3D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D84u; }
        if (ctx->pc != 0x1B3D84u) { return; }
    }
    ctx->pc = 0x1B3D84u;
label_1b3d84:
    // 0x1b3d84: 0x26e40160  addiu       $a0, $s7, 0x160
    ctx->pc = 0x1b3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 352));
label_1b3d88:
    // 0x1b3d88: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1b3d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1b3d8c:
    // 0x1b3d8c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1b3d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1b3d90:
    // 0x1b3d90: 0xc068e08  jal         func_1A3820
label_1b3d94:
    if (ctx->pc == 0x1B3D94u) {
        ctx->pc = 0x1B3D94u;
            // 0x1b3d94: 0x27a7042c  addiu       $a3, $sp, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
        ctx->pc = 0x1B3D98u;
        goto label_1b3d98;
    }
    ctx->pc = 0x1B3D90u;
    SET_GPR_U32(ctx, 31, 0x1B3D98u);
    ctx->pc = 0x1B3D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D90u;
            // 0x1b3d94: 0x27a7042c  addiu       $a3, $sp, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3820u;
    if (runtime->hasFunction(0x1A3820u)) {
        auto targetFn = runtime->lookupFunction(0x1A3820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D98u; }
        if (ctx->pc != 0x1B3D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapPoly3XZ__14CEditCollisionFPA4_fPA4_fPf_0x1a3820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D98u; }
        if (ctx->pc != 0x1B3D98u) { return; }
    }
    ctx->pc = 0x1B3D98u;
label_1b3d98:
    // 0x1b3d98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b3d9c:
    if (ctx->pc == 0x1B3D9Cu) {
        ctx->pc = 0x1B3DA0u;
        goto label_1b3da0;
    }
    ctx->pc = 0x1B3D98u;
    {
        const bool branch_taken_0x1b3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d98) {
            ctx->pc = 0x1B3DCCu;
            goto label_1b3dcc;
        }
    }
    ctx->pc = 0x1B3DA0u;
label_1b3da0:
    // 0x1b3da0: 0xc7a1042c  lwc1        $f1, 0x42C($sp)
    ctx->pc = 0x1b3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3da4:
    // 0x1b3da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3da8:
    // 0x1b3da8: 0x0  nop
    ctx->pc = 0x1b3da8u;
    // NOP
label_1b3dac:
    // 0x1b3dac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3db0:
    // 0x1b3db0: 0x0  nop
    ctx->pc = 0x1b3db0u;
    // NOP
label_1b3db4:
    // 0x1b3db4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b3db8:
    if (ctx->pc == 0x1B3DB8u) {
        ctx->pc = 0x1B3DBCu;
        goto label_1b3dbc;
    }
    ctx->pc = 0x1B3DB4u;
    {
        const bool branch_taken_0x1b3db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3db4) {
            ctx->pc = 0x1B3DC4u;
            goto label_1b3dc4;
        }
    }
    ctx->pc = 0x1B3DBCu;
label_1b3dbc:
    // 0x1b3dbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b3dc0:
    if (ctx->pc == 0x1B3DC0u) {
        ctx->pc = 0x1B3DC0u;
            // 0x1b3dc0: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->pc = 0x1B3DC4u;
        goto label_1b3dc4;
    }
    ctx->pc = 0x1B3DBCu;
    {
        const bool branch_taken_0x1b3dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DBCu;
            // 0x1b3dc0: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dbc) {
            ctx->pc = 0x1B3DC8u;
            goto label_1b3dc8;
        }
    }
    ctx->pc = 0x1B3DC4u;
label_1b3dc4:
    // 0x1b3dc4: 0x0  nop
    ctx->pc = 0x1b3dc4u;
    // NOP
label_1b3dc8:
    // 0x1b3dc8: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1b3dc8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_1b3dcc:
    // 0x1b3dcc: 0x0  nop
    ctx->pc = 0x1b3dccu;
    // NOP
label_1b3dd0:
    // 0x1b3dd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b3dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b3dd4:
    // 0x1b3dd4: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1b3dd8:
    // 0x1b3dd8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1b3ddc:
    if (ctx->pc == 0x1B3DDCu) {
        ctx->pc = 0x1B3DDCu;
            // 0x1b3ddc: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x1B3DE0u;
        goto label_1b3de0;
    }
    ctx->pc = 0x1B3DD8u;
    {
        const bool branch_taken_0x1b3dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DD8u;
            // 0x1b3ddc: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dd8) {
            ctx->pc = 0x1B3D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3d70;
        }
    }
    ctx->pc = 0x1B3DE0u;
label_1b3de0:
    // 0x1b3de0: 0xc068d24  jal         func_1A3490
label_1b3de4:
    if (ctx->pc == 0x1B3DE4u) {
        ctx->pc = 0x1B3DE4u;
            // 0x1b3de4: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x1B3DE8u;
        goto label_1b3de8;
    }
    ctx->pc = 0x1B3DE0u;
    SET_GPR_U32(ctx, 31, 0x1B3DE8u);
    ctx->pc = 0x1B3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DE0u;
            // 0x1b3de4: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DE8u; }
        if (ctx->pc != 0x1B3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DE8u; }
        if (ctx->pc != 0x1B3DE8u) { return; }
    }
    ctx->pc = 0x1B3DE8u;
label_1b3de8:
    // 0x1b3de8: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x1b3de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b3dec:
    // 0x1b3dec: 0x8e530d44  lw          $s3, 0xD44($s2)
    ctx->pc = 0x1b3decu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3396)));
label_1b3df0:
    // 0x1b3df0: 0xc06c3d4  jal         func_1B0F50
label_1b3df4:
    if (ctx->pc == 0x1B3DF4u) {
        ctx->pc = 0x1B3DF4u;
            // 0x1b3df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DF8u;
        goto label_1b3df8;
    }
    ctx->pc = 0x1B3DF0u;
    SET_GPR_U32(ctx, 31, 0x1B3DF8u);
    ctx->pc = 0x1B3DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DF0u;
            // 0x1b3df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DF8u; }
        if (ctx->pc != 0x1B3DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DF8u; }
        if (ctx->pc != 0x1B3DF8u) { return; }
    }
    ctx->pc = 0x1B3DF8u;
label_1b3df8:
    // 0x1b3df8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b3df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3dfc:
    // 0x1b3dfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e00:
    // 0x1b3e00: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1b3e04:
    // 0x1b3e04: 0xc06c4d8  jal         func_1B1360
label_1b3e08:
    if (ctx->pc == 0x1B3E08u) {
        ctx->pc = 0x1B3E08u;
            // 0x1b3e08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E0Cu;
        goto label_1b3e0c;
    }
    ctx->pc = 0x1B3E04u;
    SET_GPR_U32(ctx, 31, 0x1B3E0Cu);
    ctx->pc = 0x1B3E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E04u;
            // 0x1b3e08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E0Cu; }
        if (ctx->pc != 0x1B3E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E0Cu; }
        if (ctx->pc != 0x1B3E0Cu) { return; }
    }
    ctx->pc = 0x1B3E0Cu;
label_1b3e0c:
    // 0x1b3e0c: 0x7a2301c0  lq          $v1, 0x1C0($s1)
    ctx->pc = 0x1b3e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 448)));
label_1b3e10:
    // 0x1b3e10: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x1b3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_1b3e14:
    // 0x1b3e14: 0x7a2201d0  lq          $v0, 0x1D0($s1)
    ctx->pc = 0x1b3e14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 464)));
label_1b3e18:
    // 0x1b3e18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b3e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e1c:
    // 0x1b3e1c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1b3e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1b3e20:
    // 0x1b3e20: 0x10000073  b           . + 4 + (0x73 << 2)
label_1b3e24:
    if (ctx->pc == 0x1B3E24u) {
        ctx->pc = 0x1B3E24u;
            // 0x1b3e24: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x1B3E28u;
        goto label_1b3e28;
    }
    ctx->pc = 0x1B3E20u;
    {
        const bool branch_taken_0x1b3e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E20u;
            // 0x1b3e24: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e20) {
            ctx->pc = 0x1B3FF0u;
            goto label_1b3ff0;
        }
    }
    ctx->pc = 0x1B3E28u;
label_1b3e28:
    // 0x1b3e28: 0x1296006f  beq         $s4, $s6, . + 4 + (0x6F << 2)
label_1b3e2c:
    if (ctx->pc == 0x1B3E2Cu) {
        ctx->pc = 0x1B3E30u;
        goto label_1b3e30;
    }
    ctx->pc = 0x1B3E28u;
    {
        const bool branch_taken_0x1b3e28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        if (branch_taken_0x1b3e28) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3E30u;
label_1b3e30:
    // 0x1b3e30: 0x82620070  lb          $v0, 0x70($s3)
    ctx->pc = 0x1b3e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_1b3e34:
    // 0x1b3e34: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b3e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1b3e38:
    // 0x1b3e38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b3e3c:
    // 0x1b3e3c: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_1b3e40:
    if (ctx->pc == 0x1B3E40u) {
        ctx->pc = 0x1B3E44u;
        goto label_1b3e44;
    }
    ctx->pc = 0x1B3E3Cu;
    {
        const bool branch_taken_0x1b3e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e3c) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3E44u;
label_1b3e44:
    // 0x1b3e44: 0x8e620310  lw          $v0, 0x310($s3)
    ctx->pc = 0x1b3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 784)));
label_1b3e48:
    // 0x1b3e48: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_1b3e4c:
    if (ctx->pc == 0x1B3E4Cu) {
        ctx->pc = 0x1B3E50u;
        goto label_1b3e50;
    }
    ctx->pc = 0x1B3E48u;
    {
        const bool branch_taken_0x1b3e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e48) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3E50u;
label_1b3e50:
    // 0x1b3e50: 0x8e750324  lw          $s5, 0x324($s3)
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 804)));
label_1b3e54:
    // 0x1b3e54: 0x12a00064  beqz        $s5, . + 4 + (0x64 << 2)
label_1b3e58:
    if (ctx->pc == 0x1B3E58u) {
        ctx->pc = 0x1B3E5Cu;
        goto label_1b3e5c;
    }
    ctx->pc = 0x1B3E54u;
    {
        const bool branch_taken_0x1b3e54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e54) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3E5Cu;
label_1b3e5c:
    // 0x1b3e5c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b3e60:
    // 0x1b3e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e64:
    // 0x1b3e64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b3e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b3e68:
    // 0x1b3e68: 0x320f809  jalr        $t9
label_1b3e6c:
    if (ctx->pc == 0x1B3E6Cu) {
        ctx->pc = 0x1B3E6Cu;
            // 0x1b3e6c: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x1B3E70u;
        goto label_1b3e70;
    }
    ctx->pc = 0x1B3E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B3E70u);
        ctx->pc = 0x1B3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E68u;
            // 0x1b3e6c: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E70u; }
            if (ctx->pc != 0x1B3E70u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3E70u;
label_1b3e70:
    // 0x1b3e70: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1b3e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b3e74:
    // 0x1b3e74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e78:
    // 0x1b3e78: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b3e7c:
    // 0x1b3e7c: 0x320f809  jalr        $t9
label_1b3e80:
    if (ctx->pc == 0x1B3E80u) {
        ctx->pc = 0x1B3E80u;
            // 0x1b3e80: 0x27a503a0  addiu       $a1, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x1B3E84u;
        goto label_1b3e84;
    }
    ctx->pc = 0x1B3E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B3E84u);
        ctx->pc = 0x1B3E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E7Cu;
            // 0x1b3e80: 0x27a503a0  addiu       $a1, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E84u; }
            if (ctx->pc != 0x1B3E84u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3E84u;
label_1b3e84:
    // 0x1b3e84: 0xc7ac03a4  lwc1        $f12, 0x3A4($sp)
    ctx->pc = 0x1b3e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b3e88:
    // 0x1b3e88: 0xc06c3d4  jal         func_1B0F50
label_1b3e8c:
    if (ctx->pc == 0x1B3E8Cu) {
        ctx->pc = 0x1B3E8Cu;
            // 0x1b3e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E90u;
        goto label_1b3e90;
    }
    ctx->pc = 0x1B3E88u;
    SET_GPR_U32(ctx, 31, 0x1B3E90u);
    ctx->pc = 0x1B3E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E88u;
            // 0x1b3e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E90u; }
        if (ctx->pc != 0x1B3E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E90u; }
        if (ctx->pc != 0x1B3E90u) { return; }
    }
    ctx->pc = 0x1B3E90u;
label_1b3e90:
    // 0x1b3e90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b3e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e94:
    // 0x1b3e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e98:
    // 0x1b3e98: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_1b3e9c:
    // 0x1b3e9c: 0xc06c4d8  jal         func_1B1360
label_1b3ea0:
    if (ctx->pc == 0x1B3EA0u) {
        ctx->pc = 0x1B3EA0u;
            // 0x1b3ea0: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x1B3EA4u;
        goto label_1b3ea4;
    }
    ctx->pc = 0x1B3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B3EA4u);
    ctx->pc = 0x1B3EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E9Cu;
            // 0x1b3ea0: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EA4u; }
        if (ctx->pc != 0x1B3EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EA4u; }
        if (ctx->pc != 0x1B3EA4u) { return; }
    }
    ctx->pc = 0x1B3EA4u;
label_1b3ea4:
    // 0x1b3ea4: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_1b3ea8:
    // 0x1b3ea8: 0xc04c0b4  jal         func_1302D0
label_1b3eac:
    if (ctx->pc == 0x1B3EACu) {
        ctx->pc = 0x1B3EACu;
            // 0x1b3eac: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x1B3EB0u;
        goto label_1b3eb0;
    }
    ctx->pc = 0x1B3EA8u;
    SET_GPR_U32(ctx, 31, 0x1B3EB0u);
    ctx->pc = 0x1B3EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EA8u;
            // 0x1b3eac: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EB0u; }
        if (ctx->pc != 0x1B3EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EB0u; }
        if (ctx->pc != 0x1B3EB0u) { return; }
    }
    ctx->pc = 0x1B3EB0u;
label_1b3eb0:
    // 0x1b3eb0: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x1b3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_1b3eb4:
    // 0x1b3eb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3eb8:
    // 0x1b3eb8: 0xc041c3e  jal         func_1070F8
label_1b3ebc:
    if (ctx->pc == 0x1B3EBCu) {
        ctx->pc = 0x1B3EBCu;
            // 0x1b3ebc: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x1B3EC0u;
        goto label_1b3ec0;
    }
    ctx->pc = 0x1B3EB8u;
    SET_GPR_U32(ctx, 31, 0x1B3EC0u);
    ctx->pc = 0x1B3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EB8u;
            // 0x1b3ebc: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EC0u; }
        if (ctx->pc != 0x1B3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EC0u; }
        if (ctx->pc != 0x1B3EC0u) { return; }
    }
    ctx->pc = 0x1B3EC0u;
label_1b3ec0:
    // 0x1b3ec0: 0x7aa301c0  lq          $v1, 0x1C0($s5)
    ctx->pc = 0x1b3ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 448)));
label_1b3ec4:
    // 0x1b3ec4: 0x27a703c0  addiu       $a3, $sp, 0x3C0
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_1b3ec8:
    // 0x1b3ec8: 0x7aa201d0  lq          $v0, 0x1D0($s5)
    ctx->pc = 0x1b3ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 464)));
label_1b3ecc:
    // 0x1b3ecc: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_1b3ed0:
    // 0x1b3ed0: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_1b3ed4:
    // 0x1b3ed4: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x1b3ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1b3ed8:
    // 0x1b3ed8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1b3ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_1b3edc:
    // 0x1b3edc: 0xc04c094  jal         func_130250
label_1b3ee0:
    if (ctx->pc == 0x1B3EE0u) {
        ctx->pc = 0x1B3EE0u;
            // 0x1b3ee0: 0x7ce20010  sq          $v0, 0x10($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x1B3EE4u;
        goto label_1b3ee4;
    }
    ctx->pc = 0x1B3EDCu;
    SET_GPR_U32(ctx, 31, 0x1B3EE4u);
    ctx->pc = 0x1B3EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EDCu;
            // 0x1b3ee0: 0x7ce20010  sq          $v0, 0x10($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EE4u; }
        if (ctx->pc != 0x1B3EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EE4u; }
        if (ctx->pc != 0x1B3EE4u) { return; }
    }
    ctx->pc = 0x1B3EE4u;
label_1b3ee4:
    // 0x1b3ee4: 0xc7a10374  lwc1        $f1, 0x374($sp)
    ctx->pc = 0x1b3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3ee8:
    // 0x1b3ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3eec:
    // 0x1b3eec: 0x0  nop
    ctx->pc = 0x1b3eecu;
    // NOP
label_1b3ef0:
    // 0x1b3ef0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3ef0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3ef4:
    // 0x1b3ef4: 0x0  nop
    ctx->pc = 0x1b3ef4u;
    // NOP
label_1b3ef8:
    // 0x1b3ef8: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_1b3efc:
    if (ctx->pc == 0x1B3EFCu) {
        ctx->pc = 0x1B3F00u;
        goto label_1b3f00;
    }
    ctx->pc = 0x1B3EF8u;
    {
        const bool branch_taken_0x1b3ef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3ef8) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3F00u;
label_1b3f00:
    // 0x1b3f00: 0xc7a303c4  lwc1        $f3, 0x3C4($sp)
    ctx->pc = 0x1b3f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b3f04:
    // 0x1b3f04: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1b3f04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3f08:
    // 0x1b3f08: 0x0  nop
    ctx->pc = 0x1b3f08u;
    // NOP
label_1b3f0c:
    // 0x1b3f0c: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_1b3f10:
    if (ctx->pc == 0x1B3F10u) {
        ctx->pc = 0x1B3F14u;
        goto label_1b3f14;
    }
    ctx->pc = 0x1B3F0Cu;
    {
        const bool branch_taken_0x1b3f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3f0c) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3F14u;
label_1b3f14:
    // 0x1b3f14: 0xc7a203b4  lwc1        $f2, 0x3B4($sp)
    ctx->pc = 0x1b3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3f18:
    // 0x1b3f18: 0xc7a003d4  lwc1        $f0, 0x3D4($sp)
    ctx->pc = 0x1b3f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3f1c:
    // 0x1b3f1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b3f1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b3f20:
    // 0x1b3f20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3f24:
    // 0x1b3f24: 0x0  nop
    ctx->pc = 0x1b3f24u;
    // NOP
label_1b3f28:
    // 0x1b3f28: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_1b3f2c:
    if (ctx->pc == 0x1B3F2Cu) {
        ctx->pc = 0x1B3F30u;
        goto label_1b3f30;
    }
    ctx->pc = 0x1B3F28u;
    {
        const bool branch_taken_0x1b3f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3f28) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3F30u;
label_1b3f30:
    // 0x1b3f30: 0xc7a00384  lwc1        $f0, 0x384($sp)
    ctx->pc = 0x1b3f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3f34:
    // 0x1b3f34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b3f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b3f38:
    // 0x1b3f38: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1b3f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3f3c:
    // 0x1b3f3c: 0x0  nop
    ctx->pc = 0x1b3f3cu;
    // NOP
label_1b3f40:
    // 0x1b3f40: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_1b3f44:
    if (ctx->pc == 0x1B3F44u) {
        ctx->pc = 0x1B3F44u;
            // 0x1b3f44: 0x26a401b0  addiu       $a0, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->pc = 0x1B3F48u;
        goto label_1b3f48;
    }
    ctx->pc = 0x1B3F40u;
    {
        const bool branch_taken_0x1b3f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F40u;
            // 0x1b3f44: 0x26a401b0  addiu       $a0, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f40) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3F48u;
label_1b3f48:
    // 0x1b3f48: 0x262501b0  addiu       $a1, $s1, 0x1B0
    ctx->pc = 0x1b3f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_1b3f4c:
    // 0x1b3f4c: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x1b3f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_1b3f50:
    // 0x1b3f50: 0xc068dc8  jal         func_1A3720
label_1b3f54:
    if (ctx->pc == 0x1B3F54u) {
        ctx->pc = 0x1B3F54u;
            // 0x1b3f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F58u;
        goto label_1b3f58;
    }
    ctx->pc = 0x1B3F50u;
    SET_GPR_U32(ctx, 31, 0x1B3F58u);
    ctx->pc = 0x1B3F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F50u;
            // 0x1b3f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F58u; }
        if (ctx->pc != 0x1B3F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F58u; }
        if (ctx->pc != 0x1B3F58u) { return; }
    }
    ctx->pc = 0x1B3F58u;
label_1b3f58:
    // 0x1b3f58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f5c:
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
label_1b3f60:
    // 0x1b3f60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b3f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3f64:
    // 0x1b3f64: 0x0  nop
    ctx->pc = 0x1b3f64u;
    // NOP
label_1b3f68:
    // 0x1b3f68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b3f6c:
    if (ctx->pc == 0x1B3F6Cu) {
        ctx->pc = 0x1B3F6Cu;
            // 0x1b3f6c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1B3F70u;
        goto label_1b3f70;
    }
    ctx->pc = 0x1B3F68u;
    {
        const bool branch_taken_0x1b3f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F68u;
            // 0x1b3f6c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f68) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3F70u;
label_1b3f70:
    // 0x1b3f70: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b3f70u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1b3f74:
    // 0x1b3f74: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b3f78:
    // 0x1b3f78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b3f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1b3f7c:
    // 0x1b3f7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b3f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3f80:
    // 0x1b3f80: 0x0  nop
    ctx->pc = 0x1b3f80u;
    // NOP
label_1b3f84:
    // 0x1b3f84: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b3f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3f88:
    // 0x1b3f88: 0x0  nop
    ctx->pc = 0x1b3f88u;
    // NOP
label_1b3f8c:
    // 0x1b3f8c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1b3f90:
    if (ctx->pc == 0x1B3F90u) {
        ctx->pc = 0x1B3F94u;
        goto label_1b3f94;
    }
    ctx->pc = 0x1B3F8Cu;
    {
        const bool branch_taken_0x1b3f8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3f8c) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3F94u;
label_1b3f94:
    // 0x1b3f94: 0x0  nop
    ctx->pc = 0x1b3f94u;
    // NOP
label_1b3f98:
    // 0x1b3f98: 0x0  nop
    ctx->pc = 0x1b3f98u;
    // NOP
label_1b3f9c:
    // 0x1b3f9c: 0x46140043  div.s       $f1, $f0, $f20
    ctx->pc = 0x1b3f9cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1b3fa0:
    // 0x1b3fa0: 0x0  nop
    ctx->pc = 0x1b3fa0u;
    // NOP
label_1b3fa4:
    // 0x1b3fa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3fa8:
    // 0x1b3fa8: 0x0  nop
    ctx->pc = 0x1b3fa8u;
    // NOP
label_1b3fac:
    // 0x1b3fac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3fb0:
    // 0x1b3fb0: 0x0  nop
    ctx->pc = 0x1b3fb0u;
    // NOP
label_1b3fb4:
    // 0x1b3fb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b3fb8:
    if (ctx->pc == 0x1B3FB8u) {
        ctx->pc = 0x1B3FBCu;
        goto label_1b3fbc;
    }
    ctx->pc = 0x1B3FB4u;
    {
        const bool branch_taken_0x1b3fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3fb4) {
            ctx->pc = 0x1B3FC0u;
            goto label_1b3fc0;
        }
    }
    ctx->pc = 0x1B3FBCu;
label_1b3fbc:
    // 0x1b3fbc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3fbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3fc0:
    // 0x1b3fc0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b3fc4:
    // 0x1b3fc4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b3fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1b3fc8:
    // 0x1b3fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3fcc:
    // 0x1b3fcc: 0x0  nop
    ctx->pc = 0x1b3fccu;
    // NOP
label_1b3fd0:
    // 0x1b3fd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3fd4:
    // 0x1b3fd4: 0x0  nop
    ctx->pc = 0x1b3fd4u;
    // NOP
label_1b3fd8:
    // 0x1b3fd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b3fdc:
    if (ctx->pc == 0x1B3FDCu) {
        ctx->pc = 0x1B3FDCu;
            // 0x1b3fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FE0u;
        goto label_1b3fe0;
    }
    ctx->pc = 0x1B3FD8u;
    {
        const bool branch_taken_0x1b3fd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FD8u;
            // 0x1b3fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fd8) {
            ctx->pc = 0x1B3FE8u;
            goto label_1b3fe8;
        }
    }
    ctx->pc = 0x1B3FE0u;
label_1b3fe0:
    // 0x1b3fe0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b3fe4:
    if (ctx->pc == 0x1B3FE4u) {
        ctx->pc = 0x1B3FE8u;
        goto label_1b3fe8;
    }
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B3FE8u;
label_1b3fe8:
    // 0x1b3fe8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b3fec:
    // 0x1b3fec: 0x26730330  addiu       $s3, $s3, 0x330
    ctx->pc = 0x1b3fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
label_1b3ff0:
    // 0x1b3ff0: 0x8e420d40  lw          $v0, 0xD40($s2)
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3392)));
label_1b3ff4:
    // 0x1b3ff4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b3ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b3ff8:
    // 0x1b3ff8: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
label_1b3ffc:
    if (ctx->pc == 0x1B3FFCu) {
        ctx->pc = 0x1B4000u;
        goto label_1b4000;
    }
    ctx->pc = 0x1B3FF8u;
    {
        const bool branch_taken_0x1b3ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ff8) {
            ctx->pc = 0x1B3E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3e28;
        }
    }
    ctx->pc = 0x1B4000u;
label_1b4000:
    // 0x1b4000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4004:
    // 0x1b4004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4008:
    // 0x1b4008: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1b4008u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_1b400c:
    // 0x1b400c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b400cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4010:
    // 0x1b4010: 0x0  nop
    ctx->pc = 0x1b4010u;
    // NOP
label_1b4014:
    // 0x1b4014: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b4018:
    if (ctx->pc == 0x1B4018u) {
        ctx->pc = 0x1B4018u;
            // 0x1b4018: 0xafd60004  sw          $s6, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 22));
        ctx->pc = 0x1B401Cu;
        goto label_1b401c;
    }
    ctx->pc = 0x1B4014u;
    {
        const bool branch_taken_0x1b4014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4014u;
            // 0x1b4018: 0xafd60004  sw          $s6, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4014) {
            ctx->pc = 0x1B4024u;
            goto label_1b4024;
        }
    }
    ctx->pc = 0x1B401Cu;
label_1b401c:
    // 0x1b401c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b4020:
    if (ctx->pc == 0x1B4020u) {
        ctx->pc = 0x1B4020u;
            // 0x1b4020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4024u;
        goto label_1b4024;
    }
    ctx->pc = 0x1B401Cu;
    {
        const bool branch_taken_0x1b401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B401Cu;
            // 0x1b4020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b401c) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B4024u;
label_1b4024:
    // 0x1b4024: 0x0  nop
    ctx->pc = 0x1b4024u;
    // NOP
label_1b4028:
    // 0x1b4028: 0x0  nop
    ctx->pc = 0x1b4028u;
    // NOP
label_1b402c:
    // 0x1b402c: 0x4614a843  div.s       $f1, $f21, $f20
    ctx->pc = 0x1b402cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_1b4030:
    // 0x1b4030: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1b4030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_1b4034:
    // 0x1b4034: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1b4034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_1b4038:
    // 0x1b4038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b403c:
    // 0x1b403c: 0x0  nop
    ctx->pc = 0x1b403cu;
    // NOP
label_1b4040:
    // 0x1b4040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4044:
    // 0x1b4044: 0x0  nop
    ctx->pc = 0x1b4044u;
    // NOP
label_1b4048:
    // 0x1b4048: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b404c:
    if (ctx->pc == 0x1B404Cu) {
        ctx->pc = 0x1B404Cu;
            // 0x1b404c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x1B4050u;
        goto label_1b4050;
    }
    ctx->pc = 0x1B4048u;
    {
        const bool branch_taken_0x1b4048 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4048u;
            // 0x1b404c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4048) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B4050u;
label_1b4050:
    // 0x1b4050: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4054:
    // 0x1b4054: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1b4054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1b4058:
    // 0x1b4058: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b4058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b405c:
    // 0x1b405c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b4060:
    // 0x1b4060: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b4060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b4064:
    // 0x1b4064: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b4064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b4068:
    // 0x1b4068: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b4068u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b406c:
    // 0x1b406c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b406cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b4070:
    // 0x1b4070: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b4070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b4074:
    // 0x1b4074: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b4074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b4078:
    // 0x1b4078: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b4078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b407c:
    // 0x1b407c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b407cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4080:
    // 0x1b4080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4084:
    // 0x1b4084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4088:
    // 0x1b4088: 0x3e00008  jr          $ra
label_1b408c:
    if (ctx->pc == 0x1B408Cu) {
        ctx->pc = 0x1B408Cu;
            // 0x1b408c: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->pc = 0x1B4090u;
        goto label_fallthrough_0x1b4088;
    }
    ctx->pc = 0x1B4088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4088u;
            // 0x1b408c: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b4088:
    ctx->pc = 0x1B4090u;
}
