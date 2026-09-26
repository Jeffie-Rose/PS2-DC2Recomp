#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveData__8CEditMapFP9CEditData
// Address: 0x2a8b40 - 0x2a9110
void SaveData__8CEditMapFP9CEditData_0x2a8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveData__8CEditMapFP9CEditData_0x2a8b40");
#endif

    switch (ctx->pc) {
        case 0x2a8b40u: goto label_2a8b40;
        case 0x2a8b44u: goto label_2a8b44;
        case 0x2a8b48u: goto label_2a8b48;
        case 0x2a8b4cu: goto label_2a8b4c;
        case 0x2a8b50u: goto label_2a8b50;
        case 0x2a8b54u: goto label_2a8b54;
        case 0x2a8b58u: goto label_2a8b58;
        case 0x2a8b5cu: goto label_2a8b5c;
        case 0x2a8b60u: goto label_2a8b60;
        case 0x2a8b64u: goto label_2a8b64;
        case 0x2a8b68u: goto label_2a8b68;
        case 0x2a8b6cu: goto label_2a8b6c;
        case 0x2a8b70u: goto label_2a8b70;
        case 0x2a8b74u: goto label_2a8b74;
        case 0x2a8b78u: goto label_2a8b78;
        case 0x2a8b7cu: goto label_2a8b7c;
        case 0x2a8b80u: goto label_2a8b80;
        case 0x2a8b84u: goto label_2a8b84;
        case 0x2a8b88u: goto label_2a8b88;
        case 0x2a8b8cu: goto label_2a8b8c;
        case 0x2a8b90u: goto label_2a8b90;
        case 0x2a8b94u: goto label_2a8b94;
        case 0x2a8b98u: goto label_2a8b98;
        case 0x2a8b9cu: goto label_2a8b9c;
        case 0x2a8ba0u: goto label_2a8ba0;
        case 0x2a8ba4u: goto label_2a8ba4;
        case 0x2a8ba8u: goto label_2a8ba8;
        case 0x2a8bacu: goto label_2a8bac;
        case 0x2a8bb0u: goto label_2a8bb0;
        case 0x2a8bb4u: goto label_2a8bb4;
        case 0x2a8bb8u: goto label_2a8bb8;
        case 0x2a8bbcu: goto label_2a8bbc;
        case 0x2a8bc0u: goto label_2a8bc0;
        case 0x2a8bc4u: goto label_2a8bc4;
        case 0x2a8bc8u: goto label_2a8bc8;
        case 0x2a8bccu: goto label_2a8bcc;
        case 0x2a8bd0u: goto label_2a8bd0;
        case 0x2a8bd4u: goto label_2a8bd4;
        case 0x2a8bd8u: goto label_2a8bd8;
        case 0x2a8bdcu: goto label_2a8bdc;
        case 0x2a8be0u: goto label_2a8be0;
        case 0x2a8be4u: goto label_2a8be4;
        case 0x2a8be8u: goto label_2a8be8;
        case 0x2a8becu: goto label_2a8bec;
        case 0x2a8bf0u: goto label_2a8bf0;
        case 0x2a8bf4u: goto label_2a8bf4;
        case 0x2a8bf8u: goto label_2a8bf8;
        case 0x2a8bfcu: goto label_2a8bfc;
        case 0x2a8c00u: goto label_2a8c00;
        case 0x2a8c04u: goto label_2a8c04;
        case 0x2a8c08u: goto label_2a8c08;
        case 0x2a8c0cu: goto label_2a8c0c;
        case 0x2a8c10u: goto label_2a8c10;
        case 0x2a8c14u: goto label_2a8c14;
        case 0x2a8c18u: goto label_2a8c18;
        case 0x2a8c1cu: goto label_2a8c1c;
        case 0x2a8c20u: goto label_2a8c20;
        case 0x2a8c24u: goto label_2a8c24;
        case 0x2a8c28u: goto label_2a8c28;
        case 0x2a8c2cu: goto label_2a8c2c;
        case 0x2a8c30u: goto label_2a8c30;
        case 0x2a8c34u: goto label_2a8c34;
        case 0x2a8c38u: goto label_2a8c38;
        case 0x2a8c3cu: goto label_2a8c3c;
        case 0x2a8c40u: goto label_2a8c40;
        case 0x2a8c44u: goto label_2a8c44;
        case 0x2a8c48u: goto label_2a8c48;
        case 0x2a8c4cu: goto label_2a8c4c;
        case 0x2a8c50u: goto label_2a8c50;
        case 0x2a8c54u: goto label_2a8c54;
        case 0x2a8c58u: goto label_2a8c58;
        case 0x2a8c5cu: goto label_2a8c5c;
        case 0x2a8c60u: goto label_2a8c60;
        case 0x2a8c64u: goto label_2a8c64;
        case 0x2a8c68u: goto label_2a8c68;
        case 0x2a8c6cu: goto label_2a8c6c;
        case 0x2a8c70u: goto label_2a8c70;
        case 0x2a8c74u: goto label_2a8c74;
        case 0x2a8c78u: goto label_2a8c78;
        case 0x2a8c7cu: goto label_2a8c7c;
        case 0x2a8c80u: goto label_2a8c80;
        case 0x2a8c84u: goto label_2a8c84;
        case 0x2a8c88u: goto label_2a8c88;
        case 0x2a8c8cu: goto label_2a8c8c;
        case 0x2a8c90u: goto label_2a8c90;
        case 0x2a8c94u: goto label_2a8c94;
        case 0x2a8c98u: goto label_2a8c98;
        case 0x2a8c9cu: goto label_2a8c9c;
        case 0x2a8ca0u: goto label_2a8ca0;
        case 0x2a8ca4u: goto label_2a8ca4;
        case 0x2a8ca8u: goto label_2a8ca8;
        case 0x2a8cacu: goto label_2a8cac;
        case 0x2a8cb0u: goto label_2a8cb0;
        case 0x2a8cb4u: goto label_2a8cb4;
        case 0x2a8cb8u: goto label_2a8cb8;
        case 0x2a8cbcu: goto label_2a8cbc;
        case 0x2a8cc0u: goto label_2a8cc0;
        case 0x2a8cc4u: goto label_2a8cc4;
        case 0x2a8cc8u: goto label_2a8cc8;
        case 0x2a8cccu: goto label_2a8ccc;
        case 0x2a8cd0u: goto label_2a8cd0;
        case 0x2a8cd4u: goto label_2a8cd4;
        case 0x2a8cd8u: goto label_2a8cd8;
        case 0x2a8cdcu: goto label_2a8cdc;
        case 0x2a8ce0u: goto label_2a8ce0;
        case 0x2a8ce4u: goto label_2a8ce4;
        case 0x2a8ce8u: goto label_2a8ce8;
        case 0x2a8cecu: goto label_2a8cec;
        case 0x2a8cf0u: goto label_2a8cf0;
        case 0x2a8cf4u: goto label_2a8cf4;
        case 0x2a8cf8u: goto label_2a8cf8;
        case 0x2a8cfcu: goto label_2a8cfc;
        case 0x2a8d00u: goto label_2a8d00;
        case 0x2a8d04u: goto label_2a8d04;
        case 0x2a8d08u: goto label_2a8d08;
        case 0x2a8d0cu: goto label_2a8d0c;
        case 0x2a8d10u: goto label_2a8d10;
        case 0x2a8d14u: goto label_2a8d14;
        case 0x2a8d18u: goto label_2a8d18;
        case 0x2a8d1cu: goto label_2a8d1c;
        case 0x2a8d20u: goto label_2a8d20;
        case 0x2a8d24u: goto label_2a8d24;
        case 0x2a8d28u: goto label_2a8d28;
        case 0x2a8d2cu: goto label_2a8d2c;
        case 0x2a8d30u: goto label_2a8d30;
        case 0x2a8d34u: goto label_2a8d34;
        case 0x2a8d38u: goto label_2a8d38;
        case 0x2a8d3cu: goto label_2a8d3c;
        case 0x2a8d40u: goto label_2a8d40;
        case 0x2a8d44u: goto label_2a8d44;
        case 0x2a8d48u: goto label_2a8d48;
        case 0x2a8d4cu: goto label_2a8d4c;
        case 0x2a8d50u: goto label_2a8d50;
        case 0x2a8d54u: goto label_2a8d54;
        case 0x2a8d58u: goto label_2a8d58;
        case 0x2a8d5cu: goto label_2a8d5c;
        case 0x2a8d60u: goto label_2a8d60;
        case 0x2a8d64u: goto label_2a8d64;
        case 0x2a8d68u: goto label_2a8d68;
        case 0x2a8d6cu: goto label_2a8d6c;
        case 0x2a8d70u: goto label_2a8d70;
        case 0x2a8d74u: goto label_2a8d74;
        case 0x2a8d78u: goto label_2a8d78;
        case 0x2a8d7cu: goto label_2a8d7c;
        case 0x2a8d80u: goto label_2a8d80;
        case 0x2a8d84u: goto label_2a8d84;
        case 0x2a8d88u: goto label_2a8d88;
        case 0x2a8d8cu: goto label_2a8d8c;
        case 0x2a8d90u: goto label_2a8d90;
        case 0x2a8d94u: goto label_2a8d94;
        case 0x2a8d98u: goto label_2a8d98;
        case 0x2a8d9cu: goto label_2a8d9c;
        case 0x2a8da0u: goto label_2a8da0;
        case 0x2a8da4u: goto label_2a8da4;
        case 0x2a8da8u: goto label_2a8da8;
        case 0x2a8dacu: goto label_2a8dac;
        case 0x2a8db0u: goto label_2a8db0;
        case 0x2a8db4u: goto label_2a8db4;
        case 0x2a8db8u: goto label_2a8db8;
        case 0x2a8dbcu: goto label_2a8dbc;
        case 0x2a8dc0u: goto label_2a8dc0;
        case 0x2a8dc4u: goto label_2a8dc4;
        case 0x2a8dc8u: goto label_2a8dc8;
        case 0x2a8dccu: goto label_2a8dcc;
        case 0x2a8dd0u: goto label_2a8dd0;
        case 0x2a8dd4u: goto label_2a8dd4;
        case 0x2a8dd8u: goto label_2a8dd8;
        case 0x2a8ddcu: goto label_2a8ddc;
        case 0x2a8de0u: goto label_2a8de0;
        case 0x2a8de4u: goto label_2a8de4;
        case 0x2a8de8u: goto label_2a8de8;
        case 0x2a8decu: goto label_2a8dec;
        case 0x2a8df0u: goto label_2a8df0;
        case 0x2a8df4u: goto label_2a8df4;
        case 0x2a8df8u: goto label_2a8df8;
        case 0x2a8dfcu: goto label_2a8dfc;
        case 0x2a8e00u: goto label_2a8e00;
        case 0x2a8e04u: goto label_2a8e04;
        case 0x2a8e08u: goto label_2a8e08;
        case 0x2a8e0cu: goto label_2a8e0c;
        case 0x2a8e10u: goto label_2a8e10;
        case 0x2a8e14u: goto label_2a8e14;
        case 0x2a8e18u: goto label_2a8e18;
        case 0x2a8e1cu: goto label_2a8e1c;
        case 0x2a8e20u: goto label_2a8e20;
        case 0x2a8e24u: goto label_2a8e24;
        case 0x2a8e28u: goto label_2a8e28;
        case 0x2a8e2cu: goto label_2a8e2c;
        case 0x2a8e30u: goto label_2a8e30;
        case 0x2a8e34u: goto label_2a8e34;
        case 0x2a8e38u: goto label_2a8e38;
        case 0x2a8e3cu: goto label_2a8e3c;
        case 0x2a8e40u: goto label_2a8e40;
        case 0x2a8e44u: goto label_2a8e44;
        case 0x2a8e48u: goto label_2a8e48;
        case 0x2a8e4cu: goto label_2a8e4c;
        case 0x2a8e50u: goto label_2a8e50;
        case 0x2a8e54u: goto label_2a8e54;
        case 0x2a8e58u: goto label_2a8e58;
        case 0x2a8e5cu: goto label_2a8e5c;
        case 0x2a8e60u: goto label_2a8e60;
        case 0x2a8e64u: goto label_2a8e64;
        case 0x2a8e68u: goto label_2a8e68;
        case 0x2a8e6cu: goto label_2a8e6c;
        case 0x2a8e70u: goto label_2a8e70;
        case 0x2a8e74u: goto label_2a8e74;
        case 0x2a8e78u: goto label_2a8e78;
        case 0x2a8e7cu: goto label_2a8e7c;
        case 0x2a8e80u: goto label_2a8e80;
        case 0x2a8e84u: goto label_2a8e84;
        case 0x2a8e88u: goto label_2a8e88;
        case 0x2a8e8cu: goto label_2a8e8c;
        case 0x2a8e90u: goto label_2a8e90;
        case 0x2a8e94u: goto label_2a8e94;
        case 0x2a8e98u: goto label_2a8e98;
        case 0x2a8e9cu: goto label_2a8e9c;
        case 0x2a8ea0u: goto label_2a8ea0;
        case 0x2a8ea4u: goto label_2a8ea4;
        case 0x2a8ea8u: goto label_2a8ea8;
        case 0x2a8eacu: goto label_2a8eac;
        case 0x2a8eb0u: goto label_2a8eb0;
        case 0x2a8eb4u: goto label_2a8eb4;
        case 0x2a8eb8u: goto label_2a8eb8;
        case 0x2a8ebcu: goto label_2a8ebc;
        case 0x2a8ec0u: goto label_2a8ec0;
        case 0x2a8ec4u: goto label_2a8ec4;
        case 0x2a8ec8u: goto label_2a8ec8;
        case 0x2a8eccu: goto label_2a8ecc;
        case 0x2a8ed0u: goto label_2a8ed0;
        case 0x2a8ed4u: goto label_2a8ed4;
        case 0x2a8ed8u: goto label_2a8ed8;
        case 0x2a8edcu: goto label_2a8edc;
        case 0x2a8ee0u: goto label_2a8ee0;
        case 0x2a8ee4u: goto label_2a8ee4;
        case 0x2a8ee8u: goto label_2a8ee8;
        case 0x2a8eecu: goto label_2a8eec;
        case 0x2a8ef0u: goto label_2a8ef0;
        case 0x2a8ef4u: goto label_2a8ef4;
        case 0x2a8ef8u: goto label_2a8ef8;
        case 0x2a8efcu: goto label_2a8efc;
        case 0x2a8f00u: goto label_2a8f00;
        case 0x2a8f04u: goto label_2a8f04;
        case 0x2a8f08u: goto label_2a8f08;
        case 0x2a8f0cu: goto label_2a8f0c;
        case 0x2a8f10u: goto label_2a8f10;
        case 0x2a8f14u: goto label_2a8f14;
        case 0x2a8f18u: goto label_2a8f18;
        case 0x2a8f1cu: goto label_2a8f1c;
        case 0x2a8f20u: goto label_2a8f20;
        case 0x2a8f24u: goto label_2a8f24;
        case 0x2a8f28u: goto label_2a8f28;
        case 0x2a8f2cu: goto label_2a8f2c;
        case 0x2a8f30u: goto label_2a8f30;
        case 0x2a8f34u: goto label_2a8f34;
        case 0x2a8f38u: goto label_2a8f38;
        case 0x2a8f3cu: goto label_2a8f3c;
        case 0x2a8f40u: goto label_2a8f40;
        case 0x2a8f44u: goto label_2a8f44;
        case 0x2a8f48u: goto label_2a8f48;
        case 0x2a8f4cu: goto label_2a8f4c;
        case 0x2a8f50u: goto label_2a8f50;
        case 0x2a8f54u: goto label_2a8f54;
        case 0x2a8f58u: goto label_2a8f58;
        case 0x2a8f5cu: goto label_2a8f5c;
        case 0x2a8f60u: goto label_2a8f60;
        case 0x2a8f64u: goto label_2a8f64;
        case 0x2a8f68u: goto label_2a8f68;
        case 0x2a8f6cu: goto label_2a8f6c;
        case 0x2a8f70u: goto label_2a8f70;
        case 0x2a8f74u: goto label_2a8f74;
        case 0x2a8f78u: goto label_2a8f78;
        case 0x2a8f7cu: goto label_2a8f7c;
        case 0x2a8f80u: goto label_2a8f80;
        case 0x2a8f84u: goto label_2a8f84;
        case 0x2a8f88u: goto label_2a8f88;
        case 0x2a8f8cu: goto label_2a8f8c;
        case 0x2a8f90u: goto label_2a8f90;
        case 0x2a8f94u: goto label_2a8f94;
        case 0x2a8f98u: goto label_2a8f98;
        case 0x2a8f9cu: goto label_2a8f9c;
        case 0x2a8fa0u: goto label_2a8fa0;
        case 0x2a8fa4u: goto label_2a8fa4;
        case 0x2a8fa8u: goto label_2a8fa8;
        case 0x2a8facu: goto label_2a8fac;
        case 0x2a8fb0u: goto label_2a8fb0;
        case 0x2a8fb4u: goto label_2a8fb4;
        case 0x2a8fb8u: goto label_2a8fb8;
        case 0x2a8fbcu: goto label_2a8fbc;
        case 0x2a8fc0u: goto label_2a8fc0;
        case 0x2a8fc4u: goto label_2a8fc4;
        case 0x2a8fc8u: goto label_2a8fc8;
        case 0x2a8fccu: goto label_2a8fcc;
        case 0x2a8fd0u: goto label_2a8fd0;
        case 0x2a8fd4u: goto label_2a8fd4;
        case 0x2a8fd8u: goto label_2a8fd8;
        case 0x2a8fdcu: goto label_2a8fdc;
        case 0x2a8fe0u: goto label_2a8fe0;
        case 0x2a8fe4u: goto label_2a8fe4;
        case 0x2a8fe8u: goto label_2a8fe8;
        case 0x2a8fecu: goto label_2a8fec;
        case 0x2a8ff0u: goto label_2a8ff0;
        case 0x2a8ff4u: goto label_2a8ff4;
        case 0x2a8ff8u: goto label_2a8ff8;
        case 0x2a8ffcu: goto label_2a8ffc;
        case 0x2a9000u: goto label_2a9000;
        case 0x2a9004u: goto label_2a9004;
        case 0x2a9008u: goto label_2a9008;
        case 0x2a900cu: goto label_2a900c;
        case 0x2a9010u: goto label_2a9010;
        case 0x2a9014u: goto label_2a9014;
        case 0x2a9018u: goto label_2a9018;
        case 0x2a901cu: goto label_2a901c;
        case 0x2a9020u: goto label_2a9020;
        case 0x2a9024u: goto label_2a9024;
        case 0x2a9028u: goto label_2a9028;
        case 0x2a902cu: goto label_2a902c;
        case 0x2a9030u: goto label_2a9030;
        case 0x2a9034u: goto label_2a9034;
        case 0x2a9038u: goto label_2a9038;
        case 0x2a903cu: goto label_2a903c;
        case 0x2a9040u: goto label_2a9040;
        case 0x2a9044u: goto label_2a9044;
        case 0x2a9048u: goto label_2a9048;
        case 0x2a904cu: goto label_2a904c;
        case 0x2a9050u: goto label_2a9050;
        case 0x2a9054u: goto label_2a9054;
        case 0x2a9058u: goto label_2a9058;
        case 0x2a905cu: goto label_2a905c;
        case 0x2a9060u: goto label_2a9060;
        case 0x2a9064u: goto label_2a9064;
        case 0x2a9068u: goto label_2a9068;
        case 0x2a906cu: goto label_2a906c;
        case 0x2a9070u: goto label_2a9070;
        case 0x2a9074u: goto label_2a9074;
        case 0x2a9078u: goto label_2a9078;
        case 0x2a907cu: goto label_2a907c;
        case 0x2a9080u: goto label_2a9080;
        case 0x2a9084u: goto label_2a9084;
        case 0x2a9088u: goto label_2a9088;
        case 0x2a908cu: goto label_2a908c;
        case 0x2a9090u: goto label_2a9090;
        case 0x2a9094u: goto label_2a9094;
        case 0x2a9098u: goto label_2a9098;
        case 0x2a909cu: goto label_2a909c;
        case 0x2a90a0u: goto label_2a90a0;
        case 0x2a90a4u: goto label_2a90a4;
        case 0x2a90a8u: goto label_2a90a8;
        case 0x2a90acu: goto label_2a90ac;
        case 0x2a90b0u: goto label_2a90b0;
        case 0x2a90b4u: goto label_2a90b4;
        case 0x2a90b8u: goto label_2a90b8;
        case 0x2a90bcu: goto label_2a90bc;
        case 0x2a90c0u: goto label_2a90c0;
        case 0x2a90c4u: goto label_2a90c4;
        case 0x2a90c8u: goto label_2a90c8;
        case 0x2a90ccu: goto label_2a90cc;
        case 0x2a90d0u: goto label_2a90d0;
        case 0x2a90d4u: goto label_2a90d4;
        case 0x2a90d8u: goto label_2a90d8;
        case 0x2a90dcu: goto label_2a90dc;
        case 0x2a90e0u: goto label_2a90e0;
        case 0x2a90e4u: goto label_2a90e4;
        case 0x2a90e8u: goto label_2a90e8;
        case 0x2a90ecu: goto label_2a90ec;
        case 0x2a90f0u: goto label_2a90f0;
        case 0x2a90f4u: goto label_2a90f4;
        case 0x2a90f8u: goto label_2a90f8;
        case 0x2a90fcu: goto label_2a90fc;
        case 0x2a9100u: goto label_2a9100;
        case 0x2a9104u: goto label_2a9104;
        case 0x2a9108u: goto label_2a9108;
        case 0x2a910cu: goto label_2a910c;
        default: break;
    }

    ctx->pc = 0x2a8b40u;

