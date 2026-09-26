#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharaControl__FP6CSceneP11CPadControl
// Address: 0x3149a0 - 0x31534c
void CharaControl__FP6CSceneP11CPadControl_0x3149a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharaControl__FP6CSceneP11CPadControl_0x3149a0");
#endif

    switch (ctx->pc) {
        case 0x3149a0u: goto label_3149a0;
        case 0x3149a4u: goto label_3149a4;
        case 0x3149a8u: goto label_3149a8;
        case 0x3149acu: goto label_3149ac;
        case 0x3149b0u: goto label_3149b0;
        case 0x3149b4u: goto label_3149b4;
        case 0x3149b8u: goto label_3149b8;
        case 0x3149bcu: goto label_3149bc;
        case 0x3149c0u: goto label_3149c0;
        case 0x3149c4u: goto label_3149c4;
        case 0x3149c8u: goto label_3149c8;
        case 0x3149ccu: goto label_3149cc;
        case 0x3149d0u: goto label_3149d0;
        case 0x3149d4u: goto label_3149d4;
        case 0x3149d8u: goto label_3149d8;
        case 0x3149dcu: goto label_3149dc;
        case 0x3149e0u: goto label_3149e0;
        case 0x3149e4u: goto label_3149e4;
        case 0x3149e8u: goto label_3149e8;
        case 0x3149ecu: goto label_3149ec;
        case 0x3149f0u: goto label_3149f0;
        case 0x3149f4u: goto label_3149f4;
        case 0x3149f8u: goto label_3149f8;
        case 0x3149fcu: goto label_3149fc;
        case 0x314a00u: goto label_314a00;
        case 0x314a04u: goto label_314a04;
        case 0x314a08u: goto label_314a08;
        case 0x314a0cu: goto label_314a0c;
        case 0x314a10u: goto label_314a10;
        case 0x314a14u: goto label_314a14;
        case 0x314a18u: goto label_314a18;
        case 0x314a1cu: goto label_314a1c;
        case 0x314a20u: goto label_314a20;
        case 0x314a24u: goto label_314a24;
        case 0x314a28u: goto label_314a28;
        case 0x314a2cu: goto label_314a2c;
        case 0x314a30u: goto label_314a30;
        case 0x314a34u: goto label_314a34;
        case 0x314a38u: goto label_314a38;
        case 0x314a3cu: goto label_314a3c;
        case 0x314a40u: goto label_314a40;
        case 0x314a44u: goto label_314a44;
        case 0x314a48u: goto label_314a48;
        case 0x314a4cu: goto label_314a4c;
        case 0x314a50u: goto label_314a50;
        case 0x314a54u: goto label_314a54;
        case 0x314a58u: goto label_314a58;
        case 0x314a5cu: goto label_314a5c;
        case 0x314a60u: goto label_314a60;
        case 0x314a64u: goto label_314a64;
        case 0x314a68u: goto label_314a68;
        case 0x314a6cu: goto label_314a6c;
        case 0x314a70u: goto label_314a70;
        case 0x314a74u: goto label_314a74;
        case 0x314a78u: goto label_314a78;
        case 0x314a7cu: goto label_314a7c;
        case 0x314a80u: goto label_314a80;
        case 0x314a84u: goto label_314a84;
        case 0x314a88u: goto label_314a88;
        case 0x314a8cu: goto label_314a8c;
        case 0x314a90u: goto label_314a90;
        case 0x314a94u: goto label_314a94;
        case 0x314a98u: goto label_314a98;
        case 0x314a9cu: goto label_314a9c;
        case 0x314aa0u: goto label_314aa0;
        case 0x314aa4u: goto label_314aa4;
        case 0x314aa8u: goto label_314aa8;
        case 0x314aacu: goto label_314aac;
        case 0x314ab0u: goto label_314ab0;
        case 0x314ab4u: goto label_314ab4;
        case 0x314ab8u: goto label_314ab8;
        case 0x314abcu: goto label_314abc;
        case 0x314ac0u: goto label_314ac0;
        case 0x314ac4u: goto label_314ac4;
        case 0x314ac8u: goto label_314ac8;
        case 0x314accu: goto label_314acc;
        case 0x314ad0u: goto label_314ad0;
        case 0x314ad4u: goto label_314ad4;
        case 0x314ad8u: goto label_314ad8;
        case 0x314adcu: goto label_314adc;
        case 0x314ae0u: goto label_314ae0;
        case 0x314ae4u: goto label_314ae4;
        case 0x314ae8u: goto label_314ae8;
        case 0x314aecu: goto label_314aec;
        case 0x314af0u: goto label_314af0;
        case 0x314af4u: goto label_314af4;
        case 0x314af8u: goto label_314af8;
        case 0x314afcu: goto label_314afc;
        case 0x314b00u: goto label_314b00;
        case 0x314b04u: goto label_314b04;
        case 0x314b08u: goto label_314b08;
        case 0x314b0cu: goto label_314b0c;
        case 0x314b10u: goto label_314b10;
        case 0x314b14u: goto label_314b14;
        case 0x314b18u: goto label_314b18;
        case 0x314b1cu: goto label_314b1c;
        case 0x314b20u: goto label_314b20;
        case 0x314b24u: goto label_314b24;
        case 0x314b28u: goto label_314b28;
        case 0x314b2cu: goto label_314b2c;
        case 0x314b30u: goto label_314b30;
        case 0x314b34u: goto label_314b34;
        case 0x314b38u: goto label_314b38;
        case 0x314b3cu: goto label_314b3c;
        case 0x314b40u: goto label_314b40;
        case 0x314b44u: goto label_314b44;
        case 0x314b48u: goto label_314b48;
        case 0x314b4cu: goto label_314b4c;
        case 0x314b50u: goto label_314b50;
        case 0x314b54u: goto label_314b54;
        case 0x314b58u: goto label_314b58;
        case 0x314b5cu: goto label_314b5c;
        case 0x314b60u: goto label_314b60;
        case 0x314b64u: goto label_314b64;
        case 0x314b68u: goto label_314b68;
        case 0x314b6cu: goto label_314b6c;
        case 0x314b70u: goto label_314b70;
        case 0x314b74u: goto label_314b74;
        case 0x314b78u: goto label_314b78;
        case 0x314b7cu: goto label_314b7c;
        case 0x314b80u: goto label_314b80;
        case 0x314b84u: goto label_314b84;
        case 0x314b88u: goto label_314b88;
        case 0x314b8cu: goto label_314b8c;
        case 0x314b90u: goto label_314b90;
        case 0x314b94u: goto label_314b94;
        case 0x314b98u: goto label_314b98;
        case 0x314b9cu: goto label_314b9c;
        case 0x314ba0u: goto label_314ba0;
        case 0x314ba4u: goto label_314ba4;
        case 0x314ba8u: goto label_314ba8;
        case 0x314bacu: goto label_314bac;
        case 0x314bb0u: goto label_314bb0;
        case 0x314bb4u: goto label_314bb4;
        case 0x314bb8u: goto label_314bb8;
        case 0x314bbcu: goto label_314bbc;
        case 0x314bc0u: goto label_314bc0;
        case 0x314bc4u: goto label_314bc4;
        case 0x314bc8u: goto label_314bc8;
        case 0x314bccu: goto label_314bcc;
        case 0x314bd0u: goto label_314bd0;
        case 0x314bd4u: goto label_314bd4;
        case 0x314bd8u: goto label_314bd8;
        case 0x314bdcu: goto label_314bdc;
        case 0x314be0u: goto label_314be0;
        case 0x314be4u: goto label_314be4;
        case 0x314be8u: goto label_314be8;
        case 0x314becu: goto label_314bec;
        case 0x314bf0u: goto label_314bf0;
        case 0x314bf4u: goto label_314bf4;
        case 0x314bf8u: goto label_314bf8;
        case 0x314bfcu: goto label_314bfc;
        case 0x314c00u: goto label_314c00;
        case 0x314c04u: goto label_314c04;
        case 0x314c08u: goto label_314c08;
        case 0x314c0cu: goto label_314c0c;
        case 0x314c10u: goto label_314c10;
        case 0x314c14u: goto label_314c14;
        case 0x314c18u: goto label_314c18;
        case 0x314c1cu: goto label_314c1c;
        case 0x314c20u: goto label_314c20;
        case 0x314c24u: goto label_314c24;
        case 0x314c28u: goto label_314c28;
        case 0x314c2cu: goto label_314c2c;
        case 0x314c30u: goto label_314c30;
        case 0x314c34u: goto label_314c34;
        case 0x314c38u: goto label_314c38;
        case 0x314c3cu: goto label_314c3c;
        case 0x314c40u: goto label_314c40;
        case 0x314c44u: goto label_314c44;
        case 0x314c48u: goto label_314c48;
        case 0x314c4cu: goto label_314c4c;
        case 0x314c50u: goto label_314c50;
        case 0x314c54u: goto label_314c54;
        case 0x314c58u: goto label_314c58;
        case 0x314c5cu: goto label_314c5c;
        case 0x314c60u: goto label_314c60;
        case 0x314c64u: goto label_314c64;
        case 0x314c68u: goto label_314c68;
        case 0x314c6cu: goto label_314c6c;
        case 0x314c70u: goto label_314c70;
        case 0x314c74u: goto label_314c74;
        case 0x314c78u: goto label_314c78;
        case 0x314c7cu: goto label_314c7c;
        case 0x314c80u: goto label_314c80;
        case 0x314c84u: goto label_314c84;
        case 0x314c88u: goto label_314c88;
        case 0x314c8cu: goto label_314c8c;
        case 0x314c90u: goto label_314c90;
        case 0x314c94u: goto label_314c94;
        case 0x314c98u: goto label_314c98;
        case 0x314c9cu: goto label_314c9c;
        case 0x314ca0u: goto label_314ca0;
        case 0x314ca4u: goto label_314ca4;
        case 0x314ca8u: goto label_314ca8;
        case 0x314cacu: goto label_314cac;
        case 0x314cb0u: goto label_314cb0;
        case 0x314cb4u: goto label_314cb4;
        case 0x314cb8u: goto label_314cb8;
        case 0x314cbcu: goto label_314cbc;
        case 0x314cc0u: goto label_314cc0;
        case 0x314cc4u: goto label_314cc4;
        case 0x314cc8u: goto label_314cc8;
        case 0x314cccu: goto label_314ccc;
        case 0x314cd0u: goto label_314cd0;
        case 0x314cd4u: goto label_314cd4;
        case 0x314cd8u: goto label_314cd8;
        case 0x314cdcu: goto label_314cdc;
        case 0x314ce0u: goto label_314ce0;
        case 0x314ce4u: goto label_314ce4;
        case 0x314ce8u: goto label_314ce8;
        case 0x314cecu: goto label_314cec;
        case 0x314cf0u: goto label_314cf0;
        case 0x314cf4u: goto label_314cf4;
        case 0x314cf8u: goto label_314cf8;
        case 0x314cfcu: goto label_314cfc;
        case 0x314d00u: goto label_314d00;
        case 0x314d04u: goto label_314d04;
        case 0x314d08u: goto label_314d08;
        case 0x314d0cu: goto label_314d0c;
        case 0x314d10u: goto label_314d10;
        case 0x314d14u: goto label_314d14;
        case 0x314d18u: goto label_314d18;
        case 0x314d1cu: goto label_314d1c;
        case 0x314d20u: goto label_314d20;
        case 0x314d24u: goto label_314d24;
        case 0x314d28u: goto label_314d28;
        case 0x314d2cu: goto label_314d2c;
        case 0x314d30u: goto label_314d30;
        case 0x314d34u: goto label_314d34;
        case 0x314d38u: goto label_314d38;
        case 0x314d3cu: goto label_314d3c;
        case 0x314d40u: goto label_314d40;
        case 0x314d44u: goto label_314d44;
        case 0x314d48u: goto label_314d48;
        case 0x314d4cu: goto label_314d4c;
        case 0x314d50u: goto label_314d50;
        case 0x314d54u: goto label_314d54;
        case 0x314d58u: goto label_314d58;
        case 0x314d5cu: goto label_314d5c;
        case 0x314d60u: goto label_314d60;
        case 0x314d64u: goto label_314d64;
        case 0x314d68u: goto label_314d68;
        case 0x314d6cu: goto label_314d6c;
        case 0x314d70u: goto label_314d70;
        case 0x314d74u: goto label_314d74;
        case 0x314d78u: goto label_314d78;
        case 0x314d7cu: goto label_314d7c;
        case 0x314d80u: goto label_314d80;
        case 0x314d84u: goto label_314d84;
        case 0x314d88u: goto label_314d88;
        case 0x314d8cu: goto label_314d8c;
        case 0x314d90u: goto label_314d90;
        case 0x314d94u: goto label_314d94;
        case 0x314d98u: goto label_314d98;
        case 0x314d9cu: goto label_314d9c;
        case 0x314da0u: goto label_314da0;
        case 0x314da4u: goto label_314da4;
        case 0x314da8u: goto label_314da8;
        case 0x314dacu: goto label_314dac;
        case 0x314db0u: goto label_314db0;
        case 0x314db4u: goto label_314db4;
        case 0x314db8u: goto label_314db8;
        case 0x314dbcu: goto label_314dbc;
        case 0x314dc0u: goto label_314dc0;
        case 0x314dc4u: goto label_314dc4;
        case 0x314dc8u: goto label_314dc8;
        case 0x314dccu: goto label_314dcc;
        case 0x314dd0u: goto label_314dd0;
        case 0x314dd4u: goto label_314dd4;
        case 0x314dd8u: goto label_314dd8;
        case 0x314ddcu: goto label_314ddc;
        case 0x314de0u: goto label_314de0;
        case 0x314de4u: goto label_314de4;
        case 0x314de8u: goto label_314de8;
        case 0x314decu: goto label_314dec;
        case 0x314df0u: goto label_314df0;
        case 0x314df4u: goto label_314df4;
        case 0x314df8u: goto label_314df8;
        case 0x314dfcu: goto label_314dfc;
        case 0x314e00u: goto label_314e00;
        case 0x314e04u: goto label_314e04;
        case 0x314e08u: goto label_314e08;
        case 0x314e0cu: goto label_314e0c;
        case 0x314e10u: goto label_314e10;
        case 0x314e14u: goto label_314e14;
        case 0x314e18u: goto label_314e18;
        case 0x314e1cu: goto label_314e1c;
        case 0x314e20u: goto label_314e20;
        case 0x314e24u: goto label_314e24;
        case 0x314e28u: goto label_314e28;
        case 0x314e2cu: goto label_314e2c;
        case 0x314e30u: goto label_314e30;
        case 0x314e34u: goto label_314e34;
        case 0x314e38u: goto label_314e38;
        case 0x314e3cu: goto label_314e3c;
        case 0x314e40u: goto label_314e40;
        case 0x314e44u: goto label_314e44;
        case 0x314e48u: goto label_314e48;
        case 0x314e4cu: goto label_314e4c;
        case 0x314e50u: goto label_314e50;
        case 0x314e54u: goto label_314e54;
        case 0x314e58u: goto label_314e58;
        case 0x314e5cu: goto label_314e5c;
        case 0x314e60u: goto label_314e60;
        case 0x314e64u: goto label_314e64;
        case 0x314e68u: goto label_314e68;
        case 0x314e6cu: goto label_314e6c;
        case 0x314e70u: goto label_314e70;
        case 0x314e74u: goto label_314e74;
        case 0x314e78u: goto label_314e78;
        case 0x314e7cu: goto label_314e7c;
        case 0x314e80u: goto label_314e80;
        case 0x314e84u: goto label_314e84;
        case 0x314e88u: goto label_314e88;
        case 0x314e8cu: goto label_314e8c;
        case 0x314e90u: goto label_314e90;
        case 0x314e94u: goto label_314e94;
        case 0x314e98u: goto label_314e98;
        case 0x314e9cu: goto label_314e9c;
        case 0x314ea0u: goto label_314ea0;
        case 0x314ea4u: goto label_314ea4;
        case 0x314ea8u: goto label_314ea8;
        case 0x314eacu: goto label_314eac;
        case 0x314eb0u: goto label_314eb0;
        case 0x314eb4u: goto label_314eb4;
        case 0x314eb8u: goto label_314eb8;
        case 0x314ebcu: goto label_314ebc;
        case 0x314ec0u: goto label_314ec0;
        case 0x314ec4u: goto label_314ec4;
        case 0x314ec8u: goto label_314ec8;
        case 0x314eccu: goto label_314ecc;
        case 0x314ed0u: goto label_314ed0;
        case 0x314ed4u: goto label_314ed4;
        case 0x314ed8u: goto label_314ed8;
        case 0x314edcu: goto label_314edc;
        case 0x314ee0u: goto label_314ee0;
        case 0x314ee4u: goto label_314ee4;
        case 0x314ee8u: goto label_314ee8;
        case 0x314eecu: goto label_314eec;
        case 0x314ef0u: goto label_314ef0;
        case 0x314ef4u: goto label_314ef4;
        case 0x314ef8u: goto label_314ef8;
        case 0x314efcu: goto label_314efc;
        case 0x314f00u: goto label_314f00;
        case 0x314f04u: goto label_314f04;
        case 0x314f08u: goto label_314f08;
        case 0x314f0cu: goto label_314f0c;
        case 0x314f10u: goto label_314f10;
        case 0x314f14u: goto label_314f14;
        case 0x314f18u: goto label_314f18;
        case 0x314f1cu: goto label_314f1c;
        case 0x314f20u: goto label_314f20;
        case 0x314f24u: goto label_314f24;
        case 0x314f28u: goto label_314f28;
        case 0x314f2cu: goto label_314f2c;
        case 0x314f30u: goto label_314f30;
        case 0x314f34u: goto label_314f34;
        case 0x314f38u: goto label_314f38;
        case 0x314f3cu: goto label_314f3c;
        case 0x314f40u: goto label_314f40;
        case 0x314f44u: goto label_314f44;
        case 0x314f48u: goto label_314f48;
        case 0x314f4cu: goto label_314f4c;
        case 0x314f50u: goto label_314f50;
        case 0x314f54u: goto label_314f54;
        case 0x314f58u: goto label_314f58;
        case 0x314f5cu: goto label_314f5c;
        case 0x314f60u: goto label_314f60;
        case 0x314f64u: goto label_314f64;
        case 0x314f68u: goto label_314f68;
        case 0x314f6cu: goto label_314f6c;
        case 0x314f70u: goto label_314f70;
        case 0x314f74u: goto label_314f74;
        case 0x314f78u: goto label_314f78;
        case 0x314f7cu: goto label_314f7c;
        case 0x314f80u: goto label_314f80;
        case 0x314f84u: goto label_314f84;
        case 0x314f88u: goto label_314f88;
        case 0x314f8cu: goto label_314f8c;
        case 0x314f90u: goto label_314f90;
        case 0x314f94u: goto label_314f94;
        case 0x314f98u: goto label_314f98;
        case 0x314f9cu: goto label_314f9c;
        case 0x314fa0u: goto label_314fa0;
        case 0x314fa4u: goto label_314fa4;
        case 0x314fa8u: goto label_314fa8;
        case 0x314facu: goto label_314fac;
        case 0x314fb0u: goto label_314fb0;
        case 0x314fb4u: goto label_314fb4;
        case 0x314fb8u: goto label_314fb8;
        case 0x314fbcu: goto label_314fbc;
        case 0x314fc0u: goto label_314fc0;
        case 0x314fc4u: goto label_314fc4;
        case 0x314fc8u: goto label_314fc8;
        case 0x314fccu: goto label_314fcc;
        case 0x314fd0u: goto label_314fd0;
        case 0x314fd4u: goto label_314fd4;
        case 0x314fd8u: goto label_314fd8;
        case 0x314fdcu: goto label_314fdc;
        case 0x314fe0u: goto label_314fe0;
        case 0x314fe4u: goto label_314fe4;
        case 0x314fe8u: goto label_314fe8;
        case 0x314fecu: goto label_314fec;
        case 0x314ff0u: goto label_314ff0;
        case 0x314ff4u: goto label_314ff4;
        case 0x314ff8u: goto label_314ff8;
        case 0x314ffcu: goto label_314ffc;
        case 0x315000u: goto label_315000;
        case 0x315004u: goto label_315004;
        case 0x315008u: goto label_315008;
        case 0x31500cu: goto label_31500c;
        case 0x315010u: goto label_315010;
        case 0x315014u: goto label_315014;
        case 0x315018u: goto label_315018;
        case 0x31501cu: goto label_31501c;
        case 0x315020u: goto label_315020;
        case 0x315024u: goto label_315024;
        case 0x315028u: goto label_315028;
        case 0x31502cu: goto label_31502c;
        case 0x315030u: goto label_315030;
        case 0x315034u: goto label_315034;
        case 0x315038u: goto label_315038;
        case 0x31503cu: goto label_31503c;
        case 0x315040u: goto label_315040;
        case 0x315044u: goto label_315044;
        case 0x315048u: goto label_315048;
        case 0x31504cu: goto label_31504c;
        case 0x315050u: goto label_315050;
        case 0x315054u: goto label_315054;
        case 0x315058u: goto label_315058;
        case 0x31505cu: goto label_31505c;
        case 0x315060u: goto label_315060;
        case 0x315064u: goto label_315064;
        case 0x315068u: goto label_315068;
        case 0x31506cu: goto label_31506c;
        case 0x315070u: goto label_315070;
        case 0x315074u: goto label_315074;
        case 0x315078u: goto label_315078;
        case 0x31507cu: goto label_31507c;
        case 0x315080u: goto label_315080;
        case 0x315084u: goto label_315084;
        case 0x315088u: goto label_315088;
        case 0x31508cu: goto label_31508c;
        case 0x315090u: goto label_315090;
        case 0x315094u: goto label_315094;
        case 0x315098u: goto label_315098;
        case 0x31509cu: goto label_31509c;
        case 0x3150a0u: goto label_3150a0;
        case 0x3150a4u: goto label_3150a4;
        case 0x3150a8u: goto label_3150a8;
        case 0x3150acu: goto label_3150ac;
        case 0x3150b0u: goto label_3150b0;
        case 0x3150b4u: goto label_3150b4;
        case 0x3150b8u: goto label_3150b8;
        case 0x3150bcu: goto label_3150bc;
        case 0x3150c0u: goto label_3150c0;
        case 0x3150c4u: goto label_3150c4;
        case 0x3150c8u: goto label_3150c8;
        case 0x3150ccu: goto label_3150cc;
        case 0x3150d0u: goto label_3150d0;
        case 0x3150d4u: goto label_3150d4;
        case 0x3150d8u: goto label_3150d8;
        case 0x3150dcu: goto label_3150dc;
        case 0x3150e0u: goto label_3150e0;
        case 0x3150e4u: goto label_3150e4;
        case 0x3150e8u: goto label_3150e8;
        case 0x3150ecu: goto label_3150ec;
        case 0x3150f0u: goto label_3150f0;
        case 0x3150f4u: goto label_3150f4;
        case 0x3150f8u: goto label_3150f8;
        case 0x3150fcu: goto label_3150fc;
        case 0x315100u: goto label_315100;
        case 0x315104u: goto label_315104;
        case 0x315108u: goto label_315108;
        case 0x31510cu: goto label_31510c;
        case 0x315110u: goto label_315110;
        case 0x315114u: goto label_315114;
        case 0x315118u: goto label_315118;
        case 0x31511cu: goto label_31511c;
        case 0x315120u: goto label_315120;
        case 0x315124u: goto label_315124;
        case 0x315128u: goto label_315128;
        case 0x31512cu: goto label_31512c;
        case 0x315130u: goto label_315130;
        case 0x315134u: goto label_315134;
        case 0x315138u: goto label_315138;
        case 0x31513cu: goto label_31513c;
        case 0x315140u: goto label_315140;
        case 0x315144u: goto label_315144;
        case 0x315148u: goto label_315148;
        case 0x31514cu: goto label_31514c;
        case 0x315150u: goto label_315150;
        case 0x315154u: goto label_315154;
        case 0x315158u: goto label_315158;
        case 0x31515cu: goto label_31515c;
        case 0x315160u: goto label_315160;
        case 0x315164u: goto label_315164;
        case 0x315168u: goto label_315168;
        case 0x31516cu: goto label_31516c;
        case 0x315170u: goto label_315170;
        case 0x315174u: goto label_315174;
        case 0x315178u: goto label_315178;
        case 0x31517cu: goto label_31517c;
        case 0x315180u: goto label_315180;
        case 0x315184u: goto label_315184;
        case 0x315188u: goto label_315188;
        case 0x31518cu: goto label_31518c;
        case 0x315190u: goto label_315190;
        case 0x315194u: goto label_315194;
        case 0x315198u: goto label_315198;
        case 0x31519cu: goto label_31519c;
        case 0x3151a0u: goto label_3151a0;
        case 0x3151a4u: goto label_3151a4;
        case 0x3151a8u: goto label_3151a8;
        case 0x3151acu: goto label_3151ac;
        case 0x3151b0u: goto label_3151b0;
        case 0x3151b4u: goto label_3151b4;
        case 0x3151b8u: goto label_3151b8;
        case 0x3151bcu: goto label_3151bc;
        case 0x3151c0u: goto label_3151c0;
        case 0x3151c4u: goto label_3151c4;
        case 0x3151c8u: goto label_3151c8;
        case 0x3151ccu: goto label_3151cc;
        case 0x3151d0u: goto label_3151d0;
        case 0x3151d4u: goto label_3151d4;
        case 0x3151d8u: goto label_3151d8;
        case 0x3151dcu: goto label_3151dc;
        case 0x3151e0u: goto label_3151e0;
        case 0x3151e4u: goto label_3151e4;
        case 0x3151e8u: goto label_3151e8;
        case 0x3151ecu: goto label_3151ec;
        case 0x3151f0u: goto label_3151f0;
        case 0x3151f4u: goto label_3151f4;
        case 0x3151f8u: goto label_3151f8;
        case 0x3151fcu: goto label_3151fc;
        case 0x315200u: goto label_315200;
        case 0x315204u: goto label_315204;
        case 0x315208u: goto label_315208;
        case 0x31520cu: goto label_31520c;
        case 0x315210u: goto label_315210;
        case 0x315214u: goto label_315214;
        case 0x315218u: goto label_315218;
        case 0x31521cu: goto label_31521c;
        case 0x315220u: goto label_315220;
        case 0x315224u: goto label_315224;
        case 0x315228u: goto label_315228;
        case 0x31522cu: goto label_31522c;
        case 0x315230u: goto label_315230;
        case 0x315234u: goto label_315234;
        case 0x315238u: goto label_315238;
        case 0x31523cu: goto label_31523c;
        case 0x315240u: goto label_315240;
        case 0x315244u: goto label_315244;
        case 0x315248u: goto label_315248;
        case 0x31524cu: goto label_31524c;
        case 0x315250u: goto label_315250;
        case 0x315254u: goto label_315254;
        case 0x315258u: goto label_315258;
        case 0x31525cu: goto label_31525c;
        case 0x315260u: goto label_315260;
        case 0x315264u: goto label_315264;
        case 0x315268u: goto label_315268;
        case 0x31526cu: goto label_31526c;
        case 0x315270u: goto label_315270;
        case 0x315274u: goto label_315274;
        case 0x315278u: goto label_315278;
        case 0x31527cu: goto label_31527c;
        case 0x315280u: goto label_315280;
        case 0x315284u: goto label_315284;
        case 0x315288u: goto label_315288;
        case 0x31528cu: goto label_31528c;
        case 0x315290u: goto label_315290;
        case 0x315294u: goto label_315294;
        case 0x315298u: goto label_315298;
        case 0x31529cu: goto label_31529c;
        case 0x3152a0u: goto label_3152a0;
        case 0x3152a4u: goto label_3152a4;
        case 0x3152a8u: goto label_3152a8;
        case 0x3152acu: goto label_3152ac;
        case 0x3152b0u: goto label_3152b0;
        case 0x3152b4u: goto label_3152b4;
        case 0x3152b8u: goto label_3152b8;
        case 0x3152bcu: goto label_3152bc;
        case 0x3152c0u: goto label_3152c0;
        case 0x3152c4u: goto label_3152c4;
        case 0x3152c8u: goto label_3152c8;
        case 0x3152ccu: goto label_3152cc;
        case 0x3152d0u: goto label_3152d0;
        case 0x3152d4u: goto label_3152d4;
        case 0x3152d8u: goto label_3152d8;
        case 0x3152dcu: goto label_3152dc;
        case 0x3152e0u: goto label_3152e0;
        case 0x3152e4u: goto label_3152e4;
        case 0x3152e8u: goto label_3152e8;
        case 0x3152ecu: goto label_3152ec;
        case 0x3152f0u: goto label_3152f0;
        case 0x3152f4u: goto label_3152f4;
        case 0x3152f8u: goto label_3152f8;
        case 0x3152fcu: goto label_3152fc;
        case 0x315300u: goto label_315300;
        case 0x315304u: goto label_315304;
        case 0x315308u: goto label_315308;
        case 0x31530cu: goto label_31530c;
        case 0x315310u: goto label_315310;
        case 0x315314u: goto label_315314;
        case 0x315318u: goto label_315318;
        case 0x31531cu: goto label_31531c;
        case 0x315320u: goto label_315320;
        case 0x315324u: goto label_315324;
        case 0x315328u: goto label_315328;
        case 0x31532cu: goto label_31532c;
        case 0x315330u: goto label_315330;
        case 0x315334u: goto label_315334;
        case 0x315338u: goto label_315338;
        case 0x31533cu: goto label_31533c;
        case 0x315340u: goto label_315340;
        case 0x315344u: goto label_315344;
        case 0x315348u: goto label_315348;
        default: break;
    }

    ctx->pc = 0x3149a0u;

