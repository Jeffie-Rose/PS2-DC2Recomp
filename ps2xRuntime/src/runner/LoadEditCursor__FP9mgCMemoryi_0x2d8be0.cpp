#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEditCursor__FP9mgCMemoryi
// Address: 0x2d8be0 - 0x2d9194
void LoadEditCursor__FP9mgCMemoryi_0x2d8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEditCursor__FP9mgCMemoryi_0x2d8be0");
#endif

    switch (ctx->pc) {
        case 0x2d8be0u: goto label_2d8be0;
        case 0x2d8be4u: goto label_2d8be4;
        case 0x2d8be8u: goto label_2d8be8;
        case 0x2d8becu: goto label_2d8bec;
        case 0x2d8bf0u: goto label_2d8bf0;
        case 0x2d8bf4u: goto label_2d8bf4;
        case 0x2d8bf8u: goto label_2d8bf8;
        case 0x2d8bfcu: goto label_2d8bfc;
        case 0x2d8c00u: goto label_2d8c00;
        case 0x2d8c04u: goto label_2d8c04;
        case 0x2d8c08u: goto label_2d8c08;
        case 0x2d8c0cu: goto label_2d8c0c;
        case 0x2d8c10u: goto label_2d8c10;
        case 0x2d8c14u: goto label_2d8c14;
        case 0x2d8c18u: goto label_2d8c18;
        case 0x2d8c1cu: goto label_2d8c1c;
        case 0x2d8c20u: goto label_2d8c20;
        case 0x2d8c24u: goto label_2d8c24;
        case 0x2d8c28u: goto label_2d8c28;
        case 0x2d8c2cu: goto label_2d8c2c;
        case 0x2d8c30u: goto label_2d8c30;
        case 0x2d8c34u: goto label_2d8c34;
        case 0x2d8c38u: goto label_2d8c38;
        case 0x2d8c3cu: goto label_2d8c3c;
        case 0x2d8c40u: goto label_2d8c40;
        case 0x2d8c44u: goto label_2d8c44;
        case 0x2d8c48u: goto label_2d8c48;
        case 0x2d8c4cu: goto label_2d8c4c;
        case 0x2d8c50u: goto label_2d8c50;
        case 0x2d8c54u: goto label_2d8c54;
        case 0x2d8c58u: goto label_2d8c58;
        case 0x2d8c5cu: goto label_2d8c5c;
        case 0x2d8c60u: goto label_2d8c60;
        case 0x2d8c64u: goto label_2d8c64;
        case 0x2d8c68u: goto label_2d8c68;
        case 0x2d8c6cu: goto label_2d8c6c;
        case 0x2d8c70u: goto label_2d8c70;
        case 0x2d8c74u: goto label_2d8c74;
        case 0x2d8c78u: goto label_2d8c78;
        case 0x2d8c7cu: goto label_2d8c7c;
        case 0x2d8c80u: goto label_2d8c80;
        case 0x2d8c84u: goto label_2d8c84;
        case 0x2d8c88u: goto label_2d8c88;
        case 0x2d8c8cu: goto label_2d8c8c;
        case 0x2d8c90u: goto label_2d8c90;
        case 0x2d8c94u: goto label_2d8c94;
        case 0x2d8c98u: goto label_2d8c98;
        case 0x2d8c9cu: goto label_2d8c9c;
        case 0x2d8ca0u: goto label_2d8ca0;
        case 0x2d8ca4u: goto label_2d8ca4;
        case 0x2d8ca8u: goto label_2d8ca8;
        case 0x2d8cacu: goto label_2d8cac;
        case 0x2d8cb0u: goto label_2d8cb0;
        case 0x2d8cb4u: goto label_2d8cb4;
        case 0x2d8cb8u: goto label_2d8cb8;
        case 0x2d8cbcu: goto label_2d8cbc;
        case 0x2d8cc0u: goto label_2d8cc0;
        case 0x2d8cc4u: goto label_2d8cc4;
        case 0x2d8cc8u: goto label_2d8cc8;
        case 0x2d8cccu: goto label_2d8ccc;
        case 0x2d8cd0u: goto label_2d8cd0;
        case 0x2d8cd4u: goto label_2d8cd4;
        case 0x2d8cd8u: goto label_2d8cd8;
        case 0x2d8cdcu: goto label_2d8cdc;
        case 0x2d8ce0u: goto label_2d8ce0;
        case 0x2d8ce4u: goto label_2d8ce4;
        case 0x2d8ce8u: goto label_2d8ce8;
        case 0x2d8cecu: goto label_2d8cec;
        case 0x2d8cf0u: goto label_2d8cf0;
        case 0x2d8cf4u: goto label_2d8cf4;
        case 0x2d8cf8u: goto label_2d8cf8;
        case 0x2d8cfcu: goto label_2d8cfc;
        case 0x2d8d00u: goto label_2d8d00;
        case 0x2d8d04u: goto label_2d8d04;
        case 0x2d8d08u: goto label_2d8d08;
        case 0x2d8d0cu: goto label_2d8d0c;
        case 0x2d8d10u: goto label_2d8d10;
        case 0x2d8d14u: goto label_2d8d14;
        case 0x2d8d18u: goto label_2d8d18;
        case 0x2d8d1cu: goto label_2d8d1c;
        case 0x2d8d20u: goto label_2d8d20;
        case 0x2d8d24u: goto label_2d8d24;
        case 0x2d8d28u: goto label_2d8d28;
        case 0x2d8d2cu: goto label_2d8d2c;
        case 0x2d8d30u: goto label_2d8d30;
        case 0x2d8d34u: goto label_2d8d34;
        case 0x2d8d38u: goto label_2d8d38;
        case 0x2d8d3cu: goto label_2d8d3c;
        case 0x2d8d40u: goto label_2d8d40;
        case 0x2d8d44u: goto label_2d8d44;
        case 0x2d8d48u: goto label_2d8d48;
        case 0x2d8d4cu: goto label_2d8d4c;
        case 0x2d8d50u: goto label_2d8d50;
        case 0x2d8d54u: goto label_2d8d54;
        case 0x2d8d58u: goto label_2d8d58;
        case 0x2d8d5cu: goto label_2d8d5c;
        case 0x2d8d60u: goto label_2d8d60;
        case 0x2d8d64u: goto label_2d8d64;
        case 0x2d8d68u: goto label_2d8d68;
        case 0x2d8d6cu: goto label_2d8d6c;
        case 0x2d8d70u: goto label_2d8d70;
        case 0x2d8d74u: goto label_2d8d74;
        case 0x2d8d78u: goto label_2d8d78;
        case 0x2d8d7cu: goto label_2d8d7c;
        case 0x2d8d80u: goto label_2d8d80;
        case 0x2d8d84u: goto label_2d8d84;
        case 0x2d8d88u: goto label_2d8d88;
        case 0x2d8d8cu: goto label_2d8d8c;
        case 0x2d8d90u: goto label_2d8d90;
        case 0x2d8d94u: goto label_2d8d94;
        case 0x2d8d98u: goto label_2d8d98;
        case 0x2d8d9cu: goto label_2d8d9c;
        case 0x2d8da0u: goto label_2d8da0;
        case 0x2d8da4u: goto label_2d8da4;
        case 0x2d8da8u: goto label_2d8da8;
        case 0x2d8dacu: goto label_2d8dac;
        case 0x2d8db0u: goto label_2d8db0;
        case 0x2d8db4u: goto label_2d8db4;
        case 0x2d8db8u: goto label_2d8db8;
        case 0x2d8dbcu: goto label_2d8dbc;
        case 0x2d8dc0u: goto label_2d8dc0;
        case 0x2d8dc4u: goto label_2d8dc4;
        case 0x2d8dc8u: goto label_2d8dc8;
        case 0x2d8dccu: goto label_2d8dcc;
        case 0x2d8dd0u: goto label_2d8dd0;
        case 0x2d8dd4u: goto label_2d8dd4;
        case 0x2d8dd8u: goto label_2d8dd8;
        case 0x2d8ddcu: goto label_2d8ddc;
        case 0x2d8de0u: goto label_2d8de0;
        case 0x2d8de4u: goto label_2d8de4;
        case 0x2d8de8u: goto label_2d8de8;
        case 0x2d8decu: goto label_2d8dec;
        case 0x2d8df0u: goto label_2d8df0;
        case 0x2d8df4u: goto label_2d8df4;
        case 0x2d8df8u: goto label_2d8df8;
        case 0x2d8dfcu: goto label_2d8dfc;
        case 0x2d8e00u: goto label_2d8e00;
        case 0x2d8e04u: goto label_2d8e04;
        case 0x2d8e08u: goto label_2d8e08;
        case 0x2d8e0cu: goto label_2d8e0c;
        case 0x2d8e10u: goto label_2d8e10;
        case 0x2d8e14u: goto label_2d8e14;
        case 0x2d8e18u: goto label_2d8e18;
        case 0x2d8e1cu: goto label_2d8e1c;
        case 0x2d8e20u: goto label_2d8e20;
        case 0x2d8e24u: goto label_2d8e24;
        case 0x2d8e28u: goto label_2d8e28;
        case 0x2d8e2cu: goto label_2d8e2c;
        case 0x2d8e30u: goto label_2d8e30;
        case 0x2d8e34u: goto label_2d8e34;
        case 0x2d8e38u: goto label_2d8e38;
        case 0x2d8e3cu: goto label_2d8e3c;
        case 0x2d8e40u: goto label_2d8e40;
        case 0x2d8e44u: goto label_2d8e44;
        case 0x2d8e48u: goto label_2d8e48;
        case 0x2d8e4cu: goto label_2d8e4c;
        case 0x2d8e50u: goto label_2d8e50;
        case 0x2d8e54u: goto label_2d8e54;
        case 0x2d8e58u: goto label_2d8e58;
        case 0x2d8e5cu: goto label_2d8e5c;
        case 0x2d8e60u: goto label_2d8e60;
        case 0x2d8e64u: goto label_2d8e64;
        case 0x2d8e68u: goto label_2d8e68;
        case 0x2d8e6cu: goto label_2d8e6c;
        case 0x2d8e70u: goto label_2d8e70;
        case 0x2d8e74u: goto label_2d8e74;
        case 0x2d8e78u: goto label_2d8e78;
        case 0x2d8e7cu: goto label_2d8e7c;
        case 0x2d8e80u: goto label_2d8e80;
        case 0x2d8e84u: goto label_2d8e84;
        case 0x2d8e88u: goto label_2d8e88;
        case 0x2d8e8cu: goto label_2d8e8c;
        case 0x2d8e90u: goto label_2d8e90;
        case 0x2d8e94u: goto label_2d8e94;
        case 0x2d8e98u: goto label_2d8e98;
        case 0x2d8e9cu: goto label_2d8e9c;
        case 0x2d8ea0u: goto label_2d8ea0;
        case 0x2d8ea4u: goto label_2d8ea4;
        case 0x2d8ea8u: goto label_2d8ea8;
        case 0x2d8eacu: goto label_2d8eac;
        case 0x2d8eb0u: goto label_2d8eb0;
        case 0x2d8eb4u: goto label_2d8eb4;
        case 0x2d8eb8u: goto label_2d8eb8;
        case 0x2d8ebcu: goto label_2d8ebc;
        case 0x2d8ec0u: goto label_2d8ec0;
        case 0x2d8ec4u: goto label_2d8ec4;
        case 0x2d8ec8u: goto label_2d8ec8;
        case 0x2d8eccu: goto label_2d8ecc;
        case 0x2d8ed0u: goto label_2d8ed0;
        case 0x2d8ed4u: goto label_2d8ed4;
        case 0x2d8ed8u: goto label_2d8ed8;
        case 0x2d8edcu: goto label_2d8edc;
        case 0x2d8ee0u: goto label_2d8ee0;
        case 0x2d8ee4u: goto label_2d8ee4;
        case 0x2d8ee8u: goto label_2d8ee8;
        case 0x2d8eecu: goto label_2d8eec;
        case 0x2d8ef0u: goto label_2d8ef0;
        case 0x2d8ef4u: goto label_2d8ef4;
        case 0x2d8ef8u: goto label_2d8ef8;
        case 0x2d8efcu: goto label_2d8efc;
        case 0x2d8f00u: goto label_2d8f00;
        case 0x2d8f04u: goto label_2d8f04;
        case 0x2d8f08u: goto label_2d8f08;
        case 0x2d8f0cu: goto label_2d8f0c;
        case 0x2d8f10u: goto label_2d8f10;
        case 0x2d8f14u: goto label_2d8f14;
        case 0x2d8f18u: goto label_2d8f18;
        case 0x2d8f1cu: goto label_2d8f1c;
        case 0x2d8f20u: goto label_2d8f20;
        case 0x2d8f24u: goto label_2d8f24;
        case 0x2d8f28u: goto label_2d8f28;
        case 0x2d8f2cu: goto label_2d8f2c;
        case 0x2d8f30u: goto label_2d8f30;
        case 0x2d8f34u: goto label_2d8f34;
        case 0x2d8f38u: goto label_2d8f38;
        case 0x2d8f3cu: goto label_2d8f3c;
        case 0x2d8f40u: goto label_2d8f40;
        case 0x2d8f44u: goto label_2d8f44;
        case 0x2d8f48u: goto label_2d8f48;
        case 0x2d8f4cu: goto label_2d8f4c;
        case 0x2d8f50u: goto label_2d8f50;
        case 0x2d8f54u: goto label_2d8f54;
        case 0x2d8f58u: goto label_2d8f58;
        case 0x2d8f5cu: goto label_2d8f5c;
        case 0x2d8f60u: goto label_2d8f60;
        case 0x2d8f64u: goto label_2d8f64;
        case 0x2d8f68u: goto label_2d8f68;
        case 0x2d8f6cu: goto label_2d8f6c;
        case 0x2d8f70u: goto label_2d8f70;
        case 0x2d8f74u: goto label_2d8f74;
        case 0x2d8f78u: goto label_2d8f78;
        case 0x2d8f7cu: goto label_2d8f7c;
        case 0x2d8f80u: goto label_2d8f80;
        case 0x2d8f84u: goto label_2d8f84;
        case 0x2d8f88u: goto label_2d8f88;
        case 0x2d8f8cu: goto label_2d8f8c;
        case 0x2d8f90u: goto label_2d8f90;
        case 0x2d8f94u: goto label_2d8f94;
        case 0x2d8f98u: goto label_2d8f98;
        case 0x2d8f9cu: goto label_2d8f9c;
        case 0x2d8fa0u: goto label_2d8fa0;
        case 0x2d8fa4u: goto label_2d8fa4;
        case 0x2d8fa8u: goto label_2d8fa8;
        case 0x2d8facu: goto label_2d8fac;
        case 0x2d8fb0u: goto label_2d8fb0;
        case 0x2d8fb4u: goto label_2d8fb4;
        case 0x2d8fb8u: goto label_2d8fb8;
        case 0x2d8fbcu: goto label_2d8fbc;
        case 0x2d8fc0u: goto label_2d8fc0;
        case 0x2d8fc4u: goto label_2d8fc4;
        case 0x2d8fc8u: goto label_2d8fc8;
        case 0x2d8fccu: goto label_2d8fcc;
        case 0x2d8fd0u: goto label_2d8fd0;
        case 0x2d8fd4u: goto label_2d8fd4;
        case 0x2d8fd8u: goto label_2d8fd8;
        case 0x2d8fdcu: goto label_2d8fdc;
        case 0x2d8fe0u: goto label_2d8fe0;
        case 0x2d8fe4u: goto label_2d8fe4;
        case 0x2d8fe8u: goto label_2d8fe8;
        case 0x2d8fecu: goto label_2d8fec;
        case 0x2d8ff0u: goto label_2d8ff0;
        case 0x2d8ff4u: goto label_2d8ff4;
        case 0x2d8ff8u: goto label_2d8ff8;
        case 0x2d8ffcu: goto label_2d8ffc;
        case 0x2d9000u: goto label_2d9000;
        case 0x2d9004u: goto label_2d9004;
        case 0x2d9008u: goto label_2d9008;
        case 0x2d900cu: goto label_2d900c;
        case 0x2d9010u: goto label_2d9010;
        case 0x2d9014u: goto label_2d9014;
        case 0x2d9018u: goto label_2d9018;
        case 0x2d901cu: goto label_2d901c;
        case 0x2d9020u: goto label_2d9020;
        case 0x2d9024u: goto label_2d9024;
        case 0x2d9028u: goto label_2d9028;
        case 0x2d902cu: goto label_2d902c;
        case 0x2d9030u: goto label_2d9030;
        case 0x2d9034u: goto label_2d9034;
        case 0x2d9038u: goto label_2d9038;
        case 0x2d903cu: goto label_2d903c;
        case 0x2d9040u: goto label_2d9040;
        case 0x2d9044u: goto label_2d9044;
        case 0x2d9048u: goto label_2d9048;
        case 0x2d904cu: goto label_2d904c;
        case 0x2d9050u: goto label_2d9050;
        case 0x2d9054u: goto label_2d9054;
        case 0x2d9058u: goto label_2d9058;
        case 0x2d905cu: goto label_2d905c;
        case 0x2d9060u: goto label_2d9060;
        case 0x2d9064u: goto label_2d9064;
        case 0x2d9068u: goto label_2d9068;
        case 0x2d906cu: goto label_2d906c;
        case 0x2d9070u: goto label_2d9070;
        case 0x2d9074u: goto label_2d9074;
        case 0x2d9078u: goto label_2d9078;
        case 0x2d907cu: goto label_2d907c;
        case 0x2d9080u: goto label_2d9080;
        case 0x2d9084u: goto label_2d9084;
        case 0x2d9088u: goto label_2d9088;
        case 0x2d908cu: goto label_2d908c;
        case 0x2d9090u: goto label_2d9090;
        case 0x2d9094u: goto label_2d9094;
        case 0x2d9098u: goto label_2d9098;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90a0u: goto label_2d90a0;
        case 0x2d90a4u: goto label_2d90a4;
        case 0x2d90a8u: goto label_2d90a8;
        case 0x2d90acu: goto label_2d90ac;
        case 0x2d90b0u: goto label_2d90b0;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90b8u: goto label_2d90b8;
        case 0x2d90bcu: goto label_2d90bc;
        case 0x2d90c0u: goto label_2d90c0;
        case 0x2d90c4u: goto label_2d90c4;
        case 0x2d90c8u: goto label_2d90c8;
        case 0x2d90ccu: goto label_2d90cc;
        case 0x2d90d0u: goto label_2d90d0;
        case 0x2d90d4u: goto label_2d90d4;
        case 0x2d90d8u: goto label_2d90d8;
        case 0x2d90dcu: goto label_2d90dc;
        case 0x2d90e0u: goto label_2d90e0;
        case 0x2d90e4u: goto label_2d90e4;
        case 0x2d90e8u: goto label_2d90e8;
        case 0x2d90ecu: goto label_2d90ec;
        case 0x2d90f0u: goto label_2d90f0;
        case 0x2d90f4u: goto label_2d90f4;
        case 0x2d90f8u: goto label_2d90f8;
        case 0x2d90fcu: goto label_2d90fc;
        case 0x2d9100u: goto label_2d9100;
        case 0x2d9104u: goto label_2d9104;
        case 0x2d9108u: goto label_2d9108;
        case 0x2d910cu: goto label_2d910c;
        case 0x2d9110u: goto label_2d9110;
        case 0x2d9114u: goto label_2d9114;
        case 0x2d9118u: goto label_2d9118;
        case 0x2d911cu: goto label_2d911c;
        case 0x2d9120u: goto label_2d9120;
        case 0x2d9124u: goto label_2d9124;
        case 0x2d9128u: goto label_2d9128;
        case 0x2d912cu: goto label_2d912c;
        case 0x2d9130u: goto label_2d9130;
        case 0x2d9134u: goto label_2d9134;
        case 0x2d9138u: goto label_2d9138;
        case 0x2d913cu: goto label_2d913c;
        case 0x2d9140u: goto label_2d9140;
        case 0x2d9144u: goto label_2d9144;
        case 0x2d9148u: goto label_2d9148;
        case 0x2d914cu: goto label_2d914c;
        case 0x2d9150u: goto label_2d9150;
        case 0x2d9154u: goto label_2d9154;
        case 0x2d9158u: goto label_2d9158;
        case 0x2d915cu: goto label_2d915c;
        case 0x2d9160u: goto label_2d9160;
        case 0x2d9164u: goto label_2d9164;
        case 0x2d9168u: goto label_2d9168;
        case 0x2d916cu: goto label_2d916c;
        case 0x2d9170u: goto label_2d9170;
        case 0x2d9174u: goto label_2d9174;
        case 0x2d9178u: goto label_2d9178;
        case 0x2d917cu: goto label_2d917c;
        case 0x2d9180u: goto label_2d9180;
        case 0x2d9184u: goto label_2d9184;
        case 0x2d9188u: goto label_2d9188;
        case 0x2d918cu: goto label_2d918c;
        case 0x2d9190u: goto label_2d9190;
        default: break;
    }

    ctx->pc = 0x2d8be0u;