label_2a8b40:
    // 0x2a8b40: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x2a8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
label_2a8b44:
    // 0x2a8b44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a8b48:
    // 0x2a8b48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a8b4c:
    // 0x2a8b4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a8b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a8b50:
    // 0x2a8b50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a8b54:
    // 0x2a8b54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a8b58:
    // 0x2a8b58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a8b5c:
    // 0x2a8b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a8b60:
    // 0x2a8b60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a8b64:
    // 0x2a8b64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a8b68:
    // 0x2a8b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8b6c:
    // 0x2a8b6c: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x2a8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
label_2a8b70:
    // 0x2a8b70: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2a8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2a8b74:
    // 0x2a8b74: 0x1060015a  beqz        $v1, . + 4 + (0x15A << 2)
label_2a8b78:
    if (ctx->pc == 0x2A8B78u) {
        ctx->pc = 0x2A8B78u;
            // 0x2a8b78: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B7Cu;
        goto label_2a8b7c;
    }
    ctx->pc = 0x2A8B74u;
    {
        const bool branch_taken_0x2a8b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B74u;
            // 0x2a8b78: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b74) {
            ctx->pc = 0x2A90E0u;
            goto label_2a90e0;
        }
    }
    ctx->pc = 0x2A8B7Cu;
label_2a8b7c:
    // 0x2a8b7c: 0xc0aa284  jal         func_2A8A10
