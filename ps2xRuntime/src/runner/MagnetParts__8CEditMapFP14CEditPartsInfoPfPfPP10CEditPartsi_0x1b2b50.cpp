#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MagnetParts__8CEditMapFP14CEditPartsInfoPfPfPP10CEditPartsi
// Address: 0x1b2b50 - 0x1b3a84
void MagnetParts__8CEditMapFP14CEditPartsInfoPfPfPP10CEditPartsi_0x1b2b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MagnetParts__8CEditMapFP14CEditPartsInfoPfPfPP10CEditPartsi_0x1b2b50");
#endif

    switch (ctx->pc) {
        case 0x1b2b50u: goto label_1b2b50;
        case 0x1b2b54u: goto label_1b2b54;
        case 0x1b2b58u: goto label_1b2b58;
        case 0x1b2b5cu: goto label_1b2b5c;
        case 0x1b2b60u: goto label_1b2b60;
        case 0x1b2b64u: goto label_1b2b64;
        case 0x1b2b68u: goto label_1b2b68;
        case 0x1b2b6cu: goto label_1b2b6c;
        case 0x1b2b70u: goto label_1b2b70;
        case 0x1b2b74u: goto label_1b2b74;
        case 0x1b2b78u: goto label_1b2b78;
        case 0x1b2b7cu: goto label_1b2b7c;
        case 0x1b2b80u: goto label_1b2b80;
        case 0x1b2b84u: goto label_1b2b84;
        case 0x1b2b88u: goto label_1b2b88;
        case 0x1b2b8cu: goto label_1b2b8c;
        case 0x1b2b90u: goto label_1b2b90;
        case 0x1b2b94u: goto label_1b2b94;
        case 0x1b2b98u: goto label_1b2b98;
        case 0x1b2b9cu: goto label_1b2b9c;
        case 0x1b2ba0u: goto label_1b2ba0;
        case 0x1b2ba4u: goto label_1b2ba4;
        case 0x1b2ba8u: goto label_1b2ba8;
        case 0x1b2bacu: goto label_1b2bac;
        case 0x1b2bb0u: goto label_1b2bb0;
        case 0x1b2bb4u: goto label_1b2bb4;
        case 0x1b2bb8u: goto label_1b2bb8;
        case 0x1b2bbcu: goto label_1b2bbc;
        case 0x1b2bc0u: goto label_1b2bc0;
        case 0x1b2bc4u: goto label_1b2bc4;
        case 0x1b2bc8u: goto label_1b2bc8;
        case 0x1b2bccu: goto label_1b2bcc;
        case 0x1b2bd0u: goto label_1b2bd0;
        case 0x1b2bd4u: goto label_1b2bd4;
        case 0x1b2bd8u: goto label_1b2bd8;
        case 0x1b2bdcu: goto label_1b2bdc;
        case 0x1b2be0u: goto label_1b2be0;
        case 0x1b2be4u: goto label_1b2be4;
        case 0x1b2be8u: goto label_1b2be8;
        case 0x1b2becu: goto label_1b2bec;
        case 0x1b2bf0u: goto label_1b2bf0;
        case 0x1b2bf4u: goto label_1b2bf4;
        case 0x1b2bf8u: goto label_1b2bf8;
        case 0x1b2bfcu: goto label_1b2bfc;
        case 0x1b2c00u: goto label_1b2c00;
        case 0x1b2c04u: goto label_1b2c04;
        case 0x1b2c08u: goto label_1b2c08;
        case 0x1b2c0cu: goto label_1b2c0c;
        case 0x1b2c10u: goto label_1b2c10;
        case 0x1b2c14u: goto label_1b2c14;
        case 0x1b2c18u: goto label_1b2c18;
        case 0x1b2c1cu: goto label_1b2c1c;
        case 0x1b2c20u: goto label_1b2c20;
        case 0x1b2c24u: goto label_1b2c24;
        case 0x1b2c28u: goto label_1b2c28;
        case 0x1b2c2cu: goto label_1b2c2c;
        case 0x1b2c30u: goto label_1b2c30;
        case 0x1b2c34u: goto label_1b2c34;
        case 0x1b2c38u: goto label_1b2c38;
        case 0x1b2c3cu: goto label_1b2c3c;
        case 0x1b2c40u: goto label_1b2c40;
        case 0x1b2c44u: goto label_1b2c44;
        case 0x1b2c48u: goto label_1b2c48;
        case 0x1b2c4cu: goto label_1b2c4c;
        case 0x1b2c50u: goto label_1b2c50;
        case 0x1b2c54u: goto label_1b2c54;
        case 0x1b2c58u: goto label_1b2c58;
        case 0x1b2c5cu: goto label_1b2c5c;
        case 0x1b2c60u: goto label_1b2c60;
        case 0x1b2c64u: goto label_1b2c64;
        case 0x1b2c68u: goto label_1b2c68;
        case 0x1b2c6cu: goto label_1b2c6c;
        case 0x1b2c70u: goto label_1b2c70;
        case 0x1b2c74u: goto label_1b2c74;
        case 0x1b2c78u: goto label_1b2c78;
        case 0x1b2c7cu: goto label_1b2c7c;
        case 0x1b2c80u: goto label_1b2c80;
        case 0x1b2c84u: goto label_1b2c84;
        case 0x1b2c88u: goto label_1b2c88;
        case 0x1b2c8cu: goto label_1b2c8c;
        case 0x1b2c90u: goto label_1b2c90;
        case 0x1b2c94u: goto label_1b2c94;
        case 0x1b2c98u: goto label_1b2c98;
        case 0x1b2c9cu: goto label_1b2c9c;
        case 0x1b2ca0u: goto label_1b2ca0;
        case 0x1b2ca4u: goto label_1b2ca4;
        case 0x1b2ca8u: goto label_1b2ca8;
        case 0x1b2cacu: goto label_1b2cac;
        case 0x1b2cb0u: goto label_1b2cb0;
        case 0x1b2cb4u: goto label_1b2cb4;
        case 0x1b2cb8u: goto label_1b2cb8;
        case 0x1b2cbcu: goto label_1b2cbc;
        case 0x1b2cc0u: goto label_1b2cc0;
        case 0x1b2cc4u: goto label_1b2cc4;
        case 0x1b2cc8u: goto label_1b2cc8;
        case 0x1b2cccu: goto label_1b2ccc;
        case 0x1b2cd0u: goto label_1b2cd0;
        case 0x1b2cd4u: goto label_1b2cd4;
        case 0x1b2cd8u: goto label_1b2cd8;
        case 0x1b2cdcu: goto label_1b2cdc;
        case 0x1b2ce0u: goto label_1b2ce0;
        case 0x1b2ce4u: goto label_1b2ce4;
        case 0x1b2ce8u: goto label_1b2ce8;
        case 0x1b2cecu: goto label_1b2cec;
        case 0x1b2cf0u: goto label_1b2cf0;
        case 0x1b2cf4u: goto label_1b2cf4;
        case 0x1b2cf8u: goto label_1b2cf8;
        case 0x1b2cfcu: goto label_1b2cfc;
        case 0x1b2d00u: goto label_1b2d00;
        case 0x1b2d04u: goto label_1b2d04;
        case 0x1b2d08u: goto label_1b2d08;
        case 0x1b2d0cu: goto label_1b2d0c;
        case 0x1b2d10u: goto label_1b2d10;
        case 0x1b2d14u: goto label_1b2d14;
        case 0x1b2d18u: goto label_1b2d18;
        case 0x1b2d1cu: goto label_1b2d1c;
        case 0x1b2d20u: goto label_1b2d20;
        case 0x1b2d24u: goto label_1b2d24;
        case 0x1b2d28u: goto label_1b2d28;
        case 0x1b2d2cu: goto label_1b2d2c;
        case 0x1b2d30u: goto label_1b2d30;
        case 0x1b2d34u: goto label_1b2d34;
        case 0x1b2d38u: goto label_1b2d38;
        case 0x1b2d3cu: goto label_1b2d3c;
        case 0x1b2d40u: goto label_1b2d40;
        case 0x1b2d44u: goto label_1b2d44;
        case 0x1b2d48u: goto label_1b2d48;
        case 0x1b2d4cu: goto label_1b2d4c;
        case 0x1b2d50u: goto label_1b2d50;
        case 0x1b2d54u: goto label_1b2d54;
        case 0x1b2d58u: goto label_1b2d58;
        case 0x1b2d5cu: goto label_1b2d5c;
        case 0x1b2d60u: goto label_1b2d60;
        case 0x1b2d64u: goto label_1b2d64;
        case 0x1b2d68u: goto label_1b2d68;
        case 0x1b2d6cu: goto label_1b2d6c;
        case 0x1b2d70u: goto label_1b2d70;
        case 0x1b2d74u: goto label_1b2d74;
        case 0x1b2d78u: goto label_1b2d78;
        case 0x1b2d7cu: goto label_1b2d7c;
        case 0x1b2d80u: goto label_1b2d80;
        case 0x1b2d84u: goto label_1b2d84;
        case 0x1b2d88u: goto label_1b2d88;
        case 0x1b2d8cu: goto label_1b2d8c;
        case 0x1b2d90u: goto label_1b2d90;
        case 0x1b2d94u: goto label_1b2d94;
        case 0x1b2d98u: goto label_1b2d98;
        case 0x1b2d9cu: goto label_1b2d9c;
        case 0x1b2da0u: goto label_1b2da0;
        case 0x1b2da4u: goto label_1b2da4;
        case 0x1b2da8u: goto label_1b2da8;
        case 0x1b2dacu: goto label_1b2dac;
        case 0x1b2db0u: goto label_1b2db0;
        case 0x1b2db4u: goto label_1b2db4;
        case 0x1b2db8u: goto label_1b2db8;
        case 0x1b2dbcu: goto label_1b2dbc;
        case 0x1b2dc0u: goto label_1b2dc0;
        case 0x1b2dc4u: goto label_1b2dc4;
        case 0x1b2dc8u: goto label_1b2dc8;
        case 0x1b2dccu: goto label_1b2dcc;
        case 0x1b2dd0u: goto label_1b2dd0;
        case 0x1b2dd4u: goto label_1b2dd4;
        case 0x1b2dd8u: goto label_1b2dd8;
        case 0x1b2ddcu: goto label_1b2ddc;
        case 0x1b2de0u: goto label_1b2de0;
        case 0x1b2de4u: goto label_1b2de4;
        case 0x1b2de8u: goto label_1b2de8;
        case 0x1b2decu: goto label_1b2dec;
        case 0x1b2df0u: goto label_1b2df0;
        case 0x1b2df4u: goto label_1b2df4;
        case 0x1b2df8u: goto label_1b2df8;
        case 0x1b2dfcu: goto label_1b2dfc;
        case 0x1b2e00u: goto label_1b2e00;
        case 0x1b2e04u: goto label_1b2e04;
        case 0x1b2e08u: goto label_1b2e08;
        case 0x1b2e0cu: goto label_1b2e0c;
        case 0x1b2e10u: goto label_1b2e10;
        case 0x1b2e14u: goto label_1b2e14;
        case 0x1b2e18u: goto label_1b2e18;
        case 0x1b2e1cu: goto label_1b2e1c;
        case 0x1b2e20u: goto label_1b2e20;
        case 0x1b2e24u: goto label_1b2e24;
        case 0x1b2e28u: goto label_1b2e28;
        case 0x1b2e2cu: goto label_1b2e2c;
        case 0x1b2e30u: goto label_1b2e30;
        case 0x1b2e34u: goto label_1b2e34;
        case 0x1b2e38u: goto label_1b2e38;
        case 0x1b2e3cu: goto label_1b2e3c;
        case 0x1b2e40u: goto label_1b2e40;
        case 0x1b2e44u: goto label_1b2e44;
        case 0x1b2e48u: goto label_1b2e48;
        case 0x1b2e4cu: goto label_1b2e4c;
        case 0x1b2e50u: goto label_1b2e50;
        case 0x1b2e54u: goto label_1b2e54;
        case 0x1b2e58u: goto label_1b2e58;
        case 0x1b2e5cu: goto label_1b2e5c;
        case 0x1b2e60u: goto label_1b2e60;
        case 0x1b2e64u: goto label_1b2e64;
        case 0x1b2e68u: goto label_1b2e68;
        case 0x1b2e6cu: goto label_1b2e6c;
        case 0x1b2e70u: goto label_1b2e70;
        case 0x1b2e74u: goto label_1b2e74;
        case 0x1b2e78u: goto label_1b2e78;
        case 0x1b2e7cu: goto label_1b2e7c;
        case 0x1b2e80u: goto label_1b2e80;
        case 0x1b2e84u: goto label_1b2e84;
        case 0x1b2e88u: goto label_1b2e88;
        case 0x1b2e8cu: goto label_1b2e8c;
        case 0x1b2e90u: goto label_1b2e90;
        case 0x1b2e94u: goto label_1b2e94;
        case 0x1b2e98u: goto label_1b2e98;
        case 0x1b2e9cu: goto label_1b2e9c;
        case 0x1b2ea0u: goto label_1b2ea0;
        case 0x1b2ea4u: goto label_1b2ea4;
        case 0x1b2ea8u: goto label_1b2ea8;
        case 0x1b2eacu: goto label_1b2eac;
        case 0x1b2eb0u: goto label_1b2eb0;
        case 0x1b2eb4u: goto label_1b2eb4;
        case 0x1b2eb8u: goto label_1b2eb8;
        case 0x1b2ebcu: goto label_1b2ebc;
        case 0x1b2ec0u: goto label_1b2ec0;
        case 0x1b2ec4u: goto label_1b2ec4;
        case 0x1b2ec8u: goto label_1b2ec8;
        case 0x1b2eccu: goto label_1b2ecc;
        case 0x1b2ed0u: goto label_1b2ed0;
        case 0x1b2ed4u: goto label_1b2ed4;
        case 0x1b2ed8u: goto label_1b2ed8;
        case 0x1b2edcu: goto label_1b2edc;
        case 0x1b2ee0u: goto label_1b2ee0;
        case 0x1b2ee4u: goto label_1b2ee4;
        case 0x1b2ee8u: goto label_1b2ee8;
        case 0x1b2eecu: goto label_1b2eec;
        case 0x1b2ef0u: goto label_1b2ef0;
        case 0x1b2ef4u: goto label_1b2ef4;
        case 0x1b2ef8u: goto label_1b2ef8;
        case 0x1b2efcu: goto label_1b2efc;
        case 0x1b2f00u: goto label_1b2f00;
        case 0x1b2f04u: goto label_1b2f04;
        case 0x1b2f08u: goto label_1b2f08;
        case 0x1b2f0cu: goto label_1b2f0c;
        case 0x1b2f10u: goto label_1b2f10;
        case 0x1b2f14u: goto label_1b2f14;
        case 0x1b2f18u: goto label_1b2f18;
        case 0x1b2f1cu: goto label_1b2f1c;
        case 0x1b2f20u: goto label_1b2f20;
        case 0x1b2f24u: goto label_1b2f24;
        case 0x1b2f28u: goto label_1b2f28;
        case 0x1b2f2cu: goto label_1b2f2c;
        case 0x1b2f30u: goto label_1b2f30;
        case 0x1b2f34u: goto label_1b2f34;
        case 0x1b2f38u: goto label_1b2f38;
        case 0x1b2f3cu: goto label_1b2f3c;
        case 0x1b2f40u: goto label_1b2f40;
        case 0x1b2f44u: goto label_1b2f44;
        case 0x1b2f48u: goto label_1b2f48;
        case 0x1b2f4cu: goto label_1b2f4c;
        case 0x1b2f50u: goto label_1b2f50;
        case 0x1b2f54u: goto label_1b2f54;
        case 0x1b2f58u: goto label_1b2f58;
        case 0x1b2f5cu: goto label_1b2f5c;
        case 0x1b2f60u: goto label_1b2f60;
        case 0x1b2f64u: goto label_1b2f64;
        case 0x1b2f68u: goto label_1b2f68;
        case 0x1b2f6cu: goto label_1b2f6c;
        case 0x1b2f70u: goto label_1b2f70;
        case 0x1b2f74u: goto label_1b2f74;
        case 0x1b2f78u: goto label_1b2f78;
        case 0x1b2f7cu: goto label_1b2f7c;
        case 0x1b2f80u: goto label_1b2f80;
        case 0x1b2f84u: goto label_1b2f84;
        case 0x1b2f88u: goto label_1b2f88;
        case 0x1b2f8cu: goto label_1b2f8c;
        case 0x1b2f90u: goto label_1b2f90;
        case 0x1b2f94u: goto label_1b2f94;
        case 0x1b2f98u: goto label_1b2f98;
        case 0x1b2f9cu: goto label_1b2f9c;
        case 0x1b2fa0u: goto label_1b2fa0;
        case 0x1b2fa4u: goto label_1b2fa4;
        case 0x1b2fa8u: goto label_1b2fa8;
        case 0x1b2facu: goto label_1b2fac;
        case 0x1b2fb0u: goto label_1b2fb0;
        case 0x1b2fb4u: goto label_1b2fb4;
        case 0x1b2fb8u: goto label_1b2fb8;
        case 0x1b2fbcu: goto label_1b2fbc;
        case 0x1b2fc0u: goto label_1b2fc0;
        case 0x1b2fc4u: goto label_1b2fc4;
        case 0x1b2fc8u: goto label_1b2fc8;
        case 0x1b2fccu: goto label_1b2fcc;
        case 0x1b2fd0u: goto label_1b2fd0;
        case 0x1b2fd4u: goto label_1b2fd4;
        case 0x1b2fd8u: goto label_1b2fd8;
        case 0x1b2fdcu: goto label_1b2fdc;
        case 0x1b2fe0u: goto label_1b2fe0;
        case 0x1b2fe4u: goto label_1b2fe4;
        case 0x1b2fe8u: goto label_1b2fe8;
        case 0x1b2fecu: goto label_1b2fec;
        case 0x1b2ff0u: goto label_1b2ff0;
        case 0x1b2ff4u: goto label_1b2ff4;
        case 0x1b2ff8u: goto label_1b2ff8;
        case 0x1b2ffcu: goto label_1b2ffc;
        case 0x1b3000u: goto label_1b3000;
        case 0x1b3004u: goto label_1b3004;
        case 0x1b3008u: goto label_1b3008;
        case 0x1b300cu: goto label_1b300c;
        case 0x1b3010u: goto label_1b3010;
        case 0x1b3014u: goto label_1b3014;
        case 0x1b3018u: goto label_1b3018;
        case 0x1b301cu: goto label_1b301c;
        case 0x1b3020u: goto label_1b3020;
        case 0x1b3024u: goto label_1b3024;
        case 0x1b3028u: goto label_1b3028;
        case 0x1b302cu: goto label_1b302c;
        case 0x1b3030u: goto label_1b3030;
        case 0x1b3034u: goto label_1b3034;
        case 0x1b3038u: goto label_1b3038;
        case 0x1b303cu: goto label_1b303c;
        case 0x1b3040u: goto label_1b3040;
        case 0x1b3044u: goto label_1b3044;
        case 0x1b3048u: goto label_1b3048;
        case 0x1b304cu: goto label_1b304c;
        case 0x1b3050u: goto label_1b3050;
        case 0x1b3054u: goto label_1b3054;
        case 0x1b3058u: goto label_1b3058;
        case 0x1b305cu: goto label_1b305c;
        case 0x1b3060u: goto label_1b3060;
        case 0x1b3064u: goto label_1b3064;
        case 0x1b3068u: goto label_1b3068;
        case 0x1b306cu: goto label_1b306c;
        case 0x1b3070u: goto label_1b3070;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b3078u: goto label_1b3078;
        case 0x1b307cu: goto label_1b307c;
        case 0x1b3080u: goto label_1b3080;
        case 0x1b3084u: goto label_1b3084;
        case 0x1b3088u: goto label_1b3088;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b3094u: goto label_1b3094;
        case 0x1b3098u: goto label_1b3098;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30a0u: goto label_1b30a0;
        case 0x1b30a4u: goto label_1b30a4;
        case 0x1b30a8u: goto label_1b30a8;
        case 0x1b30acu: goto label_1b30ac;
        case 0x1b30b0u: goto label_1b30b0;
        case 0x1b30b4u: goto label_1b30b4;
        case 0x1b30b8u: goto label_1b30b8;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30c0u: goto label_1b30c0;
        case 0x1b30c4u: goto label_1b30c4;
        case 0x1b30c8u: goto label_1b30c8;
        case 0x1b30ccu: goto label_1b30cc;
        case 0x1b30d0u: goto label_1b30d0;
        case 0x1b30d4u: goto label_1b30d4;
        case 0x1b30d8u: goto label_1b30d8;
        case 0x1b30dcu: goto label_1b30dc;
        case 0x1b30e0u: goto label_1b30e0;
        case 0x1b30e4u: goto label_1b30e4;
        case 0x1b30e8u: goto label_1b30e8;
        case 0x1b30ecu: goto label_1b30ec;
        case 0x1b30f0u: goto label_1b30f0;
        case 0x1b30f4u: goto label_1b30f4;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b30fcu: goto label_1b30fc;
        case 0x1b3100u: goto label_1b3100;
        case 0x1b3104u: goto label_1b3104;
        case 0x1b3108u: goto label_1b3108;
        case 0x1b310cu: goto label_1b310c;
        case 0x1b3110u: goto label_1b3110;
        case 0x1b3114u: goto label_1b3114;
        case 0x1b3118u: goto label_1b3118;
        case 0x1b311cu: goto label_1b311c;
        case 0x1b3120u: goto label_1b3120;
        case 0x1b3124u: goto label_1b3124;
        case 0x1b3128u: goto label_1b3128;
        case 0x1b312cu: goto label_1b312c;
        case 0x1b3130u: goto label_1b3130;
        case 0x1b3134u: goto label_1b3134;
        case 0x1b3138u: goto label_1b3138;
        case 0x1b313cu: goto label_1b313c;
        case 0x1b3140u: goto label_1b3140;
        case 0x1b3144u: goto label_1b3144;
        case 0x1b3148u: goto label_1b3148;
        case 0x1b314cu: goto label_1b314c;
        case 0x1b3150u: goto label_1b3150;
        case 0x1b3154u: goto label_1b3154;
        case 0x1b3158u: goto label_1b3158;
        case 0x1b315cu: goto label_1b315c;
        case 0x1b3160u: goto label_1b3160;
        case 0x1b3164u: goto label_1b3164;
        case 0x1b3168u: goto label_1b3168;
        case 0x1b316cu: goto label_1b316c;
        case 0x1b3170u: goto label_1b3170;
        case 0x1b3174u: goto label_1b3174;
        case 0x1b3178u: goto label_1b3178;
        case 0x1b317cu: goto label_1b317c;
        case 0x1b3180u: goto label_1b3180;
        case 0x1b3184u: goto label_1b3184;
        case 0x1b3188u: goto label_1b3188;
        case 0x1b318cu: goto label_1b318c;
        case 0x1b3190u: goto label_1b3190;
        case 0x1b3194u: goto label_1b3194;
        case 0x1b3198u: goto label_1b3198;
        case 0x1b319cu: goto label_1b319c;
        case 0x1b31a0u: goto label_1b31a0;
        case 0x1b31a4u: goto label_1b31a4;
        case 0x1b31a8u: goto label_1b31a8;
        case 0x1b31acu: goto label_1b31ac;
        case 0x1b31b0u: goto label_1b31b0;
        case 0x1b31b4u: goto label_1b31b4;
        case 0x1b31b8u: goto label_1b31b8;
        case 0x1b31bcu: goto label_1b31bc;
        case 0x1b31c0u: goto label_1b31c0;
        case 0x1b31c4u: goto label_1b31c4;
        case 0x1b31c8u: goto label_1b31c8;
        case 0x1b31ccu: goto label_1b31cc;
        case 0x1b31d0u: goto label_1b31d0;
        case 0x1b31d4u: goto label_1b31d4;
        case 0x1b31d8u: goto label_1b31d8;
        case 0x1b31dcu: goto label_1b31dc;
        case 0x1b31e0u: goto label_1b31e0;
        case 0x1b31e4u: goto label_1b31e4;
        case 0x1b31e8u: goto label_1b31e8;
        case 0x1b31ecu: goto label_1b31ec;
        case 0x1b31f0u: goto label_1b31f0;
        case 0x1b31f4u: goto label_1b31f4;
        case 0x1b31f8u: goto label_1b31f8;
        case 0x1b31fcu: goto label_1b31fc;
        case 0x1b3200u: goto label_1b3200;
        case 0x1b3204u: goto label_1b3204;
        case 0x1b3208u: goto label_1b3208;
        case 0x1b320cu: goto label_1b320c;
        case 0x1b3210u: goto label_1b3210;
        case 0x1b3214u: goto label_1b3214;
        case 0x1b3218u: goto label_1b3218;
        case 0x1b321cu: goto label_1b321c;
        case 0x1b3220u: goto label_1b3220;
        case 0x1b3224u: goto label_1b3224;
        case 0x1b3228u: goto label_1b3228;
        case 0x1b322cu: goto label_1b322c;
        case 0x1b3230u: goto label_1b3230;
        case 0x1b3234u: goto label_1b3234;
        case 0x1b3238u: goto label_1b3238;
        case 0x1b323cu: goto label_1b323c;
        case 0x1b3240u: goto label_1b3240;
        case 0x1b3244u: goto label_1b3244;
        case 0x1b3248u: goto label_1b3248;
        case 0x1b324cu: goto label_1b324c;
        case 0x1b3250u: goto label_1b3250;
        case 0x1b3254u: goto label_1b3254;
        case 0x1b3258u: goto label_1b3258;
        case 0x1b325cu: goto label_1b325c;
        case 0x1b3260u: goto label_1b3260;
        case 0x1b3264u: goto label_1b3264;
        case 0x1b3268u: goto label_1b3268;
        case 0x1b326cu: goto label_1b326c;
        case 0x1b3270u: goto label_1b3270;
        case 0x1b3274u: goto label_1b3274;
        case 0x1b3278u: goto label_1b3278;
        case 0x1b327cu: goto label_1b327c;
        case 0x1b3280u: goto label_1b3280;
        case 0x1b3284u: goto label_1b3284;
        case 0x1b3288u: goto label_1b3288;
        case 0x1b328cu: goto label_1b328c;
        case 0x1b3290u: goto label_1b3290;
        case 0x1b3294u: goto label_1b3294;
        case 0x1b3298u: goto label_1b3298;
        case 0x1b329cu: goto label_1b329c;
        case 0x1b32a0u: goto label_1b32a0;
        case 0x1b32a4u: goto label_1b32a4;
        case 0x1b32a8u: goto label_1b32a8;
        case 0x1b32acu: goto label_1b32ac;
        case 0x1b32b0u: goto label_1b32b0;
        case 0x1b32b4u: goto label_1b32b4;
        case 0x1b32b8u: goto label_1b32b8;
        case 0x1b32bcu: goto label_1b32bc;
        case 0x1b32c0u: goto label_1b32c0;
        case 0x1b32c4u: goto label_1b32c4;
        case 0x1b32c8u: goto label_1b32c8;
        case 0x1b32ccu: goto label_1b32cc;
        case 0x1b32d0u: goto label_1b32d0;
        case 0x1b32d4u: goto label_1b32d4;
        case 0x1b32d8u: goto label_1b32d8;
        case 0x1b32dcu: goto label_1b32dc;
        case 0x1b32e0u: goto label_1b32e0;
        case 0x1b32e4u: goto label_1b32e4;
        case 0x1b32e8u: goto label_1b32e8;
        case 0x1b32ecu: goto label_1b32ec;
        case 0x1b32f0u: goto label_1b32f0;
        case 0x1b32f4u: goto label_1b32f4;
        case 0x1b32f8u: goto label_1b32f8;
        case 0x1b32fcu: goto label_1b32fc;
        case 0x1b3300u: goto label_1b3300;
        case 0x1b3304u: goto label_1b3304;
        case 0x1b3308u: goto label_1b3308;
        case 0x1b330cu: goto label_1b330c;
        case 0x1b3310u: goto label_1b3310;
        case 0x1b3314u: goto label_1b3314;
        case 0x1b3318u: goto label_1b3318;
        case 0x1b331cu: goto label_1b331c;
        case 0x1b3320u: goto label_1b3320;
        case 0x1b3324u: goto label_1b3324;
        case 0x1b3328u: goto label_1b3328;
        case 0x1b332cu: goto label_1b332c;
        case 0x1b3330u: goto label_1b3330;
        case 0x1b3334u: goto label_1b3334;
        case 0x1b3338u: goto label_1b3338;
        case 0x1b333cu: goto label_1b333c;
        case 0x1b3340u: goto label_1b3340;
        case 0x1b3344u: goto label_1b3344;
        case 0x1b3348u: goto label_1b3348;
        case 0x1b334cu: goto label_1b334c;
        case 0x1b3350u: goto label_1b3350;
        case 0x1b3354u: goto label_1b3354;
        case 0x1b3358u: goto label_1b3358;
        case 0x1b335cu: goto label_1b335c;
        case 0x1b3360u: goto label_1b3360;
        case 0x1b3364u: goto label_1b3364;
        case 0x1b3368u: goto label_1b3368;
        case 0x1b336cu: goto label_1b336c;
        case 0x1b3370u: goto label_1b3370;
        case 0x1b3374u: goto label_1b3374;
        case 0x1b3378u: goto label_1b3378;
        case 0x1b337cu: goto label_1b337c;
        case 0x1b3380u: goto label_1b3380;
        case 0x1b3384u: goto label_1b3384;
        case 0x1b3388u: goto label_1b3388;
        case 0x1b338cu: goto label_1b338c;
        case 0x1b3390u: goto label_1b3390;
        case 0x1b3394u: goto label_1b3394;
        case 0x1b3398u: goto label_1b3398;
        case 0x1b339cu: goto label_1b339c;
        case 0x1b33a0u: goto label_1b33a0;
        case 0x1b33a4u: goto label_1b33a4;
        case 0x1b33a8u: goto label_1b33a8;
        case 0x1b33acu: goto label_1b33ac;
        case 0x1b33b0u: goto label_1b33b0;
        case 0x1b33b4u: goto label_1b33b4;
        case 0x1b33b8u: goto label_1b33b8;
        case 0x1b33bcu: goto label_1b33bc;
        case 0x1b33c0u: goto label_1b33c0;
        case 0x1b33c4u: goto label_1b33c4;
        case 0x1b33c8u: goto label_1b33c8;
        case 0x1b33ccu: goto label_1b33cc;
        case 0x1b33d0u: goto label_1b33d0;
        case 0x1b33d4u: goto label_1b33d4;
        case 0x1b33d8u: goto label_1b33d8;
        case 0x1b33dcu: goto label_1b33dc;
        case 0x1b33e0u: goto label_1b33e0;
        case 0x1b33e4u: goto label_1b33e4;
        case 0x1b33e8u: goto label_1b33e8;
        case 0x1b33ecu: goto label_1b33ec;
        case 0x1b33f0u: goto label_1b33f0;
        case 0x1b33f4u: goto label_1b33f4;
        case 0x1b33f8u: goto label_1b33f8;
        case 0x1b33fcu: goto label_1b33fc;
        case 0x1b3400u: goto label_1b3400;
        case 0x1b3404u: goto label_1b3404;
        case 0x1b3408u: goto label_1b3408;
        case 0x1b340cu: goto label_1b340c;
        case 0x1b3410u: goto label_1b3410;
        case 0x1b3414u: goto label_1b3414;
        case 0x1b3418u: goto label_1b3418;
        case 0x1b341cu: goto label_1b341c;
        case 0x1b3420u: goto label_1b3420;
        case 0x1b3424u: goto label_1b3424;
        case 0x1b3428u: goto label_1b3428;
        case 0x1b342cu: goto label_1b342c;
        case 0x1b3430u: goto label_1b3430;
        case 0x1b3434u: goto label_1b3434;
        case 0x1b3438u: goto label_1b3438;
        case 0x1b343cu: goto label_1b343c;
        case 0x1b3440u: goto label_1b3440;
        case 0x1b3444u: goto label_1b3444;
        case 0x1b3448u: goto label_1b3448;
        case 0x1b344cu: goto label_1b344c;
        case 0x1b3450u: goto label_1b3450;
        case 0x1b3454u: goto label_1b3454;
        case 0x1b3458u: goto label_1b3458;
        case 0x1b345cu: goto label_1b345c;
        case 0x1b3460u: goto label_1b3460;
        case 0x1b3464u: goto label_1b3464;
        case 0x1b3468u: goto label_1b3468;
        case 0x1b346cu: goto label_1b346c;
        case 0x1b3470u: goto label_1b3470;
        case 0x1b3474u: goto label_1b3474;
        case 0x1b3478u: goto label_1b3478;
        case 0x1b347cu: goto label_1b347c;
        case 0x1b3480u: goto label_1b3480;
        case 0x1b3484u: goto label_1b3484;
        case 0x1b3488u: goto label_1b3488;
        case 0x1b348cu: goto label_1b348c;
        case 0x1b3490u: goto label_1b3490;
        case 0x1b3494u: goto label_1b3494;
        case 0x1b3498u: goto label_1b3498;
        case 0x1b349cu: goto label_1b349c;
        case 0x1b34a0u: goto label_1b34a0;
        case 0x1b34a4u: goto label_1b34a4;
        case 0x1b34a8u: goto label_1b34a8;
        case 0x1b34acu: goto label_1b34ac;
        case 0x1b34b0u: goto label_1b34b0;
        case 0x1b34b4u: goto label_1b34b4;
        case 0x1b34b8u: goto label_1b34b8;
        case 0x1b34bcu: goto label_1b34bc;
        case 0x1b34c0u: goto label_1b34c0;
        case 0x1b34c4u: goto label_1b34c4;
        case 0x1b34c8u: goto label_1b34c8;
        case 0x1b34ccu: goto label_1b34cc;
        case 0x1b34d0u: goto label_1b34d0;
        case 0x1b34d4u: goto label_1b34d4;
        case 0x1b34d8u: goto label_1b34d8;
        case 0x1b34dcu: goto label_1b34dc;
        case 0x1b34e0u: goto label_1b34e0;
        case 0x1b34e4u: goto label_1b34e4;
        case 0x1b34e8u: goto label_1b34e8;
        case 0x1b34ecu: goto label_1b34ec;
        case 0x1b34f0u: goto label_1b34f0;
        case 0x1b34f4u: goto label_1b34f4;
        case 0x1b34f8u: goto label_1b34f8;
        case 0x1b34fcu: goto label_1b34fc;
        case 0x1b3500u: goto label_1b3500;
        case 0x1b3504u: goto label_1b3504;
        case 0x1b3508u: goto label_1b3508;
        case 0x1b350cu: goto label_1b350c;
        case 0x1b3510u: goto label_1b3510;
        case 0x1b3514u: goto label_1b3514;
        case 0x1b3518u: goto label_1b3518;
        case 0x1b351cu: goto label_1b351c;
        case 0x1b3520u: goto label_1b3520;
        case 0x1b3524u: goto label_1b3524;
        case 0x1b3528u: goto label_1b3528;
        case 0x1b352cu: goto label_1b352c;
        case 0x1b3530u: goto label_1b3530;
        case 0x1b3534u: goto label_1b3534;
        case 0x1b3538u: goto label_1b3538;
        case 0x1b353cu: goto label_1b353c;
        case 0x1b3540u: goto label_1b3540;
        case 0x1b3544u: goto label_1b3544;
        case 0x1b3548u: goto label_1b3548;
        case 0x1b354cu: goto label_1b354c;
        case 0x1b3550u: goto label_1b3550;
        case 0x1b3554u: goto label_1b3554;
        case 0x1b3558u: goto label_1b3558;
        case 0x1b355cu: goto label_1b355c;
        case 0x1b3560u: goto label_1b3560;
        case 0x1b3564u: goto label_1b3564;
        case 0x1b3568u: goto label_1b3568;
        case 0x1b356cu: goto label_1b356c;
        case 0x1b3570u: goto label_1b3570;
        case 0x1b3574u: goto label_1b3574;
        case 0x1b3578u: goto label_1b3578;
        case 0x1b357cu: goto label_1b357c;
        case 0x1b3580u: goto label_1b3580;
        case 0x1b3584u: goto label_1b3584;
        case 0x1b3588u: goto label_1b3588;
        case 0x1b358cu: goto label_1b358c;
        case 0x1b3590u: goto label_1b3590;
        case 0x1b3594u: goto label_1b3594;
        case 0x1b3598u: goto label_1b3598;
        case 0x1b359cu: goto label_1b359c;
        case 0x1b35a0u: goto label_1b35a0;
        case 0x1b35a4u: goto label_1b35a4;
        case 0x1b35a8u: goto label_1b35a8;
        case 0x1b35acu: goto label_1b35ac;
        case 0x1b35b0u: goto label_1b35b0;
        case 0x1b35b4u: goto label_1b35b4;
        case 0x1b35b8u: goto label_1b35b8;
        case 0x1b35bcu: goto label_1b35bc;
        case 0x1b35c0u: goto label_1b35c0;
        case 0x1b35c4u: goto label_1b35c4;
        case 0x1b35c8u: goto label_1b35c8;
        case 0x1b35ccu: goto label_1b35cc;
        case 0x1b35d0u: goto label_1b35d0;
        case 0x1b35d4u: goto label_1b35d4;
        case 0x1b35d8u: goto label_1b35d8;
        case 0x1b35dcu: goto label_1b35dc;
        case 0x1b35e0u: goto label_1b35e0;
        case 0x1b35e4u: goto label_1b35e4;
        case 0x1b35e8u: goto label_1b35e8;
        case 0x1b35ecu: goto label_1b35ec;
        case 0x1b35f0u: goto label_1b35f0;
        case 0x1b35f4u: goto label_1b35f4;
        case 0x1b35f8u: goto label_1b35f8;
        case 0x1b35fcu: goto label_1b35fc;
        case 0x1b3600u: goto label_1b3600;
        case 0x1b3604u: goto label_1b3604;
        case 0x1b3608u: goto label_1b3608;
        case 0x1b360cu: goto label_1b360c;
        case 0x1b3610u: goto label_1b3610;
        case 0x1b3614u: goto label_1b3614;
        case 0x1b3618u: goto label_1b3618;
        case 0x1b361cu: goto label_1b361c;
        case 0x1b3620u: goto label_1b3620;
        case 0x1b3624u: goto label_1b3624;
        case 0x1b3628u: goto label_1b3628;
        case 0x1b362cu: goto label_1b362c;
        case 0x1b3630u: goto label_1b3630;
        case 0x1b3634u: goto label_1b3634;
        case 0x1b3638u: goto label_1b3638;
        case 0x1b363cu: goto label_1b363c;
        case 0x1b3640u: goto label_1b3640;
        case 0x1b3644u: goto label_1b3644;
        case 0x1b3648u: goto label_1b3648;
        case 0x1b364cu: goto label_1b364c;
        case 0x1b3650u: goto label_1b3650;
        case 0x1b3654u: goto label_1b3654;
        case 0x1b3658u: goto label_1b3658;
        case 0x1b365cu: goto label_1b365c;
        case 0x1b3660u: goto label_1b3660;
        case 0x1b3664u: goto label_1b3664;
        case 0x1b3668u: goto label_1b3668;
        case 0x1b366cu: goto label_1b366c;
        case 0x1b3670u: goto label_1b3670;
        case 0x1b3674u: goto label_1b3674;
        case 0x1b3678u: goto label_1b3678;
        case 0x1b367cu: goto label_1b367c;
        case 0x1b3680u: goto label_1b3680;
        case 0x1b3684u: goto label_1b3684;
        case 0x1b3688u: goto label_1b3688;
        case 0x1b368cu: goto label_1b368c;
        case 0x1b3690u: goto label_1b3690;
        case 0x1b3694u: goto label_1b3694;
        case 0x1b3698u: goto label_1b3698;
        case 0x1b369cu: goto label_1b369c;
        case 0x1b36a0u: goto label_1b36a0;
        case 0x1b36a4u: goto label_1b36a4;
        case 0x1b36a8u: goto label_1b36a8;
        case 0x1b36acu: goto label_1b36ac;
        case 0x1b36b0u: goto label_1b36b0;
        case 0x1b36b4u: goto label_1b36b4;
        case 0x1b36b8u: goto label_1b36b8;
        case 0x1b36bcu: goto label_1b36bc;
        case 0x1b36c0u: goto label_1b36c0;
        case 0x1b36c4u: goto label_1b36c4;
        case 0x1b36c8u: goto label_1b36c8;
        case 0x1b36ccu: goto label_1b36cc;
        case 0x1b36d0u: goto label_1b36d0;
        case 0x1b36d4u: goto label_1b36d4;
        case 0x1b36d8u: goto label_1b36d8;
        case 0x1b36dcu: goto label_1b36dc;
        case 0x1b36e0u: goto label_1b36e0;
        case 0x1b36e4u: goto label_1b36e4;
        case 0x1b36e8u: goto label_1b36e8;
        case 0x1b36ecu: goto label_1b36ec;
        case 0x1b36f0u: goto label_1b36f0;
        case 0x1b36f4u: goto label_1b36f4;
        case 0x1b36f8u: goto label_1b36f8;
        case 0x1b36fcu: goto label_1b36fc;
        case 0x1b3700u: goto label_1b3700;
        case 0x1b3704u: goto label_1b3704;
        case 0x1b3708u: goto label_1b3708;
        case 0x1b370cu: goto label_1b370c;
        case 0x1b3710u: goto label_1b3710;
        case 0x1b3714u: goto label_1b3714;
        case 0x1b3718u: goto label_1b3718;
        case 0x1b371cu: goto label_1b371c;
        case 0x1b3720u: goto label_1b3720;
        case 0x1b3724u: goto label_1b3724;
        case 0x1b3728u: goto label_1b3728;
        case 0x1b372cu: goto label_1b372c;
        case 0x1b3730u: goto label_1b3730;
        case 0x1b3734u: goto label_1b3734;
        case 0x1b3738u: goto label_1b3738;
        case 0x1b373cu: goto label_1b373c;
        case 0x1b3740u: goto label_1b3740;
        case 0x1b3744u: goto label_1b3744;
        case 0x1b3748u: goto label_1b3748;
        case 0x1b374cu: goto label_1b374c;
        case 0x1b3750u: goto label_1b3750;
        case 0x1b3754u: goto label_1b3754;
        case 0x1b3758u: goto label_1b3758;
        case 0x1b375cu: goto label_1b375c;
        case 0x1b3760u: goto label_1b3760;
        case 0x1b3764u: goto label_1b3764;
        case 0x1b3768u: goto label_1b3768;
        case 0x1b376cu: goto label_1b376c;
        case 0x1b3770u: goto label_1b3770;
        case 0x1b3774u: goto label_1b3774;
        case 0x1b3778u: goto label_1b3778;
        case 0x1b377cu: goto label_1b377c;
        case 0x1b3780u: goto label_1b3780;
        case 0x1b3784u: goto label_1b3784;
        case 0x1b3788u: goto label_1b3788;
        case 0x1b378cu: goto label_1b378c;
        case 0x1b3790u: goto label_1b3790;
        case 0x1b3794u: goto label_1b3794;
        case 0x1b3798u: goto label_1b3798;
        case 0x1b379cu: goto label_1b379c;
        case 0x1b37a0u: goto label_1b37a0;
        case 0x1b37a4u: goto label_1b37a4;
        case 0x1b37a8u: goto label_1b37a8;
        case 0x1b37acu: goto label_1b37ac;
        case 0x1b37b0u: goto label_1b37b0;
        case 0x1b37b4u: goto label_1b37b4;
        case 0x1b37b8u: goto label_1b37b8;
        case 0x1b37bcu: goto label_1b37bc;
        case 0x1b37c0u: goto label_1b37c0;
        case 0x1b37c4u: goto label_1b37c4;
        case 0x1b37c8u: goto label_1b37c8;
        case 0x1b37ccu: goto label_1b37cc;
        case 0x1b37d0u: goto label_1b37d0;
        case 0x1b37d4u: goto label_1b37d4;
        case 0x1b37d8u: goto label_1b37d8;
        case 0x1b37dcu: goto label_1b37dc;
        case 0x1b37e0u: goto label_1b37e0;
        case 0x1b37e4u: goto label_1b37e4;
        case 0x1b37e8u: goto label_1b37e8;
        case 0x1b37ecu: goto label_1b37ec;
        case 0x1b37f0u: goto label_1b37f0;
        case 0x1b37f4u: goto label_1b37f4;
        case 0x1b37f8u: goto label_1b37f8;
        case 0x1b37fcu: goto label_1b37fc;
        case 0x1b3800u: goto label_1b3800;
        case 0x1b3804u: goto label_1b3804;
        case 0x1b3808u: goto label_1b3808;
        case 0x1b380cu: goto label_1b380c;
        case 0x1b3810u: goto label_1b3810;
        case 0x1b3814u: goto label_1b3814;
        case 0x1b3818u: goto label_1b3818;
        case 0x1b381cu: goto label_1b381c;
        case 0x1b3820u: goto label_1b3820;
        case 0x1b3824u: goto label_1b3824;
        case 0x1b3828u: goto label_1b3828;
        case 0x1b382cu: goto label_1b382c;
        case 0x1b3830u: goto label_1b3830;
        case 0x1b3834u: goto label_1b3834;
        case 0x1b3838u: goto label_1b3838;
        case 0x1b383cu: goto label_1b383c;
        case 0x1b3840u: goto label_1b3840;
        case 0x1b3844u: goto label_1b3844;
        case 0x1b3848u: goto label_1b3848;
        case 0x1b384cu: goto label_1b384c;
        case 0x1b3850u: goto label_1b3850;
        case 0x1b3854u: goto label_1b3854;
        case 0x1b3858u: goto label_1b3858;
        case 0x1b385cu: goto label_1b385c;
        case 0x1b3860u: goto label_1b3860;
        case 0x1b3864u: goto label_1b3864;
        case 0x1b3868u: goto label_1b3868;
        case 0x1b386cu: goto label_1b386c;
        case 0x1b3870u: goto label_1b3870;
        case 0x1b3874u: goto label_1b3874;
        case 0x1b3878u: goto label_1b3878;
        case 0x1b387cu: goto label_1b387c;
        case 0x1b3880u: goto label_1b3880;
        case 0x1b3884u: goto label_1b3884;
        case 0x1b3888u: goto label_1b3888;
        case 0x1b388cu: goto label_1b388c;
        case 0x1b3890u: goto label_1b3890;
        case 0x1b3894u: goto label_1b3894;
        case 0x1b3898u: goto label_1b3898;
        case 0x1b389cu: goto label_1b389c;
        case 0x1b38a0u: goto label_1b38a0;
        case 0x1b38a4u: goto label_1b38a4;
        case 0x1b38a8u: goto label_1b38a8;
        case 0x1b38acu: goto label_1b38ac;
        case 0x1b38b0u: goto label_1b38b0;
        case 0x1b38b4u: goto label_1b38b4;
        case 0x1b38b8u: goto label_1b38b8;
        case 0x1b38bcu: goto label_1b38bc;
        case 0x1b38c0u: goto label_1b38c0;
        case 0x1b38c4u: goto label_1b38c4;
        case 0x1b38c8u: goto label_1b38c8;
        case 0x1b38ccu: goto label_1b38cc;
        case 0x1b38d0u: goto label_1b38d0;
        case 0x1b38d4u: goto label_1b38d4;
        case 0x1b38d8u: goto label_1b38d8;
        case 0x1b38dcu: goto label_1b38dc;
        case 0x1b38e0u: goto label_1b38e0;
        case 0x1b38e4u: goto label_1b38e4;
        case 0x1b38e8u: goto label_1b38e8;
        case 0x1b38ecu: goto label_1b38ec;
        case 0x1b38f0u: goto label_1b38f0;
        case 0x1b38f4u: goto label_1b38f4;
        case 0x1b38f8u: goto label_1b38f8;
        case 0x1b38fcu: goto label_1b38fc;
        case 0x1b3900u: goto label_1b3900;
        case 0x1b3904u: goto label_1b3904;
        case 0x1b3908u: goto label_1b3908;
        case 0x1b390cu: goto label_1b390c;
        case 0x1b3910u: goto label_1b3910;
        case 0x1b3914u: goto label_1b3914;
        case 0x1b3918u: goto label_1b3918;
        case 0x1b391cu: goto label_1b391c;
        case 0x1b3920u: goto label_1b3920;
        case 0x1b3924u: goto label_1b3924;
        case 0x1b3928u: goto label_1b3928;
        case 0x1b392cu: goto label_1b392c;
        case 0x1b3930u: goto label_1b3930;
        case 0x1b3934u: goto label_1b3934;
        case 0x1b3938u: goto label_1b3938;
        case 0x1b393cu: goto label_1b393c;
        case 0x1b3940u: goto label_1b3940;
        case 0x1b3944u: goto label_1b3944;
        case 0x1b3948u: goto label_1b3948;
        case 0x1b394cu: goto label_1b394c;
        case 0x1b3950u: goto label_1b3950;
        case 0x1b3954u: goto label_1b3954;
        case 0x1b3958u: goto label_1b3958;
        case 0x1b395cu: goto label_1b395c;
        case 0x1b3960u: goto label_1b3960;
        case 0x1b3964u: goto label_1b3964;
        case 0x1b3968u: goto label_1b3968;
        case 0x1b396cu: goto label_1b396c;
        case 0x1b3970u: goto label_1b3970;
        case 0x1b3974u: goto label_1b3974;
        case 0x1b3978u: goto label_1b3978;
        case 0x1b397cu: goto label_1b397c;
        case 0x1b3980u: goto label_1b3980;
        case 0x1b3984u: goto label_1b3984;
        case 0x1b3988u: goto label_1b3988;
        case 0x1b398cu: goto label_1b398c;
        case 0x1b3990u: goto label_1b3990;
        case 0x1b3994u: goto label_1b3994;
        case 0x1b3998u: goto label_1b3998;
        case 0x1b399cu: goto label_1b399c;
        case 0x1b39a0u: goto label_1b39a0;
        case 0x1b39a4u: goto label_1b39a4;
        case 0x1b39a8u: goto label_1b39a8;
        case 0x1b39acu: goto label_1b39ac;
        case 0x1b39b0u: goto label_1b39b0;
        case 0x1b39b4u: goto label_1b39b4;
        case 0x1b39b8u: goto label_1b39b8;
        case 0x1b39bcu: goto label_1b39bc;
        case 0x1b39c0u: goto label_1b39c0;
        case 0x1b39c4u: goto label_1b39c4;
        case 0x1b39c8u: goto label_1b39c8;
        case 0x1b39ccu: goto label_1b39cc;
        case 0x1b39d0u: goto label_1b39d0;
        case 0x1b39d4u: goto label_1b39d4;
        case 0x1b39d8u: goto label_1b39d8;
        case 0x1b39dcu: goto label_1b39dc;
        case 0x1b39e0u: goto label_1b39e0;
        case 0x1b39e4u: goto label_1b39e4;
        case 0x1b39e8u: goto label_1b39e8;
        case 0x1b39ecu: goto label_1b39ec;
        case 0x1b39f0u: goto label_1b39f0;
        case 0x1b39f4u: goto label_1b39f4;
        case 0x1b39f8u: goto label_1b39f8;
        case 0x1b39fcu: goto label_1b39fc;
        case 0x1b3a00u: goto label_1b3a00;
        case 0x1b3a04u: goto label_1b3a04;
        case 0x1b3a08u: goto label_1b3a08;
        case 0x1b3a0cu: goto label_1b3a0c;
        case 0x1b3a10u: goto label_1b3a10;
        case 0x1b3a14u: goto label_1b3a14;
        case 0x1b3a18u: goto label_1b3a18;
        case 0x1b3a1cu: goto label_1b3a1c;
        case 0x1b3a20u: goto label_1b3a20;
        case 0x1b3a24u: goto label_1b3a24;
        case 0x1b3a28u: goto label_1b3a28;
        case 0x1b3a2cu: goto label_1b3a2c;
        case 0x1b3a30u: goto label_1b3a30;
        case 0x1b3a34u: goto label_1b3a34;
        case 0x1b3a38u: goto label_1b3a38;
        case 0x1b3a3cu: goto label_1b3a3c;
        case 0x1b3a40u: goto label_1b3a40;
        case 0x1b3a44u: goto label_1b3a44;
        case 0x1b3a48u: goto label_1b3a48;
        case 0x1b3a4cu: goto label_1b3a4c;
        case 0x1b3a50u: goto label_1b3a50;
        case 0x1b3a54u: goto label_1b3a54;
        case 0x1b3a58u: goto label_1b3a58;
        case 0x1b3a5cu: goto label_1b3a5c;
        case 0x1b3a60u: goto label_1b3a60;
        case 0x1b3a64u: goto label_1b3a64;
        case 0x1b3a68u: goto label_1b3a68;
        case 0x1b3a6cu: goto label_1b3a6c;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a74u: goto label_1b3a74;
        case 0x1b3a78u: goto label_1b3a78;
        case 0x1b3a7cu: goto label_1b3a7c;
        case 0x1b3a80u: goto label_1b3a80;
        default: break;
    }

    ctx->pc = 0x1b2b50u;

