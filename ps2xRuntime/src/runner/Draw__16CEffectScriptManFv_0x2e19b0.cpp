#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__16CEffectScriptManFv
// Address: 0x2e19b0 - 0x2e1e70
void Draw__16CEffectScriptManFv_0x2e19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__16CEffectScriptManFv_0x2e19b0");
#endif

    switch (ctx->pc) {
        case 0x2e19b0u: goto label_2e19b0;
        case 0x2e19b4u: goto label_2e19b4;
        case 0x2e19b8u: goto label_2e19b8;
        case 0x2e19bcu: goto label_2e19bc;
        case 0x2e19c0u: goto label_2e19c0;
        case 0x2e19c4u: goto label_2e19c4;
        case 0x2e19c8u: goto label_2e19c8;
        case 0x2e19ccu: goto label_2e19cc;
        case 0x2e19d0u: goto label_2e19d0;
        case 0x2e19d4u: goto label_2e19d4;
        case 0x2e19d8u: goto label_2e19d8;
        case 0x2e19dcu: goto label_2e19dc;
        case 0x2e19e0u: goto label_2e19e0;
        case 0x2e19e4u: goto label_2e19e4;
        case 0x2e19e8u: goto label_2e19e8;
        case 0x2e19ecu: goto label_2e19ec;
        case 0x2e19f0u: goto label_2e19f0;
        case 0x2e19f4u: goto label_2e19f4;
        case 0x2e19f8u: goto label_2e19f8;
        case 0x2e19fcu: goto label_2e19fc;
        case 0x2e1a00u: goto label_2e1a00;
        case 0x2e1a04u: goto label_2e1a04;
        case 0x2e1a08u: goto label_2e1a08;
        case 0x2e1a0cu: goto label_2e1a0c;
        case 0x2e1a10u: goto label_2e1a10;
        case 0x2e1a14u: goto label_2e1a14;
        case 0x2e1a18u: goto label_2e1a18;
        case 0x2e1a1cu: goto label_2e1a1c;
        case 0x2e1a20u: goto label_2e1a20;
        case 0x2e1a24u: goto label_2e1a24;
        case 0x2e1a28u: goto label_2e1a28;
        case 0x2e1a2cu: goto label_2e1a2c;
        case 0x2e1a30u: goto label_2e1a30;
        case 0x2e1a34u: goto label_2e1a34;
        case 0x2e1a38u: goto label_2e1a38;
        case 0x2e1a3cu: goto label_2e1a3c;
        case 0x2e1a40u: goto label_2e1a40;
        case 0x2e1a44u: goto label_2e1a44;
        case 0x2e1a48u: goto label_2e1a48;
        case 0x2e1a4cu: goto label_2e1a4c;
        case 0x2e1a50u: goto label_2e1a50;
        case 0x2e1a54u: goto label_2e1a54;
        case 0x2e1a58u: goto label_2e1a58;
        case 0x2e1a5cu: goto label_2e1a5c;
        case 0x2e1a60u: goto label_2e1a60;
        case 0x2e1a64u: goto label_2e1a64;
        case 0x2e1a68u: goto label_2e1a68;
        case 0x2e1a6cu: goto label_2e1a6c;
        case 0x2e1a70u: goto label_2e1a70;
        case 0x2e1a74u: goto label_2e1a74;
        case 0x2e1a78u: goto label_2e1a78;
        case 0x2e1a7cu: goto label_2e1a7c;
        case 0x2e1a80u: goto label_2e1a80;
        case 0x2e1a84u: goto label_2e1a84;
        case 0x2e1a88u: goto label_2e1a88;
        case 0x2e1a8cu: goto label_2e1a8c;
        case 0x2e1a90u: goto label_2e1a90;
        case 0x2e1a94u: goto label_2e1a94;
        case 0x2e1a98u: goto label_2e1a98;
        case 0x2e1a9cu: goto label_2e1a9c;
        case 0x2e1aa0u: goto label_2e1aa0;
        case 0x2e1aa4u: goto label_2e1aa4;
        case 0x2e1aa8u: goto label_2e1aa8;
        case 0x2e1aacu: goto label_2e1aac;
        case 0x2e1ab0u: goto label_2e1ab0;
        case 0x2e1ab4u: goto label_2e1ab4;
        case 0x2e1ab8u: goto label_2e1ab8;
        case 0x2e1abcu: goto label_2e1abc;
        case 0x2e1ac0u: goto label_2e1ac0;
        case 0x2e1ac4u: goto label_2e1ac4;
        case 0x2e1ac8u: goto label_2e1ac8;
        case 0x2e1accu: goto label_2e1acc;
        case 0x2e1ad0u: goto label_2e1ad0;
        case 0x2e1ad4u: goto label_2e1ad4;
        case 0x2e1ad8u: goto label_2e1ad8;
        case 0x2e1adcu: goto label_2e1adc;
        case 0x2e1ae0u: goto label_2e1ae0;
        case 0x2e1ae4u: goto label_2e1ae4;
        case 0x2e1ae8u: goto label_2e1ae8;
        case 0x2e1aecu: goto label_2e1aec;
        case 0x2e1af0u: goto label_2e1af0;
        case 0x2e1af4u: goto label_2e1af4;
        case 0x2e1af8u: goto label_2e1af8;
        case 0x2e1afcu: goto label_2e1afc;
        case 0x2e1b00u: goto label_2e1b00;
        case 0x2e1b04u: goto label_2e1b04;
        case 0x2e1b08u: goto label_2e1b08;
        case 0x2e1b0cu: goto label_2e1b0c;
        case 0x2e1b10u: goto label_2e1b10;
        case 0x2e1b14u: goto label_2e1b14;
        case 0x2e1b18u: goto label_2e1b18;
        case 0x2e1b1cu: goto label_2e1b1c;
        case 0x2e1b20u: goto label_2e1b20;
        case 0x2e1b24u: goto label_2e1b24;
        case 0x2e1b28u: goto label_2e1b28;
        case 0x2e1b2cu: goto label_2e1b2c;
        case 0x2e1b30u: goto label_2e1b30;
        case 0x2e1b34u: goto label_2e1b34;
        case 0x2e1b38u: goto label_2e1b38;
        case 0x2e1b3cu: goto label_2e1b3c;
        case 0x2e1b40u: goto label_2e1b40;
        case 0x2e1b44u: goto label_2e1b44;
        case 0x2e1b48u: goto label_2e1b48;
        case 0x2e1b4cu: goto label_2e1b4c;
        case 0x2e1b50u: goto label_2e1b50;
        case 0x2e1b54u: goto label_2e1b54;
        case 0x2e1b58u: goto label_2e1b58;
        case 0x2e1b5cu: goto label_2e1b5c;
        case 0x2e1b60u: goto label_2e1b60;
        case 0x2e1b64u: goto label_2e1b64;
        case 0x2e1b68u: goto label_2e1b68;
        case 0x2e1b6cu: goto label_2e1b6c;
        case 0x2e1b70u: goto label_2e1b70;
        case 0x2e1b74u: goto label_2e1b74;
        case 0x2e1b78u: goto label_2e1b78;
        case 0x2e1b7cu: goto label_2e1b7c;
        case 0x2e1b80u: goto label_2e1b80;
        case 0x2e1b84u: goto label_2e1b84;
        case 0x2e1b88u: goto label_2e1b88;
        case 0x2e1b8cu: goto label_2e1b8c;
        case 0x2e1b90u: goto label_2e1b90;
        case 0x2e1b94u: goto label_2e1b94;
        case 0x2e1b98u: goto label_2e1b98;
        case 0x2e1b9cu: goto label_2e1b9c;
        case 0x2e1ba0u: goto label_2e1ba0;
        case 0x2e1ba4u: goto label_2e1ba4;
        case 0x2e1ba8u: goto label_2e1ba8;
        case 0x2e1bacu: goto label_2e1bac;
        case 0x2e1bb0u: goto label_2e1bb0;
        case 0x2e1bb4u: goto label_2e1bb4;
        case 0x2e1bb8u: goto label_2e1bb8;
        case 0x2e1bbcu: goto label_2e1bbc;
        case 0x2e1bc0u: goto label_2e1bc0;
        case 0x2e1bc4u: goto label_2e1bc4;
        case 0x2e1bc8u: goto label_2e1bc8;
        case 0x2e1bccu: goto label_2e1bcc;
        case 0x2e1bd0u: goto label_2e1bd0;
        case 0x2e1bd4u: goto label_2e1bd4;
        case 0x2e1bd8u: goto label_2e1bd8;
        case 0x2e1bdcu: goto label_2e1bdc;
        case 0x2e1be0u: goto label_2e1be0;
        case 0x2e1be4u: goto label_2e1be4;
        case 0x2e1be8u: goto label_2e1be8;
        case 0x2e1becu: goto label_2e1bec;
        case 0x2e1bf0u: goto label_2e1bf0;
        case 0x2e1bf4u: goto label_2e1bf4;
        case 0x2e1bf8u: goto label_2e1bf8;
        case 0x2e1bfcu: goto label_2e1bfc;
        case 0x2e1c00u: goto label_2e1c00;
        case 0x2e1c04u: goto label_2e1c04;
        case 0x2e1c08u: goto label_2e1c08;
        case 0x2e1c0cu: goto label_2e1c0c;
        case 0x2e1c10u: goto label_2e1c10;
        case 0x2e1c14u: goto label_2e1c14;
        case 0x2e1c18u: goto label_2e1c18;
        case 0x2e1c1cu: goto label_2e1c1c;
        case 0x2e1c20u: goto label_2e1c20;
        case 0x2e1c24u: goto label_2e1c24;
        case 0x2e1c28u: goto label_2e1c28;
        case 0x2e1c2cu: goto label_2e1c2c;
        case 0x2e1c30u: goto label_2e1c30;
        case 0x2e1c34u: goto label_2e1c34;
        case 0x2e1c38u: goto label_2e1c38;
        case 0x2e1c3cu: goto label_2e1c3c;
        case 0x2e1c40u: goto label_2e1c40;
        case 0x2e1c44u: goto label_2e1c44;
        case 0x2e1c48u: goto label_2e1c48;
        case 0x2e1c4cu: goto label_2e1c4c;
        case 0x2e1c50u: goto label_2e1c50;
        case 0x2e1c54u: goto label_2e1c54;
        case 0x2e1c58u: goto label_2e1c58;
        case 0x2e1c5cu: goto label_2e1c5c;
        case 0x2e1c60u: goto label_2e1c60;
        case 0x2e1c64u: goto label_2e1c64;
        case 0x2e1c68u: goto label_2e1c68;
        case 0x2e1c6cu: goto label_2e1c6c;
        case 0x2e1c70u: goto label_2e1c70;
        case 0x2e1c74u: goto label_2e1c74;
        case 0x2e1c78u: goto label_2e1c78;
        case 0x2e1c7cu: goto label_2e1c7c;
        case 0x2e1c80u: goto label_2e1c80;
        case 0x2e1c84u: goto label_2e1c84;
        case 0x2e1c88u: goto label_2e1c88;
        case 0x2e1c8cu: goto label_2e1c8c;
        case 0x2e1c90u: goto label_2e1c90;
        case 0x2e1c94u: goto label_2e1c94;
        case 0x2e1c98u: goto label_2e1c98;
        case 0x2e1c9cu: goto label_2e1c9c;
        case 0x2e1ca0u: goto label_2e1ca0;
        case 0x2e1ca4u: goto label_2e1ca4;
        case 0x2e1ca8u: goto label_2e1ca8;
        case 0x2e1cacu: goto label_2e1cac;
        case 0x2e1cb0u: goto label_2e1cb0;
        case 0x2e1cb4u: goto label_2e1cb4;
        case 0x2e1cb8u: goto label_2e1cb8;
        case 0x2e1cbcu: goto label_2e1cbc;
        case 0x2e1cc0u: goto label_2e1cc0;
        case 0x2e1cc4u: goto label_2e1cc4;
        case 0x2e1cc8u: goto label_2e1cc8;
        case 0x2e1cccu: goto label_2e1ccc;
        case 0x2e1cd0u: goto label_2e1cd0;
        case 0x2e1cd4u: goto label_2e1cd4;
        case 0x2e1cd8u: goto label_2e1cd8;
        case 0x2e1cdcu: goto label_2e1cdc;
        case 0x2e1ce0u: goto label_2e1ce0;
        case 0x2e1ce4u: goto label_2e1ce4;
        case 0x2e1ce8u: goto label_2e1ce8;
        case 0x2e1cecu: goto label_2e1cec;
        case 0x2e1cf0u: goto label_2e1cf0;
        case 0x2e1cf4u: goto label_2e1cf4;
        case 0x2e1cf8u: goto label_2e1cf8;
        case 0x2e1cfcu: goto label_2e1cfc;
        case 0x2e1d00u: goto label_2e1d00;
        case 0x2e1d04u: goto label_2e1d04;
        case 0x2e1d08u: goto label_2e1d08;
        case 0x2e1d0cu: goto label_2e1d0c;
        case 0x2e1d10u: goto label_2e1d10;
        case 0x2e1d14u: goto label_2e1d14;
        case 0x2e1d18u: goto label_2e1d18;
        case 0x2e1d1cu: goto label_2e1d1c;
        case 0x2e1d20u: goto label_2e1d20;
        case 0x2e1d24u: goto label_2e1d24;
        case 0x2e1d28u: goto label_2e1d28;
        case 0x2e1d2cu: goto label_2e1d2c;
        case 0x2e1d30u: goto label_2e1d30;
        case 0x2e1d34u: goto label_2e1d34;
        case 0x2e1d38u: goto label_2e1d38;
        case 0x2e1d3cu: goto label_2e1d3c;
        case 0x2e1d40u: goto label_2e1d40;
        case 0x2e1d44u: goto label_2e1d44;
        case 0x2e1d48u: goto label_2e1d48;
        case 0x2e1d4cu: goto label_2e1d4c;
        case 0x2e1d50u: goto label_2e1d50;
        case 0x2e1d54u: goto label_2e1d54;
        case 0x2e1d58u: goto label_2e1d58;
        case 0x2e1d5cu: goto label_2e1d5c;
        case 0x2e1d60u: goto label_2e1d60;
        case 0x2e1d64u: goto label_2e1d64;
        case 0x2e1d68u: goto label_2e1d68;
        case 0x2e1d6cu: goto label_2e1d6c;
        case 0x2e1d70u: goto label_2e1d70;
        case 0x2e1d74u: goto label_2e1d74;
        case 0x2e1d78u: goto label_2e1d78;
        case 0x2e1d7cu: goto label_2e1d7c;
        case 0x2e1d80u: goto label_2e1d80;
        case 0x2e1d84u: goto label_2e1d84;
        case 0x2e1d88u: goto label_2e1d88;
        case 0x2e1d8cu: goto label_2e1d8c;
        case 0x2e1d90u: goto label_2e1d90;
        case 0x2e1d94u: goto label_2e1d94;
        case 0x2e1d98u: goto label_2e1d98;
        case 0x2e1d9cu: goto label_2e1d9c;
        case 0x2e1da0u: goto label_2e1da0;
        case 0x2e1da4u: goto label_2e1da4;
        case 0x2e1da8u: goto label_2e1da8;
        case 0x2e1dacu: goto label_2e1dac;
        case 0x2e1db0u: goto label_2e1db0;
        case 0x2e1db4u: goto label_2e1db4;
        case 0x2e1db8u: goto label_2e1db8;
        case 0x2e1dbcu: goto label_2e1dbc;
        case 0x2e1dc0u: goto label_2e1dc0;
        case 0x2e1dc4u: goto label_2e1dc4;
        case 0x2e1dc8u: goto label_2e1dc8;
        case 0x2e1dccu: goto label_2e1dcc;
        case 0x2e1dd0u: goto label_2e1dd0;
        case 0x2e1dd4u: goto label_2e1dd4;
        case 0x2e1dd8u: goto label_2e1dd8;
        case 0x2e1ddcu: goto label_2e1ddc;
        case 0x2e1de0u: goto label_2e1de0;
        case 0x2e1de4u: goto label_2e1de4;
        case 0x2e1de8u: goto label_2e1de8;
        case 0x2e1decu: goto label_2e1dec;
        case 0x2e1df0u: goto label_2e1df0;
        case 0x2e1df4u: goto label_2e1df4;
        case 0x2e1df8u: goto label_2e1df8;
        case 0x2e1dfcu: goto label_2e1dfc;
        case 0x2e1e00u: goto label_2e1e00;
        case 0x2e1e04u: goto label_2e1e04;
        case 0x2e1e08u: goto label_2e1e08;
        case 0x2e1e0cu: goto label_2e1e0c;
        case 0x2e1e10u: goto label_2e1e10;
        case 0x2e1e14u: goto label_2e1e14;
        case 0x2e1e18u: goto label_2e1e18;
        case 0x2e1e1cu: goto label_2e1e1c;
        case 0x2e1e20u: goto label_2e1e20;
        case 0x2e1e24u: goto label_2e1e24;
        case 0x2e1e28u: goto label_2e1e28;
        case 0x2e1e2cu: goto label_2e1e2c;
        case 0x2e1e30u: goto label_2e1e30;
        case 0x2e1e34u: goto label_2e1e34;
        case 0x2e1e38u: goto label_2e1e38;
        case 0x2e1e3cu: goto label_2e1e3c;
        case 0x2e1e40u: goto label_2e1e40;
        case 0x2e1e44u: goto label_2e1e44;
        case 0x2e1e48u: goto label_2e1e48;
        case 0x2e1e4cu: goto label_2e1e4c;
        case 0x2e1e50u: goto label_2e1e50;
        case 0x2e1e54u: goto label_2e1e54;
        case 0x2e1e58u: goto label_2e1e58;
        case 0x2e1e5cu: goto label_2e1e5c;
        case 0x2e1e60u: goto label_2e1e60;
        case 0x2e1e64u: goto label_2e1e64;
        case 0x2e1e68u: goto label_2e1e68;
        case 0x2e1e6cu: goto label_2e1e6c;
        default: break;
    }

    ctx->pc = 0x2e19b0u;

