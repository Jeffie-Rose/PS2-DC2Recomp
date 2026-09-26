#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEditInfo__8CEditMapFPciP9mgCMemory
// Address: 0x1b4ac0 - 0x1b5358
void LoadEditInfo__8CEditMapFPciP9mgCMemory_0x1b4ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEditInfo__8CEditMapFPciP9mgCMemory_0x1b4ac0");
#endif

    switch (ctx->pc) {
        case 0x1b4ac0u: goto label_1b4ac0;
        case 0x1b4ac4u: goto label_1b4ac4;
        case 0x1b4ac8u: goto label_1b4ac8;
        case 0x1b4accu: goto label_1b4acc;
        case 0x1b4ad0u: goto label_1b4ad0;
        case 0x1b4ad4u: goto label_1b4ad4;
        case 0x1b4ad8u: goto label_1b4ad8;
        case 0x1b4adcu: goto label_1b4adc;
        case 0x1b4ae0u: goto label_1b4ae0;
        case 0x1b4ae4u: goto label_1b4ae4;
        case 0x1b4ae8u: goto label_1b4ae8;
        case 0x1b4aecu: goto label_1b4aec;
        case 0x1b4af0u: goto label_1b4af0;
        case 0x1b4af4u: goto label_1b4af4;
        case 0x1b4af8u: goto label_1b4af8;
        case 0x1b4afcu: goto label_1b4afc;
        case 0x1b4b00u: goto label_1b4b00;
        case 0x1b4b04u: goto label_1b4b04;
        case 0x1b4b08u: goto label_1b4b08;
        case 0x1b4b0cu: goto label_1b4b0c;
        case 0x1b4b10u: goto label_1b4b10;
        case 0x1b4b14u: goto label_1b4b14;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b1cu: goto label_1b4b1c;
        case 0x1b4b20u: goto label_1b4b20;
        case 0x1b4b24u: goto label_1b4b24;
        case 0x1b4b28u: goto label_1b4b28;
        case 0x1b4b2cu: goto label_1b4b2c;
        case 0x1b4b30u: goto label_1b4b30;
        case 0x1b4b34u: goto label_1b4b34;
        case 0x1b4b38u: goto label_1b4b38;
        case 0x1b4b3cu: goto label_1b4b3c;
        case 0x1b4b40u: goto label_1b4b40;
        case 0x1b4b44u: goto label_1b4b44;
        case 0x1b4b48u: goto label_1b4b48;
        case 0x1b4b4cu: goto label_1b4b4c;
        case 0x1b4b50u: goto label_1b4b50;
        case 0x1b4b54u: goto label_1b4b54;
        case 0x1b4b58u: goto label_1b4b58;
        case 0x1b4b5cu: goto label_1b4b5c;
        case 0x1b4b60u: goto label_1b4b60;
        case 0x1b4b64u: goto label_1b4b64;
        case 0x1b4b68u: goto label_1b4b68;
        case 0x1b4b6cu: goto label_1b4b6c;
        case 0x1b4b70u: goto label_1b4b70;
        case 0x1b4b74u: goto label_1b4b74;
        case 0x1b4b78u: goto label_1b4b78;
        case 0x1b4b7cu: goto label_1b4b7c;
        case 0x1b4b80u: goto label_1b4b80;
        case 0x1b4b84u: goto label_1b4b84;
        case 0x1b4b88u: goto label_1b4b88;
        case 0x1b4b8cu: goto label_1b4b8c;
        case 0x1b4b90u: goto label_1b4b90;
        case 0x1b4b94u: goto label_1b4b94;
        case 0x1b4b98u: goto label_1b4b98;
        case 0x1b4b9cu: goto label_1b4b9c;
        case 0x1b4ba0u: goto label_1b4ba0;
        case 0x1b4ba4u: goto label_1b4ba4;
        case 0x1b4ba8u: goto label_1b4ba8;
        case 0x1b4bacu: goto label_1b4bac;
        case 0x1b4bb0u: goto label_1b4bb0;
        case 0x1b4bb4u: goto label_1b4bb4;
        case 0x1b4bb8u: goto label_1b4bb8;
        case 0x1b4bbcu: goto label_1b4bbc;
        case 0x1b4bc0u: goto label_1b4bc0;
        case 0x1b4bc4u: goto label_1b4bc4;
        case 0x1b4bc8u: goto label_1b4bc8;
        case 0x1b4bccu: goto label_1b4bcc;
        case 0x1b4bd0u: goto label_1b4bd0;
        case 0x1b4bd4u: goto label_1b4bd4;
        case 0x1b4bd8u: goto label_1b4bd8;
        case 0x1b4bdcu: goto label_1b4bdc;
        case 0x1b4be0u: goto label_1b4be0;
        case 0x1b4be4u: goto label_1b4be4;
        case 0x1b4be8u: goto label_1b4be8;
        case 0x1b4becu: goto label_1b4bec;
        case 0x1b4bf0u: goto label_1b4bf0;
        case 0x1b4bf4u: goto label_1b4bf4;
        case 0x1b4bf8u: goto label_1b4bf8;
        case 0x1b4bfcu: goto label_1b4bfc;
        case 0x1b4c00u: goto label_1b4c00;
        case 0x1b4c04u: goto label_1b4c04;
        case 0x1b4c08u: goto label_1b4c08;
        case 0x1b4c0cu: goto label_1b4c0c;
        case 0x1b4c10u: goto label_1b4c10;
        case 0x1b4c14u: goto label_1b4c14;
        case 0x1b4c18u: goto label_1b4c18;
        case 0x1b4c1cu: goto label_1b4c1c;
        case 0x1b4c20u: goto label_1b4c20;
        case 0x1b4c24u: goto label_1b4c24;
        case 0x1b4c28u: goto label_1b4c28;
        case 0x1b4c2cu: goto label_1b4c2c;
        case 0x1b4c30u: goto label_1b4c30;
        case 0x1b4c34u: goto label_1b4c34;
        case 0x1b4c38u: goto label_1b4c38;
        case 0x1b4c3cu: goto label_1b4c3c;
        case 0x1b4c40u: goto label_1b4c40;
        case 0x1b4c44u: goto label_1b4c44;
        case 0x1b4c48u: goto label_1b4c48;
        case 0x1b4c4cu: goto label_1b4c4c;
        case 0x1b4c50u: goto label_1b4c50;
        case 0x1b4c54u: goto label_1b4c54;
        case 0x1b4c58u: goto label_1b4c58;
        case 0x1b4c5cu: goto label_1b4c5c;
        case 0x1b4c60u: goto label_1b4c60;
        case 0x1b4c64u: goto label_1b4c64;
        case 0x1b4c68u: goto label_1b4c68;
        case 0x1b4c6cu: goto label_1b4c6c;
        case 0x1b4c70u: goto label_1b4c70;
        case 0x1b4c74u: goto label_1b4c74;
        case 0x1b4c78u: goto label_1b4c78;
        case 0x1b4c7cu: goto label_1b4c7c;
        case 0x1b4c80u: goto label_1b4c80;
        case 0x1b4c84u: goto label_1b4c84;
        case 0x1b4c88u: goto label_1b4c88;
        case 0x1b4c8cu: goto label_1b4c8c;
        case 0x1b4c90u: goto label_1b4c90;
        case 0x1b4c94u: goto label_1b4c94;
        case 0x1b4c98u: goto label_1b4c98;
        case 0x1b4c9cu: goto label_1b4c9c;
        case 0x1b4ca0u: goto label_1b4ca0;
        case 0x1b4ca4u: goto label_1b4ca4;
        case 0x1b4ca8u: goto label_1b4ca8;
        case 0x1b4cacu: goto label_1b4cac;
        case 0x1b4cb0u: goto label_1b4cb0;
        case 0x1b4cb4u: goto label_1b4cb4;
        case 0x1b4cb8u: goto label_1b4cb8;
        case 0x1b4cbcu: goto label_1b4cbc;
        case 0x1b4cc0u: goto label_1b4cc0;
        case 0x1b4cc4u: goto label_1b4cc4;
        case 0x1b4cc8u: goto label_1b4cc8;
        case 0x1b4cccu: goto label_1b4ccc;
        case 0x1b4cd0u: goto label_1b4cd0;
        case 0x1b4cd4u: goto label_1b4cd4;
        case 0x1b4cd8u: goto label_1b4cd8;
        case 0x1b4cdcu: goto label_1b4cdc;
        case 0x1b4ce0u: goto label_1b4ce0;
        case 0x1b4ce4u: goto label_1b4ce4;
        case 0x1b4ce8u: goto label_1b4ce8;
        case 0x1b4cecu: goto label_1b4cec;
        case 0x1b4cf0u: goto label_1b4cf0;
        case 0x1b4cf4u: goto label_1b4cf4;
        case 0x1b4cf8u: goto label_1b4cf8;
        case 0x1b4cfcu: goto label_1b4cfc;
        case 0x1b4d00u: goto label_1b4d00;
        case 0x1b4d04u: goto label_1b4d04;
        case 0x1b4d08u: goto label_1b4d08;
        case 0x1b4d0cu: goto label_1b4d0c;
        case 0x1b4d10u: goto label_1b4d10;
        case 0x1b4d14u: goto label_1b4d14;
        case 0x1b4d18u: goto label_1b4d18;
        case 0x1b4d1cu: goto label_1b4d1c;
        case 0x1b4d20u: goto label_1b4d20;
        case 0x1b4d24u: goto label_1b4d24;
        case 0x1b4d28u: goto label_1b4d28;
        case 0x1b4d2cu: goto label_1b4d2c;
        case 0x1b4d30u: goto label_1b4d30;
        case 0x1b4d34u: goto label_1b4d34;
        case 0x1b4d38u: goto label_1b4d38;
        case 0x1b4d3cu: goto label_1b4d3c;
        case 0x1b4d40u: goto label_1b4d40;
        case 0x1b4d44u: goto label_1b4d44;
        case 0x1b4d48u: goto label_1b4d48;
        case 0x1b4d4cu: goto label_1b4d4c;
        case 0x1b4d50u: goto label_1b4d50;
        case 0x1b4d54u: goto label_1b4d54;
        case 0x1b4d58u: goto label_1b4d58;
        case 0x1b4d5cu: goto label_1b4d5c;
        case 0x1b4d60u: goto label_1b4d60;
        case 0x1b4d64u: goto label_1b4d64;
        case 0x1b4d68u: goto label_1b4d68;
        case 0x1b4d6cu: goto label_1b4d6c;
        case 0x1b4d70u: goto label_1b4d70;
        case 0x1b4d74u: goto label_1b4d74;
        case 0x1b4d78u: goto label_1b4d78;
        case 0x1b4d7cu: goto label_1b4d7c;
        case 0x1b4d80u: goto label_1b4d80;
        case 0x1b4d84u: goto label_1b4d84;
        case 0x1b4d88u: goto label_1b4d88;
        case 0x1b4d8cu: goto label_1b4d8c;
        case 0x1b4d90u: goto label_1b4d90;
        case 0x1b4d94u: goto label_1b4d94;
        case 0x1b4d98u: goto label_1b4d98;
        case 0x1b4d9cu: goto label_1b4d9c;
        case 0x1b4da0u: goto label_1b4da0;
        case 0x1b4da4u: goto label_1b4da4;
        case 0x1b4da8u: goto label_1b4da8;
        case 0x1b4dacu: goto label_1b4dac;
        case 0x1b4db0u: goto label_1b4db0;
        case 0x1b4db4u: goto label_1b4db4;
        case 0x1b4db8u: goto label_1b4db8;
        case 0x1b4dbcu: goto label_1b4dbc;
        case 0x1b4dc0u: goto label_1b4dc0;
        case 0x1b4dc4u: goto label_1b4dc4;
        case 0x1b4dc8u: goto label_1b4dc8;
        case 0x1b4dccu: goto label_1b4dcc;
        case 0x1b4dd0u: goto label_1b4dd0;
        case 0x1b4dd4u: goto label_1b4dd4;
        case 0x1b4dd8u: goto label_1b4dd8;
        case 0x1b4ddcu: goto label_1b4ddc;
        case 0x1b4de0u: goto label_1b4de0;
        case 0x1b4de4u: goto label_1b4de4;
        case 0x1b4de8u: goto label_1b4de8;
        case 0x1b4decu: goto label_1b4dec;
        case 0x1b4df0u: goto label_1b4df0;
        case 0x1b4df4u: goto label_1b4df4;
        case 0x1b4df8u: goto label_1b4df8;
        case 0x1b4dfcu: goto label_1b4dfc;
        case 0x1b4e00u: goto label_1b4e00;
        case 0x1b4e04u: goto label_1b4e04;
        case 0x1b4e08u: goto label_1b4e08;
        case 0x1b4e0cu: goto label_1b4e0c;
        case 0x1b4e10u: goto label_1b4e10;
        case 0x1b4e14u: goto label_1b4e14;
        case 0x1b4e18u: goto label_1b4e18;
        case 0x1b4e1cu: goto label_1b4e1c;
        case 0x1b4e20u: goto label_1b4e20;
        case 0x1b4e24u: goto label_1b4e24;
        case 0x1b4e28u: goto label_1b4e28;
        case 0x1b4e2cu: goto label_1b4e2c;
        case 0x1b4e30u: goto label_1b4e30;
        case 0x1b4e34u: goto label_1b4e34;
        case 0x1b4e38u: goto label_1b4e38;
        case 0x1b4e3cu: goto label_1b4e3c;
        case 0x1b4e40u: goto label_1b4e40;
        case 0x1b4e44u: goto label_1b4e44;
        case 0x1b4e48u: goto label_1b4e48;
        case 0x1b4e4cu: goto label_1b4e4c;
        case 0x1b4e50u: goto label_1b4e50;
        case 0x1b4e54u: goto label_1b4e54;
        case 0x1b4e58u: goto label_1b4e58;
        case 0x1b4e5cu: goto label_1b4e5c;
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4e64u: goto label_1b4e64;
        case 0x1b4e68u: goto label_1b4e68;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e70u: goto label_1b4e70;
        case 0x1b4e74u: goto label_1b4e74;
        case 0x1b4e78u: goto label_1b4e78;
        case 0x1b4e7cu: goto label_1b4e7c;
        case 0x1b4e80u: goto label_1b4e80;
        case 0x1b4e84u: goto label_1b4e84;
        case 0x1b4e88u: goto label_1b4e88;
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4e90u: goto label_1b4e90;
        case 0x1b4e94u: goto label_1b4e94;
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4e9cu: goto label_1b4e9c;
        case 0x1b4ea0u: goto label_1b4ea0;
        case 0x1b4ea4u: goto label_1b4ea4;
        case 0x1b4ea8u: goto label_1b4ea8;
        case 0x1b4eacu: goto label_1b4eac;
        case 0x1b4eb0u: goto label_1b4eb0;
        case 0x1b4eb4u: goto label_1b4eb4;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ebcu: goto label_1b4ebc;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4eccu: goto label_1b4ecc;
        case 0x1b4ed0u: goto label_1b4ed0;
        case 0x1b4ed4u: goto label_1b4ed4;
        case 0x1b4ed8u: goto label_1b4ed8;
        case 0x1b4edcu: goto label_1b4edc;
        case 0x1b4ee0u: goto label_1b4ee0;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4ee8u: goto label_1b4ee8;
        case 0x1b4eecu: goto label_1b4eec;
        case 0x1b4ef0u: goto label_1b4ef0;
        case 0x1b4ef4u: goto label_1b4ef4;
        case 0x1b4ef8u: goto label_1b4ef8;
        case 0x1b4efcu: goto label_1b4efc;
        case 0x1b4f00u: goto label_1b4f00;
        case 0x1b4f04u: goto label_1b4f04;
        case 0x1b4f08u: goto label_1b4f08;
        case 0x1b4f0cu: goto label_1b4f0c;
        case 0x1b4f10u: goto label_1b4f10;
        case 0x1b4f14u: goto label_1b4f14;
        case 0x1b4f18u: goto label_1b4f18;
        case 0x1b4f1cu: goto label_1b4f1c;
        case 0x1b4f20u: goto label_1b4f20;
        case 0x1b4f24u: goto label_1b4f24;
        case 0x1b4f28u: goto label_1b4f28;
        case 0x1b4f2cu: goto label_1b4f2c;
        case 0x1b4f30u: goto label_1b4f30;
        case 0x1b4f34u: goto label_1b4f34;
        case 0x1b4f38u: goto label_1b4f38;
        case 0x1b4f3cu: goto label_1b4f3c;
        case 0x1b4f40u: goto label_1b4f40;
        case 0x1b4f44u: goto label_1b4f44;
        case 0x1b4f48u: goto label_1b4f48;
        case 0x1b4f4cu: goto label_1b4f4c;
        case 0x1b4f50u: goto label_1b4f50;
        case 0x1b4f54u: goto label_1b4f54;
        case 0x1b4f58u: goto label_1b4f58;
        case 0x1b4f5cu: goto label_1b4f5c;
        case 0x1b4f60u: goto label_1b4f60;
        case 0x1b4f64u: goto label_1b4f64;
        case 0x1b4f68u: goto label_1b4f68;
        case 0x1b4f6cu: goto label_1b4f6c;
        case 0x1b4f70u: goto label_1b4f70;
        case 0x1b4f74u: goto label_1b4f74;
        case 0x1b4f78u: goto label_1b4f78;
        case 0x1b4f7cu: goto label_1b4f7c;
        case 0x1b4f80u: goto label_1b4f80;
        case 0x1b4f84u: goto label_1b4f84;
        case 0x1b4f88u: goto label_1b4f88;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4f90u: goto label_1b4f90;
        case 0x1b4f94u: goto label_1b4f94;
        case 0x1b4f98u: goto label_1b4f98;
        case 0x1b4f9cu: goto label_1b4f9c;
        case 0x1b4fa0u: goto label_1b4fa0;
        case 0x1b4fa4u: goto label_1b4fa4;
        case 0x1b4fa8u: goto label_1b4fa8;
        case 0x1b4facu: goto label_1b4fac;
        case 0x1b4fb0u: goto label_1b4fb0;
        case 0x1b4fb4u: goto label_1b4fb4;
        case 0x1b4fb8u: goto label_1b4fb8;
        case 0x1b4fbcu: goto label_1b4fbc;
        case 0x1b4fc0u: goto label_1b4fc0;
        case 0x1b4fc4u: goto label_1b4fc4;
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fccu: goto label_1b4fcc;
        case 0x1b4fd0u: goto label_1b4fd0;
        case 0x1b4fd4u: goto label_1b4fd4;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fdcu: goto label_1b4fdc;
        case 0x1b4fe0u: goto label_1b4fe0;
        case 0x1b4fe4u: goto label_1b4fe4;
        case 0x1b4fe8u: goto label_1b4fe8;
        case 0x1b4fecu: goto label_1b4fec;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b4ff8u: goto label_1b4ff8;
        case 0x1b4ffcu: goto label_1b4ffc;
        case 0x1b5000u: goto label_1b5000;
        case 0x1b5004u: goto label_1b5004;
        case 0x1b5008u: goto label_1b5008;
        case 0x1b500cu: goto label_1b500c;
        case 0x1b5010u: goto label_1b5010;
        case 0x1b5014u: goto label_1b5014;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b5020u: goto label_1b5020;
        case 0x1b5024u: goto label_1b5024;
        case 0x1b5028u: goto label_1b5028;
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5030u: goto label_1b5030;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5038u: goto label_1b5038;
        case 0x1b503cu: goto label_1b503c;
        case 0x1b5040u: goto label_1b5040;
        case 0x1b5044u: goto label_1b5044;
        case 0x1b5048u: goto label_1b5048;
        case 0x1b504cu: goto label_1b504c;
        case 0x1b5050u: goto label_1b5050;
        case 0x1b5054u: goto label_1b5054;
        case 0x1b5058u: goto label_1b5058;
        case 0x1b505cu: goto label_1b505c;
        case 0x1b5060u: goto label_1b5060;
        case 0x1b5064u: goto label_1b5064;
        case 0x1b5068u: goto label_1b5068;
        case 0x1b506cu: goto label_1b506c;
        case 0x1b5070u: goto label_1b5070;
        case 0x1b5074u: goto label_1b5074;
        case 0x1b5078u: goto label_1b5078;
        case 0x1b507cu: goto label_1b507c;
        case 0x1b5080u: goto label_1b5080;
        case 0x1b5084u: goto label_1b5084;
        case 0x1b5088u: goto label_1b5088;
        case 0x1b508cu: goto label_1b508c;
        case 0x1b5090u: goto label_1b5090;
        case 0x1b5094u: goto label_1b5094;
        case 0x1b5098u: goto label_1b5098;
        case 0x1b509cu: goto label_1b509c;
        case 0x1b50a0u: goto label_1b50a0;
        case 0x1b50a4u: goto label_1b50a4;
        case 0x1b50a8u: goto label_1b50a8;
        case 0x1b50acu: goto label_1b50ac;
        case 0x1b50b0u: goto label_1b50b0;
        case 0x1b50b4u: goto label_1b50b4;
        case 0x1b50b8u: goto label_1b50b8;
        case 0x1b50bcu: goto label_1b50bc;
        case 0x1b50c0u: goto label_1b50c0;
        case 0x1b50c4u: goto label_1b50c4;
        case 0x1b50c8u: goto label_1b50c8;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50d0u: goto label_1b50d0;
        case 0x1b50d4u: goto label_1b50d4;
        case 0x1b50d8u: goto label_1b50d8;
        case 0x1b50dcu: goto label_1b50dc;
        case 0x1b50e0u: goto label_1b50e0;
        case 0x1b50e4u: goto label_1b50e4;
        case 0x1b50e8u: goto label_1b50e8;
        case 0x1b50ecu: goto label_1b50ec;
        case 0x1b50f0u: goto label_1b50f0;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b50f8u: goto label_1b50f8;
        case 0x1b50fcu: goto label_1b50fc;
        case 0x1b5100u: goto label_1b5100;
        case 0x1b5104u: goto label_1b5104;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b510cu: goto label_1b510c;
        case 0x1b5110u: goto label_1b5110;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b5118u: goto label_1b5118;
        case 0x1b511cu: goto label_1b511c;
        case 0x1b5120u: goto label_1b5120;
        case 0x1b5124u: goto label_1b5124;
        case 0x1b5128u: goto label_1b5128;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b5130u: goto label_1b5130;
        case 0x1b5134u: goto label_1b5134;
        case 0x1b5138u: goto label_1b5138;
        case 0x1b513cu: goto label_1b513c;
        case 0x1b5140u: goto label_1b5140;
        case 0x1b5144u: goto label_1b5144;
        case 0x1b5148u: goto label_1b5148;
        case 0x1b514cu: goto label_1b514c;
        case 0x1b5150u: goto label_1b5150;
        case 0x1b5154u: goto label_1b5154;
        case 0x1b5158u: goto label_1b5158;
        case 0x1b515cu: goto label_1b515c;
        case 0x1b5160u: goto label_1b5160;
        case 0x1b5164u: goto label_1b5164;
        case 0x1b5168u: goto label_1b5168;
        case 0x1b516cu: goto label_1b516c;
        case 0x1b5170u: goto label_1b5170;
        case 0x1b5174u: goto label_1b5174;
        case 0x1b5178u: goto label_1b5178;
        case 0x1b517cu: goto label_1b517c;
        case 0x1b5180u: goto label_1b5180;
        case 0x1b5184u: goto label_1b5184;
        case 0x1b5188u: goto label_1b5188;
        case 0x1b518cu: goto label_1b518c;
        case 0x1b5190u: goto label_1b5190;
        case 0x1b5194u: goto label_1b5194;
        case 0x1b5198u: goto label_1b5198;
        case 0x1b519cu: goto label_1b519c;
        case 0x1b51a0u: goto label_1b51a0;
        case 0x1b51a4u: goto label_1b51a4;
        case 0x1b51a8u: goto label_1b51a8;
        case 0x1b51acu: goto label_1b51ac;
        case 0x1b51b0u: goto label_1b51b0;
        case 0x1b51b4u: goto label_1b51b4;
        case 0x1b51b8u: goto label_1b51b8;
        case 0x1b51bcu: goto label_1b51bc;
        case 0x1b51c0u: goto label_1b51c0;
        case 0x1b51c4u: goto label_1b51c4;
        case 0x1b51c8u: goto label_1b51c8;
        case 0x1b51ccu: goto label_1b51cc;
        case 0x1b51d0u: goto label_1b51d0;
        case 0x1b51d4u: goto label_1b51d4;
        case 0x1b51d8u: goto label_1b51d8;
        case 0x1b51dcu: goto label_1b51dc;
        case 0x1b51e0u: goto label_1b51e0;
        case 0x1b51e4u: goto label_1b51e4;
        case 0x1b51e8u: goto label_1b51e8;
        case 0x1b51ecu: goto label_1b51ec;
        case 0x1b51f0u: goto label_1b51f0;
        case 0x1b51f4u: goto label_1b51f4;
        case 0x1b51f8u: goto label_1b51f8;
        case 0x1b51fcu: goto label_1b51fc;
        case 0x1b5200u: goto label_1b5200;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5208u: goto label_1b5208;
        case 0x1b520cu: goto label_1b520c;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5214u: goto label_1b5214;
        case 0x1b5218u: goto label_1b5218;
        case 0x1b521cu: goto label_1b521c;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5224u: goto label_1b5224;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b522cu: goto label_1b522c;
        case 0x1b5230u: goto label_1b5230;
        case 0x1b5234u: goto label_1b5234;
        case 0x1b5238u: goto label_1b5238;
        case 0x1b523cu: goto label_1b523c;
        case 0x1b5240u: goto label_1b5240;
        case 0x1b5244u: goto label_1b5244;
        case 0x1b5248u: goto label_1b5248;
        case 0x1b524cu: goto label_1b524c;
        case 0x1b5250u: goto label_1b5250;
        case 0x1b5254u: goto label_1b5254;
        case 0x1b5258u: goto label_1b5258;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5260u: goto label_1b5260;
        case 0x1b5264u: goto label_1b5264;
        case 0x1b5268u: goto label_1b5268;
        case 0x1b526cu: goto label_1b526c;
        case 0x1b5270u: goto label_1b5270;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b5278u: goto label_1b5278;
        case 0x1b527cu: goto label_1b527c;
        case 0x1b5280u: goto label_1b5280;
        case 0x1b5284u: goto label_1b5284;
        case 0x1b5288u: goto label_1b5288;
        case 0x1b528cu: goto label_1b528c;
        case 0x1b5290u: goto label_1b5290;
        case 0x1b5294u: goto label_1b5294;
        case 0x1b5298u: goto label_1b5298;
        case 0x1b529cu: goto label_1b529c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b52a4u: goto label_1b52a4;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52b0u: goto label_1b52b0;
        case 0x1b52b4u: goto label_1b52b4;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52c0u: goto label_1b52c0;
        case 0x1b52c4u: goto label_1b52c4;
        case 0x1b52c8u: goto label_1b52c8;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52d0u: goto label_1b52d0;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52d8u: goto label_1b52d8;
        case 0x1b52dcu: goto label_1b52dc;
        case 0x1b52e0u: goto label_1b52e0;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b52e8u: goto label_1b52e8;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b52f0u: goto label_1b52f0;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b52f8u: goto label_1b52f8;
        case 0x1b52fcu: goto label_1b52fc;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5304u: goto label_1b5304;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b530cu: goto label_1b530c;
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5318u: goto label_1b5318;
        case 0x1b531cu: goto label_1b531c;
        case 0x1b5320u: goto label_1b5320;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5328u: goto label_1b5328;
        case 0x1b532cu: goto label_1b532c;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5334u: goto label_1b5334;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5344u: goto label_1b5344;
        case 0x1b5348u: goto label_1b5348;
        case 0x1b534cu: goto label_1b534c;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5354u: goto label_1b5354;
        default: break;
    }

    ctx->pc = 0x1b4ac0u;