label_1b2b50:
    // 0x1b2b50: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
label_1b2b54:
    // 0x1b2b54: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1b2b58:
    // 0x1b2b58: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1b2b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1b2b5c:
    // 0x1b2b5c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1b2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1b2b60:
    // 0x1b2b60: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b2b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1b2b64:
    // 0x1b2b64: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1b2b68:
    // 0x1b2b68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b2b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1b2b6c:
    // 0x1b2b6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2b70:
    // 0x1b2b70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b2b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1b2b74:
    // 0x1b2b74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b2b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2b78:
    // 0x1b2b78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1b2b7c:
    // 0x1b2b7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b2b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b2b80:
    // 0x1b2b80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b2b84:
    // 0x1b2b84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b2b88:
    // 0x1b2b88: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1b2b88u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b2b8c:
    // 0x1b2b8c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1b2b8cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b2b90:
    // 0x1b2b90: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1b2b90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b2b94:
    // 0x1b2b94: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1b2b94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b2b98:
    // 0x1b2b98: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b2b98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b2b9c:
    // 0x1b2b9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b2ba0:
    // 0x1b2ba0: 0xafa7012c  sw          $a3, 0x12C($sp)
    ctx->pc = 0x1b2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 7));
label_1b2ba4:
    // 0x1b2ba4: 0xafa80128  sw          $t0, 0x128($sp)
    ctx->pc = 0x1b2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 8));