label_2e19b0:
    // 0x2e19b0: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x2e19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
label_2e19b4:
    // 0x2e19b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e19b8:
    // 0x2e19b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e19bc:
    // 0x2e19bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e19c0:
    // 0x2e19c0: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x2e19c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_2e19c4:
    // 0x2e19c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e19c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e19c8:
    // 0x2e19c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e19cc:
    // 0x2e19cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e19ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e19d0:
    // 0x2e19d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e19d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e19d4:
    // 0x2e19d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e19d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e19d8:
    // 0x2e19d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e19dc:
    // 0x2e19dc: 0x8c901188  lw          $s0, 0x1188($a0)
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4488)));
label_2e19e0:
    // 0x2e19e0: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
label_2e19e4:
    // 0x2e19e4: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2e19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2e19e8:
    // 0x2e19e8: 0xc0a0f58  jal         func_283D60
label_2e19ec:
    if (ctx->pc == 0x2E19ECu) {
        ctx->pc = 0x2E19ECu;
            // 0x2e19ec: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
        ctx->pc = 0x2E19F0u;
        goto label_2e19f0;
    }
    ctx->pc = 0x2E19E8u;
    SET_GPR_U32(ctx, 31, 0x2E19F0u);
    ctx->pc = 0x2E19ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E19E8u;
            // 0x2e19ec: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19F0u; }
        if (ctx->pc != 0x2E19F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19F0u; }
        if (ctx->pc != 0x2E19F0u) { return; }
    }
    ctx->pc = 0x2E19F0u;
