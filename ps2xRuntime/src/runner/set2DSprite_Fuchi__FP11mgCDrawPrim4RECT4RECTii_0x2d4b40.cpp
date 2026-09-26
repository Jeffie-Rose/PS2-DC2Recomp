#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: set2DSprite_Fuchi__FP11mgCDrawPrim4RECT4RECTii
// Address: 0x2d4b40 - 0x2d51f0
void set2DSprite_Fuchi__FP11mgCDrawPrim4RECT4RECTii_0x2d4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set2DSprite_Fuchi__FP11mgCDrawPrim4RECT4RECTii_0x2d4b40");
#endif

    switch (ctx->pc) {
        case 0x2d4b40u: goto label_2d4b40;
        case 0x2d4b44u: goto label_2d4b44;
        case 0x2d4b48u: goto label_2d4b48;
        case 0x2d4b4cu: goto label_2d4b4c;
        case 0x2d4b50u: goto label_2d4b50;
        case 0x2d4b54u: goto label_2d4b54;
        case 0x2d4b58u: goto label_2d4b58;
        case 0x2d4b5cu: goto label_2d4b5c;
        case 0x2d4b60u: goto label_2d4b60;
        case 0x2d4b64u: goto label_2d4b64;
        case 0x2d4b68u: goto label_2d4b68;
        case 0x2d4b6cu: goto label_2d4b6c;
        case 0x2d4b70u: goto label_2d4b70;
        case 0x2d4b74u: goto label_2d4b74;
        case 0x2d4b78u: goto label_2d4b78;
        case 0x2d4b7cu: goto label_2d4b7c;
        case 0x2d4b80u: goto label_2d4b80;
        case 0x2d4b84u: goto label_2d4b84;
        case 0x2d4b88u: goto label_2d4b88;
        case 0x2d4b8cu: goto label_2d4b8c;
        case 0x2d4b90u: goto label_2d4b90;
        case 0x2d4b94u: goto label_2d4b94;
        case 0x2d4b98u: goto label_2d4b98;
        case 0x2d4b9cu: goto label_2d4b9c;
        case 0x2d4ba0u: goto label_2d4ba0;
        case 0x2d4ba4u: goto label_2d4ba4;
        case 0x2d4ba8u: goto label_2d4ba8;
        case 0x2d4bacu: goto label_2d4bac;
        case 0x2d4bb0u: goto label_2d4bb0;
        case 0x2d4bb4u: goto label_2d4bb4;
        case 0x2d4bb8u: goto label_2d4bb8;
        case 0x2d4bbcu: goto label_2d4bbc;
        case 0x2d4bc0u: goto label_2d4bc0;
        case 0x2d4bc4u: goto label_2d4bc4;
        case 0x2d4bc8u: goto label_2d4bc8;
        case 0x2d4bccu: goto label_2d4bcc;
        case 0x2d4bd0u: goto label_2d4bd0;
        case 0x2d4bd4u: goto label_2d4bd4;
        case 0x2d4bd8u: goto label_2d4bd8;
        case 0x2d4bdcu: goto label_2d4bdc;
        case 0x2d4be0u: goto label_2d4be0;
        case 0x2d4be4u: goto label_2d4be4;
        case 0x2d4be8u: goto label_2d4be8;
        case 0x2d4becu: goto label_2d4bec;
        case 0x2d4bf0u: goto label_2d4bf0;
        case 0x2d4bf4u: goto label_2d4bf4;
        case 0x2d4bf8u: goto label_2d4bf8;
        case 0x2d4bfcu: goto label_2d4bfc;
        case 0x2d4c00u: goto label_2d4c00;
        case 0x2d4c04u: goto label_2d4c04;
        case 0x2d4c08u: goto label_2d4c08;
        case 0x2d4c0cu: goto label_2d4c0c;
        case 0x2d4c10u: goto label_2d4c10;
        case 0x2d4c14u: goto label_2d4c14;
        case 0x2d4c18u: goto label_2d4c18;
        case 0x2d4c1cu: goto label_2d4c1c;
        case 0x2d4c20u: goto label_2d4c20;
        case 0x2d4c24u: goto label_2d4c24;
        case 0x2d4c28u: goto label_2d4c28;
        case 0x2d4c2cu: goto label_2d4c2c;
        case 0x2d4c30u: goto label_2d4c30;
        case 0x2d4c34u: goto label_2d4c34;
        case 0x2d4c38u: goto label_2d4c38;
        case 0x2d4c3cu: goto label_2d4c3c;
        case 0x2d4c40u: goto label_2d4c40;
        case 0x2d4c44u: goto label_2d4c44;
        case 0x2d4c48u: goto label_2d4c48;
        case 0x2d4c4cu: goto label_2d4c4c;
        case 0x2d4c50u: goto label_2d4c50;
        case 0x2d4c54u: goto label_2d4c54;
        case 0x2d4c58u: goto label_2d4c58;
        case 0x2d4c5cu: goto label_2d4c5c;
        case 0x2d4c60u: goto label_2d4c60;
        case 0x2d4c64u: goto label_2d4c64;
        case 0x2d4c68u: goto label_2d4c68;
        case 0x2d4c6cu: goto label_2d4c6c;
        case 0x2d4c70u: goto label_2d4c70;
        case 0x2d4c74u: goto label_2d4c74;
        case 0x2d4c78u: goto label_2d4c78;
        case 0x2d4c7cu: goto label_2d4c7c;
        case 0x2d4c80u: goto label_2d4c80;
        case 0x2d4c84u: goto label_2d4c84;
        case 0x2d4c88u: goto label_2d4c88;
        case 0x2d4c8cu: goto label_2d4c8c;
        case 0x2d4c90u: goto label_2d4c90;
        case 0x2d4c94u: goto label_2d4c94;
        case 0x2d4c98u: goto label_2d4c98;
        case 0x2d4c9cu: goto label_2d4c9c;
        case 0x2d4ca0u: goto label_2d4ca0;
        case 0x2d4ca4u: goto label_2d4ca4;
        case 0x2d4ca8u: goto label_2d4ca8;
        case 0x2d4cacu: goto label_2d4cac;
        case 0x2d4cb0u: goto label_2d4cb0;
        case 0x2d4cb4u: goto label_2d4cb4;
        case 0x2d4cb8u: goto label_2d4cb8;
        case 0x2d4cbcu: goto label_2d4cbc;
        case 0x2d4cc0u: goto label_2d4cc0;
        case 0x2d4cc4u: goto label_2d4cc4;
        case 0x2d4cc8u: goto label_2d4cc8;
        case 0x2d4cccu: goto label_2d4ccc;
        case 0x2d4cd0u: goto label_2d4cd0;
        case 0x2d4cd4u: goto label_2d4cd4;
        case 0x2d4cd8u: goto label_2d4cd8;
        case 0x2d4cdcu: goto label_2d4cdc;
        case 0x2d4ce0u: goto label_2d4ce0;
        case 0x2d4ce4u: goto label_2d4ce4;
        case 0x2d4ce8u: goto label_2d4ce8;
        case 0x2d4cecu: goto label_2d4cec;
        case 0x2d4cf0u: goto label_2d4cf0;
        case 0x2d4cf4u: goto label_2d4cf4;
        case 0x2d4cf8u: goto label_2d4cf8;
        case 0x2d4cfcu: goto label_2d4cfc;
        case 0x2d4d00u: goto label_2d4d00;
        case 0x2d4d04u: goto label_2d4d04;
        case 0x2d4d08u: goto label_2d4d08;
        case 0x2d4d0cu: goto label_2d4d0c;
        case 0x2d4d10u: goto label_2d4d10;
        case 0x2d4d14u: goto label_2d4d14;
        case 0x2d4d18u: goto label_2d4d18;
        case 0x2d4d1cu: goto label_2d4d1c;
        case 0x2d4d20u: goto label_2d4d20;
        case 0x2d4d24u: goto label_2d4d24;
        case 0x2d4d28u: goto label_2d4d28;
        case 0x2d4d2cu: goto label_2d4d2c;
        case 0x2d4d30u: goto label_2d4d30;
        case 0x2d4d34u: goto label_2d4d34;
        case 0x2d4d38u: goto label_2d4d38;
        case 0x2d4d3cu: goto label_2d4d3c;
        case 0x2d4d40u: goto label_2d4d40;
        case 0x2d4d44u: goto label_2d4d44;
        case 0x2d4d48u: goto label_2d4d48;
        case 0x2d4d4cu: goto label_2d4d4c;
        case 0x2d4d50u: goto label_2d4d50;
        case 0x2d4d54u: goto label_2d4d54;
        case 0x2d4d58u: goto label_2d4d58;
        case 0x2d4d5cu: goto label_2d4d5c;
        case 0x2d4d60u: goto label_2d4d60;
        case 0x2d4d64u: goto label_2d4d64;
        case 0x2d4d68u: goto label_2d4d68;
        case 0x2d4d6cu: goto label_2d4d6c;
        case 0x2d4d70u: goto label_2d4d70;
        case 0x2d4d74u: goto label_2d4d74;
        case 0x2d4d78u: goto label_2d4d78;
        case 0x2d4d7cu: goto label_2d4d7c;
        case 0x2d4d80u: goto label_2d4d80;
        case 0x2d4d84u: goto label_2d4d84;
        case 0x2d4d88u: goto label_2d4d88;
        case 0x2d4d8cu: goto label_2d4d8c;
        case 0x2d4d90u: goto label_2d4d90;
        case 0x2d4d94u: goto label_2d4d94;
        case 0x2d4d98u: goto label_2d4d98;
        case 0x2d4d9cu: goto label_2d4d9c;
        case 0x2d4da0u: goto label_2d4da0;
        case 0x2d4da4u: goto label_2d4da4;
        case 0x2d4da8u: goto label_2d4da8;
        case 0x2d4dacu: goto label_2d4dac;
        case 0x2d4db0u: goto label_2d4db0;
        case 0x2d4db4u: goto label_2d4db4;
        case 0x2d4db8u: goto label_2d4db8;
        case 0x2d4dbcu: goto label_2d4dbc;
        case 0x2d4dc0u: goto label_2d4dc0;
        case 0x2d4dc4u: goto label_2d4dc4;
        case 0x2d4dc8u: goto label_2d4dc8;
        case 0x2d4dccu: goto label_2d4dcc;
        case 0x2d4dd0u: goto label_2d4dd0;
        case 0x2d4dd4u: goto label_2d4dd4;
        case 0x2d4dd8u: goto label_2d4dd8;
        case 0x2d4ddcu: goto label_2d4ddc;
        case 0x2d4de0u: goto label_2d4de0;
        case 0x2d4de4u: goto label_2d4de4;
        case 0x2d4de8u: goto label_2d4de8;
        case 0x2d4decu: goto label_2d4dec;
        case 0x2d4df0u: goto label_2d4df0;
        case 0x2d4df4u: goto label_2d4df4;
        case 0x2d4df8u: goto label_2d4df8;
        case 0x2d4dfcu: goto label_2d4dfc;
        case 0x2d4e00u: goto label_2d4e00;
        case 0x2d4e04u: goto label_2d4e04;
        case 0x2d4e08u: goto label_2d4e08;
        case 0x2d4e0cu: goto label_2d4e0c;
        case 0x2d4e10u: goto label_2d4e10;
        case 0x2d4e14u: goto label_2d4e14;
        case 0x2d4e18u: goto label_2d4e18;
        case 0x2d4e1cu: goto label_2d4e1c;
        case 0x2d4e20u: goto label_2d4e20;
        case 0x2d4e24u: goto label_2d4e24;
        case 0x2d4e28u: goto label_2d4e28;
        case 0x2d4e2cu: goto label_2d4e2c;
        case 0x2d4e30u: goto label_2d4e30;
        case 0x2d4e34u: goto label_2d4e34;
        case 0x2d4e38u: goto label_2d4e38;
        case 0x2d4e3cu: goto label_2d4e3c;
        case 0x2d4e40u: goto label_2d4e40;
        case 0x2d4e44u: goto label_2d4e44;
        case 0x2d4e48u: goto label_2d4e48;
        case 0x2d4e4cu: goto label_2d4e4c;
        case 0x2d4e50u: goto label_2d4e50;
        case 0x2d4e54u: goto label_2d4e54;
        case 0x2d4e58u: goto label_2d4e58;
        case 0x2d4e5cu: goto label_2d4e5c;
        case 0x2d4e60u: goto label_2d4e60;
        case 0x2d4e64u: goto label_2d4e64;
        case 0x2d4e68u: goto label_2d4e68;
        case 0x2d4e6cu: goto label_2d4e6c;
        case 0x2d4e70u: goto label_2d4e70;
        case 0x2d4e74u: goto label_2d4e74;
        case 0x2d4e78u: goto label_2d4e78;
        case 0x2d4e7cu: goto label_2d4e7c;
        case 0x2d4e80u: goto label_2d4e80;
        case 0x2d4e84u: goto label_2d4e84;
        case 0x2d4e88u: goto label_2d4e88;
        case 0x2d4e8cu: goto label_2d4e8c;
        case 0x2d4e90u: goto label_2d4e90;
        case 0x2d4e94u: goto label_2d4e94;
        case 0x2d4e98u: goto label_2d4e98;
        case 0x2d4e9cu: goto label_2d4e9c;
        case 0x2d4ea0u: goto label_2d4ea0;
        case 0x2d4ea4u: goto label_2d4ea4;
        case 0x2d4ea8u: goto label_2d4ea8;
        case 0x2d4eacu: goto label_2d4eac;
        case 0x2d4eb0u: goto label_2d4eb0;
        case 0x2d4eb4u: goto label_2d4eb4;
        case 0x2d4eb8u: goto label_2d4eb8;
        case 0x2d4ebcu: goto label_2d4ebc;
        case 0x2d4ec0u: goto label_2d4ec0;
        case 0x2d4ec4u: goto label_2d4ec4;
        case 0x2d4ec8u: goto label_2d4ec8;
        case 0x2d4eccu: goto label_2d4ecc;
        case 0x2d4ed0u: goto label_2d4ed0;
        case 0x2d4ed4u: goto label_2d4ed4;
        case 0x2d4ed8u: goto label_2d4ed8;
        case 0x2d4edcu: goto label_2d4edc;
        case 0x2d4ee0u: goto label_2d4ee0;
        case 0x2d4ee4u: goto label_2d4ee4;
        case 0x2d4ee8u: goto label_2d4ee8;
        case 0x2d4eecu: goto label_2d4eec;
        case 0x2d4ef0u: goto label_2d4ef0;
        case 0x2d4ef4u: goto label_2d4ef4;
        case 0x2d4ef8u: goto label_2d4ef8;
        case 0x2d4efcu: goto label_2d4efc;
        case 0x2d4f00u: goto label_2d4f00;
        case 0x2d4f04u: goto label_2d4f04;
        case 0x2d4f08u: goto label_2d4f08;
        case 0x2d4f0cu: goto label_2d4f0c;
        case 0x2d4f10u: goto label_2d4f10;
        case 0x2d4f14u: goto label_2d4f14;
        case 0x2d4f18u: goto label_2d4f18;
        case 0x2d4f1cu: goto label_2d4f1c;
        case 0x2d4f20u: goto label_2d4f20;
        case 0x2d4f24u: goto label_2d4f24;
        case 0x2d4f28u: goto label_2d4f28;
        case 0x2d4f2cu: goto label_2d4f2c;
        case 0x2d4f30u: goto label_2d4f30;
        case 0x2d4f34u: goto label_2d4f34;
        case 0x2d4f38u: goto label_2d4f38;
        case 0x2d4f3cu: goto label_2d4f3c;
        case 0x2d4f40u: goto label_2d4f40;
        case 0x2d4f44u: goto label_2d4f44;
        case 0x2d4f48u: goto label_2d4f48;
        case 0x2d4f4cu: goto label_2d4f4c;
        case 0x2d4f50u: goto label_2d4f50;
        case 0x2d4f54u: goto label_2d4f54;
        case 0x2d4f58u: goto label_2d4f58;
        case 0x2d4f5cu: goto label_2d4f5c;
        case 0x2d4f60u: goto label_2d4f60;
        case 0x2d4f64u: goto label_2d4f64;
        case 0x2d4f68u: goto label_2d4f68;
        case 0x2d4f6cu: goto label_2d4f6c;
        case 0x2d4f70u: goto label_2d4f70;
        case 0x2d4f74u: goto label_2d4f74;
        case 0x2d4f78u: goto label_2d4f78;
        case 0x2d4f7cu: goto label_2d4f7c;
        case 0x2d4f80u: goto label_2d4f80;
        case 0x2d4f84u: goto label_2d4f84;
        case 0x2d4f88u: goto label_2d4f88;
        case 0x2d4f8cu: goto label_2d4f8c;
        case 0x2d4f90u: goto label_2d4f90;
        case 0x2d4f94u: goto label_2d4f94;
        case 0x2d4f98u: goto label_2d4f98;
        case 0x2d4f9cu: goto label_2d4f9c;
        case 0x2d4fa0u: goto label_2d4fa0;
        case 0x2d4fa4u: goto label_2d4fa4;
        case 0x2d4fa8u: goto label_2d4fa8;
        case 0x2d4facu: goto label_2d4fac;
        case 0x2d4fb0u: goto label_2d4fb0;
        case 0x2d4fb4u: goto label_2d4fb4;
        case 0x2d4fb8u: goto label_2d4fb8;
        case 0x2d4fbcu: goto label_2d4fbc;
        case 0x2d4fc0u: goto label_2d4fc0;
        case 0x2d4fc4u: goto label_2d4fc4;
        case 0x2d4fc8u: goto label_2d4fc8;
        case 0x2d4fccu: goto label_2d4fcc;
        case 0x2d4fd0u: goto label_2d4fd0;
        case 0x2d4fd4u: goto label_2d4fd4;
        case 0x2d4fd8u: goto label_2d4fd8;
        case 0x2d4fdcu: goto label_2d4fdc;
        case 0x2d4fe0u: goto label_2d4fe0;
        case 0x2d4fe4u: goto label_2d4fe4;
        case 0x2d4fe8u: goto label_2d4fe8;
        case 0x2d4fecu: goto label_2d4fec;
        case 0x2d4ff0u: goto label_2d4ff0;
        case 0x2d4ff4u: goto label_2d4ff4;
        case 0x2d4ff8u: goto label_2d4ff8;
        case 0x2d4ffcu: goto label_2d4ffc;
        case 0x2d5000u: goto label_2d5000;
        case 0x2d5004u: goto label_2d5004;
        case 0x2d5008u: goto label_2d5008;
        case 0x2d500cu: goto label_2d500c;
        case 0x2d5010u: goto label_2d5010;
        case 0x2d5014u: goto label_2d5014;
        case 0x2d5018u: goto label_2d5018;
        case 0x2d501cu: goto label_2d501c;
        case 0x2d5020u: goto label_2d5020;
        case 0x2d5024u: goto label_2d5024;
        case 0x2d5028u: goto label_2d5028;
        case 0x2d502cu: goto label_2d502c;
        case 0x2d5030u: goto label_2d5030;
        case 0x2d5034u: goto label_2d5034;
        case 0x2d5038u: goto label_2d5038;
        case 0x2d503cu: goto label_2d503c;
        case 0x2d5040u: goto label_2d5040;
        case 0x2d5044u: goto label_2d5044;
        case 0x2d5048u: goto label_2d5048;
        case 0x2d504cu: goto label_2d504c;
        case 0x2d5050u: goto label_2d5050;
        case 0x2d5054u: goto label_2d5054;
        case 0x2d5058u: goto label_2d5058;
        case 0x2d505cu: goto label_2d505c;
        case 0x2d5060u: goto label_2d5060;
        case 0x2d5064u: goto label_2d5064;
        case 0x2d5068u: goto label_2d5068;
        case 0x2d506cu: goto label_2d506c;
        case 0x2d5070u: goto label_2d5070;
        case 0x2d5074u: goto label_2d5074;
        case 0x2d5078u: goto label_2d5078;
        case 0x2d507cu: goto label_2d507c;
        case 0x2d5080u: goto label_2d5080;
        case 0x2d5084u: goto label_2d5084;
        case 0x2d5088u: goto label_2d5088;
        case 0x2d508cu: goto label_2d508c;
        case 0x2d5090u: goto label_2d5090;
        case 0x2d5094u: goto label_2d5094;
        case 0x2d5098u: goto label_2d5098;
        case 0x2d509cu: goto label_2d509c;
        case 0x2d50a0u: goto label_2d50a0;
        case 0x2d50a4u: goto label_2d50a4;
        case 0x2d50a8u: goto label_2d50a8;
        case 0x2d50acu: goto label_2d50ac;
        case 0x2d50b0u: goto label_2d50b0;
        case 0x2d50b4u: goto label_2d50b4;
        case 0x2d50b8u: goto label_2d50b8;
        case 0x2d50bcu: goto label_2d50bc;
        case 0x2d50c0u: goto label_2d50c0;
        case 0x2d50c4u: goto label_2d50c4;
        case 0x2d50c8u: goto label_2d50c8;
        case 0x2d50ccu: goto label_2d50cc;
        case 0x2d50d0u: goto label_2d50d0;
        case 0x2d50d4u: goto label_2d50d4;
        case 0x2d50d8u: goto label_2d50d8;
        case 0x2d50dcu: goto label_2d50dc;
        case 0x2d50e0u: goto label_2d50e0;
        case 0x2d50e4u: goto label_2d50e4;
        case 0x2d50e8u: goto label_2d50e8;
        case 0x2d50ecu: goto label_2d50ec;
        case 0x2d50f0u: goto label_2d50f0;
        case 0x2d50f4u: goto label_2d50f4;
        case 0x2d50f8u: goto label_2d50f8;
        case 0x2d50fcu: goto label_2d50fc;
        case 0x2d5100u: goto label_2d5100;
        case 0x2d5104u: goto label_2d5104;
        case 0x2d5108u: goto label_2d5108;
        case 0x2d510cu: goto label_2d510c;
        case 0x2d5110u: goto label_2d5110;
        case 0x2d5114u: goto label_2d5114;
        case 0x2d5118u: goto label_2d5118;
        case 0x2d511cu: goto label_2d511c;
        case 0x2d5120u: goto label_2d5120;
        case 0x2d5124u: goto label_2d5124;
        case 0x2d5128u: goto label_2d5128;
        case 0x2d512cu: goto label_2d512c;
        case 0x2d5130u: goto label_2d5130;
        case 0x2d5134u: goto label_2d5134;
        case 0x2d5138u: goto label_2d5138;
        case 0x2d513cu: goto label_2d513c;
        case 0x2d5140u: goto label_2d5140;
        case 0x2d5144u: goto label_2d5144;
        case 0x2d5148u: goto label_2d5148;
        case 0x2d514cu: goto label_2d514c;
        case 0x2d5150u: goto label_2d5150;
        case 0x2d5154u: goto label_2d5154;
        case 0x2d5158u: goto label_2d5158;
        case 0x2d515cu: goto label_2d515c;
        case 0x2d5160u: goto label_2d5160;
        case 0x2d5164u: goto label_2d5164;
        case 0x2d5168u: goto label_2d5168;
        case 0x2d516cu: goto label_2d516c;
        case 0x2d5170u: goto label_2d5170;
        case 0x2d5174u: goto label_2d5174;
        case 0x2d5178u: goto label_2d5178;
        case 0x2d517cu: goto label_2d517c;
        case 0x2d5180u: goto label_2d5180;
        case 0x2d5184u: goto label_2d5184;
        case 0x2d5188u: goto label_2d5188;
        case 0x2d518cu: goto label_2d518c;
        case 0x2d5190u: goto label_2d5190;
        case 0x2d5194u: goto label_2d5194;
        case 0x2d5198u: goto label_2d5198;
        case 0x2d519cu: goto label_2d519c;
        case 0x2d51a0u: goto label_2d51a0;
        case 0x2d51a4u: goto label_2d51a4;
        case 0x2d51a8u: goto label_2d51a8;
        case 0x2d51acu: goto label_2d51ac;
        case 0x2d51b0u: goto label_2d51b0;
        case 0x2d51b4u: goto label_2d51b4;
        case 0x2d51b8u: goto label_2d51b8;
        case 0x2d51bcu: goto label_2d51bc;
        case 0x2d51c0u: goto label_2d51c0;
        case 0x2d51c4u: goto label_2d51c4;
        case 0x2d51c8u: goto label_2d51c8;
        case 0x2d51ccu: goto label_2d51cc;
        case 0x2d51d0u: goto label_2d51d0;
        case 0x2d51d4u: goto label_2d51d4;
        case 0x2d51d8u: goto label_2d51d8;
        case 0x2d51dcu: goto label_2d51dc;
        case 0x2d51e0u: goto label_2d51e0;
        case 0x2d51e4u: goto label_2d51e4;
        case 0x2d51e8u: goto label_2d51e8;
        case 0x2d51ecu: goto label_2d51ec;
        default: break;
    }

    ctx->pc = 0x2d4b40u;