label_1b2ba8:
    // 0x1b2ba8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_1b2bac:
    if (ctx->pc == 0x1B2BACu) {
        ctx->pc = 0x1B2BACu;
            // 0x1b2bac: 0xafa90124  sw          $t1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 9));
        ctx->pc = 0x1B2BB0u;
        goto label_1b2bb0;
    }
    ctx->pc = 0x1B2BA8u;
    {
        const bool branch_taken_0x1b2ba8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BA8u;
            // 0x1b2bac: 0xafa90124  sw          $t1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ba8) {
            ctx->pc = 0x1B2BB8u;
            goto label_1b2bb8;
        }
    }
    ctx->pc = 0x1B2BB0u;
label_1b2bb0:
    // 0x1b2bb0: 0x100003a2  b           . + 4 + (0x3A2 << 2)
label_1b2bb4:
    if (ctx->pc == 0x1B2BB4u) {
        ctx->pc = 0x1B2BB4u;
            // 0x1b2bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BB8u;
        goto label_1b2bb8;
    }
    ctx->pc = 0x1B2BB0u;
    {
        const bool branch_taken_0x1b2bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BB0u;
            // 0x1b2bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bb0) {
            ctx->pc = 0x1B3A3Cu;
            goto label_1b3a3c;
        }
    }
    ctx->pc = 0x1B2BB8u;
label_1b2bb8:
    // 0x1b2bb8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1b2bbc:
    // 0x1b2bbc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1b2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1b2bc0:
    // 0x1b2bc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b2bc4:
    if (ctx->pc == 0x1B2BC4u) {
        ctx->pc = 0x1B2BC4u;
            // 0x1b2bc4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x1B2BC8u;
        goto label_1b2bc8;
    }
    ctx->pc = 0x1B2BC0u;
    {
        const bool branch_taken_0x1b2bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC0u;
            // 0x1b2bc4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bc0) {
            ctx->pc = 0x1B2BD0u;
            goto label_1b2bd0;
        }
    }
    ctx->pc = 0x1B2BC8u;
label_1b2bc8:
    // 0x1b2bc8: 0x1000039c  b           . + 4 + (0x39C << 2)
label_1b2bcc:
    if (ctx->pc == 0x1B2BCCu) {
        ctx->pc = 0x1B2BCCu;
            // 0x1b2bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BD0u;
        goto label_1b2bd0;
    }
    ctx->pc = 0x1B2BC8u;
    {
        const bool branch_taken_0x1b2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC8u;
            // 0x1b2bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bc8) {
            ctx->pc = 0x1B3A3Cu;
            goto label_1b3a3c;
        }
    }
    ctx->pc = 0x1B2BD0u;
label_1b2bd0:
    // 0x1b2bd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b2bd4:
    if (ctx->pc == 0x1B2BD4u) {
        ctx->pc = 0x1B2BD4u;
            // 0x1b2bd4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BD8u;
        goto label_1b2bd8;
    }
    ctx->pc = 0x1B2BD0u;
    {
        const bool branch_taken_0x1b2bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BD0u;
            // 0x1b2bd4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bd0) {
            ctx->pc = 0x1B2BDCu;
            goto label_1b2bdc;
        }
    }
    ctx->pc = 0x1B2BD8u;
label_1b2bd8:
    // 0x1b2bd8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b2bd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2bdc:
    // 0x1b2bdc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1b2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_1b2be0:
    // 0x1b2be0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2be4:
    // 0x1b2be4: 0xc06c3d4  jal         func_1B0F50
label_1b2be8:
    if (ctx->pc == 0x1B2BE8u) {
        ctx->pc = 0x1B2BE8u;
            // 0x1b2be8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BECu;
        goto label_1b2bec;
    }
    ctx->pc = 0x1B2BE4u;
    SET_GPR_U32(ctx, 31, 0x1B2BECu);
    ctx->pc = 0x1B2BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BE4u;
            // 0x1b2be8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BECu; }
        if (ctx->pc != 0x1B2BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BECu; }
        if (ctx->pc != 0x1B2BECu) { return; }
    }
    ctx->pc = 0x1B2BECu;
label_1b2bec:
    // 0x1b2bec: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b2becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1b2bf0:
    // 0x1b2bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b2bf4:
    // 0x1b2bf4: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x1b2bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b2bf8:
    // 0x1b2bf8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1b2bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b2bfc:
    // 0x1b2bfc: 0xc06c4d8  jal         func_1B1360
label_1b2c00:
    if (ctx->pc == 0x1B2C00u) {
        ctx->pc = 0x1B2C00u;
            // 0x1b2c00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C04u;
        goto label_1b2c04;
    }
    ctx->pc = 0x1B2BFCu;
    SET_GPR_U32(ctx, 31, 0x1B2C04u);
    ctx->pc = 0x1B2C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BFCu;
            // 0x1b2c00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C04u; }
        if (ctx->pc != 0x1B2C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C04u; }
        if (ctx->pc != 0x1B2C04u) { return; }
    }
    ctx->pc = 0x1B2C04u;
label_1b2c04:
    // 0x1b2c04: 0x7a8700a0  lq          $a3, 0xA0($s4)
    ctx->pc = 0x1b2c04u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 160)));
label_1b2c08:
    // 0x1b2c08: 0x27a801f0  addiu       $t0, $sp, 0x1F0
    ctx->pc = 0x1b2c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1b2c0c:
    // 0x1b2c0c: 0x7a8300b0  lq          $v1, 0xB0($s4)
    ctx->pc = 0x1b2c0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 176)));
label_1b2c10:
    // 0x1b2c10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2c14:
    // 0x1b2c14: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1b2c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1b2c18:
    // 0x1b2c18: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1b2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b2c1c:
    // 0x1b2c1c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1b2c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1b2c20:
    // 0x1b2c20: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1b2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_1b2c24:
    // 0x1b2c24: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x1b2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
label_1b2c28:
    // 0x1b2c28: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x1b2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_1b2c2c:
    // 0x1b2c2c: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x1b2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_1b2c30:
    // 0x1b2c30: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x1b2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_1b2c34:
    // 0x1b2c34: 0xc041bb0  jal         func_106EC0
label_1b2c38:
    if (ctx->pc == 0x1B2C38u) {
        ctx->pc = 0x1B2C38u;
            // 0x1b2c38: 0xafa001f4  sw          $zero, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2C3Cu;
        goto label_1b2c3c;
    }
    ctx->pc = 0x1B2C34u;
    SET_GPR_U32(ctx, 31, 0x1B2C3Cu);
    ctx->pc = 0x1B2C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C34u;
            // 0x1b2c38: 0xafa001f4  sw          $zero, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C3Cu; }
        if (ctx->pc != 0x1B2C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C3Cu; }
        if (ctx->pc != 0x1B2C3Cu) { return; }
    }
    ctx->pc = 0x1B2C3Cu;
label_1b2c3c:
    // 0x1b2c3c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1b2c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b2c40:
    // 0x1b2c40: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1b2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1b2c44:
    // 0x1b2c44: 0xc041bb0  jal         func_106EC0
label_1b2c48:
    if (ctx->pc == 0x1B2C48u) {
        ctx->pc = 0x1B2C48u;
            // 0x1b2c48: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1B2C4Cu;
        goto label_1b2c4c;
    }
    ctx->pc = 0x1B2C44u;
    SET_GPR_U32(ctx, 31, 0x1B2C4Cu);
    ctx->pc = 0x1B2C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C44u;
            // 0x1b2c48: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C4Cu; }
        if (ctx->pc != 0x1B2C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C4Cu; }
        if (ctx->pc != 0x1B2C4Cu) { return; }
    }
    ctx->pc = 0x1B2C4Cu;
label_1b2c4c:
    // 0x1b2c4c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1b2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1b2c50:
    // 0x1b2c50: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1b2c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1b2c54:
    // 0x1b2c54: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x1b2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_1b2c58:
    // 0x1b2c58: 0xc04c018  jal         func_130060
label_1b2c5c:
    if (ctx->pc == 0x1B2C5Cu) {
        ctx->pc = 0x1B2C5Cu;
            // 0x1b2c5c: 0xafa00224  sw          $zero, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2C60u;
        goto label_1b2c60;
    }
    ctx->pc = 0x1B2C58u;
    SET_GPR_U32(ctx, 31, 0x1B2C60u);
    ctx->pc = 0x1B2C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C58u;
            // 0x1b2c5c: 0xafa00224  sw          $zero, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C60u; }
        if (ctx->pc != 0x1B2C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C60u; }
        if (ctx->pc != 0x1B2C60u) { return; }
    }
    ctx->pc = 0x1B2C60u;
label_1b2c60:
    // 0x1b2c60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b2c64:
    // 0x1b2c64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b2c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2c68:
    // 0x1b2c68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2c6c:
    // 0x1b2c6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1b2c6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2c70:
    // 0x1b2c70: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1b2c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b2c74:
    // 0x1b2c74: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1b2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_1b2c78:
    // 0x1b2c78: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1b2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_1b2c7c:
    // 0x1b2c7c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1b2c7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b2c80:
    // 0x1b2c80: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1b2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1b2c84:
    // 0x1b2c84: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1b2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1b2c88:
    // 0x1b2c88: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1b2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1b2c8c:
    // 0x1b2c8c: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x1b2c8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_1b2c90:
    // 0x1b2c90: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1b2c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b2c94:
    // 0x1b2c94: 0x1020019b  beqz        $at, . + 4 + (0x19B << 2)
label_1b2c98:
    if (ctx->pc == 0x1B2C98u) {
        ctx->pc = 0x1B2C98u;
            // 0x1b2c98: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x1B2C9Cu;
        goto label_1b2c9c;
    }
    ctx->pc = 0x1B2C94u;
    {
        const bool branch_taken_0x1b2c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C94u;
            // 0x1b2c98: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c94) {
            ctx->pc = 0x1B3304u;
            goto label_1b3304;
        }
    }
    ctx->pc = 0x1B2C9Cu;
label_1b2c9c:
    // 0x1b2c9c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1b2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1b2ca0:
    // 0x1b2ca0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b2ca0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2ca4:
    // 0x1b2ca4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1b2ca8:
    // 0x1b2ca8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1b2cac:
    // 0x1b2cac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b2cb0:
    // 0x1b2cb0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b2cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b2cb4:
    // 0x1b2cb4: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x1b2cb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_1b2cb8:
    // 0x1b2cb8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1b2cbc:
    // 0x1b2cbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2cc0:
    // 0x1b2cc0: 0x14400185  bnez        $v0, . + 4 + (0x185 << 2)
label_1b2cc4:
    if (ctx->pc == 0x1B2CC4u) {
        ctx->pc = 0x1B2CC8u;
        goto label_1b2cc8;
    }
    ctx->pc = 0x1B2CC0u;
    {
        const bool branch_taken_0x1b2cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cc0) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2CC8u;
label_1b2cc8:
    // 0x1b2cc8: 0x8e110324  lw          $s1, 0x324($s0)
    ctx->pc = 0x1b2cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1b2ccc:
    // 0x1b2ccc: 0x12200182  beqz        $s1, . + 4 + (0x182 << 2)
label_1b2cd0:
    if (ctx->pc == 0x1B2CD0u) {
        ctx->pc = 0x1B2CD4u;
        goto label_1b2cd4;
    }
    ctx->pc = 0x1B2CCCu;
    {
        const bool branch_taken_0x1b2ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ccc) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2CD4u;
label_1b2cd4:
    // 0x1b2cd4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b2cd8:
    // 0x1b2cd8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1b2cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1b2cdc:
    // 0x1b2cdc: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
label_1b2ce0:
    if (ctx->pc == 0x1B2CE0u) {
        ctx->pc = 0x1B2CE4u;
        goto label_1b2ce4;
    }
    ctx->pc = 0x1B2CDCu;
    {
        const bool branch_taken_0x1b2cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cdc) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2CE4u;
label_1b2ce4:
    // 0x1b2ce4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_1b2ce8:
    if (ctx->pc == 0x1B2CE8u) {
        ctx->pc = 0x1B2CE8u;
            // 0x1b2ce8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x1B2CECu;
        goto label_1b2cec;
    }
    ctx->pc = 0x1B2CE4u;
    {
        const bool branch_taken_0x1b2ce4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CE4u;
            // 0x1b2ce8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ce4) {
            ctx->pc = 0x1B2CFCu;
            goto label_1b2cfc;
        }
    }
    ctx->pc = 0x1B2CECu;
label_1b2cec:
    // 0x1b2cec: 0x1040017a  beqz        $v0, . + 4 + (0x17A << 2)
label_1b2cf0:
    if (ctx->pc == 0x1B2CF0u) {
        ctx->pc = 0x1B2CF4u;
        goto label_1b2cf4;
    }
    ctx->pc = 0x1B2CECu;
    {
        const bool branch_taken_0x1b2cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cec) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2CF4u;
label_1b2cf4:
    // 0x1b2cf4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b2cf8:
    if (ctx->pc == 0x1B2CF8u) {
        ctx->pc = 0x1B2CFCu;
        goto label_1b2cfc;
    }
    ctx->pc = 0x1B2CF4u;
    {
        const bool branch_taken_0x1b2cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cf4) {
            ctx->pc = 0x1B2D0Cu;
            goto label_1b2d0c;
        }
    }
    ctx->pc = 0x1B2CFCu;
label_1b2cfc:
    // 0x1b2cfc: 0x0  nop
    ctx->pc = 0x1b2cfcu;
    // NOP
label_1b2d00:
    // 0x1b2d00: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1b2d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1b2d04:
    // 0x1b2d04: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
label_1b2d08:
    if (ctx->pc == 0x1B2D08u) {
        ctx->pc = 0x1B2D0Cu;
        goto label_1b2d0c;
    }
    ctx->pc = 0x1B2D04u;
    {
        const bool branch_taken_0x1b2d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d04) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2D0Cu;
label_1b2d0c:
    // 0x1b2d0c: 0x0  nop
    ctx->pc = 0x1b2d0cu;
    // NOP
label_1b2d10:
    // 0x1b2d10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2d14:
    // 0x1b2d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2d18:
    // 0x1b2d18: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b2d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b2d1c:
    // 0x1b2d1c: 0x320f809  jalr        $t9
label_1b2d20:
    if (ctx->pc == 0x1B2D20u) {
        ctx->pc = 0x1B2D20u;
            // 0x1b2d20: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x1B2D24u;
        goto label_1b2d24;
    }
    ctx->pc = 0x1B2D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2D24u);
        ctx->pc = 0x1B2D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D1Cu;
            // 0x1b2d20: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2D24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D24u; }
            if (ctx->pc != 0x1B2D24u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2D24u;
label_1b2d24:
    // 0x1b2d24: 0x7a2300a0  lq          $v1, 0xA0($s1)
    ctx->pc = 0x1b2d24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 160)));
label_1b2d28:
    // 0x1b2d28: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x1b2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_1b2d2c:
    // 0x1b2d2c: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x1b2d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
label_1b2d30:
    // 0x1b2d30: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x1b2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_1b2d34:
    // 0x1b2d34: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1b2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1b2d38:
    // 0x1b2d38: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1b2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_1b2d3c:
    // 0x1b2d3c: 0xafa003a4  sw          $zero, 0x3A4($sp)
    ctx->pc = 0x1b2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 0));
label_1b2d40:
    // 0x1b2d40: 0xc04c018  jal         func_130060
label_1b2d44:
    if (ctx->pc == 0x1B2D44u) {
        ctx->pc = 0x1B2D44u;
            // 0x1b2d44: 0xafa00394  sw          $zero, 0x394($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2D48u;
        goto label_1b2d48;
    }
    ctx->pc = 0x1B2D40u;
    SET_GPR_U32(ctx, 31, 0x1B2D48u);
    ctx->pc = 0x1B2D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D40u;
            // 0x1b2d44: 0xafa00394  sw          $zero, 0x394($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D48u; }
        if (ctx->pc != 0x1B2D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D48u; }
        if (ctx->pc != 0x1B2D48u) { return; }
    }
    ctx->pc = 0x1B2D48u;
label_1b2d48:
    // 0x1b2d48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b2d4c:
    // 0x1b2d4c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x1b2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_1b2d50:
    // 0x1b2d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2d54:
    // 0x1b2d54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b2d58:
    // 0x1b2d58: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x1b2d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_1b2d5c:
    // 0x1b2d5c: 0xc041c3e  jal         func_1070F8
label_1b2d60:
    if (ctx->pc == 0x1B2D60u) {
        ctx->pc = 0x1B2D60u;
            // 0x1b2d60: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1B2D64u;
        goto label_1b2d64;
    }
    ctx->pc = 0x1B2D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D64u);
    ctx->pc = 0x1B2D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D5Cu;
            // 0x1b2d60: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D64u; }
        if (ctx->pc != 0x1B2D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D64u; }
        if (ctx->pc != 0x1B2D64u) { return; }
    }
    ctx->pc = 0x1B2D64u;
label_1b2d64:
    // 0x1b2d64: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x1b2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_1b2d68:
    // 0x1b2d68: 0xc04bff4  jal         func_12FFD0
label_1b2d6c:
    if (ctx->pc == 0x1B2D6Cu) {
        ctx->pc = 0x1B2D6Cu;
            // 0x1b2d6c: 0xafa00384  sw          $zero, 0x384($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2D70u;
        goto label_1b2d70;
    }
    ctx->pc = 0x1B2D68u;
    SET_GPR_U32(ctx, 31, 0x1B2D70u);
    ctx->pc = 0x1B2D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D68u;
            // 0x1b2d6c: 0xafa00384  sw          $zero, 0x384($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D70u; }
        if (ctx->pc != 0x1B2D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D70u; }
        if (ctx->pc != 0x1B2D70u) { return; }
    }
    ctx->pc = 0x1B2D70u;
label_1b2d70:
    // 0x1b2d70: 0x4614c080  add.s       $f2, $f24, $f20
    ctx->pc = 0x1b2d70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
label_1b2d74:
    // 0x1b2d74: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b2d78:
    // 0x1b2d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2d7c:
    // 0x1b2d7c: 0x0  nop
    ctx->pc = 0x1b2d7cu;
    // NOP
label_1b2d80:
    // 0x1b2d80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b2d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b2d84:
    // 0x1b2d84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b2d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2d88:
    // 0x1b2d88: 0x0  nop
    ctx->pc = 0x1b2d88u;
    // NOP
label_1b2d8c:
    // 0x1b2d8c: 0x45000152  bc1f        . + 4 + (0x152 << 2)
label_1b2d90:
    if (ctx->pc == 0x1B2D90u) {
        ctx->pc = 0x1B2D94u;
        goto label_1b2d94;
    }
    ctx->pc = 0x1B2D8Cu;
    {
        const bool branch_taken_0x1b2d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2d8c) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2D94u;
label_1b2d94:
    // 0x1b2d94: 0x16c0008e  bnez        $s6, . + 4 + (0x8E << 2)
label_1b2d98:
    if (ctx->pc == 0x1B2D98u) {
        ctx->pc = 0x1B2D98u;
            // 0x1b2d98: 0x26840110  addiu       $a0, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->pc = 0x1B2D9Cu;
        goto label_1b2d9c;
    }
    ctx->pc = 0x1B2D94u;
    {
        const bool branch_taken_0x1b2d94 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D94u;
            // 0x1b2d98: 0x26840110  addiu       $a0, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d94) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2D9Cu;
label_1b2d9c:
    // 0x1b2d9c: 0xc068d24  jal         func_1A3490
label_1b2da0:
    if (ctx->pc == 0x1B2DA0u) {
        ctx->pc = 0x1B2DA4u;
        goto label_1b2da4;
    }
    ctx->pc = 0x1B2D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B2DA4u);
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DA4u; }
        if (ctx->pc != 0x1B2DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DA4u; }
        if (ctx->pc != 0x1B2DA4u) { return; }
    }
    ctx->pc = 0x1B2DA4u;
label_1b2da4:
    // 0x1b2da4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b2da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2da8:
    // 0x1b2da8: 0x0  nop
    ctx->pc = 0x1b2da8u;
    // NOP
label_1b2dac:
    // 0x1b2dac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2db0:
    // 0x1b2db0: 0x0  nop
    ctx->pc = 0x1b2db0u;
    // NOP
label_1b2db4:
    // 0x1b2db4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2db8:
    if (ctx->pc == 0x1B2DB8u) {
        ctx->pc = 0x1B2DBCu;
        goto label_1b2dbc;
    }
    ctx->pc = 0x1B2DB4u;
    {
        const bool branch_taken_0x1b2db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2db4) {
            ctx->pc = 0x1B2DC0u;
            goto label_1b2dc0;
        }
    }
    ctx->pc = 0x1B2DBCu;
label_1b2dbc:
    // 0x1b2dbc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b2dbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b2dc0:
    // 0x1b2dc0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1b2dc0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_1b2dc4:
    // 0x1b2dc4: 0xc068d24  jal         func_1A3490
label_1b2dc8:
    if (ctx->pc == 0x1B2DC8u) {
        ctx->pc = 0x1B2DC8u;
            // 0x1b2dc8: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x1B2DCCu;
        goto label_1b2dcc;
    }
    ctx->pc = 0x1B2DC4u;
    SET_GPR_U32(ctx, 31, 0x1B2DCCu);
    ctx->pc = 0x1B2DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DC4u;
            // 0x1b2dc8: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DCCu; }
        if (ctx->pc != 0x1B2DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DCCu; }
        if (ctx->pc != 0x1B2DCCu) { return; }
    }
    ctx->pc = 0x1B2DCCu;
label_1b2dcc:
    // 0x1b2dcc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b2dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2dd0:
    // 0x1b2dd0: 0x0  nop
    ctx->pc = 0x1b2dd0u;
    // NOP
label_1b2dd4:
    // 0x1b2dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2dd8:
    // 0x1b2dd8: 0x0  nop
    ctx->pc = 0x1b2dd8u;
    // NOP
label_1b2ddc:
    // 0x1b2ddc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2de0:
    if (ctx->pc == 0x1B2DE0u) {
        ctx->pc = 0x1B2DE4u;
        goto label_1b2de4;
    }
    ctx->pc = 0x1B2DDCu;
    {
        const bool branch_taken_0x1b2ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2ddc) {
            ctx->pc = 0x1B2DE8u;
            goto label_1b2de8;
        }
    }
    ctx->pc = 0x1B2DE4u;
label_1b2de4:
    // 0x1b2de4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b2de4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b2de8:
    // 0x1b2de8: 0x46180041  sub.s       $f1, $f0, $f24
    ctx->pc = 0x1b2de8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_1b2dec:
    // 0x1b2dec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2df0:
    // 0x1b2df0: 0x0  nop
    ctx->pc = 0x1b2df0u;
    // NOP