label_2e19f0:
    // 0x2e19f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e19f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e19f4:
    // 0x2e19f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e19f8:
    // 0x2e19f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e19f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e19fc:
    // 0x2e19fc: 0xc049c86  jal         func_127218
label_2e1a00:
    if (ctx->pc == 0x2E1A00u) {
        ctx->pc = 0x2E1A00u;
            // 0x2e1a00: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->pc = 0x2E1A04u;
        goto label_2e1a04;
    }
    ctx->pc = 0x2E19FCu;
    SET_GPR_U32(ctx, 31, 0x2E1A04u);
    ctx->pc = 0x2E1A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E19FCu;
            // 0x2e1a00: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A04u; }
        if (ctx->pc != 0x2E1A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A04u; }
        if (ctx->pc != 0x2E1A04u) { return; }
    }
    ctx->pc = 0x2E1A04u;
label_2e1a04:
    // 0x2e1a04: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2e1a08:
    if (ctx->pc == 0x2E1A08u) {
        ctx->pc = 0x2E1A08u;
            // 0x2e1a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A0Cu;
        goto label_2e1a0c;
    }
    ctx->pc = 0x2E1A04u;
    {
        const bool branch_taken_0x2e1a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A04u;
            // 0x2e1a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a04) {
            ctx->pc = 0x2E1A14u;
            goto label_2e1a14;
        }
    }
    ctx->pc = 0x2E1A0Cu;
label_2e1a0c:
    // 0x2e1a0c: 0xc058524  jal         func_161490
label_2e1a10:
    if (ctx->pc == 0x2E1A10u) {
        ctx->pc = 0x2E1A10u;
            // 0x2e1a10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E1A14u;
        goto label_2e1a14;
    }
    ctx->pc = 0x2E1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A14u);
    ctx->pc = 0x2E1A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A0Cu;
            // 0x2e1a10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (runtime->hasFunction(0x161490u)) {
        auto targetFn = runtime->lookupFunction(0x161490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A14u; }
        if (ctx->pc != 0x2E1A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A14u; }
        if (ctx->pc != 0x2E1A14u) { return; }
    }
    ctx->pc = 0x2E1A14u;
label_2e1a14:
    // 0x2e1a14: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
label_2e1a18:
    if (ctx->pc == 0x2E1A18u) {
        ctx->pc = 0x2E1A1Cu;
        goto label_2e1a1c;
    }
    ctx->pc = 0x2E1A14u;
    {
        const bool branch_taken_0x2e1a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a14) {
            ctx->pc = 0x2E1C88u;
            goto label_2e1c88;
        }
    }
    ctx->pc = 0x2E1A1Cu;
label_2e1a1c:
    // 0x2e1a1c: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x2e1a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_2e1a20:
    // 0x2e1a20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e1a24:
    // 0x2e1a24: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2e1a28:
    if (ctx->pc == 0x2E1A28u) {
        ctx->pc = 0x2E1A28u;
            // 0x2e1a28: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2E1A2Cu;
        goto label_2e1a2c;
    }
    ctx->pc = 0x2E1A24u;
    {
        const bool branch_taken_0x2e1a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E1A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A24u;
            // 0x2e1a28: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a24) {
            ctx->pc = 0x2E1A34u;
            goto label_2e1a34;
        }
    }
    ctx->pc = 0x2E1A2Cu;
label_2e1a2c:
    // 0x2e1a2c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2e1a30:
    if (ctx->pc == 0x2E1A30u) {
        ctx->pc = 0x2E1A34u;
        goto label_2e1a34;
    }
    ctx->pc = 0x2E1A2Cu;
    {
        const bool branch_taken_0x2e1a2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1a2c) {
            ctx->pc = 0x2E1A40u;
            goto label_2e1a40;
        }
    }
    ctx->pc = 0x2E1A34u;
label_2e1a34:
    // 0x2e1a34: 0x0  nop
    ctx->pc = 0x2e1a34u;
    // NOP
label_2e1a38:
    // 0x2e1a38: 0x10000091  b           . + 4 + (0x91 << 2)
label_2e1a3c:
    if (ctx->pc == 0x2E1A3Cu) {
        ctx->pc = 0x2E1A3Cu;
            // 0x2e1a3c: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->pc = 0x2E1A40u;
        goto label_2e1a40;
    }
    ctx->pc = 0x2E1A38u;
    {
        const bool branch_taken_0x2e1a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A38u;
            // 0x2e1a3c: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a38) {
            ctx->pc = 0x2E1C80u;
            goto label_2e1c80;
        }
    }
    ctx->pc = 0x2E1A40u;
label_2e1a40:
    // 0x2e1a40: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2e1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e1a44:
    // 0x2e1a44: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_2e1a48:
    if (ctx->pc == 0x2E1A48u) {
        ctx->pc = 0x2E1A4Cu;
        goto label_2e1a4c;
    }
    ctx->pc = 0x2E1A44u;
    {
        const bool branch_taken_0x2e1a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a44) {
            ctx->pc = 0x2E1C78u;
            goto label_2e1c78;
        }
    }
    ctx->pc = 0x2E1A4Cu;
label_2e1a4c:
    // 0x2e1a4c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e1a50:
    // 0x2e1a50: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2e1a54:
    if (ctx->pc == 0x2E1A54u) {
        ctx->pc = 0x2E1A58u;
        goto label_2e1a58;
    }
    ctx->pc = 0x2E1A50u;
    {
        const bool branch_taken_0x2e1a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a50) {
            ctx->pc = 0x2E1B14u;
            goto label_2e1b14;
        }
    }
    ctx->pc = 0x2E1A58u;
label_2e1a58:
    // 0x2e1a58: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2e1a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e1a5c:
    // 0x2e1a5c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2e1a60:
    if (ctx->pc == 0x2E1A60u) {
        ctx->pc = 0x2E1A60u;
            // 0x2e1a60: 0x28a10080  slti        $at, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->pc = 0x2E1A64u;
        goto label_2e1a64;
    }
    ctx->pc = 0x2E1A5Cu;
    {
        const bool branch_taken_0x2e1a5c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E1A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A5Cu;
            // 0x2e1a60: 0x28a10080  slti        $at, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a5c) {
            ctx->pc = 0x2E1A6Cu;
            goto label_2e1a6c;
        }
    }
    ctx->pc = 0x2E1A64u;
label_2e1a64:
    // 0x2e1a64: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_2e1a68:
    if (ctx->pc == 0x2E1A68u) {
        ctx->pc = 0x2E1A6Cu;
        goto label_2e1a6c;
    }
    ctx->pc = 0x2E1A64u;
    {
        const bool branch_taken_0x2e1a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a64) {
            ctx->pc = 0x2E1B14u;
            goto label_2e1b14;
        }
    }
    ctx->pc = 0x2E1A6Cu;
label_2e1a6c:
    // 0x2e1a6c: 0x0  nop
    ctx->pc = 0x2e1a6cu;
    // NOP
label_2e1a70:
    // 0x2e1a70: 0xc0a0ed8  jal         func_283B60