label_2a8b80:
    if (ctx->pc == 0x2A8B80u) {
        ctx->pc = 0x2A8B80u;
            // 0x2a8b80: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B84u;
        goto label_2a8b84;
    }
    ctx->pc = 0x2A8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B84u);
    ctx->pc = 0x2A8B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B7Cu;
            // 0x2a8b80: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A10u;
    if (runtime->hasFunction(0x2A8A10u)) {
        auto targetFn = runtime->lookupFunction(0x2A8A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B84u; }
        if (ctx->pc != 0x2A8B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlaceData__9CEditDataFv_0x2a8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B84u; }
        if (ctx->pc != 0x2A8B84u) { return; }
    }
    ctx->pc = 0x2A8B84u;
label_2a8b84:
    // 0x2a8b84: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2a8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2a8b88:
    // 0x2a8b88: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a8b88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b8c:
    // 0x2a8b8c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a8b8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b90:
    // 0x2a8b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b94:
    // 0x2a8b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b98:
    // 0x2a8b98: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2a8b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2a8b9c:
    // 0x2a8b9c: 0x24422c40  addiu       $v0, $v0, 0x2C40
    ctx->pc = 0x2a8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11328));
label_2a8ba0:
    // 0x2a8ba0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2a8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2a8ba4:
    // 0x2a8ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a8ba8:
    // 0x2a8ba8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a8bac:
    // 0x2a8bac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2a8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2a8bb0:
    // 0x2a8bb0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2a8bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8bb4:
    // 0x2a8bb4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2a8bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_2a8bb8:
    // 0x2a8bb8: 0x28820800  slti        $v0, $a0, 0x800
    ctx->pc = 0x2a8bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2048) ? 1 : 0);
label_2a8bbc:
    // 0x2a8bbc: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x2a8bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
label_2a8bc0:
    // 0x2a8bc0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a8bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2a8bc4:
    // 0x2a8bc4: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x2a8bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
label_2a8bc8:
    // 0x2a8bc8: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x2a8bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_2a8bcc:
    // 0x2a8bcc: 0xa4c30010  sh          $v1, 0x10($a2)
    ctx->pc = 0x2a8bccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a8bd0:
    // 0x2a8bd0: 0xa4c30014  sh          $v1, 0x14($a2)
    ctx->pc = 0x2a8bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 3));
label_2a8bd4:
    // 0x2a8bd4: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x2a8bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
label_2a8bd8:
    // 0x2a8bd8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2a8bdc:
    if (ctx->pc == 0x2A8BDCu) {
        ctx->pc = 0x2A8BDCu;
            // 0x2a8bdc: 0xa4c3001c  sh          $v1, 0x1C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A8BE0u;
        goto label_2a8be0;
    }
    ctx->pc = 0x2A8BD8u;
    {
        const bool branch_taken_0x2a8bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BD8u;
            // 0x2a8bdc: 0xa4c3001c  sh          $v1, 0x1C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bd8) {
            ctx->pc = 0x2A8BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8ba8;
        }
    }
    ctx->pc = 0x2A8BE0u;
label_2a8be0:
    // 0x2a8be0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a8be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8be4:
    // 0x2a8be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8be8:
    // 0x2a8be8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2a8bec:
    if (ctx->pc == 0x2A8BECu) {
        ctx->pc = 0x2A8BECu;
            // 0x2a8bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BF0u;
        goto label_2a8bf0;
    }
    ctx->pc = 0x2A8BE8u;
    {
        const bool branch_taken_0x2a8be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BE8u;
            // 0x2a8bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8be8) {
            ctx->pc = 0x2A8C30u;
            goto label_2a8c30;
        }
    }
    ctx->pc = 0x2A8BF0u;
label_2a8bf0:
    // 0x2a8bf0: 0x8ea20f4c  lw          $v0, 0xF4C($s5)
    ctx->pc = 0x2a8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3916)));
label_2a8bf4:
    // 0x2a8bf4: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x2a8bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8bf8:
    // 0x2a8bf8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2a8bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_2a8bfc:
    // 0x2a8bfc: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x2a8bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2a8c00:
    // 0x2a8c00: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2a8c04:
    if (ctx->pc == 0x2A8C04u) {
        ctx->pc = 0x2A8C08u;
        goto label_2a8c08;
    }
    ctx->pc = 0x2A8C00u;
    {
        const bool branch_taken_0x2a8c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c00) {
            ctx->pc = 0x2A8C28u;
            goto label_2a8c28;
        }
    }
    ctx->pc = 0x2A8C08u;
label_2a8c08:
    // 0x2a8c08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a8c0c:
    // 0x2a8c0c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a8c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2a8c10:
    // 0x2a8c10: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2a8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a8c14:
    // 0x2a8c14: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x2a8c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_2a8c18:
    // 0x2a8c18: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a8c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2a8c1c:
    // 0x2a8c1c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2a8c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2a8c20:
    // 0x2a8c20: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2a8c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2a8c24:
    // 0x2a8c24: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x2a8c24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_2a8c28:
    // 0x2a8c28: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a8c2c:
    // 0x2a8c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a8c30:
    // 0x2a8c30: 0x8ea20f48  lw          $v0, 0xF48($s5)
    ctx->pc = 0x2a8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3912)));
label_2a8c34:
    // 0x2a8c34: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2a8c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a8c38:
    // 0x2a8c38: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_2a8c3c:
    if (ctx->pc == 0x2A8C3Cu) {
        ctx->pc = 0x2A8C40u;
        goto label_2a8c40;
    }
    ctx->pc = 0x2A8C38u;
    {
        const bool branch_taken_0x2a8c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c38) {
            ctx->pc = 0x2A8BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8bf0;
        }
    }
    ctx->pc = 0x2A8C40u;
label_2a8c40:
    // 0x2a8c40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c44:
    // 0x2a8c44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c48:
    // 0x2a8c48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a8c4c:
    // 0x2a8c4c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x2a8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2a8c50:
    // 0x2a8c50: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a8c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2a8c54:
    // 0x2a8c54: 0x244500f0  addiu       $a1, $v0, 0xF0
    ctx->pc = 0x2a8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_2a8c58:
    // 0x2a8c58: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2a8c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2a8c5c:
    // 0x2a8c5c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2a8c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2a8c60:
    // 0x2a8c60: 0x28c20124  slti        $v0, $a2, 0x124
    ctx->pc = 0x2a8c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)292) ? 1 : 0);