label_3149a0:
    // 0x3149a0: 0x27bdf830  addiu       $sp, $sp, -0x7D0
    ctx->pc = 0x3149a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965296));
label_3149a4:
    // 0x3149a4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3149a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3149a8:
    // 0x3149a8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3149a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_3149ac:
    // 0x3149ac: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3149acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3149b0:
    // 0x3149b0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3149b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3149b4:
    // 0x3149b4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3149b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3149b8:
    // 0x3149b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3149b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3149bc:
    // 0x3149bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3149bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3149c0:
    // 0x3149c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3149c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3149c4:
    // 0x3149c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3149c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3149c8:
    // 0x3149c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3149c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3149cc:
    // 0x3149cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3149ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3149d0:
    // 0x3149d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3149d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3149d4:
    // 0x3149d4: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x3149d4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3149d8:
    // 0x3149d8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3149d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3149dc:
    // 0x3149dc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3149dcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3149e0:
    // 0x3149e0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3149e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3149e4:
    // 0x3149e4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3149e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3149e8:
    // 0x3149e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3149e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3149ec:
    // 0x3149ec: 0x12600244  beqz        $s3, . + 4 + (0x244 << 2)
label_3149f0:
    if (ctx->pc == 0x3149F0u) {
        ctx->pc = 0x3149F0u;
            // 0x3149f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3149F4u;
        goto label_3149f4;
    }
    ctx->pc = 0x3149ECu;
    {
        const bool branch_taken_0x3149ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3149ECu;
            // 0x3149f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149ec) {
            ctx->pc = 0x315300u;
            goto label_315300;
        }
    }
    ctx->pc = 0x3149F4u;