label_2e1a74:
    if (ctx->pc == 0x2E1A74u) {
        ctx->pc = 0x2E1A74u;
            // 0x2e1a74: 0x8f849ec8  lw          $a0, -0x6138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
        ctx->pc = 0x2E1A78u;
        goto label_2e1a78;
    }
    ctx->pc = 0x2E1A70u;
    SET_GPR_U32(ctx, 31, 0x2E1A78u);
    ctx->pc = 0x2E1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A70u;
            // 0x2e1a74: 0x8f849ec8  lw          $a0, -0x6138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A78u; }
        if (ctx->pc != 0x2E1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A78u; }
        if (ctx->pc != 0x2E1A78u) { return; }
    }
    ctx->pc = 0x2E1A78u;
label_2e1a78:
    // 0x2e1a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a7c:
    // 0x2e1a7c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_2e1a80:
    if (ctx->pc == 0x2E1A80u) {
        ctx->pc = 0x2E1A84u;
        goto label_2e1a84;
    }
    ctx->pc = 0x2E1A7Cu;
    {
        const bool branch_taken_0x2e1a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a7c) {
            ctx->pc = 0x2E1AFCu;
            goto label_2e1afc;
        }
    }
    ctx->pc = 0x2E1A84u;
label_2e1a84:
    // 0x2e1a84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e1a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1a88:
    // 0x2e1a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a8c:
    // 0x2e1a8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e1a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e1a90:
    // 0x2e1a90: 0x320f809  jalr        $t9
label_2e1a94:
    if (ctx->pc == 0x2E1A94u) {
        ctx->pc = 0x2E1A94u;
            // 0x2e1a94: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x2E1A98u;
        goto label_2e1a98;
    }
    ctx->pc = 0x2E1A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1A98u);
        ctx->pc = 0x2E1A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A90u;
            // 0x2e1a94: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A98u; }
            if (ctx->pc != 0x2E1A98u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1A98u;
label_2e1a98:
    // 0x2e1a98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e1a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2e1a9c:
    // 0x2e1a9c: 0x260400c4  addiu       $a0, $s0, 0xC4
    ctx->pc = 0x2e1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
label_2e1aa0:
    // 0x2e1aa0: 0xc04a38a  jal         func_128E28
label_2e1aa4:
    if (ctx->pc == 0x2E1AA4u) {
        ctx->pc = 0x2E1AA4u;
            // 0x2e1aa4: 0x24a51258  addiu       $a1, $a1, 0x1258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
        ctx->pc = 0x2E1AA8u;
        goto label_2e1aa8;
    }
    ctx->pc = 0x2E1AA0u;
    SET_GPR_U32(ctx, 31, 0x2E1AA8u);
    ctx->pc = 0x2E1AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1AA0u;
            // 0x2e1aa4: 0x24a51258  addiu       $a1, $a1, 0x1258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AA8u; }
        if (ctx->pc != 0x2E1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AA8u; }
        if (ctx->pc != 0x2E1AA8u) { return; }
    }
    ctx->pc = 0x2E1AA8u;
label_2e1aa8:
    // 0x2e1aa8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2e1aac:
    if (ctx->pc == 0x2E1AACu) {
        ctx->pc = 0x2E1AB0u;
        goto label_2e1ab0;
    }
    ctx->pc = 0x2E1AA8u;
    {
        const bool branch_taken_0x2e1aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1aa8) {
            ctx->pc = 0x2E1AE4u;
            goto label_2e1ae4;
        }
    }
    ctx->pc = 0x2E1AB0u;
label_2e1ab0:
    // 0x2e1ab0: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2e1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e1ab4:
    // 0x2e1ab4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2e1ab8:
    if (ctx->pc == 0x2E1AB8u) {
        ctx->pc = 0x2E1AB8u;
            // 0x2e1ab8: 0x260500c4  addiu       $a1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->pc = 0x2E1ABCu;
        goto label_2e1abc;
    }
    ctx->pc = 0x2E1AB4u;
    {
        const bool branch_taken_0x2e1ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1AB4u;
            // 0x2e1ab8: 0x260500c4  addiu       $a1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ab4) {
            ctx->pc = 0x2E1AE4u;
            goto label_2e1ae4;
        }
    }
    ctx->pc = 0x2E1ABCu;
label_2e1abc:
    // 0x2e1abc: 0xc04ddb4  jal         func_1376D0
label_2e1ac0:
    if (ctx->pc == 0x2E1AC0u) {
        ctx->pc = 0x2E1AC4u;
        goto label_2e1ac4;
    }
    ctx->pc = 0x2E1ABCu;
    SET_GPR_U32(ctx, 31, 0x2E1AC4u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AC4u; }
        if (ctx->pc != 0x2E1AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AC4u; }
        if (ctx->pc != 0x2E1AC4u) { return; }
    }
    ctx->pc = 0x2E1AC4u;
label_2e1ac4:
    // 0x2e1ac4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e1ac8:
    if (ctx->pc == 0x2E1AC8u) {
        ctx->pc = 0x2E1AC8u;
            // 0x2e1ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1ACCu;
        goto label_2e1acc;
    }
    ctx->pc = 0x2E1AC4u;
    {
        const bool branch_taken_0x2e1ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1AC4u;
            // 0x2e1ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ac4) {
            ctx->pc = 0x2E1AE4u;
            goto label_2e1ae4;
        }
    }
    ctx->pc = 0x2E1ACCu;
label_2e1acc:
    // 0x2e1acc: 0xc04de0c  jal         func_137830
label_2e1ad0:
    if (ctx->pc == 0x2E1AD0u) {
        ctx->pc = 0x2E1AD0u;
            // 0x2e1ad0: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x2E1AD4u;
        goto label_2e1ad4;
    }
    ctx->pc = 0x2E1ACCu;
    SET_GPR_U32(ctx, 31, 0x2E1AD4u);
    ctx->pc = 0x2E1AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1ACCu;
            // 0x2e1ad0: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AD4u; }
        if (ctx->pc != 0x2E1AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AD4u; }
        if (ctx->pc != 0x2E1AD4u) { return; }
    }
    ctx->pc = 0x2E1AD4u;
label_2e1ad4:
    // 0x2e1ad4: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x2e1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2e1ad8:
    // 0x2e1ad8: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x2e1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2e1adc:
    // 0x2e1adc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e1adcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1ae0:
    // 0x2e1ae0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2e1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2e1ae4:
    // 0x2e1ae4: 0x0  nop
    ctx->pc = 0x2e1ae4u;
    // NOP
label_2e1ae8:
    // 0x2e1ae8: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x2e1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2e1aec:
    // 0x2e1aec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e1aecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1af0:
    // 0x2e1af0: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x2e1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2e1af4:
    // 0x2e1af4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e1af8:
    if (ctx->pc == 0x2E1AF8u) {
        ctx->pc = 0x2E1AF8u;
            // 0x2e1af8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2E1AFCu;
        goto label_2e1afc;
    }
    ctx->pc = 0x2E1AF4u;
    {
        const bool branch_taken_0x2e1af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1AF4u;
            // 0x2e1af8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1af4) {
            ctx->pc = 0x2E1B28u;
            goto label_2e1b28;
        }
    }
    ctx->pc = 0x2E1AFCu;
label_2e1afc:
    // 0x2e1afc: 0x0  nop
    ctx->pc = 0x2e1afcu;
    // NOP
label_2e1b00:
    // 0x2e1b00: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x2e1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_2e1b04:
    // 0x2e1b04: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x2e1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_2e1b08:
    // 0x2e1b08: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x2e1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_2e1b0c:
    // 0x2e1b0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e1b10:
    if (ctx->pc == 0x2E1B10u) {
        ctx->pc = 0x2E1B10u;
            // 0x2e1b10: 0xafa0025c  sw          $zero, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
        ctx->pc = 0x2E1B14u;
        goto label_2e1b14;
    }
    ctx->pc = 0x2E1B0Cu;
    {
        const bool branch_taken_0x2e1b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B0Cu;
            // 0x2e1b10: 0xafa0025c  sw          $zero, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b0c) {
            ctx->pc = 0x2E1B28u;
            goto label_2e1b28;
        }
    }
    ctx->pc = 0x2E1B14u;
label_2e1b14:
    // 0x2e1b14: 0x0  nop
    ctx->pc = 0x2e1b14u;
    // NOP
label_2e1b18:
    // 0x2e1b18: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x2e1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_2e1b1c:
    // 0x2e1b1c: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x2e1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_2e1b20:
    // 0x2e1b20: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x2e1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
label_2e1b24:
    // 0x2e1b24: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x2e1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
label_2e1b28:
    // 0x2e1b28: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x2e1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2e1b2c:
    // 0x2e1b2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e1b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b30:
    // 0x2e1b30: 0xc041c38  jal         func_1070E0
label_2e1b34:
    if (ctx->pc == 0x2E1B34u) {
        ctx->pc = 0x2E1B34u;
            // 0x2e1b34: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->pc = 0x2E1B38u;
        goto label_2e1b38;
    }
    ctx->pc = 0x2E1B30u;
    SET_GPR_U32(ctx, 31, 0x2E1B38u);
    ctx->pc = 0x2E1B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B30u;
            // 0x2e1b34: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B38u; }
        if (ctx->pc != 0x2E1B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B38u; }
        if (ctx->pc != 0x2E1B38u) { return; }
    }
    ctx->pc = 0x2E1B38u;