label_2a8c64:
    // 0x2a8c64: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x2a8c64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
label_2a8c68:
    // 0x2a8c68: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x2a8c68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_2a8c6c:
    // 0x2a8c6c: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x2a8c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
label_2a8c70:
    // 0x2a8c70: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x2a8c70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
label_2a8c74:
    // 0x2a8c74: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x2a8c74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
label_2a8c78:
    // 0x2a8c78: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x2a8c78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
label_2a8c7c:
    // 0x2a8c7c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2a8c80:
    if (ctx->pc == 0x2A8C80u) {
        ctx->pc = 0x2A8C80u;
            // 0x2a8c80: 0xa4a3000e  sh          $v1, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A8C84u;
        goto label_2a8c84;
    }
    ctx->pc = 0x2A8C7Cu;
    {
        const bool branch_taken_0x2a8c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C7Cu;
            // 0x2a8c80: 0xa4a3000e  sh          $v1, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c7c) {
            ctx->pc = 0x2A8C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8c4c;
        }
    }
    ctx->pc = 0x2A8C84u;
label_2a8c84:
    // 0x2a8c84: 0x28c1012c  slti        $at, $a2, 0x12C
    ctx->pc = 0x2a8c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)300) ? 1 : 0);
label_2a8c88:
    // 0x2a8c88: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2a8c8c:
    if (ctx->pc == 0x2A8C8Cu) {
        ctx->pc = 0x2A8C8Cu;
            // 0x2a8c8c: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2A8C90u;
        goto label_2a8c90;
    }
    ctx->pc = 0x2A8C88u;
    {
        const bool branch_taken_0x2a8c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C88u;
            // 0x2a8c8c: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c88) {
            ctx->pc = 0x2A8CB4u;
            goto label_2a8cb4;
        }
    }
    ctx->pc = 0x2A8C90u;
label_2a8c90:
    // 0x2a8c90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a8c94:
    // 0x2a8c94: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x2a8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2a8c98:
    // 0x2a8c98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a8c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a8c9c:
    // 0x2a8c9c: 0xa44300f0  sh          $v1, 0xF0($v0)
    ctx->pc = 0x2a8c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 240), (uint16_t)GPR_U32(ctx, 3));
label_2a8ca0:
    // 0x2a8ca0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2a8ca4:
    // 0x2a8ca4: 0x28c2012c  slti        $v0, $a2, 0x12C
    ctx->pc = 0x2a8ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)300) ? 1 : 0);
label_2a8ca8:
    // 0x2a8ca8: 0x0  nop
    ctx->pc = 0x2a8ca8u;
    // NOP
label_2a8cac:
    // 0x2a8cac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2a8cb0:
    if (ctx->pc == 0x2A8CB0u) {
        ctx->pc = 0x2A8CB4u;
        goto label_2a8cb4;
    }
    ctx->pc = 0x2A8CACu;
    {
        const bool branch_taken_0x2a8cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8cac) {
            ctx->pc = 0x2A8C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8c94;
        }
    }
    ctx->pc = 0x2A8CB4u;
label_2a8cb4:
    // 0x2a8cb4: 0x0  nop
    ctx->pc = 0x2a8cb4u;
    // NOP
label_2a8cb8:
    // 0x2a8cb8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2a8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2a8cbc:
    // 0x2a8cbc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2a8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2a8cc0:
    // 0x2a8cc0: 0x10000074  b           . + 4 + (0x74 << 2)
label_2a8cc4:
    if (ctx->pc == 0x2A8CC4u) {
        ctx->pc = 0x2A8CC4u;
            // 0x2a8cc4: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x2A8CC8u;
        goto label_2a8cc8;
    }
    ctx->pc = 0x2A8CC0u;
    {
        const bool branch_taken_0x2a8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8CC0u;
            // 0x2a8cc4: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8cc0) {
            ctx->pc = 0x2A8E94u;
            goto label_2a8e94;
        }
    }
    ctx->pc = 0x2A8CC8u;
label_2a8cc8:
    // 0x2a8cc8: 0x8ea30d44  lw          $v1, 0xD44($s5)
    ctx->pc = 0x2a8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
label_2a8ccc:
    // 0x2a8ccc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2a8cd0:
    // 0x2a8cd0: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8cd4:
    // 0x2a8cd4: 0x82c20070  lb          $v0, 0x70($s6)
    ctx->pc = 0x2a8cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 112)));
label_2a8cd8:
    // 0x2a8cd8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2a8cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_2a8cdc:
    // 0x2a8cdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a8ce0:
    // 0x2a8ce0: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_2a8ce4:
    if (ctx->pc == 0x2A8CE4u) {
        ctx->pc = 0x2A8CE8u;
        goto label_2a8ce8;
    }
    ctx->pc = 0x2A8CE0u;
    {
        const bool branch_taken_0x2a8ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8ce0) {
            ctx->pc = 0x2A8E70u;
            goto label_2a8e70;
        }
    }
    ctx->pc = 0x2A8CE8u;
label_2a8ce8:
    // 0x2a8ce8: 0x8ec20324  lw          $v0, 0x324($s6)
    ctx->pc = 0x2a8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 804)));
label_2a8cec:
    // 0x2a8cec: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_2a8cf0:
    if (ctx->pc == 0x2A8CF0u) {
        ctx->pc = 0x2A8CF4u;
        goto label_2a8cf4;
    }
    ctx->pc = 0x2A8CECu;
    {
        const bool branch_taken_0x2a8cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8cec) {
            ctx->pc = 0x2A8E70u;
            goto label_2a8e70;
        }
    }
    ctx->pc = 0x2A8CF4u;
label_2a8cf4:
    // 0x2a8cf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a8cf8:
    // 0x2a8cf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a8cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a8cfc:
    // 0x2a8cfc: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x2a8cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2a8d00:
    // 0x2a8d00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a8d04:
    // 0x2a8d04: 0x82c20310  lb          $v0, 0x310($s6)
    ctx->pc = 0x2a8d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 784)));
label_2a8d08:
    // 0x2a8d08: 0xc06d664  jal         func_1B5990
label_2a8d0c:
    if (ctx->pc == 0x2A8D0Cu) {
        ctx->pc = 0x2A8D0Cu;
            // 0x2a8d0c: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A8D10u;
        goto label_2a8d10;
    }
    ctx->pc = 0x2A8D08u;
    SET_GPR_U32(ctx, 31, 0x2A8D10u);
    ctx->pc = 0x2A8D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D08u;
            // 0x2a8d0c: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5990u;
    if (runtime->hasFunction(0x1B5990u)) {
        auto targetFn = runtime->lookupFunction(0x1B5990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D10u; }
        if (ctx->pc != 0x2A8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalPos__10CEditPartsFPf_0x1b5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D10u; }
        if (ctx->pc != 0x2A8D10u) { return; }
    }
    ctx->pc = 0x2A8D10u;
label_2a8d10:
    // 0x2a8d10: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x2a8d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2a8d14:
    // 0x2a8d14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a8d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d18:
    // 0x2a8d18: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2a8d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2a8d1c:
    // 0x2a8d1c: 0x320f809  jalr        $t9
label_2a8d20:
    if (ctx->pc == 0x2A8D20u) {
        ctx->pc = 0x2A8D20u;
            // 0x2a8d20: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x2A8D24u;
        goto label_2a8d24;
    }
    ctx->pc = 0x2A8D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A8D24u);
        ctx->pc = 0x2A8D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D1Cu;
            // 0x2a8d20: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A8D24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D24u; }
            if (ctx->pc != 0x2A8D24u) { return; }
        }
        }
    }
    ctx->pc = 0x2A8D24u;
label_2a8d24:
    // 0x2a8d24: 0xc7ac0364  lwc1        $f12, 0x364($sp)
    ctx->pc = 0x2a8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8d28:
    // 0x2a8d28: 0xc06c3d4  jal         func_1B0F50
label_2a8d2c:
    if (ctx->pc == 0x2A8D2Cu) {
        ctx->pc = 0x2A8D2Cu;
            // 0x2a8d2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D30u;
        goto label_2a8d30;
    }
    ctx->pc = 0x2A8D28u;
    SET_GPR_U32(ctx, 31, 0x2A8D30u);
    ctx->pc = 0x2A8D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D28u;
            // 0x2a8d2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D30u; }
        if (ctx->pc != 0x2A8D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D30u; }
        if (ctx->pc != 0x2A8D30u) { return; }
    }
    ctx->pc = 0x2A8D30u;
label_2a8d30:
    // 0x2a8d30: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x2a8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_2a8d34:
    // 0x2a8d34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a8d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d38:
    // 0x2a8d38: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2a8d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_2a8d3c:
    // 0x2a8d3c: 0xc06c408  jal         func_1B1020
label_2a8d40:
    if (ctx->pc == 0x2A8D40u) {
        ctx->pc = 0x2A8D40u;
            // 0x2a8d40: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2A8D44u;
        goto label_2a8d44;
    }
    ctx->pc = 0x2A8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D44u);
    ctx->pc = 0x2A8D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D3Cu;
            // 0x2a8d40: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (runtime->hasFunction(0x1B1020u)) {
        auto targetFn = runtime->lookupFunction(0x1B1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D44u; }
        if (ctx->pc != 0x2A8D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditPos__8CEditMapFPfPf_0x1b1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D44u; }
        if (ctx->pc != 0x2A8D44u) { return; }
    }
    ctx->pc = 0x2A8D44u;
label_2a8d44:
    // 0x2a8d44: 0xc0a248c  jal         func_289230