label_3149f4:
    // 0x3149f4: 0xc0a0ed8  jal         func_283B60
label_3149f8:
    if (ctx->pc == 0x3149F8u) {
        ctx->pc = 0x3149F8u;
            // 0x3149f8: 0x8e852e50  lw          $a1, 0x2E50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
        ctx->pc = 0x3149FCu;
        goto label_3149fc;
    }
    ctx->pc = 0x3149F4u;
    SET_GPR_U32(ctx, 31, 0x3149FCu);
    ctx->pc = 0x3149F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3149F4u;
            // 0x3149f8: 0x8e852e50  lw          $a1, 0x2E50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3149FCu; }
        if (ctx->pc != 0x3149FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3149FCu; }
        if (ctx->pc != 0x3149FCu) { return; }
    }
    ctx->pc = 0x3149FCu;
label_3149fc:
    // 0x3149fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3149fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314a00:
    // 0x314a00: 0x1220023f  beqz        $s1, . + 4 + (0x23F << 2)
label_314a04:
    if (ctx->pc == 0x314A04u) {
        ctx->pc = 0x314A08u;
        goto label_314a08;
    }
    ctx->pc = 0x314A00u;
    {
        const bool branch_taken_0x314a00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x314a00) {
            ctx->pc = 0x315300u;
            goto label_315300;
        }
    }
    ctx->pc = 0x314A08u;
label_314a08:
    // 0x314a08: 0x8e852e54  lw          $a1, 0x2E54($s4)
    ctx->pc = 0x314a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11860)));
label_314a0c:
    // 0x314a0c: 0xc0a0e30  jal         func_2838C0
label_314a10:
    if (ctx->pc == 0x314A10u) {
        ctx->pc = 0x314A10u;
            // 0x314a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314A14u;
        goto label_314a14;
    }
    ctx->pc = 0x314A0Cu;
    SET_GPR_U32(ctx, 31, 0x314A14u);
    ctx->pc = 0x314A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314A0Cu;
            // 0x314a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A14u; }
        if (ctx->pc != 0x314A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A14u; }
        if (ctx->pc != 0x314A14u) { return; }
    }
    ctx->pc = 0x314A14u;
label_314a14:
    // 0x314a14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x314a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314a18:
    // 0x314a18: 0x12400239  beqz        $s2, . + 4 + (0x239 << 2)
label_314a1c:
    if (ctx->pc == 0x314A1Cu) {
        ctx->pc = 0x314A20u;
        goto label_314a20;
    }
    ctx->pc = 0x314A18u;
    {
        const bool branch_taken_0x314a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x314a18) {
            ctx->pc = 0x315300u;
            goto label_315300;
        }
    }
    ctx->pc = 0x314A20u;
label_314a20:
    // 0x314a20: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x314a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_314a24:
    // 0x314a24: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x314a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_314a28:
    // 0x314a28: 0x320f809  jalr        $t9
label_314a2c:
    if (ctx->pc == 0x314A2Cu) {
        ctx->pc = 0x314A2Cu;
            // 0x314a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314A30u;
        goto label_314a30;
    }
    ctx->pc = 0x314A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314A30u);
        ctx->pc = 0x314A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A28u;
            // 0x314a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314A30u; }
            if (ctx->pc != 0x314A30u) { return; }
        }
        }
    }
    ctx->pc = 0x314A30u;
label_314a30:
    // 0x314a30: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x314a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_314a34:
    // 0x314a34: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_314a38:
    if (ctx->pc == 0x314A38u) {
        ctx->pc = 0x314A3Cu;
        goto label_314a3c;
    }
    ctx->pc = 0x314A34u;
    {
        const bool branch_taken_0x314a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x314a34) {
            ctx->pc = 0x314A44u;
            goto label_314a44;
        }
    }
    ctx->pc = 0x314A3Cu;
label_314a3c:
    // 0x314a3c: 0x10000231  b           . + 4 + (0x231 << 2)
label_314a40:
    if (ctx->pc == 0x314A40u) {
        ctx->pc = 0x314A40u;
            // 0x314a40: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x314A44u;
        goto label_314a44;
    }
    ctx->pc = 0x314A3Cu;
    {
        const bool branch_taken_0x314a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A3Cu;
            // 0x314a40: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a3c) {
            ctx->pc = 0x315304u;
            goto label_315304;
        }
    }
    ctx->pc = 0x314A44u;
label_314a44:
    // 0x314a44: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x314a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_314a48:
    // 0x314a48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x314a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314a4c:
    // 0x314a4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x314a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_314a50:
    // 0x314a50: 0x320f809  jalr        $t9
label_314a54:
    if (ctx->pc == 0x314A54u) {
        ctx->pc = 0x314A54u;
            // 0x314a54: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x314A58u;
        goto label_314a58;
    }
    ctx->pc = 0x314A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314A58u);
        ctx->pc = 0x314A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A50u;
            // 0x314a54: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314A58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314A58u; }
            if (ctx->pc != 0x314A58u) { return; }
        }
        }
    }
    ctx->pc = 0x314A58u;
label_314a58:
    // 0x314a58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314a5c:
    // 0x314a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314a60:
    // 0x314a60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x314a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_314a64:
    // 0x314a64: 0x320f809  jalr        $t9
label_314a68:
    if (ctx->pc == 0x314A68u) {
        ctx->pc = 0x314A68u;
            // 0x314a68: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x314A6Cu;
        goto label_314a6c;
    }
    ctx->pc = 0x314A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314A6Cu);
        ctx->pc = 0x314A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A64u;
            // 0x314a68: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314A6Cu; }
            if (ctx->pc != 0x314A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x314A6Cu;
label_314a6c:
    // 0x314a6c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314a70:
    // 0x314a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314a74:
    // 0x314a74: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x314a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_314a78:
    // 0x314a78: 0x320f809  jalr        $t9
label_314a7c:
    if (ctx->pc == 0x314A7Cu) {
        ctx->pc = 0x314A7Cu;
            // 0x314a7c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x314A80u;
        goto label_314a80;
    }
    ctx->pc = 0x314A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314A80u);
        ctx->pc = 0x314A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A78u;
            // 0x314a7c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314A80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314A80u; }
            if (ctx->pc != 0x314A80u) { return; }
        }
        }
    }
    ctx->pc = 0x314A80u;
label_314a80:
    // 0x314a80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x314a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_314a84:
    // 0x314a84: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x314a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_314a88:
    // 0x314a88: 0xc041c3e  jal         func_1070F8
label_314a8c:
    if (ctx->pc == 0x314A8Cu) {
        ctx->pc = 0x314A8Cu;
            // 0x314a8c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x314A90u;
        goto label_314a90;
    }
    ctx->pc = 0x314A88u;
    SET_GPR_U32(ctx, 31, 0x314A90u);
    ctx->pc = 0x314A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314A88u;
            // 0x314a8c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A90u; }
        if (ctx->pc != 0x314A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A90u; }
        if (ctx->pc != 0x314A90u) { return; }
    }
    ctx->pc = 0x314A90u;
label_314a90:
    // 0x314a90: 0x7a230080  lq          $v1, 0x80($s1)
    ctx->pc = 0x314a90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 128)));
label_314a94:
    // 0x314a94: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x314a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_314a98:
    // 0x314a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x314a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314a9c:
    // 0x314a9c: 0xc04c678  jal         func_1319E0
label_314aa0:
    if (ctx->pc == 0x314AA0u) {
        ctx->pc = 0x314AA0u;
            // 0x314aa0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x314AA4u;
        goto label_314aa4;
    }
    ctx->pc = 0x314A9Cu;
    SET_GPR_U32(ctx, 31, 0x314AA4u);
    ctx->pc = 0x314AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314A9Cu;
            // 0x314aa0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AA4u; }
        if (ctx->pc != 0x314AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AA4u; }
        if (ctx->pc != 0x314AA4u) { return; }
    }
    ctx->pc = 0x314AA4u;
label_314aa4:
    // 0x314aa4: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x314aa4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_314aa8:
    // 0x314aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314aac:
    // 0x314aac: 0xc0bb548  jal         func_2ED520
label_314ab0:
    if (ctx->pc == 0x314AB0u) {
        ctx->pc = 0x314AB0u;
            // 0x314ab0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x314AB4u;
        goto label_314ab4;
    }
    ctx->pc = 0x314AACu;
    SET_GPR_U32(ctx, 31, 0x314AB4u);
    ctx->pc = 0x314AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AACu;
            // 0x314ab0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AB4u; }
        if (ctx->pc != 0x314AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AB4u; }
        if (ctx->pc != 0x314AB4u) { return; }
    }
    ctx->pc = 0x314AB4u;
label_314ab4:
    // 0x314ab4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x314ab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_314ab8:
    // 0x314ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314abc:
    // 0x314abc: 0xc0bb548  jal         func_2ED520
label_314ac0:
    if (ctx->pc == 0x314AC0u) {
        ctx->pc = 0x314AC0u;
            // 0x314ac0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x314AC4u;
        goto label_314ac4;
    }
    ctx->pc = 0x314ABCu;
    SET_GPR_U32(ctx, 31, 0x314AC4u);
    ctx->pc = 0x314AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314ABCu;
            // 0x314ac0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AC4u; }
        if (ctx->pc != 0x314AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AC4u; }
        if (ctx->pc != 0x314AC4u) { return; }
    }
    ctx->pc = 0x314AC4u;
label_314ac4:
    // 0x314ac4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x314ac4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_314ac8:
    // 0x314ac8: 0xc047964  jal         func_11E590
label_314acc:
    if (ctx->pc == 0x314ACCu) {
        ctx->pc = 0x314ACCu;
            // 0x314acc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x314AD0u;
        goto label_314ad0;
    }
    ctx->pc = 0x314AC8u;
    SET_GPR_U32(ctx, 31, 0x314AD0u);
    ctx->pc = 0x314ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AC8u;
            // 0x314acc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AD0u; }
        if (ctx->pc != 0x314AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AD0u; }
        if (ctx->pc != 0x314AD0u) { return; }
    }
    ctx->pc = 0x314AD0u;
label_314ad0:
    // 0x314ad0: 0x4600a582  mul.s       $f22, $f20, $f0
    ctx->pc = 0x314ad0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_314ad4:
    // 0x314ad4: 0xc047a42  jal         func_11E908
label_314ad8:
    if (ctx->pc == 0x314AD8u) {
        ctx->pc = 0x314AD8u;
            // 0x314ad8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x314ADCu;
        goto label_314adc;
    }
    ctx->pc = 0x314AD4u;
    SET_GPR_U32(ctx, 31, 0x314ADCu);
    ctx->pc = 0x314AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AD4u;
            // 0x314ad8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314ADCu; }
        if (ctx->pc != 0x314ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314ADCu; }
        if (ctx->pc != 0x314ADCu) { return; }
    }
    ctx->pc = 0x314ADCu;
label_314adc:
    // 0x314adc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x314adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_314ae0:
    // 0x314ae0: 0x4600b5c0  add.s       $f23, $f22, $f0
    ctx->pc = 0x314ae0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_314ae4:
    // 0x314ae4: 0xc047a42  jal         func_11E908
label_314ae8:
    if (ctx->pc == 0x314AE8u) {
        ctx->pc = 0x314AE8u;
            // 0x314ae8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x314AECu;
        goto label_314aec;
    }
    ctx->pc = 0x314AE4u;
    SET_GPR_U32(ctx, 31, 0x314AECu);
    ctx->pc = 0x314AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AE4u;
            // 0x314ae8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AECu; }
        if (ctx->pc != 0x314AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AECu; }
        if (ctx->pc != 0x314AECu) { return; }
    }
    ctx->pc = 0x314AECu;
label_314aec:
    // 0x314aec: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x314aecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_314af0:
    // 0x314af0: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x314af0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_314af4:
    // 0x314af4: 0xc047964  jal         func_11E590
label_314af8:
    if (ctx->pc == 0x314AF8u) {
        ctx->pc = 0x314AF8u;
            // 0x314af8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x314AFCu;
        goto label_314afc;
    }
    ctx->pc = 0x314AF4u;
    SET_GPR_U32(ctx, 31, 0x314AFCu);
    ctx->pc = 0x314AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AF4u;
            // 0x314af8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AFCu; }
        if (ctx->pc != 0x314AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AFCu; }
        if (ctx->pc != 0x314AFCu) { return; }
    }
    ctx->pc = 0x314AFCu;
label_314afc:
    // 0x314afc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x314afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_314b00:
    // 0x314b00: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x314b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_314b04:
    // 0x314b04: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x314b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_314b08:
    // 0x314b08: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x314b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_314b0c:
    // 0x314b0c: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x314b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_314b10:
    // 0x314b10: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x314b10u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_314b14:
    // 0x314b14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x314b14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_314b18:
    // 0x314b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314b1c:
    // 0x314b1c: 0x0  nop
    ctx->pc = 0x314b1cu;
    // NOP
label_314b20:
    // 0x314b20: 0x4601bdc2  mul.s       $f23, $f23, $f1
    ctx->pc = 0x314b20u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
label_314b24:
    // 0x314b24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_314b28:
    if (ctx->pc == 0x314B28u) {
        ctx->pc = 0x314B28u;
            // 0x314b28: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x314B2Cu;
        goto label_314b2c;
    }
    ctx->pc = 0x314B24u;
    {
        const bool branch_taken_0x314b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314B24u;
            // 0x314b28: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b24) {
            ctx->pc = 0x314B74u;
            goto label_314b74;
        }
    }
    ctx->pc = 0x314B2Cu;
label_314b2c:
    // 0x314b2c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x314b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_314b30:
    // 0x314b30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x314b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314b34:
    // 0x314b34: 0xc052cf0  jal         func_14B3C0