label_2e1b38:
    // 0x2e1b38: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x2e1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
label_2e1b3c:
    // 0x2e1b3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e1b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b40:
    // 0x2e1b40: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2e1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2e1b44:
    // 0x2e1b44: 0xc04ba14  jal         func_12E850
label_2e1b48:
    if (ctx->pc == 0x2E1B48u) {
        ctx->pc = 0x2E1B48u;
            // 0x2e1b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B4Cu;
        goto label_2e1b4c;
    }
    ctx->pc = 0x2E1B44u;
    SET_GPR_U32(ctx, 31, 0x2E1B4Cu);
    ctx->pc = 0x2E1B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B44u;
            // 0x2e1b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B4Cu; }
        if (ctx->pc != 0x2E1B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B4Cu; }
        if (ctx->pc != 0x2E1B4Cu) { return; }
    }
    ctx->pc = 0x2E1B4Cu;
label_2e1b4c:
    // 0x2e1b4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e1b50:
    // 0x2e1b50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1b54:
    // 0x2e1b54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e1b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e1b58:
    // 0x2e1b58: 0x320f809  jalr        $t9
label_2e1b5c:
    if (ctx->pc == 0x2E1B5Cu) {
        ctx->pc = 0x2E1B5Cu;
            // 0x2e1b5c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2E1B60u;
        goto label_2e1b60;
    }
    ctx->pc = 0x2E1B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1B60u);
        ctx->pc = 0x2E1B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B58u;
            // 0x2e1b5c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B60u; }
            if (ctx->pc != 0x2E1B60u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1B60u;
label_2e1b60:
    // 0x2e1b60: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2e1b64:
    // 0x2e1b64: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x2e1b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2e1b68:
    // 0x2e1b68: 0xc041c38  jal         func_1070E0
label_2e1b6c:
    if (ctx->pc == 0x2E1B6Cu) {
        ctx->pc = 0x2E1B6Cu;
            // 0x2e1b6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B70u;
        goto label_2e1b70;
    }
    ctx->pc = 0x2E1B68u;
    SET_GPR_U32(ctx, 31, 0x2E1B70u);
    ctx->pc = 0x2E1B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B68u;
            // 0x2e1b6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B70u; }
        if (ctx->pc != 0x2E1B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B70u; }
        if (ctx->pc != 0x2E1B70u) { return; }
    }
    ctx->pc = 0x2E1B70u;
label_2e1b70:
    // 0x2e1b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e1b74:
    // 0x2e1b74: 0x27b1028c  addiu       $s1, $sp, 0x28C
    ctx->pc = 0x2e1b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_2e1b78:
    // 0x2e1b78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e1b7c:
    // 0x2e1b7c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e1b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e1b80:
    // 0x2e1b80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1b84:
    // 0x2e1b84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e1b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e1b88:
    // 0x2e1b88: 0x320f809  jalr        $t9
label_2e1b8c:
    if (ctx->pc == 0x2E1B8Cu) {
        ctx->pc = 0x2E1B8Cu;
            // 0x2e1b8c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2E1B90u;
        goto label_2e1b90;
    }
    ctx->pc = 0x2E1B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1B90u);
        ctx->pc = 0x2E1B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B88u;
            // 0x2e1b8c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1B90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B90u; }
            if (ctx->pc != 0x2E1B90u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1B90u;
label_2e1b90:
    // 0x2e1b90: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e1b94:
    // 0x2e1b94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1b98:
    // 0x2e1b98: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2e1b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2e1b9c:
    // 0x2e1b9c: 0x320f809  jalr        $t9
label_2e1ba0:
    if (ctx->pc == 0x2E1BA0u) {
        ctx->pc = 0x2E1BA4u;
        goto label_2e1ba4;
    }
    ctx->pc = 0x2E1B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1BA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1BA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1BA4u; }
            if (ctx->pc != 0x2E1BA4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1BA4u;
label_2e1ba4:
    // 0x2e1ba4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2e1ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2e1ba8:
    // 0x2e1ba8: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x2e1ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2e1bac:
    // 0x2e1bac: 0xc041c3e  jal         func_1070F8
label_2e1bb0:
    if (ctx->pc == 0x2E1BB0u) {
        ctx->pc = 0x2E1BB0u;
            // 0x2e1bb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BB4u;
        goto label_2e1bb4;
    }
    ctx->pc = 0x2E1BACu;
    SET_GPR_U32(ctx, 31, 0x2E1BB4u);
    ctx->pc = 0x2E1BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1BACu;
            // 0x2e1bb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1BB4u; }
        if (ctx->pc != 0x2E1BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1BB4u; }
        if (ctx->pc != 0x2E1BB4u) { return; }
    }
    ctx->pc = 0x2E1BB4u;
label_2e1bb4:
    // 0x2e1bb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e1bb8:
    // 0x2e1bb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e1bbc:
    // 0x2e1bbc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e1bc0:
    // 0x2e1bc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1bc4:
    // 0x2e1bc4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e1bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e1bc8:
    // 0x2e1bc8: 0x320f809  jalr        $t9
label_2e1bcc:
    if (ctx->pc == 0x2E1BCCu) {
        ctx->pc = 0x2E1BCCu;
            // 0x2e1bcc: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2E1BD0u;
        goto label_2e1bd0;
    }
    ctx->pc = 0x2E1BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1BD0u);
        ctx->pc = 0x2E1BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1BC8u;
            // 0x2e1bcc: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1BD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1BD0u; }
            if (ctx->pc != 0x2E1BD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1BD0u;
label_2e1bd0:
    // 0x2e1bd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e1bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1bd4:
    // 0x2e1bd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1bd8:
    // 0x2e1bd8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2e1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2e1bdc:
    // 0x2e1bdc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2e1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e1be0:
    // 0x2e1be0: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_2e1be4:
    if (ctx->pc == 0x2E1BE4u) {
        ctx->pc = 0x2E1BE4u;
            // 0x2e1be4: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x2E1BE8u;
        goto label_2e1be8;
    }
    ctx->pc = 0x2E1BE0u;
    {
        const bool branch_taken_0x2e1be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1BE0u;
            // 0x2e1be4: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1be0) {
            ctx->pc = 0x2E1C68u;
            goto label_2e1c68;
        }
    }
    ctx->pc = 0x2E1BE8u;
label_2e1be8:
    // 0x2e1be8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1bec:
    // 0x2e1bec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e1becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e1bf0:
    // 0x2e1bf0: 0x320f809  jalr        $t9
label_2e1bf4:
    if (ctx->pc == 0x2E1BF4u) {
        ctx->pc = 0x2E1BF4u;
            // 0x2e1bf4: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x2E1BF8u;
        goto label_2e1bf8;
    }
    ctx->pc = 0x2E1BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1BF8u);
        ctx->pc = 0x2E1BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1BF0u;
            // 0x2e1bf4: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1BF8u; }
            if (ctx->pc != 0x2E1BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1BF8u;
label_2e1bf8:
    // 0x2e1bf8: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2e1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2e1bfc:
    // 0x2e1bfc: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x2e1bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2e1c00:
    // 0x2e1c00: 0xc041c38  jal         func_1070E0
label_2e1c04:
    if (ctx->pc == 0x2E1C04u) {
        ctx->pc = 0x2E1C04u;
            // 0x2e1c04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C08u;
        goto label_2e1c08;
    }
    ctx->pc = 0x2E1C00u;
    SET_GPR_U32(ctx, 31, 0x2E1C08u);
    ctx->pc = 0x2E1C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C00u;
            // 0x2e1c04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C08u; }
        if (ctx->pc != 0x2E1C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C08u; }
        if (ctx->pc != 0x2E1C08u) { return; }
    }
    ctx->pc = 0x2E1C08u;
label_2e1c08:
    // 0x2e1c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e1c0c:
    // 0x2e1c0c: 0x27b5029c  addiu       $s5, $sp, 0x29C
    ctx->pc = 0x2e1c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_2e1c10:
    // 0x2e1c10: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2e1c14:
    // 0x2e1c14: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e1c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e1c18:
    // 0x2e1c18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1c1c:
    // 0x2e1c1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e1c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e1c20:
    // 0x2e1c20: 0x320f809  jalr        $t9