label_2d8be0:
    // 0x2d8be0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2d8be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_2d8be4:
    // 0x2d8be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8be8:
    // 0x2d8be8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2d8bec:
    // 0x2d8bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8bf0:
    // 0x2d8bf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d8bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2d8bf4:
    // 0x2d8bf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2d8bf8:
    // 0x2d8bf8: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x2d8bf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_2d8bfc:
    // 0x2d8bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d8bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d8c00:
    // 0x2d8c00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d8c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c04:
    // 0x2d8c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d8c08:
    // 0x2d8c08: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2d8c0c:
    // 0x2d8c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d8c10:
    // 0x2d8c10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c14:
    // 0x2d8c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8c18:
    // 0x2d8c18: 0x24840a58  addiu       $a0, $a0, 0xA58
    ctx->pc = 0x2d8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2648));
label_2d8c1c:
    // 0x2d8c1c: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x2d8c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_2d8c20:
    // 0x2d8c20: 0xc0524dc  jal         func_149370
label_2d8c24:
    if (ctx->pc == 0x2D8C24u) {
        ctx->pc = 0x2D8C24u;
            // 0x2d8c24: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->pc = 0x2D8C28u;
        goto label_2d8c28;
    }
    ctx->pc = 0x2D8C20u;
    SET_GPR_U32(ctx, 31, 0x2D8C28u);
    ctx->pc = 0x2D8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C20u;
            // 0x2d8c24: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C28u; }
        if (ctx->pc != 0x2D8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C28u; }
        if (ctx->pc != 0x2D8C28u) { return; }
    }
    ctx->pc = 0x2D8C28u;
