#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDebugLoop__FP6CSceneP13EditDebugInfo
// Address: 0x1a7930 - 0x1a83f4
void EditDebugLoop__FP6CSceneP13EditDebugInfo_0x1a7930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDebugLoop__FP6CSceneP13EditDebugInfo_0x1a7930");
#endif

    switch (ctx->pc) {
        case 0x1a7930u: goto label_1a7930;
        case 0x1a7934u: goto label_1a7934;
        case 0x1a7938u: goto label_1a7938;
        case 0x1a793cu: goto label_1a793c;
        case 0x1a7940u: goto label_1a7940;
        case 0x1a7944u: goto label_1a7944;
        case 0x1a7948u: goto label_1a7948;
        case 0x1a794cu: goto label_1a794c;
        case 0x1a7950u: goto label_1a7950;
        case 0x1a7954u: goto label_1a7954;
        case 0x1a7958u: goto label_1a7958;
        case 0x1a795cu: goto label_1a795c;
        case 0x1a7960u: goto label_1a7960;
        case 0x1a7964u: goto label_1a7964;
        case 0x1a7968u: goto label_1a7968;
        case 0x1a796cu: goto label_1a796c;
        case 0x1a7970u: goto label_1a7970;
        case 0x1a7974u: goto label_1a7974;
        case 0x1a7978u: goto label_1a7978;
        case 0x1a797cu: goto label_1a797c;
        case 0x1a7980u: goto label_1a7980;
        case 0x1a7984u: goto label_1a7984;
        case 0x1a7988u: goto label_1a7988;
        case 0x1a798cu: goto label_1a798c;
        case 0x1a7990u: goto label_1a7990;
        case 0x1a7994u: goto label_1a7994;
        case 0x1a7998u: goto label_1a7998;
        case 0x1a799cu: goto label_1a799c;
        case 0x1a79a0u: goto label_1a79a0;
        case 0x1a79a4u: goto label_1a79a4;
        case 0x1a79a8u: goto label_1a79a8;
        case 0x1a79acu: goto label_1a79ac;
        case 0x1a79b0u: goto label_1a79b0;
        case 0x1a79b4u: goto label_1a79b4;
        case 0x1a79b8u: goto label_1a79b8;
        case 0x1a79bcu: goto label_1a79bc;
        case 0x1a79c0u: goto label_1a79c0;
        case 0x1a79c4u: goto label_1a79c4;
        case 0x1a79c8u: goto label_1a79c8;
        case 0x1a79ccu: goto label_1a79cc;
        case 0x1a79d0u: goto label_1a79d0;
        case 0x1a79d4u: goto label_1a79d4;
        case 0x1a79d8u: goto label_1a79d8;
        case 0x1a79dcu: goto label_1a79dc;
        case 0x1a79e0u: goto label_1a79e0;
        case 0x1a79e4u: goto label_1a79e4;
        case 0x1a79e8u: goto label_1a79e8;
        case 0x1a79ecu: goto label_1a79ec;
        case 0x1a79f0u: goto label_1a79f0;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a79f8u: goto label_1a79f8;
        case 0x1a79fcu: goto label_1a79fc;
        case 0x1a7a00u: goto label_1a7a00;
        case 0x1a7a04u: goto label_1a7a04;
        case 0x1a7a08u: goto label_1a7a08;
        case 0x1a7a0cu: goto label_1a7a0c;
        case 0x1a7a10u: goto label_1a7a10;
        case 0x1a7a14u: goto label_1a7a14;
        case 0x1a7a18u: goto label_1a7a18;
        case 0x1a7a1cu: goto label_1a7a1c;
        case 0x1a7a20u: goto label_1a7a20;
        case 0x1a7a24u: goto label_1a7a24;
        case 0x1a7a28u: goto label_1a7a28;
        case 0x1a7a2cu: goto label_1a7a2c;
        case 0x1a7a30u: goto label_1a7a30;
        case 0x1a7a34u: goto label_1a7a34;
        case 0x1a7a38u: goto label_1a7a38;
        case 0x1a7a3cu: goto label_1a7a3c;
        case 0x1a7a40u: goto label_1a7a40;
        case 0x1a7a44u: goto label_1a7a44;
        case 0x1a7a48u: goto label_1a7a48;
        case 0x1a7a4cu: goto label_1a7a4c;
        case 0x1a7a50u: goto label_1a7a50;
        case 0x1a7a54u: goto label_1a7a54;
        case 0x1a7a58u: goto label_1a7a58;
        case 0x1a7a5cu: goto label_1a7a5c;
        case 0x1a7a60u: goto label_1a7a60;
        case 0x1a7a64u: goto label_1a7a64;
        case 0x1a7a68u: goto label_1a7a68;
        case 0x1a7a6cu: goto label_1a7a6c;
        case 0x1a7a70u: goto label_1a7a70;
        case 0x1a7a74u: goto label_1a7a74;
        case 0x1a7a78u: goto label_1a7a78;
        case 0x1a7a7cu: goto label_1a7a7c;
        case 0x1a7a80u: goto label_1a7a80;
        case 0x1a7a84u: goto label_1a7a84;
        case 0x1a7a88u: goto label_1a7a88;
        case 0x1a7a8cu: goto label_1a7a8c;
        case 0x1a7a90u: goto label_1a7a90;
        case 0x1a7a94u: goto label_1a7a94;
        case 0x1a7a98u: goto label_1a7a98;
        case 0x1a7a9cu: goto label_1a7a9c;
        case 0x1a7aa0u: goto label_1a7aa0;
        case 0x1a7aa4u: goto label_1a7aa4;
        case 0x1a7aa8u: goto label_1a7aa8;
        case 0x1a7aacu: goto label_1a7aac;
        case 0x1a7ab0u: goto label_1a7ab0;
        case 0x1a7ab4u: goto label_1a7ab4;
        case 0x1a7ab8u: goto label_1a7ab8;
        case 0x1a7abcu: goto label_1a7abc;
        case 0x1a7ac0u: goto label_1a7ac0;
        case 0x1a7ac4u: goto label_1a7ac4;
        case 0x1a7ac8u: goto label_1a7ac8;
        case 0x1a7accu: goto label_1a7acc;
        case 0x1a7ad0u: goto label_1a7ad0;
        case 0x1a7ad4u: goto label_1a7ad4;
        case 0x1a7ad8u: goto label_1a7ad8;
        case 0x1a7adcu: goto label_1a7adc;
        case 0x1a7ae0u: goto label_1a7ae0;
        case 0x1a7ae4u: goto label_1a7ae4;
        case 0x1a7ae8u: goto label_1a7ae8;
        case 0x1a7aecu: goto label_1a7aec;
        case 0x1a7af0u: goto label_1a7af0;
        case 0x1a7af4u: goto label_1a7af4;
        case 0x1a7af8u: goto label_1a7af8;
        case 0x1a7afcu: goto label_1a7afc;
        case 0x1a7b00u: goto label_1a7b00;
        case 0x1a7b04u: goto label_1a7b04;
        case 0x1a7b08u: goto label_1a7b08;
        case 0x1a7b0cu: goto label_1a7b0c;
        case 0x1a7b10u: goto label_1a7b10;
        case 0x1a7b14u: goto label_1a7b14;
        case 0x1a7b18u: goto label_1a7b18;
        case 0x1a7b1cu: goto label_1a7b1c;
        case 0x1a7b20u: goto label_1a7b20;
        case 0x1a7b24u: goto label_1a7b24;
        case 0x1a7b28u: goto label_1a7b28;
        case 0x1a7b2cu: goto label_1a7b2c;
        case 0x1a7b30u: goto label_1a7b30;
        case 0x1a7b34u: goto label_1a7b34;
        case 0x1a7b38u: goto label_1a7b38;
        case 0x1a7b3cu: goto label_1a7b3c;
        case 0x1a7b40u: goto label_1a7b40;
        case 0x1a7b44u: goto label_1a7b44;
        case 0x1a7b48u: goto label_1a7b48;
        case 0x1a7b4cu: goto label_1a7b4c;
        case 0x1a7b50u: goto label_1a7b50;
        case 0x1a7b54u: goto label_1a7b54;
        case 0x1a7b58u: goto label_1a7b58;
        case 0x1a7b5cu: goto label_1a7b5c;
        case 0x1a7b60u: goto label_1a7b60;
        case 0x1a7b64u: goto label_1a7b64;
        case 0x1a7b68u: goto label_1a7b68;
        case 0x1a7b6cu: goto label_1a7b6c;
        case 0x1a7b70u: goto label_1a7b70;
        case 0x1a7b74u: goto label_1a7b74;
        case 0x1a7b78u: goto label_1a7b78;
        case 0x1a7b7cu: goto label_1a7b7c;
        case 0x1a7b80u: goto label_1a7b80;
        case 0x1a7b84u: goto label_1a7b84;
        case 0x1a7b88u: goto label_1a7b88;
        case 0x1a7b8cu: goto label_1a7b8c;
        case 0x1a7b90u: goto label_1a7b90;
        case 0x1a7b94u: goto label_1a7b94;
        case 0x1a7b98u: goto label_1a7b98;
        case 0x1a7b9cu: goto label_1a7b9c;
        case 0x1a7ba0u: goto label_1a7ba0;
        case 0x1a7ba4u: goto label_1a7ba4;
        case 0x1a7ba8u: goto label_1a7ba8;
        case 0x1a7bacu: goto label_1a7bac;
        case 0x1a7bb0u: goto label_1a7bb0;
        case 0x1a7bb4u: goto label_1a7bb4;
        case 0x1a7bb8u: goto label_1a7bb8;
        case 0x1a7bbcu: goto label_1a7bbc;
        case 0x1a7bc0u: goto label_1a7bc0;
        case 0x1a7bc4u: goto label_1a7bc4;
        case 0x1a7bc8u: goto label_1a7bc8;
        case 0x1a7bccu: goto label_1a7bcc;
        case 0x1a7bd0u: goto label_1a7bd0;
        case 0x1a7bd4u: goto label_1a7bd4;
        case 0x1a7bd8u: goto label_1a7bd8;
        case 0x1a7bdcu: goto label_1a7bdc;
        case 0x1a7be0u: goto label_1a7be0;
        case 0x1a7be4u: goto label_1a7be4;
        case 0x1a7be8u: goto label_1a7be8;
        case 0x1a7becu: goto label_1a7bec;
        case 0x1a7bf0u: goto label_1a7bf0;
        case 0x1a7bf4u: goto label_1a7bf4;
        case 0x1a7bf8u: goto label_1a7bf8;
        case 0x1a7bfcu: goto label_1a7bfc;
        case 0x1a7c00u: goto label_1a7c00;
        case 0x1a7c04u: goto label_1a7c04;
        case 0x1a7c08u: goto label_1a7c08;
        case 0x1a7c0cu: goto label_1a7c0c;
        case 0x1a7c10u: goto label_1a7c10;
        case 0x1a7c14u: goto label_1a7c14;
        case 0x1a7c18u: goto label_1a7c18;
        case 0x1a7c1cu: goto label_1a7c1c;
        case 0x1a7c20u: goto label_1a7c20;
        case 0x1a7c24u: goto label_1a7c24;
        case 0x1a7c28u: goto label_1a7c28;
        case 0x1a7c2cu: goto label_1a7c2c;
        case 0x1a7c30u: goto label_1a7c30;
        case 0x1a7c34u: goto label_1a7c34;
        case 0x1a7c38u: goto label_1a7c38;
        case 0x1a7c3cu: goto label_1a7c3c;
        case 0x1a7c40u: goto label_1a7c40;
        case 0x1a7c44u: goto label_1a7c44;
        case 0x1a7c48u: goto label_1a7c48;
        case 0x1a7c4cu: goto label_1a7c4c;
        case 0x1a7c50u: goto label_1a7c50;
        case 0x1a7c54u: goto label_1a7c54;
        case 0x1a7c58u: goto label_1a7c58;
        case 0x1a7c5cu: goto label_1a7c5c;
        case 0x1a7c60u: goto label_1a7c60;
        case 0x1a7c64u: goto label_1a7c64;
        case 0x1a7c68u: goto label_1a7c68;
        case 0x1a7c6cu: goto label_1a7c6c;
        case 0x1a7c70u: goto label_1a7c70;
        case 0x1a7c74u: goto label_1a7c74;
        case 0x1a7c78u: goto label_1a7c78;
        case 0x1a7c7cu: goto label_1a7c7c;
        case 0x1a7c80u: goto label_1a7c80;
        case 0x1a7c84u: goto label_1a7c84;
        case 0x1a7c88u: goto label_1a7c88;
        case 0x1a7c8cu: goto label_1a7c8c;
        case 0x1a7c90u: goto label_1a7c90;
        case 0x1a7c94u: goto label_1a7c94;
        case 0x1a7c98u: goto label_1a7c98;
        case 0x1a7c9cu: goto label_1a7c9c;
        case 0x1a7ca0u: goto label_1a7ca0;
        case 0x1a7ca4u: goto label_1a7ca4;
        case 0x1a7ca8u: goto label_1a7ca8;
        case 0x1a7cacu: goto label_1a7cac;
        case 0x1a7cb0u: goto label_1a7cb0;
        case 0x1a7cb4u: goto label_1a7cb4;
        case 0x1a7cb8u: goto label_1a7cb8;
        case 0x1a7cbcu: goto label_1a7cbc;
        case 0x1a7cc0u: goto label_1a7cc0;
        case 0x1a7cc4u: goto label_1a7cc4;
        case 0x1a7cc8u: goto label_1a7cc8;
        case 0x1a7cccu: goto label_1a7ccc;
        case 0x1a7cd0u: goto label_1a7cd0;
        case 0x1a7cd4u: goto label_1a7cd4;
        case 0x1a7cd8u: goto label_1a7cd8;
        case 0x1a7cdcu: goto label_1a7cdc;
        case 0x1a7ce0u: goto label_1a7ce0;
        case 0x1a7ce4u: goto label_1a7ce4;
        case 0x1a7ce8u: goto label_1a7ce8;
        case 0x1a7cecu: goto label_1a7cec;
        case 0x1a7cf0u: goto label_1a7cf0;
        case 0x1a7cf4u: goto label_1a7cf4;
        case 0x1a7cf8u: goto label_1a7cf8;
        case 0x1a7cfcu: goto label_1a7cfc;
        case 0x1a7d00u: goto label_1a7d00;
        case 0x1a7d04u: goto label_1a7d04;
        case 0x1a7d08u: goto label_1a7d08;
        case 0x1a7d0cu: goto label_1a7d0c;
        case 0x1a7d10u: goto label_1a7d10;
        case 0x1a7d14u: goto label_1a7d14;
        case 0x1a7d18u: goto label_1a7d18;
        case 0x1a7d1cu: goto label_1a7d1c;
        case 0x1a7d20u: goto label_1a7d20;
        case 0x1a7d24u: goto label_1a7d24;
        case 0x1a7d28u: goto label_1a7d28;
        case 0x1a7d2cu: goto label_1a7d2c;
        case 0x1a7d30u: goto label_1a7d30;
        case 0x1a7d34u: goto label_1a7d34;
        case 0x1a7d38u: goto label_1a7d38;
        case 0x1a7d3cu: goto label_1a7d3c;
        case 0x1a7d40u: goto label_1a7d40;
        case 0x1a7d44u: goto label_1a7d44;
        case 0x1a7d48u: goto label_1a7d48;
        case 0x1a7d4cu: goto label_1a7d4c;
        case 0x1a7d50u: goto label_1a7d50;
        case 0x1a7d54u: goto label_1a7d54;
        case 0x1a7d58u: goto label_1a7d58;
        case 0x1a7d5cu: goto label_1a7d5c;
        case 0x1a7d60u: goto label_1a7d60;
        case 0x1a7d64u: goto label_1a7d64;
        case 0x1a7d68u: goto label_1a7d68;
        case 0x1a7d6cu: goto label_1a7d6c;
        case 0x1a7d70u: goto label_1a7d70;
        case 0x1a7d74u: goto label_1a7d74;
        case 0x1a7d78u: goto label_1a7d78;
        case 0x1a7d7cu: goto label_1a7d7c;
        case 0x1a7d80u: goto label_1a7d80;
        case 0x1a7d84u: goto label_1a7d84;
        case 0x1a7d88u: goto label_1a7d88;
        case 0x1a7d8cu: goto label_1a7d8c;
        case 0x1a7d90u: goto label_1a7d90;
        case 0x1a7d94u: goto label_1a7d94;
        case 0x1a7d98u: goto label_1a7d98;
        case 0x1a7d9cu: goto label_1a7d9c;
        case 0x1a7da0u: goto label_1a7da0;
        case 0x1a7da4u: goto label_1a7da4;
        case 0x1a7da8u: goto label_1a7da8;
        case 0x1a7dacu: goto label_1a7dac;
        case 0x1a7db0u: goto label_1a7db0;
        case 0x1a7db4u: goto label_1a7db4;
        case 0x1a7db8u: goto label_1a7db8;
        case 0x1a7dbcu: goto label_1a7dbc;
        case 0x1a7dc0u: goto label_1a7dc0;
        case 0x1a7dc4u: goto label_1a7dc4;
        case 0x1a7dc8u: goto label_1a7dc8;
        case 0x1a7dccu: goto label_1a7dcc;
        case 0x1a7dd0u: goto label_1a7dd0;
        case 0x1a7dd4u: goto label_1a7dd4;
        case 0x1a7dd8u: goto label_1a7dd8;
        case 0x1a7ddcu: goto label_1a7ddc;
        case 0x1a7de0u: goto label_1a7de0;
        case 0x1a7de4u: goto label_1a7de4;
        case 0x1a7de8u: goto label_1a7de8;
        case 0x1a7decu: goto label_1a7dec;
        case 0x1a7df0u: goto label_1a7df0;
        case 0x1a7df4u: goto label_1a7df4;
        case 0x1a7df8u: goto label_1a7df8;
        case 0x1a7dfcu: goto label_1a7dfc;
        case 0x1a7e00u: goto label_1a7e00;
        case 0x1a7e04u: goto label_1a7e04;
        case 0x1a7e08u: goto label_1a7e08;
        case 0x1a7e0cu: goto label_1a7e0c;
        case 0x1a7e10u: goto label_1a7e10;
        case 0x1a7e14u: goto label_1a7e14;
        case 0x1a7e18u: goto label_1a7e18;
        case 0x1a7e1cu: goto label_1a7e1c;
        case 0x1a7e20u: goto label_1a7e20;
        case 0x1a7e24u: goto label_1a7e24;
        case 0x1a7e28u: goto label_1a7e28;
        case 0x1a7e2cu: goto label_1a7e2c;
        case 0x1a7e30u: goto label_1a7e30;
        case 0x1a7e34u: goto label_1a7e34;
        case 0x1a7e38u: goto label_1a7e38;
        case 0x1a7e3cu: goto label_1a7e3c;
        case 0x1a7e40u: goto label_1a7e40;
        case 0x1a7e44u: goto label_1a7e44;
        case 0x1a7e48u: goto label_1a7e48;
        case 0x1a7e4cu: goto label_1a7e4c;
        case 0x1a7e50u: goto label_1a7e50;
        case 0x1a7e54u: goto label_1a7e54;
        case 0x1a7e58u: goto label_1a7e58;
        case 0x1a7e5cu: goto label_1a7e5c;
        case 0x1a7e60u: goto label_1a7e60;
        case 0x1a7e64u: goto label_1a7e64;
        case 0x1a7e68u: goto label_1a7e68;
        case 0x1a7e6cu: goto label_1a7e6c;
        case 0x1a7e70u: goto label_1a7e70;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e78u: goto label_1a7e78;
        case 0x1a7e7cu: goto label_1a7e7c;
        case 0x1a7e80u: goto label_1a7e80;
        case 0x1a7e84u: goto label_1a7e84;
        case 0x1a7e88u: goto label_1a7e88;
        case 0x1a7e8cu: goto label_1a7e8c;
        case 0x1a7e90u: goto label_1a7e90;
        case 0x1a7e94u: goto label_1a7e94;
        case 0x1a7e98u: goto label_1a7e98;
        case 0x1a7e9cu: goto label_1a7e9c;
        case 0x1a7ea0u: goto label_1a7ea0;
        case 0x1a7ea4u: goto label_1a7ea4;
        case 0x1a7ea8u: goto label_1a7ea8;
        case 0x1a7eacu: goto label_1a7eac;
        case 0x1a7eb0u: goto label_1a7eb0;
        case 0x1a7eb4u: goto label_1a7eb4;
        case 0x1a7eb8u: goto label_1a7eb8;
        case 0x1a7ebcu: goto label_1a7ebc;
        case 0x1a7ec0u: goto label_1a7ec0;
        case 0x1a7ec4u: goto label_1a7ec4;
        case 0x1a7ec8u: goto label_1a7ec8;
        case 0x1a7eccu: goto label_1a7ecc;
        case 0x1a7ed0u: goto label_1a7ed0;
        case 0x1a7ed4u: goto label_1a7ed4;
        case 0x1a7ed8u: goto label_1a7ed8;
        case 0x1a7edcu: goto label_1a7edc;
        case 0x1a7ee0u: goto label_1a7ee0;
        case 0x1a7ee4u: goto label_1a7ee4;
        case 0x1a7ee8u: goto label_1a7ee8;
        case 0x1a7eecu: goto label_1a7eec;
        case 0x1a7ef0u: goto label_1a7ef0;
        case 0x1a7ef4u: goto label_1a7ef4;
        case 0x1a7ef8u: goto label_1a7ef8;
        case 0x1a7efcu: goto label_1a7efc;
        case 0x1a7f00u: goto label_1a7f00;
        case 0x1a7f04u: goto label_1a7f04;
        case 0x1a7f08u: goto label_1a7f08;
        case 0x1a7f0cu: goto label_1a7f0c;
        case 0x1a7f10u: goto label_1a7f10;
        case 0x1a7f14u: goto label_1a7f14;
        case 0x1a7f18u: goto label_1a7f18;
        case 0x1a7f1cu: goto label_1a7f1c;
        case 0x1a7f20u: goto label_1a7f20;
        case 0x1a7f24u: goto label_1a7f24;
        case 0x1a7f28u: goto label_1a7f28;
        case 0x1a7f2cu: goto label_1a7f2c;
        case 0x1a7f30u: goto label_1a7f30;
        case 0x1a7f34u: goto label_1a7f34;
        case 0x1a7f38u: goto label_1a7f38;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f40u: goto label_1a7f40;
        case 0x1a7f44u: goto label_1a7f44;
        case 0x1a7f48u: goto label_1a7f48;
        case 0x1a7f4cu: goto label_1a7f4c;
        case 0x1a7f50u: goto label_1a7f50;
        case 0x1a7f54u: goto label_1a7f54;
        case 0x1a7f58u: goto label_1a7f58;
        case 0x1a7f5cu: goto label_1a7f5c;
        case 0x1a7f60u: goto label_1a7f60;
        case 0x1a7f64u: goto label_1a7f64;
        case 0x1a7f68u: goto label_1a7f68;
        case 0x1a7f6cu: goto label_1a7f6c;
        case 0x1a7f70u: goto label_1a7f70;
        case 0x1a7f74u: goto label_1a7f74;
        case 0x1a7f78u: goto label_1a7f78;
        case 0x1a7f7cu: goto label_1a7f7c;
        case 0x1a7f80u: goto label_1a7f80;
        case 0x1a7f84u: goto label_1a7f84;
        case 0x1a7f88u: goto label_1a7f88;
        case 0x1a7f8cu: goto label_1a7f8c;
        case 0x1a7f90u: goto label_1a7f90;
        case 0x1a7f94u: goto label_1a7f94;
        case 0x1a7f98u: goto label_1a7f98;
        case 0x1a7f9cu: goto label_1a7f9c;
        case 0x1a7fa0u: goto label_1a7fa0;
        case 0x1a7fa4u: goto label_1a7fa4;
        case 0x1a7fa8u: goto label_1a7fa8;
        case 0x1a7facu: goto label_1a7fac;
        case 0x1a7fb0u: goto label_1a7fb0;
        case 0x1a7fb4u: goto label_1a7fb4;
        case 0x1a7fb8u: goto label_1a7fb8;
        case 0x1a7fbcu: goto label_1a7fbc;
        case 0x1a7fc0u: goto label_1a7fc0;
        case 0x1a7fc4u: goto label_1a7fc4;
        case 0x1a7fc8u: goto label_1a7fc8;
        case 0x1a7fccu: goto label_1a7fcc;
        case 0x1a7fd0u: goto label_1a7fd0;
        case 0x1a7fd4u: goto label_1a7fd4;
        case 0x1a7fd8u: goto label_1a7fd8;
        case 0x1a7fdcu: goto label_1a7fdc;
        case 0x1a7fe0u: goto label_1a7fe0;
        case 0x1a7fe4u: goto label_1a7fe4;
        case 0x1a7fe8u: goto label_1a7fe8;
        case 0x1a7fecu: goto label_1a7fec;
        case 0x1a7ff0u: goto label_1a7ff0;
        case 0x1a7ff4u: goto label_1a7ff4;
        case 0x1a7ff8u: goto label_1a7ff8;
        case 0x1a7ffcu: goto label_1a7ffc;
        case 0x1a8000u: goto label_1a8000;
        case 0x1a8004u: goto label_1a8004;
        case 0x1a8008u: goto label_1a8008;
        case 0x1a800cu: goto label_1a800c;
        case 0x1a8010u: goto label_1a8010;
        case 0x1a8014u: goto label_1a8014;
        case 0x1a8018u: goto label_1a8018;
        case 0x1a801cu: goto label_1a801c;
        case 0x1a8020u: goto label_1a8020;
        case 0x1a8024u: goto label_1a8024;
        case 0x1a8028u: goto label_1a8028;
        case 0x1a802cu: goto label_1a802c;
        case 0x1a8030u: goto label_1a8030;
        case 0x1a8034u: goto label_1a8034;
        case 0x1a8038u: goto label_1a8038;
        case 0x1a803cu: goto label_1a803c;
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8044u: goto label_1a8044;
        case 0x1a8048u: goto label_1a8048;
        case 0x1a804cu: goto label_1a804c;
        case 0x1a8050u: goto label_1a8050;
        case 0x1a8054u: goto label_1a8054;
        case 0x1a8058u: goto label_1a8058;
        case 0x1a805cu: goto label_1a805c;
        case 0x1a8060u: goto label_1a8060;
        case 0x1a8064u: goto label_1a8064;
        case 0x1a8068u: goto label_1a8068;
        case 0x1a806cu: goto label_1a806c;
        case 0x1a8070u: goto label_1a8070;
        case 0x1a8074u: goto label_1a8074;
        case 0x1a8078u: goto label_1a8078;
        case 0x1a807cu: goto label_1a807c;
        case 0x1a8080u: goto label_1a8080;
        case 0x1a8084u: goto label_1a8084;
        case 0x1a8088u: goto label_1a8088;
        case 0x1a808cu: goto label_1a808c;
        case 0x1a8090u: goto label_1a8090;
        case 0x1a8094u: goto label_1a8094;
        case 0x1a8098u: goto label_1a8098;
        case 0x1a809cu: goto label_1a809c;
        case 0x1a80a0u: goto label_1a80a0;
        case 0x1a80a4u: goto label_1a80a4;
        case 0x1a80a8u: goto label_1a80a8;
        case 0x1a80acu: goto label_1a80ac;
        case 0x1a80b0u: goto label_1a80b0;
        case 0x1a80b4u: goto label_1a80b4;
        case 0x1a80b8u: goto label_1a80b8;
        case 0x1a80bcu: goto label_1a80bc;
        case 0x1a80c0u: goto label_1a80c0;
        case 0x1a80c4u: goto label_1a80c4;
        case 0x1a80c8u: goto label_1a80c8;
        case 0x1a80ccu: goto label_1a80cc;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80d4u: goto label_1a80d4;
        case 0x1a80d8u: goto label_1a80d8;
        case 0x1a80dcu: goto label_1a80dc;
        case 0x1a80e0u: goto label_1a80e0;
        case 0x1a80e4u: goto label_1a80e4;
        case 0x1a80e8u: goto label_1a80e8;
        case 0x1a80ecu: goto label_1a80ec;
        case 0x1a80f0u: goto label_1a80f0;
        case 0x1a80f4u: goto label_1a80f4;
        case 0x1a80f8u: goto label_1a80f8;
        case 0x1a80fcu: goto label_1a80fc;
        case 0x1a8100u: goto label_1a8100;
        case 0x1a8104u: goto label_1a8104;
        case 0x1a8108u: goto label_1a8108;
        case 0x1a810cu: goto label_1a810c;
        case 0x1a8110u: goto label_1a8110;
        case 0x1a8114u: goto label_1a8114;
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        case 0x1a8140u: goto label_1a8140;
        case 0x1a8144u: goto label_1a8144;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a814cu: goto label_1a814c;
        case 0x1a8150u: goto label_1a8150;
        case 0x1a8154u: goto label_1a8154;
        case 0x1a8158u: goto label_1a8158;
        case 0x1a815cu: goto label_1a815c;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8164u: goto label_1a8164;
        case 0x1a8168u: goto label_1a8168;
        case 0x1a816cu: goto label_1a816c;
        case 0x1a8170u: goto label_1a8170;
        case 0x1a8174u: goto label_1a8174;
        case 0x1a8178u: goto label_1a8178;
        case 0x1a817cu: goto label_1a817c;
        case 0x1a8180u: goto label_1a8180;
        case 0x1a8184u: goto label_1a8184;
        case 0x1a8188u: goto label_1a8188;
        case 0x1a818cu: goto label_1a818c;
        case 0x1a8190u: goto label_1a8190;
        case 0x1a8194u: goto label_1a8194;
        case 0x1a8198u: goto label_1a8198;
        case 0x1a819cu: goto label_1a819c;
        case 0x1a81a0u: goto label_1a81a0;
        case 0x1a81a4u: goto label_1a81a4;
        case 0x1a81a8u: goto label_1a81a8;
        case 0x1a81acu: goto label_1a81ac;
        case 0x1a81b0u: goto label_1a81b0;
        case 0x1a81b4u: goto label_1a81b4;
        case 0x1a81b8u: goto label_1a81b8;
        case 0x1a81bcu: goto label_1a81bc;
        case 0x1a81c0u: goto label_1a81c0;
        case 0x1a81c4u: goto label_1a81c4;
        case 0x1a81c8u: goto label_1a81c8;
        case 0x1a81ccu: goto label_1a81cc;
        case 0x1a81d0u: goto label_1a81d0;
        case 0x1a81d4u: goto label_1a81d4;
        case 0x1a81d8u: goto label_1a81d8;
        case 0x1a81dcu: goto label_1a81dc;
        case 0x1a81e0u: goto label_1a81e0;
        case 0x1a81e4u: goto label_1a81e4;
        case 0x1a81e8u: goto label_1a81e8;
        case 0x1a81ecu: goto label_1a81ec;
        case 0x1a81f0u: goto label_1a81f0;
        case 0x1a81f4u: goto label_1a81f4;
        case 0x1a81f8u: goto label_1a81f8;
        case 0x1a81fcu: goto label_1a81fc;
        case 0x1a8200u: goto label_1a8200;
        case 0x1a8204u: goto label_1a8204;
        case 0x1a8208u: goto label_1a8208;
        case 0x1a820cu: goto label_1a820c;
        case 0x1a8210u: goto label_1a8210;
        case 0x1a8214u: goto label_1a8214;
        case 0x1a8218u: goto label_1a8218;
        case 0x1a821cu: goto label_1a821c;
        case 0x1a8220u: goto label_1a8220;
        case 0x1a8224u: goto label_1a8224;
        case 0x1a8228u: goto label_1a8228;
        case 0x1a822cu: goto label_1a822c;
        case 0x1a8230u: goto label_1a8230;
        case 0x1a8234u: goto label_1a8234;
        case 0x1a8238u: goto label_1a8238;
        case 0x1a823cu: goto label_1a823c;
        case 0x1a8240u: goto label_1a8240;
        case 0x1a8244u: goto label_1a8244;
        case 0x1a8248u: goto label_1a8248;
        case 0x1a824cu: goto label_1a824c;
        case 0x1a8250u: goto label_1a8250;
        case 0x1a8254u: goto label_1a8254;
        case 0x1a8258u: goto label_1a8258;
        case 0x1a825cu: goto label_1a825c;
        case 0x1a8260u: goto label_1a8260;
        case 0x1a8264u: goto label_1a8264;
        case 0x1a8268u: goto label_1a8268;
        case 0x1a826cu: goto label_1a826c;
        case 0x1a8270u: goto label_1a8270;
        case 0x1a8274u: goto label_1a8274;
        case 0x1a8278u: goto label_1a8278;
        case 0x1a827cu: goto label_1a827c;
        case 0x1a8280u: goto label_1a8280;
        case 0x1a8284u: goto label_1a8284;
        case 0x1a8288u: goto label_1a8288;
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8290u: goto label_1a8290;
        case 0x1a8294u: goto label_1a8294;
        case 0x1a8298u: goto label_1a8298;
        case 0x1a829cu: goto label_1a829c;
        case 0x1a82a0u: goto label_1a82a0;
        case 0x1a82a4u: goto label_1a82a4;
        case 0x1a82a8u: goto label_1a82a8;
        case 0x1a82acu: goto label_1a82ac;
        case 0x1a82b0u: goto label_1a82b0;
        case 0x1a82b4u: goto label_1a82b4;
        case 0x1a82b8u: goto label_1a82b8;
        case 0x1a82bcu: goto label_1a82bc;
        case 0x1a82c0u: goto label_1a82c0;
        case 0x1a82c4u: goto label_1a82c4;
        case 0x1a82c8u: goto label_1a82c8;
        case 0x1a82ccu: goto label_1a82cc;
        case 0x1a82d0u: goto label_1a82d0;
        case 0x1a82d4u: goto label_1a82d4;
        case 0x1a82d8u: goto label_1a82d8;
        case 0x1a82dcu: goto label_1a82dc;
        case 0x1a82e0u: goto label_1a82e0;
        case 0x1a82e4u: goto label_1a82e4;
        case 0x1a82e8u: goto label_1a82e8;
        case 0x1a82ecu: goto label_1a82ec;
        case 0x1a82f0u: goto label_1a82f0;
        case 0x1a82f4u: goto label_1a82f4;
        case 0x1a82f8u: goto label_1a82f8;
        case 0x1a82fcu: goto label_1a82fc;
        case 0x1a8300u: goto label_1a8300;
        case 0x1a8304u: goto label_1a8304;
        case 0x1a8308u: goto label_1a8308;
        case 0x1a830cu: goto label_1a830c;
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8314u: goto label_1a8314;
        case 0x1a8318u: goto label_1a8318;
        case 0x1a831cu: goto label_1a831c;
        case 0x1a8320u: goto label_1a8320;
        case 0x1a8324u: goto label_1a8324;
        case 0x1a8328u: goto label_1a8328;
        case 0x1a832cu: goto label_1a832c;
        case 0x1a8330u: goto label_1a8330;
        case 0x1a8334u: goto label_1a8334;
        case 0x1a8338u: goto label_1a8338;
        case 0x1a833cu: goto label_1a833c;
        case 0x1a8340u: goto label_1a8340;
        case 0x1a8344u: goto label_1a8344;
        case 0x1a8348u: goto label_1a8348;
        case 0x1a834cu: goto label_1a834c;
        case 0x1a8350u: goto label_1a8350;
        case 0x1a8354u: goto label_1a8354;
        case 0x1a8358u: goto label_1a8358;
        case 0x1a835cu: goto label_1a835c;
        case 0x1a8360u: goto label_1a8360;
        case 0x1a8364u: goto label_1a8364;
        case 0x1a8368u: goto label_1a8368;
        case 0x1a836cu: goto label_1a836c;
        case 0x1a8370u: goto label_1a8370;
        case 0x1a8374u: goto label_1a8374;
        case 0x1a8378u: goto label_1a8378;
        case 0x1a837cu: goto label_1a837c;
        case 0x1a8380u: goto label_1a8380;
        case 0x1a8384u: goto label_1a8384;
        case 0x1a8388u: goto label_1a8388;
        case 0x1a838cu: goto label_1a838c;
        case 0x1a8390u: goto label_1a8390;
        case 0x1a8394u: goto label_1a8394;
        case 0x1a8398u: goto label_1a8398;
        case 0x1a839cu: goto label_1a839c;
        case 0x1a83a0u: goto label_1a83a0;
        case 0x1a83a4u: goto label_1a83a4;
        case 0x1a83a8u: goto label_1a83a8;
        case 0x1a83acu: goto label_1a83ac;
        case 0x1a83b0u: goto label_1a83b0;
        case 0x1a83b4u: goto label_1a83b4;
        case 0x1a83b8u: goto label_1a83b8;
        case 0x1a83bcu: goto label_1a83bc;
        case 0x1a83c0u: goto label_1a83c0;
        case 0x1a83c4u: goto label_1a83c4;
        case 0x1a83c8u: goto label_1a83c8;
        case 0x1a83ccu: goto label_1a83cc;
        case 0x1a83d0u: goto label_1a83d0;
        case 0x1a83d4u: goto label_1a83d4;
        case 0x1a83d8u: goto label_1a83d8;
        case 0x1a83dcu: goto label_1a83dc;
        case 0x1a83e0u: goto label_1a83e0;
        case 0x1a83e4u: goto label_1a83e4;
        case 0x1a83e8u: goto label_1a83e8;
        case 0x1a83ecu: goto label_1a83ec;
        case 0x1a83f0u: goto label_1a83f0;
        default: break;
    }

    ctx->pc = 0x1a7930u;