label_1b2df4:
    // 0x1b2df4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2df8:
    // 0x1b2df8: 0x0  nop
    ctx->pc = 0x1b2df8u;
    // NOP
label_1b2dfc:
    // 0x1b2dfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2e00:
    if (ctx->pc == 0x1B2E00u) {
        ctx->pc = 0x1B2E04u;
        goto label_1b2e04;
    }
    ctx->pc = 0x1B2DFCu;
    {
        const bool branch_taken_0x1b2dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2dfc) {
            ctx->pc = 0x1B2E08u;
            goto label_1b2e08;
        }
    }
    ctx->pc = 0x1B2E04u;
label_1b2e04:
    // 0x1b2e04: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b2e04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b2e08:
    // 0x1b2e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2e0c:
    // 0x1b2e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2e10:
    // 0x1b2e10: 0x0  nop
    ctx->pc = 0x1b2e10u;
    // NOP
label_1b2e14:
    // 0x1b2e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2e18:
    // 0x1b2e18: 0x0  nop
    ctx->pc = 0x1b2e18u;
    // NOP
label_1b2e1c:
    // 0x1b2e1c: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
label_1b2e20:
    if (ctx->pc == 0x1B2E20u) {
        ctx->pc = 0x1B2E24u;
        goto label_1b2e24;
    }
    ctx->pc = 0x1B2E1Cu;
    {
        const bool branch_taken_0x1b2e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2e1c) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2E24u;
label_1b2e24:
    // 0x1b2e24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2e28:
    // 0x1b2e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e2c:
    // 0x1b2e2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b2e30:
    // 0x1b2e30: 0x320f809  jalr        $t9
label_1b2e34:
    if (ctx->pc == 0x1B2E34u) {
        ctx->pc = 0x1B2E34u;
            // 0x1b2e34: 0x27a503b0  addiu       $a1, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x1B2E38u;
        goto label_1b2e38;
    }
    ctx->pc = 0x1B2E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2E38u);
        ctx->pc = 0x1B2E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E30u;
            // 0x1b2e34: 0x27a503b0  addiu       $a1, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E38u; }
            if (ctx->pc != 0x1B2E38u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2E38u;
label_1b2e38:
    // 0x1b2e38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2e3c:
    // 0x1b2e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e40:
    // 0x1b2e40: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b2e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b2e44:
    // 0x1b2e44: 0x320f809  jalr        $t9
label_1b2e48:
    if (ctx->pc == 0x1B2E48u) {
        ctx->pc = 0x1B2E48u;
            // 0x1b2e48: 0x27a503c0  addiu       $a1, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->pc = 0x1B2E4Cu;
        goto label_1b2e4c;
    }
    ctx->pc = 0x1B2E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2E4Cu);
        ctx->pc = 0x1B2E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E44u;
            // 0x1b2e48: 0x27a503c0  addiu       $a1, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E4Cu; }
            if (ctx->pc != 0x1B2E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B2E4Cu;
label_1b2e4c:
    // 0x1b2e4c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1b2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2e50:
    // 0x1b2e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e54:
    // 0x1b2e54: 0xc7a003b4  lwc1        $f0, 0x3B4($sp)
    ctx->pc = 0x1b2e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2e58:
    // 0x1b2e58: 0xc06d5a8  jal         func_1B56A0
label_1b2e5c:
    if (ctx->pc == 0x1B2E5Cu) {
        ctx->pc = 0x1B2E5Cu;
            // 0x1b2e5c: 0x46010641  sub.s       $f25, $f0, $f1 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1B2E60u;
        goto label_1b2e60;
    }
    ctx->pc = 0x1B2E58u;
    SET_GPR_U32(ctx, 31, 0x1B2E60u);
    ctx->pc = 0x1B2E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E58u;
            // 0x1b2e5c: 0x46010641  sub.s       $f25, $f0, $f1 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B56A0u;
    if (runtime->hasFunction(0x1B56A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E60u; }
        if (ctx->pc != 0x1B2E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsHeight__14CEditPartsInfoFv_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E60u; }
        if (ctx->pc != 0x1B2E60u) { return; }
    }
    ctx->pc = 0x1B2E60u;
label_1b2e60:
    // 0x1b2e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2e64:
    // 0x1b2e64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b2e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2e68:
    // 0x1b2e68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b2e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2e6c:
    // 0x1b2e6c: 0x0  nop
    ctx->pc = 0x1b2e6cu;
    // NOP
label_1b2e70:
    // 0x1b2e70: 0x4601c834  c.lt.s      $f25, $f1
    ctx->pc = 0x1b2e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2e74:
    // 0x1b2e74: 0x0  nop
    ctx->pc = 0x1b2e74u;
    // NOP
label_1b2e78:
    // 0x1b2e78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2e7c:
    if (ctx->pc == 0x1B2E7Cu) {
        ctx->pc = 0x1B2E7Cu;
            // 0x1b2e7c: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1B2E80u;
        goto label_1b2e80;
    }
    ctx->pc = 0x1B2E78u;
    {
        const bool branch_taken_0x1b2e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E78u;
            // 0x1b2e7c: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e78) {
            ctx->pc = 0x1B2E84u;
            goto label_1b2e84;
        }
    }
    ctx->pc = 0x1B2E80u;
label_1b2e80:
    // 0x1b2e80: 0x4600ce47  neg.s       $f25, $f25
    ctx->pc = 0x1b2e80u;
    ctx->f[25] = FPU_NEG_S(ctx->f[25]);
label_1b2e84:
    // 0x1b2e84: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x1b2e84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2e88:
    // 0x1b2e88: 0x0  nop
    ctx->pc = 0x1b2e88u;
    // NOP
label_1b2e8c:
    // 0x1b2e8c: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_1b2e90:
    if (ctx->pc == 0x1B2E90u) {
        ctx->pc = 0x1B2E94u;
        goto label_1b2e94;
    }
    ctx->pc = 0x1B2E8Cu;
    {
        const bool branch_taken_0x1b2e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2e8c) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2E94u;
label_1b2e94:
    // 0x1b2e94: 0xc7ac03c4  lwc1        $f12, 0x3C4($sp)
    ctx->pc = 0x1b2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2e98:
    // 0x1b2e98: 0xc06c3d4  jal         func_1B0F50
label_1b2e9c:
    if (ctx->pc == 0x1B2E9Cu) {
        ctx->pc = 0x1B2E9Cu;
            // 0x1b2e9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2EA0u;
        goto label_1b2ea0;
    }
    ctx->pc = 0x1B2E98u;
    SET_GPR_U32(ctx, 31, 0x1B2EA0u);
    ctx->pc = 0x1B2E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E98u;
            // 0x1b2e9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EA0u; }
        if (ctx->pc != 0x1B2EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EA0u; }
        if (ctx->pc != 0x1B2EA0u) { return; }
    }
    ctx->pc = 0x1B2EA0u;
label_1b2ea0:
    // 0x1b2ea0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1b2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_1b2ea4:
    // 0x1b2ea4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b2ea8:
    // 0x1b2ea8: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1b2ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1b2eac:
    // 0x1b2eac: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x1b2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_1b2eb0:
    // 0x1b2eb0: 0xc06c4d8  jal         func_1B1360
label_1b2eb4:
    if (ctx->pc == 0x1B2EB4u) {
        ctx->pc = 0x1B2EB4u;
            // 0x1b2eb4: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x1B2EB8u;
        goto label_1b2eb8;
    }
    ctx->pc = 0x1B2EB0u;
    SET_GPR_U32(ctx, 31, 0x1B2EB8u);
    ctx->pc = 0x1B2EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EB0u;
            // 0x1b2eb4: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EB8u; }
        if (ctx->pc != 0x1B2EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EB8u; }
        if (ctx->pc != 0x1B2EB8u) { return; }
    }
    ctx->pc = 0x1B2EB8u;
label_1b2eb8:
    // 0x1b2eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b2ebc:
    // 0x1b2ebc: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x1b2ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_1b2ec0:
    // 0x1b2ec0: 0xc06c4ec  jal         func_1B13B0
label_1b2ec4:
    if (ctx->pc == 0x1B2EC4u) {
        ctx->pc = 0x1B2EC4u;
            // 0x1b2ec4: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x1B2EC8u;
        goto label_1b2ec8;
    }
    ctx->pc = 0x1B2EC0u;
    SET_GPR_U32(ctx, 31, 0x1B2EC8u);
    ctx->pc = 0x1B2EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EC0u;
            // 0x1b2ec4: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (runtime->hasFunction(0x1B13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EC8u; }
        if (ctx->pc != 0x1B2EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EC8u; }
        if (ctx->pc != 0x1B2EC8u) { return; }
    }
    ctx->pc = 0x1B2EC8u;
label_1b2ec8:
    // 0x1b2ec8: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x1b2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_1b2ecc:
    // 0x1b2ecc: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x1b2eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_1b2ed0:
    // 0x1b2ed0: 0xc04c094  jal         func_130250
label_1b2ed4:
    if (ctx->pc == 0x1B2ED4u) {
        ctx->pc = 0x1B2ED4u;
            // 0x1b2ed4: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1B2ED8u;
        goto label_1b2ed8;
    }
    ctx->pc = 0x1B2ED0u;
    SET_GPR_U32(ctx, 31, 0x1B2ED8u);
    ctx->pc = 0x1B2ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ED0u;
            // 0x1b2ed4: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2ED8u; }
        if (ctx->pc != 0x1B2ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2ED8u; }
        if (ctx->pc != 0x1B2ED8u) { return; }
    }
    ctx->pc = 0x1B2ED8u;
label_1b2ed8:
    // 0x1b2ed8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1b2edc:
    // 0x1b2edc: 0x268500c0  addiu       $a1, $s4, 0xC0
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_1b2ee0:
    // 0x1b2ee0: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x1b2ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_1b2ee4:
    // 0x1b2ee4: 0xc068dc8  jal         func_1A3720
label_1b2ee8:
    if (ctx->pc == 0x1B2EE8u) {
        ctx->pc = 0x1B2EE8u;
            // 0x1b2ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2EECu;
        goto label_1b2eec;
    }
    ctx->pc = 0x1B2EE4u;
    SET_GPR_U32(ctx, 31, 0x1B2EECu);
    ctx->pc = 0x1B2EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EE4u;
            // 0x1b2ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EECu; }
        if (ctx->pc != 0x1B2EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EECu; }
        if (ctx->pc != 0x1B2EECu) { return; }
    }
    ctx->pc = 0x1B2EECu;
label_1b2eec:
    // 0x1b2eec: 0x0  nop
    ctx->pc = 0x1b2eecu;
    // NOP
label_1b2ef0:
    // 0x1b2ef0: 0x0  nop
    ctx->pc = 0x1b2ef0u;
    // NOP
label_1b2ef4:
    // 0x1b2ef4: 0x46180043  div.s       $f1, $f0, $f24
    ctx->pc = 0x1b2ef4u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[24]); }
label_1b2ef8:
    // 0x1b2ef8: 0x0  nop
    ctx->pc = 0x1b2ef8u;
    // NOP
label_1b2efc:
    // 0x1b2efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2f00:
    // 0x1b2f00: 0x0  nop
    ctx->pc = 0x1b2f00u;
    // NOP
label_1b2f04:
    // 0x1b2f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2f08:
    // 0x1b2f08: 0x0  nop
    ctx->pc = 0x1b2f08u;
    // NOP
label_1b2f0c:
    // 0x1b2f0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2f10:
    if (ctx->pc == 0x1B2F10u) {
        ctx->pc = 0x1B2F14u;
        goto label_1b2f14;
    }
    ctx->pc = 0x1B2F0Cu;
    {
        const bool branch_taken_0x1b2f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f0c) {
            ctx->pc = 0x1B2F18u;
            goto label_1b2f18;
        }
    }
    ctx->pc = 0x1B2F14u;
label_1b2f14:
    // 0x1b2f14: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b2f14u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b2f18:
    // 0x1b2f18: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b2f1c:
    // 0x1b2f1c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b2f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1b2f20:
    // 0x1b2f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2f24:
    // 0x1b2f24: 0x0  nop
    ctx->pc = 0x1b2f24u;
    // NOP
label_1b2f28:
    // 0x1b2f28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2f2c:
    // 0x1b2f2c: 0x0  nop
    ctx->pc = 0x1b2f2cu;
    // NOP
label_1b2f30:
    // 0x1b2f30: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1b2f34:
    if (ctx->pc == 0x1B2F34u) {
        ctx->pc = 0x1B2F38u;
        goto label_1b2f38;
    }
    ctx->pc = 0x1B2F30u;
    {
        const bool branch_taken_0x1b2f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f30) {
            ctx->pc = 0x1B2F70u;
            goto label_1b2f70;
        }
    }
    ctx->pc = 0x1B2F38u;
label_1b2f38:
    // 0x1b2f38: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1b2f3c:
    // 0x1b2f3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b2f40:
    if (ctx->pc == 0x1B2F40u) {
        ctx->pc = 0x1B2F44u;
        goto label_1b2f44;
    }
    ctx->pc = 0x1B2F3Cu;
    {
        const bool branch_taken_0x1b2f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f3c) {
            ctx->pc = 0x1B2F54u;
            goto label_1b2f54;
        }
    }
    ctx->pc = 0x1B2F44u;
label_1b2f44:
    // 0x1b2f44: 0x46170836  c.le.s      $f1, $f23
    ctx->pc = 0x1b2f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2f48:
    // 0x1b2f48: 0x0  nop
    ctx->pc = 0x1b2f48u;
    // NOP
label_1b2f4c:
    // 0x1b2f4c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1b2f50:
    if (ctx->pc == 0x1B2F50u) {
        ctx->pc = 0x1B2F54u;
        goto label_1b2f54;
    }
    ctx->pc = 0x1B2F4Cu;
    {
        const bool branch_taken_0x1b2f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f4c) {
            ctx->pc = 0x1B2F70u;
            goto label_1b2f70;
        }
    }
    ctx->pc = 0x1B2F54u;
label_1b2f54:
    // 0x1b2f54: 0x0  nop
    ctx->pc = 0x1b2f54u;
    // NOP
label_1b2f58:
    // 0x1b2f58: 0xafb000f0  sw          $s0, 0xF0($sp)
    ctx->pc = 0x1b2f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 16));
label_1b2f5c:
    // 0x1b2f5c: 0x27a203b0  addiu       $v0, $sp, 0x3B0
    ctx->pc = 0x1b2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_1b2f60:
    // 0x1b2f60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b2f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b2f64:
    // 0x1b2f64: 0x46000dc6  mov.s       $f23, $f1
    ctx->pc = 0x1b2f64u;
    ctx->f[23] = FPU_MOV_S(ctx->f[1]);
label_1b2f68:
    // 0x1b2f68: 0x27a20360  addiu       $v0, $sp, 0x360
    ctx->pc = 0x1b2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_1b2f6c:
    // 0x1b2f6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1b2f70:
    // 0x1b2f70: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1b2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1b2f74:
    // 0x1b2f74: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1b2f78:
    // 0x1b2f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2f7c:
    // 0x1b2f7c: 0x0  nop
    ctx->pc = 0x1b2f7cu;
    // NOP
label_1b2f80:
    // 0x1b2f80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2f84:
    // 0x1b2f84: 0x0  nop
    ctx->pc = 0x1b2f84u;
    // NOP
label_1b2f88:
    // 0x1b2f88: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1b2f8c:
    if (ctx->pc == 0x1B2F8Cu) {
        ctx->pc = 0x1B2F90u;
        goto label_1b2f90;
    }
    ctx->pc = 0x1B2F88u;
    {
        const bool branch_taken_0x1b2f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f88) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2F90u;
label_1b2f90:
    // 0x1b2f90: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1b2f94:
    // 0x1b2f94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b2f98:
    if (ctx->pc == 0x1B2F98u) {
        ctx->pc = 0x1B2F9Cu;
        goto label_1b2f9c;
    }
    ctx->pc = 0x1B2F94u;
    {
        const bool branch_taken_0x1b2f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f94) {
            ctx->pc = 0x1B2FACu;
            goto label_1b2fac;
        }
    }
    ctx->pc = 0x1B2F9Cu;
label_1b2f9c:
    // 0x1b2f9c: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x1b2f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2fa0:
    // 0x1b2fa0: 0x0  nop
    ctx->pc = 0x1b2fa0u;
    // NOP
label_1b2fa4:
    // 0x1b2fa4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1b2fa8:
    if (ctx->pc == 0x1B2FA8u) {
        ctx->pc = 0x1B2FACu;
        goto label_1b2fac;
    }
    ctx->pc = 0x1B2FA4u;
    {
        const bool branch_taken_0x1b2fa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fa4) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2FACu;
label_1b2fac:
    // 0x1b2fac: 0x0  nop
    ctx->pc = 0x1b2facu;
    // NOP
label_1b2fb0:
    // 0x1b2fb0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1b2fb4:
    // 0x1b2fb4: 0xafb000ec  sw          $s0, 0xEC($sp)
    ctx->pc = 0x1b2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 16));
label_1b2fb8:
    // 0x1b2fb8: 0x27a303b0  addiu       $v1, $sp, 0x3B0
    ctx->pc = 0x1b2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_1b2fbc:
    // 0x1b2fbc: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x1b2fbcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
label_1b2fc0:
    // 0x1b2fc0: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_1b2fc4:
    // 0x1b2fc4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b2fc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b2fc8:
    // 0x1b2fc8: 0x27a20350  addiu       $v0, $sp, 0x350
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_1b2fcc:
    // 0x1b2fcc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b2fccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1b2fd0:
    // 0x1b2fd0: 0xc06d5a8  jal         func_1B56A0
label_1b2fd4:
    if (ctx->pc == 0x1B2FD4u) {
        ctx->pc = 0x1B2FD4u;
            // 0x1b2fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FD8u;
        goto label_1b2fd8;
    }
    ctx->pc = 0x1B2FD0u;
    SET_GPR_U32(ctx, 31, 0x1B2FD8u);
    ctx->pc = 0x1B2FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FD0u;
            // 0x1b2fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B56A0u;
    if (runtime->hasFunction(0x1B56A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FD8u; }
        if (ctx->pc != 0x1B2FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsHeight__14CEditPartsInfoFv_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FD8u; }
        if (ctx->pc != 0x1B2FD8u) { return; }
    }
    ctx->pc = 0x1B2FD8u;
label_1b2fd8:
    // 0x1b2fd8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1b2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b2fdc:
    // 0x1b2fdc: 0x27a20374  addiu       $v0, $sp, 0x374
    ctx->pc = 0x1b2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 884));
label_1b2fe0:
    // 0x1b2fe0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2fe4:
    // 0x1b2fe4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b2fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b2fe8:
    // 0x1b2fe8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2fec:
    // 0x1b2fec: 0x0  nop
    ctx->pc = 0x1b2fecu;
    // NOP
label_1b2ff0:
    // 0x1b2ff0: 0x450000b9  bc1f        . + 4 + (0xB9 << 2)
label_1b2ff4:
    if (ctx->pc == 0x1B2FF4u) {
        ctx->pc = 0x1B2FF4u;
            // 0x1b2ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FF8u;
        goto label_1b2ff8;
    }
    ctx->pc = 0x1B2FF0u;
    {
        const bool branch_taken_0x1b2ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FF0u;
            // 0x1b2ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ff0) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B2FF8u;
label_1b2ff8:
    // 0x1b2ff8: 0xc06d5a8  jal         func_1B56A0
label_1b2ffc:
    if (ctx->pc == 0x1B2FFCu) {
        ctx->pc = 0x1B3000u;
        goto label_1b3000;
    }
    ctx->pc = 0x1B2FF8u;
    SET_GPR_U32(ctx, 31, 0x1B3000u);
    ctx->pc = 0x1B56A0u;
    if (runtime->hasFunction(0x1B56A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3000u; }
        if (ctx->pc != 0x1B3000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsHeight__14CEditPartsInfoFv_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3000u; }
        if (ctx->pc != 0x1B3000u) { return; }
    }
    ctx->pc = 0x1B3000u;
label_1b3000:
    // 0x1b3000: 0x27a20374  addiu       $v0, $sp, 0x374
    ctx->pc = 0x1b3000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 884));
label_1b3004:
    // 0x1b3004: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1b3004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3008:
    // 0x1b3008: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1b3008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b300c:
    // 0x1b300c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b300cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b3010:
    // 0x1b3010: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3014:
    // 0x1b3014: 0x0  nop
    ctx->pc = 0x1b3014u;
    // NOP
label_1b3018:
    // 0x1b3018: 0x450100af  bc1t        . + 4 + (0xAF << 2)
label_1b301c:
    if (ctx->pc == 0x1B301Cu) {
        ctx->pc = 0x1B3020u;
        goto label_1b3020;
    }
    ctx->pc = 0x1B3018u;
    {
        const bool branch_taken_0x1b3018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3018) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B3020u;
label_1b3020:
    // 0x1b3020: 0x16c00078  bnez        $s6, . + 4 + (0x78 << 2)
label_1b3024:
    if (ctx->pc == 0x1B3024u) {
        ctx->pc = 0x1B3028u;
        goto label_1b3028;
    }
    ctx->pc = 0x1B3020u;
    {
        const bool branch_taken_0x1b3020 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3020) {
            ctx->pc = 0x1B3204u;
            goto label_1b3204;
        }
    }
    ctx->pc = 0x1B3028u;
label_1b3028:
    // 0x1b3028: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1b3028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b302c:
    // 0x1b302c: 0xc06c3d4  jal         func_1B0F50
label_1b3030:
    if (ctx->pc == 0x1B3030u) {
        ctx->pc = 0x1B3030u;
            // 0x1b3030: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3034u;
        goto label_1b3034;
    }
    ctx->pc = 0x1B302Cu;
    SET_GPR_U32(ctx, 31, 0x1B3034u);
    ctx->pc = 0x1B3030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B302Cu;
            // 0x1b3030: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3034u; }
        if (ctx->pc != 0x1B3034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3034u; }
        if (ctx->pc != 0x1B3034u) { return; }
    }
    ctx->pc = 0x1B3034u;
label_1b3034:
    // 0x1b3034: 0x22823  negu        $a1, $v0
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b3038:
    // 0x1b3038: 0xc06c3fc  jal         func_1B0FF0
label_1b303c:
    if (ctx->pc == 0x1B303Cu) {
        ctx->pc = 0x1B303Cu;
            // 0x1b303c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3040u;
        goto label_1b3040;
    }
    ctx->pc = 0x1B3038u;
    SET_GPR_U32(ctx, 31, 0x1B3040u);
    ctx->pc = 0x1B303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3038u;
            // 0x1b303c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3040u; }
        if (ctx->pc != 0x1B3040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3040u; }
        if (ctx->pc != 0x1B3040u) { return; }
    }
    ctx->pc = 0x1B3040u;
label_1b3040:
    // 0x1b3040: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b3040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3044:
    // 0x1b3044: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b3048:
    // 0x1b3048: 0xc06c374  jal         func_1B0DD0
label_1b304c:
    if (ctx->pc == 0x1B304Cu) {
        ctx->pc = 0x1B304Cu;
            // 0x1b304c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1B3050u;
        goto label_1b3050;
    }
    ctx->pc = 0x1B3048u;
    SET_GPR_U32(ctx, 31, 0x1B3050u);
    ctx->pc = 0x1B304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3048u;
            // 0x1b304c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3050u; }
        if (ctx->pc != 0x1B3050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3050u; }
        if (ctx->pc != 0x1B3050u) { return; }
    }
    ctx->pc = 0x1B3050u;
label_1b3050:
    // 0x1b3050: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_1b3054:
    // 0x1b3054: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b3054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b3058:
    // 0x1b3058: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b3058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b305c:
    // 0x1b305c: 0xc041bb0  jal         func_106EC0
label_1b3060:
    if (ctx->pc == 0x1B3060u) {
        ctx->pc = 0x1B3060u;
            // 0x1b3060: 0xafa0038c  sw          $zero, 0x38C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3064u;
        goto label_1b3064;
    }
    ctx->pc = 0x1B305Cu;
    SET_GPR_U32(ctx, 31, 0x1B3064u);
    ctx->pc = 0x1B3060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B305Cu;
            // 0x1b3060: 0xafa0038c  sw          $zero, 0x38C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3064u; }
        if (ctx->pc != 0x1B3064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3064u; }
        if (ctx->pc != 0x1B3064u) { return; }
    }
    ctx->pc = 0x1B3064u;
label_1b3064:
    // 0x1b3064: 0xc7a30388  lwc1        $f3, 0x388($sp)
    ctx->pc = 0x1b3064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b3068:
    // 0x1b3068: 0xc7a90398  lwc1        $f9, 0x398($sp)
    ctx->pc = 0x1b3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1b306c:
    // 0x1b306c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b306cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3070:
    // 0x1b3070: 0x46091801  sub.s       $f0, $f3, $f9
    ctx->pc = 0x1b3070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_1b3074:
    // 0x1b3074: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1b3074u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1b3078:
    // 0x1b3078: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b3078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b307c:
    // 0x1b307c: 0x0  nop
    ctx->pc = 0x1b307cu;
    // NOP
label_1b3080:
    // 0x1b3080: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b3084:
    if (ctx->pc == 0x1B3084u) {
        ctx->pc = 0x1B3088u;
        goto label_1b3088;
    }
    ctx->pc = 0x1B3080u;
    {
        const bool branch_taken_0x1b3080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3080) {
            ctx->pc = 0x1B308Cu;
            goto label_1b308c;
        }
    }
    ctx->pc = 0x1B3088u;