label_314b38:
    if (ctx->pc == 0x314B38u) {
        ctx->pc = 0x314B38u;
            // 0x314b38: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x314B3Cu;
        goto label_314b3c;
    }
    ctx->pc = 0x314B34u;
    SET_GPR_U32(ctx, 31, 0x314B3Cu);
    ctx->pc = 0x314B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B34u;
            // 0x314b38: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B3Cu; }
        if (ctx->pc != 0x314B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B3Cu; }
        if (ctx->pc != 0x314B3Cu) { return; }
    }
    ctx->pc = 0x314B3Cu;
label_314b3c:
    // 0x314b3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_314b40:
    if (ctx->pc == 0x314B40u) {
        ctx->pc = 0x314B40u;
            // 0x314b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314B44u;
        goto label_314b44;
    }
    ctx->pc = 0x314B3Cu;
    {
        const bool branch_taken_0x314b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314B3Cu;
            // 0x314b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b3c) {
            ctx->pc = 0x314B5Cu;
            goto label_314b5c;
        }
    }
    ctx->pc = 0x314B44u;
label_314b44:
    // 0x314b44: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x314b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_314b48:
    // 0x314b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314b4c:
    // 0x314b4c: 0x0  nop
    ctx->pc = 0x314b4cu;
    // NOP
label_314b50:
    // 0x314b50: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x314b50u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_314b54:
    // 0x314b54: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x314b54u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_314b58:
    // 0x314b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314b5c:
    // 0x314b5c: 0xc0bb538  jal         func_2ED4E0
label_314b60:
    if (ctx->pc == 0x314B60u) {
        ctx->pc = 0x314B60u;
            // 0x314b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x314B64u;
        goto label_314b64;
    }
    ctx->pc = 0x314B5Cu;
    SET_GPR_U32(ctx, 31, 0x314B64u);
    ctx->pc = 0x314B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314B5Cu;
            // 0x314b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B64u; }
        if (ctx->pc != 0x314B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314B64u; }
        if (ctx->pc != 0x314B64u) { return; }
    }
    ctx->pc = 0x314B64u;
label_314b64:
    // 0x314b64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_314b68:
    if (ctx->pc == 0x314B68u) {
        ctx->pc = 0x314B6Cu;
        goto label_314b6c;
    }
    ctx->pc = 0x314B64u;
    {
        const bool branch_taken_0x314b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b64) {
            ctx->pc = 0x314B74u;
            goto label_314b74;
        }
    }
    ctx->pc = 0x314B6Cu;
label_314b6c:
    // 0x314b6c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x314b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_314b70:
    // 0x314b70: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x314b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_314b74:
    // 0x314b74: 0xe7b700e0  swc1        $f23, 0xE0($sp)
    ctx->pc = 0x314b74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_314b78:
    // 0x314b78: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_314b7c:
    // 0x314b7c: 0xe6f60000  swc1        $f22, 0x0($s7)
    ctx->pc = 0x314b7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_314b80:
    // 0x314b80: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x314b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_314b84:
    // 0x314b84: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x314b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314b88:
    // 0x314b88: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x314b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_314b8c:
    // 0x314b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314b90:
    // 0x314b90: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x314b90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_314b94:
    // 0x314b94: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x314b94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_314b98:
    // 0x314b98: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x314b98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_314b9c:
    // 0x314b9c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x314b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_314ba0:
    // 0x314ba0: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x314ba0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_314ba4:
    // 0x314ba4: 0x24422828  addiu       $v0, $v0, 0x2828
    ctx->pc = 0x314ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
label_314ba8:
    // 0x314ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314bac:
    // 0x314bac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x314bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_314bb0:
    // 0x314bb0: 0x26b527e8  addiu       $s5, $s5, 0x27E8
    ctx->pc = 0x314bb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 10216));
label_314bb4:
    // 0x314bb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x314bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_314bb8:
    // 0x314bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x314bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_314bbc:
    // 0x314bbc: 0x26d62808  addiu       $s6, $s6, 0x2808
    ctx->pc = 0x314bbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 10248));
label_314bc0:
    // 0x314bc0: 0x26102818  addiu       $s0, $s0, 0x2818
    ctx->pc = 0x314bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10264));
label_314bc4:
    // 0x314bc4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x314bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_314bc8:
    // 0x314bc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314bcc:
    // 0x314bcc: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x314bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_314bd0:
    // 0x314bd0: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x314bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_314bd4:
    // 0x314bd4: 0x320f809  jalr        $t9
label_314bd8:
    if (ctx->pc == 0x314BD8u) {
        ctx->pc = 0x314BD8u;
            // 0x314bd8: 0x27de2838  addiu       $fp, $fp, 0x2838 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 10296));
        ctx->pc = 0x314BDCu;
        goto label_314bdc;
    }
    ctx->pc = 0x314BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314BDCu);
        ctx->pc = 0x314BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314BD4u;
            // 0x314bd8: 0x27de2838  addiu       $fp, $fp, 0x2838 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 10296));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314BDCu; }
            if (ctx->pc != 0x314BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x314BDCu;
label_314bdc:
    // 0x314bdc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314be0:
    // 0x314be0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x314be0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_314be4:
    // 0x314be4: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x314be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_314be8:
    // 0x314be8: 0x320f809  jalr        $t9
label_314bec:
    if (ctx->pc == 0x314BECu) {
        ctx->pc = 0x314BECu;
            // 0x314bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314BF0u;
        goto label_314bf0;
    }
    ctx->pc = 0x314BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314BF0u);
        ctx->pc = 0x314BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314BE8u;
            // 0x314bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314BF0u; }
            if (ctx->pc != 0x314BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x314BF0u;
label_314bf0:
    // 0x314bf0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x314bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_314bf4:
    // 0x314bf4: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x314bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_314bf8:
    // 0x314bf8: 0x2442e770  addiu       $v0, $v0, -0x1890
    ctx->pc = 0x314bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
label_314bfc:
    // 0x314bfc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x314bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_314c00:
    // 0x314c00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x314c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_314c04:
    // 0x314c04: 0x4600ce80  add.s       $f26, $f25, $f0
    ctx->pc = 0x314c04u;
    ctx->f[26] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_314c08:
    // 0x314c08: 0xc04c050  jal         func_130140
label_314c0c:
    if (ctx->pc == 0x314C0Cu) {
        ctx->pc = 0x314C0Cu;
            // 0x314c0c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x314C10u;
        goto label_314c10;
    }
    ctx->pc = 0x314C08u;
    SET_GPR_U32(ctx, 31, 0x314C10u);
    ctx->pc = 0x314C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C08u;
            // 0x314c0c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C10u; }
        if (ctx->pc != 0x314C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C10u; }
        if (ctx->pc != 0x314C10u) { return; }
    }
    ctx->pc = 0x314C10u;
label_314c10:
    // 0x314c10: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x314c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_314c14:
    // 0x314c14: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x314c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_314c18:
    // 0x314c18: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x314c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_314c1c:
    // 0x314c1c: 0xc041cf6  jal         func_1073D8
label_314c20:
    if (ctx->pc == 0x314C20u) {
        ctx->pc = 0x314C20u;
            // 0x314c20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C24u;
        goto label_314c24;
    }
    ctx->pc = 0x314C1Cu;
    SET_GPR_U32(ctx, 31, 0x314C24u);
    ctx->pc = 0x314C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C1Cu;
            // 0x314c20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C24u; }
        if (ctx->pc != 0x314C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C24u; }
        if (ctx->pc != 0x314C24u) { return; }
    }
    ctx->pc = 0x314C24u;
label_314c24:
    // 0x314c24: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x314c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_314c28:
    // 0x314c28: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x314c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_314c2c:
    // 0x314c2c: 0xc041bb0  jal         func_106EC0
label_314c30:
    if (ctx->pc == 0x314C30u) {
        ctx->pc = 0x314C30u;
            // 0x314c30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C34u;
        goto label_314c34;
    }
    ctx->pc = 0x314C2Cu;
    SET_GPR_U32(ctx, 31, 0x314C34u);
    ctx->pc = 0x314C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C2Cu;
            // 0x314c30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C34u; }
        if (ctx->pc != 0x314C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C34u; }
        if (ctx->pc != 0x314C34u) { return; }
    }
    ctx->pc = 0x314C34u;
label_314c34:
    // 0x314c34: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x314c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_314c38:
    // 0x314c38: 0xc041be0  jal         func_106F80
label_314c3c:
    if (ctx->pc == 0x314C3Cu) {
        ctx->pc = 0x314C3Cu;
            // 0x314c3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C40u;
        goto label_314c40;
    }
    ctx->pc = 0x314C38u;
    SET_GPR_U32(ctx, 31, 0x314C40u);
    ctx->pc = 0x314C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C38u;
            // 0x314c3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C40u; }
        if (ctx->pc != 0x314C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C40u; }
        if (ctx->pc != 0x314C40u) { return; }
    }
    ctx->pc = 0x314C40u;
label_314c40:
    // 0x314c40: 0x8f83a2e0  lw          $v1, -0x5D20($gp)
    ctx->pc = 0x314c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943456)));
label_314c44:
    // 0x314c44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x314c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_314c48:
    // 0x314c48: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
label_314c4c:
    if (ctx->pc == 0x314C4Cu) {
        ctx->pc = 0x314C4Cu;
            // 0x314c4c: 0x3c024230  lui         $v0, 0x4230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
        ctx->pc = 0x314C50u;
        goto label_314c50;
    }
    ctx->pc = 0x314C48u;
    {
        const bool branch_taken_0x314c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C48u;
            // 0x314c4c: 0x3c024230  lui         $v0, 0x4230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c48) {
            ctx->pc = 0x314E40u;
            goto label_314e40;
        }
    }
    ctx->pc = 0x314C50u;
label_314c50:
    // 0x314c50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x314c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_314c54:
    // 0x314c54: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_314c58:
    if (ctx->pc == 0x314C58u) {
        ctx->pc = 0x314C58u;
            // 0x314c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C5Cu;
        goto label_314c5c;
    }
    ctx->pc = 0x314C54u;
    {
        const bool branch_taken_0x314c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C54u;
            // 0x314c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c54) {
            ctx->pc = 0x314DB0u;
            goto label_314db0;
        }
    }
    ctx->pc = 0x314C5Cu;
label_314c5c:
    // 0x314c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x314c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_314c60:
    // 0x314c60: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
label_314c64:
    if (ctx->pc == 0x314C64u) {
        ctx->pc = 0x314C64u;
            // 0x314c64: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->pc = 0x314C68u;
        goto label_314c68;
    }
    ctx->pc = 0x314C60u;
    {
        const bool branch_taken_0x314c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C60u;
            // 0x314c64: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c60) {
            ctx->pc = 0x314D48u;
            goto label_314d48;
        }
    }
    ctx->pc = 0x314C68u;
label_314c68:
    // 0x314c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314c6c:
    // 0x314c6c: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_314c70:
    if (ctx->pc == 0x314C70u) {
        ctx->pc = 0x314C74u;
        goto label_314c74;
    }
    ctx->pc = 0x314C6Cu;
    {
        const bool branch_taken_0x314c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x314c6c) {
            ctx->pc = 0x314D1Cu;
            goto label_314d1c;
        }
    }
    ctx->pc = 0x314C74u;
label_314c74:
    // 0x314c74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_314c78:
    if (ctx->pc == 0x314C78u) {
        ctx->pc = 0x314C78u;
            // 0x314c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C7Cu;
        goto label_314c7c;
    }
    ctx->pc = 0x314C74u;
    {
        const bool branch_taken_0x314c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C74u;
            // 0x314c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c74) {
            ctx->pc = 0x314C88u;
            goto label_314c88;
        }
    }
    ctx->pc = 0x314C7Cu;
label_314c7c:
    // 0x314c7c: 0x10000092  b           . + 4 + (0x92 << 2)
label_314c80:
    if (ctx->pc == 0x314C80u) {
        ctx->pc = 0x314C80u;
            // 0x314c80: 0x8f83a2e0  lw          $v1, -0x5D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943456)));
        ctx->pc = 0x314C84u;
        goto label_314c84;
    }
    ctx->pc = 0x314C7Cu;
    {
        const bool branch_taken_0x314c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314C7Cu;
            // 0x314c80: 0x8f83a2e0  lw          $v1, -0x5D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c7c) {
            ctx->pc = 0x314EC8u;
            goto label_314ec8;
        }
    }
    ctx->pc = 0x314C84u;
label_314c84:
    // 0x314c84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314c88:
    // 0x314c88: 0xc0bb538  jal         func_2ED4E0
label_314c8c:
    if (ctx->pc == 0x314C8Cu) {
        ctx->pc = 0x314C8Cu;
            // 0x314c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314C90u;
        goto label_314c90;
    }
    ctx->pc = 0x314C88u;
    SET_GPR_U32(ctx, 31, 0x314C90u);
    ctx->pc = 0x314C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C88u;
            // 0x314c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C90u; }
        if (ctx->pc != 0x314C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314C90u; }
        if (ctx->pc != 0x314C90u) { return; }
    }
    ctx->pc = 0x314C90u;
label_314c90:
    // 0x314c90: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_314c94:
    if (ctx->pc == 0x314C94u) {
        ctx->pc = 0x314C98u;
        goto label_314c98;
    }
    ctx->pc = 0x314C90u;
    {
        const bool branch_taken_0x314c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c90) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314C98u;
label_314c98:
    // 0x314c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314c9c:
    // 0x314c9c: 0xc0bb538  jal         func_2ED4E0
label_314ca0:
    if (ctx->pc == 0x314CA0u) {
        ctx->pc = 0x314CA0u;
            // 0x314ca0: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x314CA4u;
        goto label_314ca4;
    }
    ctx->pc = 0x314C9Cu;
    SET_GPR_U32(ctx, 31, 0x314CA4u);
    ctx->pc = 0x314CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314C9Cu;
            // 0x314ca0: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CA4u; }
        if (ctx->pc != 0x314CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CA4u; }
        if (ctx->pc != 0x314CA4u) { return; }
    }
    ctx->pc = 0x314CA4u;
label_314ca4:
    // 0x314ca4: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_314ca8:
    if (ctx->pc == 0x314CA8u) {
        ctx->pc = 0x314CACu;
        goto label_314cac;
    }
    ctx->pc = 0x314CA4u;
    {
        const bool branch_taken_0x314ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314ca4) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314CACu;
label_314cac:
    // 0x314cac: 0xc0c5838  jal         func_3160E0
label_314cb0:
    if (ctx->pc == 0x314CB0u) {
        ctx->pc = 0x314CB4u;
        goto label_314cb4;
    }
    ctx->pc = 0x314CACu;
    SET_GPR_U32(ctx, 31, 0x314CB4u);
    ctx->pc = 0x3160E0u;
    if (runtime->hasFunction(0x3160E0u)) {
        auto targetFn = runtime->lookupFunction(0x3160E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CB4u; }
        if (ctx->pc != 0x314CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TakeBombCheck__Fv_0x3160e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CB4u; }
        if (ctx->pc != 0x314CB4u) { return; }
    }
    ctx->pc = 0x314CB4u;