label_2a8d48:
    if (ctx->pc == 0x2A8D48u) {
        ctx->pc = 0x2A8D48u;
            // 0x2a8d48: 0xc7ac0370  lwc1        $f12, 0x370($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A8D4Cu;
        goto label_2a8d4c;
    }
    ctx->pc = 0x2A8D44u;
    SET_GPR_U32(ctx, 31, 0x2A8D4Cu);
    ctx->pc = 0x2A8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D44u;
            // 0x2a8d48: 0xc7ac0370  lwc1        $f12, 0x370($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D4Cu; }
        if (ctx->pc != 0x2A8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D4Cu; }
        if (ctx->pc != 0x2A8D4Cu) { return; }
    }
    ctx->pc = 0x2A8D4Cu;
label_2a8d4c:
    // 0x2a8d4c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2a8d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a8d50:
    // 0x2a8d50: 0xc0a248c  jal         func_289230
label_2a8d54:
    if (ctx->pc == 0x2A8D54u) {
        ctx->pc = 0x2A8D54u;
            // 0x2a8d54: 0xc7ac0374  lwc1        $f12, 0x374($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A8D58u;
        goto label_2a8d58;
    }
    ctx->pc = 0x2A8D50u;
    SET_GPR_U32(ctx, 31, 0x2A8D58u);
    ctx->pc = 0x2A8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D50u;
            // 0x2a8d54: 0xc7ac0374  lwc1        $f12, 0x374($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D58u; }
        if (ctx->pc != 0x2A8D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D58u; }
        if (ctx->pc != 0x2A8D58u) { return; }
    }
    ctx->pc = 0x2A8D58u;
label_2a8d58:
    // 0x2a8d58: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2a8d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_2a8d5c:
    // 0x2a8d5c: 0xc0a248c  jal         func_289230
label_2a8d60:
    if (ctx->pc == 0x2A8D60u) {
        ctx->pc = 0x2A8D60u;
            // 0x2a8d60: 0xc7ac0378  lwc1        $f12, 0x378($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A8D64u;
        goto label_2a8d64;
    }
    ctx->pc = 0x2A8D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D64u);
    ctx->pc = 0x2A8D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D5Cu;
            // 0x2a8d60: 0xc7ac0378  lwc1        $f12, 0x378($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D64u; }
        if (ctx->pc != 0x2A8D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D64u; }
        if (ctx->pc != 0x2A8D64u) { return; }
    }
    ctx->pc = 0x2A8D64u;
label_2a8d64:
    // 0x2a8d64: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2a8d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_2a8d68:
    // 0x2a8d68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d6c:
    // 0x2a8d6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a8d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d70:
    // 0x2a8d70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a8d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d74:
    // 0x2a8d74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a8d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d78:
    // 0x2a8d78: 0xc0599ec  jal         func_1667B0
label_2a8d7c:
    if (ctx->pc == 0x2A8D7Cu) {
        ctx->pc = 0x2A8D7Cu;
            // 0x2a8d7c: 0x27a60380  addiu       $a2, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->pc = 0x2A8D80u;
        goto label_2a8d80;
    }
    ctx->pc = 0x2A8D78u;
    SET_GPR_U32(ctx, 31, 0x2A8D80u);
    ctx->pc = 0x2A8D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D78u;
            // 0x2a8d7c: 0x27a60380  addiu       $a2, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1667B0u;
    if (runtime->hasFunction(0x1667B0u)) {
        auto targetFn = runtime->lookupFunction(0x1667B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D80u; }
        if (ctx->pc != 0x2A8D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__9CMapPartsFiPf_0x1667b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D80u; }
        if (ctx->pc != 0x2A8D80u) { return; }
    }
    ctx->pc = 0x2A8D80u;
label_2a8d80:
    // 0x2a8d80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2a8d84:
    if (ctx->pc == 0x2A8D84u) {
        ctx->pc = 0x2A8D84u;
            // 0x2a8d84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D88u;
        goto label_2a8d88;
    }
    ctx->pc = 0x2A8D80u;
    {
        const bool branch_taken_0x2a8d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D80u;
            // 0x2a8d84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d80) {
            ctx->pc = 0x2A8DE4u;
            goto label_2a8de4;
        }
    }
    ctx->pc = 0x2A8D88u;
label_2a8d88:
    // 0x2a8d88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a8d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d8c:
    // 0x2a8d8c: 0x0  nop
    ctx->pc = 0x2a8d8cu;
    // NOP
label_2a8d90:
    // 0x2a8d90: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2a8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2a8d94:
    // 0x2a8d94: 0xc4400380  lwc1        $f0, 0x380($v0)
    ctx->pc = 0x2a8d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8d98:
    // 0x2a8d98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2a8d9c:
    // 0x2a8d9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8da0:
    // 0x2a8da0: 0xc0a248c  jal         func_289230
label_2a8da4:
    if (ctx->pc == 0x2A8DA4u) {
        ctx->pc = 0x2A8DA4u;
            // 0x2a8da4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2A8DA8u;
        goto label_2a8da8;
    }
    ctx->pc = 0x2A8DA0u;
    SET_GPR_U32(ctx, 31, 0x2A8DA8u);
    ctx->pc = 0x2A8DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DA0u;
            // 0x2a8da4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8DA8u; }
        if (ctx->pc != 0x2A8DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8DA8u; }
        if (ctx->pc != 0x2A8DA8u) { return; }
    }
    ctx->pc = 0x2A8DA8u;
label_2a8da8:
    // 0x2a8da8: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x2a8da8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_2a8dac:
    // 0x2a8dac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2a8db0:
    if (ctx->pc == 0x2A8DB0u) {
        ctx->pc = 0x2A8DB4u;
        goto label_2a8db4;
    }
    ctx->pc = 0x2A8DACu;
    {
        const bool branch_taken_0x2a8dac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8dac) {
            ctx->pc = 0x2A8DB8u;
            goto label_2a8db8;
        }
    }
    ctx->pc = 0x2A8DB4u;
label_2a8db4:
    // 0x2a8db4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2a8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a8db8:
    // 0x2a8db8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2a8dbc:
    if (ctx->pc == 0x2A8DBCu) {
        ctx->pc = 0x2A8DC0u;
        goto label_2a8dc0;
    }
    ctx->pc = 0x2A8DB8u;
    {
        const bool branch_taken_0x2a8db8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a8db8) {
            ctx->pc = 0x2A8DC4u;
            goto label_2a8dc4;
        }
    }
    ctx->pc = 0x2A8DC0u;
label_2a8dc0:
    // 0x2a8dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8dc4:
    // 0x2a8dc4: 0x0  nop
    ctx->pc = 0x2a8dc4u;
    // NOP
label_2a8dc8:
    // 0x2a8dc8: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2a8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2a8dcc:
    // 0x2a8dcc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2a8dd0:
    // 0x2a8dd0: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x2a8dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
label_2a8dd4:
    // 0x2a8dd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a8dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a8dd8:
    // 0x2a8dd8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2a8dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_2a8ddc:
    // 0x2a8ddc: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2a8de0:
    if (ctx->pc == 0x2A8DE0u) {
        ctx->pc = 0x2A8DE0u;
            // 0x2a8de0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2A8DE4u;
        goto label_2a8de4;
    }
    ctx->pc = 0x2A8DDCu;
    {
        const bool branch_taken_0x2a8ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DDCu;
            // 0x2a8de0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ddc) {
            ctx->pc = 0x2A8D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8d8c;
        }
    }
    ctx->pc = 0x2A8DE4u;
label_2a8de4:
    // 0x2a8de4: 0x0  nop
    ctx->pc = 0x2a8de4u;
    // NOP
label_2a8de8:
    // 0x2a8de8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a8de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a8dec:
    // 0x2a8dec: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2a8decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2a8df0:
    // 0x2a8df0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_2a8df4:
    if (ctx->pc == 0x2A8DF4u) {
        ctx->pc = 0x2A8DF4u;
            // 0x2a8df4: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->pc = 0x2A8DF8u;
        goto label_2a8df8;
    }
    ctx->pc = 0x2A8DF0u;
    {
        const bool branch_taken_0x2a8df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DF0u;
            // 0x2a8df4: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8df0) {
            ctx->pc = 0x2A8D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8d70;
        }
    }
    ctx->pc = 0x2A8DF8u;
label_2a8df8:
    // 0x2a8df8: 0x8ec30328  lw          $v1, 0x328($s6)
    ctx->pc = 0x2a8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 808)));
label_2a8dfc:
    // 0x2a8dfc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2a8e00:
    if (ctx->pc == 0x2A8E00u) {
        ctx->pc = 0x2A8E00u;
            // 0x2a8e00: 0x26a20d48  addiu       $v0, $s5, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3400));
        ctx->pc = 0x2A8E04u;
        goto label_2a8e04;
    }
    ctx->pc = 0x2A8DFCu;
    {
        const bool branch_taken_0x2a8dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8DFCu;
            // 0x2a8e00: 0x26a20d48  addiu       $v0, $s5, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8dfc) {
            ctx->pc = 0x2A8E24u;
            goto label_2a8e24;
        }
    }
    ctx->pc = 0x2A8E04u;
label_2a8e04:
    // 0x2a8e04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a8e08:
    // 0x2a8e08: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2a8e0c:
    if (ctx->pc == 0x2A8E0Cu) {
        ctx->pc = 0x2A8E0Cu;
            // 0x2a8e0c: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x2A8E10u;
        goto label_2a8e10;
    }
    ctx->pc = 0x2A8E08u;
    {
        const bool branch_taken_0x2a8e08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A8E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E08u;
            // 0x2a8e0c: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e08) {
            ctx->pc = 0x2A8E18u;
            goto label_2a8e18;
        }
    }
    ctx->pc = 0x2A8E10u;