label_1b4ac0:
    // 0x1b4ac0: 0x27bdeea0  addiu       $sp, $sp, -0x1160
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962848));
label_1b4ac4:
    // 0x1b4ac4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b4ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1b4ac8:
    // 0x1b4ac8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b4ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1b4acc:
    // 0x1b4acc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b4accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1b4ad0:
    // 0x1b4ad0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b4ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1b4ad4:
    // 0x1b4ad4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b4ad8:
    // 0x1b4ad8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b4ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b4adc:
    // 0x1b4adc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b4ae0:
    // 0x1b4ae0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b4ae4:
    // 0x1b4ae4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b4ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ae8:
    // 0x1b4ae8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b4ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b4aec:
    // 0x1b4aec: 0x26820f94  addiu       $v0, $s4, 0xF94
    ctx->pc = 0x1b4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3988));
label_1b4af0:
    // 0x1b4af0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b4af4:
    // 0x1b4af4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4af8:
    // 0x1b4af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b4afc:
    // 0x1b4afc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b4afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4b00:
    // 0x1b4b00: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x1b4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
label_1b4b04:
    // 0x1b4b04: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x1b4b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
label_1b4b08:
    // 0x1b4b08: 0xaf948d18  sw          $s4, -0x72E8($gp)
    ctx->pc = 0x1b4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 20));