label_2d4b40:
    // 0x2d4b40: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2d4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_2d4b44:
    // 0x2d4b44: 0x2ce10009  sltiu       $at, $a3, 0x9
    ctx->pc = 0x2d4b44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2d4b48:
    // 0x2d4b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2d4b4c:
    // 0x2d4b4c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2d4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2d4b50:
    // 0x2d4b50: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d4b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2d4b54:
    // 0x2d4b54: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d4b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2d4b58:
    // 0x2d4b58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d4b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2d4b5c:
    // 0x2d4b5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d4b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2d4b60:
    // 0x2d4b60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d4b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2d4b64:
    // 0x2d4b64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d4b68:
    // 0x2d4b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d4b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d4b6c:
    // 0x2d4b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d4b70:
    // 0x2d4b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d4b74:
    // 0x2d4b74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b78:
    // 0x2d4b78: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d4b7c:
    // 0x2d4b7c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2d4b80:
    // 0x2d4b80: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d4b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d4b84:
    // 0x2d4b84: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2d4b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d4b88:
    // 0x2d4b88: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d4b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d4b8c:
    // 0x2d4b8c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d4b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d4b90:
    // 0x2d4b90: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2d4b90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2d4b94:
    // 0x2d4b94: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2d4b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2d4b98:
    // 0x2d4b98: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2d4b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2d4b9c:
    // 0x2d4b9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2d4b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2d4ba0:
    // 0x2d4ba0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2d4ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2d4ba4:
    // 0x2d4ba4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2d4ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d4ba8:
    // 0x2d4ba8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2d4ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d4bac:
    // 0x2d4bac: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2d4bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d4bb0:
    // 0x2d4bb0: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2d4bb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d4bb4:
    // 0x2d4bb4: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2d4bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2d4bb8:
    // 0x2d4bb8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2d4bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d4bbc:
    // 0x2d4bbc: 0x10200180  beqz        $at, . + 4 + (0x180 << 2)