label_2a8e10:
    // 0x2a8e10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2a8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2a8e14:
    // 0x2a8e14: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2a8e14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_2a8e18:
    // 0x2a8e18: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a8e1c:
    // 0x2a8e1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a8e20:
    if (ctx->pc == 0x2A8E20u) {
        ctx->pc = 0x2A8E20u;
            // 0x2a8e20: 0xa6020018  sh          $v0, 0x18($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A8E24u;
        goto label_2a8e24;
    }
    ctx->pc = 0x2A8E1Cu;
    {
        const bool branch_taken_0x2a8e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E1Cu;
            // 0x2a8e20: 0xa6020018  sh          $v0, 0x18($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e1c) {
            ctx->pc = 0x2A8E2Cu;
            goto label_2a8e2c;
        }
    }
    ctx->pc = 0x2A8E24u;
label_2a8e24:
    // 0x2a8e24: 0x0  nop
    ctx->pc = 0x2a8e24u;
    // NOP
label_2a8e28:
    // 0x2a8e28: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x2a8e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
label_2a8e2c:
    // 0x2a8e2c: 0x0  nop
    ctx->pc = 0x2a8e2cu;
    // NOP
label_2a8e30:
    // 0x2a8e30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2a8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2a8e34:
    // 0x2a8e34: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2a8e38:
    // 0x2a8e38: 0xa45e00f0  sh          $fp, 0xF0($v0)
    ctx->pc = 0x2a8e38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 240), (uint16_t)GPR_U32(ctx, 30));
label_2a8e3c:
    // 0x2a8e3c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2a8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2a8e40:
    // 0x2a8e40: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2a8e40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2a8e44:
    // 0x2a8e44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a8e48:
    // 0x2a8e48: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x2a8e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a8e4c:
    // 0x2a8e4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2a8e50:
    if (ctx->pc == 0x2A8E50u) {
        ctx->pc = 0x2A8E50u;
            // 0x2a8e50: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x2A8E54u;
        goto label_2a8e54;
    }
    ctx->pc = 0x2A8E4Cu;
    {
        const bool branch_taken_0x2a8e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E4Cu;
            // 0x2a8e50: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e4c) {
            ctx->pc = 0x2A8E70u;
            goto label_2a8e70;
        }
    }
    ctx->pc = 0x2A8E54u;
label_2a8e54:
    // 0x2a8e54: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2a8e58:
    // 0x2a8e58: 0xc04a0d2  jal         func_128348
label_2a8e5c:
    if (ctx->pc == 0x2A8E5Cu) {
        ctx->pc = 0x2A8E5Cu;
            // 0x2a8e5c: 0x2484e610  addiu       $a0, $a0, -0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
        ctx->pc = 0x2A8E60u;
        goto label_2a8e60;
    }
    ctx->pc = 0x2A8E58u;
    SET_GPR_U32(ctx, 31, 0x2A8E60u);
    ctx->pc = 0x2A8E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E58u;
            // 0x2a8e5c: 0x2484e610  addiu       $a0, $a0, -0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8E60u; }
        if (ctx->pc != 0x2A8E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8E60u; }
        if (ctx->pc != 0x2A8E60u) { return; }
    }
    ctx->pc = 0x2A8E60u;
label_2a8e60:
    // 0x2a8e60: 0xc04950e  jal         func_125438
label_2a8e64:
    if (ctx->pc == 0x2A8E64u) {
        ctx->pc = 0x2A8E64u;
            // 0x2a8e64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E68u;
        goto label_2a8e68;
    }
    ctx->pc = 0x2A8E60u;
    SET_GPR_U32(ctx, 31, 0x2A8E68u);
    ctx->pc = 0x2A8E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8E60u;
            // 0x2a8e64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8E68u; }
        if (ctx->pc != 0x2A8E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8E68u; }
        if (ctx->pc != 0x2A8E68u) { return; }
    }
    ctx->pc = 0x2A8E68u;
label_2a8e68:
    // 0x2a8e68: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a8e6c:
    if (ctx->pc == 0x2A8E6Cu) {
        ctx->pc = 0x2A8E70u;
        goto label_2a8e70;
    }
    ctx->pc = 0x2A8E68u;
    {
        const bool branch_taken_0x2a8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e68) {
            ctx->pc = 0x2A8EACu;
            goto label_2a8eac;
        }
    }
    ctx->pc = 0x2A8E70u;
label_2a8e70:
    // 0x2a8e70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2a8e74:
    // 0x2a8e74: 0x24420330  addiu       $v0, $v0, 0x330
    ctx->pc = 0x2a8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
label_2a8e78:
    // 0x2a8e78: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2a8e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2a8e7c:
    // 0x2a8e7c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2a8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2a8e80:
    // 0x2a8e80: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2a8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2a8e84:
    // 0x2a8e84: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2a8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2a8e88:
    // 0x2a8e88: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a8e8c:
    // 0x2a8e8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a8e90:
    // 0x2a8e90: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2a8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2a8e94:
    // 0x2a8e94: 0x0  nop
    ctx->pc = 0x2a8e94u;
    // NOP
label_2a8e98:
    // 0x2a8e98: 0x8ea30d40  lw          $v1, 0xD40($s5)
    ctx->pc = 0x2a8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
label_2a8e9c:
    // 0x2a8e9c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a8ea0:
    // 0x2a8ea0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a8ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a8ea4:
    // 0x2a8ea4: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_2a8ea8:
    if (ctx->pc == 0x2A8EA8u) {
        ctx->pc = 0x2A8EACu;
        goto label_2a8eac;
    }
    ctx->pc = 0x2A8EA4u;
    {
        const bool branch_taken_0x2a8ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8ea4) {
            ctx->pc = 0x2A8CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8cc8;
        }
    }
    ctx->pc = 0x2A8EACu;
label_2a8eac:
    // 0x2a8eac: 0x0  nop
    ctx->pc = 0x2a8eacu;
    // NOP
label_2a8eb0:
    // 0x2a8eb0: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2a8eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2a8eb4:
    // 0x2a8eb4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_2a8eb8:
    if (ctx->pc == 0x2A8EB8u) {
        ctx->pc = 0x2A8EB8u;
            // 0x2a8eb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8EBCu;
        goto label_2a8ebc;
    }
    ctx->pc = 0x2A8EB4u;
    {
        const bool branch_taken_0x2a8eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8EB4u;
            // 0x2a8eb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8eb4) {
            ctx->pc = 0x2A8F18u;
            goto label_2a8f18;
        }
    }
    ctx->pc = 0x2A8EBCu;
label_2a8ebc:
    // 0x2a8ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ec0:
    // 0x2a8ec0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a8ec4:
    // 0x2a8ec4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2a8ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a8ec8:
    // 0x2a8ec8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2a8ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2a8ecc:
    // 0x2a8ecc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2a8ed0:
    if (ctx->pc == 0x2A8ED0u) {
        ctx->pc = 0x2A8ED4u;
        goto label_2a8ed4;
    }
    ctx->pc = 0x2A8ECCu;
    {
        const bool branch_taken_0x2a8ecc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a8ecc) {
            ctx->pc = 0x2A8EE4u;
            goto label_2a8ee4;
        }
    }
    ctx->pc = 0x2A8ED4u;
label_2a8ed4:
    // 0x2a8ed4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2a8ed8:
    // 0x2a8ed8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2a8edc:
    // 0x2a8edc: 0x844200f0  lh          $v0, 0xF0($v0)
    ctx->pc = 0x2a8edcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
label_2a8ee0:
    // 0x2a8ee0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2a8ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2a8ee4:
    // 0x2a8ee4: 0x0  nop
    ctx->pc = 0x2a8ee4u;
    // NOP
label_2a8ee8:
    // 0x2a8ee8: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2a8ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2a8eec:
    // 0x2a8eec: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2a8ef0:
    if (ctx->pc == 0x2A8EF0u) {
        ctx->pc = 0x2A8EF0u;
            // 0x2a8ef0: 0x24a60002  addiu       $a2, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x2A8EF4u;
        goto label_2a8ef4;
    }
    ctx->pc = 0x2A8EECu;
    {
        const bool branch_taken_0x2a8eec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8EECu;
            // 0x2a8ef0: 0x24a60002  addiu       $a2, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8eec) {
            ctx->pc = 0x2A8F04u;
            goto label_2a8f04;
        }
    }
    ctx->pc = 0x2A8EF4u;
label_2a8ef4:
    // 0x2a8ef4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2a8ef8:
    // 0x2a8ef8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2a8efc:
    // 0x2a8efc: 0x844200f0  lh          $v0, 0xF0($v0)
    ctx->pc = 0x2a8efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
label_2a8f00:
    // 0x2a8f00: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x2a8f00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_2a8f04:
    // 0x2a8f04: 0x0  nop
    ctx->pc = 0x2a8f04u;
    // NOP
label_2a8f08:
    // 0x2a8f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a8f0c:
    // 0x2a8f0c: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x2a8f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2a8f10:
    // 0x2a8f10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2a8f14:
    if (ctx->pc == 0x2A8F14u) {
        ctx->pc = 0x2A8F14u;
            // 0x2a8f14: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2A8F18u;
        goto label_2a8f18;
    }
    ctx->pc = 0x2A8F10u;
    {
        const bool branch_taken_0x2a8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F10u;
            // 0x2a8f14: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f10) {
            ctx->pc = 0x2A8EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8ec0;
        }
    }
    ctx->pc = 0x2A8F18u;
label_2a8f18:
    // 0x2a8f18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f1c:
    // 0x2a8f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f20:
    // 0x2a8f20: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x2a8f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_2a8f24:
    // 0x2a8f24: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2a8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2a8f28:
    // 0x2a8f28: 0x84c30d4c  lh          $v1, 0xD4C($a2)
    ctx->pc = 0x2a8f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3404)));
label_2a8f2c:
    // 0x2a8f2c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2a8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2a8f30:
    // 0x2a8f30: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a8f34:
    // 0x2a8f34: 0xa4e32a40  sh          $v1, 0x2A40($a3)
    ctx->pc = 0x2a8f34u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10816), (uint16_t)GPR_U32(ctx, 3));
label_2a8f38:
    // 0x2a8f38: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x2a8f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_2a8f3c:
    // 0x2a8f3c: 0x84c30d5c  lh          $v1, 0xD5C($a2)
    ctx->pc = 0x2a8f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3420)));