label_1b4b0c:
    // 0x1b4b0c: 0xaf968d20  sw          $s6, -0x72E0($gp)
    ctx->pc = 0x1b4b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 22));
label_1b4b10:
    // 0x1b4b10: 0xaf828d1c  sw          $v0, -0x72E4($gp)
    ctx->pc = 0x1b4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 2));
label_1b4b14:
    // 0x1b4b14: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1b4b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1b4b18:
    // 0x1b4b18: 0x8e830f94  lw          $v1, 0xF94($s4)
    ctx->pc = 0x1b4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3988)));
label_1b4b1c:
    // 0x1b4b1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b4b20:
    if (ctx->pc == 0x1B4B20u) {
        ctx->pc = 0x1B4B20u;
            // 0x1b4b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B24u;
        goto label_1b4b24;
    }
    ctx->pc = 0x1B4B1Cu;
    {
        const bool branch_taken_0x1b4b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B1Cu;
            // 0x1b4b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b1c) {
            ctx->pc = 0x1B4B48u;
            goto label_1b4b48;
        }
    }
    ctx->pc = 0x1B4B24u;
label_1b4b24:
    // 0x1b4b24: 0x8e820f98  lw          $v0, 0xF98($s4)
    ctx->pc = 0x1b4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3992)));
label_1b4b28:
    // 0x1b4b28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b4b2c:
    // 0x1b4b2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b4b30:
    // 0x1b4b30: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b4b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1b4b34:
    // 0x1b4b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b4b38:
    if (ctx->pc == 0x1B4B38u) {
        ctx->pc = 0x1B4B38u;
            // 0x1b4b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B4B3Cu;
        goto label_1b4b3c;
    }
    ctx->pc = 0x1B4B34u;
    {
        const bool branch_taken_0x1b4b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B34u;
            // 0x1b4b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b34) {
            ctx->pc = 0x1B4B40u;
            goto label_1b4b40;
        }
    }
    ctx->pc = 0x1B4B3Cu;
label_1b4b3c:
    // 0x1b4b3c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b4b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b4b40:
    // 0x1b4b40: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
label_1b4b44:
    // 0x1b4b44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b4b48:
    // 0x1b4b48: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1b4b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4b4c:
    // 0x1b4b4c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1b4b50:
    if (ctx->pc == 0x1B4B50u) {
        ctx->pc = 0x1B4B50u;
            // 0x1b4b50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B54u;
        goto label_1b4b54;
    }
    ctx->pc = 0x1B4B4Cu;
    {
        const bool branch_taken_0x1b4b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B4Cu;
            // 0x1b4b50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b4c) {
            ctx->pc = 0x1B4B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4b24;
        }
    }
    ctx->pc = 0x1B4B54u;
label_1b4b54:
    // 0x1b4b54: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_1b4b58:
    if (ctx->pc == 0x1B4B58u) {
        ctx->pc = 0x1B4B58u;
            // 0x1b4b58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B5Cu;
        goto label_1b4b5c;
    }
    ctx->pc = 0x1B4B54u;
    {
        const bool branch_taken_0x1b4b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B54u;
            // 0x1b4b58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b54) {
            ctx->pc = 0x1B5200u;
            goto label_1b5200;
        }
    }
    ctx->pc = 0x1B4B5Cu;
label_1b4b5c:
    // 0x1b4b5c: 0x8e820f98  lw          $v0, 0xF98($s4)
    ctx->pc = 0x1b4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3992)));
label_1b4b60:
    // 0x1b4b60: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1b4b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b4b64:
    // 0x1b4b64: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1b4b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1b4b68:
    // 0x1b4b68: 0xc057358  jal         func_15CD60
label_1b4b6c:
    if (ctx->pc == 0x1B4B6Cu) {
        ctx->pc = 0x1B4B6Cu;
            // 0x1b4b6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B70u;
        goto label_1b4b70;
    }
    ctx->pc = 0x1B4B68u;
    SET_GPR_U32(ctx, 31, 0x1B4B70u);
    ctx->pc = 0x1B4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B68u;
            // 0x1b4b6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD60u;
    if (runtime->hasFunction(0x15CD60u)) {
        auto targetFn = runtime->lookupFunction(0x15CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B70u; }
        if (ctx->pc != 0x1B4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetParts__4CMapFPc_0x15cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B70u; }
        if (ctx->pc != 0x1B4B70u) { return; }
    }
    ctx->pc = 0x1B4B70u;
label_1b4b70:
    // 0x1b4b70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b4b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b74:
    // 0x1b4b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b78:
    // 0x1b4b78: 0xc06d59c  jal         func_1B5670
label_1b4b7c:
    if (ctx->pc == 0x1B4B7Cu) {
        ctx->pc = 0x1B4B7Cu;
            // 0x1b4b7c: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->pc = 0x1B4B80u;
        goto label_1b4b80;
    }
    ctx->pc = 0x1B4B78u;
    SET_GPR_U32(ctx, 31, 0x1B4B80u);
    ctx->pc = 0x1B4B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B78u;
            // 0x1b4b7c: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5670u;
    if (runtime->hasFunction(0x1B5670u)) {
        auto targetFn = runtime->lookupFunction(0x1B5670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B80u; }
        if (ctx->pc != 0x1B4B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateBox__14CEditPartsInfoFv_0x1b5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B80u; }
        if (ctx->pc != 0x1B4B80u) { return; }
    }
    ctx->pc = 0x1B4B80u;
label_1b4b80:
    // 0x1b4b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b84:
    // 0x1b4b84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b4b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b88:
    // 0x1b4b88: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1b4b8c:
    if (ctx->pc == 0x1B4B8Cu) {
        ctx->pc = 0x1B4B8Cu;
            // 0x1b4b8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B90u;
        goto label_1b4b90;
    }
    ctx->pc = 0x1B4B88u;
    {
        const bool branch_taken_0x1b4b88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B88u;
            // 0x1b4b8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b88) {
            ctx->pc = 0x1B4B9Cu;
            goto label_1b4b9c;
        }
    }
    ctx->pc = 0x1B4B90u;
label_1b4b90:
    // 0x1b4b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b94:
    // 0x1b4b94: 0xc059948  jal         func_166520
label_1b4b98:
    if (ctx->pc == 0x1B4B98u) {
        ctx->pc = 0x1B4B98u;
            // 0x1b4b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B4B9Cu;
        goto label_1b4b9c;
    }
    ctx->pc = 0x1B4B94u;
    SET_GPR_U32(ctx, 31, 0x1B4B9Cu);
    ctx->pc = 0x1B4B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B94u;
            // 0x1b4b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166520u;
    if (runtime->hasFunction(0x166520u)) {
        auto targetFn = runtime->lookupFunction(0x166520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B9Cu; }
        if (ctx->pc != 0x1B4B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPieceColType__9CMapPartsFi_0x166520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B9Cu; }
        if (ctx->pc != 0x1B4B9Cu) { return; }
    }
    ctx->pc = 0x1B4B9Cu;
label_1b4b9c:
    // 0x1b4b9c: 0x0  nop
    ctx->pc = 0x1b4b9cu;
    // NOP
label_1b4ba0:
    // 0x1b4ba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b4ba4:
    if (ctx->pc == 0x1B4BA4u) {
        ctx->pc = 0x1B4BA8u;
        goto label_1b4ba8;
    }
    ctx->pc = 0x1B4BA0u;
    {
        const bool branch_taken_0x1b4ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ba0) {
            ctx->pc = 0x1B4BB0u;
            goto label_1b4bb0;
        }
    }
    ctx->pc = 0x1B4BA8u;
label_1b4ba8:
    // 0x1b4ba8: 0x8c550070  lw          $s5, 0x70($v0)
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1b4bac:
    // 0x1b4bac: 0x0  nop
    ctx->pc = 0x1b4bacu;
    // NOP
label_1b4bb0:
    // 0x1b4bb0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_1b4bb4:
    if (ctx->pc == 0x1B4BB4u) {
        ctx->pc = 0x1B4BB8u;
        goto label_1b4bb8;
    }
    ctx->pc = 0x1B4BB0u;
    {
        const bool branch_taken_0x1b4bb0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bb0) {
            ctx->pc = 0x1B4BC0u;
            goto label_1b4bc0;
        }
    }
    ctx->pc = 0x1B4BB8u;
label_1b4bb8:
    // 0x1b4bb8: 0x8ebe0114  lw          $fp, 0x114($s5)
    ctx->pc = 0x1b4bb8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_1b4bbc:
    // 0x1b4bbc: 0x0  nop
    ctx->pc = 0x1b4bbcu;
    // NOP
label_1b4bc0:
    // 0x1b4bc0: 0xc04bc8c  jal         func_12F230
label_1b4bc4:
    if (ctx->pc == 0x1B4BC4u) {
        ctx->pc = 0x1B4BC4u;
            // 0x1b4bc4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1B4BC8u;
        goto label_1b4bc8;
    }
    ctx->pc = 0x1B4BC0u;
    SET_GPR_U32(ctx, 31, 0x1B4BC8u);
    ctx->pc = 0x1B4BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BC0u;
            // 0x1b4bc4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BC8u; }
        if (ctx->pc != 0x1B4BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BC8u; }
        if (ctx->pc != 0x1B4BC8u) { return; }
    }
    ctx->pc = 0x1B4BC8u;
label_1b4bc8:
    // 0x1b4bc8: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1b4bcc:
    // 0x1b4bcc: 0xc04bc8c  jal         func_12F230
label_1b4bd0:
    if (ctx->pc == 0x1B4BD0u) {
        ctx->pc = 0x1B4BD0u;
            // 0x1b4bd0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BD4u;
        goto label_1b4bd4;
    }
    ctx->pc = 0x1B4BCCu;
    SET_GPR_U32(ctx, 31, 0x1B4BD4u);
    ctx->pc = 0x1B4BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BCCu;
            // 0x1b4bd0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BD4u; }
        if (ctx->pc != 0x1B4BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BD4u; }
        if (ctx->pc != 0x1B4BD4u) { return; }
    }
    ctx->pc = 0x1B4BD4u;
label_1b4bd4:
    // 0x1b4bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4bd8:
    // 0x1b4bd8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b4bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b4bdc:
    // 0x1b4bdc: 0x13c000a3  beqz        $fp, . + 4 + (0xA3 << 2)
label_1b4be0:
    if (ctx->pc == 0x1B4BE0u) {
        ctx->pc = 0x1B4BE0u;
            // 0x1b4be0: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x1B4BE4u;
        goto label_1b4be4;
    }
    ctx->pc = 0x1B4BDCu;
    {
        const bool branch_taken_0x1b4bdc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BDCu;
            // 0x1b4be0: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bdc) {
            ctx->pc = 0x1B4E6Cu;
            goto label_1b4e6c;
        }
    }
    ctx->pc = 0x1B4BE4u;
label_1b4be4:
    // 0x1b4be4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b4be8:
    // 0x1b4be8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1b4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b4bec:
    // 0x1b4bec: 0x24635270  addiu       $v1, $v1, 0x5270
    ctx->pc = 0x1b4becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21104));
label_1b4bf0:
    // 0x1b4bf0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b4bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1b4bf4:
    // 0x1b4bf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1b4bf8:
    // 0x1b4bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4bfc:
    // 0x1b4bfc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b4bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b4c00:
    // 0x1b4c00: 0xc049c86  jal         func_127218
label_1b4c04:
    if (ctx->pc == 0x1B4C04u) {
        ctx->pc = 0x1B4C04u;
            // 0x1b4c04: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x1B4C08u;
        goto label_1b4c08;
    }
    ctx->pc = 0x1B4C00u;
    SET_GPR_U32(ctx, 31, 0x1B4C08u);
    ctx->pc = 0x1B4C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C00u;
            // 0x1b4c04: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C08u; }
        if (ctx->pc != 0x1B4C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C08u; }
        if (ctx->pc != 0x1B4C08u) { return; }
    }
    ctx->pc = 0x1B4C08u;
label_1b4c08:
    // 0x1b4c08: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b4c0c:
    // 0x1b4c0c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1b4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b4c10:
    // 0x1b4c10: 0x24635240  addiu       $v1, $v1, 0x5240
    ctx->pc = 0x1b4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21056));
label_1b4c14:
    // 0x1b4c14: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1b4c18:
    // 0x1b4c18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1b4c1c:
    // 0x1b4c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c20:
    // 0x1b4c20: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b4c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b4c24:
    // 0x1b4c24: 0xc049c86  jal         func_127218
label_1b4c28:
    if (ctx->pc == 0x1B4C28u) {
        ctx->pc = 0x1B4C28u;
            // 0x1b4c28: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x1B4C2Cu;
        goto label_1b4c2c;
    }
    ctx->pc = 0x1B4C24u;
    SET_GPR_U32(ctx, 31, 0x1B4C2Cu);
    ctx->pc = 0x1B4C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C24u;
            // 0x1b4c28: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C2Cu; }
        if (ctx->pc != 0x1B4C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C2Cu; }
        if (ctx->pc != 0x1B4C2Cu) { return; }
    }
    ctx->pc = 0x1B4C2Cu;
label_1b4c2c:
    // 0x1b4c2c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b4c30:
    // 0x1b4c30: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1b4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_1b4c34:
    // 0x1b4c34: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x1b4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
label_1b4c38:
    // 0x1b4c38: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x1b4c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_1b4c3c:
    // 0x1b4c3c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1b4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b4c40:
    // 0x1b4c40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1b4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c44:
    // 0x1b4c44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1b4c48:
    // 0x1b4c48: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4c4c:
    // 0x1b4c4c: 0x8fd90030  lw          $t9, 0x30($fp)
    ctx->pc = 0x1b4c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_1b4c50:
    // 0x1b4c50: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b4c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b4c54:
    // 0x1b4c54: 0x320f809  jalr        $t9