label_1a7930:
    // 0x1a7930: 0x27bdeb60  addiu       $sp, $sp, -0x14A0
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962016));
label_1a7934:
    // 0x1a7934: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a7938:
    // 0x1a7938: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a793c:
    // 0x1a793c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a7940:
    // 0x1a7940: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a7940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a7944:
    // 0x1a7944: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a7944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a7948:
    // 0x1a7948: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a7948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a794c:
    // 0x1a794c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a7950:
    // 0x1a7950: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a7950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a7954:
    // 0x1a7954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a7958:
    // 0x1a7958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a795c:
    // 0x1a795c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a7960:
    // 0x1a7960: 0x8f828c10  lw          $v0, -0x73F0($gp)
    ctx->pc = 0x1a7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
label_1a7964:
    // 0x1a7964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7968:
    if (ctx->pc == 0x1A7968u) {
        ctx->pc = 0x1A7968u;
            // 0x1a7968: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A796Cu;
        goto label_1a796c;
    }
    ctx->pc = 0x1A7964u;
    {
        const bool branch_taken_0x1a7964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7964u;
            // 0x1a7968: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7964) {
            ctx->pc = 0x1A7978u;
            goto label_1a7978;
        }
    }
    ctx->pc = 0x1A796Cu;
label_1a796c:
    // 0x1a796c: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1a796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1a7970:
    // 0x1a7970: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7974:
    if (ctx->pc == 0x1A7974u) {
        ctx->pc = 0x1A7978u;
        goto label_1a7978;
    }
    ctx->pc = 0x1A7970u;
    {
        const bool branch_taken_0x1a7970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7970) {
            ctx->pc = 0x1A7980u;
            goto label_1a7980;
        }
    }
    ctx->pc = 0x1A7978u;
label_1a7978:
    // 0x1a7978: 0x10000292  b           . + 4 + (0x292 << 2)
label_1a797c:
    if (ctx->pc == 0x1A797Cu) {
        ctx->pc = 0x1A797Cu;
            // 0x1a797c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7980u;
        goto label_1a7980;
    }
    ctx->pc = 0x1A7978u;
    {
        const bool branch_taken_0x1a7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7978u;
            // 0x1a797c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7978) {
            ctx->pc = 0x1A83C4u;
            goto label_1a83c4;
        }
    }
    ctx->pc = 0x1A7980u;
label_1a7980:
    // 0x1a7980: 0x8ec52e50  lw          $a1, 0x2E50($s6)
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11856)));
label_1a7984:
    // 0x1a7984: 0x8e950034  lw          $s5, 0x34($s4)
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_1a7988:
    // 0x1a7988: 0xc0a0ed8  jal         func_283B60