label_1b3088:
    // 0x1b3088: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b3088u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1b308c:
    // 0x1b308c: 0xc7aa03a8  lwc1        $f10, 0x3A8($sp)
    ctx->pc = 0x1b308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1b3090:
    // 0x1b3090: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3094:
    // 0x1b3094: 0x46035101  sub.s       $f4, $f10, $f3
    ctx->pc = 0x1b3094u;
    ctx->f[4] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
label_1b3098:
    // 0x1b3098: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1b3098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b309c:
    // 0x1b309c: 0x0  nop
    ctx->pc = 0x1b309cu;
    // NOP
label_1b30a0:
    // 0x1b30a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b30a4:
    if (ctx->pc == 0x1B30A4u) {
        ctx->pc = 0x1B30A4u;
            // 0x1b30a4: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1B30A8u;
        goto label_1b30a8;
    }
    ctx->pc = 0x1B30A0u;
    {
        const bool branch_taken_0x1b30a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B30A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30A0u;
            // 0x1b30a4: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30a0) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B30A8u;
label_1b30a8:
    // 0x1b30a8: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1b30a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
label_1b30ac:
    // 0x1b30ac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b30acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b30b0:
    // 0x1b30b0: 0x0  nop
    ctx->pc = 0x1b30b0u;
    // NOP
label_1b30b4:
    // 0x1b30b4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1b30b8:
    if (ctx->pc == 0x1B30B8u) {
        ctx->pc = 0x1B30BCu;
        goto label_1b30bc;
    }
    ctx->pc = 0x1B30B4u;
    {
        const bool branch_taken_0x1b30b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b30b4) {
            ctx->pc = 0x1B30E0u;
            goto label_1b30e0;
        }
    }
    ctx->pc = 0x1B30BCu;
label_1b30bc:
    // 0x1b30bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b30bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b30c0:
    // 0x1b30c0: 0x0  nop
    ctx->pc = 0x1b30c0u;
    // NOP
label_1b30c4:
    // 0x1b30c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b30c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b30c8:
    // 0x1b30c8: 0x0  nop
    ctx->pc = 0x1b30c8u;
    // NOP
label_1b30cc:
    // 0x1b30cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b30d0:
    if (ctx->pc == 0x1B30D0u) {
        ctx->pc = 0x1B30D4u;
        goto label_1b30d4;
    }
    ctx->pc = 0x1B30CCu;
    {
        const bool branch_taken_0x1b30cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b30cc) {
            ctx->pc = 0x1B30D8u;
            goto label_1b30d8;
        }
    }
    ctx->pc = 0x1B30D4u;
label_1b30d4:
    // 0x1b30d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b30d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b30d8:
    // 0x1b30d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b30dc:
    if (ctx->pc == 0x1B30DCu) {
        ctx->pc = 0x1B30DCu;
            // 0x1b30dc: 0xc7a50380  lwc1        $f5, 0x380($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x1B30E0u;
        goto label_1b30e0;
    }
    ctx->pc = 0x1B30D8u;
    {
        const bool branch_taken_0x1b30d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30D8u;
            // 0x1b30dc: 0xc7a50380  lwc1        $f5, 0x380($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d8) {
            ctx->pc = 0x1B3104u;
            goto label_1b3104;
        }
    }
    ctx->pc = 0x1B30E0u;
label_1b30e0:
    // 0x1b30e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b30e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b30e4:
    // 0x1b30e4: 0x0  nop
    ctx->pc = 0x1b30e4u;
    // NOP
label_1b30e8:
    // 0x1b30e8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1b30e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b30ec:
    // 0x1b30ec: 0x0  nop
    ctx->pc = 0x1b30ecu;
    // NOP
label_1b30f0:
    // 0x1b30f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b30f4:
    if (ctx->pc == 0x1B30F4u) {
        ctx->pc = 0x1B30F8u;
        goto label_1b30f8;
    }
    ctx->pc = 0x1B30F0u;
    {
        const bool branch_taken_0x1b30f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b30f0) {
            ctx->pc = 0x1B30FCu;
            goto label_1b30fc;
        }
    }
    ctx->pc = 0x1B30F8u;
label_1b30f8:
    // 0x1b30f8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1b30f8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_1b30fc:
    // 0x1b30fc: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1b30fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_1b3100:
    // 0x1b3100: 0xc7a50380  lwc1        $f5, 0x380($sp)
    ctx->pc = 0x1b3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b3104:
    // 0x1b3104: 0xc7a70390  lwc1        $f7, 0x390($sp)
    ctx->pc = 0x1b3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1b3108:
    // 0x1b3108: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b310c:
    // 0x1b310c: 0x46072901  sub.s       $f4, $f5, $f7
    ctx->pc = 0x1b310cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_1b3110:
    // 0x1b3110: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1b3110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3114:
    // 0x1b3114: 0x0  nop
    ctx->pc = 0x1b3114u;
    // NOP
label_1b3118:
    // 0x1b3118: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b311c:
    if (ctx->pc == 0x1B311Cu) {
        ctx->pc = 0x1B311Cu;
            // 0x1b311c: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1B3120u;
        goto label_1b3120;
    }
    ctx->pc = 0x1B3118u;
    {
        const bool branch_taken_0x1b3118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3118u;
            // 0x1b311c: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3118) {
            ctx->pc = 0x1B3124u;
            goto label_1b3124;
        }
    }
    ctx->pc = 0x1B3120u;
label_1b3120:
    // 0x1b3120: 0x46002087  neg.s       $f2, $f4
    ctx->pc = 0x1b3120u;
    ctx->f[2] = FPU_NEG_S(ctx->f[4]);
label_1b3124:
    // 0x1b3124: 0x27a203a0  addiu       $v0, $sp, 0x3A0
    ctx->pc = 0x1b3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_1b3128:
    // 0x1b3128: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x1b3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1b312c:
    // 0x1b312c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b312cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3130:
    // 0x1b3130: 0x46054181  sub.s       $f6, $f8, $f5
    ctx->pc = 0x1b3130u;
    ctx->f[6] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
label_1b3134:
    // 0x1b3134: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x1b3134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3138:
    // 0x1b3138: 0x0  nop
    ctx->pc = 0x1b3138u;
    // NOP
label_1b313c:
    // 0x1b313c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b3140:
    if (ctx->pc == 0x1B3140u) {
        ctx->pc = 0x1B3140u;
            // 0x1b3140: 0x46003046  mov.s       $f1, $f6 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1B3144u;
        goto label_1b3144;
    }
    ctx->pc = 0x1B313Cu;
    {
        const bool branch_taken_0x1b313c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B313Cu;
            // 0x1b3140: 0x46003046  mov.s       $f1, $f6 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b313c) {
            ctx->pc = 0x1B3148u;
            goto label_1b3148;
        }
    }
    ctx->pc = 0x1B3144u;
label_1b3144:
    // 0x1b3144: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1b3144u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1b3148:
    // 0x1b3148: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b3148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b314c:
    // 0x1b314c: 0x0  nop
    ctx->pc = 0x1b314cu;
    // NOP
label_1b3150:
    // 0x1b3150: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1b3154:
    if (ctx->pc == 0x1B3154u) {
        ctx->pc = 0x1B3158u;
        goto label_1b3158;
    }
    ctx->pc = 0x1B3150u;
    {
        const bool branch_taken_0x1b3150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3150) {
            ctx->pc = 0x1B317Cu;
            goto label_1b317c;
        }
    }
    ctx->pc = 0x1B3158u;
label_1b3158:
    // 0x1b3158: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b315c:
    // 0x1b315c: 0x0  nop
    ctx->pc = 0x1b315cu;
    // NOP
label_1b3160:
    // 0x1b3160: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1b3160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3164:
    // 0x1b3164: 0x0  nop
    ctx->pc = 0x1b3164u;
    // NOP
label_1b3168:
    // 0x1b3168: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b316c:
    if (ctx->pc == 0x1B316Cu) {
        ctx->pc = 0x1B3170u;
        goto label_1b3170;
    }
    ctx->pc = 0x1B3168u;
    {
        const bool branch_taken_0x1b3168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3168) {
            ctx->pc = 0x1B3174u;
            goto label_1b3174;
        }
    }
    ctx->pc = 0x1B3170u;
label_1b3170:
    // 0x1b3170: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1b3170u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_1b3174:
    // 0x1b3174: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b3178:
    if (ctx->pc == 0x1B3178u) {
        ctx->pc = 0x1B317Cu;
        goto label_1b317c;
    }
    ctx->pc = 0x1B3174u;
    {
        const bool branch_taken_0x1b3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3174) {
            ctx->pc = 0x1B319Cu;
            goto label_1b319c;
        }
    }
    ctx->pc = 0x1B317Cu;
label_1b317c:
    // 0x1b317c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b317cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3180:
    // 0x1b3180: 0x0  nop
    ctx->pc = 0x1b3180u;
    // NOP
label_1b3184:
    // 0x1b3184: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x1b3184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3188:
    // 0x1b3188: 0x0  nop
    ctx->pc = 0x1b3188u;
    // NOP
label_1b318c:
    // 0x1b318c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b3190:
    if (ctx->pc == 0x1B3190u) {
        ctx->pc = 0x1B3194u;
        goto label_1b3194;
    }
    ctx->pc = 0x1B318Cu;
    {
        const bool branch_taken_0x1b318c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b318c) {
            ctx->pc = 0x1B3198u;
            goto label_1b3198;
        }
    }
    ctx->pc = 0x1B3194u;
label_1b3194:
    // 0x1b3194: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x1b3194u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_1b3198:
    // 0x1b3198: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x1b3198u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
label_1b319c:
    // 0x1b319c: 0x46072836  c.le.s      $f5, $f7
    ctx->pc = 0x1b319cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b31a0:
    // 0x1b31a0: 0x0  nop
    ctx->pc = 0x1b31a0u;
    // NOP
label_1b31a4:
    // 0x1b31a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b31a8:
    if (ctx->pc == 0x1B31A8u) {
        ctx->pc = 0x1B31ACu;
        goto label_1b31ac;
    }
    ctx->pc = 0x1B31A4u;
    {
        const bool branch_taken_0x1b31a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b31a4) {
            ctx->pc = 0x1B31C4u;
            goto label_1b31c4;
        }
    }
    ctx->pc = 0x1B31ACu;
label_1b31ac:
    // 0x1b31ac: 0x46082834  c.lt.s      $f5, $f8
    ctx->pc = 0x1b31acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b31b0:
    // 0x1b31b0: 0x0  nop
    ctx->pc = 0x1b31b0u;
    // NOP
label_1b31b4:
    // 0x1b31b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b31b8:
    if (ctx->pc == 0x1B31B8u) {
        ctx->pc = 0x1B31BCu;
        goto label_1b31bc;
    }
    ctx->pc = 0x1B31B4u;
    {
        const bool branch_taken_0x1b31b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b31b4) {
            ctx->pc = 0x1B31C4u;
            goto label_1b31c4;
        }
    }
    ctx->pc = 0x1B31BCu;
label_1b31bc:
    // 0x1b31bc: 0x10000037  b           . + 4 + (0x37 << 2)
label_1b31c0:
    if (ctx->pc == 0x1B31C0u) {
        ctx->pc = 0x1B31C4u;
        goto label_1b31c4;
    }
    ctx->pc = 0x1B31BCu;
    {
        const bool branch_taken_0x1b31bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b31bc) {
            ctx->pc = 0x1B329Cu;
            goto label_1b329c;
        }
    }
    ctx->pc = 0x1B31C4u;
label_1b31c4:
    // 0x1b31c4: 0x0  nop
    ctx->pc = 0x1b31c4u;
    // NOP
label_1b31c8:
    // 0x1b31c8: 0x46091836  c.le.s      $f3, $f9
    ctx->pc = 0x1b31c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b31cc:
    // 0x1b31cc: 0x0  nop
    ctx->pc = 0x1b31ccu;
    // NOP
label_1b31d0:
    // 0x1b31d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b31d4:
    if (ctx->pc == 0x1B31D4u) {
        ctx->pc = 0x1B31D8u;
        goto label_1b31d8;
    }
    ctx->pc = 0x1B31D0u;
    {
        const bool branch_taken_0x1b31d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b31d0) {
            ctx->pc = 0x1B31F0u;
            goto label_1b31f0;
        }
    }
    ctx->pc = 0x1B31D8u;
label_1b31d8:
    // 0x1b31d8: 0x460a1834  c.lt.s      $f3, $f10
    ctx->pc = 0x1b31d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b31dc:
    // 0x1b31dc: 0x0  nop
    ctx->pc = 0x1b31dcu;
    // NOP
label_1b31e0:
    // 0x1b31e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b31e4:
    if (ctx->pc == 0x1B31E4u) {
        ctx->pc = 0x1B31E8u;
        goto label_1b31e8;
    }
    ctx->pc = 0x1B31E0u;
    {
        const bool branch_taken_0x1b31e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b31e0) {
            ctx->pc = 0x1B31F0u;
            goto label_1b31f0;
        }
    }
    ctx->pc = 0x1B31E8u;
label_1b31e8:
    // 0x1b31e8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1b31ec:
    if (ctx->pc == 0x1B31ECu) {
        ctx->pc = 0x1B31ECu;
            // 0x1b31ec: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1B31F0u;
        goto label_1b31f0;
    }
    ctx->pc = 0x1B31E8u;
    {
        const bool branch_taken_0x1b31e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31E8u;
            // 0x1b31ec: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31e8) {
            ctx->pc = 0x1B329Cu;
            goto label_1b329c;
        }
    }
    ctx->pc = 0x1B31F0u;
label_1b31f0:
    // 0x1b31f0: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1b31f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1b31f4:
    // 0x1b31f4: 0xc047cc0  jal         func_11F300
label_1b31f8:
    if (ctx->pc == 0x1B31F8u) {
        ctx->pc = 0x1B31F8u;
            // 0x1b31f8: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x1B31FCu;
        goto label_1b31fc;
    }
    ctx->pc = 0x1B31F4u;
    SET_GPR_U32(ctx, 31, 0x1B31FCu);
    ctx->pc = 0x1B31F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31F4u;
            // 0x1b31f8: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31FCu; }
        if (ctx->pc != 0x1B31FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31FCu; }
        if (ctx->pc != 0x1B31FCu) { return; }
    }
    ctx->pc = 0x1B31FCu;
label_1b31fc:
    // 0x1b31fc: 0x10000027  b           . + 4 + (0x27 << 2)
label_1b3200:
    if (ctx->pc == 0x1B3200u) {
        ctx->pc = 0x1B3204u;
        goto label_1b3204;
    }
    ctx->pc = 0x1B31FCu;
    {
        const bool branch_taken_0x1b31fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b31fc) {
            ctx->pc = 0x1B329Cu;
            goto label_1b329c;
        }
    }
    ctx->pc = 0x1B3204u;
label_1b3204:
    // 0x1b3204: 0x0  nop
    ctx->pc = 0x1b3204u;
    // NOP
label_1b3208:
    // 0x1b3208: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1b3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b320c:
    // 0x1b320c: 0xc06c3d4  jal         func_1B0F50
label_1b3210:
    if (ctx->pc == 0x1B3210u) {
        ctx->pc = 0x1B3210u;
            // 0x1b3210: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3214u;
        goto label_1b3214;
    }
    ctx->pc = 0x1B320Cu;
    SET_GPR_U32(ctx, 31, 0x1B3214u);
    ctx->pc = 0x1B3210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B320Cu;
            // 0x1b3210: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3214u; }
        if (ctx->pc != 0x1B3214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3214u; }
        if (ctx->pc != 0x1B3214u) { return; }
    }
    ctx->pc = 0x1B3214u;
label_1b3214:
    // 0x1b3214: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b3214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3218:
    // 0x1b3218: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b321c:
    // 0x1b321c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b3220:
    // 0x1b3220: 0xc06c4d8  jal         func_1B1360
label_1b3224:
    if (ctx->pc == 0x1B3224u) {
        ctx->pc = 0x1B3224u;
            // 0x1b3224: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x1B3228u;
        goto label_1b3228;
    }
    ctx->pc = 0x1B3220u;
    SET_GPR_U32(ctx, 31, 0x1B3228u);
    ctx->pc = 0x1B3224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3220u;
            // 0x1b3224: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3228u; }
        if (ctx->pc != 0x1B3228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3228u; }
        if (ctx->pc != 0x1B3228u) { return; }
    }
    ctx->pc = 0x1B3228u;
label_1b3228:
    // 0x1b3228: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_1b322c:
    // 0x1b322c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1b322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b3230:
    // 0x1b3230: 0xc041bb0  jal         func_106EC0
label_1b3234:
    if (ctx->pc == 0x1B3234u) {
        ctx->pc = 0x1B3234u;
            // 0x1b3234: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1B3238u;
        goto label_1b3238;
    }
    ctx->pc = 0x1B3230u;
    SET_GPR_U32(ctx, 31, 0x1B3238u);
    ctx->pc = 0x1B3234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3230u;
            // 0x1b3234: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3238u; }
        if (ctx->pc != 0x1B3238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3238u; }
        if (ctx->pc != 0x1B3238u) { return; }
    }
    ctx->pc = 0x1B3238u;
label_1b3238:
    // 0x1b3238: 0x27b10240  addiu       $s1, $sp, 0x240
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b323c:
    // 0x1b323c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b3240:
    // 0x1b3240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b3244:
    // 0x1b3244: 0xc041bb0  jal         func_106EC0
label_1b3248:
    if (ctx->pc == 0x1B3248u) {
        ctx->pc = 0x1B3248u;
            // 0x1b3248: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x1B324Cu;
        goto label_1b324c;
    }
    ctx->pc = 0x1B3244u;
    SET_GPR_U32(ctx, 31, 0x1B324Cu);
    ctx->pc = 0x1B3248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3244u;
            // 0x1b3248: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B324Cu; }
        if (ctx->pc != 0x1B324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B324Cu; }
        if (ctx->pc != 0x1B324Cu) { return; }
    }
    ctx->pc = 0x1B324Cu;
label_1b324c:
    // 0x1b324c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1b324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b3250:
    // 0x1b3250: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1b3250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1b3254:
    // 0x1b3254: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x1b3254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
label_1b3258:
    // 0x1b3258: 0xc04c018  jal         func_130060
label_1b325c:
    if (ctx->pc == 0x1B325Cu) {
        ctx->pc = 0x1B325Cu;
            // 0x1b325c: 0xafa00244  sw          $zero, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3260u;
        goto label_1b3260;
    }
    ctx->pc = 0x1B3258u;
    SET_GPR_U32(ctx, 31, 0x1B3260u);
    ctx->pc = 0x1B325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3258u;
            // 0x1b325c: 0xafa00244  sw          $zero, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3260u; }
        if (ctx->pc != 0x1B3260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3260u; }
        if (ctx->pc != 0x1B3260u) { return; }
    }
    ctx->pc = 0x1B3260u;
label_1b3260:
    // 0x1b3260: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1b3260u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_1b3264:
    // 0x1b3264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b3268:
    // 0x1b3268: 0xc04c018  jal         func_130060
label_1b326c:
    if (ctx->pc == 0x1B326Cu) {
        ctx->pc = 0x1B326Cu;
            // 0x1b326c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1B3270u;
        goto label_1b3270;
    }
    ctx->pc = 0x1B3268u;
    SET_GPR_U32(ctx, 31, 0x1B3270u);
    ctx->pc = 0x1B326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3268u;
            // 0x1b326c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3270u; }
        if (ctx->pc != 0x1B3270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3270u; }
        if (ctx->pc != 0x1B3270u) { return; }
    }
    ctx->pc = 0x1B3270u;
label_1b3270:
    // 0x1b3270: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1b3270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3274:
    // 0x1b3274: 0x0  nop
    ctx->pc = 0x1b3274u;
    // NOP
label_1b3278:
    // 0x1b3278: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b327c:
    if (ctx->pc == 0x1B327Cu) {
        ctx->pc = 0x1B327Cu;
            // 0x1b327c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3280u;
        goto label_1b3280;
    }
    ctx->pc = 0x1B3278u;
    {
        const bool branch_taken_0x1b3278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3278u;
            // 0x1b327c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3278) {
            ctx->pc = 0x1B3294u;
            goto label_1b3294;
        }
    }
    ctx->pc = 0x1B3280u;
label_1b3280:
    // 0x1b3280: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1b3280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b3284:
    // 0x1b3284: 0xc04c018  jal         func_130060
label_1b3288:
    if (ctx->pc == 0x1B3288u) {
        ctx->pc = 0x1B3288u;
            // 0x1b3288: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x1B328Cu;
        goto label_1b328c;
    }
    ctx->pc = 0x1B3284u;
    SET_GPR_U32(ctx, 31, 0x1B328Cu);
    ctx->pc = 0x1B3288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3284u;
            // 0x1b3288: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B328Cu; }
        if (ctx->pc != 0x1B328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B328Cu; }
        if (ctx->pc != 0x1B328Cu) { return; }
    }
    ctx->pc = 0x1B328Cu;
label_1b328c:
    // 0x1b328c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b3290:
    if (ctx->pc == 0x1B3290u) {
        ctx->pc = 0x1B3294u;
        goto label_1b3294;
    }
    ctx->pc = 0x1B328Cu;
    {
        const bool branch_taken_0x1b328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b328c) {
            ctx->pc = 0x1B329Cu;
            goto label_1b329c;
        }
    }
    ctx->pc = 0x1B3294u;
label_1b3294:
    // 0x1b3294: 0xc04c018  jal         func_130060
label_1b3298:
    if (ctx->pc == 0x1B3298u) {
        ctx->pc = 0x1B3298u;
            // 0x1b3298: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1B329Cu;
        goto label_1b329c;
    }
    ctx->pc = 0x1B3294u;
    SET_GPR_U32(ctx, 31, 0x1B329Cu);
    ctx->pc = 0x1B3298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3294u;
            // 0x1b3298: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B329Cu; }
        if (ctx->pc != 0x1B329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B329Cu; }
        if (ctx->pc != 0x1B329Cu) { return; }
    }
    ctx->pc = 0x1B329Cu;
label_1b329c:
    // 0x1b329c: 0x0  nop
    ctx->pc = 0x1b329cu;
    // NOP
label_1b32a0:
    // 0x1b32a0: 0x2a410040  slti        $at, $s2, 0x40
    ctx->pc = 0x1b32a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
label_1b32a4:
    // 0x1b32a4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1b32a8:
    if (ctx->pc == 0x1B32A8u) {
        ctx->pc = 0x1B32A8u;
            // 0x1b32a8: 0x3dd1021  addu        $v0, $fp, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
        ctx->pc = 0x1B32ACu;
        goto label_1b32ac;
    }
    ctx->pc = 0x1B32A4u;
    {
        const bool branch_taken_0x1b32a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32A4u;
            // 0x1b32a8: 0x3dd1021  addu        $v0, $fp, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32a4) {
            ctx->pc = 0x1B3304u;
            goto label_1b3304;
        }
    }
    ctx->pc = 0x1B32ACu;
label_1b32ac:
    // 0x1b32ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b32acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b32b0:
    // 0x1b32b0: 0xac500250  sw          $s0, 0x250($v0)
    ctx->pc = 0x1b32b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 16));
label_1b32b4:
    // 0x1b32b4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_1b32b8:
    if (ctx->pc == 0x1B32B8u) {
        ctx->pc = 0x1B32B8u;
            // 0x1b32b8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x1B32BCu;
        goto label_1b32bc;
    }
    ctx->pc = 0x1B32B4u;
    {
        const bool branch_taken_0x1b32b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32B4u;
            // 0x1b32b8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32b4) {
            ctx->pc = 0x1B32CCu;
            goto label_1b32cc;
        }
    }
    ctx->pc = 0x1B32BCu;
label_1b32bc:
    // 0x1b32bc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1b32bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b32c0:
    // 0x1b32c0: 0x0  nop
    ctx->pc = 0x1b32c0u;
    // NOP
label_1b32c4:
    // 0x1b32c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b32c8:
    if (ctx->pc == 0x1B32C8u) {
        ctx->pc = 0x1B32CCu;
        goto label_1b32cc;
    }
    ctx->pc = 0x1B32C4u;
    {
        const bool branch_taken_0x1b32c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b32c4) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B32CCu;
label_1b32cc:
    // 0x1b32cc: 0x0  nop
    ctx->pc = 0x1b32ccu;
    // NOP
label_1b32d0:
    // 0x1b32d0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1b32d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b32d4:
    // 0x1b32d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1b32d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1b32d8:
    // 0x1b32d8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1b32dc:
    // 0x1b32dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1b32e0:
    // 0x1b32e0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1b32e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1b32e4:
    // 0x1b32e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b32e8:
    // 0x1b32e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b32ec:
    // 0x1b32ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1b32f0:
    // 0x1b32f0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b32f4:
    // 0x1b32f4: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1b32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_1b32f8:
    // 0x1b32f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b32f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b32fc:
    // 0x1b32fc: 0x1440fe69  bnez        $v0, . + 4 + (-0x197 << 2)
label_1b3300:
    if (ctx->pc == 0x1B3300u) {
        ctx->pc = 0x1B3304u;
        goto label_1b3304;
    }
    ctx->pc = 0x1B32FCu;
    {
        const bool branch_taken_0x1b32fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b32fc) {
            ctx->pc = 0x1B2CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2ca4;
        }
    }
    ctx->pc = 0x1B3304u;
label_1b3304:
    // 0x1b3304: 0x0  nop
    ctx->pc = 0x1b3304u;
    // NOP
label_1b3308:
    // 0x1b3308: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
label_1b330c:
    if (ctx->pc == 0x1B330Cu) {
        ctx->pc = 0x1B330Cu;
            // 0x1b330c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3310u;
        goto label_1b3310;
    }
    ctx->pc = 0x1B3308u;
    {
        const bool branch_taken_0x1b3308 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3308u;
            // 0x1b330c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3308) {
            ctx->pc = 0x1B3324u;
            goto label_1b3324;
        }
    }
    ctx->pc = 0x1B3310u;