label_314cb4:
    // 0x314cb4: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_314cb8:
    if (ctx->pc == 0x314CB8u) {
        ctx->pc = 0x314CBCu;
        goto label_314cbc;
    }
    ctx->pc = 0x314CB4u;
    {
        const bool branch_taken_0x314cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314cb4) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314CBCu;
label_314cbc:
    // 0x314cbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x314cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_314cc0:
    // 0x314cc0: 0xc04c018  jal         func_130060
label_314cc4:
    if (ctx->pc == 0x314CC4u) {
        ctx->pc = 0x314CC4u;
            // 0x314cc4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x314CC8u;
        goto label_314cc8;
    }
    ctx->pc = 0x314CC0u;
    SET_GPR_U32(ctx, 31, 0x314CC8u);
    ctx->pc = 0x314CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314CC0u;
            // 0x314cc4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CC8u; }
        if (ctx->pc != 0x314CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CC8u; }
        if (ctx->pc != 0x314CC8u) { return; }
    }
    ctx->pc = 0x314CC8u;
label_314cc8:
    // 0x314cc8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x314cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_314ccc:
    // 0x314ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_314cd0:
    // 0x314cd0: 0x0  nop
    ctx->pc = 0x314cd0u;
    // NOP
label_314cd4:
    // 0x314cd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x314cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314cd8:
    // 0x314cd8: 0x0  nop
    ctx->pc = 0x314cd8u;
    // NOP
label_314cdc:
    // 0x314cdc: 0x45000079  bc1f        . + 4 + (0x79 << 2)
label_314ce0:
    if (ctx->pc == 0x314CE0u) {
        ctx->pc = 0x314CE4u;
        goto label_314ce4;
    }
    ctx->pc = 0x314CDCu;
    {
        const bool branch_taken_0x314cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314cdc) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314CE4u;
label_314ce4:
    // 0x314ce4: 0xc7ad0118  lwc1        $f13, 0x118($sp)
    ctx->pc = 0x314ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_314ce8:
    // 0x314ce8: 0xc047c76  jal         func_11F1D8
label_314cec:
    if (ctx->pc == 0x314CECu) {
        ctx->pc = 0x314CECu;
            // 0x314cec: 0xc7ac0110  lwc1        $f12, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x314CF0u;
        goto label_314cf0;
    }
    ctx->pc = 0x314CE8u;
    SET_GPR_U32(ctx, 31, 0x314CF0u);
    ctx->pc = 0x314CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314CE8u;
            // 0x314cec: 0xc7ac0110  lwc1        $f12, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CF0u; }
        if (ctx->pc != 0x314CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314CF0u; }
        if (ctx->pc != 0x314CF0u) { return; }
    }
    ctx->pc = 0x314CF0u;
label_314cf0:
    // 0x314cf0: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x314cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_314cf4:
    // 0x314cf4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x314cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_314cf8:
    // 0x314cf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x314cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_314cfc:
    // 0x314cfc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x314cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_314d00:
    // 0x314d00: 0xc04c344  jal         func_130D10
label_314d04:
    if (ctx->pc == 0x314D04u) {
        ctx->pc = 0x314D04u;
            // 0x314d04: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x314D08u;
        goto label_314d08;
    }
    ctx->pc = 0x314D00u;
    SET_GPR_U32(ctx, 31, 0x314D08u);
    ctx->pc = 0x314D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314D00u;
            // 0x314d04: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D08u; }
        if (ctx->pc != 0x314D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D08u; }
        if (ctx->pc != 0x314D08u) { return; }
    }
    ctx->pc = 0x314D08u;
label_314d08:
    // 0x314d08: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_314d0c:
    if (ctx->pc == 0x314D0Cu) {
        ctx->pc = 0x314D10u;
        goto label_314d10;
    }
    ctx->pc = 0x314D08u;
    {
        const bool branch_taken_0x314d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d08) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314D10u;
label_314d10:
    // 0x314d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314d14:
    // 0x314d14: 0x1000006b  b           . + 4 + (0x6B << 2)
label_314d18:
    if (ctx->pc == 0x314D18u) {
        ctx->pc = 0x314D18u;
            // 0x314d18: 0xaf82a2e0  sw          $v0, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
        ctx->pc = 0x314D1Cu;
        goto label_314d1c;
    }
    ctx->pc = 0x314D14u;
    {
        const bool branch_taken_0x314d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314D14u;
            // 0x314d18: 0xaf82a2e0  sw          $v0, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d14) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314D1Cu;
label_314d1c:
    // 0x314d1c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314d20:
    // 0x314d20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x314d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_314d24:
    // 0x314d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314d28:
    // 0x314d28: 0x24a52848  addiu       $a1, $a1, 0x2848
    ctx->pc = 0x314d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10312));
label_314d2c:
    // 0x314d2c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x314d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_314d30:
    // 0x314d30: 0x320f809  jalr        $t9
label_314d34:
    if (ctx->pc == 0x314D34u) {
        ctx->pc = 0x314D34u;
            // 0x314d34: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x314D38u;
        goto label_314d38;
    }
    ctx->pc = 0x314D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314D38u);
        ctx->pc = 0x314D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314D30u;
            // 0x314d34: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314D38u; }
            if (ctx->pc != 0x314D38u) { return; }
        }
        }
    }
    ctx->pc = 0x314D38u;
label_314d38:
    // 0x314d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x314d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_314d3c:
    // 0x314d3c: 0x10000061  b           . + 4 + (0x61 << 2)
label_314d40:
    if (ctx->pc == 0x314D40u) {
        ctx->pc = 0x314D40u;
            // 0x314d40: 0xaf82a2e0  sw          $v0, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
        ctx->pc = 0x314D44u;
        goto label_314d44;
    }
    ctx->pc = 0x314D3Cu;
    {
        const bool branch_taken_0x314d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314D3Cu;
            // 0x314d40: 0xaf82a2e0  sw          $v0, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d3c) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314D44u;
label_314d44:
    // 0x314d44: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x314d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_314d48:
    // 0x314d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314d4c:
    // 0x314d4c: 0x0  nop
    ctx->pc = 0x314d4cu;
    // NOP
label_314d50:
    // 0x314d50: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x314d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314d54:
    // 0x314d54: 0x0  nop
    ctx->pc = 0x314d54u;
    // NOP
label_314d58:
    // 0x314d58: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_314d5c:
    if (ctx->pc == 0x314D5Cu) {
        ctx->pc = 0x314D60u;
        goto label_314d60;
    }
    ctx->pc = 0x314D58u;
    {
        const bool branch_taken_0x314d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314d58) {
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314D60u;
label_314d60:
    // 0x314d60: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x314d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314d64:
    // 0x314d64: 0x0  nop
    ctx->pc = 0x314d64u;
    // NOP
label_314d68:
    // 0x314d68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_314d6c:
    if (ctx->pc == 0x314D6Cu) {
        ctx->pc = 0x314D70u;
        goto label_314d70;
    }
    ctx->pc = 0x314D68u;
    {
        const bool branch_taken_0x314d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314d68) {
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314D70u;
label_314d70:
    // 0x314d70: 0xc0c5840  jal         func_316100
label_314d74:
    if (ctx->pc == 0x314D74u) {
        ctx->pc = 0x314D78u;
        goto label_314d78;
    }
    ctx->pc = 0x314D70u;
    SET_GPR_U32(ctx, 31, 0x314D78u);
    ctx->pc = 0x316100u;
    if (runtime->hasFunction(0x316100u)) {
        auto targetFn = runtime->lookupFunction(0x316100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D78u; }
        if (ctx->pc != 0x314D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TakeBomb__Fv_0x316100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D78u; }
        if (ctx->pc != 0x314D78u) { return; }
    }
    ctx->pc = 0x314D78u;
label_314d78:
    // 0x314d78: 0x8f84a2d8  lw          $a0, -0x5D28($gp)
    ctx->pc = 0x314d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_314d7c:
    // 0x314d7c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x314d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_314d80:
    // 0x314d80: 0xc063818  jal         func_18E060
label_314d84:
    if (ctx->pc == 0x314D84u) {
        ctx->pc = 0x314D84u;
            // 0x314d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314D88u;
        goto label_314d88;
    }
    ctx->pc = 0x314D80u;
    SET_GPR_U32(ctx, 31, 0x314D88u);
    ctx->pc = 0x314D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314D80u;
            // 0x314d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D88u; }
        if (ctx->pc != 0x314D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314D88u; }
        if (ctx->pc != 0x314D88u) { return; }
    }
    ctx->pc = 0x314D88u;
label_314d88:
    // 0x314d88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314d8c:
    // 0x314d8c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x314d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_314d90:
    // 0x314d90: 0x320f809  jalr        $t9
label_314d94:
    if (ctx->pc == 0x314D94u) {
        ctx->pc = 0x314D94u;
            // 0x314d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314D98u;
        goto label_314d98;
    }
    ctx->pc = 0x314D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314D98u);
        ctx->pc = 0x314D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314D90u;
            // 0x314d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314D98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314D98u; }
            if (ctx->pc != 0x314D98u) { return; }
        }
        }
    }
    ctx->pc = 0x314D98u;
label_314d98:
    // 0x314d98: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_314d9c:
    if (ctx->pc == 0x314D9Cu) {
        ctx->pc = 0x314DA0u;
        goto label_314da0;
    }
    ctx->pc = 0x314D98u;
    {
        const bool branch_taken_0x314d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d98) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314DA0u;
label_314da0:
    // 0x314da0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x314da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_314da4:
    // 0x314da4: 0x10000047  b           . + 4 + (0x47 << 2)
label_314da8:
    if (ctx->pc == 0x314DA8u) {
        ctx->pc = 0x314DA8u;
            // 0x314da8: 0xaf82a2e0  sw          $v0, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
        ctx->pc = 0x314DACu;
        goto label_314dac;
    }
    ctx->pc = 0x314DA4u;
    {
        const bool branch_taken_0x314da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314DA4u;
            // 0x314da8: 0xaf82a2e0  sw          $v0, -0x5D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314da4) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314DACu;
label_314dac:
    // 0x314dac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314db0:
    // 0x314db0: 0xc0bb538  jal         func_2ED4E0
label_314db4:
    if (ctx->pc == 0x314DB4u) {
        ctx->pc = 0x314DB4u;
            // 0x314db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314DB8u;
        goto label_314db8;
    }
    ctx->pc = 0x314DB0u;
    SET_GPR_U32(ctx, 31, 0x314DB8u);
    ctx->pc = 0x314DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314DB0u;
            // 0x314db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314DB8u; }
        if (ctx->pc != 0x314DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314DB8u; }
        if (ctx->pc != 0x314DB8u) { return; }
    }
    ctx->pc = 0x314DB8u;
label_314db8:
    // 0x314db8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_314dbc:
    if (ctx->pc == 0x314DBCu) {
        ctx->pc = 0x314DC0u;
        goto label_314dc0;
    }
    ctx->pc = 0x314DB8u;
    {
        const bool branch_taken_0x314db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314db8) {
            ctx->pc = 0x314DE4u;
            goto label_314de4;
        }
    }
    ctx->pc = 0x314DC0u;
label_314dc0:
    // 0x314dc0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314dc4:
    // 0x314dc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x314dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_314dc8:
    // 0x314dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314dcc:
    // 0x314dcc: 0x24a52858  addiu       $a1, $a1, 0x2858
    ctx->pc = 0x314dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10328));
label_314dd0:
    // 0x314dd0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x314dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_314dd4:
    // 0x314dd4: 0x320f809  jalr        $t9
label_314dd8:
    if (ctx->pc == 0x314DD8u) {
        ctx->pc = 0x314DD8u;
            // 0x314dd8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x314DDCu;
        goto label_314ddc;
    }
    ctx->pc = 0x314DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314DDCu);
        ctx->pc = 0x314DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314DD4u;
            // 0x314dd8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314DDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314DDCu; }
            if (ctx->pc != 0x314DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x314DDCu;
label_314ddc:
    // 0x314ddc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x314ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_314de0:
    // 0x314de0: 0xaf82a2e0  sw          $v0, -0x5D20($gp)
    ctx->pc = 0x314de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 2));
label_314de4:
    // 0x314de4: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x314de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_314de8:
    // 0x314de8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x314de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314dec:
    // 0x314dec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x314decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_314df0:
    // 0x314df0: 0x320f809  jalr        $t9
label_314df4:
    if (ctx->pc == 0x314DF4u) {
        ctx->pc = 0x314DF4u;
            // 0x314df4: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x314DF8u;
        goto label_314df8;
    }
    ctx->pc = 0x314DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314DF8u);
        ctx->pc = 0x314DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314DF0u;
            // 0x314df4: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314DF8u; }
            if (ctx->pc != 0x314DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x314DF8u;
label_314df8:
    // 0x314df8: 0xc7a30170  lwc1        $f3, 0x170($sp)
    ctx->pc = 0x314df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_314dfc:
    // 0x314dfc: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x314dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_314e00:
    // 0x314e00: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x314e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314e04:
    // 0x314e04: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x314e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_314e08:
    // 0x314e08: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x314e08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_314e0c:
    // 0x314e0c: 0xc047c76  jal         func_11F1D8
label_314e10:
    if (ctx->pc == 0x314E10u) {
        ctx->pc = 0x314E10u;
            // 0x314e10: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x314E14u;
        goto label_314e14;
    }
    ctx->pc = 0x314E0Cu;
    SET_GPR_U32(ctx, 31, 0x314E14u);
    ctx->pc = 0x314E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E0Cu;
            // 0x314e10: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E14u; }
        if (ctx->pc != 0x314E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E14u; }
        if (ctx->pc != 0x314E14u) { return; }
    }
    ctx->pc = 0x314E14u;
label_314e14:
    // 0x314e14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x314e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_314e18:
    // 0x314e18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x314e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_314e1c:
    // 0x314e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_314e20:
    // 0x314e20: 0xc04c374  jal         func_130DD0
label_314e24:
    if (ctx->pc == 0x314E24u) {
        ctx->pc = 0x314E24u;
            // 0x314e24: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x314E28u;
        goto label_314e28;
    }
    ctx->pc = 0x314E20u;
    SET_GPR_U32(ctx, 31, 0x314E28u);
    ctx->pc = 0x314E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E20u;
            // 0x314e24: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E28u; }
        if (ctx->pc != 0x314E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E28u; }
        if (ctx->pc != 0x314E28u) { return; }
    }
    ctx->pc = 0x314E28u;
label_314e28:
    // 0x314e28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x314e28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_314e2c:
    // 0x314e2c: 0xc0bb224  jal         func_2EC890
label_314e30:
    if (ctx->pc == 0x314E30u) {
        ctx->pc = 0x314E30u;
            // 0x314e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314E34u;
        goto label_314e34;
    }
    ctx->pc = 0x314E2Cu;
    SET_GPR_U32(ctx, 31, 0x314E34u);
    ctx->pc = 0x314E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E2Cu;
            // 0x314e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E34u; }
        if (ctx->pc != 0x314E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E34u; }
        if (ctx->pc != 0x314E34u) { return; }
    }
    ctx->pc = 0x314E34u;