label_2d4bc0:
    if (ctx->pc == 0x2D4BC0u) {
        ctx->pc = 0x2D4BC0u;
            // 0x2d4bc0: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->pc = 0x2D4BC4u;
        goto label_2d4bc4;
    }
    ctx->pc = 0x2D4BBCu;
    {
        const bool branch_taken_0x2d4bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4BBCu;
            // 0x2d4bc0: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bbc) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4BC4u;
label_2d4bc4:
    // 0x2d4bc4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d4bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2d4bc8:
    // 0x2d4bc8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2d4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2d4bcc:
    // 0x2d4bcc: 0x24840960  addiu       $a0, $a0, 0x960
    ctx->pc = 0x2d4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
label_2d4bd0:
    // 0x2d4bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d4bd4:
    // 0x2d4bd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d4bd8:
    // 0x2d4bd8: 0x600008  jr          $v1
label_2d4bdc:
    if (ctx->pc == 0x2D4BDCu) {
        ctx->pc = 0x2D4BE0u;
        goto label_2d4be0;
    }
    ctx->pc = 0x2D4BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4BE0u;
label_2d4be0:
    // 0x2d4be0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2d4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d4be4:
    // 0x2d4be4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2d4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2d4be8:
    // 0x2d4be8: 0xa3a4022a  sb          $a0, 0x22A($sp)
    ctx->pc = 0x2d4be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 4));
label_2d4bec:
    // 0x2d4bec: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x2d4becu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
label_2d4bf0:
    // 0x2d4bf0: 0xa3a40229  sb          $a0, 0x229($sp)
    ctx->pc = 0x2d4bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 553), (uint8_t)GPR_U32(ctx, 4));
label_2d4bf4:
    // 0x2d4bf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d4bf8:
    if (ctx->pc == 0x2D4BF8u) {
        ctx->pc = 0x2D4BF8u;
            // 0x2d4bf8: 0xa3a40228  sb          $a0, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2D4BFCu;
        goto label_2d4bfc;
    }
    ctx->pc = 0x2D4BF4u;
    {
        const bool branch_taken_0x2d4bf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D4BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4BF4u;
            // 0x2d4bf8: 0xa3a40228  sb          $a0, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bf4) {
            ctx->pc = 0x2D4C04u;
            goto label_2d4c04;
        }
    }
    ctx->pc = 0x2D4BFCu;
label_2d4bfc:
    // 0x2d4bfc: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d4c00:
    // 0x2d4c00: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d4c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d4c04:
    // 0x2d4c04: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d4c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4c08:
    // 0x2d4c08: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2d4c0c:
    // 0x2d4c0c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4c10:
    // 0x2d4c10: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d4c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4c14:
    // 0x2d4c14: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d4c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4c18:
    // 0x2d4c18: 0xc04f8e4  jal         func_13E390
label_2d4c1c:
    if (ctx->pc == 0x2D4C1Cu) {
        ctx->pc = 0x2D4C1Cu;
            // 0x2d4c1c: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2D4C20u;
        goto label_2d4c20;
    }
    ctx->pc = 0x2D4C18u;
    SET_GPR_U32(ctx, 31, 0x2D4C20u);
    ctx->pc = 0x2D4C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4C18u;
            // 0x2d4c1c: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C20u; }
        if (ctx->pc != 0x2D4C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C20u; }
        if (ctx->pc != 0x2D4C20u) { return; }
    }
    ctx->pc = 0x2D4C20u;
label_2d4c20:
    // 0x2d4c20: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d4c24:
    // 0x2d4c24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2d4c28:
    // 0x2d4c28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4c2c:
    // 0x2d4c2c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2d4c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d4c30:
    // 0x2d4c30: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x2d4c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d4c34:
    // 0x2d4c34: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2d4c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d4c38:
    // 0x2d4c38: 0xc04f8e4  jal         func_13E390
label_2d4c3c:
    if (ctx->pc == 0x2D4C3Cu) {
        ctx->pc = 0x2D4C3Cu;
            // 0x2d4c3c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2D4C40u;
        goto label_2d4c40;
    }
    ctx->pc = 0x2D4C38u;
    SET_GPR_U32(ctx, 31, 0x2D4C40u);
    ctx->pc = 0x2D4C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4C38u;
            // 0x2d4c3c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C40u; }
        if (ctx->pc != 0x2D4C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C40u; }
        if (ctx->pc != 0x2D4C40u) { return; }
    }
    ctx->pc = 0x2D4C40u;