label_2a8f40:
    // 0x2a8f40: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2a8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_2a8f44:
    // 0x2a8f44: 0xa4e32a50  sh          $v1, 0x2A50($a3)
    ctx->pc = 0x2a8f44u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10832), (uint16_t)GPR_U32(ctx, 3));
label_2a8f48:
    // 0x2a8f48: 0x84c30d6c  lh          $v1, 0xD6C($a2)
    ctx->pc = 0x2a8f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3436)));
label_2a8f4c:
    // 0x2a8f4c: 0xa4e32a60  sh          $v1, 0x2A60($a3)
    ctx->pc = 0x2a8f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10848), (uint16_t)GPR_U32(ctx, 3));
label_2a8f50:
    // 0x2a8f50: 0x84c30d7c  lh          $v1, 0xD7C($a2)
    ctx->pc = 0x2a8f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3452)));
label_2a8f54:
    // 0x2a8f54: 0xa4e32a70  sh          $v1, 0x2A70($a3)
    ctx->pc = 0x2a8f54u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10864), (uint16_t)GPR_U32(ctx, 3));
label_2a8f58:
    // 0x2a8f58: 0x84c30d8c  lh          $v1, 0xD8C($a2)
    ctx->pc = 0x2a8f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3468)));
label_2a8f5c:
    // 0x2a8f5c: 0xa4e32a80  sh          $v1, 0x2A80($a3)
    ctx->pc = 0x2a8f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10880), (uint16_t)GPR_U32(ctx, 3));
label_2a8f60:
    // 0x2a8f60: 0x84c30d9c  lh          $v1, 0xD9C($a2)
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3484)));
label_2a8f64:
    // 0x2a8f64: 0xa4e32a90  sh          $v1, 0x2A90($a3)
    ctx->pc = 0x2a8f64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10896), (uint16_t)GPR_U32(ctx, 3));
label_2a8f68:
    // 0x2a8f68: 0x84c30dac  lh          $v1, 0xDAC($a2)
    ctx->pc = 0x2a8f68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3500)));
label_2a8f6c:
    // 0x2a8f6c: 0xa4e32aa0  sh          $v1, 0x2AA0($a3)
    ctx->pc = 0x2a8f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10912), (uint16_t)GPR_U32(ctx, 3));
label_2a8f70:
    // 0x2a8f70: 0x84c30dbc  lh          $v1, 0xDBC($a2)
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 3516)));
label_2a8f74:
    // 0x2a8f74: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2a8f78:
    if (ctx->pc == 0x2A8F78u) {
        ctx->pc = 0x2A8F78u;
            // 0x2a8f78: 0xa4e32ab0  sh          $v1, 0x2AB0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 10928), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A8F7Cu;
        goto label_2a8f7c;
    }
    ctx->pc = 0x2A8F74u;
    {
        const bool branch_taken_0x2a8f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F74u;
            // 0x2a8f78: 0xa4e32ab0  sh          $v1, 0x2AB0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 10928), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f74) {
            ctx->pc = 0x2A8F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8f20;
        }
    }
    ctx->pc = 0x2A8F7Cu;
label_2a8f7c:
    // 0x2a8f7c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2a8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2a8f80:
    // 0x2a8f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f84:
    // 0x2a8f84: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2a8f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2a8f88:
    // 0x2a8f88: 0x24504c40  addiu       $s0, $v0, 0x4C40
    ctx->pc = 0x2a8f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19520));
label_2a8f8c:
    // 0x2a8f8c: 0xc049c86  jal         func_127218
label_2a8f90:
    if (ctx->pc == 0x2A8F90u) {
        ctx->pc = 0x2A8F90u;
            // 0x2a8f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F94u;
        goto label_2a8f94;
    }
    ctx->pc = 0x2A8F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A8F94u);
    ctx->pc = 0x2A8F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F8Cu;
            // 0x2a8f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8F94u; }
        if (ctx->pc != 0x2A8F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8F94u; }
        if (ctx->pc != 0x2A8F94u) { return; }
    }
    ctx->pc = 0x2A8F94u;
label_2a8f94:
    // 0x2a8f94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a8f94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f98:
    // 0x2a8f98: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2a8f9c:
    if (ctx->pc == 0x2A8F9Cu) {
        ctx->pc = 0x2A8F9Cu;
            // 0x2a8f9c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FA0u;
        goto label_2a8fa0;
    }
    ctx->pc = 0x2A8F98u;
    {
        const bool branch_taken_0x2a8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8F98u;
            // 0x2a8f9c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f98) {
            ctx->pc = 0x2A9088u;
            goto label_2a9088;
        }
    }
    ctx->pc = 0x2A8FA0u;
label_2a8fa0:
    // 0x2a8fa0: 0x8c710f54  lw          $s1, 0xF54($v1)
    ctx->pc = 0x2a8fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3924)));
label_2a8fa4:
    // 0x2a8fa4: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_2a8fa8:
    if (ctx->pc == 0x2A8FA8u) {
        ctx->pc = 0x2A8FACu;
        goto label_2a8fac;
    }
    ctx->pc = 0x2A8FA4u;
    {
        const bool branch_taken_0x2a8fa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8fa4) {
            ctx->pc = 0x2A907Cu;
            goto label_2a907c;
        }
    }
    ctx->pc = 0x2A8FACu;
label_2a8fac:
    // 0x2a8fac: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2a8facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2a8fb0:
    // 0x2a8fb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a8fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fb4:
    // 0x2a8fb4: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x2a8fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_2a8fb8:
    // 0x2a8fb8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2a8fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2a8fbc:
    // 0x2a8fbc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a8fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a8fc0:
    // 0x2a8fc0: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x2a8fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2a8fc4:
    // 0x2a8fc4: 0xc06c408  jal         func_1B1020
label_2a8fc8:
    if (ctx->pc == 0x2A8FC8u) {
        ctx->pc = 0x2A8FC8u;
            // 0x2a8fc8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A8FCCu;
        goto label_2a8fcc;
    }
    ctx->pc = 0x2A8FC4u;
    SET_GPR_U32(ctx, 31, 0x2A8FCCu);
    ctx->pc = 0x2A8FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FC4u;
            // 0x2a8fc8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (runtime->hasFunction(0x1B1020u)) {
        auto targetFn = runtime->lookupFunction(0x1B1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FCCu; }
        if (ctx->pc != 0x2A8FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditPos__8CEditMapFPfPf_0x1b1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FCCu; }
        if (ctx->pc != 0x2A8FCCu) { return; }
    }
    ctx->pc = 0x2A8FCCu;
label_2a8fcc:
    // 0x2a8fcc: 0xc0a248c  jal         func_289230
label_2a8fd0:
    if (ctx->pc == 0x2A8FD0u) {
        ctx->pc = 0x2A8FD0u;
            // 0x2a8fd0: 0xc7ac0394  lwc1        $f12, 0x394($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A8FD4u;
        goto label_2a8fd4;
    }
    ctx->pc = 0x2A8FCCu;
    SET_GPR_U32(ctx, 31, 0x2A8FD4u);
    ctx->pc = 0x2A8FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FCCu;
            // 0x2a8fd0: 0xc7ac0394  lwc1        $f12, 0x394($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FD4u; }
        if (ctx->pc != 0x2A8FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FD4u; }
        if (ctx->pc != 0x2A8FD4u) { return; }
    }
    ctx->pc = 0x2A8FD4u;
label_2a8fd4:
    // 0x2a8fd4: 0xc7ac0398  lwc1        $f12, 0x398($sp)
    ctx->pc = 0x2a8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8fd8:
    // 0x2a8fd8: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x2a8fd8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
label_2a8fdc:
    // 0x2a8fdc: 0xc0a248c  jal         func_289230
label_2a8fe0:
    if (ctx->pc == 0x2A8FE0u) {
        ctx->pc = 0x2A8FE0u;
            // 0x2a8fe0: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->pc = 0x2A8FE4u;
        goto label_2a8fe4;
    }
    ctx->pc = 0x2A8FDCu;
    SET_GPR_U32(ctx, 31, 0x2A8FE4u);
    ctx->pc = 0x2A8FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FDCu;
            // 0x2a8fe0: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FE4u; }
        if (ctx->pc != 0x2A8FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FE4u; }
        if (ctx->pc != 0x2A8FE4u) { return; }
    }
    ctx->pc = 0x2A8FE4u;
label_2a8fe4:
    // 0x2a8fe4: 0xc7ac0390  lwc1        $f12, 0x390($sp)
    ctx->pc = 0x2a8fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8fe8:
    // 0x2a8fe8: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x2a8fe8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
label_2a8fec:
    // 0x2a8fec: 0xc0a248c  jal         func_289230
label_2a8ff0:
    if (ctx->pc == 0x2A8FF0u) {
        ctx->pc = 0x2A8FF0u;
            // 0x2a8ff0: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->pc = 0x2A8FF4u;
        goto label_2a8ff4;
    }
    ctx->pc = 0x2A8FECu;
    SET_GPR_U32(ctx, 31, 0x2A8FF4u);
    ctx->pc = 0x2A8FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8FECu;
            // 0x2a8ff0: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FF4u; }
        if (ctx->pc != 0x2A8FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8FF4u; }
        if (ctx->pc != 0x2A8FF4u) { return; }
    }
    ctx->pc = 0x2A8FF4u;
label_2a8ff4:
    // 0x2a8ff4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2a8ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2a8ff8:
    // 0x2a8ff8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a8ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ffc:
    // 0x2a8ffc: 0xa6170004  sh          $s7, 0x4($s0)
    ctx->pc = 0x2a8ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 23));
label_2a9000:
    // 0x2a9000: 0xa6130006  sh          $s3, 0x6($s0)
    ctx->pc = 0x2a9000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 19));
label_2a9004:
    // 0x2a9004: 0x10000015  b           . + 4 + (0x15 << 2)