label_1b4c58:
    if (ctx->pc == 0x1B4C58u) {
        ctx->pc = 0x1B4C58u;
            // 0x1b4c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C5Cu;
        goto label_1b4c5c;
    }
    ctx->pc = 0x1B4C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4C5Cu);
        ctx->pc = 0x1B4C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C54u;
            // 0x1b4c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C5Cu; }
            if (ctx->pc != 0x1B4C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B4C5Cu;
label_1b4c5c:
    // 0x1b4c5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4c60:
    // 0x1b4c60: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x1b4c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1b4c64:
    // 0x1b4c64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4c68:
    // 0x1b4c68: 0xc068ca8  jal         func_1A32A0
label_1b4c6c:
    if (ctx->pc == 0x1B4C6Cu) {
        ctx->pc = 0x1B4C6Cu;
            // 0x1b4c6c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C70u;
        goto label_1b4c70;
    }
    ctx->pc = 0x1B4C68u;
    SET_GPR_U32(ctx, 31, 0x1B4C70u);
    ctx->pc = 0x1B4C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C68u;
            // 0x1b4c6c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A32A0u;
    if (runtime->hasFunction(0x1A32A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A32A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C70u; }
        if (ctx->pc != 0x1B4C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C70u; }
        if (ctx->pc != 0x1B4C70u) { return; }
    }
    ctx->pc = 0x1B4C70u;
label_1b4c70:
    // 0x1b4c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b4c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c74:
    // 0x1b4c74: 0xc04dc0c  jal         func_137030
label_1b4c78:
    if (ctx->pc == 0x1B4C78u) {
        ctx->pc = 0x1B4C78u;
            // 0x1b4c78: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4C7Cu;
        goto label_1b4c7c;
    }
    ctx->pc = 0x1B4C74u;
    SET_GPR_U32(ctx, 31, 0x1B4C7Cu);
    ctx->pc = 0x1B4C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C74u;
            // 0x1b4c78: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C7Cu; }
        if (ctx->pc != 0x1B4C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C7Cu; }
        if (ctx->pc != 0x1B4C7Cu) { return; }
    }
    ctx->pc = 0x1B4C7Cu;
label_1b4c7c:
    // 0x1b4c7c: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1b4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1b4c80:
    // 0x1b4c80: 0xc068ec4  jal         func_1A3B10
label_1b4c84:
    if (ctx->pc == 0x1B4C84u) {
        ctx->pc = 0x1B4C84u;
            // 0x1b4c84: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4C88u;
        goto label_1b4c88;
    }
    ctx->pc = 0x1B4C80u;
    SET_GPR_U32(ctx, 31, 0x1B4C88u);
    ctx->pc = 0x1B4C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C80u;
            // 0x1b4c84: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B10u;
    if (runtime->hasFunction(0x1A3B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C88u; }
        if (ctx->pc != 0x1B4C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C88u; }
        if (ctx->pc != 0x1B4C88u) { return; }
    }
    ctx->pc = 0x1B4C88u;
label_1b4c88:
    // 0x1b4c88: 0xc04c050  jal         func_130140
label_1b4c8c:
    if (ctx->pc == 0x1B4C8Cu) {
        ctx->pc = 0x1B4C8Cu;
            // 0x1b4c8c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4C90u;
        goto label_1b4c90;
    }
    ctx->pc = 0x1B4C88u;
    SET_GPR_U32(ctx, 31, 0x1B4C90u);
    ctx->pc = 0x1B4C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C88u;
            // 0x1b4c8c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C90u; }
        if (ctx->pc != 0x1B4C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C90u; }
        if (ctx->pc != 0x1B4C90u) { return; }
    }
    ctx->pc = 0x1B4C90u;
label_1b4c90:
    // 0x1b4c90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b4c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c94:
    // 0x1b4c94: 0xc04dd64  jal         func_137590
label_1b4c98:
    if (ctx->pc == 0x1B4C98u) {
        ctx->pc = 0x1B4C98u;
            // 0x1b4c98: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4C9Cu;
        goto label_1b4c9c;
    }
    ctx->pc = 0x1B4C94u;
    SET_GPR_U32(ctx, 31, 0x1B4C9Cu);
    ctx->pc = 0x1B4C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C94u;
            // 0x1b4c98: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C9Cu; }
        if (ctx->pc != 0x1B4C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C9Cu; }
        if (ctx->pc != 0x1B4C9Cu) { return; }
    }
    ctx->pc = 0x1B4C9Cu;
label_1b4c9c:
    // 0x1b4c9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b4ca0:
    // 0x1b4ca0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b4ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ca4:
    // 0x1b4ca4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b4ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ca8:
    // 0x1b4ca8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cac:
    // 0x1b4cac: 0x262800d0  addiu       $t0, $s1, 0xD0
    ctx->pc = 0x1b4cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_1b4cb0:
    // 0x1b4cb0: 0xc04bd40  jal         func_12F500
label_1b4cb4:
    if (ctx->pc == 0x1B4CB4u) {
        ctx->pc = 0x1B4CB4u;
            // 0x1b4cb4: 0x262900e0  addiu       $t1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x1B4CB8u;
        goto label_1b4cb8;
    }
    ctx->pc = 0x1B4CB0u;
    SET_GPR_U32(ctx, 31, 0x1B4CB8u);
    ctx->pc = 0x1B4CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CB0u;
            // 0x1b4cb4: 0x262900e0  addiu       $t1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CB8u; }
        if (ctx->pc != 0x1B4CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CB8u; }
        if (ctx->pc != 0x1B4CB8u) { return; }
    }
    ctx->pc = 0x1B4CB8u;
label_1b4cb8:
    // 0x1b4cb8: 0xc068d24  jal         func_1A3490
label_1b4cbc:
    if (ctx->pc == 0x1B4CBCu) {
        ctx->pc = 0x1B4CBCu;
            // 0x1b4cbc: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x1B4CC0u;
        goto label_1b4cc0;
    }
    ctx->pc = 0x1B4CB8u;
    SET_GPR_U32(ctx, 31, 0x1B4CC0u);
    ctx->pc = 0x1B4CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CB8u;
            // 0x1b4cbc: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CC0u; }
        if (ctx->pc != 0x1B4CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CC0u; }
        if (ctx->pc != 0x1B4CC0u) { return; }
    }
    ctx->pc = 0x1B4CC0u;
label_1b4cc0:
    // 0x1b4cc0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b4cc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b4cc4:
    // 0x1b4cc4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4cc8:
    // 0x1b4cc8: 0x26250200  addiu       $a1, $s1, 0x200
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_1b4ccc:
    // 0x1b4ccc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b4cd0:
    // 0x1b4cd0: 0xc068ca8  jal         func_1A32A0
label_1b4cd4:
    if (ctx->pc == 0x1B4CD4u) {
        ctx->pc = 0x1B4CD4u;
            // 0x1b4cd4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CD8u;
        goto label_1b4cd8;
    }
    ctx->pc = 0x1B4CD0u;
    SET_GPR_U32(ctx, 31, 0x1B4CD8u);
    ctx->pc = 0x1B4CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CD0u;
            // 0x1b4cd4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A32A0u;
    if (runtime->hasFunction(0x1A32A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A32A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CD8u; }
        if (ctx->pc != 0x1B4CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CD8u; }
        if (ctx->pc != 0x1B4CD8u) { return; }
    }
    ctx->pc = 0x1B4CD8u;
label_1b4cd8:
    // 0x1b4cd8: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x1b4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_1b4cdc:
    // 0x1b4cdc: 0xc068ec4  jal         func_1A3B10
label_1b4ce0:
    if (ctx->pc == 0x1B4CE0u) {
        ctx->pc = 0x1B4CE0u;
            // 0x1b4ce0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4CE4u;
        goto label_1b4ce4;
    }
    ctx->pc = 0x1B4CDCu;
    SET_GPR_U32(ctx, 31, 0x1B4CE4u);
    ctx->pc = 0x1B4CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CDCu;
            // 0x1b4ce0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B10u;
    if (runtime->hasFunction(0x1A3B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CE4u; }
        if (ctx->pc != 0x1B4CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CE4u; }
        if (ctx->pc != 0x1B4CE4u) { return; }
    }
    ctx->pc = 0x1B4CE4u;
label_1b4ce4:
    // 0x1b4ce4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b4ce8:
    // 0x1b4ce8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b4ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cec:
    // 0x1b4cec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b4cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cf0:
    // 0x1b4cf0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cf4:
    // 0x1b4cf4: 0x26280210  addiu       $t0, $s1, 0x210
    ctx->pc = 0x1b4cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_1b4cf8:
    // 0x1b4cf8: 0xc04bd40  jal         func_12F500
label_1b4cfc:
    if (ctx->pc == 0x1B4CFCu) {
        ctx->pc = 0x1B4CFCu;
            // 0x1b4cfc: 0x26290220  addiu       $t1, $s1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
        ctx->pc = 0x1B4D00u;
        goto label_1b4d00;
    }
    ctx->pc = 0x1B4CF8u;
    SET_GPR_U32(ctx, 31, 0x1B4D00u);
    ctx->pc = 0x1B4CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CF8u;
            // 0x1b4cfc: 0x26290220  addiu       $t1, $s1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D00u; }
        if (ctx->pc != 0x1B4D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D00u; }
        if (ctx->pc != 0x1B4D00u) { return; }
    }
    ctx->pc = 0x1B4D00u;
label_1b4d00:
    // 0x1b4d00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4d04:
    // 0x1b4d04: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1b4d08:
    // 0x1b4d08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4d0c:
    // 0x1b4d0c: 0xc068ca8  jal         func_1A32A0
label_1b4d10:
    if (ctx->pc == 0x1B4D10u) {
        ctx->pc = 0x1B4D10u;
            // 0x1b4d10: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D14u;
        goto label_1b4d14;
    }
    ctx->pc = 0x1B4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D14u);
    ctx->pc = 0x1B4D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D0Cu;
            // 0x1b4d10: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A32A0u;
    if (runtime->hasFunction(0x1A32A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A32A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D14u; }
        if (ctx->pc != 0x1B4D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D14u; }
        if (ctx->pc != 0x1B4D14u) { return; }
    }
    ctx->pc = 0x1B4D14u;
label_1b4d14:
    // 0x1b4d14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4d18:
    // 0x1b4d18: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x1b4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1b4d1c:
    // 0x1b4d1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b4d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4d20:
    // 0x1b4d20: 0xc068ca8  jal         func_1A32A0
label_1b4d24:
    if (ctx->pc == 0x1B4D24u) {
        ctx->pc = 0x1B4D24u;
            // 0x1b4d24: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D28u;
        goto label_1b4d28;
    }
    ctx->pc = 0x1B4D20u;
    SET_GPR_U32(ctx, 31, 0x1B4D28u);
    ctx->pc = 0x1B4D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D20u;
            // 0x1b4d24: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A32A0u;
    if (runtime->hasFunction(0x1A32A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A32A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D28u; }
        if (ctx->pc != 0x1B4D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D28u; }
        if (ctx->pc != 0x1B4D28u) { return; }
    }
    ctx->pc = 0x1B4D28u;
label_1b4d28:
    // 0x1b4d28: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1b4d2c:
    // 0x1b4d2c: 0xc068ec4  jal         func_1A3B10
label_1b4d30:
    if (ctx->pc == 0x1B4D30u) {
        ctx->pc = 0x1B4D30u;
            // 0x1b4d30: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4D34u;
        goto label_1b4d34;
    }
    ctx->pc = 0x1B4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D34u);
    ctx->pc = 0x1B4D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D2Cu;
            // 0x1b4d30: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B10u;
    if (runtime->hasFunction(0x1A3B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D34u; }
        if (ctx->pc != 0x1B4D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D34u; }
        if (ctx->pc != 0x1B4D34u) { return; }
    }
    ctx->pc = 0x1B4D34u;
label_1b4d34:
    // 0x1b4d34: 0xc04c050  jal         func_130140
label_1b4d38:
    if (ctx->pc == 0x1B4D38u) {
        ctx->pc = 0x1B4D38u;
            // 0x1b4d38: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4D3Cu;
        goto label_1b4d3c;
    }
    ctx->pc = 0x1B4D34u;
    SET_GPR_U32(ctx, 31, 0x1B4D3Cu);
    ctx->pc = 0x1B4D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D34u;
            // 0x1b4d38: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D3Cu; }
        if (ctx->pc != 0x1B4D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D3Cu; }
        if (ctx->pc != 0x1B4D3Cu) { return; }
    }
    ctx->pc = 0x1B4D3Cu;
label_1b4d3c:
    // 0x1b4d3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b4d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d40:
    // 0x1b4d40: 0xc04dd64  jal         func_137590
label_1b4d44:
    if (ctx->pc == 0x1B4D44u) {
        ctx->pc = 0x1B4D44u;
            // 0x1b4d44: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4D48u;
        goto label_1b4d48;
    }
    ctx->pc = 0x1B4D40u;
    SET_GPR_U32(ctx, 31, 0x1B4D48u);
    ctx->pc = 0x1B4D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D40u;
            // 0x1b4d44: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D48u; }
        if (ctx->pc != 0x1B4D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D48u; }
        if (ctx->pc != 0x1B4D48u) { return; }
    }
    ctx->pc = 0x1B4D48u;
label_1b4d48:
    // 0x1b4d48: 0xc068f14  jal         func_1A3C50
label_1b4d4c:
    if (ctx->pc == 0x1B4D4Cu) {
        ctx->pc = 0x1B4D4Cu;
            // 0x1b4d4c: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x1B4D50u;
        goto label_1b4d50;
    }
    ctx->pc = 0x1B4D48u;
    SET_GPR_U32(ctx, 31, 0x1B4D50u);
    ctx->pc = 0x1B4D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D48u;
            // 0x1b4d4c: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C50u;
    if (runtime->hasFunction(0x1A3C50u)) {
        auto targetFn = runtime->lookupFunction(0x1A3C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D50u; }
        if (ctx->pc != 0x1B4D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVerticalPoly__14CEditCollisionFv_0x1a3c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D50u; }
        if (ctx->pc != 0x1B4D50u) { return; }
    }
    ctx->pc = 0x1B4D50u;
label_1b4d50:
    // 0x1b4d50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b4d54:
    // 0x1b4d54: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b4d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d58:
    // 0x1b4d58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b4d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d5c:
    // 0x1b4d5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d60:
    // 0x1b4d60: 0x26280120  addiu       $t0, $s1, 0x120
    ctx->pc = 0x1b4d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_1b4d64:
    // 0x1b4d64: 0xc04bd40  jal         func_12F500
label_1b4d68:
    if (ctx->pc == 0x1B4D68u) {
        ctx->pc = 0x1B4D68u;
            // 0x1b4d68: 0x26290130  addiu       $t1, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->pc = 0x1B4D6Cu;
        goto label_1b4d6c;
    }
    ctx->pc = 0x1B4D64u;
    SET_GPR_U32(ctx, 31, 0x1B4D6Cu);
    ctx->pc = 0x1B4D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D64u;
            // 0x1b4d68: 0x26290130  addiu       $t1, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D6Cu; }
        if (ctx->pc != 0x1B4D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D6Cu; }
        if (ctx->pc != 0x1B4D6Cu) { return; }
    }
    ctx->pc = 0x1B4D6Cu;
label_1b4d6c:
    // 0x1b4d6c: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1b4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1b4d70:
    // 0x1b4d70: 0xc068ec4  jal         func_1A3B10