label_2d8c28:
    // 0x2d8c28: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
label_2d8c2c:
    if (ctx->pc == 0x2D8C2Cu) {
        ctx->pc = 0x2D8C30u;
        goto label_2d8c30;
    }
    ctx->pc = 0x2D8C28u;
    {
        const bool branch_taken_0x2d8c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c28) {
            ctx->pc = 0x2D9170u;
            goto label_2d9170;
        }
    }
    ctx->pc = 0x2D8C30u;
label_2d8c30:
    // 0x2d8c30: 0x8f908ac0  lw          $s0, -0x7540($gp)
    ctx->pc = 0x2d8c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_2d8c34:
    // 0x2d8c34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d8c38:
    // 0x2d8c38: 0x24a50a68  addiu       $a1, $a1, 0xA68
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2664));
label_2d8c3c:
    // 0x2d8c3c: 0x27a6019c  addiu       $a2, $sp, 0x19C
    ctx->pc = 0x2d8c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_2d8c40:
    // 0x2d8c40: 0xc052734  jal         func_149CD0
label_2d8c44:
    if (ctx->pc == 0x2D8C44u) {
        ctx->pc = 0x2D8C44u;
            // 0x2d8c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C48u;
        goto label_2d8c48;
    }
    ctx->pc = 0x2D8C40u;
    SET_GPR_U32(ctx, 31, 0x2D8C48u);
    ctx->pc = 0x2D8C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C40u;
            // 0x2d8c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C48u; }
        if (ctx->pc != 0x2D8C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C48u; }
        if (ctx->pc != 0x2D8C48u) { return; }
    }
    ctx->pc = 0x2D8C48u;
label_2d8c48:
    // 0x2d8c48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c4c:
    // 0x2d8c4c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2d8c50:
    if (ctx->pc == 0x2D8C50u) {
        ctx->pc = 0x2D8C54u;
        goto label_2d8c54;
    }
    ctx->pc = 0x2D8C4Cu;
    {
        const bool branch_taken_0x2d8c4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c4c) {
            ctx->pc = 0x2D8CA0u;
            goto label_2d8ca0;
        }
    }
    ctx->pc = 0x2D8C54u;
label_2d8c54:
    // 0x2d8c54: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x2d8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2d8c58:
    // 0x2d8c58: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2d8c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2d8c5c:
    // 0x2d8c5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d8c60:
    if (ctx->pc == 0x2D8C60u) {
        ctx->pc = 0x2D8C60u;
            // 0x2d8c60: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2D8C64u;
        goto label_2d8c64;
    }
    ctx->pc = 0x2D8C5Cu;
    {
        const bool branch_taken_0x2d8c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C5Cu;
            // 0x2d8c60: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c5c) {
            ctx->pc = 0x2D8C6Cu;
            goto label_2d8c6c;
        }
    }
    ctx->pc = 0x2D8C64u;
label_2d8c64:
    // 0x2d8c64: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2d8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2d8c68:
    // 0x2d8c68: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d8c6c:
    // 0x2d8c6c: 0xc04e748  jal         func_139D20
label_2d8c70:
    if (ctx->pc == 0x2D8C70u) {
        ctx->pc = 0x2D8C70u;
            // 0x2d8c70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C74u;
        goto label_2d8c74;
    }
    ctx->pc = 0x2D8C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D8C74u);
    ctx->pc = 0x2D8C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C6Cu;
            // 0x2d8c70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C74u; }
        if (ctx->pc != 0x2D8C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C74u; }
        if (ctx->pc != 0x2D8C74u) { return; }
    }
    ctx->pc = 0x2D8C74u;
label_2d8c74:
    // 0x2d8c74: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2d8c78:
    // 0x2d8c78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d8c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c7c:
    // 0x2d8c7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c80:
    // 0x2d8c80: 0xc049c18  jal         func_127060
label_2d8c84:
    if (ctx->pc == 0x2D8C84u) {
        ctx->pc = 0x2D8C84u;
            // 0x2d8c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C88u;
        goto label_2d8c88;
    }
    ctx->pc = 0x2D8C80u;
    SET_GPR_U32(ctx, 31, 0x2D8C88u);
    ctx->pc = 0x2D8C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C80u;
            // 0x2d8c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C88u; }
        if (ctx->pc != 0x2D8C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C88u; }
        if (ctx->pc != 0x2D8C88u) { return; }
    }
    ctx->pc = 0x2D8C88u;
label_2d8c88:
    // 0x2d8c88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d8c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c8c:
    // 0x2d8c8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d8c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c90:
    // 0x2d8c90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d8c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c94:
    // 0x2d8c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c98:
    // 0x2d8c98: 0xc04b6a4  jal         func_12DA90
label_2d8c9c:
    if (ctx->pc == 0x2D8C9Cu) {
        ctx->pc = 0x2D8C9Cu;
            // 0x2d8c9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CA0u;
        goto label_2d8ca0;
    }
    ctx->pc = 0x2D8C98u;
    SET_GPR_U32(ctx, 31, 0x2D8CA0u);
    ctx->pc = 0x2D8C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C98u;
            // 0x2d8c9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CA0u; }
        if (ctx->pc != 0x2D8CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CA0u; }
        if (ctx->pc != 0x2D8CA0u) { return; }
    }
    ctx->pc = 0x2D8CA0u;
label_2d8ca0:
    // 0x2d8ca0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d8ca4:
    // 0x2d8ca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d8ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ca8:
    // 0x2d8ca8: 0x24a50a78  addiu       $a1, $a1, 0xA78
    ctx->pc = 0x2d8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2680));
label_2d8cac:
    // 0x2d8cac: 0xc04b414  jal         func_12D050