label_1a798c:
    if (ctx->pc == 0x1A798Cu) {
        ctx->pc = 0x1A798Cu;
            // 0x1a798c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1A7990u;
        goto label_1a7990;
    }
    ctx->pc = 0x1A7988u;
    SET_GPR_U32(ctx, 31, 0x1A7990u);
    ctx->pc = 0x1A798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7988u;
            // 0x1a798c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7990u; }
        if (ctx->pc != 0x1A7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7990u; }
        if (ctx->pc != 0x1A7990u) { return; }
    }
    ctx->pc = 0x1A7990u;
label_1a7990:
    // 0x1a7990: 0xc064220  jal         func_190880
label_1a7994:
    if (ctx->pc == 0x1A7994u) {
        ctx->pc = 0x1A7994u;
            // 0x1a7994: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7998u;
        goto label_1a7998;
    }
    ctx->pc = 0x1A7990u;
    SET_GPR_U32(ctx, 31, 0x1A7998u);
    ctx->pc = 0x1A7994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7990u;
            // 0x1a7994: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7998u; }
        if (ctx->pc != 0x1A7998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7998u; }
        if (ctx->pc != 0x1A7998u) { return; }
    }
    ctx->pc = 0x1A7998u;
label_1a7998:
    // 0x1a7998: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a799c:
    // 0x1a799c: 0xc0a0f80  jal         func_283E00
label_1a79a0:
    if (ctx->pc == 0x1A79A0u) {
        ctx->pc = 0x1A79A0u;
            // 0x1a79a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A79A4u;
        goto label_1a79a4;
    }
    ctx->pc = 0x1A799Cu;
    SET_GPR_U32(ctx, 31, 0x1A79A4u);
    ctx->pc = 0x1A79A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A799Cu;
            // 0x1a79a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79A4u; }
        if (ctx->pc != 0x1A79A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79A4u; }
        if (ctx->pc != 0x1A79A4u) { return; }
    }
    ctx->pc = 0x1A79A4u;
label_1a79a4:
    // 0x1a79a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a79a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a79a8:
    // 0x1a79a8: 0xc0bd9d4  jal         func_2F6750
label_1a79ac:
    if (ctx->pc == 0x1A79ACu) {
        ctx->pc = 0x1A79ACu;
            // 0x1a79ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A79B0u;
        goto label_1a79b0;
    }
    ctx->pc = 0x1A79A8u;
    SET_GPR_U32(ctx, 31, 0x1A79B0u);
    ctx->pc = 0x1A79ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79A8u;
            // 0x1a79ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (runtime->hasFunction(0x2F6750u)) {
        auto targetFn = runtime->lookupFunction(0x2F6750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79B0u; }
        if (ctx->pc != 0x1A79B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapFlag__9CSaveDataFi_0x2f6750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79B0u; }
        if (ctx->pc != 0x1A79B0u) { return; }
    }
    ctx->pc = 0x1A79B0u;
label_1a79b0:
    // 0x1a79b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a79b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a79b4:
    // 0x1a79b4: 0xc04d0e8  jal         func_1343A0
label_1a79b8:
    if (ctx->pc == 0x1A79B8u) {
        ctx->pc = 0x1A79B8u;
            // 0x1a79b8: 0x27a410a0  addiu       $a0, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->pc = 0x1A79BCu;
        goto label_1a79bc;
    }
    ctx->pc = 0x1A79B4u;
    SET_GPR_U32(ctx, 31, 0x1A79BCu);
    ctx->pc = 0x1A79B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79B4u;
            // 0x1a79b8: 0x27a410a0  addiu       $a0, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79BCu; }
        if (ctx->pc != 0x1A79BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79BCu; }
        if (ctx->pc != 0x1A79BCu) { return; }
    }
    ctx->pc = 0x1A79BCu;
label_1a79bc:
    // 0x1a79bc: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a79c0:
    // 0x1a79c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a79c4:
    // 0x1a79c4: 0xc04d104  jal         func_134410
label_1a79c8:
    if (ctx->pc == 0x1A79C8u) {
        ctx->pc = 0x1A79C8u;
            // 0x1a79c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A79CCu;
        goto label_1a79cc;
    }
    ctx->pc = 0x1A79C4u;
    SET_GPR_U32(ctx, 31, 0x1A79CCu);
    ctx->pc = 0x1A79C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79C4u;
            // 0x1a79c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79CCu; }
        if (ctx->pc != 0x1A79CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79CCu; }
        if (ctx->pc != 0x1A79CCu) { return; }
    }
    ctx->pc = 0x1A79CCu;
label_1a79cc:
    // 0x1a79cc: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a79d0:
    // 0x1a79d0: 0xc04d3b0  jal         func_134EC0
label_1a79d4:
    if (ctx->pc == 0x1A79D4u) {
        ctx->pc = 0x1A79D4u;
            // 0x1a79d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A79D8u;
        goto label_1a79d8;
    }
    ctx->pc = 0x1A79D0u;
    SET_GPR_U32(ctx, 31, 0x1A79D8u);
    ctx->pc = 0x1A79D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79D0u;
            // 0x1a79d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79D8u; }
        if (ctx->pc != 0x1A79D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79D8u; }
        if (ctx->pc != 0x1A79D8u) { return; }
    }
    ctx->pc = 0x1A79D8u;
label_1a79d8:
    // 0x1a79d8: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a79dc:
    // 0x1a79dc: 0xc04d3bc  jal         func_134EF0
label_1a79e0:
    if (ctx->pc == 0x1A79E0u) {
        ctx->pc = 0x1A79E0u;
            // 0x1a79e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A79E4u;
        goto label_1a79e4;
    }
    ctx->pc = 0x1A79DCu;
    SET_GPR_U32(ctx, 31, 0x1A79E4u);
    ctx->pc = 0x1A79E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79DCu;
            // 0x1a79e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79E4u; }
        if (ctx->pc != 0x1A79E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79E4u; }
        if (ctx->pc != 0x1A79E4u) { return; }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a79e8:
    // 0x1a79e8: 0xc04d3e4  jal         func_134F90
label_1a79ec:
    if (ctx->pc == 0x1A79ECu) {
        ctx->pc = 0x1A79ECu;
            // 0x1a79ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A79F0u;
        goto label_1a79f0;
    }
    ctx->pc = 0x1A79E8u;
    SET_GPR_U32(ctx, 31, 0x1A79F0u);
    ctx->pc = 0x1A79ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79E8u;
            // 0x1a79ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79F0u; }
        if (ctx->pc != 0x1A79F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79F0u; }
        if (ctx->pc != 0x1A79F0u) { return; }
    }
    ctx->pc = 0x1A79F0u;
label_1a79f0:
    // 0x1a79f0: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a79f4:
    // 0x1a79f4: 0xc04d128  jal         func_1344A0
label_1a79f8:
    if (ctx->pc == 0x1A79F8u) {
        ctx->pc = 0x1A79F8u;
            // 0x1a79f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A79FCu;
        goto label_1a79fc;
    }
    ctx->pc = 0x1A79F4u;
    SET_GPR_U32(ctx, 31, 0x1A79FCu);
    ctx->pc = 0x1A79F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79F4u;
            // 0x1a79f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79FCu; }
        if (ctx->pc != 0x1A79FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79FCu; }
        if (ctx->pc != 0x1A79FCu) { return; }
    }
    ctx->pc = 0x1A79FCu;
label_1a79fc:
    // 0x1a79fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7a00:
    // 0x1a7a00: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a7a04:
    // 0x1a7a04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a7a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a08:
    // 0x1a7a08: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a7a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a0c:
    // 0x1a7a0c: 0xc04d320  jal         func_134C80
label_1a7a10:
    if (ctx->pc == 0x1A7A10u) {
        ctx->pc = 0x1A7A10u;
            // 0x1a7a10: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1A7A14u;
        goto label_1a7a14;
    }
    ctx->pc = 0x1A7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A14u);
    ctx->pc = 0x1A7A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A0Cu;
            // 0x1a7a10: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A14u; }
        if (ctx->pc != 0x1A7A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A14u; }
        if (ctx->pc != 0x1A7A14u) { return; }
    }
    ctx->pc = 0x1A7A14u;
label_1a7a14:
    // 0x1a7a14: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a7a18:
    // 0x1a7a18: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a7a1c:
    // 0x1a7a1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a7a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a20:
    // 0x1a7a20: 0xc04d2c8  jal         func_134B20
label_1a7a24:
    if (ctx->pc == 0x1A7A24u) {
        ctx->pc = 0x1A7A24u;
            // 0x1a7a24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A28u;
        goto label_1a7a28;
    }
    ctx->pc = 0x1A7A20u;
    SET_GPR_U32(ctx, 31, 0x1A7A28u);
    ctx->pc = 0x1A7A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A20u;
            // 0x1a7a24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A28u; }
        if (ctx->pc != 0x1A7A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A28u; }
        if (ctx->pc != 0x1A7A28u) { return; }
    }
    ctx->pc = 0x1A7A28u;
label_1a7a28:
    // 0x1a7a28: 0x27a410a0  addiu       $a0, $sp, 0x10A0
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
label_1a7a2c:
    // 0x1a7a2c: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1a7a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1a7a30:
    // 0x1a7a30: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1a7a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1a7a34:
    // 0x1a7a34: 0xc04d2c8  jal         func_134B20
label_1a7a38:
    if (ctx->pc == 0x1A7A38u) {
        ctx->pc = 0x1A7A38u;
            // 0x1a7a38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A3Cu;
        goto label_1a7a3c;
    }
    ctx->pc = 0x1A7A34u;
    SET_GPR_U32(ctx, 31, 0x1A7A3Cu);
    ctx->pc = 0x1A7A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A34u;
            // 0x1a7a38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A3Cu; }
        if (ctx->pc != 0x1A7A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A3Cu; }
        if (ctx->pc != 0x1A7A3Cu) { return; }
    }
    ctx->pc = 0x1A7A3Cu;
label_1a7a3c:
    // 0x1a7a3c: 0xc04d1a4  jal         func_134690
label_1a7a40:
    if (ctx->pc == 0x1A7A40u) {
        ctx->pc = 0x1A7A40u;
            // 0x1a7a40: 0x27a410a0  addiu       $a0, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->pc = 0x1A7A44u;
        goto label_1a7a44;
    }
    ctx->pc = 0x1A7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A44u);
    ctx->pc = 0x1A7A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A3Cu;
            // 0x1a7a40: 0x27a410a0  addiu       $a0, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A44u; }
        if (ctx->pc != 0x1A7A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A44u; }
        if (ctx->pc != 0x1A7A44u) { return; }
    }
    ctx->pc = 0x1A7A44u;
label_1a7a44:
    // 0x1a7a44: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_1a7a48:
    if (ctx->pc == 0x1A7A48u) {
        ctx->pc = 0x1A7A48u;
            // 0x1a7a48: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1A7A4Cu;
        goto label_1a7a4c;
    }
    ctx->pc = 0x1A7A44u;
    {
        const bool branch_taken_0x1a7a44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A44u;
            // 0x1a7a48: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a44) {
            ctx->pc = 0x1A7B58u;
            goto label_1a7b58;
        }
    }
    ctx->pc = 0x1A7A4Cu;
label_1a7a4c:
    // 0x1a7a4c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a7a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a7a50:
    // 0x1a7a50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a54:
    // 0x1a7a54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a7a58:
    // 0x1a7a58: 0x320f809  jalr        $t9
label_1a7a5c:
    if (ctx->pc == 0x1A7A5Cu) {
        ctx->pc = 0x1A7A5Cu;
            // 0x1a7a5c: 0x27a511b0  addiu       $a1, $sp, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4528));
        ctx->pc = 0x1A7A60u;
        goto label_1a7a60;
    }
    ctx->pc = 0x1A7A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7A60u);
        ctx->pc = 0x1A7A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A58u;
            // 0x1a7a5c: 0x27a511b0  addiu       $a1, $sp, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4528));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7A60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A60u; }
            if (ctx->pc != 0x1A7A60u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7A60u;
label_1a7a60:
    // 0x1a7a60: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a7a64:
    // 0x1a7a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a68:
    // 0x1a7a68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a7a6c:
    // 0x1a7a6c: 0x320f809  jalr        $t9
label_1a7a70:
    if (ctx->pc == 0x1A7A70u) {
        ctx->pc = 0x1A7A70u;
            // 0x1a7a70: 0x27a511c0  addiu       $a1, $sp, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4544));
        ctx->pc = 0x1A7A74u;
        goto label_1a7a74;
    }
    ctx->pc = 0x1A7A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7A74u);
        ctx->pc = 0x1A7A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A6Cu;
            // 0x1a7a70: 0x27a511c0  addiu       $a1, $sp, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4544));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A74u; }
            if (ctx->pc != 0x1A7A74u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7A74u;
label_1a7a74:
    // 0x1a7a74: 0xc0a24f0  jal         func_2893C0
label_1a7a78:
    if (ctx->pc == 0x1A7A78u) {
        ctx->pc = 0x1A7A78u;
            // 0x1a7a78: 0xc7ac11b0  lwc1        $f12, 0x11B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A7A7Cu;
        goto label_1a7a7c;
    }
    ctx->pc = 0x1A7A74u;
    SET_GPR_U32(ctx, 31, 0x1A7A7Cu);
    ctx->pc = 0x1A7A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A74u;
            // 0x1a7a78: 0xc7ac11b0  lwc1        $f12, 0x11B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A7Cu; }
        if (ctx->pc != 0x1A7A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A7Cu; }
        if (ctx->pc != 0x1A7A7Cu) { return; }
    }
    ctx->pc = 0x1A7A7Cu;
label_1a7a7c:
    // 0x1a7a7c: 0x27be11b4  addiu       $fp, $sp, 0x11B4
    ctx->pc = 0x1a7a7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4532));
label_1a7a80:
    // 0x1a7a80: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x1a7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a7a84:
    // 0x1a7a84: 0xc0a24f0  jal         func_2893C0
label_1a7a88:
    if (ctx->pc == 0x1A7A88u) {
        ctx->pc = 0x1A7A88u;
            // 0x1a7a88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A8Cu;
        goto label_1a7a8c;
    }
    ctx->pc = 0x1A7A84u;
    SET_GPR_U32(ctx, 31, 0x1A7A8Cu);
    ctx->pc = 0x1A7A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A84u;
            // 0x1a7a88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A8Cu; }
        if (ctx->pc != 0x1A7A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A8Cu; }
        if (ctx->pc != 0x1A7A8Cu) { return; }
    }
    ctx->pc = 0x1A7A8Cu;
label_1a7a8c:
    // 0x1a7a8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a7a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a90:
    // 0x1a7a90: 0x27a211b8  addiu       $v0, $sp, 0x11B8
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4536));
label_1a7a94:
    // 0x1a7a94: 0xc0a24f0  jal         func_2893C0
label_1a7a98:
    if (ctx->pc == 0x1A7A98u) {
        ctx->pc = 0x1A7A98u;
            // 0x1a7a98: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A7A9Cu;
        goto label_1a7a9c;
    }
    ctx->pc = 0x1A7A94u;
    SET_GPR_U32(ctx, 31, 0x1A7A9Cu);
    ctx->pc = 0x1A7A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A94u;
            // 0x1a7a98: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A9Cu; }
        if (ctx->pc != 0x1A7A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A9Cu; }
        if (ctx->pc != 0x1A7A9Cu) { return; }
    }
    ctx->pc = 0x1A7A9Cu;
label_1a7a9c:
    // 0x1a7a9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a7a9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7aa0:
    // 0x1a7aa0: 0x27a211c4  addiu       $v0, $sp, 0x11C4
    ctx->pc = 0x1a7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4548));
label_1a7aa4:
    // 0x1a7aa4: 0xc0a24f0  jal         func_2893C0
label_1a7aa8:
    if (ctx->pc == 0x1A7AA8u) {
        ctx->pc = 0x1A7AA8u;
            // 0x1a7aa8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A7AACu;
        goto label_1a7aac;
    }
    ctx->pc = 0x1A7AA4u;
    SET_GPR_U32(ctx, 31, 0x1A7AACu);
    ctx->pc = 0x1A7AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AA4u;
            // 0x1a7aa8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AACu; }
        if (ctx->pc != 0x1A7AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AACu; }
        if (ctx->pc != 0x1A7AACu) { return; }
    }
    ctx->pc = 0x1A7AACu;
label_1a7aac:
    // 0x1a7aac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7ab0:
    // 0x1a7ab0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a7ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ab4:
    // 0x1a7ab4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a7ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ab8:
    // 0x1a7ab8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1a7ab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a7abc:
    // 0x1a7abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ac0:
    // 0x1a7ac0: 0x24a55e10  addiu       $a1, $a1, 0x5E10
    ctx->pc = 0x1a7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24080));
label_1a7ac4:
    // 0x1a7ac4: 0xc04a234  jal         func_1288D0
label_1a7ac8:
    if (ctx->pc == 0x1A7AC8u) {
        ctx->pc = 0x1A7AC8u;
            // 0x1a7ac8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ACCu;
        goto label_1a7acc;
    }
    ctx->pc = 0x1A7AC4u;
    SET_GPR_U32(ctx, 31, 0x1A7ACCu);
    ctx->pc = 0x1A7AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AC4u;
            // 0x1a7ac8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7ACCu; }
        if (ctx->pc != 0x1A7ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7ACCu; }
        if (ctx->pc != 0x1A7ACCu) { return; }
    }
    ctx->pc = 0x1A7ACCu;
label_1a7acc:
    // 0x1a7acc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7ad0:
    // 0x1a7ad0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7ad4:
    // 0x1a7ad4: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1a7ad8:
    // 0x1a7ad8: 0xc052d0c  jal         func_14B430
label_1a7adc:
    if (ctx->pc == 0x1A7ADCu) {
        ctx->pc = 0x1A7ADCu;
            // 0x1a7adc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x1A7AE0u;
        goto label_1a7ae0;
    }
    ctx->pc = 0x1A7AD8u;
    SET_GPR_U32(ctx, 31, 0x1A7AE0u);
    ctx->pc = 0x1A7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AD8u;
            // 0x1a7adc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AE0u; }
        if (ctx->pc != 0x1A7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AE0u; }
        if (ctx->pc != 0x1A7AE0u) { return; }
    }
    ctx->pc = 0x1A7AE0u;
label_1a7ae0:
    // 0x1a7ae0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1a7ae4:
    if (ctx->pc == 0x1A7AE4u) {
        ctx->pc = 0x1A7AE4u;
            // 0x1a7ae4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AE8u;
        goto label_1a7ae8;
    }
    ctx->pc = 0x1A7AE0u;
    {
        const bool branch_taken_0x1a7ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AE0u;
            // 0x1a7ae4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ae0) {
            ctx->pc = 0x1A7B6Cu;
            goto label_1a7b6c;
        }
    }
    ctx->pc = 0x1A7AE8u;
label_1a7ae8:
    // 0x1a7ae8: 0xc0a24f0  jal         func_2893C0
label_1a7aec:
    if (ctx->pc == 0x1A7AECu) {
        ctx->pc = 0x1A7AECu;
            // 0x1a7aec: 0xc7ac11b0  lwc1        $f12, 0x11B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A7AF0u;
        goto label_1a7af0;
    }
    ctx->pc = 0x1A7AE8u;
    SET_GPR_U32(ctx, 31, 0x1A7AF0u);
    ctx->pc = 0x1A7AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AE8u;
            // 0x1a7aec: 0xc7ac11b0  lwc1        $f12, 0x11B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AF0u; }
        if (ctx->pc != 0x1A7AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AF0u; }
        if (ctx->pc != 0x1A7AF0u) { return; }
    }
    ctx->pc = 0x1A7AF0u;
label_1a7af0:
    // 0x1a7af0: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x1a7af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a7af4:
    // 0x1a7af4: 0xc0a24f0  jal         func_2893C0
label_1a7af8:
    if (ctx->pc == 0x1A7AF8u) {
        ctx->pc = 0x1A7AF8u;
            // 0x1a7af8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AFCu;
        goto label_1a7afc;
    }
    ctx->pc = 0x1A7AF4u;
    SET_GPR_U32(ctx, 31, 0x1A7AFCu);
    ctx->pc = 0x1A7AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AF4u;
            // 0x1a7af8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AFCu; }
        if (ctx->pc != 0x1A7AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AFCu; }
        if (ctx->pc != 0x1A7AFCu) { return; }
    }
    ctx->pc = 0x1A7AFCu;