label_1b4d74:
    if (ctx->pc == 0x1B4D74u) {
        ctx->pc = 0x1B4D74u;
            // 0x1b4d74: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4D78u;
        goto label_1b4d78;
    }
    ctx->pc = 0x1B4D70u;
    SET_GPR_U32(ctx, 31, 0x1B4D78u);
    ctx->pc = 0x1B4D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D70u;
            // 0x1b4d74: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B10u;
    if (runtime->hasFunction(0x1A3B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D78u; }
        if (ctx->pc != 0x1B4D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D78u; }
        if (ctx->pc != 0x1B4D78u) { return; }
    }
    ctx->pc = 0x1B4D78u;
label_1b4d78:
    // 0x1b4d78: 0xc068f7c  jal         func_1A3DF0
label_1b4d7c:
    if (ctx->pc == 0x1B4D7Cu) {
        ctx->pc = 0x1B4D7Cu;
            // 0x1b4d7c: 0x26240160  addiu       $a0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->pc = 0x1B4D80u;
        goto label_1b4d80;
    }
    ctx->pc = 0x1B4D78u;
    SET_GPR_U32(ctx, 31, 0x1B4D80u);
    ctx->pc = 0x1B4D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D78u;
            // 0x1b4d7c: 0x26240160  addiu       $a0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DF0u;
    if (runtime->hasFunction(0x1A3DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D80u; }
        if (ctx->pc != 0x1B4D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupVerticalPoly__14CEditCollisionFv_0x1a3df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D80u; }
        if (ctx->pc != 0x1B4D80u) { return; }
    }
    ctx->pc = 0x1B4D80u;
label_1b4d80:
    // 0x1b4d80: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b4d84:
    // 0x1b4d84: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x1b4d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
label_1b4d88:
    // 0x1b4d88: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d8c:
    // 0x1b4d8c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b4d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d90:
    // 0x1b4d90: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d94:
    // 0x1b4d94: 0x26280170  addiu       $t0, $s1, 0x170
    ctx->pc = 0x1b4d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1b4d98:
    // 0x1b4d98: 0xc04bd40  jal         func_12F500
label_1b4d9c:
    if (ctx->pc == 0x1B4D9Cu) {
        ctx->pc = 0x1B4D9Cu;
            // 0x1b4d9c: 0x26290180  addiu       $t1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->pc = 0x1B4DA0u;
        goto label_1b4da0;
    }
    ctx->pc = 0x1B4D98u;
    SET_GPR_U32(ctx, 31, 0x1B4DA0u);
    ctx->pc = 0x1B4D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D98u;
            // 0x1b4d9c: 0x26290180  addiu       $t1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DA0u; }
        if (ctx->pc != 0x1B4DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DA0u; }
        if (ctx->pc != 0x1B4DA0u) { return; }
    }
    ctx->pc = 0x1B4DA0u;
label_1b4da0:
    // 0x1b4da0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4da4:
    // 0x1b4da4: 0x262501b0  addiu       $a1, $s1, 0x1B0
    ctx->pc = 0x1b4da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_1b4da8:
    // 0x1b4da8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b4dac:
    // 0x1b4dac: 0xc068ca8  jal         func_1A32A0
label_1b4db0:
    if (ctx->pc == 0x1B4DB0u) {
        ctx->pc = 0x1B4DB0u;
            // 0x1b4db0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DB4u;
        goto label_1b4db4;
    }
    ctx->pc = 0x1B4DACu;
    SET_GPR_U32(ctx, 31, 0x1B4DB4u);
    ctx->pc = 0x1B4DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DACu;
            // 0x1b4db0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A32A0u;
    if (runtime->hasFunction(0x1A32A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A32A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
        if (ctx->pc != 0x1B4DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__14CEditCollisionFR14CEditCollisioniP9mgCMemory_0x1a32a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
        if (ctx->pc != 0x1B4DB4u) { return; }
    }
    ctx->pc = 0x1B4DB4u;
label_1b4db4:
    // 0x1b4db4: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x1b4db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_1b4db8:
    // 0x1b4db8: 0xc068ec4  jal         func_1A3B10
label_1b4dbc:
    if (ctx->pc == 0x1B4DBCu) {
        ctx->pc = 0x1B4DBCu;
            // 0x1b4dbc: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1B4DC0u;
        goto label_1b4dc0;
    }
    ctx->pc = 0x1B4DB8u;
    SET_GPR_U32(ctx, 31, 0x1B4DC0u);
    ctx->pc = 0x1B4DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DB8u;
            // 0x1b4dbc: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B10u;
    if (runtime->hasFunction(0x1A3B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DC0u; }
        if (ctx->pc != 0x1B4DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ApplyMatrix__14CEditCollisionFPA4_f_0x1a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DC0u; }
        if (ctx->pc != 0x1B4DC0u) { return; }
    }
    ctx->pc = 0x1B4DC0u;
label_1b4dc0:
    // 0x1b4dc0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x1b4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1b4dc4:
    // 0x1b4dc4: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x1b4dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_1b4dc8:
    // 0x1b4dc8: 0xc04e624  jal         func_139890
label_1b4dcc:
    if (ctx->pc == 0x1B4DCCu) {
        ctx->pc = 0x1B4DCCu;
            // 0x1b4dcc: 0xae2001d4  sw          $zero, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
        ctx->pc = 0x1B4DD0u;
        goto label_1b4dd0;
    }
    ctx->pc = 0x1B4DC8u;
    SET_GPR_U32(ctx, 31, 0x1B4DD0u);
    ctx->pc = 0x1B4DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DC8u;
            // 0x1b4dcc: 0xae2001d4  sw          $zero, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DD0u; }
        if (ctx->pc != 0x1B4DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DD0u; }
        if (ctx->pc != 0x1B4DD0u) { return; }
    }
    ctx->pc = 0x1B4DD0u;
label_1b4dd0:
    // 0x1b4dd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b4dd4:
    // 0x1b4dd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1b4dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1b4dd8:
    // 0x1b4dd8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b4ddc:
    if (ctx->pc == 0x1B4DDCu) {
        ctx->pc = 0x1B4DE0u;
        goto label_1b4de0;
    }
    ctx->pc = 0x1B4DD8u;
    {
        const bool branch_taken_0x1b4dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4dd8) {
            ctx->pc = 0x1B4E50u;
            goto label_1b4e50;
        }
    }
    ctx->pc = 0x1B4DE0u;
label_1b4de0:
    // 0x1b4de0: 0xc62300a0  lwc1        $f3, 0xA0($s1)
    ctx->pc = 0x1b4de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b4de4:
    // 0x1b4de4: 0xc62200b0  lwc1        $f2, 0xB0($s1)
    ctx->pc = 0x1b4de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4de8:
    // 0x1b4de8: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x1b4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4dec:
    // 0x1b4dec: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x1b4decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4df0:
    // 0x1b4df0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1b4df0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1b4df4:
    // 0x1b4df4: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x1b4df4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b4df8:
    // 0x1b4df8: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x1b4df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4dfc:
    // 0x1b4dfc: 0x0  nop
    ctx->pc = 0x1b4dfcu;
    // NOP
label_1b4e00:
    // 0x1b4e00: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1b4e04:
    if (ctx->pc == 0x1B4E04u) {
        ctx->pc = 0x1B4E04u;
            // 0x1b4e04: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x1B4E08u;
        goto label_1b4e08;
    }
    ctx->pc = 0x1B4E00u;
    {
        const bool branch_taken_0x1b4e00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E00u;
            // 0x1b4e04: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e00) {
            ctx->pc = 0x1B4E24u;
            goto label_1b4e24;
        }
    }
    ctx->pc = 0x1B4E08u;
label_1b4e08:
    // 0x1b4e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4e0c:
    // 0x1b4e0c: 0x0  nop
    ctx->pc = 0x1b4e0cu;
    // NOP
label_1b4e10:
    // 0x1b4e10: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1b4e10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_1b4e14:
    // 0x1b4e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b4e18:
    // 0x1b4e18: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x1b4e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_1b4e1c:
    // 0x1b4e1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b4e20:
    if (ctx->pc == 0x1B4E20u) {
        ctx->pc = 0x1B4E20u;
            // 0x1b4e20: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->pc = 0x1B4E24u;
        goto label_1b4e24;
    }
    ctx->pc = 0x1B4E1Cu;
    {
        const bool branch_taken_0x1b4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E1Cu;
            // 0x1b4e20: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e1c) {
            ctx->pc = 0x1B4E44u;
            goto label_1b4e44;
        }
    }
    ctx->pc = 0x1B4E24u;
label_1b4e24:
    // 0x1b4e24: 0x0  nop
    ctx->pc = 0x1b4e24u;
    // NOP
label_1b4e28:
    // 0x1b4e28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b4e2c:
    // 0x1b4e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4e30:
    // 0x1b4e30: 0x0  nop
    ctx->pc = 0x1b4e30u;
    // NOP
label_1b4e34:
    // 0x1b4e34: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1b4e34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_1b4e38:
    // 0x1b4e38: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b4e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b4e3c:
    // 0x1b4e3c: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x1b4e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
label_1b4e40:
    // 0x1b4e40: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x1b4e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_1b4e44:
    // 0x1b4e44: 0x0  nop
    ctx->pc = 0x1b4e44u;
    // NOP
label_1b4e48:
    // 0x1b4e48: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x1b4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_1b4e4c:
    // 0x1b4e4c: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x1b4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_1b4e50:
    // 0x1b4e50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b4e54:
    // 0x1b4e54: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b4e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e58:
    // 0x1b4e58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b4e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e5c:
    // 0x1b4e5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b4e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e60:
    // 0x1b4e60: 0x262801c0  addiu       $t0, $s1, 0x1C0
    ctx->pc = 0x1b4e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_1b4e64:
    // 0x1b4e64: 0xc04bd40  jal         func_12F500
label_1b4e68:
    if (ctx->pc == 0x1B4E68u) {
        ctx->pc = 0x1B4E68u;
            // 0x1b4e68: 0x262901d0  addiu       $t1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->pc = 0x1B4E6Cu;
        goto label_1b4e6c;
    }
    ctx->pc = 0x1B4E64u;
    SET_GPR_U32(ctx, 31, 0x1B4E6Cu);
    ctx->pc = 0x1B4E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E64u;
            // 0x1b4e68: 0x262901d0  addiu       $t1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E6Cu; }
        if (ctx->pc != 0x1B4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E6Cu; }
        if (ctx->pc != 0x1B4E6Cu) { return; }
    }
    ctx->pc = 0x1B4E6Cu;
label_1b4e6c:
    // 0x1b4e6c: 0x0  nop
    ctx->pc = 0x1b4e6cu;
    // NOP
label_1b4e70:
    // 0x1b4e70: 0xc04bc8c  jal         func_12F230
label_1b4e74:
    if (ctx->pc == 0x1B4E74u) {
        ctx->pc = 0x1B4E74u;
            // 0x1b4e74: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1B4E78u;
        goto label_1b4e78;
    }
    ctx->pc = 0x1B4E70u;
    SET_GPR_U32(ctx, 31, 0x1B4E78u);
    ctx->pc = 0x1B4E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E70u;
            // 0x1b4e74: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E78u; }
        if (ctx->pc != 0x1B4E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E78u; }
        if (ctx->pc != 0x1B4E78u) { return; }
    }
    ctx->pc = 0x1B4E78u;
label_1b4e78:
    // 0x1b4e78: 0x12400095  beqz        $s2, . + 4 + (0x95 << 2)
label_1b4e7c:
    if (ctx->pc == 0x1B4E7Cu) {
        ctx->pc = 0x1B4E7Cu;
            // 0x1b4e7c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1B4E80u;
        goto label_1b4e80;
    }
    ctx->pc = 0x1B4E78u;
    {
        const bool branch_taken_0x1b4e78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E78u;
            // 0x1b4e7c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e78) {
            ctx->pc = 0x1B50D0u;
            goto label_1b50d0;
        }
    }
    ctx->pc = 0x1B4E80u;
label_1b4e80:
    // 0x1b4e80: 0xc04bc8c  jal         func_12F230
label_1b4e84:
    if (ctx->pc == 0x1B4E84u) {
        ctx->pc = 0x1B4E88u;
        goto label_1b4e88;
    }
    ctx->pc = 0x1B4E80u;
    SET_GPR_U32(ctx, 31, 0x1B4E88u);
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E88u; }
        if (ctx->pc != 0x1B4E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E88u; }
        if (ctx->pc != 0x1B4E88u) { return; }
    }
    ctx->pc = 0x1B4E88u;
label_1b4e88:
    // 0x1b4e88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b4e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b4e8c:
    // 0x1b4e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e90:
    // 0x1b4e90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b4e94:
    // 0x1b4e94: 0x320f809  jalr        $t9
label_1b4e98:
    if (ctx->pc == 0x1B4E98u) {
        ctx->pc = 0x1B4E98u;
            // 0x1b4e98: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1B4E9Cu;
        goto label_1b4e9c;
    }
    ctx->pc = 0x1B4E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4E9Cu);
        ctx->pc = 0x1B4E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E94u;
            // 0x1b4e98: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E9Cu; }
            if (ctx->pc != 0x1B4E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B4E9Cu;
label_1b4e9c:
    // 0x1b4e9c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b4e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b4ea0:
    // 0x1b4ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ea4:
    // 0x1b4ea4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b4ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b4ea8:
    // 0x1b4ea8: 0x320f809  jalr        $t9
label_1b4eac:
    if (ctx->pc == 0x1B4EACu) {
        ctx->pc = 0x1B4EACu;
            // 0x1b4eac: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1B4EB0u;
        goto label_1b4eb0;
    }
    ctx->pc = 0x1B4EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4EB0u);
        ctx->pc = 0x1B4EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EA8u;
            // 0x1b4eac: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4EB0u; }
            if (ctx->pc != 0x1B4EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4EB0u;
label_1b4eb0:
    // 0x1b4eb0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b4eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b4eb4:
    // 0x1b4eb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b4eb8:
    // 0x1b4eb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b4eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4ebc:
    // 0x1b4ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ec0:
    // 0x1b4ec0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4ec0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b4ec4:
    // 0x1b4ec4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1b4ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1b4ec8:
    // 0x1b4ec8: 0x320f809  jalr        $t9
label_1b4ecc:
    if (ctx->pc == 0x1B4ECCu) {
        ctx->pc = 0x1B4ECCu;
            // 0x1b4ecc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B4ED0u;
        goto label_1b4ed0;
    }
    ctx->pc = 0x1B4EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4ED0u);
        ctx->pc = 0x1B4ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4EC8u;
            // 0x1b4ecc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4ED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4ED0u; }
            if (ctx->pc != 0x1B4ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4ED0u;
label_1b4ed0:
    // 0x1b4ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ed4:
    // 0x1b4ed4: 0xc059c88  jal         func_167220
label_1b4ed8:
    if (ctx->pc == 0x1B4ED8u) {
        ctx->pc = 0x1B4ED8u;
            // 0x1b4ed8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1B4EDCu;
        goto label_1b4edc;
    }
    ctx->pc = 0x1B4ED4u;
    SET_GPR_U32(ctx, 31, 0x1B4EDCu);
    ctx->pc = 0x1B4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4ED4u;
            // 0x1b4ed8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167220u;
    if (runtime->hasFunction(0x167220u)) {
        auto targetFn = runtime->lookupFunction(0x167220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4EDCu; }
        if (ctx->pc != 0x1B4EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4EDCu; }
        if (ctx->pc != 0x1B4EDCu) { return; }
    }
    ctx->pc = 0x1B4EDCu;
label_1b4edc:
    // 0x1b4edc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1b4ee0:
    if (ctx->pc == 0x1B4EE0u) {
        ctx->pc = 0x1B4EE4u;
        goto label_1b4ee4;
    }
    ctx->pc = 0x1B4EDCu;
    {
        const bool branch_taken_0x1b4edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4edc) {
            ctx->pc = 0x1B4F60u;
            goto label_1b4f60;
        }
    }
    ctx->pc = 0x1B4EE4u;