label_2a9008:
    if (ctx->pc == 0x2A9008u) {
        ctx->pc = 0x2A9008u;
            // 0x2a9008: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x2A900Cu;
        goto label_2a900c;
    }
    ctx->pc = 0x2A9004u;
    {
        const bool branch_taken_0x2a9004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9004u;
            // 0x2a9008: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9004) {
            ctx->pc = 0x2A905Cu;
            goto label_2a905c;
        }
    }
    ctx->pc = 0x2A900Cu;
label_2a900c:
    // 0x2a900c: 0x0  nop
    ctx->pc = 0x2a900cu;
    // NOP
label_2a9010:
    // 0x2a9010: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a9014:
    if (ctx->pc == 0x2A9014u) {
        ctx->pc = 0x2A9014u;
            // 0x2a9014: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9018u;
        goto label_2a9018;
    }
    ctx->pc = 0x2A9010u;
    {
        const bool branch_taken_0x2a9010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9010u;
            // 0x2a9014: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9010) {
            ctx->pc = 0x2A9048u;
            goto label_2a9048;
        }
    }
    ctx->pc = 0x2A9018u;
label_2a9018:
    // 0x2a9018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a901c:
    // 0x2a901c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a901cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9020:
    // 0x2a9020: 0xc0a5e58  jal         func_297960
label_2a9024:
    if (ctx->pc == 0x2A9024u) {
        ctx->pc = 0x2A9024u;
            // 0x2a9024: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9028u;
        goto label_2a9028;
    }
    ctx->pc = 0x2A9020u;
    SET_GPR_U32(ctx, 31, 0x2A9028u);
    ctx->pc = 0x2A9024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9020u;
            // 0x2a9024: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297960u;
    if (runtime->hasFunction(0x297960u)) {
        auto targetFn = runtime->lookupFunction(0x297960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9028u; }
        if (ctx->pc != 0x2A9028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFast__9CEditGridFii_0x297960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9028u; }
        if (ctx->pc != 0x2A9028u) { return; }
    }
    ctx->pc = 0x2A9028u;
label_2a9028:
    // 0x2a9028: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a902c:
    // 0x2a902c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2a9030:
    if (ctx->pc == 0x2A9030u) {
        ctx->pc = 0x2A9034u;
        goto label_2a9034;
    }
    ctx->pc = 0x2A902Cu;
    {
        const bool branch_taken_0x2a902c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a902c) {
            ctx->pc = 0x2A9040u;
            goto label_2a9040;
        }
    }
    ctx->pc = 0x2A9034u;
label_2a9034:
    // 0x2a9034: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2a9034u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2a9038:
    // 0x2a9038: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2a9038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2a903c:
    // 0x2a903c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2a903cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2a9040:
    // 0x2a9040: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a9044:
    // 0x2a9044: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a9044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a9048:
    // 0x2a9048: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a904c:
    // 0x2a904c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2a904cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9050:
    // 0x2a9050: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_2a9054:
    if (ctx->pc == 0x2A9054u) {
        ctx->pc = 0x2A9058u;
        goto label_2a9058;
    }
    ctx->pc = 0x2A9050u;
    {
        const bool branch_taken_0x2a9050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9050) {
            ctx->pc = 0x2A9018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9018;
        }
    }
    ctx->pc = 0x2A9058u;
label_2a9058:
    // 0x2a9058: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a9058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a905c:
    // 0x2a905c: 0x0  nop
    ctx->pc = 0x2a905cu;
    // NOP
label_2a9060:
    // 0x2a9060: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9064:
    // 0x2a9064: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2a9064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9068:
    // 0x2a9068: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_2a906c:
    if (ctx->pc == 0x2A906Cu) {
        ctx->pc = 0x2A906Cu;
            // 0x2a906c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2A9070u;
        goto label_2a9070;
    }
    ctx->pc = 0x2A9068u;
    {
        const bool branch_taken_0x2a9068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A906Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9068u;
            // 0x2a906c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9068) {
            ctx->pc = 0x2A900Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a900c;
        }
    }
    ctx->pc = 0x2A9070u;
label_2a9070:
    // 0x2a9070: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2a9074:
    if (ctx->pc == 0x2A9074u) {
        ctx->pc = 0x2A9078u;
        goto label_2a9078;
    }
    ctx->pc = 0x2A9070u;
    {
        const bool branch_taken_0x2a9070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9070) {
            ctx->pc = 0x2A907Cu;
            goto label_2a907c;
        }
    }
    ctx->pc = 0x2A9078u;
label_2a9078:
    // 0x2a9078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a907c:
    // 0x2a907c: 0x0  nop
    ctx->pc = 0x2a907cu;
    // NOP
label_2a9080:
    // 0x2a9080: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2a9080u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2a9084:
    // 0x2a9084: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a9088:
    // 0x2a9088: 0x8ea30f50  lw          $v1, 0xF50($s5)
    ctx->pc = 0x2a9088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3920)));
label_2a908c:
    // 0x2a908c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2a908cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9090:
    // 0x2a9090: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_2a9094:
    if (ctx->pc == 0x2A9094u) {
        ctx->pc = 0x2A9094u;
            // 0x2a9094: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->pc = 0x2A9098u;
        goto label_2a9098;
    }
    ctx->pc = 0x2A9090u;
    {
        const bool branch_taken_0x2a9090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9090u;
            // 0x2a9094: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9090) {
            ctx->pc = 0x2A8FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8fa0;
        }
    }
    ctx->pc = 0x2A9098u;
label_2a9098:
    // 0x2a9098: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2a9098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2a909c:
    // 0x2a909c: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x2a909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
label_2a90a0:
    // 0x2a90a0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2a90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2a90a4:
    // 0x2a90a4: 0x28630400  slti        $v1, $v1, 0x400
    ctx->pc = 0x2a90a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
label_2a90a8:
    // 0x2a90a8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2a90ac:
    if (ctx->pc == 0x2A90ACu) {
        ctx->pc = 0x2A90ACu;
            // 0x2a90ac: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2A90B0u;
        goto label_2a90b0;
    }
    ctx->pc = 0x2A90A8u;
    {
        const bool branch_taken_0x2a90a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A90ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A90A8u;
            // 0x2a90ac: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90a8) {
            ctx->pc = 0x2A90DCu;
            goto label_2a90dc;
        }
    }
    ctx->pc = 0x2A90B0u;
label_2a90b0:
    // 0x2a90b0: 0xc04a0d2  jal         func_128348
label_2a90b4:
    if (ctx->pc == 0x2A90B4u) {
        ctx->pc = 0x2A90B4u;
            // 0x2a90b4: 0x2484e630  addiu       $a0, $a0, -0x19D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960688));
        ctx->pc = 0x2A90B8u;
        goto label_2a90b8;
    }
    ctx->pc = 0x2A90B0u;
    SET_GPR_U32(ctx, 31, 0x2A90B8u);
    ctx->pc = 0x2A90B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A90B0u;
            // 0x2a90b4: 0x2484e630  addiu       $a0, $a0, -0x19D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90B8u; }
        if (ctx->pc != 0x2A90B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90B8u; }
        if (ctx->pc != 0x2A90B8u) { return; }
    }
    ctx->pc = 0x2A90B8u;
label_2a90b8:
    // 0x2a90b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a90b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a90bc:
    // 0x2a90bc: 0xc040cc0  jal         func_103300
label_2a90c0:
    if (ctx->pc == 0x2A90C0u) {
        ctx->pc = 0x2A90C0u;
            // 0x2a90c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A90C4u;
        goto label_2a90c4;
    }
    ctx->pc = 0x2A90BCu;
    SET_GPR_U32(ctx, 31, 0x2A90C4u);
    ctx->pc = 0x2A90C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A90BCu;
            // 0x2a90c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90C4u; }
        if (ctx->pc != 0x2A90C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90C4u; }
        if (ctx->pc != 0x2A90C4u) { return; }
    }
    ctx->pc = 0x2A90C4u;
label_2a90c4:
    // 0x2a90c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a90c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a90c8:
    // 0x2a90c8: 0x2a03012c  slti        $v1, $s0, 0x12C
    ctx->pc = 0x2a90c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)300) ? 1 : 0);
label_2a90cc:
    // 0x2a90cc: 0x0  nop
    ctx->pc = 0x2a90ccu;
    // NOP
label_2a90d0:
    // 0x2a90d0: 0x0  nop
    ctx->pc = 0x2a90d0u;
    // NOP
label_2a90d4:
    // 0x2a90d4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2a90d8:
    if (ctx->pc == 0x2A90D8u) {
        ctx->pc = 0x2A90DCu;
        goto label_2a90dc;
    }
    ctx->pc = 0x2A90D4u;
    {
        const bool branch_taken_0x2a90d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a90d4) {
            ctx->pc = 0x2A90BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a90bc;
        }
    }
    ctx->pc = 0x2A90DCu;
label_2a90dc:
    // 0x2a90dc: 0x0  nop
    ctx->pc = 0x2a90dcu;
    // NOP
label_2a90e0:
    // 0x2a90e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a90e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a90e4:
    // 0x2a90e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a90e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a90e8:
    // 0x2a90e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a90e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a90ec:
    // 0x2a90ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a90ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a90f0:
    // 0x2a90f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a90f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a90f4:
    // 0x2a90f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a90f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a90f8:
    // 0x2a90f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a90f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a90fc:
    // 0x2a90fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a90fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9100:
    // 0x2a9100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9104:
    // 0x2a9104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9108:
    // 0x2a9108: 0x3e00008  jr          $ra
label_2a910c:
    if (ctx->pc == 0x2A910Cu) {
        ctx->pc = 0x2A910Cu;
            // 0x2a910c: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x2A9110u;
        goto label_fallthrough_0x2a9108;
    }
    ctx->pc = 0x2A9108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9108u;
            // 0x2a910c: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a9108:
    ctx->pc = 0x2A9110u;
}