label_2d8cb0:
    if (ctx->pc == 0x2D8CB0u) {
        ctx->pc = 0x2D8CB0u;
            // 0x2d8cb0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CB4u;
        goto label_2d8cb4;
    }
    ctx->pc = 0x2D8CACu;
    SET_GPR_U32(ctx, 31, 0x2D8CB4u);
    ctx->pc = 0x2D8CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CACu;
            // 0x2d8cb0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CB4u; }
        if (ctx->pc != 0x2D8CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CB4u; }
        if (ctx->pc != 0x2D8CB4u) { return; }
    }
    ctx->pc = 0x2D8CB4u;
label_2d8cb4:
    // 0x2d8cb4: 0xaf829e68  sw          $v0, -0x6198($gp)
    ctx->pc = 0x2d8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942312), GPR_U32(ctx, 2));
label_2d8cb8:
    // 0x2d8cb8: 0xc04d6d8  jal         func_135B60
label_2d8cbc:
    if (ctx->pc == 0x2D8CBCu) {
        ctx->pc = 0x2D8CBCu;
            // 0x2d8cbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2D8CC0u;
        goto label_2d8cc0;
    }
    ctx->pc = 0x2D8CB8u;
    SET_GPR_U32(ctx, 31, 0x2D8CC0u);
    ctx->pc = 0x2D8CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CB8u;
            // 0x2d8cbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CC0u; }
        if (ctx->pc != 0x2D8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CC0u; }
        if (ctx->pc != 0x2D8CC0u) { return; }
    }
    ctx->pc = 0x2D8CC0u;
label_2d8cc0:
    // 0x2d8cc0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2d8cc4:
    // 0x2d8cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8cc8:
    // 0x2d8cc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d8cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d8ccc:
    // 0x2d8ccc: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2d8cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_2d8cd0:
    // 0x2d8cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8cd4:
    // 0x2d8cd4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2d8cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2d8cd8:
    // 0x2d8cd8: 0x24a50a88  addiu       $a1, $a1, 0xA88
    ctx->pc = 0x2d8cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2696));
label_2d8cdc:
    // 0x2d8cdc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2d8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_2d8ce0:
    // 0x2d8ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ce4:
    // 0x2d8ce4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2d8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_2d8ce8:
    // 0x2d8ce8: 0xc052734  jal         func_149CD0
label_2d8cec:
    if (ctx->pc == 0x2D8CECu) {
        ctx->pc = 0x2D8CECu;
            // 0x2d8cec: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->pc = 0x2D8CF0u;
        goto label_2d8cf0;
    }
    ctx->pc = 0x2D8CE8u;
    SET_GPR_U32(ctx, 31, 0x2D8CF0u);
    ctx->pc = 0x2D8CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CE8u;
            // 0x2d8cec: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CF0u; }
        if (ctx->pc != 0x2D8CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CF0u; }
        if (ctx->pc != 0x2D8CF0u) { return; }
    }
    ctx->pc = 0x2D8CF0u;
label_2d8cf0:
    // 0x2d8cf0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d8cf4:
    if (ctx->pc == 0x2D8CF4u) {
        ctx->pc = 0x2D8CF4u;
            // 0x2d8cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CF8u;
        goto label_2d8cf8;
    }
    ctx->pc = 0x2D8CF0u;
    {
        const bool branch_taken_0x2d8cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CF0u;
            // 0x2d8cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cf0) {
            ctx->pc = 0x2D8D34u;
            goto label_2d8d34;
        }
    }
    ctx->pc = 0x2D8CF8u;
label_2d8cf8:
    // 0x2d8cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d8cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8cfc:
    // 0x2d8cfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d8cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d00:
    // 0x2d8d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d04:
    // 0x2d8d04: 0xc04cb78  jal         func_132DE0
label_2d8d08:
    if (ctx->pc == 0x2D8D08u) {
        ctx->pc = 0x2D8D08u;
            // 0x2d8d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D0Cu;
        goto label_2d8d0c;
    }
    ctx->pc = 0x2D8D04u;
    SET_GPR_U32(ctx, 31, 0x2D8D0Cu);
    ctx->pc = 0x2D8D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D04u;
            // 0x2d8d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D0Cu; }
        if (ctx->pc != 0x2D8D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D0Cu; }
        if (ctx->pc != 0x2D8D0Cu) { return; }
    }
    ctx->pc = 0x2D8D0Cu;
label_2d8d0c:
    // 0x2d8d0c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d8d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d8d10:
    // 0x2d8d10: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d8d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2d8d14:
    // 0x2d8d14: 0xac2289e0  sw          $v0, -0x7620($at)
    ctx->pc = 0x2d8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937056), GPR_U32(ctx, 2));
label_2d8d18:
    // 0x2d8d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d8d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8d1c:
    // 0x2d8d1c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d8d20:
    // 0x2d8d20: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2d8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2d8d24:
    // 0x2d8d24: 0x8c2489e0  lw          $a0, -0x7620($at)
    ctx->pc = 0x2d8d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937056)));
label_2d8d28:
    // 0x2d8d28: 0xc04de54  jal         func_137950
label_2d8d2c:
    if (ctx->pc == 0x2D8D2Cu) {
        ctx->pc = 0x2D8D2Cu;
            // 0x2d8d2c: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2D8D30u;
        goto label_2d8d30;
    }
    ctx->pc = 0x2D8D28u;
    SET_GPR_U32(ctx, 31, 0x2D8D30u);
    ctx->pc = 0x2D8D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D28u;
            // 0x2d8d2c: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D30u; }
        if (ctx->pc != 0x2D8D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D30u; }
        if (ctx->pc != 0x2D8D30u) { return; }
    }
    ctx->pc = 0x2D8D30u;
label_2d8d30:
    // 0x2d8d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d8d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d34:
    // 0x2d8d34: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2d8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2d8d38:
    // 0x2d8d38: 0xaf809e6c  sw          $zero, -0x6194($gp)
    ctx->pc = 0x2d8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942316), GPR_U32(ctx, 0));
label_2d8d3c:
    // 0x2d8d3c: 0xc04e748  jal         func_139D20
label_2d8d40:
    if (ctx->pc == 0x2D8D40u) {
        ctx->pc = 0x2D8D40u;
            // 0x2d8d40: 0xaf809e70  sw          $zero, -0x6190($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942320), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8D44u;
        goto label_2d8d44;
    }
    ctx->pc = 0x2D8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D8D44u);
    ctx->pc = 0x2D8D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D3Cu;
            // 0x2d8d40: 0xaf809e70  sw          $zero, -0x6190($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D44u; }
        if (ctx->pc != 0x2D8D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D44u; }
        if (ctx->pc != 0x2D8D44u) { return; }
    }
    ctx->pc = 0x2D8D44u;
label_2d8d44:
    // 0x2d8d44: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2d8d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2d8d48:
    // 0x2d8d48: 0xc04e638  jal         func_1398E0
label_2d8d4c:
    if (ctx->pc == 0x2D8D4Cu) {
        ctx->pc = 0x2D8D4Cu;
            // 0x2d8d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D50u;
        goto label_2d8d50;
    }
    ctx->pc = 0x2D8D48u;
    SET_GPR_U32(ctx, 31, 0x2D8D50u);
    ctx->pc = 0x2D8D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D48u;
            // 0x2d8d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D50u; }
        if (ctx->pc != 0x2D8D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D50u; }
        if (ctx->pc != 0x2D8D50u) { return; }
    }
    ctx->pc = 0x2D8D50u;
label_2d8d50:
    // 0x2d8d50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2d8d54:
    if (ctx->pc == 0x2D8D54u) {
        ctx->pc = 0x2D8D54u;
            // 0x2d8d54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D58u;
        goto label_2d8d58;
    }
    ctx->pc = 0x2D8D50u;
    {
        const bool branch_taken_0x2d8d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D50u;
            // 0x2d8d54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d50) {
            ctx->pc = 0x2D8DD4u;
            goto label_2d8dd4;
        }
    }
    ctx->pc = 0x2D8D58u;
label_2d8d58:
    // 0x2d8d58: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8d5c:
    // 0x2d8d5c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2d8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2d8d60:
    // 0x2d8d60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8d64:
    // 0x2d8d64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8d68:
    // 0x2d8d68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8d6c:
    // 0x2d8d6c: 0x320f809  jalr        $t9
label_2d8d70:
    if (ctx->pc == 0x2D8D70u) {
        ctx->pc = 0x2D8D70u;
            // 0x2d8d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D74u;
        goto label_2d8d74;
    }
    ctx->pc = 0x2D8D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8D74u);
        ctx->pc = 0x2D8D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D6Cu;
            // 0x2d8d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D74u; }
            if (ctx->pc != 0x2D8D74u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8D74u;
label_2d8d74:
    // 0x2d8d74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8d78:
    // 0x2d8d78: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2d8d7c:
    // 0x2d8d7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8d80:
    // 0x2d8d80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8d84:
    // 0x2d8d84: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8d88:
    // 0x2d8d88: 0x320f809  jalr        $t9
label_2d8d8c:
    if (ctx->pc == 0x2D8D8Cu) {
        ctx->pc = 0x2D8D8Cu;
            // 0x2d8d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D90u;
        goto label_2d8d90;
    }
    ctx->pc = 0x2D8D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8D90u);
        ctx->pc = 0x2D8D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D88u;
            // 0x2d8d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8D90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D90u; }
            if (ctx->pc != 0x2D8D90u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8D90u;
label_2d8d90:
    // 0x2d8d90: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8d94:
    // 0x2d8d94: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2d8d98:
    // 0x2d8d98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8d9c:
    // 0x2d8d9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8da0:
    // 0x2d8da0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8da4:
    // 0x2d8da4: 0x320f809  jalr        $t9
label_2d8da8:
    if (ctx->pc == 0x2D8DA8u) {
        ctx->pc = 0x2D8DA8u;
            // 0x2d8da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DACu;
        goto label_2d8dac;
    }
    ctx->pc = 0x2D8DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8DACu);
        ctx->pc = 0x2D8DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8DA4u;
            // 0x2d8da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8DACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8DACu; }
            if (ctx->pc != 0x2D8DACu) { return; }
        }
        }
    }
    ctx->pc = 0x2D8DACu;