label_2d4c40:
    // 0x2d4c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4c44:
    // 0x2d4c44: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2d4c48:
    // 0x2d4c48: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d4c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2d4c4c:
    // 0x2d4c4c: 0xc0b5280  jal         func_2D4A00
label_2d4c50:
    if (ctx->pc == 0x2D4C50u) {
        ctx->pc = 0x2D4C50u;
            // 0x2d4c50: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4C54u;
        goto label_2d4c54;
    }
    ctx->pc = 0x2D4C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D4C54u);
    ctx->pc = 0x2D4C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4C4Cu;
            // 0x2d4c50: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C54u; }
        if (ctx->pc != 0x2D4C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C54u; }
        if (ctx->pc != 0x2D4C54u) { return; }
    }
    ctx->pc = 0x2D4C54u;
label_2d4c54:
    // 0x2d4c54: 0x1000015a  b           . + 4 + (0x15A << 2)
label_2d4c58:
    if (ctx->pc == 0x2D4C58u) {
        ctx->pc = 0x2D4C5Cu;
        goto label_2d4c5c;
    }
    ctx->pc = 0x2D4C54u;
    {
        const bool branch_taken_0x2d4c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4c54) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4C5Cu;
label_2d4c5c:
    // 0x2d4c5c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2d4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2d4c60:
    // 0x2d4c60: 0xa3a0022a  sb          $zero, 0x22A($sp)
    ctx->pc = 0x2d4c60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 0));
label_2d4c64:
    // 0x2d4c64: 0xa3a00229  sb          $zero, 0x229($sp)
    ctx->pc = 0x2d4c64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 553), (uint8_t)GPR_U32(ctx, 0));
label_2d4c68:
    // 0x2d4c68: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x2d4c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
label_2d4c6c:
    // 0x2d4c6c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d4c70:
    if (ctx->pc == 0x2D4C70u) {
        ctx->pc = 0x2D4C70u;
            // 0x2d4c70: 0xa3a00228  sb          $zero, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2D4C74u;
        goto label_2d4c74;
    }
    ctx->pc = 0x2D4C6Cu;
    {
        const bool branch_taken_0x2d4c6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D4C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4C6Cu;
            // 0x2d4c70: 0xa3a00228  sb          $zero, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c6c) {
            ctx->pc = 0x2D4C7Cu;
            goto label_2d4c7c;
        }
    }
    ctx->pc = 0x2D4C74u;
label_2d4c74:
    // 0x2d4c74: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d4c78:
    // 0x2d4c78: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d4c78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d4c7c:
    // 0x2d4c7c: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4c80:
    // 0x2d4c80: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2d4c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2d4c84:
    // 0x2d4c84: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4c88:
    // 0x2d4c88: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d4c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4c8c:
    // 0x2d4c8c: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4c90:
    // 0x2d4c90: 0xc04f8e4  jal         func_13E390
label_2d4c94:
    if (ctx->pc == 0x2D4C94u) {
        ctx->pc = 0x2D4C94u;
            // 0x2d4c94: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2D4C98u;
        goto label_2d4c98;
    }
    ctx->pc = 0x2D4C90u;
    SET_GPR_U32(ctx, 31, 0x2D4C98u);
    ctx->pc = 0x2D4C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4C90u;
            // 0x2d4c94: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C98u; }
        if (ctx->pc != 0x2D4C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4C98u; }
        if (ctx->pc != 0x2D4C98u) { return; }
    }
    ctx->pc = 0x2D4C98u;
label_2d4c98:
    // 0x2d4c98: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d4c9c:
    // 0x2d4c9c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2d4ca0:
    // 0x2d4ca0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4ca4:
    // 0x2d4ca4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2d4ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d4ca8:
    // 0x2d4ca8: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x2d4ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d4cac:
    // 0x2d4cac: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d4cb0:
    // 0x2d4cb0: 0xc04f8e4  jal         func_13E390
label_2d4cb4:
    if (ctx->pc == 0x2D4CB4u) {
        ctx->pc = 0x2D4CB4u;
            // 0x2d4cb4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2D4CB8u;
        goto label_2d4cb8;
    }
    ctx->pc = 0x2D4CB0u;
    SET_GPR_U32(ctx, 31, 0x2D4CB8u);
    ctx->pc = 0x2D4CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4CB0u;
            // 0x2d4cb4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4CB8u; }
        if (ctx->pc != 0x2D4CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4CB8u; }
        if (ctx->pc != 0x2D4CB8u) { return; }
    }
    ctx->pc = 0x2D4CB8u;
label_2d4cb8:
    // 0x2d4cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4cbc:
    // 0x2d4cbc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2d4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2d4cc0:
    // 0x2d4cc0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2d4cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2d4cc4:
    // 0x2d4cc4: 0xc0b5280  jal         func_2D4A00
label_2d4cc8:
    if (ctx->pc == 0x2D4CC8u) {
        ctx->pc = 0x2D4CC8u;
            // 0x2d4cc8: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4CCCu;
        goto label_2d4ccc;
    }
    ctx->pc = 0x2D4CC4u;
    SET_GPR_U32(ctx, 31, 0x2D4CCCu);
    ctx->pc = 0x2D4CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4CC4u;
            // 0x2d4cc8: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4CCCu; }
        if (ctx->pc != 0x2D4CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4CCCu; }
        if (ctx->pc != 0x2D4CCCu) { return; }
    }
    ctx->pc = 0x2D4CCCu;
label_2d4ccc:
    // 0x2d4ccc: 0x1000013c  b           . + 4 + (0x13C << 2)
label_2d4cd0:
    if (ctx->pc == 0x2D4CD0u) {
        ctx->pc = 0x2D4CD4u;
        goto label_2d4cd4;
    }
    ctx->pc = 0x2D4CCCu;
    {
        const bool branch_taken_0x2d4ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ccc) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4CD4u;
label_2d4cd4:
    // 0x2d4cd4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2d4cd8:
    if (ctx->pc == 0x2D4CD8u) {
        ctx->pc = 0x2D4CD8u;
            // 0x2d4cd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CDCu;
        goto label_2d4cdc;
    }
    ctx->pc = 0x2D4CD4u;
    {
        const bool branch_taken_0x2d4cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4CD4u;
            // 0x2d4cd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4cd4) {
            ctx->pc = 0x2D4D64u;
            goto label_2d4d64;
        }
    }
    ctx->pc = 0x2D4CDCu;
label_2d4cdc:
    // 0x2d4cdc: 0x82640008  lb          $a0, 0x8($s3)
    ctx->pc = 0x2d4cdcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_2d4ce0:
    // 0x2d4ce0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2d4ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d4ce4:
    // 0x2d4ce4: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x2d4ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
label_2d4ce8:
    // 0x2d4ce8: 0xa3a40228  sb          $a0, 0x228($sp)
    ctx->pc = 0x2d4ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 4));
label_2d4cec:
    // 0x2d4cec: 0x8264000c  lb          $a0, 0xC($s3)
    ctx->pc = 0x2d4cecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_2d4cf0:
    // 0x2d4cf0: 0xa3a40229  sb          $a0, 0x229($sp)
    ctx->pc = 0x2d4cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 553), (uint8_t)GPR_U32(ctx, 4));
label_2d4cf4:
    // 0x2d4cf4: 0x82640010  lb          $a0, 0x10($s3)
    ctx->pc = 0x2d4cf4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_2d4cf8:
    // 0x2d4cf8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d4cfc:
    if (ctx->pc == 0x2D4CFCu) {
        ctx->pc = 0x2D4CFCu;
            // 0x2d4cfc: 0xa3a4022a  sb          $a0, 0x22A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2D4D00u;
        goto label_2d4d00;
    }
    ctx->pc = 0x2D4CF8u;
    {
        const bool branch_taken_0x2d4cf8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D4CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4CF8u;
            // 0x2d4cfc: 0xa3a4022a  sb          $a0, 0x22A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4cf8) {
            ctx->pc = 0x2D4D08u;
            goto label_2d4d08;
        }
    }
    ctx->pc = 0x2D4D00u;
label_2d4d00:
    // 0x2d4d00: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d4d04:
    // 0x2d4d04: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d4d04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d4d08:
    // 0x2d4d08: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d4d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4d0c:
    // 0x2d4d0c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2d4d10:
    // 0x2d4d10: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4d14:
    // 0x2d4d14: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4d18:
    // 0x2d4d18: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4d1c:
    // 0x2d4d1c: 0xc04f8e4  jal         func_13E390
label_2d4d20:
    if (ctx->pc == 0x2D4D20u) {
        ctx->pc = 0x2D4D20u;
            // 0x2d4d20: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2D4D24u;
        goto label_2d4d24;
    }
    ctx->pc = 0x2D4D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D24u);
    ctx->pc = 0x2D4D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D1Cu;
            // 0x2d4d20: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D24u; }
        if (ctx->pc != 0x2D4D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D24u; }
        if (ctx->pc != 0x2D4D24u) { return; }
    }
    ctx->pc = 0x2D4D24u;
label_2d4d24:
    // 0x2d4d24: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d4d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4d28:
    // 0x2d4d28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2d4d2c:
    // 0x2d4d2c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d4d30:
    // 0x2d4d30: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d4d34:
    // 0x2d4d34: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d4d38:
    // 0x2d4d38: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2d4d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d4d3c:
    // 0x2d4d3c: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x2d4d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d4d40:
    // 0x2d4d40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2d4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2d4d44:
    // 0x2d4d44: 0xc04f8e4  jal         func_13E390
label_2d4d48:
    if (ctx->pc == 0x2D4D48u) {
        ctx->pc = 0x2D4D48u;
            // 0x2d4d48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2D4D4Cu;
        goto label_2d4d4c;
    }
    ctx->pc = 0x2D4D44u;
    SET_GPR_U32(ctx, 31, 0x2D4D4Cu);
    ctx->pc = 0x2D4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D44u;
            // 0x2d4d48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D4Cu; }
        if (ctx->pc != 0x2D4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D4Cu; }
        if (ctx->pc != 0x2D4D4Cu) { return; }
    }
    ctx->pc = 0x2D4D4Cu;
label_2d4d4c:
    // 0x2d4d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4d50:
    // 0x2d4d50: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2d4d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2d4d54:
    // 0x2d4d54: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2d4d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2d4d58:
    // 0x2d4d58: 0xc0b5280  jal         func_2D4A00