label_1b4ee4:
    // 0x1b4ee4: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x1b4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ee8:
    // 0x1b4ee8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b4eec:
    // 0x1b4eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ef0:
    // 0x1b4ef0: 0x0  nop
    ctx->pc = 0x1b4ef0u;
    // NOP
label_1b4ef4:
    // 0x1b4ef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4ef8:
    // 0x1b4ef8: 0x0  nop
    ctx->pc = 0x1b4ef8u;
    // NOP
label_1b4efc:
    // 0x1b4efc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1b4f00:
    if (ctx->pc == 0x1B4F00u) {
        ctx->pc = 0x1B4F04u;
        goto label_1b4f04;
    }
    ctx->pc = 0x1B4EFCu;
    {
        const bool branch_taken_0x1b4efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4efc) {
            ctx->pc = 0x1B4F38u;
            goto label_1b4f38;
        }
    }
    ctx->pc = 0x1B4F04u;
label_1b4f04:
    // 0x1b4f04: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b4f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b4f08:
    // 0x1b4f08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b4f0c:
    // 0x1b4f0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b4f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b4f10:
    // 0x1b4f10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b4f14:
    if (ctx->pc == 0x1B4F14u) {
        ctx->pc = 0x1B4F18u;
        goto label_1b4f18;
    }
    ctx->pc = 0x1B4F10u;
    {
        const bool branch_taken_0x1b4f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f10) {
            ctx->pc = 0x1B4F38u;
            goto label_1b4f38;
        }
    }
    ctx->pc = 0x1B4F18u;
label_1b4f18:
    // 0x1b4f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f1c:
    // 0x1b4f1c: 0x0  nop
    ctx->pc = 0x1b4f1cu;
    // NOP
label_1b4f20:
    // 0x1b4f20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4f24:
    // 0x1b4f24: 0x0  nop
    ctx->pc = 0x1b4f24u;
    // NOP
label_1b4f28:
    // 0x1b4f28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b4f2c:
    if (ctx->pc == 0x1B4F2Cu) {
        ctx->pc = 0x1B4F30u;
        goto label_1b4f30;
    }
    ctx->pc = 0x1B4F28u;
    {
        const bool branch_taken_0x1b4f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4f28) {
            ctx->pc = 0x1B4F34u;
            goto label_1b4f34;
        }
    }
    ctx->pc = 0x1B4F30u;
label_1b4f30:
    // 0x1b4f30: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b4f30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b4f34:
    // 0x1b4f34: 0xe6210250  swc1        $f1, 0x250($s1)
    ctx->pc = 0x1b4f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
label_1b4f38:
    // 0x1b4f38: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b4f3c:
    // 0x1b4f3c: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x1b4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
label_1b4f40:
    // 0x1b4f40: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1b4f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b4f44:
    // 0x1b4f44: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b4f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b4f48:
    // 0x1b4f48: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b4f4c:
    // 0x1b4f4c: 0xc04bcf4  jal         func_12F3D0
label_1b4f50:
    if (ctx->pc == 0x1B4F50u) {
        ctx->pc = 0x1B4F50u;
            // 0x1b4f50: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1B4F54u;
        goto label_1b4f54;
    }
    ctx->pc = 0x1B4F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F54u);
    ctx->pc = 0x1B4F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F4Cu;
            // 0x1b4f50: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F54u; }
        if (ctx->pc != 0x1B4F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F54u; }
        if (ctx->pc != 0x1B4F54u) { return; }
    }
    ctx->pc = 0x1B4F54u;
label_1b4f54:
    // 0x1b4f54: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1b4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1b4f58:
    // 0x1b4f58: 0xc04bcfc  jal         func_12F3F0
label_1b4f5c:
    if (ctx->pc == 0x1B4F5Cu) {
        ctx->pc = 0x1B4F5Cu;
            // 0x1b4f5c: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1B4F60u;
        goto label_1b4f60;
    }
    ctx->pc = 0x1B4F58u;
    SET_GPR_U32(ctx, 31, 0x1B4F60u);
    ctx->pc = 0x1B4F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F58u;
            // 0x1b4f5c: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F60u; }
        if (ctx->pc != 0x1B4F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F60u; }
        if (ctx->pc != 0x1B4F60u) { return; }
    }
    ctx->pc = 0x1B4F60u;
label_1b4f60:
    // 0x1b4f60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b4f64:
    // 0x1b4f64: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1b4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_1b4f68:
    // 0x1b4f68: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1b4f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1b4f6c:
    // 0x1b4f6c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1b4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_1b4f70:
    // 0x1b4f70: 0xc04e624  jal         func_139890
label_1b4f74:
    if (ctx->pc == 0x1B4F74u) {
        ctx->pc = 0x1B4F74u;
            // 0x1b4f74: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1B4F78u;
        goto label_1b4f78;
    }
    ctx->pc = 0x1B4F70u;
    SET_GPR_U32(ctx, 31, 0x1B4F78u);
    ctx->pc = 0x1B4F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F70u;
            // 0x1b4f74: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F78u; }
        if (ctx->pc != 0x1B4F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F78u; }
        if (ctx->pc != 0x1B4F78u) { return; }
    }
    ctx->pc = 0x1B4F78u;
label_1b4f78:
    // 0x1b4f78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b4f7c:
    // 0x1b4f7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b4f80:
    // 0x1b4f80: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1b4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_1b4f84:
    // 0x1b4f84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4f88:
    // 0x1b4f88: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x1b4f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_1b4f8c:
    // 0x1b4f8c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1b4f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4f90:
    // 0x1b4f90: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b4f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4f94:
    // 0x1b4f94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b4f98:
    // 0x1b4f98: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1b4f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1b4f9c:
    // 0x1b4f9c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1b4f9cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1b4fa0:
    // 0x1b4fa0: 0x0  nop
    ctx->pc = 0x1b4fa0u;
    // NOP
label_1b4fa4:
    // 0x1b4fa4: 0x0  nop
    ctx->pc = 0x1b4fa4u;
    // NOP
label_1b4fa8:
    // 0x1b4fa8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b4fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4fac:
    // 0x1b4fac: 0x0  nop
    ctx->pc = 0x1b4facu;
    // NOP
label_1b4fb0:
    // 0x1b4fb0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1b4fb4:
    if (ctx->pc == 0x1B4FB4u) {
        ctx->pc = 0x1B4FB4u;
            // 0x1b4fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B4FB8u;
        goto label_1b4fb8;
    }
    ctx->pc = 0x1B4FB0u;
    {
        const bool branch_taken_0x1b4fb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FB0u;
            // 0x1b4fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fb0) {
            ctx->pc = 0x1B4FBCu;
            goto label_1b4fbc;
        }
    }
    ctx->pc = 0x1B4FB8u;
label_1b4fb8:
    // 0x1b4fb8: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x1b4fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_1b4fbc:
    // 0x1b4fbc: 0x0  nop
    ctx->pc = 0x1b4fbcu;
    // NOP
label_1b4fc0:
    // 0x1b4fc0: 0x27b501a0  addiu       $s5, $sp, 0x1A0
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1b4fc4:
    // 0x1b4fc4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1b4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1b4fc8:
    // 0x1b4fc8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1b4fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b4fcc:
    // 0x1b4fcc: 0xc041c3e  jal         func_1070F8
label_1b4fd0:
    if (ctx->pc == 0x1B4FD0u) {
        ctx->pc = 0x1B4FD0u;
            // 0x1b4fd0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FD4u;
        goto label_1b4fd4;
    }
    ctx->pc = 0x1B4FCCu;
    SET_GPR_U32(ctx, 31, 0x1B4FD4u);
    ctx->pc = 0x1B4FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FCCu;
            // 0x1b4fd0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FD4u; }
        if (ctx->pc != 0x1B4FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4FD4u; }
        if (ctx->pc != 0x1B4FD4u) { return; }
    }
    ctx->pc = 0x1B4FD4u;
label_1b4fd4:
    // 0x1b4fd4: 0xc7a201c0  lwc1        $f2, 0x1C0($sp)
    ctx->pc = 0x1b4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4fd8:
    // 0x1b4fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4fdc:
    // 0x1b4fdc: 0x0  nop
    ctx->pc = 0x1b4fdcu;
    // NOP
label_1b4fe0:
    // 0x1b4fe0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b4fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4fe4:
    // 0x1b4fe4: 0x0  nop
    ctx->pc = 0x1b4fe4u;
    // NOP
label_1b4fe8:
    // 0x1b4fe8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b4fec:
    if (ctx->pc == 0x1B4FECu) {
        ctx->pc = 0x1B4FECu;
            // 0x1b4fec: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1B4FF0u;
        goto label_1b4ff0;
    }
    ctx->pc = 0x1B4FE8u;
    {
        const bool branch_taken_0x1b4fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FE8u;
            // 0x1b4fec: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe8) {
            ctx->pc = 0x1B4FF4u;
            goto label_1b4ff4;
        }
    }
    ctx->pc = 0x1B4FF0u;
label_1b4ff0:
    // 0x1b4ff0: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x1b4ff0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_1b4ff4:
    // 0x1b4ff4: 0xc7a301c8  lwc1        $f3, 0x1C8($sp)
    ctx->pc = 0x1b4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b4ff8:
    // 0x1b4ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ffc:
    // 0x1b4ffc: 0x0  nop
    ctx->pc = 0x1b4ffcu;
    // NOP
label_1b5000:
    // 0x1b5000: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1b5000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5004:
    // 0x1b5004: 0x0  nop
    ctx->pc = 0x1b5004u;
    // NOP
label_1b5008:
    // 0x1b5008: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b500c:
    if (ctx->pc == 0x1B500Cu) {
        ctx->pc = 0x1B500Cu;
            // 0x1b500c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x1B5010u;
        goto label_1b5010;
    }
    ctx->pc = 0x1B5008u;
    {
        const bool branch_taken_0x1b5008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5008u;
            // 0x1b500c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5008) {
            ctx->pc = 0x1B5014u;
            goto label_1b5014;
        }
    }
    ctx->pc = 0x1B5010u;
label_1b5010:
    // 0x1b5010: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1b5010u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_1b5014:
    // 0x1b5014: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5018:
    // 0x1b5018: 0x0  nop
    ctx->pc = 0x1b5018u;
    // NOP
label_1b501c:
    // 0x1b501c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1b5020:
    if (ctx->pc == 0x1B5020u) {
        ctx->pc = 0x1B5024u;
        goto label_1b5024;
    }
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5048u;
            goto label_1b5048;
        }
    }
    ctx->pc = 0x1B5024u;
label_1b5024:
    // 0x1b5024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5028:
    // 0x1b5028: 0x0  nop
    ctx->pc = 0x1b5028u;
    // NOP
label_1b502c:
    // 0x1b502c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b502cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5030:
    // 0x1b5030: 0x0  nop
    ctx->pc = 0x1b5030u;
    // NOP
label_1b5034:
    // 0x1b5034: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b5038:
    if (ctx->pc == 0x1B5038u) {
        ctx->pc = 0x1B503Cu;
        goto label_1b503c;
    }
    ctx->pc = 0x1B5034u;
    {
        const bool branch_taken_0x1b5034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5034) {
            ctx->pc = 0x1B5040u;
            goto label_1b5040;
        }
    }
    ctx->pc = 0x1B503Cu;
label_1b503c:
    // 0x1b503c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b503cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1b5040:
    // 0x1b5040: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b5044:
    if (ctx->pc == 0x1B5044u) {
        ctx->pc = 0x1B5044u;
            // 0x1b5044: 0xe6220270  swc1        $f2, 0x270($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
        ctx->pc = 0x1B5048u;
        goto label_1b5048;
    }
    ctx->pc = 0x1B5040u;
    {
        const bool branch_taken_0x1b5040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5040u;
            // 0x1b5044: 0xe6220270  swc1        $f2, 0x270($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5040) {
            ctx->pc = 0x1B506Cu;
            goto label_1b506c;
        }
    }
    ctx->pc = 0x1B5048u;
label_1b5048:
    // 0x1b5048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b504c:
    // 0x1b504c: 0x0  nop
    ctx->pc = 0x1b504cu;
    // NOP
label_1b5050:
    // 0x1b5050: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1b5050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5054:
    // 0x1b5054: 0x0  nop
    ctx->pc = 0x1b5054u;
    // NOP
label_1b5058:
    // 0x1b5058: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b505c:
    if (ctx->pc == 0x1B505Cu) {
        ctx->pc = 0x1B5060u;
        goto label_1b5060;
    }
    ctx->pc = 0x1B5058u;
    {
        const bool branch_taken_0x1b5058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5058) {
            ctx->pc = 0x1B5064u;
            goto label_1b5064;
        }
    }
    ctx->pc = 0x1B5060u;
label_1b5060:
    // 0x1b5060: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1b5060u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_1b5064:
    // 0x1b5064: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1b5064u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_1b5068:
    // 0x1b5068: 0xe6220270  swc1        $f2, 0x270($s1)
    ctx->pc = 0x1b5068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
label_1b506c:
    // 0x1b506c: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x1b506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5070:
    // 0x1b5070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5074:
    // 0x1b5074: 0x0  nop
    ctx->pc = 0x1b5074u;
    // NOP