label_1a7afc:
    // 0x1a7afc: 0x27a311b8  addiu       $v1, $sp, 0x11B8
    ctx->pc = 0x1a7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4536));
label_1a7b00:
    // 0x1a7b00: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1a7b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a7b04:
    // 0x1a7b04: 0xc0a24f0  jal         func_2893C0
label_1a7b08:
    if (ctx->pc == 0x1A7B08u) {
        ctx->pc = 0x1A7B08u;
            // 0x1a7b08: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B0Cu;
        goto label_1a7b0c;
    }
    ctx->pc = 0x1A7B04u;
    SET_GPR_U32(ctx, 31, 0x1A7B0Cu);
    ctx->pc = 0x1A7B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B04u;
            // 0x1a7b08: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B0Cu; }
        if (ctx->pc != 0x1A7B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B0Cu; }
        if (ctx->pc != 0x1A7B0Cu) { return; }
    }
    ctx->pc = 0x1A7B0Cu;
label_1a7b0c:
    // 0x1a7b0c: 0x27a311c4  addiu       $v1, $sp, 0x11C4
    ctx->pc = 0x1a7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4548));
label_1a7b10:
    // 0x1a7b10: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1a7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a7b14:
    // 0x1a7b14: 0xc0a24f0  jal         func_2893C0
label_1a7b18:
    if (ctx->pc == 0x1A7B18u) {
        ctx->pc = 0x1A7B18u;
            // 0x1a7b18: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B1Cu;
        goto label_1a7b1c;
    }
    ctx->pc = 0x1A7B14u;
    SET_GPR_U32(ctx, 31, 0x1A7B1Cu);
    ctx->pc = 0x1A7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B14u;
            // 0x1a7b18: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B1Cu; }
        if (ctx->pc != 0x1A7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B1Cu; }
        if (ctx->pc != 0x1A7B1Cu) { return; }
    }
    ctx->pc = 0x1A7B1Cu;
label_1a7b1c:
    // 0x1a7b1c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7b20:
    // 0x1a7b20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a7b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b24:
    // 0x1a7b24: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b28:
    // 0x1a7b28: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1a7b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b2c:
    // 0x1a7b2c: 0x27a411d0  addiu       $a0, $sp, 0x11D0
    ctx->pc = 0x1a7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
label_1a7b30:
    // 0x1a7b30: 0x24a55e30  addiu       $a1, $a1, 0x5E30
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24112));
label_1a7b34:
    // 0x1a7b34: 0xc04a234  jal         func_1288D0
label_1a7b38:
    if (ctx->pc == 0x1A7B38u) {
        ctx->pc = 0x1A7B38u;
            // 0x1a7b38: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B3Cu;
        goto label_1a7b3c;
    }
    ctx->pc = 0x1A7B34u;
    SET_GPR_U32(ctx, 31, 0x1A7B3Cu);
    ctx->pc = 0x1A7B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B34u;
            // 0x1a7b38: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B3Cu; }
        if (ctx->pc != 0x1A7B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B3Cu; }
        if (ctx->pc != 0x1A7B3Cu) { return; }
    }
    ctx->pc = 0x1A7B3Cu;
label_1a7b3c:
    // 0x1a7b3c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1a7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1a7b40:
    // 0x1a7b40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a7b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b44:
    // 0x1a7b44: 0x27a511d0  addiu       $a1, $sp, 0x11D0
    ctx->pc = 0x1a7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
label_1a7b48:
    // 0x1a7b48: 0xc0526fc  jal         func_149BF0
label_1a7b4c:
    if (ctx->pc == 0x1A7B4Cu) {
        ctx->pc = 0x1A7B4Cu;
            // 0x1a7b4c: 0x24845e48  addiu       $a0, $a0, 0x5E48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24136));
        ctx->pc = 0x1A7B50u;
        goto label_1a7b50;
    }
    ctx->pc = 0x1A7B48u;
    SET_GPR_U32(ctx, 31, 0x1A7B50u);
    ctx->pc = 0x1A7B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B48u;
            // 0x1a7b4c: 0x24845e48  addiu       $a0, $a0, 0x5E48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149BF0u;
    if (runtime->hasFunction(0x149BF0u)) {
        auto targetFn = runtime->lookupFunction(0x149BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B50u; }
        if (ctx->pc != 0x1A7B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WriteFile__FPcPvi_0x149bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B50u; }
        if (ctx->pc != 0x1A7B50u) { return; }
    }
    ctx->pc = 0x1A7B50u;
label_1a7b50:
    // 0x1a7b50: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a7b54:
    if (ctx->pc == 0x1A7B54u) {
        ctx->pc = 0x1A7B58u;
        goto label_1a7b58;
    }
    ctx->pc = 0x1A7B50u;
    {
        const bool branch_taken_0x1a7b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b50) {
            ctx->pc = 0x1A7B68u;
            goto label_1a7b68;
        }
    }
    ctx->pc = 0x1A7B58u;
label_1a7b58:
    // 0x1a7b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b5c:
    // 0x1a7b5c: 0xc04a234  jal         func_1288D0
label_1a7b60:
    if (ctx->pc == 0x1A7B60u) {
        ctx->pc = 0x1A7B60u;
            // 0x1a7b60: 0x24a55e58  addiu       $a1, $a1, 0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
        ctx->pc = 0x1A7B64u;
        goto label_1a7b64;
    }
    ctx->pc = 0x1A7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B64u);
    ctx->pc = 0x1A7B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B5Cu;
            // 0x1a7b60: 0x24a55e58  addiu       $a1, $a1, 0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B64u; }
        if (ctx->pc != 0x1A7B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B64u; }
        if (ctx->pc != 0x1A7B64u) { return; }
    }
    ctx->pc = 0x1A7B64u;
label_1a7b64:
    // 0x1a7b64: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7b68:
    // 0x1a7b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b6c:
    // 0x1a7b6c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1a7b70:
    if (ctx->pc == 0x1A7B70u) {
        ctx->pc = 0x1A7B70u;
            // 0x1a7b70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B74u;
        goto label_1a7b74;
    }
    ctx->pc = 0x1A7B6Cu;
    {
        const bool branch_taken_0x1a7b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B6Cu;
            // 0x1a7b70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b6c) {
            ctx->pc = 0x1A7D28u;
            goto label_1a7d28;
        }
    }
    ctx->pc = 0x1A7B74u;
label_1a7b74:
    // 0x1a7b74: 0xc069e3c  jal         func_1A78F0
label_1a7b78:
    if (ctx->pc == 0x1A7B78u) {
        ctx->pc = 0x1A7B78u;
            // 0x1a7b78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B7Cu;
        goto label_1a7b7c;
    }
    ctx->pc = 0x1A7B74u;
    SET_GPR_U32(ctx, 31, 0x1A7B7Cu);
    ctx->pc = 0x1A7B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B74u;
            // 0x1a7b78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A78F0u;
    if (runtime->hasFunction(0x1A78F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A78F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B7Cu; }
        if (ctx->pc != 0x1A7B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintCursor__FPci_0x1a78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B7Cu; }
        if (ctx->pc != 0x1A7B7Cu) { return; }
    }
    ctx->pc = 0x1A7B7Cu;
label_1a7b7c:
    // 0x1a7b7c: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7b80:
    // 0x1a7b80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7b84:
    // 0x1a7b84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a7b88:
    // 0x1a7b88: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7b8c:
    // 0x1a7b8c: 0x24426790  addiu       $v0, $v0, 0x6790
    ctx->pc = 0x1a7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26512));
label_1a7b90:
    // 0x1a7b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b94:
    // 0x1a7b94: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1a7b98:
    // 0x1a7b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7b9c:
    // 0x1a7b9c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a7ba0:
    // 0x1a7ba0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7ba4:
    // 0x1a7ba4: 0xc04a234  jal         func_1288D0
label_1a7ba8:
    if (ctx->pc == 0x1A7BA8u) {
        ctx->pc = 0x1A7BA8u;
            // 0x1a7ba8: 0x24a55e60  addiu       $a1, $a1, 0x5E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24160));
        ctx->pc = 0x1A7BACu;
        goto label_1a7bac;
    }
    ctx->pc = 0x1A7BA4u;
    SET_GPR_U32(ctx, 31, 0x1A7BACu);
    ctx->pc = 0x1A7BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BA4u;
            // 0x1a7ba8: 0x24a55e60  addiu       $a1, $a1, 0x5E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BACu; }
        if (ctx->pc != 0x1A7BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7BACu; }
        if (ctx->pc != 0x1A7BACu) { return; }
    }
    ctx->pc = 0x1A7BACu;
label_1a7bac:
    // 0x1a7bac: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7bb0:
    // 0x1a7bb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7bb4:
    // 0x1a7bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7bb8:
    // 0x1a7bb8: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_1a7bbc:
    if (ctx->pc == 0x1A7BBCu) {
        ctx->pc = 0x1A7BBCu;
            // 0x1a7bbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1A7BC0u;
        goto label_1a7bc0;
    }
    ctx->pc = 0x1A7BB8u;
    {
        const bool branch_taken_0x1a7bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BB8u;
            // 0x1a7bbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bb8) {
            ctx->pc = 0x1A7CC4u;
            goto label_1a7cc4;
        }
    }
    ctx->pc = 0x1A7BC0u;
label_1a7bc0:
    // 0x1a7bc0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1a7bc4:
    if (ctx->pc == 0x1A7BC4u) {
        ctx->pc = 0x1A7BC4u;
            // 0x1a7bc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A7BC8u;
        goto label_1a7bc8;
    }
    ctx->pc = 0x1A7BC0u;
    {
        const bool branch_taken_0x1a7bc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BC0u;
            // 0x1a7bc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bc0) {
            ctx->pc = 0x1A7BD0u;
            goto label_1a7bd0;
        }
    }
    ctx->pc = 0x1A7BC8u;
label_1a7bc8:
    // 0x1a7bc8: 0x1642003e  bne         $s2, $v0, . + 4 + (0x3E << 2)
label_1a7bcc:
    if (ctx->pc == 0x1A7BCCu) {
        ctx->pc = 0x1A7BD0u;
        goto label_1a7bd0;
    }
    ctx->pc = 0x1A7BC8u;
    {
        const bool branch_taken_0x1a7bc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7bc8) {
            ctx->pc = 0x1A7CC4u;
            goto label_1a7cc4;
        }
    }
    ctx->pc = 0x1A7BD0u;
label_1a7bd0:
    // 0x1a7bd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a7bd4:
    // 0x1a7bd4: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
label_1a7bd8:
    if (ctx->pc == 0x1A7BD8u) {
        ctx->pc = 0x1A7BDCu;
        goto label_1a7bdc;
    }
    ctx->pc = 0x1A7BD4u;
    {
        const bool branch_taken_0x1a7bd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7bd4) {
            ctx->pc = 0x1A7C44u;
            goto label_1a7c44;
        }
    }
    ctx->pc = 0x1A7BDCu;
label_1a7bdc:
    // 0x1a7bdc: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1a7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a7be0:
    // 0x1a7be0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1a7be4:
    if (ctx->pc == 0x1A7BE4u) {
        ctx->pc = 0x1A7BE8u;
        goto label_1a7be8;
    }
    ctx->pc = 0x1A7BE0u;
    {
        const bool branch_taken_0x1a7be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7be0) {
            ctx->pc = 0x1A7C30u;
            goto label_1a7c30;
        }
    }
    ctx->pc = 0x1A7BE8u;
label_1a7be8:
    // 0x1a7be8: 0xdf8280d0  ld          $v0, -0x7F30($gp)
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934736)));
label_1a7bec:
    // 0x1a7bec: 0x27a31490  addiu       $v1, $sp, 0x1490
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5264));
label_1a7bf0:
    // 0x1a7bf0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a7bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bf4:
    // 0x1a7bf4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1a7bf8:
    // 0x1a7bf8: 0x8f868c30  lw          $a2, -0x73D0($gp)
    ctx->pc = 0x1a7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
label_1a7bfc:
    // 0x1a7bfc: 0xc0aa8dc  jal         func_2AA370
label_1a7c00:
    if (ctx->pc == 0x1A7C00u) {
        ctx->pc = 0x1A7C00u;
            // 0x1a7c00: 0x27a713d0  addiu       $a3, $sp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5072));
        ctx->pc = 0x1A7C04u;
        goto label_1a7c04;
    }
    ctx->pc = 0x1A7BFCu;
    SET_GPR_U32(ctx, 31, 0x1A7C04u);
    ctx->pc = 0x1A7C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BFCu;
            // 0x1a7c00: 0x27a713d0  addiu       $a3, $sp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA370u;
    if (runtime->hasFunction(0x2AA370u)) {
        auto targetFn = runtime->lookupFunction(0x2AA370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C04u; }
        if (ctx->pc != 0x1A7C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgGetContintionFlag__9CEditDataFiiPc_0x2aa370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C04u; }
        if (ctx->pc != 0x1A7C04u) { return; }
    }
    ctx->pc = 0x1A7C04u;
label_1a7c04:
    // 0x1a7c04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7c08:
    // 0x1a7c08: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7c0c:
    // 0x1a7c0c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1a7c10:
    // 0x1a7c10: 0x8f868c30  lw          $a2, -0x73D0($gp)
    ctx->pc = 0x1a7c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
label_1a7c14:
    // 0x1a7c14: 0x8c471490  lw          $a3, 0x1490($v0)
    ctx->pc = 0x1a7c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5264)));
label_1a7c18:
    // 0x1a7c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c1c:
    // 0x1a7c1c: 0x24a55e68  addiu       $a1, $a1, 0x5E68
    ctx->pc = 0x1a7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24168));
label_1a7c20:
    // 0x1a7c20: 0xc04a234  jal         func_1288D0
label_1a7c24:
    if (ctx->pc == 0x1A7C24u) {
        ctx->pc = 0x1A7C24u;
            // 0x1a7c24: 0x27a813d0  addiu       $t0, $sp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5072));
        ctx->pc = 0x1A7C28u;
        goto label_1a7c28;
    }
    ctx->pc = 0x1A7C20u;
    SET_GPR_U32(ctx, 31, 0x1A7C28u);
    ctx->pc = 0x1A7C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C20u;
            // 0x1a7c24: 0x27a813d0  addiu       $t0, $sp, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C28u; }
        if (ctx->pc != 0x1A7C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C28u; }
        if (ctx->pc != 0x1A7C28u) { return; }
    }
    ctx->pc = 0x1A7C28u;
label_1a7c28:
    // 0x1a7c28: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a7c2c:
    if (ctx->pc == 0x1A7C2Cu) {
        ctx->pc = 0x1A7C2Cu;
            // 0x1a7c2c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7C30u;
        goto label_1a7c30;
    }
    ctx->pc = 0x1A7C28u;
    {
        const bool branch_taken_0x1a7c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C28u;
            // 0x1a7c2c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c28) {
            ctx->pc = 0x1A7C44u;
            goto label_1a7c44;
        }
    }
    ctx->pc = 0x1A7C30u;
label_1a7c30:
    // 0x1a7c30: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7c34:
    // 0x1a7c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c38:
    // 0x1a7c38: 0xc04a234  jal         func_1288D0
label_1a7c3c:
    if (ctx->pc == 0x1A7C3Cu) {
        ctx->pc = 0x1A7C3Cu;
            // 0x1a7c3c: 0x24a55e78  addiu       $a1, $a1, 0x5E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
        ctx->pc = 0x1A7C40u;
        goto label_1a7c40;
    }
    ctx->pc = 0x1A7C38u;
    SET_GPR_U32(ctx, 31, 0x1A7C40u);
    ctx->pc = 0x1A7C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C38u;
            // 0x1a7c3c: 0x24a55e78  addiu       $a1, $a1, 0x5E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C40u; }
        if (ctx->pc != 0x1A7C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C40u; }
        if (ctx->pc != 0x1A7C40u) { return; }
    }
    ctx->pc = 0x1A7C40u;
label_1a7c40:
    // 0x1a7c40: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7c44:
    // 0x1a7c44: 0x0  nop
    ctx->pc = 0x1a7c44u;
    // NOP
label_1a7c48:
    // 0x1a7c48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a7c4c:
    // 0x1a7c4c: 0x16420033  bne         $s2, $v0, . + 4 + (0x33 << 2)
label_1a7c50:
    if (ctx->pc == 0x1A7C50u) {
        ctx->pc = 0x1A7C54u;
        goto label_1a7c54;
    }
    ctx->pc = 0x1A7C4Cu;
    {
        const bool branch_taken_0x1a7c4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7c4c) {
            ctx->pc = 0x1A7D1Cu;
            goto label_1a7d1c;
        }
    }
    ctx->pc = 0x1A7C54u;
label_1a7c54:
    // 0x1a7c54: 0xdf8280d8  ld          $v0, -0x7F28($gp)
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934744)));
label_1a7c58:
    // 0x1a7c58: 0x27a31498  addiu       $v1, $sp, 0x1498
    ctx->pc = 0x1a7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5272));
label_1a7c5c:
    // 0x1a7c5c: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1a7c60:
    if (ctx->pc == 0x1A7C60u) {
        ctx->pc = 0x1A7C60u;
            // 0x1a7c60: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1A7C64u;
        goto label_1a7c64;
    }
    ctx->pc = 0x1A7C5Cu;
    {
        const bool branch_taken_0x1a7c5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C5Cu;
            // 0x1a7c60: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c5c) {
            ctx->pc = 0x1A7C7Cu;
            goto label_1a7c7c;
        }
    }
    ctx->pc = 0x1A7C64u;
label_1a7c64:
    // 0x1a7c64: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7c68:
    // 0x1a7c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c6c:
    // 0x1a7c6c: 0xc04a234  jal         func_1288D0
label_1a7c70:
    if (ctx->pc == 0x1A7C70u) {
        ctx->pc = 0x1A7C70u;
            // 0x1a7c70: 0x24a55e78  addiu       $a1, $a1, 0x5E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
        ctx->pc = 0x1A7C74u;
        goto label_1a7c74;
    }
    ctx->pc = 0x1A7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C74u);
    ctx->pc = 0x1A7C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C6Cu;
            // 0x1a7c70: 0x24a55e78  addiu       $a1, $a1, 0x5E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C74u; }
        if (ctx->pc != 0x1A7C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C74u; }
        if (ctx->pc != 0x1A7C74u) { return; }
    }
    ctx->pc = 0x1A7C74u;
label_1a7c74:
    // 0x1a7c74: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a7c78:
    if (ctx->pc == 0x1A7C78u) {
        ctx->pc = 0x1A7C78u;
            // 0x1a7c78: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7C7Cu;
        goto label_1a7c7c;
    }
    ctx->pc = 0x1A7C74u;
    {
        const bool branch_taken_0x1a7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C74u;
            // 0x1a7c78: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c74) {
            ctx->pc = 0x1A7D1Cu;
            goto label_1a7d1c;
        }
    }
    ctx->pc = 0x1A7C7Cu;
label_1a7c7c:
    // 0x1a7c7c: 0x0  nop
    ctx->pc = 0x1a7c7cu;
    // NOP
label_1a7c80:
    // 0x1a7c80: 0xc0a0f80  jal         func_283E00
label_1a7c84:
    if (ctx->pc == 0x1A7C84u) {
        ctx->pc = 0x1A7C84u;
            // 0x1a7c84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C88u;
        goto label_1a7c88;
    }
    ctx->pc = 0x1A7C80u;
    SET_GPR_U32(ctx, 31, 0x1A7C88u);
    ctx->pc = 0x1A7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C80u;
            // 0x1a7c84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C88u; }
        if (ctx->pc != 0x1A7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C88u; }
        if (ctx->pc != 0x1A7C88u) { return; }
    }
    ctx->pc = 0x1A7C88u;
label_1a7c88:
    // 0x1a7c88: 0x8f858c34  lw          $a1, -0x73CC($gp)
    ctx->pc = 0x1a7c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937652)));