label_314e34:
    // 0x314e34: 0x10000023  b           . + 4 + (0x23 << 2)
label_314e38:
    if (ctx->pc == 0x314E38u) {
        ctx->pc = 0x314E3Cu;
        goto label_314e3c;
    }
    ctx->pc = 0x314E34u;
    {
        const bool branch_taken_0x314e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314e34) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314E3Cu;
label_314e3c:
    // 0x314e3c: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x314e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
label_314e40:
    // 0x314e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314e44:
    // 0x314e44: 0x0  nop
    ctx->pc = 0x314e44u;
    // NOP
label_314e48:
    // 0x314e48: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x314e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314e4c:
    // 0x314e4c: 0x0  nop
    ctx->pc = 0x314e4cu;
    // NOP
label_314e50:
    // 0x314e50: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_314e54:
    if (ctx->pc == 0x314E54u) {
        ctx->pc = 0x314E58u;
        goto label_314e58;
    }
    ctx->pc = 0x314E50u;
    {
        const bool branch_taken_0x314e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314e50) {
            ctx->pc = 0x314EA8u;
            goto label_314ea8;
        }
    }
    ctx->pc = 0x314E58u;
label_314e58:
    // 0x314e58: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x314e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314e5c:
    // 0x314e5c: 0x0  nop
    ctx->pc = 0x314e5cu;
    // NOP
label_314e60:
    // 0x314e60: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_314e64:
    if (ctx->pc == 0x314E64u) {
        ctx->pc = 0x314E68u;
        goto label_314e68;
    }
    ctx->pc = 0x314E60u;
    {
        const bool branch_taken_0x314e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314e60) {
            ctx->pc = 0x314EA8u;
            goto label_314ea8;
        }
    }
    ctx->pc = 0x314E68u;
label_314e68:
    // 0x314e68: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x314e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_314e6c:
    // 0x314e6c: 0xc041be0  jal         func_106F80
label_314e70:
    if (ctx->pc == 0x314E70u) {
        ctx->pc = 0x314E70u;
            // 0x314e70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314E74u;
        goto label_314e74;
    }
    ctx->pc = 0x314E6Cu;
    SET_GPR_U32(ctx, 31, 0x314E74u);
    ctx->pc = 0x314E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E6Cu;
            // 0x314e70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E74u; }
        if (ctx->pc != 0x314E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E74u; }
        if (ctx->pc != 0x314E74u) { return; }
    }
    ctx->pc = 0x314E74u;
label_314e74:
    // 0x314e74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x314e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_314e78:
    // 0x314e78: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_314e7c:
    // 0x314e7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x314e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_314e80:
    // 0x314e80: 0xc041c4a  jal         func_107128
label_314e84:
    if (ctx->pc == 0x314E84u) {
        ctx->pc = 0x314E84u;
            // 0x314e84: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x314E88u;
        goto label_314e88;
    }
    ctx->pc = 0x314E80u;
    SET_GPR_U32(ctx, 31, 0x314E88u);
    ctx->pc = 0x314E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E80u;
            // 0x314e84: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E88u; }
        if (ctx->pc != 0x314E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E88u; }
        if (ctx->pc != 0x314E88u) { return; }
    }
    ctx->pc = 0x314E88u;
label_314e88:
    // 0x314e88: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x314e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_314e8c:
    // 0x314e8c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_314e90:
    // 0x314e90: 0xc0c5850  jal         func_316140
label_314e94:
    if (ctx->pc == 0x314E94u) {
        ctx->pc = 0x314E94u;
            // 0x314e94: 0xafa20184  sw          $v0, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
        ctx->pc = 0x314E98u;
        goto label_314e98;
    }
    ctx->pc = 0x314E90u;
    SET_GPR_U32(ctx, 31, 0x314E98u);
    ctx->pc = 0x314E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314E90u;
            // 0x314e94: 0xafa20184  sw          $v0, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316140u;
    if (runtime->hasFunction(0x316140u)) {
        auto targetFn = runtime->lookupFunction(0x316140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E98u; }
        if (ctx->pc != 0x314E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ThrowBomb__FPf_0x316140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314E98u; }
        if (ctx->pc != 0x314E98u) { return; }
    }
    ctx->pc = 0x314E98u;
label_314e98:
    // 0x314e98: 0x8f84a2d8  lw          $a0, -0x5D28($gp)
    ctx->pc = 0x314e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_314e9c:
    // 0x314e9c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_314ea0:
    // 0x314ea0: 0xc063818  jal         func_18E060
label_314ea4:
    if (ctx->pc == 0x314EA4u) {
        ctx->pc = 0x314EA4u;
            // 0x314ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314EA8u;
        goto label_314ea8;
    }
    ctx->pc = 0x314EA0u;
    SET_GPR_U32(ctx, 31, 0x314EA8u);
    ctx->pc = 0x314EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314EA0u;
            // 0x314ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314EA8u; }
        if (ctx->pc != 0x314EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314EA8u; }
        if (ctx->pc != 0x314EA8u) { return; }
    }
    ctx->pc = 0x314EA8u;
label_314ea8:
    // 0x314ea8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314eac:
    // 0x314eac: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x314eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_314eb0:
    // 0x314eb0: 0x320f809  jalr        $t9
label_314eb4:
    if (ctx->pc == 0x314EB4u) {
        ctx->pc = 0x314EB4u;
            // 0x314eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314EB8u;
        goto label_314eb8;
    }
    ctx->pc = 0x314EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314EB8u);
        ctx->pc = 0x314EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314EB0u;
            // 0x314eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314EB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314EB8u; }
            if (ctx->pc != 0x314EB8u) { return; }
        }
        }
    }
    ctx->pc = 0x314EB8u;
label_314eb8:
    // 0x314eb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_314ebc:
    if (ctx->pc == 0x314EBCu) {
        ctx->pc = 0x314EC0u;
        goto label_314ec0;
    }
    ctx->pc = 0x314EB8u;
    {
        const bool branch_taken_0x314eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314eb8) {
            ctx->pc = 0x314EC4u;
            goto label_314ec4;
        }
    }
    ctx->pc = 0x314EC0u;
label_314ec0:
    // 0x314ec0: 0xaf80a2e0  sw          $zero, -0x5D20($gp)
    ctx->pc = 0x314ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943456), GPR_U32(ctx, 0));
label_314ec4:
    // 0x314ec4: 0x8f83a2e0  lw          $v1, -0x5D20($gp)
    ctx->pc = 0x314ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943456)));
label_314ec8:
    // 0x314ec8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x314ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_314ecc:
    // 0x314ecc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_314ed0:
    if (ctx->pc == 0x314ED0u) {
        ctx->pc = 0x314ED0u;
            // 0x314ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314ED4u;
        goto label_314ed4;
    }
    ctx->pc = 0x314ECCu;
    {
        const bool branch_taken_0x314ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314ECCu;
            // 0x314ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ecc) {
            ctx->pc = 0x314F18u;
            goto label_314f18;
        }
    }
    ctx->pc = 0x314ED4u;
label_314ed4:
    // 0x314ed4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x314ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_314ed8:
    // 0x314ed8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_314edc:
    if (ctx->pc == 0x314EDCu) {
        ctx->pc = 0x314EE0u;
        goto label_314ee0;
    }
    ctx->pc = 0x314ED8u;
    {
        const bool branch_taken_0x314ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x314ed8) {
            ctx->pc = 0x314F00u;
            goto label_314f00;
        }
    }
    ctx->pc = 0x314EE0u;
label_314ee0:
    // 0x314ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x314ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_314ee4:
    // 0x314ee4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_314ee8:
    if (ctx->pc == 0x314EE8u) {
        ctx->pc = 0x314EECu;
        goto label_314eec;
    }
    ctx->pc = 0x314EE4u;
    {
        const bool branch_taken_0x314ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x314ee4) {
            ctx->pc = 0x314F00u;
            goto label_314f00;
        }
    }
    ctx->pc = 0x314EECu;
label_314eec:
    // 0x314eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314ef0:
    // 0x314ef0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_314ef4:
    if (ctx->pc == 0x314EF4u) {
        ctx->pc = 0x314EF8u;
        goto label_314ef8;
    }
    ctx->pc = 0x314EF0u;
    {
        const bool branch_taken_0x314ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x314ef0) {
            ctx->pc = 0x314F00u;
            goto label_314f00;
        }
    }
    ctx->pc = 0x314EF8u;
label_314ef8:
    // 0x314ef8: 0x1000000d  b           . + 4 + (0xD << 2)
label_314efc:
    if (ctx->pc == 0x314EFCu) {
        ctx->pc = 0x314F00u;
        goto label_314f00;
    }
    ctx->pc = 0x314EF8u;
    {
        const bool branch_taken_0x314ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314ef8) {
            ctx->pc = 0x314F30u;
            goto label_314f30;
        }
    }
    ctx->pc = 0x314F00u;
label_314f00:
    // 0x314f00: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x314f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_314f04:
    // 0x314f04: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x314f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_314f08:
    // 0x314f08: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x314f08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_314f0c:
    // 0x314f0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x314f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314f10:
    // 0x314f10: 0x10000007  b           . + 4 + (0x7 << 2)
label_314f14:
    if (ctx->pc == 0x314F14u) {
        ctx->pc = 0x314F14u;
            // 0x314f14: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x314F18u;
        goto label_314f18;
    }
    ctx->pc = 0x314F10u;
    {
        const bool branch_taken_0x314f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314F10u;
            // 0x314f14: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f10) {
            ctx->pc = 0x314F30u;
            goto label_314f30;
        }
    }
    ctx->pc = 0x314F18u;
label_314f18:
    // 0x314f18: 0x8fb500c0  lw          $s5, 0xC0($sp)
    ctx->pc = 0x314f18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_314f1c:
    // 0x314f1c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x314f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_314f20:
    // 0x314f20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x314f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_314f24:
    // 0x314f24: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x314f24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_314f28:
    // 0x314f28: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x314f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_314f2c:
    // 0x314f2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x314f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314f30:
    // 0x314f30: 0x14800078  bnez        $a0, . + 4 + (0x78 << 2)
label_314f34:
    if (ctx->pc == 0x314F34u) {
        ctx->pc = 0x314F38u;
        goto label_314f38;
    }
    ctx->pc = 0x314F30u;
    {
        const bool branch_taken_0x314f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x314f30) {
            ctx->pc = 0x315114u;
            goto label_315114;
        }
    }
    ctx->pc = 0x314F38u;
label_314f38:
    // 0x314f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314f3c:
    // 0x314f3c: 0x0  nop
    ctx->pc = 0x314f3cu;
    // NOP
label_314f40:
    // 0x314f40: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x314f40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314f44:
    // 0x314f44: 0x0  nop
    ctx->pc = 0x314f44u;
    // NOP
label_314f48:
    // 0x314f48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_314f4c:
    if (ctx->pc == 0x314F4Cu) {
        ctx->pc = 0x314F50u;
        goto label_314f50;
    }
    ctx->pc = 0x314F48u;
    {
        const bool branch_taken_0x314f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314f48) {
            ctx->pc = 0x314F60u;
            goto label_314f60;
        }
    }
    ctx->pc = 0x314F50u;
label_314f50:
    // 0x314f50: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x314f50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314f54:
    // 0x314f54: 0x0  nop
    ctx->pc = 0x314f54u;
    // NOP
label_314f58:
    // 0x314f58: 0x45010068  bc1t        . + 4 + (0x68 << 2)
label_314f5c:
    if (ctx->pc == 0x314F5Cu) {
        ctx->pc = 0x314F60u;
        goto label_314f60;
    }
    ctx->pc = 0x314F58u;
    {
        const bool branch_taken_0x314f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314f58) {
            ctx->pc = 0x3150FCu;
            goto label_3150fc;
        }
    }
    ctx->pc = 0x314F60u;
label_314f60:
    // 0x314f60: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x314f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_314f64:
    // 0x314f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314f68:
    // 0x314f68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x314f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_314f6c:
    // 0x314f6c: 0x320f809  jalr        $t9
label_314f70:
    if (ctx->pc == 0x314F70u) {
        ctx->pc = 0x314F70u;
            // 0x314f70: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x314F74u;
        goto label_314f74;
    }
    ctx->pc = 0x314F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314F74u);
        ctx->pc = 0x314F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314F6Cu;
            // 0x314f70: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314F74u; }
            if (ctx->pc != 0x314F74u) { return; }
        }
        }
    }
    ctx->pc = 0x314F74u;
label_314f74:
    // 0x314f74: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x314f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_314f78:
    // 0x314f78: 0xc047c76  jal         func_11F1D8
label_314f7c:
    if (ctx->pc == 0x314F7Cu) {
        ctx->pc = 0x314F7Cu;
            // 0x314f7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x314F80u;
        goto label_314f80;
    }
    ctx->pc = 0x314F78u;
    SET_GPR_U32(ctx, 31, 0x314F80u);
    ctx->pc = 0x314F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314F78u;
            // 0x314f7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314F80u; }
        if (ctx->pc != 0x314F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314F80u; }
        if (ctx->pc != 0x314F80u) { return; }
    }
    ctx->pc = 0x314F80u;
label_314f80:
    // 0x314f80: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x314f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_314f84:
    // 0x314f84: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x314f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_314f88:
    // 0x314f88: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x314f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_314f8c:
    // 0x314f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x314f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314f90:
    // 0x314f90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x314f90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_314f94:
    // 0x314f94: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x314f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_314f98:
    // 0x314f98: 0xc04c2d8  jal         func_130B60
label_314f9c:
    if (ctx->pc == 0x314F9Cu) {
        ctx->pc = 0x314F9Cu;
            // 0x314f9c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x314FA0u;
        goto label_314fa0;
    }
    ctx->pc = 0x314F98u;
    SET_GPR_U32(ctx, 31, 0x314FA0u);
    ctx->pc = 0x314F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314F98u;
            // 0x314f9c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314FA0u; }
        if (ctx->pc != 0x314FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314FA0u; }
        if (ctx->pc != 0x314FA0u) { return; }
    }
    ctx->pc = 0x314FA0u;
label_314fa0:
    // 0x314fa0: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x314fa0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_314fa4:
    // 0x314fa4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x314fa4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_314fa8:
    // 0x314fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314fac:
    // 0x314fac: 0x0  nop
    ctx->pc = 0x314facu;
    // NOP
label_314fb0:
    // 0x314fb0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x314fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314fb4:
    // 0x314fb4: 0x0  nop
    ctx->pc = 0x314fb4u;
    // NOP
label_314fb8:
    // 0x314fb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_314fbc:
    if (ctx->pc == 0x314FBCu) {
        ctx->pc = 0x314FC0u;
        goto label_314fc0;
    }
    ctx->pc = 0x314FB8u;
    {
        const bool branch_taken_0x314fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314fb8) {
            ctx->pc = 0x314FC4u;
            goto label_314fc4;
        }
    }
    ctx->pc = 0x314FC0u;
label_314fc0:
    // 0x314fc0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x314fc0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_314fc4:
    // 0x314fc4: 0xc0a248c  jal         func_289230