label_2e1c24:
    if (ctx->pc == 0x2E1C24u) {
        ctx->pc = 0x2E1C24u;
            // 0x2e1c24: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x2E1C28u;
        goto label_2e1c28;
    }
    ctx->pc = 0x2E1C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1C28u);
        ctx->pc = 0x2E1C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C20u;
            // 0x2e1c24: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C28u; }
            if (ctx->pc != 0x2E1C28u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1C28u;
label_2e1c28:
    // 0x2e1c28: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e1c2c:
    // 0x2e1c2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1c30:
    // 0x2e1c30: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2e1c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2e1c34:
    // 0x2e1c34: 0x320f809  jalr        $t9
label_2e1c38:
    if (ctx->pc == 0x2E1C38u) {
        ctx->pc = 0x2E1C3Cu;
        goto label_2e1c3c;
    }
    ctx->pc = 0x2E1C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1C3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C3Cu; }
            if (ctx->pc != 0x2E1C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E1C3Cu;
label_2e1c3c:
    // 0x2e1c3c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2e1c40:
    // 0x2e1c40: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x2e1c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2e1c44:
    // 0x2e1c44: 0xc041c3e  jal         func_1070F8
label_2e1c48:
    if (ctx->pc == 0x2E1C48u) {
        ctx->pc = 0x2E1C48u;
            // 0x2e1c48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C4Cu;
        goto label_2e1c4c;
    }
    ctx->pc = 0x2E1C44u;
    SET_GPR_U32(ctx, 31, 0x2E1C4Cu);
    ctx->pc = 0x2E1C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C44u;
            // 0x2e1c48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C4Cu; }
        if (ctx->pc != 0x2E1C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C4Cu; }
        if (ctx->pc != 0x2E1C4Cu) { return; }
    }
    ctx->pc = 0x2E1C4Cu;
label_2e1c4c:
    // 0x2e1c4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e1c50:
    // 0x2e1c50: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2e1c54:
    // 0x2e1c54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e1c58:
    // 0x2e1c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1c5c:
    // 0x2e1c5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e1c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e1c60:
    // 0x2e1c60: 0x320f809  jalr        $t9
label_2e1c64:
    if (ctx->pc == 0x2E1C64u) {
        ctx->pc = 0x2E1C64u;
            // 0x2e1c64: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x2E1C68u;
        goto label_2e1c68;
    }
    ctx->pc = 0x2E1C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1C68u);
        ctx->pc = 0x2E1C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C60u;
            // 0x2e1c64: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1C68u; }
            if (ctx->pc != 0x2E1C68u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1C68u;
label_2e1c68:
    // 0x2e1c68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e1c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e1c6c:
    // 0x2e1c6c: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2e1c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e1c70:
    // 0x2e1c70: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_2e1c74:
    if (ctx->pc == 0x2E1C74u) {
        ctx->pc = 0x2E1C74u;
            // 0x2e1c74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2E1C78u;
        goto label_2e1c78;
    }
    ctx->pc = 0x2E1C70u;
    {
        const bool branch_taken_0x2e1c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C70u;
            // 0x2e1c74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c70) {
            ctx->pc = 0x2E1BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1bd8;
        }
    }
    ctx->pc = 0x2E1C78u;
label_2e1c78:
    // 0x2e1c78: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2e1c7c:
    // 0x2e1c7c: 0x0  nop
    ctx->pc = 0x2e1c7cu;
    // NOP
label_2e1c80:
    // 0x2e1c80: 0x1600ff66  bnez        $s0, . + 4 + (-0x9A << 2)
label_2e1c84:
    if (ctx->pc == 0x2E1C84u) {
        ctx->pc = 0x2E1C88u;
        goto label_2e1c88;
    }
    ctx->pc = 0x2E1C80u;
    {
        const bool branch_taken_0x2e1c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c80) {
            ctx->pc = 0x2E1A1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1a1c;
        }
    }
    ctx->pc = 0x2E1C88u;
label_2e1c88:
    // 0x2e1c88: 0x8e901188  lw          $s0, 0x1188($s4)
    ctx->pc = 0x2e1c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4488)));
label_2e1c8c:
    // 0x2e1c8c: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_2e1c90:
    if (ctx->pc == 0x2E1C90u) {
        ctx->pc = 0x2E1C94u;
        goto label_2e1c94;
    }
    ctx->pc = 0x2E1C8Cu;
    {
        const bool branch_taken_0x2e1c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c8c) {
            ctx->pc = 0x2E1E48u;
            goto label_2e1e48;
        }
    }
    ctx->pc = 0x2E1C94u;
label_2e1c94:
    // 0x2e1c94: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x2e1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_2e1c98:
    // 0x2e1c98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e1c9c:
    // 0x2e1c9c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2e1ca0:
    if (ctx->pc == 0x2E1CA0u) {
        ctx->pc = 0x2E1CA0u;
            // 0x2e1ca0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2E1CA4u;
        goto label_2e1ca4;
    }
    ctx->pc = 0x2E1C9Cu;
    {
        const bool branch_taken_0x2e1c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E1CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C9Cu;
            // 0x2e1ca0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c9c) {
            ctx->pc = 0x2E1CACu;
            goto label_2e1cac;
        }
    }
    ctx->pc = 0x2E1CA4u;
label_2e1ca4:
    // 0x2e1ca4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2e1ca8:
    if (ctx->pc == 0x2E1CA8u) {
        ctx->pc = 0x2E1CACu;
        goto label_2e1cac;
    }
    ctx->pc = 0x2E1CA4u;
    {
        const bool branch_taken_0x2e1ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1ca4) {
            ctx->pc = 0x2E1CB8u;
            goto label_2e1cb8;
        }
    }
    ctx->pc = 0x2E1CACu;
label_2e1cac:
    // 0x2e1cac: 0x0  nop
    ctx->pc = 0x2e1cacu;
    // NOP
label_2e1cb0:
    // 0x2e1cb0: 0x10000063  b           . + 4 + (0x63 << 2)
label_2e1cb4:
    if (ctx->pc == 0x2E1CB4u) {
        ctx->pc = 0x2E1CB4u;
            // 0x2e1cb4: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->pc = 0x2E1CB8u;
        goto label_2e1cb8;
    }
    ctx->pc = 0x2E1CB0u;
    {
        const bool branch_taken_0x2e1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1CB0u;
            // 0x2e1cb4: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cb0) {
            ctx->pc = 0x2E1E40u;
            goto label_2e1e40;
        }
    }
    ctx->pc = 0x2E1CB8u;
label_2e1cb8:
    // 0x2e1cb8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2e1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2e1cbc:
    // 0x2e1cbc: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_2e1cc0:
    if (ctx->pc == 0x2E1CC0u) {
        ctx->pc = 0x2E1CC4u;
        goto label_2e1cc4;
    }
    ctx->pc = 0x2E1CBCu;
    {
        const bool branch_taken_0x2e1cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cbc) {
            ctx->pc = 0x2E1E34u;
            goto label_2e1e34;
        }
    }
    ctx->pc = 0x2E1CC4u;
label_2e1cc4:
    // 0x2e1cc4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e1cc8:
    // 0x2e1cc8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2e1ccc:
    if (ctx->pc == 0x2E1CCCu) {
        ctx->pc = 0x2E1CD0u;
        goto label_2e1cd0;
    }
    ctx->pc = 0x2E1CC8u;
    {
        const bool branch_taken_0x2e1cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cc8) {
            ctx->pc = 0x2E1D8Cu;
            goto label_2e1d8c;
        }
    }
    ctx->pc = 0x2E1CD0u;
label_2e1cd0:
    // 0x2e1cd0: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e1cd4:
    // 0x2e1cd4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2e1cd8:
    if (ctx->pc == 0x2E1CD8u) {
        ctx->pc = 0x2E1CD8u;
            // 0x2e1cd8: 0x28a10080  slti        $at, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->pc = 0x2E1CDCu;
        goto label_2e1cdc;
    }
    ctx->pc = 0x2E1CD4u;
    {
        const bool branch_taken_0x2e1cd4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E1CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1CD4u;
            // 0x2e1cd8: 0x28a10080  slti        $at, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cd4) {
            ctx->pc = 0x2E1CE4u;
            goto label_2e1ce4;
        }
    }
    ctx->pc = 0x2E1CDCu;
label_2e1cdc:
    // 0x2e1cdc: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_2e1ce0:
    if (ctx->pc == 0x2E1CE0u) {
        ctx->pc = 0x2E1CE4u;
        goto label_2e1ce4;
    }
    ctx->pc = 0x2E1CDCu;
    {
        const bool branch_taken_0x2e1cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cdc) {
            ctx->pc = 0x2E1D8Cu;
            goto label_2e1d8c;
        }
    }
    ctx->pc = 0x2E1CE4u;
label_2e1ce4:
    // 0x2e1ce4: 0x0  nop
    ctx->pc = 0x2e1ce4u;
    // NOP
label_2e1ce8:
    // 0x2e1ce8: 0xc0a0ed8  jal         func_283B60
label_2e1cec:
    if (ctx->pc == 0x2E1CECu) {
        ctx->pc = 0x2E1CECu;
            // 0x2e1cec: 0x8f849ec8  lw          $a0, -0x6138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
        ctx->pc = 0x2E1CF0u;
        goto label_2e1cf0;
    }
    ctx->pc = 0x2E1CE8u;
    SET_GPR_U32(ctx, 31, 0x2E1CF0u);
    ctx->pc = 0x2E1CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1CE8u;
            // 0x2e1cec: 0x8f849ec8  lw          $a0, -0x6138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1CF0u; }
        if (ctx->pc != 0x2E1CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1CF0u; }
        if (ctx->pc != 0x2E1CF0u) { return; }
    }
    ctx->pc = 0x2E1CF0u;