label_1b3310:
    // 0x1b3310: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1b3314:
    // 0x1b3314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b3318:
    if (ctx->pc == 0x1B3318u) {
        ctx->pc = 0x1B3318u;
            // 0x1b3318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B331Cu;
        goto label_1b331c;
    }
    ctx->pc = 0x1B3314u;
    {
        const bool branch_taken_0x1b3314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3314u;
            // 0x1b3318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3314) {
            ctx->pc = 0x1B3324u;
            goto label_1b3324;
        }
    }
    ctx->pc = 0x1B331Cu;
label_1b331c:
    // 0x1b331c: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_1b3320:
    if (ctx->pc == 0x1B3320u) {
        ctx->pc = 0x1B3320u;
            // 0x1b3320: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1B3324u;
        goto label_1b3324;
    }
    ctx->pc = 0x1B331Cu;
    {
        const bool branch_taken_0x1b331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B331Cu;
            // 0x1b3320: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b331c) {
            ctx->pc = 0x1B3A40u;
            goto label_1b3a40;
        }
    }
    ctx->pc = 0x1B3324u;
label_1b3324:
    // 0x1b3324: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_1b3328:
    if (ctx->pc == 0x1B3328u) {
        ctx->pc = 0x1B332Cu;
        goto label_1b332c;
    }
    ctx->pc = 0x1B3324u;
    {
        const bool branch_taken_0x1b3324 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3324) {
            ctx->pc = 0x1B3350u;
            goto label_1b3350;
        }
    }
    ctx->pc = 0x1B332Cu;
label_1b332c:
    // 0x1b332c: 0xc6ec0024  lwc1        $f12, 0x24($s7)
    ctx->pc = 0x1b332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b3330:
    // 0x1b3330: 0xc06c3d4  jal         func_1B0F50
label_1b3334:
    if (ctx->pc == 0x1B3334u) {
        ctx->pc = 0x1B3334u;
            // 0x1b3334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3338u;
        goto label_1b3338;
    }
    ctx->pc = 0x1B3330u;
    SET_GPR_U32(ctx, 31, 0x1B3338u);
    ctx->pc = 0x1B3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3330u;
            // 0x1b3334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3338u; }
        if (ctx->pc != 0x1B3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3338u; }
        if (ctx->pc != 0x1B3338u) { return; }
    }
    ctx->pc = 0x1B3338u;
label_1b3338:
    // 0x1b3338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b333c:
    // 0x1b333c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b3340:
    // 0x1b3340: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b3344:
    // 0x1b3344: 0xc06c3fc  jal         func_1B0FF0
label_1b3348:
    if (ctx->pc == 0x1B3348u) {
        ctx->pc = 0x1B3348u;
            // 0x1b3348: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1B334Cu;
        goto label_1b334c;
    }
    ctx->pc = 0x1B3344u;
    SET_GPR_U32(ctx, 31, 0x1B334Cu);
    ctx->pc = 0x1B3348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3344u;
            // 0x1b3348: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B334Cu; }
        if (ctx->pc != 0x1B334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B334Cu; }
        if (ctx->pc != 0x1B334Cu) { return; }
    }
    ctx->pc = 0x1B334Cu;
label_1b334c:
    // 0x1b334c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1b334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_1b3350:
    // 0x1b3350: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1b3354:
    // 0x1b3354: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_1b3358:
    if (ctx->pc == 0x1B3358u) {
        ctx->pc = 0x1B335Cu;
        goto label_1b335c;
    }
    ctx->pc = 0x1B3354u;
    {
        const bool branch_taken_0x1b3354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3354) {
            ctx->pc = 0x1B34D4u;
            goto label_1b34d4;
        }
    }
    ctx->pc = 0x1B335Cu;
label_1b335c:
    // 0x1b335c: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x1b335cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_1b3360:
    // 0x1b3360: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b3364:
    // 0x1b3364: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1b3364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b3368:
    // 0x1b3368: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b3368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b336c:
    // 0x1b336c: 0xc06c3fc  jal         func_1B0FF0
label_1b3370:
    if (ctx->pc == 0x1B3370u) {
        ctx->pc = 0x1B3370u;
            // 0x1b3370: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3374u;
        goto label_1b3374;
    }
    ctx->pc = 0x1B336Cu;
    SET_GPR_U32(ctx, 31, 0x1B3374u);
    ctx->pc = 0x1B3370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B336Cu;
            // 0x1b3370: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3374u; }
        if (ctx->pc != 0x1B3374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3374u; }
        if (ctx->pc != 0x1B3374u) { return; }
    }
    ctx->pc = 0x1B3374u;
label_1b3374:
    // 0x1b3374: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1b3374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_1b3378:
    // 0x1b3378: 0xc7a401f0  lwc1        $f4, 0x1F0($sp)
    ctx->pc = 0x1b3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b337c:
    // 0x1b337c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1b3380:
    // 0x1b3380: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1b3380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b3384:
    // 0x1b3384: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x1b3384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3388:
    // 0x1b3388: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x1b3388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b338c:
    // 0x1b338c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b338cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3390:
    // 0x1b3390: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1b3390u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3394:
    // 0x1b3394: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b3394u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1b3398:
    // 0x1b3398: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1b3398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1b339c:
    // 0x1b339c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b339cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b33a0:
    // 0x1b33a0: 0x0  nop
    ctx->pc = 0x1b33a0u;
    // NOP
label_1b33a4:
    // 0x1b33a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b33a8:
    if (ctx->pc == 0x1B33A8u) {
        ctx->pc = 0x1B33ACu;
        goto label_1b33ac;
    }
    ctx->pc = 0x1B33A4u;
    {
        const bool branch_taken_0x1b33a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b33a4) {
            ctx->pc = 0x1B33B0u;
            goto label_1b33b0;
        }
    }
    ctx->pc = 0x1B33ACu;
label_1b33ac:
    // 0x1b33ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b33acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b33b0:
    // 0x1b33b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b33b4:
    // 0x1b33b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b33b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b33b8:
    // 0x1b33b8: 0x0  nop
    ctx->pc = 0x1b33b8u;
    // NOP
label_1b33bc:
    // 0x1b33bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b33bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b33c0:
    // 0x1b33c0: 0x0  nop
    ctx->pc = 0x1b33c0u;
    // NOP
label_1b33c4:
    // 0x1b33c4: 0x45010043  bc1t        . + 4 + (0x43 << 2)
label_1b33c8:
    if (ctx->pc == 0x1B33C8u) {
        ctx->pc = 0x1B33CCu;
        goto label_1b33cc;
    }
    ctx->pc = 0x1B33C4u;
    {
        const bool branch_taken_0x1b33c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b33c4) {
            ctx->pc = 0x1B34D4u;
            goto label_1b34d4;
        }
    }
    ctx->pc = 0x1B33CCu;
label_1b33cc:
    // 0x1b33cc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b33d0:
    // 0x1b33d0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1b33d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b33d4:
    // 0x1b33d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b33d8:
    if (ctx->pc == 0x1B33D8u) {
        ctx->pc = 0x1B33DCu;
        goto label_1b33dc;
    }
    ctx->pc = 0x1B33D4u;
    {
        const bool branch_taken_0x1b33d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b33d4) {
            ctx->pc = 0x1B33FCu;
            goto label_1b33fc;
        }
    }
    ctx->pc = 0x1B33DCu;
label_1b33dc:
    // 0x1b33dc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b33e0:
    // 0x1b33e0: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_1b33e4:
    // 0x1b33e4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1b33e8:
    if (ctx->pc == 0x1B33E8u) {
        ctx->pc = 0x1B33ECu;
        goto label_1b33ec;
    }
    ctx->pc = 0x1B33E4u;
    {
        const bool branch_taken_0x1b33e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b33e4) {
            ctx->pc = 0x1B33FCu;
            goto label_1b33fc;
        }
    }
    ctx->pc = 0x1B33ECu;
label_1b33ec:
    // 0x1b33ec: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_1b33f0:
    // 0x1b33f0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1b33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1b33f4:
    // 0x1b33f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b33f8:
    if (ctx->pc == 0x1B33F8u) {
        ctx->pc = 0x1B33F8u;
            // 0x1b33f8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x1B33FCu;
        goto label_1b33fc;
    }
    ctx->pc = 0x1B33F4u;
    {
        const bool branch_taken_0x1b33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33F4u;
            // 0x1b33f8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f4) {
            ctx->pc = 0x1B3404u;
            goto label_1b3404;
        }
    }
    ctx->pc = 0x1B33FCu;
label_1b33fc:
    // 0x1b33fc: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1b33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_1b3400:
    // 0x1b3400: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b3400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1b3404:
    // 0x1b3404: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b3408:
    if (ctx->pc == 0x1B3408u) {
        ctx->pc = 0x1B3408u;
            // 0x1b3408: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x1B340Cu;
        goto label_1b340c;
    }
    ctx->pc = 0x1B3404u;
    {
        const bool branch_taken_0x1b3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3404u;
            // 0x1b3408: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3404) {
            ctx->pc = 0x1B34D4u;
            goto label_1b34d4;
        }
    }
    ctx->pc = 0x1B340Cu;
label_1b340c:
    // 0x1b340c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3410:
    // 0x1b3410: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b3410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b3414:
    // 0x1b3414: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b3414u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b3418:
    // 0x1b3418: 0x0  nop
    ctx->pc = 0x1b3418u;
    // NOP
label_1b341c:
    // 0x1b341c: 0x0  nop
    ctx->pc = 0x1b341cu;
    // NOP
label_1b3420:
    // 0x1b3420: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3420u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3424:
    // 0x1b3424: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1b3428:
    if (ctx->pc == 0x1B3428u) {
        ctx->pc = 0x1B342Cu;
        goto label_1b342c;
    }
    ctx->pc = 0x1B3424u;
    {
        const bool branch_taken_0x1b3424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3424) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B342Cu;
label_1b342c:
    // 0x1b342c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3430:
    // 0x1b3430: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1b3430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b3434:
    // 0x1b3434: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b3438:
    if (ctx->pc == 0x1B3438u) {
        ctx->pc = 0x1B343Cu;
        goto label_1b343c;
    }
    ctx->pc = 0x1B3434u;
    {
        const bool branch_taken_0x1b3434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3434) {
            ctx->pc = 0x1B3454u;
            goto label_1b3454;
        }
    }
    ctx->pc = 0x1B343Cu;
label_1b343c:
    // 0x1b343c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3440:
    // 0x1b3440: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1b3440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_1b3444:
    // 0x1b3444: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b3448:
    if (ctx->pc == 0x1B3448u) {
        ctx->pc = 0x1B3448u;
            // 0x1b3448: 0x26020006  addiu       $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->pc = 0x1B344Cu;
        goto label_1b344c;
    }
    ctx->pc = 0x1B3444u;
    {
        const bool branch_taken_0x1b3444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3444u;
            // 0x1b3448: 0x26020006  addiu       $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3444) {
            ctx->pc = 0x1B3454u;
            goto label_1b3454;
        }
    }
    ctx->pc = 0x1B344Cu;
label_1b344c:
    // 0x1b344c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b3450:
    if (ctx->pc == 0x1B3450u) {
        ctx->pc = 0x1B3450u;
            // 0x1b3450: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x1B3454u;
        goto label_1b3454;
    }
    ctx->pc = 0x1B344Cu;
    {
        const bool branch_taken_0x1b344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B344Cu;
            // 0x1b3450: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b344c) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B3454u;
label_1b3454:
    // 0x1b3454: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3458:
    // 0x1b3458: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1b3458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_1b345c:
    // 0x1b345c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b3460:
    if (ctx->pc == 0x1B3460u) {
        ctx->pc = 0x1B3464u;
        goto label_1b3464;
    }
    ctx->pc = 0x1B345Cu;
    {
        const bool branch_taken_0x1b345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b345c) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B3464u;
label_1b3464:
    // 0x1b3464: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b3464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3468:
    // 0x1b3468: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1b3468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_1b346c:
    // 0x1b346c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b3470:
    if (ctx->pc == 0x1B3470u) {
        ctx->pc = 0x1B3470u;
            // 0x1b3470: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1B3474u;
        goto label_1b3474;
    }
    ctx->pc = 0x1B346Cu;
    {
        const bool branch_taken_0x1b346c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B346Cu;
            // 0x1b3470: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b346c) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B3474u;
label_1b3474:
    // 0x1b3474: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b3478:
    if (ctx->pc == 0x1B3478u) {
        ctx->pc = 0x1B3478u;
            // 0x1b3478: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x1B347Cu;
        goto label_1b347c;
    }
    ctx->pc = 0x1B3474u;
    {
        const bool branch_taken_0x1b3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3474u;
            // 0x1b3478: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3474) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B347Cu;
label_1b347c:
    // 0x1b347c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3480:
    // 0x1b3480: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x1b3480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_1b3484:
    // 0x1b3484: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b3488:
    if (ctx->pc == 0x1B3488u) {
        ctx->pc = 0x1B348Cu;
        goto label_1b348c;
    }
    ctx->pc = 0x1B3484u;
    {
        const bool branch_taken_0x1b3484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3484) {
            ctx->pc = 0x1B34A4u;
            goto label_1b34a4;
        }
    }
    ctx->pc = 0x1B348Cu;
label_1b348c:
    // 0x1b348c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b3490:
    // 0x1b3490: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x1b3490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_1b3494:
    // 0x1b3494: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b3498:
    if (ctx->pc == 0x1B3498u) {
        ctx->pc = 0x1B3498u;
            // 0x1b3498: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1B349Cu;
        goto label_1b349c;
    }
    ctx->pc = 0x1B3494u;
    {
        const bool branch_taken_0x1b3494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3494u;
            // 0x1b3498: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3494) {
            ctx->pc = 0x1B34A4u;
            goto label_1b34a4;
        }
    }
    ctx->pc = 0x1B349Cu;
label_1b349c:
    // 0x1b349c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b34a0:
    if (ctx->pc == 0x1B34A0u) {
        ctx->pc = 0x1B34A0u;
            // 0x1b34a0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x1B34A4u;
        goto label_1b34a4;
    }
    ctx->pc = 0x1B349Cu;
    {
        const bool branch_taken_0x1b349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B349Cu;
            // 0x1b34a0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b349c) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B34A4u;
label_1b34a4:
    // 0x1b34a4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b34a8:
    // 0x1b34a8: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x1b34a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_1b34ac:
    // 0x1b34ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b34b0:
    if (ctx->pc == 0x1B34B0u) {
        ctx->pc = 0x1B34B4u;
        goto label_1b34b4;
    }
    ctx->pc = 0x1B34ACu;
    {
        const bool branch_taken_0x1b34ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b34ac) {
            ctx->pc = 0x1B34CCu;
            goto label_1b34cc;
        }
    }
    ctx->pc = 0x1B34B4u;
label_1b34b4:
    // 0x1b34b4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1b34b8:
    // 0x1b34b8: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x1b34b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_1b34bc:
    // 0x1b34bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b34c0:
    if (ctx->pc == 0x1B34C0u) {
        ctx->pc = 0x1B34C0u;
            // 0x1b34c0: 0x26020012  addiu       $v0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->pc = 0x1B34C4u;
        goto label_1b34c4;
    }
    ctx->pc = 0x1B34BCu;
    {
        const bool branch_taken_0x1b34bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34BCu;
            // 0x1b34c0: 0x26020012  addiu       $v0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34bc) {
            ctx->pc = 0x1B34CCu;
            goto label_1b34cc;
        }
    }
    ctx->pc = 0x1B34C4u;
label_1b34c4:
    // 0x1b34c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b34c8:
    if (ctx->pc == 0x1B34C8u) {
        ctx->pc = 0x1B34C8u;
            // 0x1b34c8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x1B34CCu;
        goto label_1b34cc;
    }
    ctx->pc = 0x1B34C4u;
    {
        const bool branch_taken_0x1b34c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34C4u;
            // 0x1b34c8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34c4) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B34CCu;
label_1b34cc:
    // 0x1b34cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b34d0:
    if (ctx->pc == 0x1B34D0u) {
        ctx->pc = 0x1B34D0u;
            // 0x1b34d0: 0xafb000d0  sw          $s0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 16));
        ctx->pc = 0x1B34D4u;
        goto label_1b34d4;
    }
    ctx->pc = 0x1B34CCu;
    {
        const bool branch_taken_0x1b34cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34CCu;
            // 0x1b34d0: 0xafb000d0  sw          $s0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34cc) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B34D4u;
label_1b34d4:
    // 0x1b34d4: 0x12c0ffcd  beqz        $s6, . + 4 + (-0x33 << 2)
label_1b34d8:
    if (ctx->pc == 0x1B34D8u) {
        ctx->pc = 0x1B34DCu;
        goto label_1b34dc;
    }
    ctx->pc = 0x1B34D4u;
    {
        const bool branch_taken_0x1b34d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b34d4) {
            ctx->pc = 0x1B340Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b340c;
        }
    }
    ctx->pc = 0x1B34DCu;
label_1b34dc:
    // 0x1b34dc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1b34dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b34e0:
    // 0x1b34e0: 0xc06c3fc  jal         func_1B0FF0
label_1b34e4:
    if (ctx->pc == 0x1B34E4u) {
        ctx->pc = 0x1B34E4u;
            // 0x1b34e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B34E8u;
        goto label_1b34e8;
    }
    ctx->pc = 0x1B34E0u;
    SET_GPR_U32(ctx, 31, 0x1B34E8u);
    ctx->pc = 0x1B34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34E0u;
            // 0x1b34e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34E8u; }
        if (ctx->pc != 0x1B34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34E8u; }
        if (ctx->pc != 0x1B34E8u) { return; }
    }
    ctx->pc = 0x1B34E8u;
label_1b34e8:
    // 0x1b34e8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1b34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1b34ec:
    // 0x1b34ec: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1b34f0:
    // 0x1b34f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b34f4:
    if (ctx->pc == 0x1B34F4u) {
        ctx->pc = 0x1B34F4u;
            // 0x1b34f4: 0x27a40490  addiu       $a0, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = 0x1B34F8u;
        goto label_1b34f8;
    }
    ctx->pc = 0x1B34F0u;
    {
        const bool branch_taken_0x1b34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34F0u;
            // 0x1b34f4: 0x27a40490  addiu       $a0, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34f0) {
            ctx->pc = 0x1B3524u;
            goto label_1b3524;
        }
    }
    ctx->pc = 0x1B34F8u;
label_1b34f8:
    // 0x1b34f8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1b34f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1b34fc:
    // 0x1b34fc: 0xc7a00350  lwc1        $f0, 0x350($sp)
    ctx->pc = 0x1b34fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3500:
    // 0x1b3500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b3504:
    // 0x1b3504: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b3504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1b3508:
    // 0x1b3508: 0xc7a00358  lwc1        $f0, 0x358($sp)
    ctx->pc = 0x1b3508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b350c:
    // 0x1b350c: 0xc06c3c0  jal         func_1B0F00
label_1b3510:
    if (ctx->pc == 0x1B3510u) {
        ctx->pc = 0x1B3510u;
            // 0x1b3510: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x1B3514u;
        goto label_1b3514;
    }
    ctx->pc = 0x1B350Cu;
    SET_GPR_U32(ctx, 31, 0x1B3514u);
    ctx->pc = 0x1B3510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B350Cu;
            // 0x1b3510: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3514u; }
        if (ctx->pc != 0x1B3514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3514u; }
        if (ctx->pc != 0x1B3514u) { return; }
    }
    ctx->pc = 0x1B3514u;
label_1b3514:
    // 0x1b3514: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1b3514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_1b3518:
    // 0x1b3518: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b351c:
    // 0x1b351c: 0x10000147  b           . + 4 + (0x147 << 2)
label_1b3520:
    if (ctx->pc == 0x1B3520u) {
        ctx->pc = 0x1B3520u;
            // 0x1b3520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B3524u;
        goto label_1b3524;
    }
    ctx->pc = 0x1B351Cu;
    {
        const bool branch_taken_0x1b351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B351Cu;
            // 0x1b3520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b351c) {
            ctx->pc = 0x1B3A3Cu;
            goto label_1b3a3c;
        }
    }
    ctx->pc = 0x1B3524u;
label_1b3524:
    // 0x1b3524: 0xc04bc8c  jal         func_12F230
label_1b3528:
    if (ctx->pc == 0x1B3528u) {
        ctx->pc = 0x1B3528u;
            // 0x1b3528: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x1B352Cu;
        goto label_1b352c;
    }
    ctx->pc = 0x1B3524u;
    SET_GPR_U32(ctx, 31, 0x1B352Cu);
    ctx->pc = 0x1B3528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3524u;
            // 0x1b3528: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B352Cu; }
        if (ctx->pc != 0x1B352Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B352Cu; }
        if (ctx->pc != 0x1B352Cu) { return; }
    }
    ctx->pc = 0x1B352Cu;
label_1b352c:
    // 0x1b352c: 0x12c0003f  beqz        $s6, . + 4 + (0x3F << 2)
label_1b3530:
    if (ctx->pc == 0x1B3530u) {
        ctx->pc = 0x1B3530u;
            // 0x1b3530: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3534u;
        goto label_1b3534;
    }
    ctx->pc = 0x1B352Cu;
    {
        const bool branch_taken_0x1b352c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B352Cu;
            // 0x1b3530: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b352c) {
            ctx->pc = 0x1B362Cu;
            goto label_1b362c;
        }
    }
    ctx->pc = 0x1B3534u;
label_1b3534:
    // 0x1b3534: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1b3538:
    // 0x1b3538: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b3538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b353c:
    // 0x1b353c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b353cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b3540:
    // 0x1b3540: 0x320f809  jalr        $t9
label_1b3544:
    if (ctx->pc == 0x1B3544u) {
        ctx->pc = 0x1B3544u;
            // 0x1b3544: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->pc = 0x1B3548u;
        goto label_1b3548;
    }
    ctx->pc = 0x1B3540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B3548u);
        ctx->pc = 0x1B3544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3540u;
            // 0x1b3544: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3548u; }
            if (ctx->pc != 0x1B3548u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3548u;
label_1b3548:
    // 0x1b3548: 0xc6ec0024  lwc1        $f12, 0x24($s7)
    ctx->pc = 0x1b3548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b354c:
    // 0x1b354c: 0xc06c3d4  jal         func_1B0F50
label_1b3550:
    if (ctx->pc == 0x1B3550u) {
        ctx->pc = 0x1B3550u;
            // 0x1b3550: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3554u;
        goto label_1b3554;
    }
    ctx->pc = 0x1B354Cu;
    SET_GPR_U32(ctx, 31, 0x1B3554u);
    ctx->pc = 0x1B3550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B354Cu;
            // 0x1b3550: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3554u; }
        if (ctx->pc != 0x1B3554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3554u; }
        if (ctx->pc != 0x1B3554u) { return; }
    }
    ctx->pc = 0x1B3554u;
label_1b3554:
    // 0x1b3554: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3558:
    // 0x1b3558: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b355c:
    // 0x1b355c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b355cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b3560:
    // 0x1b3560: 0xc06c4d8  jal         func_1B1360
label_1b3564:
    if (ctx->pc == 0x1B3564u) {
        ctx->pc = 0x1B3564u;
            // 0x1b3564: 0x27a604a0  addiu       $a2, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->pc = 0x1B3568u;
        goto label_1b3568;
    }
    ctx->pc = 0x1B3560u;
    SET_GPR_U32(ctx, 31, 0x1B3568u);
    ctx->pc = 0x1B3564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3560u;
            // 0x1b3564: 0x27a604a0  addiu       $a2, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3568u; }
        if (ctx->pc != 0x1B3568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3568u; }
        if (ctx->pc != 0x1B3568u) { return; }
    }
    ctx->pc = 0x1B3568u;
label_1b3568:
    // 0x1b3568: 0x8ee20324  lw          $v0, 0x324($s7)
    ctx->pc = 0x1b3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 804)));
label_1b356c:
    // 0x1b356c: 0x27a704d0  addiu       $a3, $sp, 0x4D0
    ctx->pc = 0x1b356cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_1b3570:
    // 0x1b3570: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b3574:
    // 0x1b3574: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b3574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b3578:
    // 0x1b3578: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x1b3578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_1b357c:
    // 0x1b357c: 0x784300a0  lq          $v1, 0xA0($v0)
    ctx->pc = 0x1b357cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 160)));
label_1b3580:
    // 0x1b3580: 0x784200b0  lq          $v0, 0xB0($v0)
    ctx->pc = 0x1b3580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 176)));
label_1b3584:
    // 0x1b3584: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1b3584u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_1b3588:
    // 0x1b3588: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1b3588u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_1b358c:
    // 0x1b358c: 0xafa004e4  sw          $zero, 0x4E4($sp)
    ctx->pc = 0x1b358cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 0));
label_1b3590:
    // 0x1b3590: 0xc041bb0  jal         func_106EC0
label_1b3594:
    if (ctx->pc == 0x1B3594u) {
        ctx->pc = 0x1B3594u;
            // 0x1b3594: 0xafa004d4  sw          $zero, 0x4D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1236), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3598u;
        goto label_1b3598;
    }
    ctx->pc = 0x1B3590u;
    SET_GPR_U32(ctx, 31, 0x1B3598u);
    ctx->pc = 0x1B3594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3590u;
            // 0x1b3594: 0xafa004d4  sw          $zero, 0x4D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3598u; }
        if (ctx->pc != 0x1B3598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3598u; }
        if (ctx->pc != 0x1B3598u) { return; }
    }
    ctx->pc = 0x1B3598u;
label_1b3598:
    // 0x1b3598: 0x27b00240  addiu       $s0, $sp, 0x240
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b359c:
    // 0x1b359c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b35a0:
    // 0x1b35a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b35a4:
    // 0x1b35a4: 0xc041bb0  jal         func_106EC0