label_2d4d5c:
    if (ctx->pc == 0x2D4D5Cu) {
        ctx->pc = 0x2D4D5Cu;
            // 0x2d4d5c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4D60u;
        goto label_2d4d60;
    }
    ctx->pc = 0x2D4D58u;
    SET_GPR_U32(ctx, 31, 0x2D4D60u);
    ctx->pc = 0x2D4D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4D58u;
            // 0x2d4d5c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D60u; }
        if (ctx->pc != 0x2D4D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4D60u; }
        if (ctx->pc != 0x2D4D60u) { return; }
    }
    ctx->pc = 0x2D4D60u;
label_2d4d60:
    // 0x2d4d60: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2d4d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2d4d64:
    // 0x2d4d64: 0x0  nop
    ctx->pc = 0x2d4d64u;
    // NOP
label_2d4d68:
    // 0x2d4d68: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2d4d6c:
    // 0x2d4d6c: 0x24636e10  addiu       $v1, $v1, 0x6E10
    ctx->pc = 0x2d4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28176));
label_2d4d70:
    // 0x2d4d70: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x2d4d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2d4d74:
    // 0x2d4d74: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2d4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d4d78:
    // 0x2d4d78: 0x1c60ffd8  bgtz        $v1, . + 4 + (-0x28 << 2)
label_2d4d7c:
    if (ctx->pc == 0x2D4D7Cu) {
        ctx->pc = 0x2D4D80u;
        goto label_2d4d80;
    }
    ctx->pc = 0x2D4D78u;
    {
        const bool branch_taken_0x2d4d78 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2d4d78) {
            ctx->pc = 0x2D4CDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4cdc;
        }
    }
    ctx->pc = 0x2D4D80u;
label_2d4d80:
    // 0x2d4d80: 0x1000010f  b           . + 4 + (0x10F << 2)
label_2d4d84:
    if (ctx->pc == 0x2D4D84u) {
        ctx->pc = 0x2D4D88u;
        goto label_2d4d88;
    }
    ctx->pc = 0x2D4D80u;
    {
        const bool branch_taken_0x2d4d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d80) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4D88u;
label_2d4d88:
    // 0x2d4d88: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2d4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2d4d8c:
    // 0x2d4d8c: 0x27a2022a  addiu       $v0, $sp, 0x22A
    ctx->pc = 0x2d4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 554));
label_2d4d90:
    // 0x2d4d90: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d4d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2d4d94:
    // 0x2d4d94: 0x27a20229  addiu       $v0, $sp, 0x229
    ctx->pc = 0x2d4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 553));
label_2d4d98:
    // 0x2d4d98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d4d98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2d4d9c:
    // 0x2d4d9c: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x2d4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_2d4da0:
    // 0x2d4da0: 0xa3a30228  sb          $v1, 0x228($sp)
    ctx->pc = 0x2d4da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 3));
label_2d4da4:
    // 0x2d4da4: 0x1081fc  dsll32      $s0, $s0, 7
    ctx->pc = 0x2d4da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 7));
label_2d4da8:
    // 0x2d4da8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2d4dac:
    if (ctx->pc == 0x2D4DACu) {
        ctx->pc = 0x2D4DACu;
            // 0x2d4dac: 0x1081ff  dsra32      $s0, $s0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
        ctx->pc = 0x2D4DB0u;
        goto label_2d4db0;
    }
    ctx->pc = 0x2D4DA8u;
    {
        const bool branch_taken_0x2d4da8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D4DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4DA8u;
            // 0x2d4dac: 0x1081ff  dsra32      $s0, $s0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4da8) {
            ctx->pc = 0x2D4DB8u;
            goto label_2d4db8;
        }
    }
    ctx->pc = 0x2D4DB0u;
label_2d4db0:
    // 0x2d4db0: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x2d4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_2d4db4:
    // 0x2d4db4: 0x281c3  sra         $s0, $v0, 7
    ctx->pc = 0x2d4db4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 7));
label_2d4db8:
    // 0x2d4db8: 0x27be022b  addiu       $fp, $sp, 0x22B
    ctx->pc = 0x2d4db8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 555));
label_2d4dbc:
    // 0x2d4dbc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2d4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2d4dc0:
    // 0x2d4dc0: 0xa3d00000  sb          $s0, 0x0($fp)
    ctx->pc = 0x2d4dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 16));
label_2d4dc4:
    // 0x2d4dc4: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x2d4dc4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4dc8:
    // 0x2d4dc8: 0x8fb200b8  lw          $s2, 0xB8($sp)
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4dcc:
    // 0x2d4dcc: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x2d4dccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4dd0:
    // 0x2d4dd0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4dd4:
    // 0x2d4dd4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d4dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d4dd8:
    // 0x2d4dd8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d4dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ddc:
    // 0x2d4ddc: 0xc04f8e4  jal         func_13E390
label_2d4de0:
    if (ctx->pc == 0x2D4DE0u) {
        ctx->pc = 0x2D4DE0u;
            // 0x2d4de0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D4DE4u;
        goto label_2d4de4;
    }
    ctx->pc = 0x2D4DDCu;
    SET_GPR_U32(ctx, 31, 0x2D4DE4u);
    ctx->pc = 0x2D4DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4DDCu;
            // 0x2d4de0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4DE4u; }
        if (ctx->pc != 0x2D4DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4DE4u; }
        if (ctx->pc != 0x2D4DE4u) { return; }
    }
    ctx->pc = 0x2D4DE4u;
label_2d4de4:
    // 0x2d4de4: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x2d4de4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d4de8:
    // 0x2d4de8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2d4dec:
    // 0x2d4dec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4df0:
    // 0x2d4df0: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x2d4df0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d4df4:
    // 0x2d4df4: 0x8fb400ac  lw          $s4, 0xAC($sp)
    ctx->pc = 0x2d4df4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d4df8:
    // 0x2d4df8: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x2d4df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d4dfc:
    // 0x2d4dfc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2d4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d4e00:
    // 0x2d4e00: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d4e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e04:
    // 0x2d4e04: 0xc04f8e4  jal         func_13E390
label_2d4e08:
    if (ctx->pc == 0x2D4E08u) {
        ctx->pc = 0x2D4E08u;
            // 0x2d4e08: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D4E0Cu;
        goto label_2d4e0c;
    }
    ctx->pc = 0x2D4E04u;
    SET_GPR_U32(ctx, 31, 0x2D4E0Cu);
    ctx->pc = 0x2D4E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4E04u;
            // 0x2d4e08: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E0Cu; }
        if (ctx->pc != 0x2D4E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E0Cu; }
        if (ctx->pc != 0x2D4E0Cu) { return; }
    }
    ctx->pc = 0x2D4E0Cu;
label_2d4e0c:
    // 0x2d4e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e10:
    // 0x2d4e10: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2d4e14:
    // 0x2d4e14: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2d4e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2d4e18:
    // 0x2d4e18: 0xc0b5280  jal         func_2D4A00
label_2d4e1c:
    if (ctx->pc == 0x2D4E1Cu) {
        ctx->pc = 0x2D4E1Cu;
            // 0x2d4e1c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4E20u;
        goto label_2d4e20;
    }
    ctx->pc = 0x2D4E18u;
    SET_GPR_U32(ctx, 31, 0x2D4E20u);
    ctx->pc = 0x2D4E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4E18u;
            // 0x2d4e1c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E20u; }
        if (ctx->pc != 0x2D4E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E20u; }
        if (ctx->pc != 0x2D4E20u) { return; }
    }
    ctx->pc = 0x2D4E20u;
label_2d4e20:
    // 0x2d4e20: 0x27a2022a  addiu       $v0, $sp, 0x22A
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 554));
label_2d4e24:
    // 0x2d4e24: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d4e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e28:
    // 0x2d4e28: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d4e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d4e2c:
    // 0x2d4e2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d4e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e30:
    // 0x2d4e30: 0x27a20229  addiu       $v0, $sp, 0x229
    ctx->pc = 0x2d4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 553));
label_2d4e34:
    // 0x2d4e34: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2d4e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e38:
    // 0x2d4e38: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d4e38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d4e3c:
    // 0x2d4e3c: 0xa3a00228  sb          $zero, 0x228($sp)
    ctx->pc = 0x2d4e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
label_2d4e40:
    // 0x2d4e40: 0xa3d00000  sb          $s0, 0x0($fp)
    ctx->pc = 0x2d4e40u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 16));
label_2d4e44:
    // 0x2d4e44: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4e48:
    // 0x2d4e48: 0xc04f8e4  jal         func_13E390
label_2d4e4c:
    if (ctx->pc == 0x2D4E4Cu) {
        ctx->pc = 0x2D4E4Cu;
            // 0x2d4e4c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2D4E50u;
        goto label_2d4e50;
    }
    ctx->pc = 0x2D4E48u;
    SET_GPR_U32(ctx, 31, 0x2D4E50u);
    ctx->pc = 0x2D4E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4E48u;
            // 0x2d4e4c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E50u; }
        if (ctx->pc != 0x2D4E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E50u; }
        if (ctx->pc != 0x2D4E50u) { return; }
    }
    ctx->pc = 0x2D4E50u;
label_2d4e50:
    // 0x2d4e50: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4e54:
    // 0x2d4e54: 0x26660002  addiu       $a2, $s3, 0x2
    ctx->pc = 0x2d4e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2d4e58:
    // 0x2d4e58: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d4e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e5c:
    // 0x2d4e5c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d4e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e60:
    // 0x2d4e60: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2d4e64:
    // 0x2d4e64: 0xc04f8e4  jal         func_13E390
label_2d4e68:
    if (ctx->pc == 0x2D4E68u) {
        ctx->pc = 0x2D4E68u;
            // 0x2d4e68: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2D4E6Cu;
        goto label_2d4e6c;
    }
    ctx->pc = 0x2D4E64u;
    SET_GPR_U32(ctx, 31, 0x2D4E6Cu);
    ctx->pc = 0x2D4E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4E64u;
            // 0x2d4e68: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E6Cu; }
        if (ctx->pc != 0x2D4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E6Cu; }
        if (ctx->pc != 0x2D4E6Cu) { return; }
    }
    ctx->pc = 0x2D4E6Cu;
label_2d4e6c:
    // 0x2d4e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e70:
    // 0x2d4e70: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2d4e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2d4e74:
    // 0x2d4e74: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2d4e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2d4e78:
    // 0x2d4e78: 0xc0b5280  jal         func_2D4A00