label_2e1cf0:
    // 0x2e1cf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1cf4:
    // 0x2e1cf4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_2e1cf8:
    if (ctx->pc == 0x2E1CF8u) {
        ctx->pc = 0x2E1CFCu;
        goto label_2e1cfc;
    }
    ctx->pc = 0x2E1CF4u;
    {
        const bool branch_taken_0x2e1cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cf4) {
            ctx->pc = 0x2E1D74u;
            goto label_2e1d74;
        }
    }
    ctx->pc = 0x2E1CFCu;
label_2e1cfc:
    // 0x2e1cfc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e1cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1d00:
    // 0x2e1d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1d04:
    // 0x2e1d04: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e1d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e1d08:
    // 0x2e1d08: 0x320f809  jalr        $t9
label_2e1d0c:
    if (ctx->pc == 0x2E1D0Cu) {
        ctx->pc = 0x2E1D0Cu;
            // 0x2e1d0c: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x2E1D10u;
        goto label_2e1d10;
    }
    ctx->pc = 0x2E1D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1D10u);
        ctx->pc = 0x2E1D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D08u;
            // 0x2e1d0c: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D10u; }
            if (ctx->pc != 0x2E1D10u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1D10u;
label_2e1d10:
    // 0x2e1d10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e1d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2e1d14:
    // 0x2e1d14: 0x260400c4  addiu       $a0, $s0, 0xC4
    ctx->pc = 0x2e1d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
label_2e1d18:
    // 0x2e1d18: 0xc04a38a  jal         func_128E28
label_2e1d1c:
    if (ctx->pc == 0x2E1D1Cu) {
        ctx->pc = 0x2E1D1Cu;
            // 0x2e1d1c: 0x24a51258  addiu       $a1, $a1, 0x1258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
        ctx->pc = 0x2E1D20u;
        goto label_2e1d20;
    }
    ctx->pc = 0x2E1D18u;
    SET_GPR_U32(ctx, 31, 0x2E1D20u);
    ctx->pc = 0x2E1D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D18u;
            // 0x2e1d1c: 0x24a51258  addiu       $a1, $a1, 0x1258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D20u; }
        if (ctx->pc != 0x2E1D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D20u; }
        if (ctx->pc != 0x2E1D20u) { return; }
    }
    ctx->pc = 0x2E1D20u;
label_2e1d20:
    // 0x2e1d20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2e1d24:
    if (ctx->pc == 0x2E1D24u) {
        ctx->pc = 0x2E1D28u;
        goto label_2e1d28;
    }
    ctx->pc = 0x2E1D20u;
    {
        const bool branch_taken_0x2e1d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d20) {
            ctx->pc = 0x2E1D5Cu;
            goto label_2e1d5c;
        }
    }
    ctx->pc = 0x2E1D28u;
label_2e1d28:
    // 0x2e1d28: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2e1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e1d2c:
    // 0x2e1d2c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2e1d30:
    if (ctx->pc == 0x2E1D30u) {
        ctx->pc = 0x2E1D30u;
            // 0x2e1d30: 0x260500c4  addiu       $a1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->pc = 0x2E1D34u;
        goto label_2e1d34;
    }
    ctx->pc = 0x2E1D2Cu;
    {
        const bool branch_taken_0x2e1d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D2Cu;
            // 0x2e1d30: 0x260500c4  addiu       $a1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d2c) {
            ctx->pc = 0x2E1D5Cu;
            goto label_2e1d5c;
        }
    }
    ctx->pc = 0x2E1D34u;
label_2e1d34:
    // 0x2e1d34: 0xc04ddb4  jal         func_1376D0
label_2e1d38:
    if (ctx->pc == 0x2E1D38u) {
        ctx->pc = 0x2E1D3Cu;
        goto label_2e1d3c;
    }
    ctx->pc = 0x2E1D34u;
    SET_GPR_U32(ctx, 31, 0x2E1D3Cu);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D3Cu; }
        if (ctx->pc != 0x2E1D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D3Cu; }
        if (ctx->pc != 0x2E1D3Cu) { return; }
    }
    ctx->pc = 0x2E1D3Cu;
label_2e1d3c:
    // 0x2e1d3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e1d40:
    if (ctx->pc == 0x2E1D40u) {
        ctx->pc = 0x2E1D40u;
            // 0x2e1d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D44u;
        goto label_2e1d44;
    }
    ctx->pc = 0x2E1D3Cu;
    {
        const bool branch_taken_0x2e1d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D3Cu;
            // 0x2e1d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d3c) {
            ctx->pc = 0x2E1D5Cu;
            goto label_2e1d5c;
        }
    }
    ctx->pc = 0x2E1D44u;
label_2e1d44:
    // 0x2e1d44: 0xc04de0c  jal         func_137830
label_2e1d48:
    if (ctx->pc == 0x2E1D48u) {
        ctx->pc = 0x2E1D48u;
            // 0x2e1d48: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x2E1D4Cu;
        goto label_2e1d4c;
    }
    ctx->pc = 0x2E1D44u;
    SET_GPR_U32(ctx, 31, 0x2E1D4Cu);
    ctx->pc = 0x2E1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D44u;
            // 0x2e1d48: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D4Cu; }
        if (ctx->pc != 0x2E1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1D4Cu; }
        if (ctx->pc != 0x2E1D4Cu) { return; }
    }
    ctx->pc = 0x2E1D4Cu;
label_2e1d4c:
    // 0x2e1d4c: 0x27a302c0  addiu       $v1, $sp, 0x2C0
    ctx->pc = 0x2e1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2e1d50:
    // 0x2e1d50: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x2e1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2e1d54:
    // 0x2e1d54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e1d54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1d58:
    // 0x2e1d58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2e1d58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2e1d5c:
    // 0x2e1d5c: 0x0  nop
    ctx->pc = 0x2e1d5cu;
    // NOP
label_2e1d60:
    // 0x2e1d60: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x2e1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2e1d64:
    // 0x2e1d64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e1d64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1d68:
    // 0x2e1d68: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x2e1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2e1d6c:
    // 0x2e1d6c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e1d70:
    if (ctx->pc == 0x2E1D70u) {
        ctx->pc = 0x2E1D70u;
            // 0x2e1d70: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2E1D74u;
        goto label_2e1d74;
    }
    ctx->pc = 0x2E1D6Cu;
    {
        const bool branch_taken_0x2e1d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D6Cu;
            // 0x2e1d70: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d6c) {
            ctx->pc = 0x2E1DA0u;
            goto label_2e1da0;
        }
    }
    ctx->pc = 0x2E1D74u;
label_2e1d74:
    // 0x2e1d74: 0x0  nop
    ctx->pc = 0x2e1d74u;
    // NOP
label_2e1d78:
    // 0x2e1d78: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x2e1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
label_2e1d7c:
    // 0x2e1d7c: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x2e1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
label_2e1d80:
    // 0x2e1d80: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x2e1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
label_2e1d84:
    // 0x2e1d84: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e1d88:
    if (ctx->pc == 0x2E1D88u) {
        ctx->pc = 0x2E1D88u;
            // 0x2e1d88: 0xafa002ac  sw          $zero, 0x2AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
        ctx->pc = 0x2E1D8Cu;
        goto label_2e1d8c;
    }
    ctx->pc = 0x2E1D84u;
    {
        const bool branch_taken_0x2e1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1D84u;
            // 0x2e1d88: 0xafa002ac  sw          $zero, 0x2AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d84) {
            ctx->pc = 0x2E1DA0u;
            goto label_2e1da0;
        }
    }
    ctx->pc = 0x2E1D8Cu;
label_2e1d8c:
    // 0x2e1d8c: 0x0  nop
    ctx->pc = 0x2e1d8cu;
    // NOP
label_2e1d90:
    // 0x2e1d90: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x2e1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
label_2e1d94:
    // 0x2e1d94: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x2e1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
label_2e1d98:
    // 0x2e1d98: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x2e1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
label_2e1d9c:
    // 0x2e1d9c: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x2e1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
label_2e1da0:
    // 0x2e1da0: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2e1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2e1da4:
    // 0x2e1da4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e1da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1da8:
    // 0x2e1da8: 0xc041c38  jal         func_1070E0
label_2e1dac:
    if (ctx->pc == 0x2E1DACu) {
        ctx->pc = 0x2E1DACu;
            // 0x2e1dac: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->pc = 0x2E1DB0u;
        goto label_2e1db0;
    }
    ctx->pc = 0x2E1DA8u;
    SET_GPR_U32(ctx, 31, 0x2E1DB0u);
    ctx->pc = 0x2E1DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DA8u;
            // 0x2e1dac: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DB0u; }
        if (ctx->pc != 0x2E1DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DB0u; }
        if (ctx->pc != 0x2E1DB0u) { return; }
    }
    ctx->pc = 0x2E1DB0u;
label_2e1db0:
    // 0x2e1db0: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x2e1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