label_2d8dac:
    // 0x2d8dac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8db0:
    // 0x2d8db0: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2d8db4:
    // 0x2d8db4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8db8:
    // 0x2d8db8: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2d8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2d8dbc:
    // 0x2d8dbc: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2d8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2d8dc0:
    // 0x2d8dc0: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2d8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2d8dc4:
    // 0x2d8dc4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8dc8:
    // 0x2d8dc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8dcc:
    // 0x2d8dcc: 0x320f809  jalr        $t9
label_2d8dd0:
    if (ctx->pc == 0x2D8DD0u) {
        ctx->pc = 0x2D8DD0u;
            // 0x2d8dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DD4u;
        goto label_2d8dd4;
    }
    ctx->pc = 0x2D8DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8DD4u);
        ctx->pc = 0x2D8DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8DCCu;
            // 0x2d8dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8DD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8DD4u; }
            if (ctx->pc != 0x2D8DD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8DD4u;
label_2d8dd4:
    // 0x2d8dd4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d8dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d8dd8:
    // 0x2d8dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ddc:
    // 0x2d8ddc: 0x24a50a98  addiu       $a1, $a1, 0xA98
    ctx->pc = 0x2d8ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2712));
label_2d8de0:
    // 0x2d8de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8de4:
    // 0x2d8de4: 0xc052734  jal         func_149CD0
label_2d8de8:
    if (ctx->pc == 0x2D8DE8u) {
        ctx->pc = 0x2D8DE8u;
            // 0x2d8de8: 0xaf919e74  sw          $s1, -0x618C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942324), GPR_U32(ctx, 17));
        ctx->pc = 0x2D8DECu;
        goto label_2d8dec;
    }
    ctx->pc = 0x2D8DE4u;
    SET_GPR_U32(ctx, 31, 0x2D8DECu);
    ctx->pc = 0x2D8DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8DE4u;
            // 0x2d8de8: 0xaf919e74  sw          $s1, -0x618C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942324), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8DECu; }
        if (ctx->pc != 0x2D8DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8DECu; }
        if (ctx->pc != 0x2D8DECu) { return; }
    }
    ctx->pc = 0x2D8DECu;
label_2d8dec:
    // 0x2d8dec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2d8df0:
    if (ctx->pc == 0x2D8DF0u) {
        ctx->pc = 0x2D8DF0u;
            // 0x2d8df0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DF4u;
        goto label_2d8df4;
    }
    ctx->pc = 0x2D8DECu;
    {
        const bool branch_taken_0x2d8dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8DECu;
            // 0x2d8df0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8dec) {
            ctx->pc = 0x2D8E78u;
            goto label_2d8e78;
        }
    }
    ctx->pc = 0x2D8DF4u;
label_2d8df4:
    // 0x2d8df4: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2d8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2d8df8:
    // 0x2d8df8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2d8df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2d8dfc:
    // 0x2d8dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d8dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e00:
    // 0x2d8e00: 0x24c60aa8  addiu       $a2, $a2, 0xAA8
    ctx->pc = 0x2d8e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2728));
label_2d8e04:
    // 0x2d8e04: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d8e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e08:
    // 0x2d8e08: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d8e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e0c:
    // 0x2d8e0c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d8e0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e10:
    // 0x2d8e10: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2d8e10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e14:
    // 0x2d8e14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8e18:
    // 0x2d8e18: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2d8e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2d8e1c:
    // 0x2d8e1c: 0x320f809  jalr        $t9
label_2d8e20:
    if (ctx->pc == 0x2D8E20u) {
        ctx->pc = 0x2D8E20u;
            // 0x2d8e20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E24u;
        goto label_2d8e24;
    }
    ctx->pc = 0x2D8E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8E24u);
        ctx->pc = 0x2D8E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E1Cu;
            // 0x2d8e20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E24u; }
            if (ctx->pc != 0x2D8E24u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8E24u;
label_2d8e24:
    // 0x2d8e24: 0x8f829e74  lw          $v0, -0x618C($gp)
    ctx->pc = 0x2d8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2d8e28:
    // 0x2d8e28: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2d8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2d8e2c:
    // 0x2d8e2c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2d8e30:
    if (ctx->pc == 0x2D8E30u) {
        ctx->pc = 0x2D8E30u;
            // 0x2d8e30: 0xaf849e6c  sw          $a0, -0x6194($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942316), GPR_U32(ctx, 4));
        ctx->pc = 0x2D8E34u;
        goto label_2d8e34;
    }
    ctx->pc = 0x2D8E2Cu;
    {
        const bool branch_taken_0x2d8e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E2Cu;
            // 0x2d8e30: 0xaf849e6c  sw          $a0, -0x6194($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e2c) {
            ctx->pc = 0x2D8E5Cu;
            goto label_2d8e5c;
        }
    }
    ctx->pc = 0x2D8E34u;
label_2d8e34:
    // 0x2d8e34: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2d8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2d8e38:
    // 0x2d8e38: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d8e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2d8e3c:
    // 0x2d8e3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d8e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8e40:
    // 0x2d8e40: 0xc04de54  jal         func_137950
label_2d8e44:
    if (ctx->pc == 0x2D8E44u) {
        ctx->pc = 0x2D8E44u;
            // 0x2d8e44: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2D8E48u;
        goto label_2d8e48;
    }
    ctx->pc = 0x2D8E40u;
    SET_GPR_U32(ctx, 31, 0x2D8E48u);
    ctx->pc = 0x2D8E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E40u;
            // 0x2d8e44: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E48u; }
        if (ctx->pc != 0x2D8E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E48u; }
        if (ctx->pc != 0x2D8E48u) { return; }
    }
    ctx->pc = 0x2D8E48u;
label_2d8e48:
    // 0x2d8e48: 0x8f849e6c  lw          $a0, -0x6194($gp)
    ctx->pc = 0x2d8e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942316)));
label_2d8e4c:
    // 0x2d8e4c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d8e50:
    // 0x2d8e50: 0xc04ddb4  jal         func_1376D0
label_2d8e54:
    if (ctx->pc == 0x2D8E54u) {
        ctx->pc = 0x2D8E54u;
            // 0x2d8e54: 0x24a50ab8  addiu       $a1, $a1, 0xAB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2744));
        ctx->pc = 0x2D8E58u;
        goto label_2d8e58;
    }
    ctx->pc = 0x2D8E50u;
    SET_GPR_U32(ctx, 31, 0x2D8E58u);
    ctx->pc = 0x2D8E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E50u;
            // 0x2d8e54: 0x24a50ab8  addiu       $a1, $a1, 0xAB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E58u; }
        if (ctx->pc != 0x2D8E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E58u; }
        if (ctx->pc != 0x2D8E58u) { return; }
    }
    ctx->pc = 0x2D8E58u;
label_2d8e58:
    // 0x2d8e58: 0xaf829e70  sw          $v0, -0x6190($gp)
    ctx->pc = 0x2d8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942320), GPR_U32(ctx, 2));
label_2d8e5c:
    // 0x2d8e5c: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2d8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2d8e60:
    // 0x2d8e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d8e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e64:
    // 0x2d8e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8e68:
    // 0x2d8e68: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x2d8e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_2d8e6c:
    // 0x2d8e6c: 0x320f809  jalr        $t9
label_2d8e70:
    if (ctx->pc == 0x2D8E70u) {
        ctx->pc = 0x2D8E70u;
            // 0x2d8e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E74u;
        goto label_2d8e74;
    }
    ctx->pc = 0x2D8E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8E74u);
        ctx->pc = 0x2D8E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E6Cu;
            // 0x2d8e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E74u; }
            if (ctx->pc != 0x2D8E74u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8E74u;
label_2d8e74:
    // 0x2d8e74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d8e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8e78:
    // 0x2d8e78: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2d8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2d8e7c:
    // 0x2d8e7c: 0xaf809e78  sw          $zero, -0x6188($gp)
    ctx->pc = 0x2d8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942328), GPR_U32(ctx, 0));
label_2d8e80:
    // 0x2d8e80: 0xaf809e7c  sw          $zero, -0x6184($gp)
    ctx->pc = 0x2d8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942332), GPR_U32(ctx, 0));
label_2d8e84:
    // 0x2d8e84: 0xaf809e80  sw          $zero, -0x6180($gp)
    ctx->pc = 0x2d8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942336), GPR_U32(ctx, 0));
label_2d8e88:
    // 0x2d8e88: 0xc04e748  jal         func_139D20
label_2d8e8c:
    if (ctx->pc == 0x2D8E8Cu) {
        ctx->pc = 0x2D8E8Cu;
            // 0x2d8e8c: 0xaf809e84  sw          $zero, -0x617C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942340), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8E90u;
        goto label_2d8e90;
    }
    ctx->pc = 0x2D8E88u;
    SET_GPR_U32(ctx, 31, 0x2D8E90u);
    ctx->pc = 0x2D8E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E88u;
            // 0x2d8e8c: 0xaf809e84  sw          $zero, -0x617C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E90u; }
        if (ctx->pc != 0x2D8E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E90u; }
        if (ctx->pc != 0x2D8E90u) { return; }
    }
    ctx->pc = 0x2D8E90u;
label_2d8e90:
    // 0x2d8e90: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2d8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2d8e94:
    // 0x2d8e94: 0xc04e638  jal         func_1398E0