label_2d4e7c:
    if (ctx->pc == 0x2D4E7Cu) {
        ctx->pc = 0x2D4E7Cu;
            // 0x2d4e7c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4E80u;
        goto label_2d4e80;
    }
    ctx->pc = 0x2D4E78u;
    SET_GPR_U32(ctx, 31, 0x2D4E80u);
    ctx->pc = 0x2D4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4E78u;
            // 0x2d4e7c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E80u; }
        if (ctx->pc != 0x2D4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E80u; }
        if (ctx->pc != 0x2D4E80u) { return; }
    }
    ctx->pc = 0x2D4E80u;
label_2d4e80:
    // 0x2d4e80: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2d4e84:
    if (ctx->pc == 0x2D4E84u) {
        ctx->pc = 0x2D4E88u;
        goto label_2d4e88;
    }
    ctx->pc = 0x2D4E80u;
    {
        const bool branch_taken_0x2d4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e80) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4E88u;
label_2d4e88:
    // 0x2d4e88: 0x1011fc  dsll32      $v0, $s0, 7
    ctx->pc = 0x2d4e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 7));
label_2d4e8c:
    // 0x2d4e8c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2d4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_2d4e90:
    // 0x2d4e90: 0xa3a0022a  sb          $zero, 0x22A($sp)
    ctx->pc = 0x2d4e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 0));
label_2d4e94:
    // 0x2d4e94: 0x211ff  dsra32      $v0, $v0, 7
    ctx->pc = 0x2d4e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
label_2d4e98:
    // 0x2d4e98: 0xa3a00229  sb          $zero, 0x229($sp)
    ctx->pc = 0x2d4e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 553), (uint8_t)GPR_U32(ctx, 0));
label_2d4e9c:
    // 0x2d4e9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d4ea0:
    if (ctx->pc == 0x2D4EA0u) {
        ctx->pc = 0x2D4EA0u;
            // 0x2d4ea0: 0xa3a00228  sb          $zero, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2D4EA4u;
        goto label_2d4ea4;
    }
    ctx->pc = 0x2D4E9Cu;
    {
        const bool branch_taken_0x2d4e9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D4EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4E9Cu;
            // 0x2d4ea0: 0xa3a00228  sb          $zero, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4e9c) {
            ctx->pc = 0x2D4EACu;
            goto label_2d4eac;
        }
    }
    ctx->pc = 0x2D4EA4u;
label_2d4ea4:
    // 0x2d4ea4: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d4ea8:
    // 0x2d4ea8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d4ea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d4eac:
    // 0x2d4eac: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d4eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4eb0:
    // 0x2d4eb0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2d4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2d4eb4:
    // 0x2d4eb4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4eb8:
    // 0x2d4eb8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d4eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4ebc:
    // 0x2d4ebc: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d4ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4ec0:
    // 0x2d4ec0: 0xc04f8e4  jal         func_13E390
label_2d4ec4:
    if (ctx->pc == 0x2D4EC4u) {
        ctx->pc = 0x2D4EC4u;
            // 0x2d4ec4: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2D4EC8u;
        goto label_2d4ec8;
    }
    ctx->pc = 0x2D4EC0u;
    SET_GPR_U32(ctx, 31, 0x2D4EC8u);
    ctx->pc = 0x2D4EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4EC0u;
            // 0x2d4ec4: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EC8u; }
        if (ctx->pc != 0x2D4EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EC8u; }
        if (ctx->pc != 0x2D4EC8u) { return; }
    }
    ctx->pc = 0x2D4EC8u;
label_2d4ec8:
    // 0x2d4ec8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d4ecc:
    // 0x2d4ecc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2d4ed0:
    // 0x2d4ed0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d4ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4ed4:
    // 0x2d4ed4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2d4ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d4ed8:
    // 0x2d4ed8: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x2d4ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d4edc:
    // 0x2d4edc: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x2d4edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2d4ee0:
    // 0x2d4ee0: 0xc04f8e4  jal         func_13E390
label_2d4ee4:
    if (ctx->pc == 0x2D4EE4u) {
        ctx->pc = 0x2D4EE4u;
            // 0x2d4ee4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2D4EE8u;
        goto label_2d4ee8;
    }
    ctx->pc = 0x2D4EE0u;
    SET_GPR_U32(ctx, 31, 0x2D4EE8u);
    ctx->pc = 0x2D4EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4EE0u;
            // 0x2d4ee4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EE8u; }
        if (ctx->pc != 0x2D4EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EE8u; }
        if (ctx->pc != 0x2D4EE8u) { return; }
    }
    ctx->pc = 0x2D4EE8u;
label_2d4ee8:
    // 0x2d4ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4eec:
    // 0x2d4eec: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2d4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2d4ef0:
    // 0x2d4ef0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2d4ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2d4ef4:
    // 0x2d4ef4: 0xc0b5280  jal         func_2D4A00
label_2d4ef8:
    if (ctx->pc == 0x2D4EF8u) {
        ctx->pc = 0x2D4EF8u;
            // 0x2d4ef8: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4EFCu;
        goto label_2d4efc;
    }
    ctx->pc = 0x2D4EF4u;
    SET_GPR_U32(ctx, 31, 0x2D4EFCu);
    ctx->pc = 0x2D4EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4EF4u;
            // 0x2d4ef8: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EFCu; }
        if (ctx->pc != 0x2D4EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EFCu; }
        if (ctx->pc != 0x2D4EFCu) { return; }
    }
    ctx->pc = 0x2D4EFCu;
label_2d4efc:
    // 0x2d4efc: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2d4f00:
    if (ctx->pc == 0x2D4F00u) {
        ctx->pc = 0x2D4F04u;
        goto label_2d4f04;
    }
    ctx->pc = 0x2D4EFCu;
    {
        const bool branch_taken_0x2d4efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4efc) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4F04u;
label_2d4f04:
    // 0x2d4f04: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2d4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2d4f08:
    // 0x2d4f08: 0xa3a0022a  sb          $zero, 0x22A($sp)
    ctx->pc = 0x2d4f08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 0));
label_2d4f0c:
    // 0x2d4f0c: 0xa3a00229  sb          $zero, 0x229($sp)
    ctx->pc = 0x2d4f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 553), (uint8_t)GPR_U32(ctx, 0));
label_2d4f10:
    // 0x2d4f10: 0x419c3  sra         $v1, $a0, 7
    ctx->pc = 0x2d4f10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
label_2d4f14:
    // 0x2d4f14: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2d4f18:
    if (ctx->pc == 0x2D4F18u) {
        ctx->pc = 0x2D4F18u;
            // 0x2d4f18: 0xa3a00228  sb          $zero, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2D4F1Cu;
        goto label_2d4f1c;
    }
    ctx->pc = 0x2D4F14u;
    {
        const bool branch_taken_0x2d4f14 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D4F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4F14u;
            // 0x2d4f18: 0xa3a00228  sb          $zero, 0x228($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f14) {
            ctx->pc = 0x2D4F24u;
            goto label_2d4f24;
        }
    }
    ctx->pc = 0x2D4F1Cu;
label_2d4f1c:
    // 0x2d4f1c: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x2d4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_2d4f20:
    // 0x2d4f20: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x2d4f20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_2d4f24:
    // 0x2d4f24: 0xa3a3022b  sb          $v1, 0x22B($sp)
    ctx->pc = 0x2d4f24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 3));
label_2d4f28:
    // 0x2d4f28: 0x10000017  b           . + 4 + (0x17 << 2)
label_2d4f2c:
    if (ctx->pc == 0x2D4F2Cu) {
        ctx->pc = 0x2D4F2Cu;
            // 0x2d4f2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F30u;
        goto label_2d4f30;
    }
    ctx->pc = 0x2D4F28u;
    {
        const bool branch_taken_0x2d4f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4F28u;
            // 0x2d4f2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f28) {
            ctx->pc = 0x2D4F88u;
            goto label_2d4f88;
        }
    }
    ctx->pc = 0x2D4F30u;
label_2d4f30:
    // 0x2d4f30: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d4f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4f34:
    // 0x2d4f34: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4f38:
    // 0x2d4f38: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d4f38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4f3c:
    // 0x2d4f3c: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d4f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4f40:
    // 0x2d4f40: 0xc04f8e4  jal         func_13E390
label_2d4f44:
    if (ctx->pc == 0x2D4F44u) {
        ctx->pc = 0x2D4F44u;
            // 0x2d4f44: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2D4F48u;
        goto label_2d4f48;
    }
    ctx->pc = 0x2D4F40u;
    SET_GPR_U32(ctx, 31, 0x2D4F48u);
    ctx->pc = 0x2D4F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4F40u;
            // 0x2d4f44: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F48u; }
        if (ctx->pc != 0x2D4F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F48u; }
        if (ctx->pc != 0x2D4F48u) { return; }
    }
    ctx->pc = 0x2D4F48u;
label_2d4f48:
    // 0x2d4f48: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d4f4c:
    // 0x2d4f4c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2d4f50:
    // 0x2d4f50: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d4f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d4f54:
    // 0x2d4f54: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d4f58:
    // 0x2d4f58: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d4f5c:
    // 0x2d4f5c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d4f60:
    // 0x2d4f60: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x2d4f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d4f64:
    // 0x2d4f64: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2d4f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2d4f68:
    // 0x2d4f68: 0xc04f8e4  jal         func_13E390
label_2d4f6c:
    if (ctx->pc == 0x2D4F6Cu) {
        ctx->pc = 0x2D4F6Cu;
            // 0x2d4f6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2D4F70u;
        goto label_2d4f70;
    }
    ctx->pc = 0x2D4F68u;
    SET_GPR_U32(ctx, 31, 0x2D4F70u);
    ctx->pc = 0x2D4F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4F68u;
            // 0x2d4f6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F70u; }
        if (ctx->pc != 0x2D4F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F70u; }
        if (ctx->pc != 0x2D4F70u) { return; }
    }
    ctx->pc = 0x2D4F70u;
label_2d4f70:
    // 0x2d4f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4f74:
    // 0x2d4f74: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2d4f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2d4f78:
    // 0x2d4f78: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2d4f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2d4f7c:
    // 0x2d4f7c: 0xc0b5280  jal         func_2D4A00
label_2d4f80:
    if (ctx->pc == 0x2D4F80u) {
        ctx->pc = 0x2D4F80u;
            // 0x2d4f80: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D4F84u;
        goto label_2d4f84;
    }
    ctx->pc = 0x2D4F7Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F84u);
    ctx->pc = 0x2D4F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4F7Cu;
            // 0x2d4f80: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F84u; }
        if (ctx->pc != 0x2D4F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F84u; }
        if (ctx->pc != 0x2D4F84u) { return; }
    }
    ctx->pc = 0x2D4F84u;