label_2e1db4:
    // 0x2e1db4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e1db8:
    // 0x2e1db8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2e1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2e1dbc:
    // 0x2e1dbc: 0xc04ba14  jal         func_12E850
label_2e1dc0:
    if (ctx->pc == 0x2E1DC0u) {
        ctx->pc = 0x2E1DC0u;
            // 0x2e1dc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DC4u;
        goto label_2e1dc4;
    }
    ctx->pc = 0x2E1DBCu;
    SET_GPR_U32(ctx, 31, 0x2E1DC4u);
    ctx->pc = 0x2E1DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DBCu;
            // 0x2e1dc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DC4u; }
        if (ctx->pc != 0x2E1DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DC4u; }
        if (ctx->pc != 0x2E1DC4u) { return; }
    }
    ctx->pc = 0x2E1DC4u;
label_2e1dc4:
    // 0x2e1dc4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2e1dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2e1dc8:
    // 0x2e1dc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e1dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e1dcc:
    // 0x2e1dcc: 0xc04b414  jal         func_12D050
label_2e1dd0:
    if (ctx->pc == 0x2E1DD0u) {
        ctx->pc = 0x2E1DD0u;
            // 0x2e1dd0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2E1DD4u;
        goto label_2e1dd4;
    }
    ctx->pc = 0x2E1DCCu;
    SET_GPR_U32(ctx, 31, 0x2E1DD4u);
    ctx->pc = 0x2E1DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DCCu;
            // 0x2e1dd0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DD4u; }
        if (ctx->pc != 0x2E1DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DD4u; }
        if (ctx->pc != 0x2E1DD4u) { return; }
    }
    ctx->pc = 0x2E1DD4u;
label_2e1dd4:
    // 0x2e1dd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e1dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1dd8:
    // 0x2e1dd8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_2e1ddc:
    if (ctx->pc == 0x2E1DDCu) {
        ctx->pc = 0x2E1DE0u;
        goto label_2e1de0;
    }
    ctx->pc = 0x2E1DD8u;
    {
        const bool branch_taken_0x2e1dd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dd8) {
            ctx->pc = 0x2E1E34u;
            goto label_2e1e34;
        }
    }
    ctx->pc = 0x2E1DE0u;
label_2e1de0:
    // 0x2e1de0: 0x8e99004c  lw          $t9, 0x4C($s4)
    ctx->pc = 0x2e1de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_2e1de4:
    // 0x2e1de4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e1de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e1de8:
    // 0x2e1de8: 0x320f809  jalr        $t9
label_2e1dec:
    if (ctx->pc == 0x2E1DECu) {
        ctx->pc = 0x2E1DECu;
            // 0x2e1dec: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x2E1DF0u;
        goto label_2e1df0;
    }
    ctx->pc = 0x2E1DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1DF0u);
        ctx->pc = 0x2E1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DE8u;
            // 0x2e1dec: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1DF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1DF0u; }
            if (ctx->pc != 0x2E1DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1DF0u;
label_2e1df0:
    // 0x2e1df0: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_2e1df4:
    // 0x2e1df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1df8:
    // 0x2e1df8: 0xc04ec68  jal         func_13B1A0
label_2e1dfc:
    if (ctx->pc == 0x2E1DFCu) {
        ctx->pc = 0x2E1DFCu;
            // 0x2e1dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E00u;
        goto label_2e1e00;
    }
    ctx->pc = 0x2E1DF8u;
    SET_GPR_U32(ctx, 31, 0x2E1E00u);
    ctx->pc = 0x2E1DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1DF8u;
            // 0x2e1dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E00u; }
        if (ctx->pc != 0x2E1E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E00u; }
        if (ctx->pc != 0x2E1E00u) { return; }
    }
    ctx->pc = 0x2E1E00u;
label_2e1e00:
    // 0x2e1e00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e1e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e04:
    // 0x2e1e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e08:
    // 0x2e1e08: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2e1e0c:
    // 0x2e1e0c: 0x26870030  addiu       $a3, $s4, 0x30
    ctx->pc = 0x2e1e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_2e1e10:
    // 0x2e1e10: 0xc0b8b40  jal         func_2E2D00
label_2e1e14:
    if (ctx->pc == 0x2E1E14u) {
        ctx->pc = 0x2E1E14u;
            // 0x2e1e14: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E1E18u;
        goto label_2e1e18;
    }
    ctx->pc = 0x2E1E10u;
    SET_GPR_U32(ctx, 31, 0x2E1E18u);
    ctx->pc = 0x2E1E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E10u;
            // 0x2e1e14: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D00u;
    if (runtime->hasFunction(0x2E2D00u)) {
        auto targetFn = runtime->lookupFunction(0x2E2D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E18u; }
        if (ctx->pc != 0x2E1E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffSptSprite__FP11_EFF_SCRIPTP10mgCTexturePfP11mgC3DSpriteP16CMapLightingInfo_0x2e2d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E18u; }
        if (ctx->pc != 0x2E1E18u) { return; }
    }
    ctx->pc = 0x2E1E18u;
label_2e1e18:
    // 0x2e1e18: 0xc04edfc  jal         func_13B7F0
label_2e1e1c:
    if (ctx->pc == 0x2E1E1Cu) {
        ctx->pc = 0x2E1E1Cu;
            // 0x2e1e1c: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x2E1E20u;
        goto label_2e1e20;
    }
    ctx->pc = 0x2E1E18u;
    SET_GPR_U32(ctx, 31, 0x2E1E20u);
    ctx->pc = 0x2E1E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E18u;
            // 0x2e1e1c: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E20u; }
        if (ctx->pc != 0x2E1E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E20u; }
        if (ctx->pc != 0x2E1E20u) { return; }
    }
    ctx->pc = 0x2E1E20u;
label_2e1e20:
    // 0x2e1e20: 0xc04c050  jal         func_130140
label_2e1e24:
    if (ctx->pc == 0x2E1E24u) {
        ctx->pc = 0x2E1E24u;
            // 0x2e1e24: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x2E1E28u;
        goto label_2e1e28;
    }
    ctx->pc = 0x2E1E20u;
    SET_GPR_U32(ctx, 31, 0x2E1E28u);
    ctx->pc = 0x2E1E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E20u;
            // 0x2e1e24: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E28u; }
        if (ctx->pc != 0x2E1E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E28u; }
        if (ctx->pc != 0x2E1E28u) { return; }
    }
    ctx->pc = 0x2E1E28u;
label_2e1e28:
    // 0x2e1e28: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x2e1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_2e1e2c:
    // 0x2e1e2c: 0xc050c10  jal         func_143040
label_2e1e30:
    if (ctx->pc == 0x2E1E30u) {
        ctx->pc = 0x2E1E30u;
            // 0x2e1e30: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x2E1E34u;
        goto label_2e1e34;
    }
    ctx->pc = 0x2E1E2Cu;
    SET_GPR_U32(ctx, 31, 0x2E1E34u);
    ctx->pc = 0x2E1E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E2Cu;
            // 0x2e1e30: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143040u;
    if (runtime->hasFunction(0x143040u)) {
        auto targetFn = runtime->lookupFunction(0x143040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E34u; }
        if (ctx->pc != 0x2E1E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP9mgCVisualPA4_f_0x143040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1E34u; }
        if (ctx->pc != 0x2E1E34u) { return; }
    }
    ctx->pc = 0x2E1E34u;
label_2e1e34:
    // 0x2e1e34: 0x0  nop
    ctx->pc = 0x2e1e34u;
    // NOP
label_2e1e38:
    // 0x2e1e38: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2e1e3c:
    // 0x2e1e3c: 0x0  nop
    ctx->pc = 0x2e1e3cu;
    // NOP
label_2e1e40:
    // 0x2e1e40: 0x1600ff94  bnez        $s0, . + 4 + (-0x6C << 2)
label_2e1e44:
    if (ctx->pc == 0x2E1E44u) {
        ctx->pc = 0x2E1E48u;
        goto label_2e1e48;
    }
    ctx->pc = 0x2E1E40u;
    {
        const bool branch_taken_0x2e1e40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e40) {
            ctx->pc = 0x2E1C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1c94;
        }
    }
    ctx->pc = 0x2E1E48u;
label_2e1e48:
    // 0x2e1e48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e1e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e1e4c:
    // 0x2e1e4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e1e4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e1e50:
    // 0x2e1e50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e1e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e1e54:
    // 0x2e1e54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1e58:
    // 0x2e1e58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1e5c:
    // 0x2e1e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1e60:
    // 0x2e1e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1e64:
    // 0x2e1e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1e68:
    // 0x2e1e68: 0x3e00008  jr          $ra
label_2e1e6c:
    if (ctx->pc == 0x2E1E6Cu) {
        ctx->pc = 0x2E1E6Cu;
            // 0x2e1e6c: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x2E1E70u;
        goto label_fallthrough_0x2e1e68;
    }
    ctx->pc = 0x2E1E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1E68u;
            // 0x2e1e6c: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e1e68:
    ctx->pc = 0x2E1E70u;
}