label_1b5078:
    // 0x1b5078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b507c:
    // 0x1b507c: 0x0  nop
    ctx->pc = 0x1b507cu;
    // NOP
label_1b5080:
    // 0x1b5080: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b5084:
    if (ctx->pc == 0x1B5084u) {
        ctx->pc = 0x1B5088u;
        goto label_1b5088;
    }
    ctx->pc = 0x1B5080u;
    {
        const bool branch_taken_0x1b5080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5080) {
            ctx->pc = 0x1B508Cu;
            goto label_1b508c;
        }
    }
    ctx->pc = 0x1B5088u;
label_1b5088:
    // 0x1b5088: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b5088u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b508c:
    // 0x1b508c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b5090:
    // 0x1b5090: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b5090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b5094:
    // 0x1b5094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5098:
    // 0x1b5098: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1b5098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_1b509c:
    // 0x1b509c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1b509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b50a0:
    // 0x1b50a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b50a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b50a4:
    // 0x1b50a4: 0xe6200274  swc1        $f0, 0x274($s1)
    ctx->pc = 0x1b50a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
label_1b50a8:
    // 0x1b50a8: 0xc6200270  lwc1        $f0, 0x270($s1)
    ctx->pc = 0x1b50a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b50ac:
    // 0x1b50ac: 0xc041c38  jal         func_1070E0
label_1b50b0:
    if (ctx->pc == 0x1B50B0u) {
        ctx->pc = 0x1B50B0u;
            // 0x1b50b0: 0xe6200278  swc1        $f0, 0x278($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
        ctx->pc = 0x1B50B4u;
        goto label_1b50b4;
    }
    ctx->pc = 0x1B50ACu;
    SET_GPR_U32(ctx, 31, 0x1B50B4u);
    ctx->pc = 0x1B50B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50ACu;
            // 0x1b50b0: 0xe6200278  swc1        $f0, 0x278($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50B4u; }
        if (ctx->pc != 0x1B50B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50B4u; }
        if (ctx->pc != 0x1B50B4u) { return; }
    }
    ctx->pc = 0x1B50B4u;
label_1b50b4:
    // 0x1b50b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b50b8:
    // 0x1b50b8: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1b50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_1b50bc:
    // 0x1b50bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b50bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b50c0:
    // 0x1b50c0: 0xc041c4a  jal         func_107128
label_1b50c4:
    if (ctx->pc == 0x1B50C4u) {
        ctx->pc = 0x1B50C4u;
            // 0x1b50c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B50C8u;
        goto label_1b50c8;
    }
    ctx->pc = 0x1B50C0u;
    SET_GPR_U32(ctx, 31, 0x1B50C8u);
    ctx->pc = 0x1B50C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50C0u;
            // 0x1b50c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50C8u; }
        if (ctx->pc != 0x1B50C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50C8u; }
        if (ctx->pc != 0x1B50C8u) { return; }
    }
    ctx->pc = 0x1B50C8u;
label_1b50c8:
    // 0x1b50c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b50cc:
    // 0x1b50cc: 0xae22026c  sw          $v0, 0x26C($s1)
    ctx->pc = 0x1b50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
label_1b50d0:
    // 0x1b50d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b50d4:
    // 0x1b50d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1b50d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1b50d8:
    // 0x1b50d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b50dc:
    if (ctx->pc == 0x1B50DCu) {
        ctx->pc = 0x1B50E0u;
        goto label_1b50e0;
    }
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B50E4u;
            goto label_1b50e4;
        }
    }
    ctx->pc = 0x1B50E0u;
label_1b50e0:
    // 0x1b50e0: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x1b50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
label_1b50e4:
    // 0x1b50e4: 0x0  nop
    ctx->pc = 0x1b50e4u;
    // NOP
label_1b50e8:
    // 0x1b50e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b50ec:
    // 0x1b50ec: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b50ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1b50f0:
    // 0x1b50f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b50f4:
    if (ctx->pc == 0x1B50F4u) {
        ctx->pc = 0x1B50F8u;
        goto label_1b50f8;
    }
    ctx->pc = 0x1B50F0u;
    {
        const bool branch_taken_0x1b50f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50f0) {
            ctx->pc = 0x1B50FCu;
            goto label_1b50fc;
        }
    }
    ctx->pc = 0x1B50F8u;
label_1b50f8:
    // 0x1b50f8: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x1b50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
label_1b50fc:
    // 0x1b50fc: 0x0  nop
    ctx->pc = 0x1b50fcu;
    // NOP
label_1b5100:
    // 0x1b5100: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
label_1b5104:
    if (ctx->pc == 0x1B5104u) {
        ctx->pc = 0x1B5108u;
        goto label_1b5108;
    }
    ctx->pc = 0x1B5100u;
    {
        const bool branch_taken_0x1b5100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5100) {
            ctx->pc = 0x1B51F4u;
            goto label_1b51f4;
        }
    }
    ctx->pc = 0x1B5108u;
label_1b5108:
    // 0x1b5108: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b510c:
    // 0x1b510c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b5110:
    // 0x1b5110: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1b5110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_1b5114:
    // 0x1b5114: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_1b5118:
    if (ctx->pc == 0x1B5118u) {
        ctx->pc = 0x1B511Cu;
        goto label_1b511c;
    }
    ctx->pc = 0x1B5114u;
    {
        const bool branch_taken_0x1b5114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5114) {
            ctx->pc = 0x1B51F4u;
            goto label_1b51f4;
        }
    }
    ctx->pc = 0x1B511Cu;
label_1b511c:
    // 0x1b511c: 0x8e3901e0  lw          $t9, 0x1E0($s1)
    ctx->pc = 0x1b511cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_1b5120:
    // 0x1b5120: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1b5124:
    // 0x1b5124: 0x320f809  jalr        $t9
label_1b5128:
    if (ctx->pc == 0x1B5128u) {
        ctx->pc = 0x1B5128u;
            // 0x1b5128: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->pc = 0x1B512Cu;
        goto label_1b512c;
    }
    ctx->pc = 0x1B5124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B512Cu);
        ctx->pc = 0x1B5128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5124u;
            // 0x1b5128: 0x262401b0  addiu       $a0, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B512Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B512Cu; }
            if (ctx->pc != 0x1B512Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B512Cu;
label_1b512c:
    // 0x1b512c: 0x8e5200b0  lw          $s2, 0xB0($s2)
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1b5130:
    // 0x1b5130: 0xc04d6d8  jal         func_135B60
label_1b5134:
    if (ctx->pc == 0x1B5134u) {
        ctx->pc = 0x1B5134u;
            // 0x1b5134: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x1B5138u;
        goto label_1b5138;
    }
    ctx->pc = 0x1B5130u;
    SET_GPR_U32(ctx, 31, 0x1B5138u);
    ctx->pc = 0x1B5134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5130u;
            // 0x1b5134: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5138u; }
        if (ctx->pc != 0x1B5138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5138u; }
        if (ctx->pc != 0x1B5138u) { return; }
    }
    ctx->pc = 0x1B5138u;
label_1b5138:
    // 0x1b5138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b513c:
    // 0x1b513c: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_1b5140:
    if (ctx->pc == 0x1B5140u) {
        ctx->pc = 0x1B5140u;
            // 0x1b5140: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->pc = 0x1B5144u;
        goto label_1b5144;
    }
    ctx->pc = 0x1B513Cu;
    {
        const bool branch_taken_0x1b513c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B513Cu;
            // 0x1b5140: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b513c) {
            ctx->pc = 0x1B51F4u;
            goto label_1b51f4;
        }
    }
    ctx->pc = 0x1B5144u;
label_1b5144:
    // 0x1b5144: 0x0  nop
    ctx->pc = 0x1b5144u;
    // NOP
label_1b5148:
    // 0x1b5148: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1b5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1b514c:
    // 0x1b514c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_1b5150:
    if (ctx->pc == 0x1B5150u) {
        ctx->pc = 0x1B5150u;
            // 0x1b5150: 0x26430010  addiu       $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B5154u;
        goto label_1b5154;
    }
    ctx->pc = 0x1B514Cu;
    {
        const bool branch_taken_0x1b514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B514Cu;
            // 0x1b5150: 0x26430010  addiu       $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b514c) {
            ctx->pc = 0x1B51E8u;
            goto label_1b51e8;
        }
    }
    ctx->pc = 0x1B5154u;
label_1b5154:
    // 0x1b5154: 0x8c720070  lw          $s2, 0x70($v1)
    ctx->pc = 0x1b5154u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_1b5158:
    // 0x1b5158: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
label_1b515c:
    if (ctx->pc == 0x1B515Cu) {
        ctx->pc = 0x1B5160u;
        goto label_1b5160;
    }
    ctx->pc = 0x1B5158u;
    {
        const bool branch_taken_0x1b5158 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5158) {
            ctx->pc = 0x1B51F4u;
            goto label_1b51f4;
        }
    }
    ctx->pc = 0x1B5160u;
label_1b5160:
    // 0x1b5160: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b5164:
    // 0x1b5164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b5168:
    if (ctx->pc == 0x1B5168u) {
        ctx->pc = 0x1B5168u;
            // 0x1b5168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B516Cu;
        goto label_1b516c;
    }
    ctx->pc = 0x1B5164u;
    {
        const bool branch_taken_0x1b5164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5164u;
            // 0x1b5168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5164) {
            ctx->pc = 0x1B517Cu;
            goto label_1b517c;
        }
    }
    ctx->pc = 0x1B516Cu;
label_1b516c:
    // 0x1b516c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1b516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1b5170:
    // 0x1b5170: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5174:
    // 0x1b5174: 0xc04de54  jal         func_137950
label_1b5178:
    if (ctx->pc == 0x1B5178u) {
        ctx->pc = 0x1B5178u;
            // 0x1b5178: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x1B517Cu;
        goto label_1b517c;
    }
    ctx->pc = 0x1B5174u;
    SET_GPR_U32(ctx, 31, 0x1B517Cu);
    ctx->pc = 0x1B5178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5174u;
            // 0x1b5178: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B517Cu; }
        if (ctx->pc != 0x1B517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B517Cu; }
        if (ctx->pc != 0x1B517Cu) { return; }
    }
    ctx->pc = 0x1B517Cu;
label_1b517c:
    // 0x1b517c: 0x0  nop
    ctx->pc = 0x1b517cu;
    // NOP
label_1b5180:
    // 0x1b5180: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b5180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b5184:
    // 0x1b5184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5188:
    // 0x1b5188: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1b5188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1b518c:
    // 0x1b518c: 0x320f809  jalr        $t9
label_1b5190:
    if (ctx->pc == 0x1B5190u) {
        ctx->pc = 0x1B5190u;
            // 0x1b5190: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x1B5194u;
        goto label_1b5194;
    }
    ctx->pc = 0x1B518Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5194u);
        ctx->pc = 0x1B5190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B518Cu;
            // 0x1b5190: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5194u; }
            if (ctx->pc != 0x1B5194u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5194u;
label_1b5194:
    // 0x1b5194: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1b5198:
    if (ctx->pc == 0x1B5198u) {
        ctx->pc = 0x1B5198u;
            // 0x1b5198: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x1B519Cu;
        goto label_1b519c;
    }
    ctx->pc = 0x1B5194u;
    {
        const bool branch_taken_0x1b5194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5194u;
            // 0x1b5198: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5194) {
            ctx->pc = 0x1B51F4u;
            goto label_1b51f4;
        }
    }
    ctx->pc = 0x1B519Cu;
label_1b519c:
    // 0x1b519c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1b519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1b51a0:
    // 0x1b51a0: 0x24426a40  addiu       $v0, $v0, 0x6A40
    ctx->pc = 0x1b51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27200));
label_1b51a4:
    // 0x1b51a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b51a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b51a8:
    // 0x1b51a8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1b51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1b51ac:
    // 0x1b51ac: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1b51b0:
    // 0x1b51b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b51b4:
    // 0x1b51b4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1b51b8:
    if (ctx->pc == 0x1B51B8u) {
        ctx->pc = 0x1B51BCu;
        goto label_1b51bc;
    }
    ctx->pc = 0x1B51B4u;
    {
        const bool branch_taken_0x1b51b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b51b4) {
            ctx->pc = 0x1B51C4u;
            goto label_1b51c4;
        }
    }
    ctx->pc = 0x1B51BCu;
label_1b51bc:
    // 0x1b51bc: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x1b51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_1b51c0:
    // 0x1b51c0: 0xafa00288  sw          $zero, 0x288($sp)
    ctx->pc = 0x1b51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 0));
label_1b51c4:
    // 0x1b51c4: 0x0  nop
    ctx->pc = 0x1b51c4u;
    // NOP
label_1b51c8:
    // 0x1b51c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b51c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b51cc:
    // 0x1b51cc: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1b51ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1b51d0:
    // 0x1b51d0: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x1b51d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b51d4:
    // 0x1b51d4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1b51d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b51d8:
    // 0x1b51d8: 0xc0a5a34  jal         func_2968D0
label_1b51dc:
    if (ctx->pc == 0x1B51DCu) {
        ctx->pc = 0x1B51DCu;
            // 0x1b51dc: 0x27a80280  addiu       $t0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1B51E0u;
        goto label_1b51e0;
    }
    ctx->pc = 0x1B51D8u;
    SET_GPR_U32(ctx, 31, 0x1B51E0u);
    ctx->pc = 0x1B51DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51D8u;
            // 0x1b51dc: 0x27a80280  addiu       $t0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2968D0u;
    if (runtime->hasFunction(0x2968D0u)) {
        auto targetFn = runtime->lookupFunction(0x2968D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51E0u; }
        if (ctx->pc != 0x1B51E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateGrid__8CEditMapFPfPfP9mgCMemoryPf_0x2968d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51E0u; }
        if (ctx->pc != 0x1B51E0u) { return; }
    }
    ctx->pc = 0x1B51E0u;
label_1b51e0:
    // 0x1b51e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b51e4:
    if (ctx->pc == 0x1B51E4u) {
        ctx->pc = 0x1B51E8u;
        goto label_1b51e8;
    }
    ctx->pc = 0x1B51E0u;
    {
        const bool branch_taken_0x1b51e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b51e0) {
            ctx->pc = 0x1B51F4u;
            goto label_1b51f4;
        }
    }
    ctx->pc = 0x1B51E8u;
label_1b51e8:
    // 0x1b51e8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1b51e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b51ec:
    // 0x1b51ec: 0x1640ffd5  bnez        $s2, . + 4 + (-0x2B << 2)