label_2d4f84:
    // 0x2d4f84: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2d4f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2d4f88:
    // 0x2d4f88: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2d4f8c:
    // 0x2d4f8c: 0x24636d90  addiu       $v1, $v1, 0x6D90
    ctx->pc = 0x2d4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28048));
label_2d4f90:
    // 0x2d4f90: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x2d4f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2d4f94:
    // 0x2d4f94: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2d4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2d4f98:
    // 0x2d4f98: 0x1c60ffe5  bgtz        $v1, . + 4 + (-0x1B << 2)
label_2d4f9c:
    if (ctx->pc == 0x2D4F9Cu) {
        ctx->pc = 0x2D4FA0u;
        goto label_2d4fa0;
    }
    ctx->pc = 0x2D4F98u;
    {
        const bool branch_taken_0x2d4f98 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2d4f98) {
            ctx->pc = 0x2D4F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4f30;
        }
    }
    ctx->pc = 0x2D4FA0u;
label_2d4fa0:
    // 0x2d4fa0: 0x10000087  b           . + 4 + (0x87 << 2)
label_2d4fa4:
    if (ctx->pc == 0x2D4FA4u) {
        ctx->pc = 0x2D4FA8u;
        goto label_2d4fa8;
    }
    ctx->pc = 0x2D4FA0u;
    {
        const bool branch_taken_0x2d4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4fa0) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D4FA8u;
label_2d4fa8:
    // 0x2d4fa8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2d4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d4fac:
    // 0x2d4fac: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x2d4facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_2d4fb0:
    // 0x2d4fb0: 0xa3a40228  sb          $a0, 0x228($sp)
    ctx->pc = 0x2d4fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 4));
label_2d4fb4:
    // 0x2d4fb4: 0x27a20229  addiu       $v0, $sp, 0x229
    ctx->pc = 0x2d4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 553));
label_2d4fb8:
    // 0x2d4fb8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2d4fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2d4fbc:
    // 0x2d4fbc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2d4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2d4fc0:
    // 0x2d4fc0: 0x27a2022a  addiu       $v0, $sp, 0x22A
    ctx->pc = 0x2d4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 554));
label_2d4fc4:
    // 0x2d4fc4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2d4fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2d4fc8:
    // 0x2d4fc8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d4fcc:
    if (ctx->pc == 0x2D4FCCu) {
        ctx->pc = 0x2D4FCCu;
            // 0x2d4fcc: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->pc = 0x2D4FD0u;
        goto label_2d4fd0;
    }
    ctx->pc = 0x2D4FC8u;
    {
        const bool branch_taken_0x2d4fc8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D4FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4FC8u;
            // 0x2d4fcc: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4fc8) {
            ctx->pc = 0x2D4FD8u;
            goto label_2d4fd8;
        }
    }
    ctx->pc = 0x2D4FD0u;
label_2d4fd0:
    // 0x2d4fd0: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d4fd4:
    // 0x2d4fd4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d4fd8:
    // 0x2d4fd8: 0x27be022b  addiu       $fp, $sp, 0x22B
    ctx->pc = 0x2d4fd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 555));
label_2d4fdc:
    // 0x2d4fdc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2d4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2d4fe0:
    // 0x2d4fe0: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x2d4fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d4fe4:
    // 0x2d4fe4: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x2d4fe4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d4fe8:
    // 0x2d4fe8: 0x8fb200b8  lw          $s2, 0xB8($sp)
    ctx->pc = 0x2d4fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d4fec:
    // 0x2d4fec: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x2d4fecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d4ff0:
    // 0x2d4ff0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d4ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d4ff4:
    // 0x2d4ff4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d4ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ff8:
    // 0x2d4ff8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d4ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ffc:
    // 0x2d4ffc: 0xc04f8e4  jal         func_13E390
label_2d5000:
    if (ctx->pc == 0x2D5000u) {
        ctx->pc = 0x2D5000u;
            // 0x2d5000: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D5004u;
        goto label_2d5004;
    }
    ctx->pc = 0x2D4FFCu;
    SET_GPR_U32(ctx, 31, 0x2D5004u);
    ctx->pc = 0x2D5000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4FFCu;
            // 0x2d5000: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5004u; }
        if (ctx->pc != 0x2D5004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5004u; }
        if (ctx->pc != 0x2D5004u) { return; }
    }
    ctx->pc = 0x2D5004u;
label_2d5004:
    // 0x2d5004: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x2d5004u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d5008:
    // 0x2d5008: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d5008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2d500c:
    // 0x2d500c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d5010:
    // 0x2d5010: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x2d5010u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d5014:
    // 0x2d5014: 0x8fb400ac  lw          $s4, 0xAC($sp)
    ctx->pc = 0x2d5014u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d5018:
    // 0x2d5018: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d501c:
    // 0x2d501c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2d501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d5020:
    // 0x2d5020: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d5020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d5024:
    // 0x2d5024: 0xc04f8e4  jal         func_13E390
label_2d5028:
    if (ctx->pc == 0x2D5028u) {
        ctx->pc = 0x2D5028u;
            // 0x2d5028: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D502Cu;
        goto label_2d502c;
    }
    ctx->pc = 0x2D5024u;
    SET_GPR_U32(ctx, 31, 0x2D502Cu);
    ctx->pc = 0x2D5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5024u;
            // 0x2d5028: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D502Cu; }
        if (ctx->pc != 0x2D502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D502Cu; }
        if (ctx->pc != 0x2D502Cu) { return; }
    }
    ctx->pc = 0x2D502Cu;
label_2d502c:
    // 0x2d502c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5030:
    // 0x2d5030: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2d5030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2d5034:
    // 0x2d5034: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2d5034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2d5038:
    // 0x2d5038: 0xc0b5280  jal         func_2D4A00
label_2d503c:
    if (ctx->pc == 0x2D503Cu) {
        ctx->pc = 0x2D503Cu;
            // 0x2d503c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D5040u;
        goto label_2d5040;
    }
    ctx->pc = 0x2D5038u;
    SET_GPR_U32(ctx, 31, 0x2D5040u);
    ctx->pc = 0x2D503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5038u;
            // 0x2d503c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5040u; }
        if (ctx->pc != 0x2D5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5040u; }
        if (ctx->pc != 0x2D5040u) { return; }
    }
    ctx->pc = 0x2D5040u;
label_2d5040:
    // 0x2d5040: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2d5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_2d5044:
    // 0x2d5044: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x2d5044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2d5048:
    // 0x2d5048: 0xa3a20228  sb          $v0, 0x228($sp)
    ctx->pc = 0x2d5048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 2));
label_2d504c:
    // 0x2d504c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x2d504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2d5050:
    // 0x2d5050: 0x27a20229  addiu       $v0, $sp, 0x229
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 553));
label_2d5054:
    // 0x2d5054: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d5054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2d5058:
    // 0x2d5058: 0x27a2022a  addiu       $v0, $sp, 0x22A
    ctx->pc = 0x2d5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 554));
label_2d505c:
    // 0x2d505c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_2d5060:
    // 0x2d5060: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2d5060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2d5064:
    // 0x2d5064: 0x1011fc  dsll32      $v0, $s0, 7
    ctx->pc = 0x2d5064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 7));
label_2d5068:
    // 0x2d5068: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d506c:
    if (ctx->pc == 0x2D506Cu) {
        ctx->pc = 0x2D506Cu;
            // 0x2d506c: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->pc = 0x2D5070u;
        goto label_2d5070;
    }
    ctx->pc = 0x2D5068u;
    {
        const bool branch_taken_0x2d5068 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5068u;
            // 0x2d506c: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5068) {
            ctx->pc = 0x2D5078u;
            goto label_2d5078;
        }
    }
    ctx->pc = 0x2D5070u;
label_2d5070:
    // 0x2d5070: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d5070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d5074:
    // 0x2d5074: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d5074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d5078:
    // 0x2d5078: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x2d5078u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d507c:
    // 0x2d507c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2d507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2d5080:
    // 0x2d5080: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d5080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d5084:
    // 0x2d5084: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d5084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d5088:
    // 0x2d5088: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d5088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d508c:
    // 0x2d508c: 0xc04f8e4  jal         func_13E390
label_2d5090:
    if (ctx->pc == 0x2D5090u) {
        ctx->pc = 0x2D5090u;
            // 0x2d5090: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D5094u;
        goto label_2d5094;
    }
    ctx->pc = 0x2D508Cu;
    SET_GPR_U32(ctx, 31, 0x2D5094u);
    ctx->pc = 0x2D5090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D508Cu;
            // 0x2d5090: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5094u; }
        if (ctx->pc != 0x2D5094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5094u; }
        if (ctx->pc != 0x2D5094u) { return; }
    }
    ctx->pc = 0x2D5094u;
label_2d5094:
    // 0x2d5094: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d5098:
    // 0x2d5098: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x2d5098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2d509c:
    // 0x2d509c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2d509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2d50a0:
    // 0x2d50a0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d50a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d50a4:
    // 0x2d50a4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d50a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d50a8:
    // 0x2d50a8: 0xc04f8e4  jal         func_13E390
label_2d50ac:
    if (ctx->pc == 0x2D50ACu) {
        ctx->pc = 0x2D50ACu;
            // 0x2d50ac: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2D50B0u;
        goto label_2d50b0;
    }
    ctx->pc = 0x2D50A8u;
    SET_GPR_U32(ctx, 31, 0x2D50B0u);
    ctx->pc = 0x2D50ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D50A8u;
            // 0x2d50ac: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50B0u; }
        if (ctx->pc != 0x2D50B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50B0u; }
        if (ctx->pc != 0x2D50B0u) { return; }
    }
    ctx->pc = 0x2D50B0u;
label_2d50b0:
    // 0x2d50b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d50b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d50b4:
    // 0x2d50b4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2d50b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2d50b8:
    // 0x2d50b8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2d50b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2d50bc:
    // 0x2d50bc: 0xc0b5280  jal         func_2D4A00
label_2d50c0:
    if (ctx->pc == 0x2D50C0u) {
        ctx->pc = 0x2D50C0u;
            // 0x2d50c0: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D50C4u;
        goto label_2d50c4;
    }
    ctx->pc = 0x2D50BCu;
    SET_GPR_U32(ctx, 31, 0x2D50C4u);
    ctx->pc = 0x2D50C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D50BCu;
            // 0x2d50c0: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50C4u; }
        if (ctx->pc != 0x2D50C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50C4u; }
        if (ctx->pc != 0x2D50C4u) { return; }
    }
    ctx->pc = 0x2D50C4u;