label_1a7c8c:
    // 0x1a7c8c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a7c8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c90:
    // 0x1a7c90: 0xc057128  jal         func_15C4A0
label_1a7c94:
    if (ctx->pc == 0x1A7C94u) {
        ctx->pc = 0x1A7C94u;
            // 0x1a7c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C98u;
        goto label_1a7c98;
    }
    ctx->pc = 0x1A7C90u;
    SET_GPR_U32(ctx, 31, 0x1A7C98u);
    ctx->pc = 0x1A7C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C90u;
            // 0x1a7c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C4A0u;
    if (runtime->hasFunction(0x15C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C98u; }
        if (ctx->pc != 0x1A7C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFlag__12CMapFlagDataFi_0x15c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C98u; }
        if (ctx->pc != 0x1A7C98u) { return; }
    }
    ctx->pc = 0x1A7C98u;
label_1a7c98:
    // 0x1a7c98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7c9c:
    // 0x1a7c9c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7ca0:
    // 0x1a7ca0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1a7ca4:
    // 0x1a7ca4: 0x8f878c34  lw          $a3, -0x73CC($gp)
    ctx->pc = 0x1a7ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937652)));
label_1a7ca8:
    // 0x1a7ca8: 0x8c481498  lw          $t0, 0x1498($v0)
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5272)));
label_1a7cac:
    // 0x1a7cac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a7cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cb0:
    // 0x1a7cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cb4:
    // 0x1a7cb4: 0xc04a234  jal         func_1288D0
label_1a7cb8:
    if (ctx->pc == 0x1A7CB8u) {
        ctx->pc = 0x1A7CB8u;
            // 0x1a7cb8: 0x24a55e88  addiu       $a1, $a1, 0x5E88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24200));
        ctx->pc = 0x1A7CBCu;
        goto label_1a7cbc;
    }
    ctx->pc = 0x1A7CB4u;
    SET_GPR_U32(ctx, 31, 0x1A7CBCu);
    ctx->pc = 0x1A7CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CB4u;
            // 0x1a7cb8: 0x24a55e88  addiu       $a1, $a1, 0x5E88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CBCu; }
        if (ctx->pc != 0x1A7CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CBCu; }
        if (ctx->pc != 0x1A7CBCu) { return; }
    }
    ctx->pc = 0x1A7CBCu;
label_1a7cbc:
    // 0x1a7cbc: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a7cc0:
    if (ctx->pc == 0x1A7CC0u) {
        ctx->pc = 0x1A7CC0u;
            // 0x1a7cc0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7CC4u;
        goto label_1a7cc4;
    }
    ctx->pc = 0x1A7CBCu;
    {
        const bool branch_taken_0x1a7cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CBCu;
            // 0x1a7cc0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cbc) {
            ctx->pc = 0x1A7D1Cu;
            goto label_1a7d1c;
        }
    }
    ctx->pc = 0x1A7CC4u;
label_1a7cc4:
    // 0x1a7cc4: 0x0  nop
    ctx->pc = 0x1a7cc4u;
    // NOP
label_1a7cc8:
    // 0x1a7cc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a7ccc:
    // 0x1a7ccc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1a7cd0:
    // 0x1a7cd0: 0x24426730  addiu       $v0, $v0, 0x6730
    ctx->pc = 0x1a7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
label_1a7cd4:
    // 0x1a7cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7cd8:
    // 0x1a7cd8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a7cdc:
    // 0x1a7cdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7ce0:
    // 0x1a7ce0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a7ce4:
    if (ctx->pc == 0x1A7CE4u) {
        ctx->pc = 0x1A7CE8u;
        goto label_1a7ce8;
    }
    ctx->pc = 0x1A7CE0u;
    {
        const bool branch_taken_0x1a7ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ce0) {
            ctx->pc = 0x1A7D04u;
            goto label_1a7d04;
        }
    }
    ctx->pc = 0x1A7CE8u;
label_1a7ce8:
    // 0x1a7ce8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7cec:
    // 0x1a7cec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7cf0:
    // 0x1a7cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cf4:
    // 0x1a7cf4: 0xc04a234  jal         func_1288D0
label_1a7cf8:
    if (ctx->pc == 0x1A7CF8u) {
        ctx->pc = 0x1A7CF8u;
            // 0x1a7cf8: 0x24a55e98  addiu       $a1, $a1, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24216));
        ctx->pc = 0x1A7CFCu;
        goto label_1a7cfc;
    }
    ctx->pc = 0x1A7CF4u;
    SET_GPR_U32(ctx, 31, 0x1A7CFCu);
    ctx->pc = 0x1A7CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CF4u;
            // 0x1a7cf8: 0x24a55e98  addiu       $a1, $a1, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CFCu; }
        if (ctx->pc != 0x1A7CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CFCu; }
        if (ctx->pc != 0x1A7CFCu) { return; }
    }
    ctx->pc = 0x1A7CFCu;
label_1a7cfc:
    // 0x1a7cfc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a7d00:
    if (ctx->pc == 0x1A7D00u) {
        ctx->pc = 0x1A7D00u;
            // 0x1a7d00: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A7D04u;
        goto label_1a7d04;
    }
    ctx->pc = 0x1A7CFCu;
    {
        const bool branch_taken_0x1a7cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CFCu;
            // 0x1a7d00: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cfc) {
            ctx->pc = 0x1A7D1Cu;
            goto label_1a7d1c;
        }
    }
    ctx->pc = 0x1A7D04u;
label_1a7d04:
    // 0x1a7d04: 0x0  nop
    ctx->pc = 0x1a7d04u;
    // NOP
label_1a7d08:
    // 0x1a7d08: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7d0c:
    // 0x1a7d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d10:
    // 0x1a7d10: 0xc04a234  jal         func_1288D0
label_1a7d14:
    if (ctx->pc == 0x1A7D14u) {
        ctx->pc = 0x1A7D14u;
            // 0x1a7d14: 0x24a55e58  addiu       $a1, $a1, 0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
        ctx->pc = 0x1A7D18u;
        goto label_1a7d18;
    }
    ctx->pc = 0x1A7D10u;
    SET_GPR_U32(ctx, 31, 0x1A7D18u);
    ctx->pc = 0x1A7D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D10u;
            // 0x1a7d14: 0x24a55e58  addiu       $a1, $a1, 0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D18u; }
        if (ctx->pc != 0x1A7D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D18u; }
        if (ctx->pc != 0x1A7D18u) { return; }
    }
    ctx->pc = 0x1A7D18u;
label_1a7d18:
    // 0x1a7d18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7d1c:
    // 0x1a7d1c: 0x0  nop
    ctx->pc = 0x1a7d1cu;
    // NOP
label_1a7d20:
    // 0x1a7d20: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a7d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1a7d24:
    // 0x1a7d24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a7d28:
    // 0x1a7d28: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7d2c:
    // 0x1a7d2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a7d30:
    // 0x1a7d30: 0x24426720  addiu       $v0, $v0, 0x6720
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26400));
label_1a7d34:
    // 0x1a7d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a7d38:
    // 0x1a7d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7d3c:
    // 0x1a7d3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7d40:
    // 0x1a7d40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a7d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a7d44:
    // 0x1a7d44: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
label_1a7d48:
    if (ctx->pc == 0x1A7D48u) {
        ctx->pc = 0x1A7D48u;
            // 0x1a7d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D4Cu;
        goto label_1a7d4c;
    }
    ctx->pc = 0x1A7D44u;
    {
        const bool branch_taken_0x1a7d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D44u;
            // 0x1a7d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d44) {
            ctx->pc = 0x1A7B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7b74;
        }
    }
    ctx->pc = 0x1A7D4Cu;
label_1a7d4c:
    // 0x1a7d4c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a7d50:
    // 0x1a7d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d54:
    // 0x1a7d54: 0xc04a234  jal         func_1288D0
label_1a7d58:
    if (ctx->pc == 0x1A7D58u) {
        ctx->pc = 0x1A7D58u;
            // 0x1a7d58: 0x24a55e58  addiu       $a1, $a1, 0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
        ctx->pc = 0x1A7D5Cu;
        goto label_1a7d5c;
    }
    ctx->pc = 0x1A7D54u;
    SET_GPR_U32(ctx, 31, 0x1A7D5Cu);
    ctx->pc = 0x1A7D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D54u;
            // 0x1a7d58: 0x24a55e58  addiu       $a1, $a1, 0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D5Cu; }
        if (ctx->pc != 0x1A7D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D5Cu; }
        if (ctx->pc != 0x1A7D5Cu) { return; }
    }
    ctx->pc = 0x1A7D5Cu;
label_1a7d5c:
    // 0x1a7d5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a7d60:
    // 0x1a7d60: 0x8f848c1c  lw          $a0, -0x73E4($gp)
    ctx->pc = 0x1a7d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7d64:
    // 0x1a7d64: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a7d68:
    // 0x1a7d68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1a7d6c:
    // 0x1a7d6c: 0x246367f0  addiu       $v1, $v1, 0x67F0
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26608));
label_1a7d70:
    // 0x1a7d70: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1a7d74:
    // 0x1a7d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a7d78:
    // 0x1a7d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7d7c:
    // 0x1a7d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7d80:
    // 0x1a7d80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7d84:
    // 0x1a7d84: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1a7d88:
    if (ctx->pc == 0x1A7D88u) {
        ctx->pc = 0x1A7D88u;
            // 0x1a7d88: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1A7D8Cu;
        goto label_1a7d8c;
    }
    ctx->pc = 0x1A7D84u;
    {
        const bool branch_taken_0x1a7d84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D84u;
            // 0x1a7d88: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d84) {
            ctx->pc = 0x1A7D98u;
            goto label_1a7d98;
        }
    }
    ctx->pc = 0x1A7D8Cu;
label_1a7d8c:
    // 0x1a7d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d90:
    // 0x1a7d90: 0xc04a234  jal         func_1288D0
label_1a7d94:
    if (ctx->pc == 0x1A7D94u) {
        ctx->pc = 0x1A7D94u;
            // 0x1a7d94: 0x24a55ea0  addiu       $a1, $a1, 0x5EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24224));
        ctx->pc = 0x1A7D98u;
        goto label_1a7d98;
    }
    ctx->pc = 0x1A7D90u;
    SET_GPR_U32(ctx, 31, 0x1A7D98u);
    ctx->pc = 0x1A7D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D90u;
            // 0x1a7d94: 0x24a55ea0  addiu       $a1, $a1, 0x5EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D98u; }
        if (ctx->pc != 0x1A7D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D98u; }
        if (ctx->pc != 0x1A7D98u) { return; }
    }
    ctx->pc = 0x1A7D98u;
label_1a7d98:
    // 0x1a7d98: 0x8f848c1c  lw          $a0, -0x73E4($gp)
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7d9c:
    // 0x1a7d9c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1a7da0:
    // 0x1a7da0: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a7da4:
    // 0x1a7da4: 0x24636730  addiu       $v1, $v1, 0x6730
    ctx->pc = 0x1a7da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26416));
label_1a7da8:
    // 0x1a7da8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1a7dac:
    // 0x1a7dac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a7db0:
    // 0x1a7db0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7db4:
    // 0x1a7db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7db8:
    // 0x1a7db8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a7db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7dbc:
    // 0x1a7dbc: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
label_1a7dc0:
    if (ctx->pc == 0x1A7DC0u) {
        ctx->pc = 0x1A7DC4u;
        goto label_1a7dc4;
    }
    ctx->pc = 0x1A7DBCu;
    {
        const bool branch_taken_0x1a7dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7dbc) {
            ctx->pc = 0x1A7F30u;
            goto label_1a7f30;
        }
    }
    ctx->pc = 0x1A7DC4u;
label_1a7dc4:
    // 0x1a7dc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7dc8:
    // 0x1a7dc8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1a7dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1a7dcc:
    // 0x1a7dcc: 0xc052d0c  jal         func_14B430
label_1a7dd0:
    if (ctx->pc == 0x1A7DD0u) {
        ctx->pc = 0x1A7DD0u;
            // 0x1a7dd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7DD4u;
        goto label_1a7dd4;
    }
    ctx->pc = 0x1A7DCCu;
    SET_GPR_U32(ctx, 31, 0x1A7DD4u);
    ctx->pc = 0x1A7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DCCu;
            // 0x1a7dd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DD4u; }
        if (ctx->pc != 0x1A7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DD4u; }
        if (ctx->pc != 0x1A7DD4u) { return; }
    }
    ctx->pc = 0x1A7DD4u;
label_1a7dd4:
    // 0x1a7dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7dd8:
    if (ctx->pc == 0x1A7DD8u) {
        ctx->pc = 0x1A7DD8u;
            // 0x1a7dd8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A7DDCu;
        goto label_1a7ddc;
    }
    ctx->pc = 0x1A7DD4u;
    {
        const bool branch_taken_0x1a7dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DD4u;
            // 0x1a7dd8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dd4) {
            ctx->pc = 0x1A7DE8u;
            goto label_1a7de8;
        }
    }
    ctx->pc = 0x1A7DDCu;
label_1a7ddc:
    // 0x1a7ddc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7de0:
    // 0x1a7de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a7de4:
    // 0x1a7de4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7de8:
    // 0x1a7de8: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1a7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1a7dec:
    // 0x1a7dec: 0xc052d0c  jal         func_14B430
label_1a7df0:
    if (ctx->pc == 0x1A7DF0u) {
        ctx->pc = 0x1A7DF0u;
            // 0x1a7df0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7DF4u;
        goto label_1a7df4;
    }
    ctx->pc = 0x1A7DECu;
    SET_GPR_U32(ctx, 31, 0x1A7DF4u);
    ctx->pc = 0x1A7DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DECu;
            // 0x1a7df0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DF4u; }
        if (ctx->pc != 0x1A7DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DF4u; }
        if (ctx->pc != 0x1A7DF4u) { return; }
    }
    ctx->pc = 0x1A7DF4u;
label_1a7df4:
    // 0x1a7df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7df8:
    if (ctx->pc == 0x1A7DF8u) {
        ctx->pc = 0x1A7DF8u;
            // 0x1a7df8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A7DFCu;
        goto label_1a7dfc;
    }
    ctx->pc = 0x1A7DF4u;
    {
        const bool branch_taken_0x1a7df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DF4u;
            // 0x1a7df8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7df4) {
            ctx->pc = 0x1A7E08u;
            goto label_1a7e08;
        }
    }
    ctx->pc = 0x1A7DFCu;
label_1a7dfc:
    // 0x1a7dfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7e00:
    // 0x1a7e00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a7e04:
    // 0x1a7e04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7e08:
    // 0x1a7e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7e0c:
    // 0x1a7e0c: 0xc052cf0  jal         func_14B3C0
label_1a7e10:
    if (ctx->pc == 0x1A7E10u) {
        ctx->pc = 0x1A7E10u;
            // 0x1a7e10: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7E14u;
        goto label_1a7e14;
    }
    ctx->pc = 0x1A7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E14u);
    ctx->pc = 0x1A7E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E0Cu;
            // 0x1a7e10: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E14u; }
        if (ctx->pc != 0x1A7E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E14u; }
        if (ctx->pc != 0x1A7E14u) { return; }
    }
    ctx->pc = 0x1A7E14u;
label_1a7e14:
    // 0x1a7e14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1a7e18:
    if (ctx->pc == 0x1A7E18u) {
        ctx->pc = 0x1A7E1Cu;
        goto label_1a7e1c;
    }
    ctx->pc = 0x1A7E14u;
    {
        const bool branch_taken_0x1a7e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e14) {
            ctx->pc = 0x1A7E7Cu;
            goto label_1a7e7c;
        }
    }
    ctx->pc = 0x1A7E1Cu;
label_1a7e1c:
    // 0x1a7e1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7e20:
    // 0x1a7e20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a7e24:
    // 0x1a7e24: 0xc052cf0  jal         func_14B3C0
label_1a7e28:
    if (ctx->pc == 0x1A7E28u) {
        ctx->pc = 0x1A7E28u;
            // 0x1a7e28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7E2Cu;
        goto label_1a7e2c;
    }
    ctx->pc = 0x1A7E24u;
    SET_GPR_U32(ctx, 31, 0x1A7E2Cu);
    ctx->pc = 0x1A7E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E24u;
            // 0x1a7e28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E2Cu; }
        if (ctx->pc != 0x1A7E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E2Cu; }
        if (ctx->pc != 0x1A7E2Cu) { return; }
    }
    ctx->pc = 0x1A7E2Cu;
label_1a7e2c:
    // 0x1a7e2c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1a7e30:
    if (ctx->pc == 0x1A7E30u) {
        ctx->pc = 0x1A7E34u;
        goto label_1a7e34;
    }
    ctx->pc = 0x1A7E2Cu;
    {
        const bool branch_taken_0x1a7e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e2c) {
            ctx->pc = 0x1A7E7Cu;
            goto label_1a7e7c;
        }
    }
    ctx->pc = 0x1A7E34u;
label_1a7e34:
    // 0x1a7e34: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7e38:
    // 0x1a7e38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a7e3c:
    // 0x1a7e3c: 0xc052d0c  jal         func_14B430
label_1a7e40:
    if (ctx->pc == 0x1A7E40u) {
        ctx->pc = 0x1A7E40u;
            // 0x1a7e40: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7E44u;
        goto label_1a7e44;
    }
    ctx->pc = 0x1A7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E44u);
    ctx->pc = 0x1A7E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E3Cu;
            // 0x1a7e40: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E44u; }
        if (ctx->pc != 0x1A7E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E44u; }
        if (ctx->pc != 0x1A7E44u) { return; }
    }
    ctx->pc = 0x1A7E44u;
label_1a7e44:
    // 0x1a7e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7e48:
    if (ctx->pc == 0x1A7E48u) {
        ctx->pc = 0x1A7E48u;
            // 0x1a7e48: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A7E4Cu;
        goto label_1a7e4c;
    }
    ctx->pc = 0x1A7E44u;
    {
        const bool branch_taken_0x1a7e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E44u;
            // 0x1a7e48: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e44) {
            ctx->pc = 0x1A7E58u;
            goto label_1a7e58;
        }
    }
    ctx->pc = 0x1A7E4Cu;
label_1a7e4c:
    // 0x1a7e4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7e50:
    // 0x1a7e50: 0x2442d8f0  addiu       $v0, $v0, -0x2710
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957296));
label_1a7e54:
    // 0x1a7e54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7e58:
    // 0x1a7e58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a7e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a7e5c:
    // 0x1a7e5c: 0xc052d0c  jal         func_14B430
label_1a7e60:
    if (ctx->pc == 0x1A7E60u) {
        ctx->pc = 0x1A7E60u;
            // 0x1a7e60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7E64u;
        goto label_1a7e64;
    }
    ctx->pc = 0x1A7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E64u);
    ctx->pc = 0x1A7E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E5Cu;
            // 0x1a7e60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E64u; }
        if (ctx->pc != 0x1A7E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E64u; }
        if (ctx->pc != 0x1A7E64u) { return; }
    }
    ctx->pc = 0x1A7E64u;
label_1a7e64:
    // 0x1a7e64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1a7e68:
    if (ctx->pc == 0x1A7E68u) {
        ctx->pc = 0x1A7E6Cu;
        goto label_1a7e6c;
    }
    ctx->pc = 0x1A7E64u;
    {
        const bool branch_taken_0x1a7e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e64) {
            ctx->pc = 0x1A7EC0u;
            goto label_1a7ec0;
        }
    }
    ctx->pc = 0x1A7E6Cu;
label_1a7e6c:
    // 0x1a7e6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7e70:
    // 0x1a7e70: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_1a7e74:
    // 0x1a7e74: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a7e78:
    if (ctx->pc == 0x1A7E78u) {
        ctx->pc = 0x1A7E78u;
            // 0x1a7e78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A7E7Cu;
        goto label_1a7e7c;
    }
    ctx->pc = 0x1A7E74u;
    {
        const bool branch_taken_0x1a7e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E74u;
            // 0x1a7e78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e74) {
            ctx->pc = 0x1A7EC0u;
            goto label_1a7ec0;
        }
    }
    ctx->pc = 0x1A7E7Cu;
label_1a7e7c:
    // 0x1a7e7c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7e80:
    // 0x1a7e80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a7e84:
    // 0x1a7e84: 0xc052d0c  jal         func_14B430