label_2d8e98:
    if (ctx->pc == 0x2D8E98u) {
        ctx->pc = 0x2D8E98u;
            // 0x2d8e98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E9Cu;
        goto label_2d8e9c;
    }
    ctx->pc = 0x2D8E94u;
    SET_GPR_U32(ctx, 31, 0x2D8E9Cu);
    ctx->pc = 0x2D8E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E94u;
            // 0x2d8e98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E9Cu; }
        if (ctx->pc != 0x2D8E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8E9Cu; }
        if (ctx->pc != 0x2D8E9Cu) { return; }
    }
    ctx->pc = 0x2D8E9Cu;
label_2d8e9c:
    // 0x2d8e9c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2d8ea0:
    if (ctx->pc == 0x2D8EA0u) {
        ctx->pc = 0x2D8EA0u;
            // 0x2d8ea0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EA4u;
        goto label_2d8ea4;
    }
    ctx->pc = 0x2D8E9Cu;
    {
        const bool branch_taken_0x2d8e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8E9Cu;
            // 0x2d8ea0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e9c) {
            ctx->pc = 0x2D8F20u;
            goto label_2d8f20;
        }
    }
    ctx->pc = 0x2D8EA4u;
label_2d8ea4:
    // 0x2d8ea4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8ea8:
    // 0x2d8ea8: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2d8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2d8eac:
    // 0x2d8eac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8eb0:
    // 0x2d8eb0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8eb4:
    // 0x2d8eb4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8eb8:
    // 0x2d8eb8: 0x320f809  jalr        $t9
label_2d8ebc:
    if (ctx->pc == 0x2D8EBCu) {
        ctx->pc = 0x2D8EBCu;
            // 0x2d8ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EC0u;
        goto label_2d8ec0;
    }
    ctx->pc = 0x2D8EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8EC0u);
        ctx->pc = 0x2D8EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8EB8u;
            // 0x2d8ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8EC0u; }
            if (ctx->pc != 0x2D8EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8EC0u;
label_2d8ec0:
    // 0x2d8ec0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8ec4:
    // 0x2d8ec4: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2d8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2d8ec8:
    // 0x2d8ec8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8ecc:
    // 0x2d8ecc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8ed0:
    // 0x2d8ed0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8ed4:
    // 0x2d8ed4: 0x320f809  jalr        $t9
label_2d8ed8:
    if (ctx->pc == 0x2D8ED8u) {
        ctx->pc = 0x2D8ED8u;
            // 0x2d8ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EDCu;
        goto label_2d8edc;
    }
    ctx->pc = 0x2D8ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8EDCu);
        ctx->pc = 0x2D8ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8ED4u;
            // 0x2d8ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8EDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8EDCu; }
            if (ctx->pc != 0x2D8EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x2D8EDCu;
label_2d8edc:
    // 0x2d8edc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8ee0:
    // 0x2d8ee0: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2d8ee4:
    // 0x2d8ee4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8ee8:
    // 0x2d8ee8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8eec:
    // 0x2d8eec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8ef0:
    // 0x2d8ef0: 0x320f809  jalr        $t9
label_2d8ef4:
    if (ctx->pc == 0x2D8EF4u) {
        ctx->pc = 0x2D8EF4u;
            // 0x2d8ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EF8u;
        goto label_2d8ef8;
    }
    ctx->pc = 0x2D8EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8EF8u);
        ctx->pc = 0x2D8EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8EF0u;
            // 0x2d8ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8EF8u; }
            if (ctx->pc != 0x2D8EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8EF8u;
label_2d8ef8:
    // 0x2d8ef8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8efc:
    // 0x2d8efc: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2d8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2d8f00:
    // 0x2d8f00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8f04:
    // 0x2d8f04: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2d8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2d8f08:
    // 0x2d8f08: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2d8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2d8f0c:
    // 0x2d8f0c: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2d8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2d8f10:
    // 0x2d8f10: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8f14:
    // 0x2d8f14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8f18:
    // 0x2d8f18: 0x320f809  jalr        $t9
label_2d8f1c:
    if (ctx->pc == 0x2D8F1Cu) {
        ctx->pc = 0x2D8F1Cu;
            // 0x2d8f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F20u;
        goto label_2d8f20;
    }
    ctx->pc = 0x2D8F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8F20u);
        ctx->pc = 0x2D8F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8F18u;
            // 0x2d8f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8F20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8F20u; }
            if (ctx->pc != 0x2D8F20u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8F20u;
label_2d8f20:
    // 0x2d8f20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d8f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d8f24:
    // 0x2d8f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f28:
    // 0x2d8f28: 0x24a50ac0  addiu       $a1, $a1, 0xAC0
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2752));
label_2d8f2c:
    // 0x2d8f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f30:
    // 0x2d8f30: 0xc052734  jal         func_149CD0
label_2d8f34:
    if (ctx->pc == 0x2D8F34u) {
        ctx->pc = 0x2D8F34u;
            // 0x2d8f34: 0xaf919e84  sw          $s1, -0x617C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942340), GPR_U32(ctx, 17));
        ctx->pc = 0x2D8F38u;
        goto label_2d8f38;
    }
    ctx->pc = 0x2D8F30u;
    SET_GPR_U32(ctx, 31, 0x2D8F38u);
    ctx->pc = 0x2D8F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8F30u;
            // 0x2d8f34: 0xaf919e84  sw          $s1, -0x617C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942340), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8F38u; }
        if (ctx->pc != 0x2D8F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8F38u; }
        if (ctx->pc != 0x2D8F38u) { return; }
    }
    ctx->pc = 0x2D8F38u;
label_2d8f38:
    // 0x2d8f38: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2d8f3c:
    if (ctx->pc == 0x2D8F3Cu) {
        ctx->pc = 0x2D8F3Cu;
            // 0x2d8f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F40u;
        goto label_2d8f40;
    }
    ctx->pc = 0x2D8F38u;
    {
        const bool branch_taken_0x2d8f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8F38u;
            // 0x2d8f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f38) {
            ctx->pc = 0x2D8FA0u;
            goto label_2d8fa0;
        }
    }
    ctx->pc = 0x2D8F40u;
label_2d8f40:
    // 0x2d8f40: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2d8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2d8f44:
    // 0x2d8f44: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2d8f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2d8f48:
    // 0x2d8f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d8f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f4c:
    // 0x2d8f4c: 0x24c60aa8  addiu       $a2, $a2, 0xAA8
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2728));
label_2d8f50:
    // 0x2d8f50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d8f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f54:
    // 0x2d8f54: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d8f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f58:
    // 0x2d8f58: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d8f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f5c:
    // 0x2d8f5c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2d8f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f60:
    // 0x2d8f60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8f64:
    // 0x2d8f64: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2d8f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2d8f68:
    // 0x2d8f68: 0x320f809  jalr        $t9
label_2d8f6c:
    if (ctx->pc == 0x2D8F6Cu) {
        ctx->pc = 0x2D8F6Cu;
            // 0x2d8f6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F70u;
        goto label_2d8f70;
    }
    ctx->pc = 0x2D8F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8F70u);
        ctx->pc = 0x2D8F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8F68u;
            // 0x2d8f6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8F70u; }
            if (ctx->pc != 0x2D8F70u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8F70u;
label_2d8f70:
    // 0x2d8f70: 0x8f829e84  lw          $v0, -0x617C($gp)
    ctx->pc = 0x2d8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2d8f74:
    // 0x2d8f74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d8f78:
    if (ctx->pc == 0x2D8F78u) {
        ctx->pc = 0x2D8F7Cu;
        goto label_2d8f7c;
    }
    ctx->pc = 0x2D8F74u;
    {
        const bool branch_taken_0x2d8f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8f74) {
            ctx->pc = 0x2D8F9Cu;
            goto label_2d8f9c;
        }
    }
    ctx->pc = 0x2D8F7Cu;
label_2d8f7c:
    // 0x2d8f7c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2d8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2d8f80:
    // 0x2d8f80: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2d8f84:
    if (ctx->pc == 0x2D8F84u) {
        ctx->pc = 0x2D8F84u;
            // 0x2d8f84: 0xaf849e78  sw          $a0, -0x6188($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942328), GPR_U32(ctx, 4));
        ctx->pc = 0x2D8F88u;
        goto label_2d8f88;
    }
    ctx->pc = 0x2D8F80u;
    {
        const bool branch_taken_0x2d8f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8F80u;
            // 0x2d8f84: 0xaf849e78  sw          $a0, -0x6188($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f80) {
            ctx->pc = 0x2D8F9Cu;
            goto label_2d8f9c;
        }
    }
    ctx->pc = 0x2D8F88u;
label_2d8f88:
    // 0x2d8f88: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2d8f8c:
    // 0x2d8f8c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d8f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2d8f90:
    // 0x2d8f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d8f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8f94:
    // 0x2d8f94: 0xc04de54  jal         func_137950
label_2d8f98:
    if (ctx->pc == 0x2D8F98u) {
        ctx->pc = 0x2D8F98u;
            // 0x2d8f98: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2D8F9Cu;
        goto label_2d8f9c;
    }
    ctx->pc = 0x2D8F94u;
    SET_GPR_U32(ctx, 31, 0x2D8F9Cu);
    ctx->pc = 0x2D8F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8F94u;
            // 0x2d8f98: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8F9Cu; }
        if (ctx->pc != 0x2D8F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8F9Cu; }
        if (ctx->pc != 0x2D8F9Cu) { return; }
    }
    ctx->pc = 0x2D8F9Cu;
label_2d8f9c:
    // 0x2d8f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d8f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fa0:
    // 0x2d8fa0: 0xc04e748  jal         func_139D20