label_2d50c4:
    // 0x2d50c4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d50c8:
    // 0x2d50c8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d50c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d50cc:
    // 0x2d50cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d50ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d50d0:
    // 0x2d50d0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2d50d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d50d4:
    // 0x2d50d4: 0xc04f8e4  jal         func_13E390
label_2d50d8:
    if (ctx->pc == 0x2D50D8u) {
        ctx->pc = 0x2D50D8u;
            // 0x2d50d8: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2D50DCu;
        goto label_2d50dc;
    }
    ctx->pc = 0x2D50D4u;
    SET_GPR_U32(ctx, 31, 0x2D50DCu);
    ctx->pc = 0x2D50D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D50D4u;
            // 0x2d50d8: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50DCu; }
        if (ctx->pc != 0x2D50DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50DCu; }
        if (ctx->pc != 0x2D50DCu) { return; }
    }
    ctx->pc = 0x2D50DCu;
label_2d50dc:
    // 0x2d50dc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d50e0:
    // 0x2d50e0: 0x2666fffe  addiu       $a2, $s3, -0x2
    ctx->pc = 0x2d50e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_2d50e4:
    // 0x2d50e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d50e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d50e8:
    // 0x2d50e8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d50e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d50ec:
    // 0x2d50ec: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2d50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2d50f0:
    // 0x2d50f0: 0xc04f8e4  jal         func_13E390
label_2d50f4:
    if (ctx->pc == 0x2D50F4u) {
        ctx->pc = 0x2D50F4u;
            // 0x2d50f4: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->pc = 0x2D50F8u;
        goto label_2d50f8;
    }
    ctx->pc = 0x2D50F0u;
    SET_GPR_U32(ctx, 31, 0x2D50F8u);
    ctx->pc = 0x2D50F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D50F0u;
            // 0x2d50f4: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50F8u; }
        if (ctx->pc != 0x2D50F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D50F8u; }
        if (ctx->pc != 0x2D50F8u) { return; }
    }
    ctx->pc = 0x2D50F8u;
label_2d50f8:
    // 0x2d50f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d50f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d50fc:
    // 0x2d50fc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2d50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2d5100:
    // 0x2d5100: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2d5100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2d5104:
    // 0x2d5104: 0xc0b5280  jal         func_2D4A00
label_2d5108:
    if (ctx->pc == 0x2D5108u) {
        ctx->pc = 0x2D5108u;
            // 0x2d5108: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D510Cu;
        goto label_2d510c;
    }
    ctx->pc = 0x2D5104u;
    SET_GPR_U32(ctx, 31, 0x2D510Cu);
    ctx->pc = 0x2D5108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5104u;
            // 0x2d5108: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D510Cu; }
        if (ctx->pc != 0x2D510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D510Cu; }
        if (ctx->pc != 0x2D510Cu) { return; }
    }
    ctx->pc = 0x2D510Cu;
label_2d510c:
    // 0x2d510c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2d5110:
    if (ctx->pc == 0x2D5110u) {
        ctx->pc = 0x2D5114u;
        goto label_2d5114;
    }
    ctx->pc = 0x2D510Cu;
    {
        const bool branch_taken_0x2d510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d510c) {
            ctx->pc = 0x2D51C0u;
            goto label_2d51c0;
        }
    }
    ctx->pc = 0x2D5114u;
label_2d5114:
    // 0x2d5114: 0x10000023  b           . + 4 + (0x23 << 2)
label_2d5118:
    if (ctx->pc == 0x2D5118u) {
        ctx->pc = 0x2D5118u;
            // 0x2d5118: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D511Cu;
        goto label_2d511c;
    }
    ctx->pc = 0x2D5114u;
    {
        const bool branch_taken_0x2d5114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5114u;
            // 0x2d5118: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5114) {
            ctx->pc = 0x2D51A4u;
            goto label_2d51a4;
        }
    }
    ctx->pc = 0x2D511Cu;
label_2d511c:
    // 0x2d511c: 0x82640008  lb          $a0, 0x8($s3)
    ctx->pc = 0x2d511cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_2d5120:
    // 0x2d5120: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2d5120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d5124:
    // 0x2d5124: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x2d5124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
label_2d5128:
    // 0x2d5128: 0xa3a40228  sb          $a0, 0x228($sp)
    ctx->pc = 0x2d5128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 552), (uint8_t)GPR_U32(ctx, 4));
label_2d512c:
    // 0x2d512c: 0x8264000c  lb          $a0, 0xC($s3)
    ctx->pc = 0x2d512cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_2d5130:
    // 0x2d5130: 0xa3a40229  sb          $a0, 0x229($sp)
    ctx->pc = 0x2d5130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 553), (uint8_t)GPR_U32(ctx, 4));
label_2d5134:
    // 0x2d5134: 0x82640010  lb          $a0, 0x10($s3)
    ctx->pc = 0x2d5134u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_2d5138:
    // 0x2d5138: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2d513c:
    if (ctx->pc == 0x2D513Cu) {
        ctx->pc = 0x2D513Cu;
            // 0x2d513c: 0xa3a4022a  sb          $a0, 0x22A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2D5140u;
        goto label_2d5140;
    }
    ctx->pc = 0x2D5138u;
    {
        const bool branch_taken_0x2d5138 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5138u;
            // 0x2d513c: 0xa3a4022a  sb          $a0, 0x22A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 554), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5138) {
            ctx->pc = 0x2D5148u;
            goto label_2d5148;
        }
    }
    ctx->pc = 0x2D5140u;
label_2d5140:
    // 0x2d5140: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d5140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_2d5144:
    // 0x2d5144: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d5144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d5148:
    // 0x2d5148: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d5148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2d514c:
    // 0x2d514c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2d514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2d5150:
    // 0x2d5150: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d5150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2d5154:
    // 0x2d5154: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d5154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2d5158:
    // 0x2d5158: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d5158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2d515c:
    // 0x2d515c: 0xc04f8e4  jal         func_13E390
label_2d5160:
    if (ctx->pc == 0x2D5160u) {
        ctx->pc = 0x2D5160u;
            // 0x2d5160: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2D5164u;
        goto label_2d5164;
    }
    ctx->pc = 0x2D515Cu;
    SET_GPR_U32(ctx, 31, 0x2D5164u);
    ctx->pc = 0x2D5160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D515Cu;
            // 0x2d5160: 0xa3a2022b  sb          $v0, 0x22B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 555), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5164u; }
        if (ctx->pc != 0x2D5164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5164u; }
        if (ctx->pc != 0x2D5164u) { return; }
    }
    ctx->pc = 0x2D5164u;
label_2d5164:
    // 0x2d5164: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d5164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2d5168:
    // 0x2d5168: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2d5168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2d516c:
    // 0x2d516c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2d516cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5170:
    // 0x2d5170: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d5174:
    // 0x2d5174: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2d5174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2d5178:
    // 0x2d5178: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2d5178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2d517c:
    // 0x2d517c: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x2d517cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2d5180:
    // 0x2d5180: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2d5180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2d5184:
    // 0x2d5184: 0xc04f8e4  jal         func_13E390
label_2d5188:
    if (ctx->pc == 0x2D5188u) {
        ctx->pc = 0x2D5188u;
            // 0x2d5188: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2D518Cu;
        goto label_2d518c;
    }
    ctx->pc = 0x2D5184u;
    SET_GPR_U32(ctx, 31, 0x2D518Cu);
    ctx->pc = 0x2D5188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5184u;
            // 0x2d5188: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D518Cu; }
        if (ctx->pc != 0x2D518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D518Cu; }
        if (ctx->pc != 0x2D518Cu) { return; }
    }
    ctx->pc = 0x2D518Cu;
label_2d518c:
    // 0x2d518c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5190:
    // 0x2d5190: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2d5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2d5194:
    // 0x2d5194: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2d5198:
    // 0x2d5198: 0xc0b5280  jal         func_2D4A00
label_2d519c:
    if (ctx->pc == 0x2D519Cu) {
        ctx->pc = 0x2D519Cu;
            // 0x2d519c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x2D51A0u;
        goto label_2d51a0;
    }
    ctx->pc = 0x2D5198u;
    SET_GPR_U32(ctx, 31, 0x2D51A0u);
    ctx->pc = 0x2D519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5198u;
            // 0x2d519c: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D51A0u; }
        if (ctx->pc != 0x2D51A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D51A0u; }
        if (ctx->pc != 0x2D51A0u) { return; }
    }
    ctx->pc = 0x2D51A0u;
label_2d51a0:
    // 0x2d51a0: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x2d51a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2d51a4:
    // 0x2d51a4: 0x0  nop
    ctx->pc = 0x2d51a4u;
    // NOP
label_2d51a8:
    // 0x2d51a8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2d51ac:
    // 0x2d51ac: 0x24636e90  addiu       $v1, $v1, 0x6E90
    ctx->pc = 0x2d51acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28304));
label_2d51b0:
    // 0x2d51b0: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x2d51b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2d51b4:
    // 0x2d51b4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2d51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d51b8:
    // 0x2d51b8: 0x1c60ffd8  bgtz        $v1, . + 4 + (-0x28 << 2)
label_2d51bc:
    if (ctx->pc == 0x2D51BCu) {
        ctx->pc = 0x2D51C0u;
        goto label_2d51c0;
    }
    ctx->pc = 0x2D51B8u;
    {
        const bool branch_taken_0x2d51b8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2d51b8) {
            ctx->pc = 0x2D511Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d511c;
        }
    }
    ctx->pc = 0x2D51C0u;
label_2d51c0:
    // 0x2d51c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d51c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2d51c4:
    // 0x2d51c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d51c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d51c8:
    // 0x2d51c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d51c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d51cc:
    // 0x2d51cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d51ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d51d0:
    // 0x2d51d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d51d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d51d4:
    // 0x2d51d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d51d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d51d8:
    // 0x2d51d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d51d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d51dc:
    // 0x2d51dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d51dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d51e0:
    // 0x2d51e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d51e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d51e4:
    // 0x2d51e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d51e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d51e8:
    // 0x2d51e8: 0x3e00008  jr          $ra
label_2d51ec:
    if (ctx->pc == 0x2D51ECu) {
        ctx->pc = 0x2D51ECu;
            // 0x2d51ec: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2D51F0u;
        goto label_fallthrough_0x2d51e8;
    }
    ctx->pc = 0x2D51E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D51ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D51E8u;
            // 0x2d51ec: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d51e8:
    ctx->pc = 0x2D51F0u;
}