label_1a7e88:
    if (ctx->pc == 0x1A7E88u) {
        ctx->pc = 0x1A7E88u;
            // 0x1a7e88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7E8Cu;
        goto label_1a7e8c;
    }
    ctx->pc = 0x1A7E84u;
    SET_GPR_U32(ctx, 31, 0x1A7E8Cu);
    ctx->pc = 0x1A7E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E84u;
            // 0x1a7e88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E8Cu; }
        if (ctx->pc != 0x1A7E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E8Cu; }
        if (ctx->pc != 0x1A7E8Cu) { return; }
    }
    ctx->pc = 0x1A7E8Cu;
label_1a7e8c:
    // 0x1a7e8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7e90:
    if (ctx->pc == 0x1A7E90u) {
        ctx->pc = 0x1A7E90u;
            // 0x1a7e90: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A7E94u;
        goto label_1a7e94;
    }
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E8Cu;
            // 0x1a7e90: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7EA0u;
            goto label_1a7ea0;
        }
    }
    ctx->pc = 0x1A7E94u;
label_1a7e94:
    // 0x1a7e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7e98:
    // 0x1a7e98: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_1a7e9c:
    // 0x1a7e9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7ea0:
    // 0x1a7ea0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a7ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a7ea4:
    // 0x1a7ea4: 0xc052d0c  jal         func_14B430
label_1a7ea8:
    if (ctx->pc == 0x1A7EA8u) {
        ctx->pc = 0x1A7EA8u;
            // 0x1a7ea8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7EACu;
        goto label_1a7eac;
    }
    ctx->pc = 0x1A7EA4u;
    SET_GPR_U32(ctx, 31, 0x1A7EACu);
    ctx->pc = 0x1A7EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EA4u;
            // 0x1a7ea8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EACu; }
        if (ctx->pc != 0x1A7EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EACu; }
        if (ctx->pc != 0x1A7EACu) { return; }
    }
    ctx->pc = 0x1A7EACu;
label_1a7eac:
    // 0x1a7eac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7eb0:
    if (ctx->pc == 0x1A7EB0u) {
        ctx->pc = 0x1A7EB4u;
        goto label_1a7eb4;
    }
    ctx->pc = 0x1A7EACu;
    {
        const bool branch_taken_0x1a7eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7eac) {
            ctx->pc = 0x1A7EC0u;
            goto label_1a7ec0;
        }
    }
    ctx->pc = 0x1A7EB4u;
label_1a7eb4:
    // 0x1a7eb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7eb8:
    // 0x1a7eb8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_1a7ebc:
    // 0x1a7ebc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7ec0:
    // 0x1a7ec0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7ec4:
    // 0x1a7ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7ec8:
    // 0x1a7ec8: 0xc052d0c  jal         func_14B430
label_1a7ecc:
    if (ctx->pc == 0x1A7ECCu) {
        ctx->pc = 0x1A7ECCu;
            // 0x1a7ecc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7ED0u;
        goto label_1a7ed0;
    }
    ctx->pc = 0x1A7EC8u;
    SET_GPR_U32(ctx, 31, 0x1A7ED0u);
    ctx->pc = 0x1A7ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EC8u;
            // 0x1a7ecc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7ED0u; }
        if (ctx->pc != 0x1A7ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7ED0u; }
        if (ctx->pc != 0x1A7ED0u) { return; }
    }
    ctx->pc = 0x1A7ED0u;
label_1a7ed0:
    // 0x1a7ed0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7ed4:
    if (ctx->pc == 0x1A7ED4u) {
        ctx->pc = 0x1A7ED4u;
            // 0x1a7ed4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A7ED8u;
        goto label_1a7ed8;
    }
    ctx->pc = 0x1A7ED0u;
    {
        const bool branch_taken_0x1a7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7ED0u;
            // 0x1a7ed4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ed0) {
            ctx->pc = 0x1A7EE4u;
            goto label_1a7ee4;
        }
    }
    ctx->pc = 0x1A7ED8u;
label_1a7ed8:
    // 0x1a7ed8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7edc:
    // 0x1a7edc: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_1a7ee0:
    // 0x1a7ee0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7ee4:
    // 0x1a7ee4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a7ee8:
    // 0x1a7ee8: 0xc052d0c  jal         func_14B430
label_1a7eec:
    if (ctx->pc == 0x1A7EECu) {
        ctx->pc = 0x1A7EECu;
            // 0x1a7eec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7EF0u;
        goto label_1a7ef0;
    }
    ctx->pc = 0x1A7EE8u;
    SET_GPR_U32(ctx, 31, 0x1A7EF0u);
    ctx->pc = 0x1A7EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EE8u;
            // 0x1a7eec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EF0u; }
        if (ctx->pc != 0x1A7EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EF0u; }
        if (ctx->pc != 0x1A7EF0u) { return; }
    }
    ctx->pc = 0x1A7EF0u;
label_1a7ef0:
    // 0x1a7ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7ef4:
    if (ctx->pc == 0x1A7EF4u) {
        ctx->pc = 0x1A7EF8u;
        goto label_1a7ef8;
    }
    ctx->pc = 0x1A7EF0u;
    {
        const bool branch_taken_0x1a7ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ef0) {
            ctx->pc = 0x1A7F04u;
            goto label_1a7f04;
        }
    }
    ctx->pc = 0x1A7EF8u;
label_1a7ef8:
    // 0x1a7ef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7efc:
    // 0x1a7efc: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1a7f00:
    // 0x1a7f00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a7f04:
    // 0x1a7f04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7f08:
    // 0x1a7f08: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1a7f0c:
    if (ctx->pc == 0x1A7F0Cu) {
        ctx->pc = 0x1A7F10u;
        goto label_1a7f10;
    }
    ctx->pc = 0x1A7F08u;
    {
        const bool branch_taken_0x1a7f08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7f08) {
            ctx->pc = 0x1A7F14u;
            goto label_1a7f14;
        }
    }
    ctx->pc = 0x1A7F10u;
label_1a7f10:
    // 0x1a7f10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a7f14:
    // 0x1a7f14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7f18:
    // 0x1a7f18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a7f1c:
    // 0x1a7f1c: 0x3444869f  ori         $a0, $v0, 0x869F
    ctx->pc = 0x1a7f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_1a7f20:
    // 0x1a7f20: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1a7f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a7f24:
    // 0x1a7f24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a7f28:
    if (ctx->pc == 0x1A7F28u) {
        ctx->pc = 0x1A7F2Cu;
        goto label_1a7f2c;
    }
    ctx->pc = 0x1A7F24u;
    {
        const bool branch_taken_0x1a7f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f24) {
            ctx->pc = 0x1A7F30u;
            goto label_1a7f30;
        }
    }
    ctx->pc = 0x1A7F2Cu;
label_1a7f2c:
    // 0x1a7f2c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1a7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1a7f30:
    // 0x1a7f30: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7f34:
    // 0x1a7f34: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1a7f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a7f38:
    // 0x1a7f38: 0xc052d0c  jal         func_14B430
label_1a7f3c:
    if (ctx->pc == 0x1A7F3Cu) {
        ctx->pc = 0x1A7F3Cu;
            // 0x1a7f3c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7F40u;
        goto label_1a7f40;
    }
    ctx->pc = 0x1A7F38u;
    SET_GPR_U32(ctx, 31, 0x1A7F40u);
    ctx->pc = 0x1A7F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F38u;
            // 0x1a7f3c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F40u; }
        if (ctx->pc != 0x1A7F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F40u; }
        if (ctx->pc != 0x1A7F40u) { return; }
    }
    ctx->pc = 0x1A7F40u;
label_1a7f40:
    // 0x1a7f40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a7f44:
    if (ctx->pc == 0x1A7F44u) {
        ctx->pc = 0x1A7F48u;
        goto label_1a7f48;
    }
    ctx->pc = 0x1A7F40u;
    {
        const bool branch_taken_0x1a7f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f40) {
            ctx->pc = 0x1A7F68u;
            goto label_1a7f68;
        }
    }
    ctx->pc = 0x1A7F48u;
label_1a7f48:
    // 0x1a7f48: 0x8f828c1c  lw          $v0, -0x73E4($gp)
    ctx->pc = 0x1a7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7f4c:
    // 0x1a7f4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a7f50:
    // 0x1a7f50: 0xaf828c1c  sw          $v0, -0x73E4($gp)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937628), GPR_U32(ctx, 2));
label_1a7f54:
    // 0x1a7f54: 0x8f828c1c  lw          $v0, -0x73E4($gp)
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7f58:
    // 0x1a7f58: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1a7f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a7f5c:
    // 0x1a7f5c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a7f60:
    if (ctx->pc == 0x1A7F60u) {
        ctx->pc = 0x1A7F64u;
        goto label_1a7f64;
    }
    ctx->pc = 0x1A7F5Cu;
    {
        const bool branch_taken_0x1a7f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f5c) {
            ctx->pc = 0x1A7F68u;
            goto label_1a7f68;
        }
    }
    ctx->pc = 0x1A7F64u;
label_1a7f64:
    // 0x1a7f64: 0xaf808c1c  sw          $zero, -0x73E4($gp)
    ctx->pc = 0x1a7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937628), GPR_U32(ctx, 0));
label_1a7f68:
    // 0x1a7f68: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a7f6c:
    // 0x1a7f6c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1a7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1a7f70:
    // 0x1a7f70: 0xc052d0c  jal         func_14B430
label_1a7f74:
    if (ctx->pc == 0x1A7F74u) {
        ctx->pc = 0x1A7F74u;
            // 0x1a7f74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7F78u;
        goto label_1a7f78;
    }
    ctx->pc = 0x1A7F70u;
    SET_GPR_U32(ctx, 31, 0x1A7F78u);
    ctx->pc = 0x1A7F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F70u;
            // 0x1a7f74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F78u; }
        if (ctx->pc != 0x1A7F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F78u; }
        if (ctx->pc != 0x1A7F78u) { return; }
    }
    ctx->pc = 0x1A7F78u;
label_1a7f78:
    // 0x1a7f78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7f7c:
    if (ctx->pc == 0x1A7F7Cu) {
        ctx->pc = 0x1A7F7Cu;
            // 0x1a7f7c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A7F80u;
        goto label_1a7f80;
    }
    ctx->pc = 0x1A7F78u;
    {
        const bool branch_taken_0x1a7f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F78u;
            // 0x1a7f7c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f78) {
            ctx->pc = 0x1A7F8Cu;
            goto label_1a7f8c;
        }
    }
    ctx->pc = 0x1A7F80u;
label_1a7f80:
    // 0x1a7f80: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a7f84:
    // 0x1a7f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a7f88:
    // 0x1a7f88: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
label_1a7f8c:
    // 0x1a7f8c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1a7f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1a7f90:
    // 0x1a7f90: 0xc052d0c  jal         func_14B430
label_1a7f94:
    if (ctx->pc == 0x1A7F94u) {
        ctx->pc = 0x1A7F94u;
            // 0x1a7f94: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A7F98u;
        goto label_1a7f98;
    }
    ctx->pc = 0x1A7F90u;
    SET_GPR_U32(ctx, 31, 0x1A7F98u);
    ctx->pc = 0x1A7F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F90u;
            // 0x1a7f94: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F98u; }
        if (ctx->pc != 0x1A7F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F98u; }
        if (ctx->pc != 0x1A7F98u) { return; }
    }
    ctx->pc = 0x1A7F98u;
label_1a7f98:
    // 0x1a7f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a7f9c:
    if (ctx->pc == 0x1A7F9Cu) {
        ctx->pc = 0x1A7FA0u;
        goto label_1a7fa0;
    }
    ctx->pc = 0x1A7F98u;
    {
        const bool branch_taken_0x1a7f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f98) {
            ctx->pc = 0x1A7FACu;
            goto label_1a7fac;
        }
    }
    ctx->pc = 0x1A7FA0u;
label_1a7fa0:
    // 0x1a7fa0: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a7fa4:
    // 0x1a7fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a7fa8:
    // 0x1a7fa8: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
label_1a7fac:
    // 0x1a7fac: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a7fb0:
    // 0x1a7fb0: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_1a7fb4:
    if (ctx->pc == 0x1A7FB4u) {
        ctx->pc = 0x1A7FB8u;
        goto label_1a7fb8;
    }
    ctx->pc = 0x1A7FB0u;
    {
        const bool branch_taken_0x1a7fb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7fb0) {
            ctx->pc = 0x1A7FD8u;
            goto label_1a7fd8;
        }
    }
    ctx->pc = 0x1A7FB8u;
label_1a7fb8:
    // 0x1a7fb8: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7fbc:
    // 0x1a7fbc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a7fc0:
    // 0x1a7fc0: 0x24426720  addiu       $v0, $v0, 0x6720
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26400));
label_1a7fc4:
    // 0x1a7fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a7fc8:
    // 0x1a7fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7fcc:
    // 0x1a7fcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7fd0:
    // 0x1a7fd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a7fd4:
    // 0x1a7fd4: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
label_1a7fd8:
    // 0x1a7fd8: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a7fdc:
    // 0x1a7fdc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a7fe0:
    // 0x1a7fe0: 0x24426720  addiu       $v0, $v0, 0x6720
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26400));
label_1a7fe4:
    // 0x1a7fe4: 0x8f848c18  lw          $a0, -0x73E8($gp)
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a7fe8:
    // 0x1a7fe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a7fec:
    // 0x1a7fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a7ff0:
    // 0x1a7ff0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7ff4:
    // 0x1a7ff4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a7ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a7ff8:
    // 0x1a7ff8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a7ffc:
    if (ctx->pc == 0x1A7FFCu) {
        ctx->pc = 0x1A7FFCu;
            // 0x1a7ffc: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x1A8000u;
        goto label_1a8000;
    }
    ctx->pc = 0x1A7FF8u;
    {
        const bool branch_taken_0x1a7ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FF8u;
            // 0x1a7ffc: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ff8) {
            ctx->pc = 0x1A8004u;
            goto label_1a8004;
        }
    }
    ctx->pc = 0x1A8000u;
label_1a8000:
    // 0x1a8000: 0xaf808c18  sw          $zero, -0x73E8($gp)
    ctx->pc = 0x1a8000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 0));
label_1a8004:
    // 0x1a8004: 0x8c258070  lw          $a1, -0x7F90($at)
    ctx->pc = 0x1a8004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
label_1a8008:
    // 0x1a8008: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a800c:
    // 0x1a800c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1a800cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1a8010:
    // 0x1a8010: 0x8c248078  lw          $a0, -0x7F88($at)
    ctx->pc = 0x1a8010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934648)));
label_1a8014:
    // 0x1a8014: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8018:
    // 0x1a8018: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1a8018u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a801c:
    // 0x1a801c: 0x8c23807c  lw          $v1, -0x7F84($at)
    ctx->pc = 0x1a801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934652)));
label_1a8020:
    // 0x1a8020: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8024:
    // 0x1a8024: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a8024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a8028:
    // 0x1a8028: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_1a802c:
    // 0x1a802c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a802cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8030:
    // 0x1a8030: 0xac258070  sw          $a1, -0x7F90($at)
    ctx->pc = 0x1a8030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934640), GPR_U32(ctx, 5));
label_1a8034:
    // 0x1a8034: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8038:
    // 0x1a8038: 0xac248078  sw          $a0, -0x7F88($at)
    ctx->pc = 0x1a8038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934648), GPR_U32(ctx, 4));
label_1a803c:
    // 0x1a803c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8040:
    // 0x1a8040: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1a8044:
    if (ctx->pc == 0x1A8044u) {
        ctx->pc = 0x1A8044u;
            // 0x1a8044: 0xac23807c  sw          $v1, -0x7F84($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934652), GPR_U32(ctx, 3));
        ctx->pc = 0x1A8048u;
        goto label_1a8048;
    }
    ctx->pc = 0x1A8040u;
    {
        const bool branch_taken_0x1a8040 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8040u;
            // 0x1a8044: 0xac23807c  sw          $v1, -0x7F84($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8040) {
            ctx->pc = 0x1A8050u;
            goto label_1a8050;
        }
    }
    ctx->pc = 0x1A8048u;
label_1a8048:
    // 0x1a8048: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a804c:
    // 0x1a804c: 0xac208074  sw          $zero, -0x7F8C($at)
    ctx->pc = 0x1a804cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934644), GPR_U32(ctx, 0));
label_1a8050:
    // 0x1a8050: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8054:
    // 0x1a8054: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x1a8054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_1a8058:
    // 0x1a8058: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1a8058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a805c:
    // 0x1a805c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1a8060:
    if (ctx->pc == 0x1A8060u) {
        ctx->pc = 0x1A8064u;
        goto label_1a8064;
    }
    ctx->pc = 0x1A805Cu;
    {
        const bool branch_taken_0x1a805c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a805c) {
            ctx->pc = 0x1A8070u;
            goto label_1a8070;
        }
    }
    ctx->pc = 0x1A8064u;
label_1a8064:
    // 0x1a8064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8068:
    // 0x1a8068: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a806c:
    // 0x1a806c: 0xac228074  sw          $v0, -0x7F8C($at)
    ctx->pc = 0x1a806cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934644), GPR_U32(ctx, 2));
label_1a8070:
    // 0x1a8070: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8074:
    // 0x1a8074: 0x8c228080  lw          $v0, -0x7F80($at)
    ctx->pc = 0x1a8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934656)));
label_1a8078:
    // 0x1a8078: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1a807c:
    if (ctx->pc == 0x1A807Cu) {
        ctx->pc = 0x1A8080u;
        goto label_1a8080;
    }
    ctx->pc = 0x1A8078u;
    {
        const bool branch_taken_0x1a8078 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a8078) {
            ctx->pc = 0x1A8088u;
            goto label_1a8088;
        }
    }
    ctx->pc = 0x1A8080u;
label_1a8080:
    // 0x1a8080: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a8084:
    // 0x1a8084: 0xac208080  sw          $zero, -0x7F80($at)
    ctx->pc = 0x1a8084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934656), GPR_U32(ctx, 0));
label_1a8088:
    // 0x1a8088: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a808c:
    // 0x1a808c: 0x8c228080  lw          $v0, -0x7F80($at)
    ctx->pc = 0x1a808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934656)));
label_1a8090:
    // 0x1a8090: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a8090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a8094:
    // 0x1a8094: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1a8098:
    if (ctx->pc == 0x1A8098u) {
        ctx->pc = 0x1A8098u;
            // 0x1a8098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A809Cu;
        goto label_1a809c;
    }
    ctx->pc = 0x1A8094u;
    {
        const bool branch_taken_0x1a8094 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8094u;
            // 0x1a8098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8094) {
            ctx->pc = 0x1A80A4u;
            goto label_1a80a4;
        }
    }
    ctx->pc = 0x1A809Cu;
label_1a809c:
    // 0x1a809c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a80a0:
    // 0x1a80a0: 0xac228080  sw          $v0, -0x7F80($at)
    ctx->pc = 0x1a80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934656), GPR_U32(ctx, 2));
label_1a80a4:
    // 0x1a80a4: 0xc064210  jal         func_190840
label_1a80a8:
    if (ctx->pc == 0x1A80A8u) {
        ctx->pc = 0x1A80ACu;
        goto label_1a80ac;
    }
    ctx->pc = 0x1A80A4u;
    SET_GPR_U32(ctx, 31, 0x1A80ACu);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80ACu; }
        if (ctx->pc != 0x1A80ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80ACu; }
        if (ctx->pc != 0x1A80ACu) { return; }
    }
    ctx->pc = 0x1A80ACu;
label_1a80ac:
    // 0x1a80ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a80b0:
    // 0x1a80b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a80b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a80b4:
    // 0x1a80b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1a80b8:
    // 0x1a80b8: 0xc0b5688  jal         func_2D5A20
label_1a80bc:
    if (ctx->pc == 0x1A80BCu) {
        ctx->pc = 0x1A80BCu;
            // 0x1a80bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A80C0u;
        goto label_1a80c0;
    }
    ctx->pc = 0x1A80B8u;
    SET_GPR_U32(ctx, 31, 0x1A80C0u);
    ctx->pc = 0x1A80BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80B8u;
            // 0x1a80bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80C0u; }
        if (ctx->pc != 0x1A80C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80C0u; }
        if (ctx->pc != 0x1A80C0u) { return; }
    }
    ctx->pc = 0x1A80C0u;