label_2d8fa4:
    if (ctx->pc == 0x2D8FA4u) {
        ctx->pc = 0x2D8FA4u;
            // 0x2d8fa4: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2D8FA8u;
        goto label_2d8fa8;
    }
    ctx->pc = 0x2D8FA0u;
    SET_GPR_U32(ctx, 31, 0x2D8FA8u);
    ctx->pc = 0x2D8FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8FA0u;
            // 0x2d8fa4: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FA8u; }
        if (ctx->pc != 0x2D8FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FA8u; }
        if (ctx->pc != 0x2D8FA8u) { return; }
    }
    ctx->pc = 0x2D8FA8u;
label_2d8fa8:
    // 0x2d8fa8: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2d8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2d8fac:
    // 0x2d8fac: 0xc04e638  jal         func_1398E0
label_2d8fb0:
    if (ctx->pc == 0x2D8FB0u) {
        ctx->pc = 0x2D8FB0u;
            // 0x2d8fb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FB4u;
        goto label_2d8fb4;
    }
    ctx->pc = 0x2D8FACu;
    SET_GPR_U32(ctx, 31, 0x2D8FB4u);
    ctx->pc = 0x2D8FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8FACu;
            // 0x2d8fb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FB4u; }
        if (ctx->pc != 0x2D8FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FB4u; }
        if (ctx->pc != 0x2D8FB4u) { return; }
    }
    ctx->pc = 0x2D8FB4u;
label_2d8fb4:
    // 0x2d8fb4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2d8fb8:
    if (ctx->pc == 0x2D8FB8u) {
        ctx->pc = 0x2D8FB8u;
            // 0x2d8fb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FBCu;
        goto label_2d8fbc;
    }
    ctx->pc = 0x2D8FB4u;
    {
        const bool branch_taken_0x2d8fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8FB4u;
            // 0x2d8fb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fb4) {
            ctx->pc = 0x2D9038u;
            goto label_2d9038;
        }
    }
    ctx->pc = 0x2D8FBCu;
label_2d8fbc:
    // 0x2d8fbc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8fc0:
    // 0x2d8fc0: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2d8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2d8fc4:
    // 0x2d8fc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8fc8:
    // 0x2d8fc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8fcc:
    // 0x2d8fcc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8fd0:
    // 0x2d8fd0: 0x320f809  jalr        $t9
label_2d8fd4:
    if (ctx->pc == 0x2D8FD4u) {
        ctx->pc = 0x2D8FD4u;
            // 0x2d8fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FD8u;
        goto label_2d8fd8;
    }
    ctx->pc = 0x2D8FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8FD8u);
        ctx->pc = 0x2D8FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8FD0u;
            // 0x2d8fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8FD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FD8u; }
            if (ctx->pc != 0x2D8FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8FD8u;
label_2d8fd8:
    // 0x2d8fd8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8fdc:
    // 0x2d8fdc: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2d8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2d8fe0:
    // 0x2d8fe0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d8fe4:
    // 0x2d8fe4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d8fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8fe8:
    // 0x2d8fe8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d8fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d8fec:
    // 0x2d8fec: 0x320f809  jalr        $t9
label_2d8ff0:
    if (ctx->pc == 0x2D8FF0u) {
        ctx->pc = 0x2D8FF0u;
            // 0x2d8ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FF4u;
        goto label_2d8ff4;
    }
    ctx->pc = 0x2D8FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8FF4u);
        ctx->pc = 0x2D8FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8FECu;
            // 0x2d8ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8FF4u; }
            if (ctx->pc != 0x2D8FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8FF4u;
label_2d8ff4:
    // 0x2d8ff4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d8ff8:
    // 0x2d8ff8: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2d8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2d8ffc:
    // 0x2d8ffc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d8ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9000:
    // 0x2d9000: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d9000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9004:
    // 0x2d9004: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d9004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d9008:
    // 0x2d9008: 0x320f809  jalr        $t9
label_2d900c:
    if (ctx->pc == 0x2D900Cu) {
        ctx->pc = 0x2D900Cu;
            // 0x2d900c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9010u;
        goto label_2d9010;
    }
    ctx->pc = 0x2D9008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9010u);
        ctx->pc = 0x2D900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9008u;
            // 0x2d900c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9010u; }
            if (ctx->pc != 0x2D9010u) { return; }
        }
        }
    }
    ctx->pc = 0x2D9010u;
label_2d9010:
    // 0x2d9010: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2d9010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2d9014:
    // 0x2d9014: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2d9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2d9018:
    // 0x2d9018: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d9018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d901c:
    // 0x2d901c: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2d901cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2d9020:
    // 0x2d9020: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2d9020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2d9024:
    // 0x2d9024: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2d9024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2d9028:
    // 0x2d9028: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2d9028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d902c:
    // 0x2d902c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2d902cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2d9030:
    // 0x2d9030: 0x320f809  jalr        $t9
label_2d9034:
    if (ctx->pc == 0x2D9034u) {
        ctx->pc = 0x2D9034u;
            // 0x2d9034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9038u;
        goto label_2d9038;
    }
    ctx->pc = 0x2D9030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9038u);
        ctx->pc = 0x2D9034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9030u;
            // 0x2d9034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9038u; }
            if (ctx->pc != 0x2D9038u) { return; }
        }
        }
    }
    ctx->pc = 0x2D9038u;
label_2d9038:
    // 0x2d9038: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d903c:
    // 0x2d903c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9040:
    // 0x2d9040: 0x24a50ad0  addiu       $a1, $a1, 0xAD0
    ctx->pc = 0x2d9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2768));
label_2d9044:
    // 0x2d9044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d9044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9048:
    // 0x2d9048: 0xc052734  jal         func_149CD0
label_2d904c:
    if (ctx->pc == 0x2D904Cu) {
        ctx->pc = 0x2D904Cu;
            // 0x2d904c: 0xaf919e80  sw          $s1, -0x6180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942336), GPR_U32(ctx, 17));
        ctx->pc = 0x2D9050u;
        goto label_2d9050;
    }
    ctx->pc = 0x2D9048u;
    SET_GPR_U32(ctx, 31, 0x2D9050u);
    ctx->pc = 0x2D904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9048u;
            // 0x2d904c: 0xaf919e80  sw          $s1, -0x6180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942336), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9050u; }
        if (ctx->pc != 0x2D9050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9050u; }
        if (ctx->pc != 0x2D9050u) { return; }
    }
    ctx->pc = 0x2D9050u;
label_2d9050:
    // 0x2d9050: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2d9054:
    if (ctx->pc == 0x2D9054u) {
        ctx->pc = 0x2D9058u;
        goto label_2d9058;
    }
    ctx->pc = 0x2D9050u;
    {
        const bool branch_taken_0x2d9050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9050) {
            ctx->pc = 0x2D90B4u;
            goto label_2d90b4;
        }
    }
    ctx->pc = 0x2D9058u;
label_2d9058:
    // 0x2d9058: 0x8f849e80  lw          $a0, -0x6180($gp)
    ctx->pc = 0x2d9058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2d905c:
    // 0x2d905c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2d905cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2d9060:
    // 0x2d9060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9064:
    // 0x2d9064: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2d9064u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d9068:
    // 0x2d9068: 0x24c60aa8  addiu       $a2, $a2, 0xAA8
    ctx->pc = 0x2d9068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2728));
label_2d906c:
    // 0x2d906c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d906cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9070:
    // 0x2d9070: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d9070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9074:
    // 0x2d9074: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d9074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9078:
    // 0x2d9078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d9078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d907c:
    // 0x2d907c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2d907cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2d9080:
    // 0x2d9080: 0x320f809  jalr        $t9
label_2d9084:
    if (ctx->pc == 0x2D9084u) {
        ctx->pc = 0x2D9084u;
            // 0x2d9084: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9088u;
        goto label_2d9088;
    }
    ctx->pc = 0x2D9080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9088u);
        ctx->pc = 0x2D9084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9080u;
            // 0x2d9084: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9088u; }
            if (ctx->pc != 0x2D9088u) { return; }
        }
        }
    }
    ctx->pc = 0x2D9088u;
label_2d9088:
    // 0x2d9088: 0x8f829e80  lw          $v0, -0x6180($gp)
    ctx->pc = 0x2d9088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2d908c:
    // 0x2d908c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d9090:
    if (ctx->pc == 0x2D9090u) {
        ctx->pc = 0x2D9094u;
        goto label_2d9094;
    }
    ctx->pc = 0x2D908Cu;
    {
        const bool branch_taken_0x2d908c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d908c) {
            ctx->pc = 0x2D90B4u;
            goto label_2d90b4;
        }
    }
    ctx->pc = 0x2D9094u;
label_2d9094:
    // 0x2d9094: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2d9094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2d9098:
    // 0x2d9098: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2d909c:
    if (ctx->pc == 0x2D909Cu) {
        ctx->pc = 0x2D909Cu;
            // 0x2d909c: 0xaf849e7c  sw          $a0, -0x6184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942332), GPR_U32(ctx, 4));
        ctx->pc = 0x2D90A0u;
        goto label_2d90a0;
    }
    ctx->pc = 0x2D9098u;
    {
        const bool branch_taken_0x2d9098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9098u;
            // 0x2d909c: 0xaf849e7c  sw          $a0, -0x6184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9098) {
            ctx->pc = 0x2D90B4u;
            goto label_2d90b4;
        }
    }
    ctx->pc = 0x2D90A0u;
label_2d90a0:
    // 0x2d90a0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2d90a4:
    // 0x2d90a4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2d90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2d90a8:
    // 0x2d90a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d90a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d90ac:
    // 0x2d90ac: 0xc04de54  jal         func_137950