label_1b35a8:
    if (ctx->pc == 0x1B35A8u) {
        ctx->pc = 0x1B35A8u;
            // 0x1b35a8: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x1B35ACu;
        goto label_1b35ac;
    }
    ctx->pc = 0x1B35A4u;
    SET_GPR_U32(ctx, 31, 0x1B35ACu);
    ctx->pc = 0x1B35A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35A4u;
            // 0x1b35a8: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35ACu; }
        if (ctx->pc != 0x1B35ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35ACu; }
        if (ctx->pc != 0x1B35ACu) { return; }
    }
    ctx->pc = 0x1B35ACu;
label_1b35ac:
    // 0x1b35ac: 0x27b104c0  addiu       $s1, $sp, 0x4C0
    ctx->pc = 0x1b35acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_1b35b0:
    // 0x1b35b0: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1b35b4:
    // 0x1b35b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b35b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b35b8:
    // 0x1b35b8: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b35bc:
    // 0x1b35bc: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x1b35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
label_1b35c0:
    // 0x1b35c0: 0xc041c3e  jal         func_1070F8
label_1b35c4:
    if (ctx->pc == 0x1B35C4u) {
        ctx->pc = 0x1B35C4u;
            // 0x1b35c4: 0xafa00244  sw          $zero, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
        ctx->pc = 0x1B35C8u;
        goto label_1b35c8;
    }
    ctx->pc = 0x1B35C0u;
    SET_GPR_U32(ctx, 31, 0x1B35C8u);
    ctx->pc = 0x1B35C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35C0u;
            // 0x1b35c4: 0xafa00244  sw          $zero, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35C8u; }
        if (ctx->pc != 0x1B35C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35C8u; }
        if (ctx->pc != 0x1B35C8u) { return; }
    }
    ctx->pc = 0x1B35C8u;
label_1b35c8:
    // 0x1b35c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b35c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b35cc:
    // 0x1b35cc: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x1b35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_1b35d0:
    // 0x1b35d0: 0xc041c3e  jal         func_1070F8
label_1b35d4:
    if (ctx->pc == 0x1B35D4u) {
        ctx->pc = 0x1B35D4u;
            // 0x1b35d4: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1B35D8u;
        goto label_1b35d8;
    }
    ctx->pc = 0x1B35D0u;
    SET_GPR_U32(ctx, 31, 0x1B35D8u);
    ctx->pc = 0x1B35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35D0u;
            // 0x1b35d4: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35D8u; }
        if (ctx->pc != 0x1B35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35D8u; }
        if (ctx->pc != 0x1B35D8u) { return; }
    }
    ctx->pc = 0x1B35D8u;
label_1b35d8:
    // 0x1b35d8: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x1b35d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_1b35dc:
    // 0x1b35dc: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x1b35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
label_1b35e0:
    // 0x1b35e0: 0xc04bff4  jal         func_12FFD0
label_1b35e4:
    if (ctx->pc == 0x1B35E4u) {
        ctx->pc = 0x1B35E4u;
            // 0x1b35e4: 0xafa004b4  sw          $zero, 0x4B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
        ctx->pc = 0x1B35E8u;
        goto label_1b35e8;
    }
    ctx->pc = 0x1B35E0u;
    SET_GPR_U32(ctx, 31, 0x1B35E8u);
    ctx->pc = 0x1B35E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35E0u;
            // 0x1b35e4: 0xafa004b4  sw          $zero, 0x4B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35E8u; }
        if (ctx->pc != 0x1B35E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35E8u; }
        if (ctx->pc != 0x1B35E8u) { return; }
    }
    ctx->pc = 0x1B35E8u;
label_1b35e8:
    // 0x1b35e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b35e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b35ec:
    // 0x1b35ec: 0xc04bff4  jal         func_12FFD0
label_1b35f0:
    if (ctx->pc == 0x1B35F0u) {
        ctx->pc = 0x1B35F0u;
            // 0x1b35f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B35F4u;
        goto label_1b35f4;
    }
    ctx->pc = 0x1B35ECu;
    SET_GPR_U32(ctx, 31, 0x1B35F4u);
    ctx->pc = 0x1B35F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35ECu;
            // 0x1b35f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35F4u; }
        if (ctx->pc != 0x1B35F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35F4u; }
        if (ctx->pc != 0x1B35F4u) { return; }
    }
    ctx->pc = 0x1B35F4u;
label_1b35f4:
    // 0x1b35f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b35f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b35f8:
    // 0x1b35f8: 0x0  nop
    ctx->pc = 0x1b35f8u;
    // NOP
label_1b35fc:
    // 0x1b35fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1b3600:
    if (ctx->pc == 0x1B3600u) {
        ctx->pc = 0x1B3600u;
            // 0x1b3600: 0x27a304b0  addiu       $v1, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->pc = 0x1B3604u;
        goto label_1b3604;
    }
    ctx->pc = 0x1B35FCu;
    {
        const bool branch_taken_0x1b35fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35FCu;
            // 0x1b3600: 0x27a304b0  addiu       $v1, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35fc) {
            ctx->pc = 0x1B3614u;
            goto label_1b3614;
        }
    }
    ctx->pc = 0x1B3604u;
label_1b3604:
    // 0x1b3604: 0x27a20490  addiu       $v0, $sp, 0x490
    ctx->pc = 0x1b3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_1b3608:
    // 0x1b3608: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b3608u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b360c:
    // 0x1b360c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b3610:
    if (ctx->pc == 0x1B3610u) {
        ctx->pc = 0x1B3610u;
            // 0x1b3610: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x1B3614u;
        goto label_1b3614;
    }
    ctx->pc = 0x1B360Cu;
    {
        const bool branch_taken_0x1b360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B360Cu;
            // 0x1b3610: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b360c) {
            ctx->pc = 0x1B3620u;
            goto label_1b3620;
        }
    }
    ctx->pc = 0x1B3614u;
label_1b3614:
    // 0x1b3614: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1b3614u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1b3618:
    // 0x1b3618: 0x27a20490  addiu       $v0, $sp, 0x490
    ctx->pc = 0x1b3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_1b361c:
    // 0x1b361c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b361cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1b3620:
    // 0x1b3620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3624:
    // 0x1b3624: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_1b3628:
    if (ctx->pc == 0x1B3628u) {
        ctx->pc = 0x1B3628u;
            // 0x1b3628: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->pc = 0x1B362Cu;
        goto label_1b362c;
    }
    ctx->pc = 0x1B3624u;
    {
        const bool branch_taken_0x1b3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3624u;
            // 0x1b3628: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3624) {
            ctx->pc = 0x1B39C4u;
            goto label_1b39c4;
        }
    }
    ctx->pc = 0x1B362Cu;
label_1b362c:
    // 0x1b362c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1b362cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1b3630:
    // 0x1b3630: 0x102000d9  beqz        $at, . + 4 + (0xD9 << 2)
label_1b3634:
    if (ctx->pc == 0x1B3634u) {
        ctx->pc = 0x1B3634u;
            // 0x1b3634: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3638u;
        goto label_1b3638;
    }
    ctx->pc = 0x1B3630u;
    {
        const bool branch_taken_0x1b3630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3630u;
            // 0x1b3634: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3630) {
            ctx->pc = 0x1B3998u;
            goto label_1b3998;
        }
    }
    ctx->pc = 0x1B3638u;
label_1b3638:
    // 0x1b3638: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b3638u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b363c:
    // 0x1b363c: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x1b363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_1b3640:
    // 0x1b3640: 0x8c510250  lw          $s1, 0x250($v0)
    ctx->pc = 0x1b3640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_1b3644:
    // 0x1b3644: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x1b3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b3648:
    // 0x1b3648: 0xc06c3d4  jal         func_1B0F50
label_1b364c:
    if (ctx->pc == 0x1B364Cu) {
        ctx->pc = 0x1B364Cu;
            // 0x1b364c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3650u;
        goto label_1b3650;
    }
    ctx->pc = 0x1B3648u;
    SET_GPR_U32(ctx, 31, 0x1B3650u);
    ctx->pc = 0x1B364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3648u;
            // 0x1b364c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3650u; }
        if (ctx->pc != 0x1B3650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3650u; }
        if (ctx->pc != 0x1B3650u) { return; }
    }
    ctx->pc = 0x1B3650u;
label_1b3650:
    // 0x1b3650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3654:
    // 0x1b3654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b3658:
    // 0x1b3658: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1b365c:
    // 0x1b365c: 0xc06c3fc  jal         func_1B0FF0
label_1b3660:
    if (ctx->pc == 0x1B3660u) {
        ctx->pc = 0x1B3660u;
            // 0x1b3660: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1B3664u;
        goto label_1b3664;
    }
    ctx->pc = 0x1B365Cu;
    SET_GPR_U32(ctx, 31, 0x1B3664u);
    ctx->pc = 0x1B3660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B365Cu;
            // 0x1b3660: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3664u; }
        if (ctx->pc != 0x1B3664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3664u; }
        if (ctx->pc != 0x1B3664u) { return; }
    }
    ctx->pc = 0x1B3664u;
label_1b3664:
    // 0x1b3664: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1b3664u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3668:
    // 0x1b3668: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b366c:
    // 0x1b366c: 0x2e2001a  div         $zero, $s7, $v0
    ctx->pc = 0x1b366cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b3670:
    // 0x1b3670: 0x0  nop
    ctx->pc = 0x1b3670u;
    // NOP
label_1b3674:
    // 0x1b3674: 0x0  nop
    ctx->pc = 0x1b3674u;
    // NOP
label_1b3678:
    // 0x1b3678: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3678u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b367c:
    // 0x1b367c: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
label_1b3680:
    if (ctx->pc == 0x1B3680u) {
        ctx->pc = 0x1B3684u;
        goto label_1b3684;
    }
    ctx->pc = 0x1B367Cu;
    {
        const bool branch_taken_0x1b367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b367c) {
            ctx->pc = 0x1B3988u;
            goto label_1b3988;
        }
    }
    ctx->pc = 0x1B3684u;
label_1b3684:
    // 0x1b3684: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b3688:
    // 0x1b3688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b368c:
    // 0x1b368c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b368cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b3690:
    // 0x1b3690: 0x320f809  jalr        $t9
label_1b3694:
    if (ctx->pc == 0x1B3694u) {
        ctx->pc = 0x1B3694u;
            // 0x1b3694: 0x27a50520  addiu       $a1, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x1B3698u;
        goto label_1b3698;
    }
    ctx->pc = 0x1B3690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B3698u);
        ctx->pc = 0x1B3694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3690u;
            // 0x1b3694: 0x27a50520  addiu       $a1, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3698u; }
            if (ctx->pc != 0x1B3698u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3698u;
label_1b3698:
    // 0x1b3698: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x1b3698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_1b369c:
    // 0x1b369c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b369cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b36a0:
    // 0x1b36a0: 0xc041c3e  jal         func_1070F8
label_1b36a4:
    if (ctx->pc == 0x1B36A4u) {
        ctx->pc = 0x1B36A4u;
            // 0x1b36a4: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x1B36A8u;
        goto label_1b36a8;
    }
    ctx->pc = 0x1B36A0u;
    SET_GPR_U32(ctx, 31, 0x1B36A8u);
    ctx->pc = 0x1B36A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36A0u;
            // 0x1b36a4: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36A8u; }
        if (ctx->pc != 0x1B36A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36A8u; }
        if (ctx->pc != 0x1B36A8u) { return; }
    }
    ctx->pc = 0x1B36A8u;
label_1b36a8:
    // 0x1b36a8: 0x102823  negu        $a1, $s0
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_1b36ac:
    // 0x1b36ac: 0xc06c3fc  jal         func_1B0FF0
label_1b36b0:
    if (ctx->pc == 0x1B36B0u) {
        ctx->pc = 0x1B36B0u;
            // 0x1b36b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B36B4u;
        goto label_1b36b4;
    }
    ctx->pc = 0x1B36ACu;
    SET_GPR_U32(ctx, 31, 0x1B36B4u);
    ctx->pc = 0x1B36B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36ACu;
            // 0x1b36b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36B4u; }
        if (ctx->pc != 0x1B36B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36B4u; }
        if (ctx->pc != 0x1B36B4u) { return; }
    }
    ctx->pc = 0x1B36B4u;
label_1b36b4:
    // 0x1b36b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b36b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b36b8:
    // 0x1b36b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b36b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b36bc:
    // 0x1b36bc: 0xc06c374  jal         func_1B0DD0
label_1b36c0:
    if (ctx->pc == 0x1B36C0u) {
        ctx->pc = 0x1B36C0u;
            // 0x1b36c0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1B36C4u;
        goto label_1b36c4;
    }
    ctx->pc = 0x1B36BCu;
    SET_GPR_U32(ctx, 31, 0x1B36C4u);
    ctx->pc = 0x1B36C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36BCu;
            // 0x1b36c0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36C4u; }
        if (ctx->pc != 0x1B36C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36C4u; }
        if (ctx->pc != 0x1B36C4u) { return; }
    }
    ctx->pc = 0x1B36C4u;
label_1b36c4:
    // 0x1b36c4: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x1b36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_1b36c8:
    // 0x1b36c8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b36cc:
    // 0x1b36cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b36ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b36d0:
    // 0x1b36d0: 0xc041bb0  jal         func_106EC0
label_1b36d4:
    if (ctx->pc == 0x1B36D4u) {
        ctx->pc = 0x1B36D4u;
            // 0x1b36d4: 0xafa004fc  sw          $zero, 0x4FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1276), GPR_U32(ctx, 0));
        ctx->pc = 0x1B36D8u;
        goto label_1b36d8;
    }
    ctx->pc = 0x1B36D0u;
    SET_GPR_U32(ctx, 31, 0x1B36D8u);
    ctx->pc = 0x1B36D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36D0u;
            // 0x1b36d4: 0xafa004fc  sw          $zero, 0x4FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36D8u; }
        if (ctx->pc != 0x1B36D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36D8u; }
        if (ctx->pc != 0x1B36D8u) { return; }
    }
    ctx->pc = 0x1B36D8u;
label_1b36d8:
    // 0x1b36d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b36d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b36dc:
    // 0x1b36dc: 0xc06c3fc  jal         func_1B0FF0
label_1b36e0:
    if (ctx->pc == 0x1B36E0u) {
        ctx->pc = 0x1B36E0u;
            // 0x1b36e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B36E4u;
        goto label_1b36e4;
    }
    ctx->pc = 0x1B36DCu;
    SET_GPR_U32(ctx, 31, 0x1B36E4u);
    ctx->pc = 0x1B36E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36DCu;
            // 0x1b36e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36E4u; }
        if (ctx->pc != 0x1B36E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36E4u; }
        if (ctx->pc != 0x1B36E4u) { return; }
    }
    ctx->pc = 0x1B36E4u;
label_1b36e4:
    // 0x1b36e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b36e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b36e8:
    // 0x1b36e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b36e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b36ec:
    // 0x1b36ec: 0xc06c374  jal         func_1B0DD0
label_1b36f0:
    if (ctx->pc == 0x1B36F0u) {
        ctx->pc = 0x1B36F0u;
            // 0x1b36f0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1B36F4u;
        goto label_1b36f4;
    }
    ctx->pc = 0x1B36ECu;
    SET_GPR_U32(ctx, 31, 0x1B36F4u);
    ctx->pc = 0x1B36F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36ECu;
            // 0x1b36f0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36F4u; }
        if (ctx->pc != 0x1B36F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36F4u; }
        if (ctx->pc != 0x1B36F4u) { return; }
    }
    ctx->pc = 0x1B36F4u;
label_1b36f4:
    // 0x1b36f4: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x1b36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_1b36f8:
    // 0x1b36f8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b36fc:
    // 0x1b36fc: 0xc041bb0  jal         func_106EC0
label_1b3700:
    if (ctx->pc == 0x1B3700u) {
        ctx->pc = 0x1B3700u;
            // 0x1b3700: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1B3704u;
        goto label_1b3704;
    }
    ctx->pc = 0x1B36FCu;
    SET_GPR_U32(ctx, 31, 0x1B3704u);
    ctx->pc = 0x1B3700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36FCu;
            // 0x1b3700: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3704u; }
        if (ctx->pc != 0x1B3704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3704u; }
        if (ctx->pc != 0x1B3704u) { return; }
    }
    ctx->pc = 0x1B3704u;
label_1b3704:
    // 0x1b3704: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x1b3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_1b3708:
    // 0x1b3708: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b370c:
    // 0x1b370c: 0xc041bb0  jal         func_106EC0
label_1b3710:
    if (ctx->pc == 0x1B3710u) {
        ctx->pc = 0x1B3710u;
            // 0x1b3710: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1B3714u;
        goto label_1b3714;
    }
    ctx->pc = 0x1B370Cu;
    SET_GPR_U32(ctx, 31, 0x1B3714u);
    ctx->pc = 0x1B3710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B370Cu;
            // 0x1b3710: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3714u; }
        if (ctx->pc != 0x1B3714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3714u; }
        if (ctx->pc != 0x1B3714u) { return; }
    }
    ctx->pc = 0x1B3714u;
label_1b3714:
    // 0x1b3714: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_1b3718:
    // 0x1b3718: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x1b3718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_1b371c:
    // 0x1b371c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b371cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3720:
    // 0x1b3720: 0xc04bd2c  jal         func_12F4B0
label_1b3724:
    if (ctx->pc == 0x1B3724u) {
        ctx->pc = 0x1B3724u;
            // 0x1b3724: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3728u;
        goto label_1b3728;
    }
    ctx->pc = 0x1B3720u;
    SET_GPR_U32(ctx, 31, 0x1B3728u);
    ctx->pc = 0x1B3724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3720u;
            // 0x1b3724: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3728u; }
        if (ctx->pc != 0x1B3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3728u; }
        if (ctx->pc != 0x1B3728u) { return; }
    }
    ctx->pc = 0x1B3728u;
label_1b3728:
    // 0x1b3728: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_1b372c:
    // 0x1b372c: 0x27a60530  addiu       $a2, $sp, 0x530
    ctx->pc = 0x1b372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_1b3730:
    // 0x1b3730: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x1b3730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_1b3734:
    // 0x1b3734: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x1b3734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_1b3738:
    // 0x1b3738: 0x784300a0  lq          $v1, 0xA0($v0)
    ctx->pc = 0x1b3738u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 160)));
label_1b373c:
    // 0x1b373c: 0x784200b0  lq          $v0, 0xB0($v0)
    ctx->pc = 0x1b373cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 176)));
label_1b3740:
    // 0x1b3740: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1b3740u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_1b3744:
    // 0x1b3744: 0xc04bcf4  jal         func_12F3D0
label_1b3748:
    if (ctx->pc == 0x1B3748u) {
        ctx->pc = 0x1B3748u;
            // 0x1b3748: 0x7cc20010  sq          $v0, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x1B374Cu;
        goto label_1b374c;
    }
    ctx->pc = 0x1B3744u;
    SET_GPR_U32(ctx, 31, 0x1B374Cu);
    ctx->pc = 0x1B3748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3744u;
            // 0x1b3748: 0x7cc20010  sq          $v0, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B374Cu; }
        if (ctx->pc != 0x1B374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B374Cu; }
        if (ctx->pc != 0x1B374Cu) { return; }
    }
    ctx->pc = 0x1B374Cu;
label_1b374c:
    // 0x1b374c: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x1b374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_1b3750:
    // 0x1b3750: 0xc04bcf4  jal         func_12F3D0
label_1b3754:
    if (ctx->pc == 0x1B3754u) {
        ctx->pc = 0x1B3754u;
            // 0x1b3754: 0x27a504f0  addiu       $a1, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x1B3758u;
        goto label_1b3758;
    }
    ctx->pc = 0x1B3750u;
    SET_GPR_U32(ctx, 31, 0x1B3758u);
    ctx->pc = 0x1B3754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3750u;
            // 0x1b3754: 0x27a504f0  addiu       $a1, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3758u; }
        if (ctx->pc != 0x1B3758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3758u; }
        if (ctx->pc != 0x1B3758u) { return; }
    }
    ctx->pc = 0x1B3758u;
label_1b3758:
    // 0x1b3758: 0xc04bc8c  jal         func_12F230
label_1b375c:
    if (ctx->pc == 0x1B375Cu) {
        ctx->pc = 0x1B375Cu;
            // 0x1b375c: 0x27a40550  addiu       $a0, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->pc = 0x1B3760u;
        goto label_1b3760;
    }
    ctx->pc = 0x1B3758u;
    SET_GPR_U32(ctx, 31, 0x1B3760u);
    ctx->pc = 0x1B375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3758u;
            // 0x1b375c: 0x27a40550  addiu       $a0, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3760u; }
        if (ctx->pc != 0x1B3760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3760u; }
        if (ctx->pc != 0x1B3760u) { return; }
    }
    ctx->pc = 0x1B3760u;
label_1b3760:
    // 0x1b3760: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x1b3760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3764:
    // 0x1b3764: 0xc7a70510  lwc1        $f7, 0x510($sp)
    ctx->pc = 0x1b3764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1b3768:
    // 0x1b3768: 0xc7a50540  lwc1        $f5, 0x540($sp)
    ctx->pc = 0x1b3768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b376c:
    // 0x1b376c: 0xc7a60500  lwc1        $f6, 0x500($sp)
    ctx->pc = 0x1b376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1b3770:
    // 0x1b3770: 0xc7aa0538  lwc1        $f10, 0x538($sp)
    ctx->pc = 0x1b3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1b3774:
    // 0x1b3774: 0xc7ab0518  lwc1        $f11, 0x518($sp)
    ctx->pc = 0x1b3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1b3778:
    // 0x1b3778: 0xc7a80548  lwc1        $f8, 0x548($sp)
    ctx->pc = 0x1b3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1b377c:
    // 0x1b377c: 0xc7a90508  lwc1        $f9, 0x508($sp)
    ctx->pc = 0x1b377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1b3780:
    // 0x1b3780: 0x46070041  sub.s       $f1, $f0, $f7
    ctx->pc = 0x1b3780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_1b3784:
    // 0x1b3784: 0x46062881  sub.s       $f2, $f5, $f6
    ctx->pc = 0x1b3784u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_1b3788:
    // 0x1b3788: 0x460b50c1  sub.s       $f3, $f10, $f11
    ctx->pc = 0x1b3788u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[11]);
label_1b378c:
    // 0x1b378c: 0x46053036  c.le.s      $f6, $f5
    ctx->pc = 0x1b378cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3790:
    // 0x1b3790: 0x0  nop
    ctx->pc = 0x1b3790u;
    // NOP
label_1b3794:
    // 0x1b3794: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1b3798:
    if (ctx->pc == 0x1B3798u) {
        ctx->pc = 0x1B3798u;
            // 0x1b3798: 0x46094101  sub.s       $f4, $f8, $f9 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
        ctx->pc = 0x1B379Cu;
        goto label_1b379c;
    }
    ctx->pc = 0x1B3794u;
    {
        const bool branch_taken_0x1b3794 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3794u;
            // 0x1b3798: 0x46094101  sub.s       $f4, $f8, $f9 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3794) {
            ctx->pc = 0x1B37D0u;
            goto label_1b37d0;
        }
    }
    ctx->pc = 0x1B379Cu;
label_1b379c:
    // 0x1b379c: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x1b379cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b37a0:
    // 0x1b37a0: 0x0  nop
    ctx->pc = 0x1b37a0u;
    // NOP
label_1b37a4:
    // 0x1b37a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1b37a8:
    if (ctx->pc == 0x1B37A8u) {
        ctx->pc = 0x1B37ACu;
        goto label_1b37ac;
    }
    ctx->pc = 0x1B37A4u;
    {
        const bool branch_taken_0x1b37a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b37a4) {
            ctx->pc = 0x1B37D0u;
            goto label_1b37d0;
        }
    }
    ctx->pc = 0x1B37ACu;
label_1b37ac:
    // 0x1b37ac: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x1b37acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b37b0:
    // 0x1b37b0: 0x0  nop
    ctx->pc = 0x1b37b0u;
    // NOP
label_1b37b4:
    // 0x1b37b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b37b8:
    if (ctx->pc == 0x1B37B8u) {
        ctx->pc = 0x1B37BCu;
        goto label_1b37bc;
    }
    ctx->pc = 0x1B37B4u;
    {
        const bool branch_taken_0x1b37b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b37b4) {
            ctx->pc = 0x1B37C4u;
            goto label_1b37c4;
        }
    }
    ctx->pc = 0x1B37BCu;
label_1b37bc:
    // 0x1b37bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b37c0:
    if (ctx->pc == 0x1B37C0u) {
        ctx->pc = 0x1B37C0u;
            // 0x1b37c0: 0xe7a40558  swc1        $f4, 0x558($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
        ctx->pc = 0x1B37C4u;
        goto label_1b37c4;
    }
    ctx->pc = 0x1B37BCu;
    {
        const bool branch_taken_0x1b37bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37BCu;
            // 0x1b37c0: 0xe7a40558  swc1        $f4, 0x558($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37bc) {
            ctx->pc = 0x1B380Cu;
            goto label_1b380c;
        }
    }
    ctx->pc = 0x1B37C4u;
label_1b37c4:
    // 0x1b37c4: 0x0  nop
    ctx->pc = 0x1b37c4u;
    // NOP
label_1b37c8:
    // 0x1b37c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b37cc:
    if (ctx->pc == 0x1B37CCu) {
        ctx->pc = 0x1B37CCu;
            // 0x1b37cc: 0xe7a30558  swc1        $f3, 0x558($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
        ctx->pc = 0x1B37D0u;
        goto label_1b37d0;
    }
    ctx->pc = 0x1B37C8u;
    {
        const bool branch_taken_0x1b37c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37C8u;
            // 0x1b37cc: 0xe7a30558  swc1        $f3, 0x558($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37c8) {
            ctx->pc = 0x1B380Cu;
            goto label_1b380c;
        }
    }
    ctx->pc = 0x1B37D0u;