label_1a80c0:
    // 0x1a80c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a80c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a80c4:
    // 0x1a80c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a80c8:
    // 0x1a80c8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1a80cc:
    // 0x1a80cc: 0xc052d0c  jal         func_14B430
label_1a80d0:
    if (ctx->pc == 0x1A80D0u) {
        ctx->pc = 0x1A80D0u;
            // 0x1a80d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A80D4u;
        goto label_1a80d4;
    }
    ctx->pc = 0x1A80CCu;
    SET_GPR_U32(ctx, 31, 0x1A80D4u);
    ctx->pc = 0x1A80D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80CCu;
            // 0x1a80d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80D4u; }
        if (ctx->pc != 0x1A80D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80D4u; }
        if (ctx->pc != 0x1A80D4u) { return; }
    }
    ctx->pc = 0x1A80D4u;
label_1a80d4:
    // 0x1a80d4: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_1a80d8:
    if (ctx->pc == 0x1A80D8u) {
        ctx->pc = 0x1A80DCu;
        goto label_1a80dc;
    }
    ctx->pc = 0x1A80D4u;
    {
        const bool branch_taken_0x1a80d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a80d4) {
            ctx->pc = 0x1A82B8u;
            goto label_1a82b8;
        }
    }
    ctx->pc = 0x1A80DCu;
label_1a80dc:
    // 0x1a80dc: 0x8f828c1c  lw          $v0, -0x73E4($gp)
    ctx->pc = 0x1a80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a80e0:
    // 0x1a80e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1a80e4:
    if (ctx->pc == 0x1A80E4u) {
        ctx->pc = 0x1A80E8u;
        goto label_1a80e8;
    }
    ctx->pc = 0x1A80E0u;
    {
        const bool branch_taken_0x1a80e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a80e0) {
            ctx->pc = 0x1A8110u;
            goto label_1a8110;
        }
    }
    ctx->pc = 0x1A80E8u;
label_1a80e8:
    // 0x1a80e8: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a80ec:
    // 0x1a80ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a80f0:
    // 0x1a80f0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1a80f4:
    if (ctx->pc == 0x1A80F4u) {
        ctx->pc = 0x1A80F8u;
        goto label_1a80f8;
    }
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A8110u;
            goto label_1a8110;
        }
    }
    ctx->pc = 0x1A80F8u;
label_1a80f8:
    // 0x1a80f8: 0x8f848c20  lw          $a0, -0x73E0($gp)
    ctx->pc = 0x1a80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937632)));
label_1a80fc:
    // 0x1a80fc: 0xc0c0ff0  jal         func_303FC0
label_1a8100:
    if (ctx->pc == 0x1A8100u) {
        ctx->pc = 0x1A8100u;
            // 0x1a8100: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8104u;
        goto label_1a8104;
    }
    ctx->pc = 0x1A80FCu;
    SET_GPR_U32(ctx, 31, 0x1A8104u);
    ctx->pc = 0x1A8100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80FCu;
            // 0x1a8100: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303FC0u;
    if (runtime->hasFunction(0x303FC0u)) {
        auto targetFn = runtime->lookupFunction(0x303FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8104u; }
        if (ctx->pc != 0x1A8104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitSubGame__FiP11SubGameInfo_0x303fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8104u; }
        if (ctx->pc != 0x1A8104u) { return; }
    }
    ctx->pc = 0x1A8104u;
label_1a8104:
    // 0x1a8104: 0xc06a100  jal         func_1A8400
label_1a8108:
    if (ctx->pc == 0x1A8108u) {
        ctx->pc = 0x1A810Cu;
        goto label_1a810c;
    }
    ctx->pc = 0x1A8104u;
    SET_GPR_U32(ctx, 31, 0x1A810Cu);
    ctx->pc = 0x1A8400u;
    if (runtime->hasFunction(0x1A8400u)) {
        auto targetFn = runtime->lookupFunction(0x1A8400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A810Cu; }
        if (ctx->pc != 0x1A810Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDebugEnd__Fv_0x1a8400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A810Cu; }
        if (ctx->pc != 0x1A810Cu) { return; }
    }
    ctx->pc = 0x1A810Cu;
label_1a810c:
    // 0x1a810c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a810cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8110:
    // 0x1a8110: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a8114:
    // 0x1a8114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8118:
    // 0x1a8118: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
label_1a811c:
    if (ctx->pc == 0x1A811Cu) {
        ctx->pc = 0x1A8120u;
        goto label_1a8120;
    }
    ctx->pc = 0x1A8118u;
    {
        const bool branch_taken_0x1a8118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8118) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A8120u;
label_1a8120:
    // 0x1a8120: 0xc064220  jal         func_190880
label_1a8124:
    if (ctx->pc == 0x1A8124u) {
        ctx->pc = 0x1A8124u;
            // 0x1a8124: 0x8ed32e60  lw          $s3, 0x2E60($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11872)));
        ctx->pc = 0x1A8128u;
        goto label_1a8128;
    }
    ctx->pc = 0x1A8120u;
    SET_GPR_U32(ctx, 31, 0x1A8128u);
    ctx->pc = 0x1A8124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8120u;
            // 0x1a8124: 0x8ed32e60  lw          $s3, 0x2E60($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11872)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8128u; }
        if (ctx->pc != 0x1A8128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8128u; }
        if (ctx->pc != 0x1A8128u) { return; }
    }
    ctx->pc = 0x1A8128u;
label_1a8128:
    // 0x1a8128: 0x8ec52e5c  lw          $a1, 0x2E5C($s6)
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11868)));
label_1a812c:
    // 0x1a812c: 0x8e900030  lw          $s0, 0x30($s4)
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a8130:
    // 0x1a8130: 0xc0a0f58  jal         func_283D60
label_1a8134:
    if (ctx->pc == 0x1A8134u) {
        ctx->pc = 0x1A8134u;
            // 0x1a8134: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8138u;
        goto label_1a8138;
    }
    ctx->pc = 0x1A8130u;
    SET_GPR_U32(ctx, 31, 0x1A8138u);
    ctx->pc = 0x1A8134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8130u;
            // 0x1a8134: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8138u; }
        if (ctx->pc != 0x1A8138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8138u; }
        if (ctx->pc != 0x1A8138u) { return; }
    }
    ctx->pc = 0x1A8138u;
label_1a8138:
    // 0x1a8138: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
label_1a813c:
    if (ctx->pc == 0x1A813Cu) {
        ctx->pc = 0x1A8140u;
        goto label_1a8140;
    }
    ctx->pc = 0x1A8138u;
    {
        const bool branch_taken_0x1a8138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8138) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A8140u;
label_1a8140:
    // 0x1a8140: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_1a8144:
    if (ctx->pc == 0x1A8144u) {
        ctx->pc = 0x1A8148u;
        goto label_1a8148;
    }
    ctx->pc = 0x1A8140u;
    {
        const bool branch_taken_0x1a8140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8140) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A8148u;
label_1a8148:
    // 0x1a8148: 0x8f848c18  lw          $a0, -0x73E8($gp)
    ctx->pc = 0x1a8148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a814c:
    // 0x1a814c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8150:
    // 0x1a8150: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
label_1a8154:
    if (ctx->pc == 0x1A8154u) {
        ctx->pc = 0x1A8154u;
            // 0x1a8154: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1A8158u;
        goto label_1a8158;
    }
    ctx->pc = 0x1A8150u;
    {
        const bool branch_taken_0x1a8150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8150u;
            // 0x1a8154: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8150) {
            ctx->pc = 0x1A8244u;
            goto label_1a8244;
        }
    }
    ctx->pc = 0x1A8158u;
label_1a8158:
    // 0x1a8158: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
label_1a815c:
    if (ctx->pc == 0x1A815Cu) {
        ctx->pc = 0x1A815Cu;
            // 0x1a815c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A8160u;
        goto label_1a8160;
    }
    ctx->pc = 0x1A8158u;
    {
        const bool branch_taken_0x1a8158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8158u;
            // 0x1a815c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8158) {
            ctx->pc = 0x1A820Cu;
            goto label_1a820c;
        }
    }
    ctx->pc = 0x1A8160u;
label_1a8160:
    // 0x1a8160: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_1a8164:
    if (ctx->pc == 0x1A8164u) {
        ctx->pc = 0x1A8164u;
            // 0x1a8164: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A8168u;
        goto label_1a8168;
    }
    ctx->pc = 0x1A8160u;
    {
        const bool branch_taken_0x1a8160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8160u;
            // 0x1a8164: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8160) {
            ctx->pc = 0x1A81C8u;
            goto label_1a81c8;
        }
    }
    ctx->pc = 0x1A8168u;
label_1a8168:
    // 0x1a8168: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1a816c:
    if (ctx->pc == 0x1A816Cu) {
        ctx->pc = 0x1A8170u;
        goto label_1a8170;
    }
    ctx->pc = 0x1A8168u;
    {
        const bool branch_taken_0x1a8168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8168) {
            ctx->pc = 0x1A8190u;
            goto label_1a8190;
        }
    }
    ctx->pc = 0x1A8170u;
label_1a8170:
    // 0x1a8170: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a8174:
    if (ctx->pc == 0x1A8174u) {
        ctx->pc = 0x1A8174u;
            // 0x1a8174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8178u;
        goto label_1a8178;
    }
    ctx->pc = 0x1A8170u;
    {
        const bool branch_taken_0x1a8170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8170u;
            // 0x1a8174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8170) {
            ctx->pc = 0x1A8180u;
            goto label_1a8180;
        }
    }
    ctx->pc = 0x1A8178u;
label_1a8178:
    // 0x1a8178: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a817c:
    if (ctx->pc == 0x1A817Cu) {
        ctx->pc = 0x1A817Cu;
            // 0x1a817c: 0x8f838c1c  lw          $v1, -0x73E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
        ctx->pc = 0x1A8180u;
        goto label_1a8180;
    }
    ctx->pc = 0x1A8178u;
    {
        const bool branch_taken_0x1a8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8178u;
            // 0x1a817c: 0x8f838c1c  lw          $v1, -0x73E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8178) {
            ctx->pc = 0x1A8274u;
            goto label_1a8274;
        }
    }
    ctx->pc = 0x1A8180u;
label_1a8180:
    // 0x1a8180: 0xc06c118  jal         func_1B0460
label_1a8184:
    if (ctx->pc == 0x1A8184u) {
        ctx->pc = 0x1A8188u;
        goto label_1a8188;
    }
    ctx->pc = 0x1A8180u;
    SET_GPR_U32(ctx, 31, 0x1A8188u);
    ctx->pc = 0x1B0460u;
    if (runtime->hasFunction(0x1B0460u)) {
        auto targetFn = runtime->lookupFunction(0x1B0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8188u; }
        if (ctx->pc != 0x1A8188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearAllParts__8CEditMapFv_0x1b0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8188u; }
        if (ctx->pc != 0x1A8188u) { return; }
    }
    ctx->pc = 0x1A8188u;
label_1a8188:
    // 0x1a8188: 0x10000039  b           . + 4 + (0x39 << 2)
label_1a818c:
    if (ctx->pc == 0x1A818Cu) {
        ctx->pc = 0x1A8190u;
        goto label_1a8190;
    }
    ctx->pc = 0x1A8188u;
    {
        const bool branch_taken_0x1a8188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8188) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A8190u;
label_1a8190:
    // 0x1a8190: 0xc06bf8c  jal         func_1AFE30
label_1a8194:
    if (ctx->pc == 0x1A8194u) {
        ctx->pc = 0x1A8198u;
        goto label_1a8198;
    }
    ctx->pc = 0x1A8190u;
    SET_GPR_U32(ctx, 31, 0x1A8198u);
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8198u; }
        if (ctx->pc != 0x1A8198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8198u; }
        if (ctx->pc != 0x1A8198u) { return; }
    }
    ctx->pc = 0x1A8198u;
label_1a8198:
    // 0x1a8198: 0x8f878c28  lw          $a3, -0x73D8($gp)
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937640)));
label_1a819c:
    // 0x1a819c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a81a0:
    // 0x1a81a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a81a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a81a4:
    // 0x1a81a4: 0x27a41450  addiu       $a0, $sp, 0x1450
    ctx->pc = 0x1a81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5200));
label_1a81a8:
    // 0x1a81a8: 0xc04a234  jal         func_1288D0
label_1a81ac:
    if (ctx->pc == 0x1A81ACu) {
        ctx->pc = 0x1A81ACu;
            // 0x1a81ac: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
        ctx->pc = 0x1A81B0u;
        goto label_1a81b0;
    }
    ctx->pc = 0x1A81A8u;
    SET_GPR_U32(ctx, 31, 0x1A81B0u);
    ctx->pc = 0x1A81ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81A8u;
            // 0x1a81ac: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81B0u; }
        if (ctx->pc != 0x1A81B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81B0u; }
        if (ctx->pc != 0x1A81B0u) { return; }
    }
    ctx->pc = 0x1A81B0u;
label_1a81b0:
    // 0x1a81b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a81b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a81b4:
    // 0x1a81b4: 0x27a41450  addiu       $a0, $sp, 0x1450
    ctx->pc = 0x1a81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5200));
label_1a81b8:
    // 0x1a81b8: 0xc0526fc  jal         func_149BF0
label_1a81bc:
    if (ctx->pc == 0x1A81BCu) {
        ctx->pc = 0x1A81BCu;
            // 0x1a81bc: 0x24065510  addiu       $a2, $zero, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21776));
        ctx->pc = 0x1A81C0u;
        goto label_1a81c0;
    }
    ctx->pc = 0x1A81B8u;
    SET_GPR_U32(ctx, 31, 0x1A81C0u);
    ctx->pc = 0x1A81BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81B8u;
            // 0x1a81bc: 0x24065510  addiu       $a2, $zero, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149BF0u;
    if (runtime->hasFunction(0x149BF0u)) {
        auto targetFn = runtime->lookupFunction(0x149BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81C0u; }
        if (ctx->pc != 0x1A81C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WriteFile__FPcPvi_0x149bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81C0u; }
        if (ctx->pc != 0x1A81C0u) { return; }
    }
    ctx->pc = 0x1A81C0u;
label_1a81c0:
    // 0x1a81c0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1a81c4:
    if (ctx->pc == 0x1A81C4u) {
        ctx->pc = 0x1A81C8u;
        goto label_1a81c8;
    }
    ctx->pc = 0x1A81C0u;
    {
        const bool branch_taken_0x1a81c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a81c0) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A81C8u;
label_1a81c8:
    // 0x1a81c8: 0x8f878c2c  lw          $a3, -0x73D4($gp)
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937644)));
label_1a81cc:
    // 0x1a81cc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a81ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a81d0:
    // 0x1a81d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a81d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a81d4:
    // 0x1a81d4: 0x27a41450  addiu       $a0, $sp, 0x1450
    ctx->pc = 0x1a81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5200));
label_1a81d8:
    // 0x1a81d8: 0xc04a234  jal         func_1288D0
label_1a81dc:
    if (ctx->pc == 0x1A81DCu) {
        ctx->pc = 0x1A81DCu;
            // 0x1a81dc: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
        ctx->pc = 0x1A81E0u;
        goto label_1a81e0;
    }
    ctx->pc = 0x1A81D8u;
    SET_GPR_U32(ctx, 31, 0x1A81E0u);
    ctx->pc = 0x1A81DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81D8u;
            // 0x1a81dc: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81E0u; }
        if (ctx->pc != 0x1A81E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81E0u; }
        if (ctx->pc != 0x1A81E0u) { return; }
    }
    ctx->pc = 0x1A81E0u;
label_1a81e0:
    // 0x1a81e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a81e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a81e4:
    // 0x1a81e4: 0x27a41450  addiu       $a0, $sp, 0x1450
    ctx->pc = 0x1a81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5200));
label_1a81e8:
    // 0x1a81e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a81e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a81ec:
    // 0x1a81ec: 0xc0524dc  jal         func_149370
label_1a81f0:
    if (ctx->pc == 0x1A81F0u) {
        ctx->pc = 0x1A81F0u;
            // 0x1a81f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A81F4u;
        goto label_1a81f4;
    }
    ctx->pc = 0x1A81ECu;
    SET_GPR_U32(ctx, 31, 0x1A81F4u);
    ctx->pc = 0x1A81F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81ECu;
            // 0x1a81f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81F4u; }
        if (ctx->pc != 0x1A81F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81F4u; }
        if (ctx->pc != 0x1A81F4u) { return; }
    }
    ctx->pc = 0x1A81F4u;
label_1a81f4:
    // 0x1a81f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1a81f8:
    if (ctx->pc == 0x1A81F8u) {
        ctx->pc = 0x1A81FCu;
        goto label_1a81fc;
    }
    ctx->pc = 0x1A81F4u;
    {
        const bool branch_taken_0x1a81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a81f4) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A81FCu;
label_1a81fc:
    // 0x1a81fc: 0xc06bfd4  jal         func_1AFF50
label_1a8200:
    if (ctx->pc == 0x1A8200u) {
        ctx->pc = 0x1A8204u;
        goto label_1a8204;
    }
    ctx->pc = 0x1A81FCu;
    SET_GPR_U32(ctx, 31, 0x1A8204u);
    ctx->pc = 0x1AFF50u;
    if (runtime->hasFunction(0x1AFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1AFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8204u; }
        if (ctx->pc != 0x1A8204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataLoad__Fv_0x1aff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8204u; }
        if (ctx->pc != 0x1A8204u) { return; }
    }
    ctx->pc = 0x1A8204u;
label_1a8204:
    // 0x1a8204: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1a8208:
    if (ctx->pc == 0x1A8208u) {
        ctx->pc = 0x1A820Cu;
        goto label_1a820c;
    }
    ctx->pc = 0x1A8204u;
    {
        const bool branch_taken_0x1a8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8204) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A820Cu;
label_1a820c:
    // 0x1a820c: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1a820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a8210:
    // 0x1a8210: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a8210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a8214:
    // 0x1a8214: 0x8f868c30  lw          $a2, -0x73D0($gp)
    ctx->pc = 0x1a8214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
label_1a8218:
    // 0x1a8218: 0xc0aa8dc  jal         func_2AA370
label_1a821c:
    if (ctx->pc == 0x1A821Cu) {
        ctx->pc = 0x1A821Cu;
            // 0x1a821c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8220u;
        goto label_1a8220;
    }
    ctx->pc = 0x1A8218u;
    SET_GPR_U32(ctx, 31, 0x1A8220u);
    ctx->pc = 0x1A821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8218u;
            // 0x1a821c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA370u;
    if (runtime->hasFunction(0x2AA370u)) {
        auto targetFn = runtime->lookupFunction(0x2AA370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8220u; }
        if (ctx->pc != 0x1A8220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgGetContintionFlag__9CEditDataFiiPc_0x2aa370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8220u; }
        if (ctx->pc != 0x1A8220u) { return; }
    }
    ctx->pc = 0x1A8220u;
label_1a8220:
    // 0x1a8220: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1a8220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a8224:
    // 0x1a8224: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a8224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8228:
    // 0x1a8228: 0x8f868c30  lw          $a2, -0x73D0($gp)
    ctx->pc = 0x1a8228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
label_1a822c:
    // 0x1a822c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a822cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a8230:
    // 0x1a8230: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a8230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a8234:
    // 0x1a8234: 0xc0aa89c  jal         func_2AA270
label_1a8238:
    if (ctx->pc == 0x1A8238u) {
        ctx->pc = 0x1A8238u;
            // 0x1a8238: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1A823Cu;
        goto label_1a823c;
    }
    ctx->pc = 0x1A8234u;
    SET_GPR_U32(ctx, 31, 0x1A823Cu);
    ctx->pc = 0x1A8238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8234u;
            // 0x1a8238: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA270u;
    if (runtime->hasFunction(0x2AA270u)) {
        auto targetFn = runtime->lookupFunction(0x2AA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A823Cu; }
        if (ctx->pc != 0x1A823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetContintionFlag__9CEditDataFiii_0x2aa270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A823Cu; }
        if (ctx->pc != 0x1A823Cu) { return; }
    }
    ctx->pc = 0x1A823Cu;