label_2d90b0:
    if (ctx->pc == 0x2D90B0u) {
        ctx->pc = 0x2D90B0u;
            // 0x2d90b0: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2D90B4u;
        goto label_2d90b4;
    }
    ctx->pc = 0x2D90ACu;
    SET_GPR_U32(ctx, 31, 0x2D90B4u);
    ctx->pc = 0x2D90B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90ACu;
            // 0x2d90b0: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90B4u; }
        if (ctx->pc != 0x2D90B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90B4u; }
        if (ctx->pc != 0x2D90B4u) { return; }
    }
    ctx->pc = 0x2D90B4u;
label_2d90b4:
    // 0x2d90b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d90b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d90b8:
    // 0x2d90b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d90bc:
    // 0x2d90bc: 0x24a50ae0  addiu       $a1, $a1, 0xAE0
    ctx->pc = 0x2d90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
label_2d90c0:
    // 0x2d90c0: 0xc052734  jal         func_149CD0
label_2d90c4:
    if (ctx->pc == 0x2D90C4u) {
        ctx->pc = 0x2D90C4u;
            // 0x2d90c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D90C8u;
        goto label_2d90c8;
    }
    ctx->pc = 0x2D90C0u;
    SET_GPR_U32(ctx, 31, 0x2D90C8u);
    ctx->pc = 0x2D90C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90C0u;
            // 0x2d90c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90C8u; }
        if (ctx->pc != 0x2D90C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90C8u; }
        if (ctx->pc != 0x2D90C8u) { return; }
    }
    ctx->pc = 0x2D90C8u;
label_2d90c8:
    // 0x2d90c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2d90cc:
    if (ctx->pc == 0x2D90CCu) {
        ctx->pc = 0x2D90D0u;
        goto label_2d90d0;
    }
    ctx->pc = 0x2D90C8u;
    {
        const bool branch_taken_0x2d90c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d90c8) {
            ctx->pc = 0x2D9130u;
            goto label_2d9130;
        }
    }
    ctx->pc = 0x2D90D0u;
label_2d90d0:
    // 0x2d90d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d90d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d90d4:
    // 0x2d90d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d90d8:
    // 0x2d90d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d90d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d90dc:
    // 0x2d90dc: 0xc04cb78  jal         func_132DE0
label_2d90e0:
    if (ctx->pc == 0x2D90E0u) {
        ctx->pc = 0x2D90E0u;
            // 0x2d90e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D90E4u;
        goto label_2d90e4;
    }
    ctx->pc = 0x2D90DCu;
    SET_GPR_U32(ctx, 31, 0x2D90E4u);
    ctx->pc = 0x2D90E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90DCu;
            // 0x2d90e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90E4u; }
        if (ctx->pc != 0x2D90E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90E4u; }
        if (ctx->pc != 0x2D90E4u) { return; }
    }
    ctx->pc = 0x2D90E4u;
label_2d90e4:
    // 0x2d90e4: 0xaf829e88  sw          $v0, -0x6178($gp)
    ctx->pc = 0x2d90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942344), GPR_U32(ctx, 2));
label_2d90e8:
    // 0x2d90e8: 0xc04d6d8  jal         func_135B60
label_2d90ec:
    if (ctx->pc == 0x2D90ECu) {
        ctx->pc = 0x2D90ECu;
            // 0x2d90ec: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2D90F0u;
        goto label_2d90f0;
    }
    ctx->pc = 0x2D90E8u;
    SET_GPR_U32(ctx, 31, 0x2D90F0u);
    ctx->pc = 0x2D90ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D90E8u;
            // 0x2d90ec: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90F0u; }
        if (ctx->pc != 0x2D90F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D90F0u; }
        if (ctx->pc != 0x2D90F0u) { return; }
    }
    ctx->pc = 0x2D90F0u;
label_2d90f0:
    // 0x2d90f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d90f4:
    // 0x2d90f4: 0x8f849e88  lw          $a0, -0x6178($gp)
    ctx->pc = 0x2d90f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942344)));
label_2d90f8:
    // 0x2d90f8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2d90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_2d90fc:
    // 0x2d90fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d90fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9100:
    // 0x2d9100: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d9100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2d9104:
    // 0x2d9104: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2d9104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_2d9108:
    // 0x2d9108: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2d9108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_2d910c:
    // 0x2d910c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2d910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2d9110:
    // 0x2d9110: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2d9114:
    // 0x2d9114: 0xafa6011c  sw          $a2, 0x11C($sp)
    ctx->pc = 0x2d9114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 6));
label_2d9118:
    // 0x2d9118: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x2d9118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_2d911c:
    // 0x2d911c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d911cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9120:
    // 0x2d9120: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x2d9120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_2d9124:
    // 0x2d9124: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x2d9124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
label_2d9128:
    // 0x2d9128: 0xc04de54  jal         func_137950
label_2d912c:
    if (ctx->pc == 0x2D912Cu) {
        ctx->pc = 0x2D912Cu;
            // 0x2d912c: 0xafa30178  sw          $v1, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
        ctx->pc = 0x2D9130u;
        goto label_2d9130;
    }
    ctx->pc = 0x2D9128u;
    SET_GPR_U32(ctx, 31, 0x2D9130u);
    ctx->pc = 0x2D912Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9128u;
            // 0x2d912c: 0xafa30178  sw          $v1, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9130u; }
        if (ctx->pc != 0x2D9130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9130u; }
        if (ctx->pc != 0x2D9130u) { return; }
    }
    ctx->pc = 0x2D9130u;
label_2d9130:
    // 0x2d9130: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d9130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d9134:
    // 0x2d9134: 0xc0b5750  jal         func_2D5D40
label_2d9138:
    if (ctx->pc == 0x2D9138u) {
        ctx->pc = 0x2D9138u;
            // 0x2d9138: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->pc = 0x2D913Cu;
        goto label_2d913c;
    }
    ctx->pc = 0x2D9134u;
    SET_GPR_U32(ctx, 31, 0x2D913Cu);
    ctx->pc = 0x2D9138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9134u;
            // 0x2d9138: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D913Cu; }
        if (ctx->pc != 0x2D913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D913Cu; }
        if (ctx->pc != 0x2D913Cu) { return; }
    }
    ctx->pc = 0x2D913Cu;
label_2d913c:
    // 0x2d913c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d913cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d9140:
    // 0x2d9140: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d9140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d9144:
    // 0x2d9144: 0xc0b5720  jal         func_2D5C80
label_2d9148:
    if (ctx->pc == 0x2D9148u) {
        ctx->pc = 0x2D9148u;
            // 0x2d9148: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->pc = 0x2D914Cu;
        goto label_2d914c;
    }
    ctx->pc = 0x2D9144u;
    SET_GPR_U32(ctx, 31, 0x2D914Cu);
    ctx->pc = 0x2D9148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9144u;
            // 0x2d9148: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C80u;
    if (runtime->hasFunction(0x2D5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2D5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D914Cu; }
        if (ctx->pc != 0x2D914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__5CFontFi_0x2d5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D914Cu; }
        if (ctx->pc != 0x2D914Cu) { return; }
    }
    ctx->pc = 0x2D914Cu;
label_2d914c:
    // 0x2d914c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d914cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d9150:
    // 0x2d9150: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d9150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d9154:
    // 0x2d9154: 0xc0b515c  jal         func_2D4570
label_2d9158:
    if (ctx->pc == 0x2D9158u) {
        ctx->pc = 0x2D9158u;
            // 0x2d9158: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->pc = 0x2D915Cu;
        goto label_2d915c;
    }
    ctx->pc = 0x2D9154u;
    SET_GPR_U32(ctx, 31, 0x2D915Cu);
    ctx->pc = 0x2D9158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9154u;
            // 0x2d9158: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D915Cu; }
        if (ctx->pc != 0x2D915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D915Cu; }
        if (ctx->pc != 0x2D915Cu) { return; }
    }
    ctx->pc = 0x2D915Cu;
label_2d915c:
    // 0x2d915c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d915cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d9160:
    // 0x2d9160: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d9160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2d9164:
    // 0x2d9164: 0x248489f0  addiu       $a0, $a0, -0x7610
    ctx->pc = 0x2d9164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
label_2d9168:
    // 0x2d9168: 0xc0b512c  jal         func_2D44B0
label_2d916c:
    if (ctx->pc == 0x2D916Cu) {
        ctx->pc = 0x2D916Cu;
            // 0x2d916c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D9170u;
        goto label_2d9170;
    }
    ctx->pc = 0x2D9168u;
    SET_GPR_U32(ctx, 31, 0x2D9170u);
    ctx->pc = 0x2D916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9168u;
            // 0x2d916c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9170u; }
        if (ctx->pc != 0x2D9170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9170u; }
        if (ctx->pc != 0x2D9170u) { return; }
    }
    ctx->pc = 0x2D9170u;
label_2d9170:
    // 0x2d9170: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d9170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d9174:
    // 0x2d9174: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9174u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d9178:
    // 0x2d9178: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d917c:
    // 0x2d917c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d917cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9180:
    // 0x2d9180: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9184:
    // 0x2d9184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9188:
    // 0x2d9188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d918c:
    // 0x2d918c: 0x3e00008  jr          $ra
label_2d9190:
    if (ctx->pc == 0x2D9190u) {
        ctx->pc = 0x2D9190u;
            // 0x2d9190: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x2D9194u;
        goto label_fallthrough_0x2d918c;
    }
    ctx->pc = 0x2D918Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D918Cu;
            // 0x2d9190: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d918c:
    ctx->pc = 0x2D9194u;
}