label_1b51f0:
    if (ctx->pc == 0x1B51F0u) {
        ctx->pc = 0x1B51F4u;
        goto label_1b51f4;
    }
    ctx->pc = 0x1B51ECu;
    {
        const bool branch_taken_0x1b51ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51ec) {
            ctx->pc = 0x1B5144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5144;
        }
    }
    ctx->pc = 0x1B51F4u;
label_1b51f4:
    // 0x1b51f4: 0x0  nop
    ctx->pc = 0x1b51f4u;
    // NOP
label_1b51f8:
    // 0x1b51f8: 0x26730280  addiu       $s3, $s3, 0x280
    ctx->pc = 0x1b51f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_1b51fc:
    // 0x1b51fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b51fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b5200:
    // 0x1b5200: 0x8e820f94  lw          $v0, 0xF94($s4)
    ctx->pc = 0x1b5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3988)));
label_1b5204:
    // 0x1b5204: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b5204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5208:
    // 0x1b5208: 0x1440fe54  bnez        $v0, . + 4 + (-0x1AC << 2)
label_1b520c:
    if (ctx->pc == 0x1B520Cu) {
        ctx->pc = 0x1B520Cu;
            // 0x1b520c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1B5210u;
        goto label_1b5210;
    }
    ctx->pc = 0x1B5208u;
    {
        const bool branch_taken_0x1b5208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B520Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5208u;
            // 0x1b520c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5208) {
            ctx->pc = 0x1B4B5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4b5c;
        }
    }
    ctx->pc = 0x1B5210u;
label_1b5210:
    // 0x1b5210: 0xaf808d24  sw          $zero, -0x72DC($gp)
    ctx->pc = 0x1b5210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
label_1b5214:
    // 0x1b5214: 0xaf808d28  sw          $zero, -0x72D8($gp)
    ctx->pc = 0x1b5214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937896), GPR_U32(ctx, 0));
label_1b5218:
    // 0x1b5218: 0xaf808d2c  sw          $zero, -0x72D4($gp)
    ctx->pc = 0x1b5218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937900), GPR_U32(ctx, 0));
label_1b521c:
    // 0x1b521c: 0xaf808d30  sw          $zero, -0x72D0($gp)
    ctx->pc = 0x1b521cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937904), GPR_U32(ctx, 0));
label_1b5220:
    // 0x1b5220: 0xaf808d34  sw          $zero, -0x72CC($gp)
    ctx->pc = 0x1b5220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 0));
label_1b5224:
    // 0x1b5224: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1b5224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1b5228:
    // 0x1b5228: 0xc051a7c  jal         func_1469F0
label_1b522c:
    if (ctx->pc == 0x1B522Cu) {
        ctx->pc = 0x1B522Cu;
            // 0x1b522c: 0xaf808d40  sw          $zero, -0x72C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 0));
        ctx->pc = 0x1B5230u;
        goto label_1b5230;
    }
    ctx->pc = 0x1B5228u;
    SET_GPR_U32(ctx, 31, 0x1B5230u);
    ctx->pc = 0x1B522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5228u;
            // 0x1b522c: 0xaf808d40  sw          $zero, -0x72C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5230u; }
        if (ctx->pc != 0x1B5230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5230u; }
        if (ctx->pc != 0x1B5230u) { return; }
    }
    ctx->pc = 0x1B5230u;
label_1b5230:
    // 0x1b5230: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b5230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1b5234:
    // 0x1b5234: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1b5234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1b5238:
    // 0x1b5238: 0xc0519ec  jal         func_1467B0
label_1b523c:
    if (ctx->pc == 0x1B523Cu) {
        ctx->pc = 0x1B523Cu;
            // 0x1b523c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
        ctx->pc = 0x1B5240u;
        goto label_1b5240;
    }
    ctx->pc = 0x1B5238u;
    SET_GPR_U32(ctx, 31, 0x1B5240u);
    ctx->pc = 0x1B523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5238u;
            // 0x1b523c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5240u; }
        if (ctx->pc != 0x1B5240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5240u; }
        if (ctx->pc != 0x1B5240u) { return; }
    }
    ctx->pc = 0x1B5240u;
label_1b5240:
    // 0x1b5240: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x1b5240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1b5244:
    // 0x1b5244: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1b5244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1b5248:
    // 0x1b5248: 0xc051a60  jal         func_146980
label_1b524c:
    if (ctx->pc == 0x1B524Cu) {
        ctx->pc = 0x1B524Cu;
            // 0x1b524c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1B5250u;
        goto label_1b5250;
    }
    ctx->pc = 0x1B5248u;
    SET_GPR_U32(ctx, 31, 0x1B5250u);
    ctx->pc = 0x1B524Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5248u;
            // 0x1b524c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5250u; }
        if (ctx->pc != 0x1B5250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5250u; }
        if (ctx->pc != 0x1B5250u) { return; }
    }
    ctx->pc = 0x1B5250u;
label_1b5250:
    // 0x1b5250: 0xc0519c8  jal         func_146720
label_1b5254:
    if (ctx->pc == 0x1B5254u) {
        ctx->pc = 0x1B5254u;
            // 0x1b5254: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1B5258u;
        goto label_1b5258;
    }
    ctx->pc = 0x1B5250u;
    SET_GPR_U32(ctx, 31, 0x1B5258u);
    ctx->pc = 0x1B5254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5250u;
            // 0x1b5254: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5258u; }
        if (ctx->pc != 0x1B5258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5258u; }
        if (ctx->pc != 0x1B5258u) { return; }
    }
    ctx->pc = 0x1B5258u;
label_1b5258:
    // 0x1b5258: 0x8f848d20  lw          $a0, -0x72E0($gp)
    ctx->pc = 0x1b5258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1b525c:
    // 0x1b525c: 0xc04e748  jal         func_139D20
label_1b5260:
    if (ctx->pc == 0x1B5260u) {
        ctx->pc = 0x1B5260u;
            // 0x1b5260: 0x24050142  addiu       $a1, $zero, 0x142 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
        ctx->pc = 0x1B5264u;
        goto label_1b5264;
    }
    ctx->pc = 0x1B525Cu;
    SET_GPR_U32(ctx, 31, 0x1B5264u);
    ctx->pc = 0x1B5260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B525Cu;
            // 0x1b5260: 0x24050142  addiu       $a1, $zero, 0x142 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5264u; }
        if (ctx->pc != 0x1B5264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5264u; }
        if (ctx->pc != 0x1B5264u) { return; }
    }
    ctx->pc = 0x1B5264u;
label_1b5264:
    // 0x1b5264: 0x24041410  addiu       $a0, $zero, 0x1410
    ctx->pc = 0x1b5264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
label_1b5268:
    // 0x1b5268: 0xc04e63c  jal         func_1398F0
label_1b526c:
    if (ctx->pc == 0x1B526Cu) {
        ctx->pc = 0x1B526Cu;
            // 0x1b526c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5270u;
        goto label_1b5270;
    }
    ctx->pc = 0x1B5268u;
    SET_GPR_U32(ctx, 31, 0x1B5270u);
    ctx->pc = 0x1B526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5268u;
            // 0x1b526c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5270u; }
        if (ctx->pc != 0x1B5270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5270u; }
        if (ctx->pc != 0x1B5270u) { return; }
    }
    ctx->pc = 0x1B5270u;
label_1b5270:
    // 0x1b5270: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1b5274:
    // 0x1b5274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5278:
    // 0x1b5278: 0x24a55360  addiu       $a1, $a1, 0x5360
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21344));
label_1b527c:
    // 0x1b527c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b527cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5280:
    // 0x1b5280: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1b5280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1b5284:
    // 0x1b5284: 0xc0400bc  jal         func_1002F0
label_1b5288:
    if (ctx->pc == 0x1B5288u) {
        ctx->pc = 0x1B5288u;
            // 0x1b5288: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1B528Cu;
        goto label_1b528c;
    }
    ctx->pc = 0x1B5284u;
    SET_GPR_U32(ctx, 31, 0x1B528Cu);
    ctx->pc = 0x1B5288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5284u;
            // 0x1b5288: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B528Cu; }
        if (ctx->pc != 0x1B528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B528Cu; }
        if (ctx->pc != 0x1B528Cu) { return; }
    }
    ctx->pc = 0x1B528Cu;
label_1b528c:
    // 0x1b528c: 0xae820fcc  sw          $v0, 0xFCC($s4)
    ctx->pc = 0x1b528cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4044), GPR_U32(ctx, 2));
label_1b5290:
    // 0x1b5290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5294:
    // 0x1b5294: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b5294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5298:
    // 0x1b5298: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b5298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b529c:
    // 0x1b529c: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1b529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1b52a0:
    // 0x1b52a0: 0x8c640fac  lw          $a0, 0xFAC($v1)
    ctx->pc = 0x1b52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4012)));
label_1b52a4:
    // 0x1b52a4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1b52a8:
    if (ctx->pc == 0x1B52A8u) {
        ctx->pc = 0x1B52A8u;
            // 0x1b52a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B52ACu;
        goto label_1b52ac;
    }
    ctx->pc = 0x1B52A4u;
    {
        const bool branch_taken_0x1b52a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52A4u;
            // 0x1b52a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52a4) {
            ctx->pc = 0x1B530Cu;
            goto label_1b530c;
        }
    }
    ctx->pc = 0x1B52ACu;
label_1b52ac:
    // 0x1b52ac: 0xc059948  jal         func_166520
label_1b52b0:
    if (ctx->pc == 0x1B52B0u) {
        ctx->pc = 0x1B52B4u;
        goto label_1b52b4;
    }
    ctx->pc = 0x1B52ACu;
    SET_GPR_U32(ctx, 31, 0x1B52B4u);
    ctx->pc = 0x166520u;
    if (runtime->hasFunction(0x166520u)) {
        auto targetFn = runtime->lookupFunction(0x166520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52B4u; }
        if (ctx->pc != 0x1B52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPieceColType__9CMapPartsFi_0x166520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52B4u; }
        if (ctx->pc != 0x1B52B4u) { return; }
    }
    ctx->pc = 0x1B52B4u;
label_1b52b4:
    // 0x1b52b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b52b8:
    if (ctx->pc == 0x1B52B8u) {
        ctx->pc = 0x1B52BCu;
        goto label_1b52bc;
    }
    ctx->pc = 0x1B52B4u;
    {
        const bool branch_taken_0x1b52b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52b4) {
            ctx->pc = 0x1B530Cu;
            goto label_1b530c;
        }
    }
    ctx->pc = 0x1B52BCu;
label_1b52bc:
    // 0x1b52bc: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1b52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1b52c0:
    // 0x1b52c0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1b52c4:
    if (ctx->pc == 0x1B52C4u) {
        ctx->pc = 0x1B52C8u;
        goto label_1b52c8;
    }
    ctx->pc = 0x1B52C0u;
    {
        const bool branch_taken_0x1b52c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52c0) {
            ctx->pc = 0x1B530Cu;
            goto label_1b530c;
        }
    }
    ctx->pc = 0x1B52C8u;
label_1b52c8:
    // 0x1b52c8: 0x8c710114  lw          $s1, 0x114($v1)
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1b52cc:
    // 0x1b52cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b52ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b52d0:
    // 0x1b52d0: 0x8e820fcc  lw          $v0, 0xFCC($s4)
    ctx->pc = 0x1b52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
label_1b52d4:
    // 0x1b52d4: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x1b52d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1b52d8:
    // 0x1b52d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b52dc:
    // 0x1b52dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b52e0:
    // 0x1b52e0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b52e4:
    // 0x1b52e4: 0x320f809  jalr        $t9
label_1b52e8:
    if (ctx->pc == 0x1B52E8u) {
        ctx->pc = 0x1B52E8u;
            // 0x1b52e8: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->pc = 0x1B52ECu;
        goto label_1b52ec;
    }
    ctx->pc = 0x1B52E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B52ECu);
        ctx->pc = 0x1B52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52E4u;
            // 0x1b52e8: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B52ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B52ECu; }
            if (ctx->pc != 0x1B52ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1B52ECu;
label_1b52ec:
    // 0x1b52ec: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x1b52ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1b52f0:
    // 0x1b52f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b52f4:
    // 0x1b52f4: 0x8e820fcc  lw          $v0, 0xFCC($s4)
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
label_1b52f8:
    // 0x1b52f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b52f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b52fc:
    // 0x1b52fc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b5300:
    // 0x1b5300: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b5304:
    // 0x1b5304: 0x320f809  jalr        $t9
label_1b5308:
    if (ctx->pc == 0x1B5308u) {
        ctx->pc = 0x1B5308u;
            // 0x1b5308: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x1B530Cu;
        goto label_1b530c;
    }
    ctx->pc = 0x1B5304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B530Cu);
        ctx->pc = 0x1B5308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5304u;
            // 0x1b5308: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B530Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B530Cu; }
            if (ctx->pc != 0x1B530Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B530Cu;
label_1b530c:
    // 0x1b530c: 0x0  nop
    ctx->pc = 0x1b530cu;
    // NOP
label_1b5310:
    // 0x1b5310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b5314:
    // 0x1b5314: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1b5314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1b5318:
    // 0x1b5318: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1b531c:
    // 0x1b531c: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_1b5320:
    if (ctx->pc == 0x1B5320u) {
        ctx->pc = 0x1B5320u;
            // 0x1b5320: 0x26730280  addiu       $s3, $s3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
        ctx->pc = 0x1B5324u;
        goto label_1b5324;
    }
    ctx->pc = 0x1B531Cu;
    {
        const bool branch_taken_0x1b531c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B531Cu;
            // 0x1b5320: 0x26730280  addiu       $s3, $s3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b531c) {
            ctx->pc = 0x1B529Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b529c;
        }
    }
    ctx->pc = 0x1B5324u;
label_1b5324:
    // 0x1b5324: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b5324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b5328:
    // 0x1b5328: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b532c:
    // 0x1b532c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b532cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b5330:
    // 0x1b5330: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b5330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b5334:
    // 0x1b5334: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b5334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b5338:
    // 0x1b5338: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b5338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b533c:
    // 0x1b533c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b533cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5340:
    // 0x1b5340: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b5340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5344:
    // 0x1b5344: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b5344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5348:
    // 0x1b5348: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b5348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b534c:
    // 0x1b534c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5350:
    // 0x1b5350: 0x3e00008  jr          $ra
label_1b5354:
    if (ctx->pc == 0x1B5354u) {
        ctx->pc = 0x1B5354u;
            // 0x1b5354: 0x27bd1160  addiu       $sp, $sp, 0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4448));
        ctx->pc = 0x1B5358u;
        goto label_fallthrough_0x1b5350;
    }
    ctx->pc = 0x1B5350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5350u;
            // 0x1b5354: 0x27bd1160  addiu       $sp, $sp, 0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b5350:
    ctx->pc = 0x1B5358u;
}