label_314fc8:
    if (ctx->pc == 0x314FC8u) {
        ctx->pc = 0x314FCCu;
        goto label_314fcc;
    }
    ctx->pc = 0x314FC4u;
    SET_GPR_U32(ctx, 31, 0x314FCCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314FCCu; }
        if (ctx->pc != 0x314FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314FCCu; }
        if (ctx->pc != 0x314FCCu) { return; }
    }
    ctx->pc = 0x314FCCu;
label_314fcc:
    // 0x314fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_314fd0:
    // 0x314fd0: 0x0  nop
    ctx->pc = 0x314fd0u;
    // NOP
label_314fd4:
    // 0x314fd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_314fd8:
    // 0x314fd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x314fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_314fdc:
    // 0x314fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314fe0:
    // 0x314fe0: 0x0  nop
    ctx->pc = 0x314fe0u;
    // NOP
label_314fe4:
    // 0x314fe4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x314fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314fe8:
    // 0x314fe8: 0x0  nop
    ctx->pc = 0x314fe8u;
    // NOP
label_314fec:
    // 0x314fec: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_314ff0:
    if (ctx->pc == 0x314FF0u) {
        ctx->pc = 0x314FF4u;
        goto label_314ff4;
    }
    ctx->pc = 0x314FECu;
    {
        const bool branch_taken_0x314fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314fec) {
            ctx->pc = 0x315018u;
            goto label_315018;
        }
    }
    ctx->pc = 0x314FF4u;
label_314ff4:
    // 0x314ff4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x314ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_314ff8:
    // 0x314ff8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x314ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_314ffc:
    // 0x314ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315000:
    // 0x315000: 0x0  nop
    ctx->pc = 0x315000u;
    // NOP
label_315004:
    // 0x315004: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x315004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_315008:
    // 0x315008: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x315008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_31500c:
    // 0x31500c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x31500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315010:
    // 0x315010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x315010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_315014:
    // 0x315014: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x315014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_315018:
    // 0x315018: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x315018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31501c:
    // 0x31501c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31501cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315020:
    // 0x315020: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x315020u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_315024:
    // 0x315024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315028:
    // 0x315028: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x315028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_31502c:
    // 0x31502c: 0x320f809  jalr        $t9
label_315030:
    if (ctx->pc == 0x315030u) {
        ctx->pc = 0x315030u;
            // 0x315030: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x315034u;
        goto label_315034;
    }
    ctx->pc = 0x31502Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315034u);
        ctx->pc = 0x315030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31502Cu;
            // 0x315030: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315034u; }
            if (ctx->pc != 0x315034u) { return; }
        }
        }
    }
    ctx->pc = 0x315034u;
label_315034:
    // 0x315034: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x315034u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_315038:
    // 0x315038: 0xc047cc0  jal         func_11F300
label_31503c:
    if (ctx->pc == 0x31503Cu) {
        ctx->pc = 0x31503Cu;
            // 0x31503c: 0x4615ab1c  madd.s      $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
        ctx->pc = 0x315040u;
        goto label_315040;
    }
    ctx->pc = 0x315038u;
    SET_GPR_U32(ctx, 31, 0x315040u);
    ctx->pc = 0x31503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315038u;
            // 0x31503c: 0x4615ab1c  madd.s      $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315040u; }
        if (ctx->pc != 0x315040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315040u; }
        if (ctx->pc != 0x315040u) { return; }
    }
    ctx->pc = 0x315040u;
label_315040:
    // 0x315040: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x315040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_315044:
    // 0x315044: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_315048:
    // 0x315048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31504c:
    // 0x31504c: 0x0  nop
    ctx->pc = 0x31504cu;
    // NOP
label_315050:
    // 0x315050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315054:
    // 0x315054: 0x0  nop
    ctx->pc = 0x315054u;
    // NOP
label_315058:
    // 0x315058: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_31505c:
    if (ctx->pc == 0x31505Cu) {
        ctx->pc = 0x31505Cu;
            // 0x31505c: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x315060u;
        goto label_315060;
    }
    ctx->pc = 0x315058u;
    {
        const bool branch_taken_0x315058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315058u;
            // 0x31505c: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315058) {
            ctx->pc = 0x31506Cu;
            goto label_31506c;
        }
    }
    ctx->pc = 0x315060u;
label_315060:
    // 0x315060: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
label_315064:
    if (ctx->pc == 0x315064u) {
        ctx->pc = 0x315068u;
        goto label_315068;
    }
    ctx->pc = 0x315060u;
    {
        const bool branch_taken_0x315060 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x315060) {
            ctx->pc = 0x3150DCu;
            goto label_3150dc;
        }
    }
    ctx->pc = 0x315068u;
label_315068:
    // 0x315068: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x315068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_31506c:
    // 0x31506c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_315070:
    // 0x315070: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x315070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_315074:
    // 0x315074: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x315074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315078:
    // 0x315078: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x315078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31507c:
    // 0x31507c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31507cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_315080:
    // 0x315080: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x315080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_315084:
    // 0x315084: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x315084u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_315088:
    // 0x315088: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x315088u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31508c:
    // 0x31508c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31508cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315090:
    // 0x315090: 0x0  nop
    ctx->pc = 0x315090u;
    // NOP
label_315094:
    // 0x315094: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x315094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315098:
    // 0x315098: 0x0  nop
    ctx->pc = 0x315098u;
    // NOP
label_31509c:
    // 0x31509c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3150a0:
    if (ctx->pc == 0x3150A0u) {
        ctx->pc = 0x3150A4u;
        goto label_3150a4;
    }
    ctx->pc = 0x31509Cu;
    {
        const bool branch_taken_0x31509c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31509c) {
            ctx->pc = 0x3150A8u;
            goto label_3150a8;
        }
    }
    ctx->pc = 0x3150A4u;
label_3150a4:
    // 0x3150a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3150a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3150a8:
    // 0x3150a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3150a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3150ac:
    // 0x3150ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3150acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3150b0:
    // 0x3150b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3150b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3150b4:
    // 0x3150b4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3150b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3150b8:
    // 0x3150b8: 0x320f809  jalr        $t9
label_3150bc:
    if (ctx->pc == 0x3150BCu) {
        ctx->pc = 0x3150BCu;
            // 0x3150bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3150C0u;
        goto label_3150c0;
    }
    ctx->pc = 0x3150B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3150C0u);
        ctx->pc = 0x3150BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3150B8u;
            // 0x3150bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3150C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3150C0u; }
            if (ctx->pc != 0x3150C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3150C0u;
label_3150c0:
    // 0x3150c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3150c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3150c4:
    // 0x3150c4: 0x4614c302  mul.s       $f12, $f24, $f20
    ctx->pc = 0x3150c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
label_3150c8:
    // 0x3150c8: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x3150c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_3150cc:
    // 0x3150cc: 0x320f809  jalr        $t9
label_3150d0:
    if (ctx->pc == 0x3150D0u) {
        ctx->pc = 0x3150D0u;
            // 0x3150d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3150D4u;
        goto label_3150d4;
    }
    ctx->pc = 0x3150CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3150D4u);
        ctx->pc = 0x3150D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3150CCu;
            // 0x3150d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3150D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3150D4u; }
            if (ctx->pc != 0x3150D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3150D4u;
label_3150d4:
    // 0x3150d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3150d8:
    if (ctx->pc == 0x3150D8u) {
        ctx->pc = 0x3150D8u;
            // 0x3150d8: 0x8f84a290  lw          $a0, -0x5D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
        ctx->pc = 0x3150DCu;
        goto label_3150dc;
    }
    ctx->pc = 0x3150D4u;
    {
        const bool branch_taken_0x3150d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3150D4u;
            // 0x3150d8: 0x8f84a290  lw          $a0, -0x5D70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150d4) {
            ctx->pc = 0x315118u;
            goto label_315118;
        }
    }
    ctx->pc = 0x3150DCu;
label_3150dc:
    // 0x3150dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3150dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3150e0:
    // 0x3150e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3150e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3150e4:
    // 0x3150e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3150e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3150e8:
    // 0x3150e8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3150e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3150ec:
    // 0x3150ec: 0x320f809  jalr        $t9
label_3150f0:
    if (ctx->pc == 0x3150F0u) {
        ctx->pc = 0x3150F0u;
            // 0x3150f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3150F4u;
        goto label_3150f4;
    }
    ctx->pc = 0x3150ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3150F4u);
        ctx->pc = 0x3150F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3150ECu;
            // 0x3150f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3150F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3150F4u; }
            if (ctx->pc != 0x3150F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3150F4u;
label_3150f4:
    // 0x3150f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3150f8:
    if (ctx->pc == 0x3150F8u) {
        ctx->pc = 0x3150FCu;
        goto label_3150fc;
    }
    ctx->pc = 0x3150F4u;
    {
        const bool branch_taken_0x3150f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3150f4) {
            ctx->pc = 0x315114u;
            goto label_315114;
        }
    }
    ctx->pc = 0x3150FCu;
label_3150fc:
    // 0x3150fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3150fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_315100:
    // 0x315100: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x315100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315104:
    // 0x315104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315108:
    // 0x315108: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x315108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_31510c:
    // 0x31510c: 0x320f809  jalr        $t9
label_315110:
    if (ctx->pc == 0x315110u) {
        ctx->pc = 0x315110u;
            // 0x315110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315114u;
        goto label_315114;
    }
    ctx->pc = 0x31510Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315114u);
        ctx->pc = 0x315110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31510Cu;
            // 0x315110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315114u; }
            if (ctx->pc != 0x315114u) { return; }
        }
        }
    }
    ctx->pc = 0x315114u;
label_315114:
    // 0x315114: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x315114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_315118:
    // 0x315118: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31511c:
    // 0x31511c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x31511cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_315120:
    // 0x315120: 0x320f809  jalr        $t9
label_315124:
    if (ctx->pc == 0x315124u) {
        ctx->pc = 0x315124u;
            // 0x315124: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x315128u;
        goto label_315128;
    }
    ctx->pc = 0x315120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315128u);
        ctx->pc = 0x315124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315120u;
            // 0x315124: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315128u; }
            if (ctx->pc != 0x315128u) { return; }
        }
        }
    }
    ctx->pc = 0x315128u;
label_315128:
    // 0x315128: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x315128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_31512c:
    // 0x31512c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315130:
    // 0x315130: 0xc049c86  jal         func_127218
label_315134:
    if (ctx->pc == 0x315134u) {
        ctx->pc = 0x315134u;
            // 0x315134: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x315138u;
        goto label_315138;
    }
    ctx->pc = 0x315130u;
    SET_GPR_U32(ctx, 31, 0x315138u);
    ctx->pc = 0x315134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315130u;
            // 0x315134: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315138u; }
        if (ctx->pc != 0x315138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315138u; }
        if (ctx->pc != 0x315138u) { return; }
    }
    ctx->pc = 0x315138u;
label_315138:
    // 0x315138: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x315138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_31513c:
    // 0x31513c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31513cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315140:
    // 0x315140: 0xc049c86  jal         func_127218
label_315144:
    if (ctx->pc == 0x315144u) {
        ctx->pc = 0x315144u;
            // 0x315144: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x315148u;
        goto label_315148;
    }
    ctx->pc = 0x315140u;
    SET_GPR_U32(ctx, 31, 0x315148u);
    ctx->pc = 0x315144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315140u;
            // 0x315144: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315148u; }
        if (ctx->pc != 0x315148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315148u; }
        if (ctx->pc != 0x315148u) { return; }
    }
    ctx->pc = 0x315148u;
label_315148:
    // 0x315148: 0xc0c5888  jal         func_316220
label_31514c:
    if (ctx->pc == 0x31514Cu) {
        ctx->pc = 0x315150u;
        goto label_315150;
    }
    ctx->pc = 0x315148u;
    SET_GPR_U32(ctx, 31, 0x315150u);
    ctx->pc = 0x316220u;
    if (runtime->hasFunction(0x316220u)) {
        auto targetFn = runtime->lookupFunction(0x316220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315150u; }
        if (ctx->pc != 0x315150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPutBomb__Fv_0x316220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315150u; }
        if (ctx->pc != 0x315150u) { return; }
    }
    ctx->pc = 0x315150u;
label_315150:
    // 0x315150: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_315154:
    if (ctx->pc == 0x315154u) {
        ctx->pc = 0x315154u;
            // 0x315154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315158u;
        goto label_315158;
    }
    ctx->pc = 0x315150u;
    {
        const bool branch_taken_0x315150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315150u;
            // 0x315154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315150) {
            ctx->pc = 0x315188u;
            goto label_315188;
        }
    }
    ctx->pc = 0x315158u;
label_315158:
    // 0x315158: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x315158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_31515c:
    // 0x31515c: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x31515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_315160:
    // 0x315160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x315160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315164:
    // 0x315164: 0xafa401a4  sw          $a0, 0x1A4($sp)
    ctx->pc = 0x315164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
label_315168:
    // 0x315168: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x315168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31516c:
    // 0x31516c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x31516cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_315170:
    // 0x315170: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x315170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_315174:
    // 0x315174: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x315174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_315178:
    // 0x315178: 0xc05437c  jal         func_150DF0
label_31517c:
    if (ctx->pc == 0x31517Cu) {
        ctx->pc = 0x31517Cu;
            // 0x31517c: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x315180u;
        goto label_315180;
    }
    ctx->pc = 0x315178u;
    SET_GPR_U32(ctx, 31, 0x315180u);
    ctx->pc = 0x31517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315178u;
            // 0x31517c: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150DF0u;
    if (runtime->hasFunction(0x150DF0u)) {
        auto targetFn = runtime->lookupFunction(0x150DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315180u; }
        if (ctx->pc != 0x315180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateCharaCPoly__FP6CCPolyiPfPfff_0x150df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315180u; }
        if (ctx->pc != 0x315180u) { return; }
    }
    ctx->pc = 0x315180u;
label_315180:
    // 0x315180: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x315180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_315184:
    // 0x315184: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x315184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315188:
    // 0x315188: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x315188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_31518c:
    // 0x31518c: 0xc0690dc  jal         func_1A4370
label_315190:
    if (ctx->pc == 0x315190u) {
        ctx->pc = 0x315190u;
            // 0x315190: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x315194u;
        goto label_315194;
    }
    ctx->pc = 0x31518Cu;
    SET_GPR_U32(ctx, 31, 0x315194u);
    ctx->pc = 0x315190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31518Cu;
            // 0x315190: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4370u;
    if (runtime->hasFunction(0x1A4370u)) {
        auto targetFn = runtime->lookupFunction(0x1A4370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315194u; }
        if (ctx->pc != 0x315194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMoveChara__FP6CScenePfP17EditMoveCharaInfo_0x1a4370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315194u; }
        if (ctx->pc != 0x315194u) { return; }
    }
    ctx->pc = 0x315194u;
label_315194:
    // 0x315194: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_315198:
    if (ctx->pc == 0x315198u) {
        ctx->pc = 0x31519Cu;
        goto label_31519c;
    }
    ctx->pc = 0x315194u;
    {
        const bool branch_taken_0x315194 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x315194) {
            ctx->pc = 0x3151A8u;
            goto label_3151a8;
        }
    }
    ctx->pc = 0x31519Cu;