label_1b37d0:
    // 0x1b37d0: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x1b37d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b37d4:
    // 0x1b37d4: 0x0  nop
    ctx->pc = 0x1b37d4u;
    // NOP
label_1b37d8:
    // 0x1b37d8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1b37dc:
    if (ctx->pc == 0x1B37DCu) {
        ctx->pc = 0x1B37E0u;
        goto label_1b37e0;
    }
    ctx->pc = 0x1B37D8u;
    {
        const bool branch_taken_0x1b37d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b37d8) {
            ctx->pc = 0x1B380Cu;
            goto label_1b380c;
        }
    }
    ctx->pc = 0x1B37E0u;
label_1b37e0:
    // 0x1b37e0: 0x460a5834  c.lt.s      $f11, $f10
    ctx->pc = 0x1b37e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b37e4:
    // 0x1b37e4: 0x0  nop
    ctx->pc = 0x1b37e4u;
    // NOP
label_1b37e8:
    // 0x1b37e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b37ec:
    if (ctx->pc == 0x1B37ECu) {
        ctx->pc = 0x1B37F0u;
        goto label_1b37f0;
    }
    ctx->pc = 0x1B37E8u;
    {
        const bool branch_taken_0x1b37e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b37e8) {
            ctx->pc = 0x1B380Cu;
            goto label_1b380c;
        }
    }
    ctx->pc = 0x1B37F0u;
label_1b37f0:
    // 0x1b37f0: 0x46053036  c.le.s      $f6, $f5
    ctx->pc = 0x1b37f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b37f4:
    // 0x1b37f4: 0x0  nop
    ctx->pc = 0x1b37f4u;
    // NOP
label_1b37f8:
    // 0x1b37f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b37fc:
    if (ctx->pc == 0x1B37FCu) {
        ctx->pc = 0x1B3800u;
        goto label_1b3800;
    }
    ctx->pc = 0x1B37F8u;
    {
        const bool branch_taken_0x1b37f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b37f8) {
            ctx->pc = 0x1B3808u;
            goto label_1b3808;
        }
    }
    ctx->pc = 0x1B3800u;
label_1b3800:
    // 0x1b3800: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b3804:
    if (ctx->pc == 0x1B3804u) {
        ctx->pc = 0x1B3804u;
            // 0x1b3804: 0xe7a20550  swc1        $f2, 0x550($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
        ctx->pc = 0x1B3808u;
        goto label_1b3808;
    }
    ctx->pc = 0x1B3800u;
    {
        const bool branch_taken_0x1b3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3800u;
            // 0x1b3804: 0xe7a20550  swc1        $f2, 0x550($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3800) {
            ctx->pc = 0x1B380Cu;
            goto label_1b380c;
        }
    }
    ctx->pc = 0x1B3808u;
label_1b3808:
    // 0x1b3808: 0xe7a10550  swc1        $f1, 0x550($sp)
    ctx->pc = 0x1b3808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_1b380c:
    // 0x1b380c: 0x0  nop
    ctx->pc = 0x1b380cu;
    // NOP
label_1b3810:
    // 0x1b3810: 0xc04bff4  jal         func_12FFD0
label_1b3814:
    if (ctx->pc == 0x1B3814u) {
        ctx->pc = 0x1B3814u;
            // 0x1b3814: 0x27a40550  addiu       $a0, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->pc = 0x1B3818u;
        goto label_1b3818;
    }
    ctx->pc = 0x1B3810u;
    SET_GPR_U32(ctx, 31, 0x1B3818u);
    ctx->pc = 0x1B3814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3810u;
            // 0x1b3814: 0x27a40550  addiu       $a0, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3818u; }
        if (ctx->pc != 0x1B3818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3818u; }
        if (ctx->pc != 0x1B3818u) { return; }
    }
    ctx->pc = 0x1B3818u;
label_1b3818:
    // 0x1b3818: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b3818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b381c:
    // 0x1b381c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b381cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3820:
    // 0x1b3820: 0x0  nop
    ctx->pc = 0x1b3820u;
    // NOP
label_1b3824:
    // 0x1b3824: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3828:
    // 0x1b3828: 0x0  nop
    ctx->pc = 0x1b3828u;
    // NOP
label_1b382c:
    // 0x1b382c: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_1b3830:
    if (ctx->pc == 0x1B3830u) {
        ctx->pc = 0x1B3834u;
        goto label_1b3834;
    }
    ctx->pc = 0x1B382Cu;
    {
        const bool branch_taken_0x1b382c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b382c) {
            ctx->pc = 0x1B3988u;
            goto label_1b3988;
        }
    }
    ctx->pc = 0x1B3834u;
label_1b3834:
    // 0x1b3834: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1b3838:
    // 0x1b3838: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1b383c:
    if (ctx->pc == 0x1B383Cu) {
        ctx->pc = 0x1B3840u;
        goto label_1b3840;
    }
    ctx->pc = 0x1B3838u;
    {
        const bool branch_taken_0x1b3838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3838) {
            ctx->pc = 0x1B3844u;
            goto label_1b3844;
        }
    }
    ctx->pc = 0x1B3840u;
label_1b3840:
    // 0x1b3840: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1b3840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3844:
    // 0x1b3844: 0x0  nop
    ctx->pc = 0x1b3844u;
    // NOP
label_1b3848:
    // 0x1b3848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b384c:
    // 0x1b384c: 0x21e2823  subu        $a1, $s0, $fp
    ctx->pc = 0x1b384cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_1b3850:
    // 0x1b3850: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1b3850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1b3854:
    // 0x1b3854: 0xc06c3fc  jal         func_1B0FF0
label_1b3858:
    if (ctx->pc == 0x1B3858u) {
        ctx->pc = 0x1B3858u;
            // 0x1b3858: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B385Cu;
        goto label_1b385c;
    }
    ctx->pc = 0x1B3854u;
    SET_GPR_U32(ctx, 31, 0x1B385Cu);
    ctx->pc = 0x1B3858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3854u;
            // 0x1b3858: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B385Cu; }
        if (ctx->pc != 0x1B385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B385Cu; }
        if (ctx->pc != 0x1B385Cu) { return; }
    }
    ctx->pc = 0x1B385Cu;
label_1b385c:
    // 0x1b385c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b385cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3860:
    // 0x1b3860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b3864:
    // 0x1b3864: 0xc06c374  jal         func_1B0DD0
label_1b3868:
    if (ctx->pc == 0x1B3868u) {
        ctx->pc = 0x1B3868u;
            // 0x1b3868: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1B386Cu;
        goto label_1b386c;
    }
    ctx->pc = 0x1B3864u;
    SET_GPR_U32(ctx, 31, 0x1B386Cu);
    ctx->pc = 0x1B3868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3864u;
            // 0x1b3868: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B386Cu; }
        if (ctx->pc != 0x1B386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B386Cu; }
        if (ctx->pc != 0x1B386Cu) { return; }
    }
    ctx->pc = 0x1B386Cu;
label_1b386c:
    // 0x1b386c: 0x27a40550  addiu       $a0, $sp, 0x550
    ctx->pc = 0x1b386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_1b3870:
    // 0x1b3870: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b3874:
    // 0x1b3874: 0xc041bb0  jal         func_106EC0
label_1b3878:
    if (ctx->pc == 0x1B3878u) {
        ctx->pc = 0x1B3878u;
            // 0x1b3878: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B387Cu;
        goto label_1b387c;
    }
    ctx->pc = 0x1B3874u;
    SET_GPR_U32(ctx, 31, 0x1B387Cu);
    ctx->pc = 0x1B3878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3874u;
            // 0x1b3878: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B387Cu; }
        if (ctx->pc != 0x1B387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B387Cu; }
        if (ctx->pc != 0x1B387Cu) { return; }
    }
    ctx->pc = 0x1B387Cu;
label_1b387c:
    // 0x1b387c: 0xc7a10490  lwc1        $f1, 0x490($sp)
    ctx->pc = 0x1b387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3880:
    // 0x1b3880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3884:
    // 0x1b3884: 0x0  nop
    ctx->pc = 0x1b3884u;
    // NOP
label_1b3888:
    // 0x1b3888: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3888u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b388c:
    // 0x1b388c: 0x0  nop
    ctx->pc = 0x1b388cu;
    // NOP
label_1b3890:
    // 0x1b3890: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b3894:
    if (ctx->pc == 0x1B3894u) {
        ctx->pc = 0x1B3898u;
        goto label_1b3898;
    }
    ctx->pc = 0x1B3890u;
    {
        const bool branch_taken_0x1b3890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3890) {
            ctx->pc = 0x1B38F4u;
            goto label_1b38f4;
        }
    }
    ctx->pc = 0x1B3898u;
label_1b3898:
    // 0x1b3898: 0xc7a20550  lwc1        $f2, 0x550($sp)
    ctx->pc = 0x1b3898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b389c:
    // 0x1b389c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b389cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b38a0:
    // 0x1b38a0: 0x0  nop
    ctx->pc = 0x1b38a0u;
    // NOP
label_1b38a4:
    // 0x1b38a4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1b38a8:
    if (ctx->pc == 0x1B38A8u) {
        ctx->pc = 0x1B38ACu;
        goto label_1b38ac;
    }
    ctx->pc = 0x1B38A4u;
    {
        const bool branch_taken_0x1b38a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b38a4) {
            ctx->pc = 0x1B3900u;
            goto label_1b3900;
        }
    }
    ctx->pc = 0x1B38ACu;
label_1b38ac:
    // 0x1b38ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b38acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b38b0:
    // 0x1b38b0: 0x0  nop
    ctx->pc = 0x1b38b0u;
    // NOP
label_1b38b4:
    // 0x1b38b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b38b8:
    if (ctx->pc == 0x1B38B8u) {
        ctx->pc = 0x1B38BCu;
        goto label_1b38bc;
    }
    ctx->pc = 0x1B38B4u;
    {
        const bool branch_taken_0x1b38b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b38b4) {
            ctx->pc = 0x1B38C0u;
            goto label_1b38c0;
        }
    }
    ctx->pc = 0x1B38BCu;
label_1b38bc:
    // 0x1b38bc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b38bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b38c0:
    // 0x1b38c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b38c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b38c4:
    // 0x1b38c4: 0x0  nop
    ctx->pc = 0x1b38c4u;
    // NOP
label_1b38c8:
    // 0x1b38c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b38c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b38cc:
    // 0x1b38cc: 0x0  nop
    ctx->pc = 0x1b38ccu;
    // NOP
label_1b38d0:
    // 0x1b38d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b38d4:
    if (ctx->pc == 0x1B38D4u) {
        ctx->pc = 0x1B38D4u;
            // 0x1b38d4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1B38D8u;
        goto label_1b38d8;
    }
    ctx->pc = 0x1B38D0u;
    {
        const bool branch_taken_0x1b38d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B38D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38D0u;
            // 0x1b38d4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38d0) {
            ctx->pc = 0x1B38DCu;
            goto label_1b38dc;
        }
    }
    ctx->pc = 0x1B38D8u;
label_1b38d8:
    // 0x1b38d8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b38d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1b38dc:
    // 0x1b38dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b38dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b38e0:
    // 0x1b38e0: 0x0  nop
    ctx->pc = 0x1b38e0u;
    // NOP
label_1b38e4:
    // 0x1b38e4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b38e8:
    if (ctx->pc == 0x1B38E8u) {
        ctx->pc = 0x1B38ECu;
        goto label_1b38ec;
    }
    ctx->pc = 0x1B38E4u;
    {
        const bool branch_taken_0x1b38e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b38e4) {
            ctx->pc = 0x1B3900u;
            goto label_1b3900;
        }
    }
    ctx->pc = 0x1B38ECu;
label_1b38ec:
    // 0x1b38ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b38f0:
    if (ctx->pc == 0x1B38F0u) {
        ctx->pc = 0x1B38F0u;
            // 0x1b38f0: 0xe7a20490  swc1        $f2, 0x490($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->pc = 0x1B38F4u;
        goto label_1b38f4;
    }
    ctx->pc = 0x1B38ECu;
    {
        const bool branch_taken_0x1b38ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B38F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38ECu;
            // 0x1b38f0: 0xe7a20490  swc1        $f2, 0x490($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38ec) {
            ctx->pc = 0x1B3900u;
            goto label_1b3900;
        }
    }
    ctx->pc = 0x1B38F4u;
label_1b38f4:
    // 0x1b38f4: 0x0  nop
    ctx->pc = 0x1b38f4u;
    // NOP
label_1b38f8:
    // 0x1b38f8: 0xc7a00550  lwc1        $f0, 0x550($sp)
    ctx->pc = 0x1b38f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b38fc:
    // 0x1b38fc: 0xe7a00490  swc1        $f0, 0x490($sp)
    ctx->pc = 0x1b38fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_1b3900:
    // 0x1b3900: 0x27a20498  addiu       $v0, $sp, 0x498
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1176));
label_1b3904:
    // 0x1b3904: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3908:
    // 0x1b3908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b390c:
    // 0x1b390c: 0x0  nop
    ctx->pc = 0x1b390cu;
    // NOP
label_1b3910:
    // 0x1b3910: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3910u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3914:
    // 0x1b3914: 0x0  nop
    ctx->pc = 0x1b3914u;
    // NOP
label_1b3918:
    // 0x1b3918: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b391c:
    if (ctx->pc == 0x1B391Cu) {
        ctx->pc = 0x1B3920u;
        goto label_1b3920;
    }
    ctx->pc = 0x1B3918u;
    {
        const bool branch_taken_0x1b3918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3918) {
            ctx->pc = 0x1B397Cu;
            goto label_1b397c;
        }
    }
    ctx->pc = 0x1B3920u;
label_1b3920:
    // 0x1b3920: 0xc7a20558  lwc1        $f2, 0x558($sp)
    ctx->pc = 0x1b3920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3924:
    // 0x1b3924: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b3924u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3928:
    // 0x1b3928: 0x0  nop
    ctx->pc = 0x1b3928u;
    // NOP
label_1b392c:
    // 0x1b392c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1b3930:
    if (ctx->pc == 0x1B3930u) {
        ctx->pc = 0x1B3934u;
        goto label_1b3934;
    }
    ctx->pc = 0x1B392Cu;
    {
        const bool branch_taken_0x1b392c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b392c) {
            ctx->pc = 0x1B3988u;
            goto label_1b3988;
        }
    }
    ctx->pc = 0x1B3934u;
label_1b3934:
    // 0x1b3934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3938:
    // 0x1b3938: 0x0  nop
    ctx->pc = 0x1b3938u;
    // NOP
label_1b393c:
    // 0x1b393c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b3940:
    if (ctx->pc == 0x1B3940u) {
        ctx->pc = 0x1B3944u;
        goto label_1b3944;
    }
    ctx->pc = 0x1B393Cu;
    {
        const bool branch_taken_0x1b393c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b393c) {
            ctx->pc = 0x1B3948u;
            goto label_1b3948;
        }
    }
    ctx->pc = 0x1B3944u;
label_1b3944:
    // 0x1b3944: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3944u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3948:
    // 0x1b3948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b394c:
    // 0x1b394c: 0x0  nop
    ctx->pc = 0x1b394cu;
    // NOP
label_1b3950:
    // 0x1b3950: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b3950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3954:
    // 0x1b3954: 0x0  nop
    ctx->pc = 0x1b3954u;
    // NOP
label_1b3958:
    // 0x1b3958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b395c:
    if (ctx->pc == 0x1B395Cu) {
        ctx->pc = 0x1B395Cu;
            // 0x1b395c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1B3960u;
        goto label_1b3960;
    }
    ctx->pc = 0x1B3958u;
    {
        const bool branch_taken_0x1b3958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B395Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3958u;
            // 0x1b395c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3958) {
            ctx->pc = 0x1B3964u;
            goto label_1b3964;
        }
    }
    ctx->pc = 0x1B3960u;
label_1b3960:
    // 0x1b3960: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b3960u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1b3964:
    // 0x1b3964: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3968:
    // 0x1b3968: 0x0  nop
    ctx->pc = 0x1b3968u;
    // NOP
label_1b396c:
    // 0x1b396c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b3970:
    if (ctx->pc == 0x1B3970u) {
        ctx->pc = 0x1B3974u;
        goto label_1b3974;
    }
    ctx->pc = 0x1B396Cu;
    {
        const bool branch_taken_0x1b396c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b396c) {
            ctx->pc = 0x1B3988u;
            goto label_1b3988;
        }
    }
    ctx->pc = 0x1B3974u;
label_1b3974:
    // 0x1b3974: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b3978:
    if (ctx->pc == 0x1B3978u) {
        ctx->pc = 0x1B3978u;
            // 0x1b3978: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x1B397Cu;
        goto label_1b397c;
    }
    ctx->pc = 0x1B3974u;
    {
        const bool branch_taken_0x1b3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3974u;
            // 0x1b3978: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3974) {
            ctx->pc = 0x1B3988u;
            goto label_1b3988;
        }
    }
    ctx->pc = 0x1B397Cu;
label_1b397c:
    // 0x1b397c: 0x0  nop
    ctx->pc = 0x1b397cu;
    // NOP
label_1b3980:
    // 0x1b3980: 0xc7a00558  lwc1        $f0, 0x558($sp)
    ctx->pc = 0x1b3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3984:
    // 0x1b3984: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b3988:
    // 0x1b3988: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b3988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b398c:
    // 0x1b398c: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x1b398cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1b3990:
    // 0x1b3990: 0x1440ff2a  bnez        $v0, . + 4 + (-0xD6 << 2)
label_1b3994:
    if (ctx->pc == 0x1B3994u) {
        ctx->pc = 0x1B3994u;
            // 0x1b3994: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x1B3998u;
        goto label_1b3998;
    }
    ctx->pc = 0x1B3990u;
    {
        const bool branch_taken_0x1b3990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3990u;
            // 0x1b3994: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3990) {
            ctx->pc = 0x1B363Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b363c;
        }
    }
    ctx->pc = 0x1B3998u;
label_1b3998:
    // 0x1b3998: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b3998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b399c:
    // 0x1b399c: 0xc06c3fc  jal         func_1B0FF0
label_1b39a0:
    if (ctx->pc == 0x1B39A0u) {
        ctx->pc = 0x1B39A0u;
            // 0x1b39a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B39A4u;
        goto label_1b39a4;
    }
    ctx->pc = 0x1B399Cu;
    SET_GPR_U32(ctx, 31, 0x1B39A4u);
    ctx->pc = 0x1B39A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B399Cu;
            // 0x1b39a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39A4u; }
        if (ctx->pc != 0x1B39A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39A4u; }
        if (ctx->pc != 0x1B39A4u) { return; }
    }
    ctx->pc = 0x1B39A4u;
label_1b39a4:
    // 0x1b39a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b39a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b39a8:
    // 0x1b39a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b39ac:
    // 0x1b39ac: 0xc06c374  jal         func_1B0DD0
label_1b39b0:
    if (ctx->pc == 0x1B39B0u) {
        ctx->pc = 0x1B39B0u;
            // 0x1b39b0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1B39B4u;
        goto label_1b39b4;
    }
    ctx->pc = 0x1B39ACu;
    SET_GPR_U32(ctx, 31, 0x1B39B4u);
    ctx->pc = 0x1B39B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39ACu;
            // 0x1b39b0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39B4u; }
        if (ctx->pc != 0x1B39B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39B4u; }
        if (ctx->pc != 0x1B39B4u) { return; }
    }
    ctx->pc = 0x1B39B4u;
label_1b39b4:
    // 0x1b39b4: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_1b39b8:
    // 0x1b39b8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b39bc:
    // 0x1b39bc: 0xc041bb0  jal         func_106EC0
label_1b39c0:
    if (ctx->pc == 0x1B39C0u) {
        ctx->pc = 0x1B39C0u;
            // 0x1b39c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B39C4u;
        goto label_1b39c4;
    }
    ctx->pc = 0x1B39BCu;
    SET_GPR_U32(ctx, 31, 0x1B39C4u);
    ctx->pc = 0x1B39C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39BCu;
            // 0x1b39c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39C4u; }
        if (ctx->pc != 0x1B39C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39C4u; }
        if (ctx->pc != 0x1B39C4u) { return; }
    }
    ctx->pc = 0x1B39C4u;
label_1b39c4:
    // 0x1b39c4: 0xc0a248c  jal         func_289230
label_1b39c8:
    if (ctx->pc == 0x1B39C8u) {
        ctx->pc = 0x1B39C8u;
            // 0x1b39c8: 0xc7ac0490  lwc1        $f12, 0x490($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B39CCu;
        goto label_1b39cc;
    }
    ctx->pc = 0x1B39C4u;
    SET_GPR_U32(ctx, 31, 0x1B39CCu);
    ctx->pc = 0x1B39C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39C4u;
            // 0x1b39c8: 0xc7ac0490  lwc1        $f12, 0x490($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39CCu; }
        if (ctx->pc != 0x1B39CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39CCu; }
        if (ctx->pc != 0x1B39CCu) { return; }
    }
    ctx->pc = 0x1B39CCu;
label_1b39cc:
    // 0x1b39cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b39ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b39d0:
    // 0x1b39d0: 0x27b00498  addiu       $s0, $sp, 0x498
    ctx->pc = 0x1b39d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1176));
label_1b39d4:
    // 0x1b39d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b39d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b39d8:
    // 0x1b39d8: 0xe7a00490  swc1        $f0, 0x490($sp)
    ctx->pc = 0x1b39d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_1b39dc:
    // 0x1b39dc: 0xc0a248c  jal         func_289230
label_1b39e0:
    if (ctx->pc == 0x1B39E0u) {
        ctx->pc = 0x1B39E0u;
            // 0x1b39e0: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B39E4u;
        goto label_1b39e4;
    }
    ctx->pc = 0x1B39DCu;
    SET_GPR_U32(ctx, 31, 0x1B39E4u);
    ctx->pc = 0x1B39E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39DCu;
            // 0x1b39e0: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39E4u; }
        if (ctx->pc != 0x1B39E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39E4u; }
        if (ctx->pc != 0x1B39E4u) { return; }
    }
    ctx->pc = 0x1B39E4u;
label_1b39e4:
    // 0x1b39e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b39e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b39e8:
    // 0x1b39e8: 0x0  nop
    ctx->pc = 0x1b39e8u;
    // NOP
label_1b39ec:
    // 0x1b39ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b39ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b39f0:
    // 0x1b39f0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b39f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1b39f4:
    // 0x1b39f4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1b39f8:
    // 0x1b39f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b39fc:
    if (ctx->pc == 0x1B39FCu) {
        ctx->pc = 0x1B3A00u;
        goto label_1b3a00;
    }
    ctx->pc = 0x1B39F8u;
    {
        const bool branch_taken_0x1b39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b39f8) {
            ctx->pc = 0x1B3A20u;
            goto label_1b3a20;
        }
    }
    ctx->pc = 0x1B3A00u;
label_1b3a00:
    // 0x1b3a00: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b3a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3a04:
    // 0x1b3a04: 0xc7a00490  lwc1        $f0, 0x490($sp)
    ctx->pc = 0x1b3a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3a08:
    // 0x1b3a08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b3a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b3a0c:
    // 0x1b3a0c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b3a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1b3a10:
    // 0x1b3a10: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3a14:
    // 0x1b3a14: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1b3a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3a18:
    // 0x1b3a18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b3a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b3a1c:
    // 0x1b3a1c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1b3a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1b3a20:
    // 0x1b3a20: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1b3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1b3a24:
    // 0x1b3a24: 0xc06c3c0  jal         func_1B0F00
label_1b3a28:
    if (ctx->pc == 0x1B3A28u) {
        ctx->pc = 0x1B3A28u;
            // 0x1b3a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A2Cu;
        goto label_1b3a2c;
    }
    ctx->pc = 0x1B3A24u;
    SET_GPR_U32(ctx, 31, 0x1B3A2Cu);
    ctx->pc = 0x1B3A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A24u;
            // 0x1b3a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A2Cu; }
        if (ctx->pc != 0x1B3A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A2Cu; }
        if (ctx->pc != 0x1B3A2Cu) { return; }
    }
    ctx->pc = 0x1B3A2Cu;
label_1b3a2c:
    // 0x1b3a2c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_1b3a30:
    // 0x1b3a30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b3a34:
    // 0x1b3a34: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1b3a38:
    // 0x1b3a38: 0x0  nop
    ctx->pc = 0x1b3a38u;
    // NOP
label_1b3a3c:
    // 0x1b3a3c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b3a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1b3a40:
    // 0x1b3a40: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1b3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1b3a44:
    // 0x1b3a44: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b3a44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b3a48:
    // 0x1b3a48: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1b3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1b3a4c:
    // 0x1b3a4c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b3a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b3a50:
    // 0x1b3a50: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1b3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b3a54:
    // 0x1b3a54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b3a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b3a58:
    // 0x1b3a58: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1b3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b3a5c:
    // 0x1b3a5c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b3a5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b3a60:
    // 0x1b3a60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b3a64:
    // 0x1b3a64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b3a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b3a68:
    // 0x1b3a68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b3a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b3a6c:
    // 0x1b3a6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b3a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b3a70:
    // 0x1b3a70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b3a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b3a74:
    // 0x1b3a74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b3a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3a78:
    // 0x1b3a78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b3a7c:
    // 0x1b3a7c: 0x3e00008  jr          $ra
label_1b3a80:
    if (ctx->pc == 0x1B3A80u) {
        ctx->pc = 0x1B3A80u;
            // 0x1b3a80: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x1B3A84u;
        goto label_fallthrough_0x1b3a7c;
    }
    ctx->pc = 0x1B3A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A7Cu;
            // 0x1b3a80: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b3a7c:
    ctx->pc = 0x1B3A84u;
}