label_1a823c:
    // 0x1a823c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a8240:
    if (ctx->pc == 0x1A8240u) {
        ctx->pc = 0x1A8244u;
        goto label_1a8244;
    }
    ctx->pc = 0x1A823Cu;
    {
        const bool branch_taken_0x1a823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a823c) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A8244u;
label_1a8244:
    // 0x1a8244: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1a8248:
    if (ctx->pc == 0x1A8248u) {
        ctx->pc = 0x1A824Cu;
        goto label_1a824c;
    }
    ctx->pc = 0x1A8244u;
    {
        const bool branch_taken_0x1a8244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8244) {
            ctx->pc = 0x1A8270u;
            goto label_1a8270;
        }
    }
    ctx->pc = 0x1A824Cu;
label_1a824c:
    // 0x1a824c: 0x8f858c34  lw          $a1, -0x73CC($gp)
    ctx->pc = 0x1a824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937652)));
label_1a8250:
    // 0x1a8250: 0xc057128  jal         func_15C4A0
label_1a8254:
    if (ctx->pc == 0x1A8254u) {
        ctx->pc = 0x1A8254u;
            // 0x1a8254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8258u;
        goto label_1a8258;
    }
    ctx->pc = 0x1A8250u;
    SET_GPR_U32(ctx, 31, 0x1A8258u);
    ctx->pc = 0x1A8254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8250u;
            // 0x1a8254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C4A0u;
    if (runtime->hasFunction(0x15C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8258u; }
        if (ctx->pc != 0x1A8258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFlag__12CMapFlagDataFi_0x15c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8258u; }
        if (ctx->pc != 0x1A8258u) { return; }
    }
    ctx->pc = 0x1A8258u;
label_1a8258:
    // 0x1a8258: 0x8f858c34  lw          $a1, -0x73CC($gp)
    ctx->pc = 0x1a8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937652)));
label_1a825c:
    // 0x1a825c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a825cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8260:
    // 0x1a8260: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a8260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a8264:
    // 0x1a8264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8268:
    // 0x1a8268: 0xc057108  jal         func_15C420
label_1a826c:
    if (ctx->pc == 0x1A826Cu) {
        ctx->pc = 0x1A826Cu;
            // 0x1a826c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1A8270u;
        goto label_1a8270;
    }
    ctx->pc = 0x1A8268u;
    SET_GPR_U32(ctx, 31, 0x1A8270u);
    ctx->pc = 0x1A826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8268u;
            // 0x1a826c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C420u;
    if (runtime->hasFunction(0x15C420u)) {
        auto targetFn = runtime->lookupFunction(0x15C420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8270u; }
        if (ctx->pc != 0x1A8270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFlag__12CMapFlagDataFii_0x15c420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8270u; }
        if (ctx->pc != 0x1A8270u) { return; }
    }
    ctx->pc = 0x1A8270u;
label_1a8270:
    // 0x1a8270: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a8274:
    // 0x1a8274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8278:
    // 0x1a8278: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1a827c:
    if (ctx->pc == 0x1A827Cu) {
        ctx->pc = 0x1A8280u;
        goto label_1a8280;
    }
    ctx->pc = 0x1A8278u;
    {
        const bool branch_taken_0x1a8278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8278) {
            ctx->pc = 0x1A82B8u;
            goto label_1a82b8;
        }
    }
    ctx->pc = 0x1A8280u;
label_1a8280:
    // 0x1a8280: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x1a8280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a8284:
    // 0x1a8284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8288:
    // 0x1a8288: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1a828c:
    if (ctx->pc == 0x1A828Cu) {
        ctx->pc = 0x1A8290u;
        goto label_1a8290;
    }
    ctx->pc = 0x1A8288u;
    {
        const bool branch_taken_0x1a8288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8288) {
            ctx->pc = 0x1A82B0u;
            goto label_1a82b0;
        }
    }
    ctx->pc = 0x1A8290u;
label_1a8290:
    // 0x1a8290: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a8294:
    if (ctx->pc == 0x1A8294u) {
        ctx->pc = 0x1A8298u;
        goto label_1a8298;
    }
    ctx->pc = 0x1A8290u;
    {
        const bool branch_taken_0x1a8290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8290) {
            ctx->pc = 0x1A82A0u;
            goto label_1a82a0;
        }
    }
    ctx->pc = 0x1A8298u;
label_1a8298:
    // 0x1a8298: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a829c:
    if (ctx->pc == 0x1A829Cu) {
        ctx->pc = 0x1A82A0u;
        goto label_1a82a0;
    }
    ctx->pc = 0x1A8298u;
    {
        const bool branch_taken_0x1a8298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8298) {
            ctx->pc = 0x1A82B8u;
            goto label_1a82b8;
        }
    }
    ctx->pc = 0x1A82A0u;
label_1a82a0:
    // 0x1a82a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a82a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a82a4:
    // 0x1a82a4: 0x8f828c24  lw          $v0, -0x73DC($gp)
    ctx->pc = 0x1a82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
label_1a82a8:
    // 0x1a82a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a82ac:
    if (ctx->pc == 0x1A82ACu) {
        ctx->pc = 0x1A82ACu;
            // 0x1a82ac: 0xae820038  sw          $v0, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1A82B0u;
        goto label_1a82b0;
    }
    ctx->pc = 0x1A82A8u;
    {
        const bool branch_taken_0x1a82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82A8u;
            // 0x1a82ac: 0xae820038  sw          $v0, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82a8) {
            ctx->pc = 0x1A82B8u;
            goto label_1a82b8;
        }
    }
    ctx->pc = 0x1A82B0u;
label_1a82b0:
    // 0x1a82b0: 0xc06a6a4  jal         func_1A9A90
label_1a82b4:
    if (ctx->pc == 0x1A82B4u) {
        ctx->pc = 0x1A82B8u;
        goto label_1a82b8;
    }
    ctx->pc = 0x1A82B0u;
    SET_GPR_U32(ctx, 31, 0x1A82B8u);
    ctx->pc = 0x1A9A90u;
    if (runtime->hasFunction(0x1A9A90u)) {
        auto targetFn = runtime->lookupFunction(0x1A9A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82B8u; }
        if (ctx->pc != 0x1A82B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGyorace__Fv_0x1a9a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82B8u; }
        if (ctx->pc != 0x1A82B8u) { return; }
    }
    ctx->pc = 0x1A82B8u;
label_1a82b8:
    // 0x1a82b8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a82bc:
    // 0x1a82bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a82c0:
    // 0x1a82c0: 0xc052d0c  jal         func_14B430
label_1a82c4:
    if (ctx->pc == 0x1A82C4u) {
        ctx->pc = 0x1A82C4u;
            // 0x1a82c4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A82C8u;
        goto label_1a82c8;
    }
    ctx->pc = 0x1A82C0u;
    SET_GPR_U32(ctx, 31, 0x1A82C8u);
    ctx->pc = 0x1A82C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82C0u;
            // 0x1a82c4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82C8u; }
        if (ctx->pc != 0x1A82C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82C8u; }
        if (ctx->pc != 0x1A82C8u) { return; }
    }
    ctx->pc = 0x1A82C8u;
label_1a82c8:
    // 0x1a82c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1a82cc:
    if (ctx->pc == 0x1A82CCu) {
        ctx->pc = 0x1A82D0u;
        goto label_1a82d0;
    }
    ctx->pc = 0x1A82C8u;
    {
        const bool branch_taken_0x1a82c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a82c8) {
            ctx->pc = 0x1A8338u;
            goto label_1a8338;
        }
    }
    ctx->pc = 0x1A82D0u;
label_1a82d0:
    // 0x1a82d0: 0x8f838c1c  lw          $v1, -0x73E4($gp)
    ctx->pc = 0x1a82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a82d4:
    // 0x1a82d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a82d8:
    // 0x1a82d8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1a82dc:
    if (ctx->pc == 0x1A82DCu) {
        ctx->pc = 0x1A82E0u;
        goto label_1a82e0;
    }
    ctx->pc = 0x1A82D8u;
    {
        const bool branch_taken_0x1a82d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a82d8) {
            ctx->pc = 0x1A8338u;
            goto label_1a8338;
        }
    }
    ctx->pc = 0x1A82E0u;
label_1a82e0:
    // 0x1a82e0: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a82e4:
    // 0x1a82e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a82e8:
    // 0x1a82e8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1a82ec:
    if (ctx->pc == 0x1A82ECu) {
        ctx->pc = 0x1A82F0u;
        goto label_1a82f0;
    }
    ctx->pc = 0x1A82E8u;
    {
        const bool branch_taken_0x1a82e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a82e8) {
            ctx->pc = 0x1A8338u;
            goto label_1a8338;
        }
    }
    ctx->pc = 0x1A82F0u;
label_1a82f0:
    // 0x1a82f0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a82f4:
    // 0x1a82f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a82f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a82f8:
    // 0x1a82f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a82f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a82fc:
    // 0x1a82fc: 0xc0aa8dc  jal         func_2AA370
label_1a8300:
    if (ctx->pc == 0x1A8300u) {
        ctx->pc = 0x1A8300u;
            // 0x1a8300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8304u;
        goto label_1a8304;
    }
    ctx->pc = 0x1A82FCu;
    SET_GPR_U32(ctx, 31, 0x1A8304u);
    ctx->pc = 0x1A8300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82FCu;
            // 0x1a8300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA370u;
    if (runtime->hasFunction(0x2AA370u)) {
        auto targetFn = runtime->lookupFunction(0x2AA370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8304u; }
        if (ctx->pc != 0x1A8304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgGetContintionFlag__9CEditDataFiiPc_0x2aa370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8304u; }
        if (ctx->pc != 0x1A8304u) { return; }
    }
    ctx->pc = 0x1A8304u;
label_1a8304:
    // 0x1a8304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8308:
    // 0x1a8308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a8308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a830c:
    // 0x1a830c: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1a830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a8310:
    // 0x1a8310: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1a8310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1a8314:
    // 0x1a8314: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a8314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a8318:
    // 0x1a8318: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a8318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a831c:
    // 0x1a831c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1a831cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a8320:
    // 0x1a8320: 0xc0aa89c  jal         func_2AA270
label_1a8324:
    if (ctx->pc == 0x1A8324u) {
        ctx->pc = 0x1A8324u;
            // 0x1a8324: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8328u;
        goto label_1a8328;
    }
    ctx->pc = 0x1A8320u;
    SET_GPR_U32(ctx, 31, 0x1A8328u);
    ctx->pc = 0x1A8324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8320u;
            // 0x1a8324: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA270u;
    if (runtime->hasFunction(0x2AA270u)) {
        auto targetFn = runtime->lookupFunction(0x2AA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8328u; }
        if (ctx->pc != 0x1A8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetContintionFlag__9CEditDataFiii_0x2aa270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8328u; }
        if (ctx->pc != 0x1A8328u) { return; }
    }
    ctx->pc = 0x1A8328u;
label_1a8328:
    // 0x1a8328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a832c:
    // 0x1a832c: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x1a832cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
label_1a8330:
    // 0x1a8330: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1a8334:
    if (ctx->pc == 0x1A8334u) {
        ctx->pc = 0x1A8338u;
        goto label_1a8338;
    }
    ctx->pc = 0x1A8330u;
    {
        const bool branch_taken_0x1a8330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8330) {
            ctx->pc = 0x1A830Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a830c;
        }
    }
    ctx->pc = 0x1A8338u;
label_1a8338:
    // 0x1a8338: 0x8f828c1c  lw          $v0, -0x73E4($gp)
    ctx->pc = 0x1a8338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
label_1a833c:
    // 0x1a833c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1a8340:
    if (ctx->pc == 0x1A8340u) {
        ctx->pc = 0x1A8344u;
        goto label_1a8344;
    }
    ctx->pc = 0x1A833Cu;
    {
        const bool branch_taken_0x1a833c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a833c) {
            ctx->pc = 0x1A839Cu;
            goto label_1a839c;
        }
    }
    ctx->pc = 0x1A8344u;
label_1a8344:
    // 0x1a8344: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x1a8344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
label_1a8348:
    // 0x1a8348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a834c:
    // 0x1a834c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1a8350:
    if (ctx->pc == 0x1A8350u) {
        ctx->pc = 0x1A8350u;
            // 0x1a8350: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A8354u;
        goto label_1a8354;
    }
    ctx->pc = 0x1A834Cu;
    {
        const bool branch_taken_0x1a834c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A834Cu;
            // 0x1a8350: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a834c) {
            ctx->pc = 0x1A839Cu;
            goto label_1a839c;
        }
    }
    ctx->pc = 0x1A8354u;
label_1a8354:
    // 0x1a8354: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a8354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a8358:
    // 0x1a8358: 0xc052d0c  jal         func_14B430
label_1a835c:
    if (ctx->pc == 0x1A835Cu) {
        ctx->pc = 0x1A835Cu;
            // 0x1a835c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A8360u;
        goto label_1a8360;
    }
    ctx->pc = 0x1A8358u;
    SET_GPR_U32(ctx, 31, 0x1A8360u);
    ctx->pc = 0x1A835Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8358u;
            // 0x1a835c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8360u; }
        if (ctx->pc != 0x1A8360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8360u; }
        if (ctx->pc != 0x1A8360u) { return; }
    }
    ctx->pc = 0x1A8360u;
label_1a8360:
    // 0x1a8360: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a8364:
    if (ctx->pc == 0x1A8364u) {
        ctx->pc = 0x1A8368u;
        goto label_1a8368;
    }
    ctx->pc = 0x1A8360u;
    {
        const bool branch_taken_0x1a8360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8360) {
            ctx->pc = 0x1A837Cu;
            goto label_1a837c;
        }
    }
    ctx->pc = 0x1A8368u;
label_1a8368:
    // 0x1a8368: 0x8f8580c8  lw          $a1, -0x7F38($gp)
    ctx->pc = 0x1a8368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
label_1a836c:
    // 0x1a836c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a836cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a8370:
    // 0x1a8370: 0xc0b1f3c  jal         func_2C7CF0
label_1a8374:
    if (ctx->pc == 0x1A8374u) {
        ctx->pc = 0x1A8374u;
            // 0x1a8374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8378u;
        goto label_1a8378;
    }
    ctx->pc = 0x1A8370u;
    SET_GPR_U32(ctx, 31, 0x1A8378u);
    ctx->pc = 0x1A8374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8370u;
            // 0x1a8374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8378u; }
        if (ctx->pc != 0x1A8378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8378u; }
        if (ctx->pc != 0x1A8378u) { return; }
    }
    ctx->pc = 0x1A8378u;
label_1a8378:
    // 0x1a8378: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a837c:
    // 0x1a837c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a837cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a8380:
    // 0x1a8380: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a8384:
    // 0x1a8384: 0xc052d0c  jal         func_14B430
label_1a8388:
    if (ctx->pc == 0x1A8388u) {
        ctx->pc = 0x1A8388u;
            // 0x1a8388: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A838Cu;
        goto label_1a838c;
    }
    ctx->pc = 0x1A8384u;
    SET_GPR_U32(ctx, 31, 0x1A838Cu);
    ctx->pc = 0x1A8388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8384u;
            // 0x1a8388: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A838Cu; }
        if (ctx->pc != 0x1A838Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A838Cu; }
        if (ctx->pc != 0x1A838Cu) { return; }
    }
    ctx->pc = 0x1A838Cu;
label_1a838c:
    // 0x1a838c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8390:
    if (ctx->pc == 0x1A8390u) {
        ctx->pc = 0x1A8394u;
        goto label_1a8394;
    }
    ctx->pc = 0x1A838Cu;
    {
        const bool branch_taken_0x1a838c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a838c) {
            ctx->pc = 0x1A839Cu;
            goto label_1a839c;
        }
    }
    ctx->pc = 0x1A8394u;
label_1a8394:
    // 0x1a8394: 0xc0b7d00  jal         func_2DF400
label_1a8398:
    if (ctx->pc == 0x1A8398u) {
        ctx->pc = 0x1A839Cu;
        goto label_1a839c;
    }
    ctx->pc = 0x1A8394u;
    SET_GPR_U32(ctx, 31, 0x1A839Cu);
    ctx->pc = 0x2DF400u;
    if (runtime->hasFunction(0x2DF400u)) {
        auto targetFn = runtime->lookupFunction(0x2DF400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A839Cu; }
        if (ctx->pc != 0x1A839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadMapScript__Fv_0x2df400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A839Cu; }
        if (ctx->pc != 0x1A839Cu) { return; }
    }
    ctx->pc = 0x1A839Cu;
label_1a839c:
    // 0x1a839c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_1a83a0:
    if (ctx->pc == 0x1A83A0u) {
        ctx->pc = 0x1A83A0u;
            // 0x1a83a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A83A4u;
        goto label_1a83a4;
    }
    ctx->pc = 0x1A839Cu;
    {
        const bool branch_taken_0x1a839c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A83A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A839Cu;
            // 0x1a83a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a839c) {
            ctx->pc = 0x1A83B8u;
            goto label_1a83b8;
        }
    }
    ctx->pc = 0x1A83A4u;
label_1a83a4:
    // 0x1a83a4: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1a83a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_1a83a8:
    // 0x1a83a8: 0xc052d0c  jal         func_14B430
label_1a83ac:
    if (ctx->pc == 0x1A83ACu) {
        ctx->pc = 0x1A83ACu;
            // 0x1a83ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A83B0u;
        goto label_1a83b0;
    }
    ctx->pc = 0x1A83A8u;
    SET_GPR_U32(ctx, 31, 0x1A83B0u);
    ctx->pc = 0x1A83ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83A8u;
            // 0x1a83ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83B0u; }
        if (ctx->pc != 0x1A83B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83B0u; }
        if (ctx->pc != 0x1A83B0u) { return; }
    }
    ctx->pc = 0x1A83B0u;
label_1a83b0:
    // 0x1a83b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a83b4:
    if (ctx->pc == 0x1A83B4u) {
        ctx->pc = 0x1A83B4u;
            // 0x1a83b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A83B8u;
        goto label_1a83b8;
    }
    ctx->pc = 0x1A83B0u;
    {
        const bool branch_taken_0x1a83b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83B0u;
            // 0x1a83b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83b0) {
            ctx->pc = 0x1A83C4u;
            goto label_1a83c4;
        }
    }
    ctx->pc = 0x1A83B8u;
label_1a83b8:
    // 0x1a83b8: 0xc06a100  jal         func_1A8400
label_1a83bc:
    if (ctx->pc == 0x1A83BCu) {
        ctx->pc = 0x1A83C0u;
        goto label_1a83c0;
    }
    ctx->pc = 0x1A83B8u;
    SET_GPR_U32(ctx, 31, 0x1A83C0u);
    ctx->pc = 0x1A8400u;
    if (runtime->hasFunction(0x1A8400u)) {
        auto targetFn = runtime->lookupFunction(0x1A8400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83C0u; }
        if (ctx->pc != 0x1A83C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDebugEnd__Fv_0x1a8400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A83C0u; }
        if (ctx->pc != 0x1A83C0u) { return; }
    }
    ctx->pc = 0x1A83C0u;
label_1a83c0:
    // 0x1a83c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a83c4:
    // 0x1a83c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a83c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a83c8:
    // 0x1a83c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a83c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a83cc:
    // 0x1a83cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a83ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a83d0:
    // 0x1a83d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a83d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a83d4:
    // 0x1a83d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a83d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a83d8:
    // 0x1a83d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a83d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a83dc:
    // 0x1a83dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a83dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a83e0:
    // 0x1a83e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a83e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a83e4:
    // 0x1a83e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a83e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a83e8:
    // 0x1a83e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a83e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a83ec:
    // 0x1a83ec: 0x3e00008  jr          $ra
label_1a83f0:
    if (ctx->pc == 0x1A83F0u) {
        ctx->pc = 0x1A83F0u;
            // 0x1a83f0: 0x27bd14a0  addiu       $sp, $sp, 0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5280));
        ctx->pc = 0x1A83F4u;
        goto label_fallthrough_0x1a83ec;
    }
    ctx->pc = 0x1A83ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A83F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83ECu;
            // 0x1a83f0: 0x27bd14a0  addiu       $sp, $sp, 0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a83ec:
    ctx->pc = 0x1A83F4u;
}