label_31519c:
    // 0x31519c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3151a0:
    // 0x3151a0: 0xc0baff4  jal         func_2EBFD0
label_3151a4:
    if (ctx->pc == 0x3151A4u) {
        ctx->pc = 0x3151A4u;
            // 0x3151a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3151A8u;
        goto label_3151a8;
    }
    ctx->pc = 0x3151A0u;
    SET_GPR_U32(ctx, 31, 0x3151A8u);
    ctx->pc = 0x3151A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3151A0u;
            // 0x3151a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3151A8u; }
        if (ctx->pc != 0x3151A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3151A8u; }
        if (ctx->pc != 0x3151A8u) { return; }
    }
    ctx->pc = 0x3151A8u;
label_3151a8:
    // 0x3151a8: 0x8f83a308  lw          $v1, -0x5CF8($gp)
    ctx->pc = 0x3151a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943496)));
label_3151ac:
    // 0x3151ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3151acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3151b0:
    // 0x3151b0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_3151b4:
    if (ctx->pc == 0x3151B4u) {
        ctx->pc = 0x3151B8u;
        goto label_3151b8;
    }
    ctx->pc = 0x3151B0u;
    {
        const bool branch_taken_0x3151b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3151b0) {
            ctx->pc = 0x3152B8u;
            goto label_3152b8;
        }
    }
    ctx->pc = 0x3151B8u;
label_3151b8:
    // 0x3151b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3151b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3151bc:
    // 0x3151bc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_3151c0:
    if (ctx->pc == 0x3151C0u) {
        ctx->pc = 0x3151C4u;
        goto label_3151c4;
    }
    ctx->pc = 0x3151BCu;
    {
        const bool branch_taken_0x3151bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3151bc) {
            ctx->pc = 0x315278u;
            goto label_315278;
        }
    }
    ctx->pc = 0x3151C4u;
label_3151c4:
    // 0x3151c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3151c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3151c8:
    // 0x3151c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3151cc:
    if (ctx->pc == 0x3151CCu) {
        ctx->pc = 0x3151D0u;
        goto label_3151d0;
    }
    ctx->pc = 0x3151C8u;
    {
        const bool branch_taken_0x3151c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3151c8) {
            ctx->pc = 0x3151D8u;
            goto label_3151d8;
        }
    }
    ctx->pc = 0x3151D0u;
label_3151d0:
    // 0x3151d0: 0x10000043  b           . + 4 + (0x43 << 2)
label_3151d4:
    if (ctx->pc == 0x3151D4u) {
        ctx->pc = 0x3151D4u;
            // 0x3151d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3151D8u;
        goto label_3151d8;
    }
    ctx->pc = 0x3151D0u;
    {
        const bool branch_taken_0x3151d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3151D0u;
            // 0x3151d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151d0) {
            ctx->pc = 0x3152E0u;
            goto label_3152e0;
        }
    }
    ctx->pc = 0x3151D8u;
label_3151d8:
    // 0x3151d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3151d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3151dc:
    // 0x3151dc: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x3151dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
label_3151e0:
    // 0x3151e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3151e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3151e4:
    // 0x3151e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3151e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3151e8:
    // 0x3151e8: 0x3c02c3aa  lui         $v0, 0xC3AA
    ctx->pc = 0x3151e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50090 << 16));
label_3151ec:
    // 0x3151ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3151ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3151f0:
    // 0x3151f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3151f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3151f4:
    // 0x3151f4: 0x320f809  jalr        $t9
label_3151f8:
    if (ctx->pc == 0x3151F8u) {
        ctx->pc = 0x3151F8u;
            // 0x3151f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3151FCu;
        goto label_3151fc;
    }
    ctx->pc = 0x3151F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3151FCu);
        ctx->pc = 0x3151F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3151F4u;
            // 0x3151f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3151FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3151FCu; }
            if (ctx->pc != 0x3151FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3151FCu;
label_3151fc:
    // 0x3151fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3151fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_315200:
    // 0x315200: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x315200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315204:
    // 0x315204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315208:
    // 0x315208: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x315208u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_31520c:
    // 0x31520c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x31520cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_315210:
    // 0x315210: 0x320f809  jalr        $t9
label_315214:
    if (ctx->pc == 0x315214u) {
        ctx->pc = 0x315214u;
            // 0x315214: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x315218u;
        goto label_315218;
    }
    ctx->pc = 0x315210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315218u);
        ctx->pc = 0x315214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315210u;
            // 0x315214: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315218u; }
            if (ctx->pc != 0x315218u) { return; }
        }
        }
    }
    ctx->pc = 0x315218u;
label_315218:
    // 0x315218: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x315218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_31521c:
    // 0x31521c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31521cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315220:
    // 0x315220: 0xc0bb20c  jal         func_2EC830
label_315224:
    if (ctx->pc == 0x315224u) {
        ctx->pc = 0x315224u;
            // 0x315224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315228u;
        goto label_315228;
    }
    ctx->pc = 0x315220u;
    SET_GPR_U32(ctx, 31, 0x315228u);
    ctx->pc = 0x315224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315220u;
            // 0x315224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315228u; }
        if (ctx->pc != 0x315228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315228u; }
        if (ctx->pc != 0x315228u) { return; }
    }
    ctx->pc = 0x315228u;
label_315228:
    // 0x315228: 0x3c024029  lui         $v0, 0x4029
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16425 << 16));
label_31522c:
    // 0x31522c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_315230:
    // 0x315230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x315230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315234:
    // 0x315234: 0xc0bb224  jal         func_2EC890
label_315238:
    if (ctx->pc == 0x315238u) {
        ctx->pc = 0x315238u;
            // 0x315238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31523Cu;
        goto label_31523c;
    }
    ctx->pc = 0x315234u;
    SET_GPR_U32(ctx, 31, 0x31523Cu);
    ctx->pc = 0x315238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315234u;
            // 0x315238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31523Cu; }
        if (ctx->pc != 0x31523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31523Cu; }
        if (ctx->pc != 0x31523Cu) { return; }
    }
    ctx->pc = 0x31523Cu;
label_31523c:
    // 0x31523c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315240:
    // 0x315240: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x315240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315244:
    // 0x315244: 0xc0693a0  jal         func_1A4E80
label_315248:
    if (ctx->pc == 0x315248u) {
        ctx->pc = 0x315248u;
            // 0x315248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31524Cu;
        goto label_31524c;
    }
    ctx->pc = 0x315244u;
    SET_GPR_U32(ctx, 31, 0x31524Cu);
    ctx->pc = 0x315248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315244u;
            // 0x315248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31524Cu; }
        if (ctx->pc != 0x31524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31524Cu; }
        if (ctx->pc != 0x31524Cu) { return; }
    }
    ctx->pc = 0x31524Cu;
label_31524c:
    // 0x31524c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x31524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_315250:
    // 0x315250: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x315250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315254:
    // 0x315254: 0xc0bb20c  jal         func_2EC830
label_315258:
    if (ctx->pc == 0x315258u) {
        ctx->pc = 0x315258u;
            // 0x315258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31525Cu;
        goto label_31525c;
    }
    ctx->pc = 0x315254u;
    SET_GPR_U32(ctx, 31, 0x31525Cu);
    ctx->pc = 0x315258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x315254u;
            // 0x315258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31525Cu; }
        if (ctx->pc != 0x31525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31525Cu; }
        if (ctx->pc != 0x31525Cu) { return; }
    }
    ctx->pc = 0x31525Cu;
label_31525c:
    // 0x31525c: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x31525cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_315260:
    // 0x315260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x315260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315264:
    // 0x315264: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x315264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_315268:
    // 0x315268: 0x320f809  jalr        $t9
label_31526c:
    if (ctx->pc == 0x31526Cu) {
        ctx->pc = 0x31526Cu;
            // 0x31526c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x315270u;
        goto label_315270;
    }
    ctx->pc = 0x315268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315270u);
        ctx->pc = 0x31526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315268u;
            // 0x31526c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315270u; }
            if (ctx->pc != 0x315270u) { return; }
        }
        }
    }
    ctx->pc = 0x315270u;
label_315270:
    // 0x315270: 0x1000001e  b           . + 4 + (0x1E << 2)
label_315274:
    if (ctx->pc == 0x315274u) {
        ctx->pc = 0x315278u;
        goto label_315278;
    }
    ctx->pc = 0x315270u;
    {
        const bool branch_taken_0x315270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315270) {
            ctx->pc = 0x3152ECu;
            goto label_3152ec;
        }
    }
    ctx->pc = 0x315278u;
label_315278:
    // 0x315278: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x315278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31527c:
    // 0x31527c: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x31527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
label_315280:
    // 0x315280: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x315280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_315284:
    // 0x315284: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x315284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315288:
    // 0x315288: 0x3c02c3aa  lui         $v0, 0xC3AA
    ctx->pc = 0x315288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50090 << 16));
label_31528c:
    // 0x31528c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_315290:
    // 0x315290: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_315294:
    // 0x315294: 0x320f809  jalr        $t9
label_315298:
    if (ctx->pc == 0x315298u) {
        ctx->pc = 0x315298u;
            // 0x315298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31529Cu;
        goto label_31529c;
    }
    ctx->pc = 0x315294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31529Cu);
        ctx->pc = 0x315298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315294u;
            // 0x315298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31529Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31529Cu; }
            if (ctx->pc != 0x31529Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31529Cu;
label_31529c:
    // 0x31529c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31529cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3152a0:
    // 0x3152a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3152a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3152a4:
    // 0x3152a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3152a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3152a8:
    // 0x3152a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3152a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3152ac:
    // 0x3152ac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3152acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3152b0:
    // 0x3152b0: 0x320f809  jalr        $t9
label_3152b4:
    if (ctx->pc == 0x3152B4u) {
        ctx->pc = 0x3152B4u;
            // 0x3152b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3152B8u;
        goto label_3152b8;
    }
    ctx->pc = 0x3152B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3152B8u);
        ctx->pc = 0x3152B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3152B0u;
            // 0x3152b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3152B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3152B8u; }
            if (ctx->pc != 0x3152B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3152B8u;
label_3152b8:
    // 0x3152b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3152b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3152bc:
    // 0x3152bc: 0xc0bb224  jal         func_2EC890
label_3152c0:
    if (ctx->pc == 0x3152C0u) {
        ctx->pc = 0x3152C0u;
            // 0x3152c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3152C4u;
        goto label_3152c4;
    }
    ctx->pc = 0x3152BCu;
    SET_GPR_U32(ctx, 31, 0x3152C4u);
    ctx->pc = 0x3152C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152BCu;
            // 0x3152c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152C4u; }
        if (ctx->pc != 0x3152C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152C4u; }
        if (ctx->pc != 0x3152C4u) { return; }
    }
    ctx->pc = 0x3152C4u;
label_3152c4:
    // 0x3152c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3152c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3152c8:
    // 0x3152c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3152c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3152cc:
    // 0x3152cc: 0xc0693a0  jal         func_1A4E80
label_3152d0:
    if (ctx->pc == 0x3152D0u) {
        ctx->pc = 0x3152D0u;
            // 0x3152d0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3152D4u;
        goto label_3152d4;
    }
    ctx->pc = 0x3152CCu;
    SET_GPR_U32(ctx, 31, 0x3152D4u);
    ctx->pc = 0x3152D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152CCu;
            // 0x3152d0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152D4u; }
        if (ctx->pc != 0x3152D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152D4u; }
        if (ctx->pc != 0x3152D4u) { return; }
    }
    ctx->pc = 0x3152D4u;
label_3152d4:
    // 0x3152d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3152d8:
    if (ctx->pc == 0x3152D8u) {
        ctx->pc = 0x3152DCu;
        goto label_3152dc;
    }
    ctx->pc = 0x3152D4u;
    {
        const bool branch_taken_0x3152d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3152d4) {
            ctx->pc = 0x3152ECu;
            goto label_3152ec;
        }
    }
    ctx->pc = 0x3152DCu;
label_3152dc:
    // 0x3152dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3152dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3152e0:
    // 0x3152e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3152e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3152e4:
    // 0x3152e4: 0xc0693a0  jal         func_1A4E80
label_3152e8:
    if (ctx->pc == 0x3152E8u) {
        ctx->pc = 0x3152E8u;
            // 0x3152e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3152ECu;
        goto label_3152ec;
    }
    ctx->pc = 0x3152E4u;
    SET_GPR_U32(ctx, 31, 0x3152ECu);
    ctx->pc = 0x3152E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152E4u;
            // 0x3152e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152ECu; }
        if (ctx->pc != 0x3152ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3152ECu; }
        if (ctx->pc != 0x3152ECu) { return; }
    }
    ctx->pc = 0x3152ECu;
label_3152ec:
    // 0x3152ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_3152f0:
    if (ctx->pc == 0x3152F0u) {
        ctx->pc = 0x3152F4u;
        goto label_3152f4;
    }
    ctx->pc = 0x3152ECu;
    {
        const bool branch_taken_0x3152ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3152ec) {
            ctx->pc = 0x315300u;
            goto label_315300;
        }
    }
    ctx->pc = 0x3152F4u;
label_3152f4:
    // 0x3152f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3152f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3152f8:
    // 0x3152f8: 0xc0baff4  jal         func_2EBFD0
label_3152fc:
    if (ctx->pc == 0x3152FCu) {
        ctx->pc = 0x3152FCu;
            // 0x3152fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x315300u;
        goto label_315300;
    }
    ctx->pc = 0x3152F8u;
    SET_GPR_U32(ctx, 31, 0x315300u);
    ctx->pc = 0x3152FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3152F8u;
            // 0x3152fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315300u; }
        if (ctx->pc != 0x315300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315300u; }
        if (ctx->pc != 0x315300u) { return; }
    }
    ctx->pc = 0x315300u;
label_315300:
    // 0x315300: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x315300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_315304:
    // 0x315304: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x315304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_315308:
    // 0x315308: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x315308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31530c:
    // 0x31530c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x31530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_315310:
    // 0x315310: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x315310u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_315314:
    // 0x315314: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x315314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_315318:
    // 0x315318: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x315318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31531c:
    // 0x31531c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x31531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_315320:
    // 0x315320: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x315320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_315324:
    // 0x315324: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x315324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_315328:
    // 0x315328: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x315328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31532c:
    // 0x31532c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_315330:
    // 0x315330: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x315330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_315334:
    // 0x315334: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x315334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_315338:
    // 0x315338: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x315338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31533c:
    // 0x31533c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31533cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315340:
    // 0x315340: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x315340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315344:
    // 0x315344: 0x3e00008  jr          $ra
label_315348:
    if (ctx->pc == 0x315348u) {
        ctx->pc = 0x315348u;
            // 0x315348: 0x27bd07d0  addiu       $sp, $sp, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2000));
        ctx->pc = 0x31534Cu;
        goto label_fallthrough_0x315344;
    }
    ctx->pc = 0x315344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315344u;
            // 0x315348: 0x27bd07d0  addiu       $sp, $sp, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x315344:
    ctx->pc = 0x31534Cu;
}
