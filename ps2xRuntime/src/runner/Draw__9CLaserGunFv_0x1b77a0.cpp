#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CLaserGunFv
// Address: 0x1b77a0 - 0x1b7d14
void Draw__9CLaserGunFv_0x1b77a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CLaserGunFv_0x1b77a0");
#endif

    switch (ctx->pc) {
        case 0x1b77a0u: goto label_1b77a0;
        case 0x1b77a4u: goto label_1b77a4;
        case 0x1b77a8u: goto label_1b77a8;
        case 0x1b77acu: goto label_1b77ac;
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77b4u: goto label_1b77b4;
        case 0x1b77b8u: goto label_1b77b8;
        case 0x1b77bcu: goto label_1b77bc;
        case 0x1b77c0u: goto label_1b77c0;
        case 0x1b77c4u: goto label_1b77c4;
        case 0x1b77c8u: goto label_1b77c8;
        case 0x1b77ccu: goto label_1b77cc;
        case 0x1b77d0u: goto label_1b77d0;
        case 0x1b77d4u: goto label_1b77d4;
        case 0x1b77d8u: goto label_1b77d8;
        case 0x1b77dcu: goto label_1b77dc;
        case 0x1b77e0u: goto label_1b77e0;
        case 0x1b77e4u: goto label_1b77e4;
        case 0x1b77e8u: goto label_1b77e8;
        case 0x1b77ecu: goto label_1b77ec;
        case 0x1b77f0u: goto label_1b77f0;
        case 0x1b77f4u: goto label_1b77f4;
        case 0x1b77f8u: goto label_1b77f8;
        case 0x1b77fcu: goto label_1b77fc;
        case 0x1b7800u: goto label_1b7800;
        case 0x1b7804u: goto label_1b7804;
        case 0x1b7808u: goto label_1b7808;
        case 0x1b780cu: goto label_1b780c;
        case 0x1b7810u: goto label_1b7810;
        case 0x1b7814u: goto label_1b7814;
        case 0x1b7818u: goto label_1b7818;
        case 0x1b781cu: goto label_1b781c;
        case 0x1b7820u: goto label_1b7820;
        case 0x1b7824u: goto label_1b7824;
        case 0x1b7828u: goto label_1b7828;
        case 0x1b782cu: goto label_1b782c;
        case 0x1b7830u: goto label_1b7830;
        case 0x1b7834u: goto label_1b7834;
        case 0x1b7838u: goto label_1b7838;
        case 0x1b783cu: goto label_1b783c;
        case 0x1b7840u: goto label_1b7840;
        case 0x1b7844u: goto label_1b7844;
        case 0x1b7848u: goto label_1b7848;
        case 0x1b784cu: goto label_1b784c;
        case 0x1b7850u: goto label_1b7850;
        case 0x1b7854u: goto label_1b7854;
        case 0x1b7858u: goto label_1b7858;
        case 0x1b785cu: goto label_1b785c;
        case 0x1b7860u: goto label_1b7860;
        case 0x1b7864u: goto label_1b7864;
        case 0x1b7868u: goto label_1b7868;
        case 0x1b786cu: goto label_1b786c;
        case 0x1b7870u: goto label_1b7870;
        case 0x1b7874u: goto label_1b7874;
        case 0x1b7878u: goto label_1b7878;
        case 0x1b787cu: goto label_1b787c;
        case 0x1b7880u: goto label_1b7880;
        case 0x1b7884u: goto label_1b7884;
        case 0x1b7888u: goto label_1b7888;
        case 0x1b788cu: goto label_1b788c;
        case 0x1b7890u: goto label_1b7890;
        case 0x1b7894u: goto label_1b7894;
        case 0x1b7898u: goto label_1b7898;
        case 0x1b789cu: goto label_1b789c;
        case 0x1b78a0u: goto label_1b78a0;
        case 0x1b78a4u: goto label_1b78a4;
        case 0x1b78a8u: goto label_1b78a8;
        case 0x1b78acu: goto label_1b78ac;
        case 0x1b78b0u: goto label_1b78b0;
        case 0x1b78b4u: goto label_1b78b4;
        case 0x1b78b8u: goto label_1b78b8;
        case 0x1b78bcu: goto label_1b78bc;
        case 0x1b78c0u: goto label_1b78c0;
        case 0x1b78c4u: goto label_1b78c4;
        case 0x1b78c8u: goto label_1b78c8;
        case 0x1b78ccu: goto label_1b78cc;
        case 0x1b78d0u: goto label_1b78d0;
        case 0x1b78d4u: goto label_1b78d4;
        case 0x1b78d8u: goto label_1b78d8;
        case 0x1b78dcu: goto label_1b78dc;
        case 0x1b78e0u: goto label_1b78e0;
        case 0x1b78e4u: goto label_1b78e4;
        case 0x1b78e8u: goto label_1b78e8;
        case 0x1b78ecu: goto label_1b78ec;
        case 0x1b78f0u: goto label_1b78f0;
        case 0x1b78f4u: goto label_1b78f4;
        case 0x1b78f8u: goto label_1b78f8;
        case 0x1b78fcu: goto label_1b78fc;
        case 0x1b7900u: goto label_1b7900;
        case 0x1b7904u: goto label_1b7904;
        case 0x1b7908u: goto label_1b7908;
        case 0x1b790cu: goto label_1b790c;
        case 0x1b7910u: goto label_1b7910;
        case 0x1b7914u: goto label_1b7914;
        case 0x1b7918u: goto label_1b7918;
        case 0x1b791cu: goto label_1b791c;
        case 0x1b7920u: goto label_1b7920;
        case 0x1b7924u: goto label_1b7924;
        case 0x1b7928u: goto label_1b7928;
        case 0x1b792cu: goto label_1b792c;
        case 0x1b7930u: goto label_1b7930;
        case 0x1b7934u: goto label_1b7934;
        case 0x1b7938u: goto label_1b7938;
        case 0x1b793cu: goto label_1b793c;
        case 0x1b7940u: goto label_1b7940;
        case 0x1b7944u: goto label_1b7944;
        case 0x1b7948u: goto label_1b7948;
        case 0x1b794cu: goto label_1b794c;
        case 0x1b7950u: goto label_1b7950;
        case 0x1b7954u: goto label_1b7954;
        case 0x1b7958u: goto label_1b7958;
        case 0x1b795cu: goto label_1b795c;
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7964u: goto label_1b7964;
        case 0x1b7968u: goto label_1b7968;
        case 0x1b796cu: goto label_1b796c;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b7974u: goto label_1b7974;
        case 0x1b7978u: goto label_1b7978;
        case 0x1b797cu: goto label_1b797c;
        case 0x1b7980u: goto label_1b7980;
        case 0x1b7984u: goto label_1b7984;
        case 0x1b7988u: goto label_1b7988;
        case 0x1b798cu: goto label_1b798c;
        case 0x1b7990u: goto label_1b7990;
        case 0x1b7994u: goto label_1b7994;
        case 0x1b7998u: goto label_1b7998;
        case 0x1b799cu: goto label_1b799c;
        case 0x1b79a0u: goto label_1b79a0;
        case 0x1b79a4u: goto label_1b79a4;
        case 0x1b79a8u: goto label_1b79a8;
        case 0x1b79acu: goto label_1b79ac;
        case 0x1b79b0u: goto label_1b79b0;
        case 0x1b79b4u: goto label_1b79b4;
        case 0x1b79b8u: goto label_1b79b8;
        case 0x1b79bcu: goto label_1b79bc;
        case 0x1b79c0u: goto label_1b79c0;
        case 0x1b79c4u: goto label_1b79c4;
        case 0x1b79c8u: goto label_1b79c8;
        case 0x1b79ccu: goto label_1b79cc;
        case 0x1b79d0u: goto label_1b79d0;
        case 0x1b79d4u: goto label_1b79d4;
        case 0x1b79d8u: goto label_1b79d8;
        case 0x1b79dcu: goto label_1b79dc;
        case 0x1b79e0u: goto label_1b79e0;
        case 0x1b79e4u: goto label_1b79e4;
        case 0x1b79e8u: goto label_1b79e8;
        case 0x1b79ecu: goto label_1b79ec;
        case 0x1b79f0u: goto label_1b79f0;
        case 0x1b79f4u: goto label_1b79f4;
        case 0x1b79f8u: goto label_1b79f8;
        case 0x1b79fcu: goto label_1b79fc;
        case 0x1b7a00u: goto label_1b7a00;
        case 0x1b7a04u: goto label_1b7a04;
        case 0x1b7a08u: goto label_1b7a08;
        case 0x1b7a0cu: goto label_1b7a0c;
        case 0x1b7a10u: goto label_1b7a10;
        case 0x1b7a14u: goto label_1b7a14;
        case 0x1b7a18u: goto label_1b7a18;
        case 0x1b7a1cu: goto label_1b7a1c;
        case 0x1b7a20u: goto label_1b7a20;
        case 0x1b7a24u: goto label_1b7a24;
        case 0x1b7a28u: goto label_1b7a28;
        case 0x1b7a2cu: goto label_1b7a2c;
        case 0x1b7a30u: goto label_1b7a30;
        case 0x1b7a34u: goto label_1b7a34;
        case 0x1b7a38u: goto label_1b7a38;
        case 0x1b7a3cu: goto label_1b7a3c;
        case 0x1b7a40u: goto label_1b7a40;
        case 0x1b7a44u: goto label_1b7a44;
        case 0x1b7a48u: goto label_1b7a48;
        case 0x1b7a4cu: goto label_1b7a4c;
        case 0x1b7a50u: goto label_1b7a50;
        case 0x1b7a54u: goto label_1b7a54;
        case 0x1b7a58u: goto label_1b7a58;
        case 0x1b7a5cu: goto label_1b7a5c;
        case 0x1b7a60u: goto label_1b7a60;
        case 0x1b7a64u: goto label_1b7a64;
        case 0x1b7a68u: goto label_1b7a68;
        case 0x1b7a6cu: goto label_1b7a6c;
        case 0x1b7a70u: goto label_1b7a70;
        case 0x1b7a74u: goto label_1b7a74;
        case 0x1b7a78u: goto label_1b7a78;
        case 0x1b7a7cu: goto label_1b7a7c;
        case 0x1b7a80u: goto label_1b7a80;
        case 0x1b7a84u: goto label_1b7a84;
        case 0x1b7a88u: goto label_1b7a88;
        case 0x1b7a8cu: goto label_1b7a8c;
        case 0x1b7a90u: goto label_1b7a90;
        case 0x1b7a94u: goto label_1b7a94;
        case 0x1b7a98u: goto label_1b7a98;
        case 0x1b7a9cu: goto label_1b7a9c;
        case 0x1b7aa0u: goto label_1b7aa0;
        case 0x1b7aa4u: goto label_1b7aa4;
        case 0x1b7aa8u: goto label_1b7aa8;
        case 0x1b7aacu: goto label_1b7aac;
        case 0x1b7ab0u: goto label_1b7ab0;
        case 0x1b7ab4u: goto label_1b7ab4;
        case 0x1b7ab8u: goto label_1b7ab8;
        case 0x1b7abcu: goto label_1b7abc;
        case 0x1b7ac0u: goto label_1b7ac0;
        case 0x1b7ac4u: goto label_1b7ac4;
        case 0x1b7ac8u: goto label_1b7ac8;
        case 0x1b7accu: goto label_1b7acc;
        case 0x1b7ad0u: goto label_1b7ad0;
        case 0x1b7ad4u: goto label_1b7ad4;
        case 0x1b7ad8u: goto label_1b7ad8;
        case 0x1b7adcu: goto label_1b7adc;
        case 0x1b7ae0u: goto label_1b7ae0;
        case 0x1b7ae4u: goto label_1b7ae4;
        case 0x1b7ae8u: goto label_1b7ae8;
        case 0x1b7aecu: goto label_1b7aec;
        case 0x1b7af0u: goto label_1b7af0;
        case 0x1b7af4u: goto label_1b7af4;
        case 0x1b7af8u: goto label_1b7af8;
        case 0x1b7afcu: goto label_1b7afc;
        case 0x1b7b00u: goto label_1b7b00;
        case 0x1b7b04u: goto label_1b7b04;
        case 0x1b7b08u: goto label_1b7b08;
        case 0x1b7b0cu: goto label_1b7b0c;
        case 0x1b7b10u: goto label_1b7b10;
        case 0x1b7b14u: goto label_1b7b14;
        case 0x1b7b18u: goto label_1b7b18;
        case 0x1b7b1cu: goto label_1b7b1c;
        case 0x1b7b20u: goto label_1b7b20;
        case 0x1b7b24u: goto label_1b7b24;
        case 0x1b7b28u: goto label_1b7b28;
        case 0x1b7b2cu: goto label_1b7b2c;
        case 0x1b7b30u: goto label_1b7b30;
        case 0x1b7b34u: goto label_1b7b34;
        case 0x1b7b38u: goto label_1b7b38;
        case 0x1b7b3cu: goto label_1b7b3c;
        case 0x1b7b40u: goto label_1b7b40;
        case 0x1b7b44u: goto label_1b7b44;
        case 0x1b7b48u: goto label_1b7b48;
        case 0x1b7b4cu: goto label_1b7b4c;
        case 0x1b7b50u: goto label_1b7b50;
        case 0x1b7b54u: goto label_1b7b54;
        case 0x1b7b58u: goto label_1b7b58;
        case 0x1b7b5cu: goto label_1b7b5c;
        case 0x1b7b60u: goto label_1b7b60;
        case 0x1b7b64u: goto label_1b7b64;
        case 0x1b7b68u: goto label_1b7b68;
        case 0x1b7b6cu: goto label_1b7b6c;
        case 0x1b7b70u: goto label_1b7b70;
        case 0x1b7b74u: goto label_1b7b74;
        case 0x1b7b78u: goto label_1b7b78;
        case 0x1b7b7cu: goto label_1b7b7c;
        case 0x1b7b80u: goto label_1b7b80;
        case 0x1b7b84u: goto label_1b7b84;
        case 0x1b7b88u: goto label_1b7b88;
        case 0x1b7b8cu: goto label_1b7b8c;
        case 0x1b7b90u: goto label_1b7b90;
        case 0x1b7b94u: goto label_1b7b94;
        case 0x1b7b98u: goto label_1b7b98;
        case 0x1b7b9cu: goto label_1b7b9c;
        case 0x1b7ba0u: goto label_1b7ba0;
        case 0x1b7ba4u: goto label_1b7ba4;
        case 0x1b7ba8u: goto label_1b7ba8;
        case 0x1b7bacu: goto label_1b7bac;
        case 0x1b7bb0u: goto label_1b7bb0;
        case 0x1b7bb4u: goto label_1b7bb4;
        case 0x1b7bb8u: goto label_1b7bb8;
        case 0x1b7bbcu: goto label_1b7bbc;
        case 0x1b7bc0u: goto label_1b7bc0;
        case 0x1b7bc4u: goto label_1b7bc4;
        case 0x1b7bc8u: goto label_1b7bc8;
        case 0x1b7bccu: goto label_1b7bcc;
        case 0x1b7bd0u: goto label_1b7bd0;
        case 0x1b7bd4u: goto label_1b7bd4;
        case 0x1b7bd8u: goto label_1b7bd8;
        case 0x1b7bdcu: goto label_1b7bdc;
        case 0x1b7be0u: goto label_1b7be0;
        case 0x1b7be4u: goto label_1b7be4;
        case 0x1b7be8u: goto label_1b7be8;
        case 0x1b7becu: goto label_1b7bec;
        case 0x1b7bf0u: goto label_1b7bf0;
        case 0x1b7bf4u: goto label_1b7bf4;
        case 0x1b7bf8u: goto label_1b7bf8;
        case 0x1b7bfcu: goto label_1b7bfc;
        case 0x1b7c00u: goto label_1b7c00;
        case 0x1b7c04u: goto label_1b7c04;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c0cu: goto label_1b7c0c;
        case 0x1b7c10u: goto label_1b7c10;
        case 0x1b7c14u: goto label_1b7c14;
        case 0x1b7c18u: goto label_1b7c18;
        case 0x1b7c1cu: goto label_1b7c1c;
        case 0x1b7c20u: goto label_1b7c20;
        case 0x1b7c24u: goto label_1b7c24;
        case 0x1b7c28u: goto label_1b7c28;
        case 0x1b7c2cu: goto label_1b7c2c;
        case 0x1b7c30u: goto label_1b7c30;
        case 0x1b7c34u: goto label_1b7c34;
        case 0x1b7c38u: goto label_1b7c38;
        case 0x1b7c3cu: goto label_1b7c3c;
        case 0x1b7c40u: goto label_1b7c40;
        case 0x1b7c44u: goto label_1b7c44;
        case 0x1b7c48u: goto label_1b7c48;
        case 0x1b7c4cu: goto label_1b7c4c;
        case 0x1b7c50u: goto label_1b7c50;
        case 0x1b7c54u: goto label_1b7c54;
        case 0x1b7c58u: goto label_1b7c58;
        case 0x1b7c5cu: goto label_1b7c5c;
        case 0x1b7c60u: goto label_1b7c60;
        case 0x1b7c64u: goto label_1b7c64;
        case 0x1b7c68u: goto label_1b7c68;
        case 0x1b7c6cu: goto label_1b7c6c;
        case 0x1b7c70u: goto label_1b7c70;
        case 0x1b7c74u: goto label_1b7c74;
        case 0x1b7c78u: goto label_1b7c78;
        case 0x1b7c7cu: goto label_1b7c7c;
        case 0x1b7c80u: goto label_1b7c80;
        case 0x1b7c84u: goto label_1b7c84;
        case 0x1b7c88u: goto label_1b7c88;
        case 0x1b7c8cu: goto label_1b7c8c;
        case 0x1b7c90u: goto label_1b7c90;
        case 0x1b7c94u: goto label_1b7c94;
        case 0x1b7c98u: goto label_1b7c98;
        case 0x1b7c9cu: goto label_1b7c9c;
        case 0x1b7ca0u: goto label_1b7ca0;
        case 0x1b7ca4u: goto label_1b7ca4;
        case 0x1b7ca8u: goto label_1b7ca8;
        case 0x1b7cacu: goto label_1b7cac;
        case 0x1b7cb0u: goto label_1b7cb0;
        case 0x1b7cb4u: goto label_1b7cb4;
        case 0x1b7cb8u: goto label_1b7cb8;
        case 0x1b7cbcu: goto label_1b7cbc;
        case 0x1b7cc0u: goto label_1b7cc0;
        case 0x1b7cc4u: goto label_1b7cc4;
        case 0x1b7cc8u: goto label_1b7cc8;
        case 0x1b7cccu: goto label_1b7ccc;
        case 0x1b7cd0u: goto label_1b7cd0;
        case 0x1b7cd4u: goto label_1b7cd4;
        case 0x1b7cd8u: goto label_1b7cd8;
        case 0x1b7cdcu: goto label_1b7cdc;
        case 0x1b7ce0u: goto label_1b7ce0;
        case 0x1b7ce4u: goto label_1b7ce4;
        case 0x1b7ce8u: goto label_1b7ce8;
        case 0x1b7cecu: goto label_1b7cec;
        case 0x1b7cf0u: goto label_1b7cf0;
        case 0x1b7cf4u: goto label_1b7cf4;
        case 0x1b7cf8u: goto label_1b7cf8;
        case 0x1b7cfcu: goto label_1b7cfc;
        case 0x1b7d00u: goto label_1b7d00;
        case 0x1b7d04u: goto label_1b7d04;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d0cu: goto label_1b7d0c;
        case 0x1b7d10u: goto label_1b7d10;
        default: break;
    }

    ctx->pc = 0x1b77a0u;

label_1b77a0:
    // 0x1b77a0: 0x27bded10  addiu       $sp, $sp, -0x12F0
    ctx->pc = 0x1b77a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962448));
label_1b77a4:
    // 0x1b77a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b77a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1b77a8:
    // 0x1b77a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b77a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1b77ac:
    // 0x1b77ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b77acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1b77b0:
    // 0x1b77b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b77b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1b77b4:
    // 0x1b77b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b77b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b77b8:
    // 0x1b77b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b77b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b77bc:
    // 0x1b77bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b77bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b77c0:
    // 0x1b77c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b77c4:
    // 0x1b77c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b77c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b77c8:
    // 0x1b77c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b77cc:
    // 0x1b77cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1b77ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b77d0:
    // 0x1b77d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b77d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b77d4:
    // 0x1b77d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b77d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b77d8:
    // 0x1b77d8: 0x8c830120  lw          $v1, 0x120($a0)
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_1b77dc:
    // 0x1b77dc: 0x1060013e  beqz        $v1, . + 4 + (0x13E << 2)
label_1b77e0:
    if (ctx->pc == 0x1B77E0u) {
        ctx->pc = 0x1B77E0u;
            // 0x1b77e0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B77E4u;
        goto label_1b77e4;
    }
    ctx->pc = 0x1B77DCu;
    {
        const bool branch_taken_0x1b77dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B77E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77DCu;
            // 0x1b77e0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77dc) {
            ctx->pc = 0x1B7CD8u;
            goto label_1b7cd8;
        }
    }
    ctx->pc = 0x1B77E4u;
label_1b77e4:
    // 0x1b77e4: 0xc04d0e8  jal         func_1343A0
label_1b77e8:
    if (ctx->pc == 0x1B77E8u) {
        ctx->pc = 0x1B77E8u;
            // 0x1b77e8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B77ECu;
        goto label_1b77ec;
    }
    ctx->pc = 0x1B77E4u;
    SET_GPR_U32(ctx, 31, 0x1B77ECu);
    ctx->pc = 0x1B77E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77E4u;
            // 0x1b77e8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77ECu; }
        if (ctx->pc != 0x1B77ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77ECu; }
        if (ctx->pc != 0x1B77ECu) { return; }
    }
    ctx->pc = 0x1B77ECu;
label_1b77ec:
    // 0x1b77ec: 0x8ea5012c  lw          $a1, 0x12C($s5)
    ctx->pc = 0x1b77ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
label_1b77f0:
    // 0x1b77f0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1b77f4:
    // 0x1b77f4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1b77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1b77f8:
    // 0x1b77f8: 0xc04ba14  jal         func_12E850
label_1b77fc:
    if (ctx->pc == 0x1B77FCu) {
        ctx->pc = 0x1B77FCu;
            // 0x1b77fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7800u;
        goto label_1b7800;
    }
    ctx->pc = 0x1B77F8u;
    SET_GPR_U32(ctx, 31, 0x1B7800u);
    ctx->pc = 0x1B77FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77F8u;
            // 0x1b77fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7800u; }
        if (ctx->pc != 0x1B7800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7800u; }
        if (ctx->pc != 0x1B7800u) { return; }
    }
    ctx->pc = 0x1B7800u;
label_1b7800:
    // 0x1b7800: 0x8ea300ec  lw          $v1, 0xEC($s5)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 236)));
label_1b7804:
    // 0x1b7804: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1b7804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1b7808:
    // 0x1b7808: 0x1060010b  beqz        $v1, . + 4 + (0x10B << 2)
label_1b780c:
    if (ctx->pc == 0x1B780Cu) {
        ctx->pc = 0x1B7810u;
        goto label_1b7810;
    }
    ctx->pc = 0x1B7808u;
    {
        const bool branch_taken_0x1b7808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7808) {
            ctx->pc = 0x1B7C38u;
            goto label_1b7c38;
        }
    }
    ctx->pc = 0x1B7810u;
label_1b7810:
    // 0x1b7810: 0x8ea800d4  lw          $t0, 0xD4($s5)
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_1b7814:
    // 0x1b7814: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b7814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b7818:
    // 0x1b7818: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1b7818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1b781c:
    // 0x1b781c: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1b781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_1b7820:
    // 0x1b7820: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b7824:
    // 0x1b7824: 0xc072324  jal         func_1C8C90
label_1b7828:
    if (ctx->pc == 0x1B7828u) {
        ctx->pc = 0x1B7828u;
            // 0x1b7828: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B782Cu;
        goto label_1b782c;
    }
    ctx->pc = 0x1B7824u;
    SET_GPR_U32(ctx, 31, 0x1B782Cu);
    ctx->pc = 0x1B7828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7824u;
            // 0x1b7828: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C90u;
    if (runtime->hasFunction(0x1C8C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B782Cu; }
        if (ctx->pc != 0x1B782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B782Cu; }
        if (ctx->pc != 0x1B782Cu) { return; }
    }
    ctx->pc = 0x1B782Cu;
label_1b782c:
    // 0x1b782c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1b782cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7830:
    // 0x1b7830: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x1b7830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_1b7834:
    // 0x1b7834: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x1b7834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b7838:
    // 0x1b7838: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b783c:
    if (ctx->pc == 0x1B783Cu) {
        ctx->pc = 0x1B783Cu;
            // 0x1b783c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B7840u;
        goto label_1b7840;
    }
    ctx->pc = 0x1B7838u;
    {
        const bool branch_taken_0x1b7838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7838u;
            // 0x1b783c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7838) {
            ctx->pc = 0x1B7844u;
            goto label_1b7844;
        }
    }
    ctx->pc = 0x1B7840u;
label_1b7840:
    // 0x1b7840: 0xaebe00d0  sw          $fp, 0xD0($s5)
    ctx->pc = 0x1b7840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 30));
label_1b7844:
    // 0x1b7844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7848:
    // 0x1b7848: 0xc04d104  jal         func_134410
label_1b784c:
    if (ctx->pc == 0x1B784Cu) {
        ctx->pc = 0x1B784Cu;
            // 0x1b784c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7850u;
        goto label_1b7850;
    }
    ctx->pc = 0x1B7848u;
    SET_GPR_U32(ctx, 31, 0x1B7850u);
    ctx->pc = 0x1B784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7848u;
            // 0x1b784c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7850u; }
        if (ctx->pc != 0x1B7850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7850u; }
        if (ctx->pc != 0x1B7850u) { return; }
    }
    ctx->pc = 0x1B7850u;
label_1b7850:
    // 0x1b7850: 0xc079f5c  jal         func_1E7D70
label_1b7854:
    if (ctx->pc == 0x1B7854u) {
        ctx->pc = 0x1B7854u;
            // 0x1b7854: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B7858u;
        goto label_1b7858;
    }
    ctx->pc = 0x1B7850u;
    SET_GPR_U32(ctx, 31, 0x1B7858u);
    ctx->pc = 0x1B7854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7850u;
            // 0x1b7854: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7858u; }
        if (ctx->pc != 0x1B7858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7858u; }
        if (ctx->pc != 0x1B7858u) { return; }
    }
    ctx->pc = 0x1B7858u;
label_1b7858:
    // 0x1b7858: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b785c:
    // 0x1b785c: 0xc04d3b0  jal         func_134EC0
label_1b7860:
    if (ctx->pc == 0x1B7860u) {
        ctx->pc = 0x1B7860u;
            // 0x1b7860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B7864u;
        goto label_1b7864;
    }
    ctx->pc = 0x1B785Cu;
    SET_GPR_U32(ctx, 31, 0x1B7864u);
    ctx->pc = 0x1B7860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B785Cu;
            // 0x1b7860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7864u; }
        if (ctx->pc != 0x1B7864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7864u; }
        if (ctx->pc != 0x1B7864u) { return; }
    }
    ctx->pc = 0x1B7864u;
label_1b7864:
    // 0x1b7864: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7868:
    // 0x1b7868: 0xc04d3bc  jal         func_134EF0
label_1b786c:
    if (ctx->pc == 0x1B786Cu) {
        ctx->pc = 0x1B786Cu;
            // 0x1b786c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B7870u;
        goto label_1b7870;
    }
    ctx->pc = 0x1B7868u;
    SET_GPR_U32(ctx, 31, 0x1B7870u);
    ctx->pc = 0x1B786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7868u;
            // 0x1b786c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7870u; }
        if (ctx->pc != 0x1B7870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7870u; }
        if (ctx->pc != 0x1B7870u) { return; }
    }
    ctx->pc = 0x1B7870u;
label_1b7870:
    // 0x1b7870: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7874:
    // 0x1b7874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7878:
    // 0x1b7878: 0xc04d3c4  jal         func_134F10
label_1b787c:
    if (ctx->pc == 0x1B787Cu) {
        ctx->pc = 0x1B787Cu;
            // 0x1b787c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7880u;
        goto label_1b7880;
    }
    ctx->pc = 0x1B7878u;
    SET_GPR_U32(ctx, 31, 0x1B7880u);
    ctx->pc = 0x1B787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7878u;
            // 0x1b787c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7880u; }
        if (ctx->pc != 0x1B7880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7880u; }
        if (ctx->pc != 0x1B7880u) { return; }
    }
    ctx->pc = 0x1B7880u;
label_1b7880:
    // 0x1b7880: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7884:
    // 0x1b7884: 0xc04d3e4  jal         func_134F90
label_1b7888:
    if (ctx->pc == 0x1B7888u) {
        ctx->pc = 0x1B7888u;
            // 0x1b7888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B788Cu;
        goto label_1b788c;
    }
    ctx->pc = 0x1B7884u;
    SET_GPR_U32(ctx, 31, 0x1B788Cu);
    ctx->pc = 0x1B7888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7884u;
            // 0x1b7888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B788Cu; }
        if (ctx->pc != 0x1B788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B788Cu; }
        if (ctx->pc != 0x1B788Cu) { return; }
    }
    ctx->pc = 0x1B788Cu;
label_1b788c:
    // 0x1b788c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7890:
    // 0x1b7890: 0xc04d424  jal         func_135090
label_1b7894:
    if (ctx->pc == 0x1B7894u) {
        ctx->pc = 0x1B7894u;
            // 0x1b7894: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B7898u;
        goto label_1b7898;
    }
    ctx->pc = 0x1B7890u;
    SET_GPR_U32(ctx, 31, 0x1B7898u);
    ctx->pc = 0x1B7894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7890u;
            // 0x1b7894: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7898u; }
        if (ctx->pc != 0x1B7898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7898u; }
        if (ctx->pc != 0x1B7898u) { return; }
    }
    ctx->pc = 0x1B7898u;
label_1b7898:
    // 0x1b7898: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b789c:
    // 0x1b789c: 0xc04d430  jal         func_1350C0
label_1b78a0:
    if (ctx->pc == 0x1B78A0u) {
        ctx->pc = 0x1B78A0u;
            // 0x1b78a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B78A4u;
        goto label_1b78a4;
    }
    ctx->pc = 0x1B789Cu;
    SET_GPR_U32(ctx, 31, 0x1B78A4u);
    ctx->pc = 0x1B78A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B789Cu;
            // 0x1b78a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78A4u; }
        if (ctx->pc != 0x1B78A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78A4u; }
        if (ctx->pc != 0x1B78A4u) { return; }
    }
    ctx->pc = 0x1B78A4u;
label_1b78a4:
    // 0x1b78a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b78a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b78a8:
    // 0x1b78a8: 0xc04d428  jal         func_1350A0
label_1b78ac:
    if (ctx->pc == 0x1B78ACu) {
        ctx->pc = 0x1B78ACu;
            // 0x1b78ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B78B0u;
        goto label_1b78b0;
    }
    ctx->pc = 0x1B78A8u;
    SET_GPR_U32(ctx, 31, 0x1B78B0u);
    ctx->pc = 0x1B78ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78A8u;
            // 0x1b78ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78B0u; }
        if (ctx->pc != 0x1B78B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78B0u; }
        if (ctx->pc != 0x1B78B0u) { return; }
    }
    ctx->pc = 0x1B78B0u;
label_1b78b0:
    // 0x1b78b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b78b4:
    // 0x1b78b4: 0xc04d44c  jal         func_135130
label_1b78b8:
    if (ctx->pc == 0x1B78B8u) {
        ctx->pc = 0x1B78B8u;
            // 0x1b78b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B78BCu;
        goto label_1b78bc;
    }
    ctx->pc = 0x1B78B4u;
    SET_GPR_U32(ctx, 31, 0x1B78BCu);
    ctx->pc = 0x1B78B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78B4u;
            // 0x1b78b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78BCu; }
        if (ctx->pc != 0x1B78BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78BCu; }
        if (ctx->pc != 0x1B78BCu) { return; }
    }
    ctx->pc = 0x1B78BCu;
label_1b78bc:
    // 0x1b78bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b78c0:
    // 0x1b78c0: 0xc04d128  jal         func_1344A0
label_1b78c4:
    if (ctx->pc == 0x1B78C4u) {
        ctx->pc = 0x1B78C4u;
            // 0x1b78c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1B78C8u;
        goto label_1b78c8;
    }
    ctx->pc = 0x1B78C0u;
    SET_GPR_U32(ctx, 31, 0x1B78C8u);
    ctx->pc = 0x1B78C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78C0u;
            // 0x1b78c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78C8u; }
        if (ctx->pc != 0x1B78C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78C8u; }
        if (ctx->pc != 0x1B78C8u) { return; }
    }
    ctx->pc = 0x1B78C8u;
label_1b78c8:
    // 0x1b78c8: 0x8ea50124  lw          $a1, 0x124($s5)
    ctx->pc = 0x1b78c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
label_1b78cc:
    // 0x1b78cc: 0xc04d368  jal         func_134DA0
label_1b78d0:
    if (ctx->pc == 0x1B78D0u) {
        ctx->pc = 0x1B78D0u;
            // 0x1b78d0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B78D4u;
        goto label_1b78d4;
    }
    ctx->pc = 0x1B78CCu;
    SET_GPR_U32(ctx, 31, 0x1B78D4u);
    ctx->pc = 0x1B78D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78CCu;
            // 0x1b78d0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78D4u; }
        if (ctx->pc != 0x1B78D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78D4u; }
        if (ctx->pc != 0x1B78D4u) { return; }
    }
    ctx->pc = 0x1B78D4u;
label_1b78d4:
    // 0x1b78d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b78d8:
    // 0x1b78d8: 0xc04d3bc  jal         func_134EF0
label_1b78dc:
    if (ctx->pc == 0x1B78DCu) {
        ctx->pc = 0x1B78DCu;
            // 0x1b78dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B78E0u;
        goto label_1b78e0;
    }
    ctx->pc = 0x1B78D8u;
    SET_GPR_U32(ctx, 31, 0x1B78E0u);
    ctx->pc = 0x1B78DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78D8u;
            // 0x1b78dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78E0u; }
        if (ctx->pc != 0x1B78E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78E0u; }
        if (ctx->pc != 0x1B78E0u) { return; }
    }
    ctx->pc = 0x1B78E0u;
label_1b78e0:
    // 0x1b78e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b78e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b78e4:
    // 0x1b78e4: 0xc079ff0  jal         func_1E7FC0
label_1b78e8:
    if (ctx->pc == 0x1B78E8u) {
        ctx->pc = 0x1B78E8u;
            // 0x1b78e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B78ECu;
        goto label_1b78ec;
    }
    ctx->pc = 0x1B78E4u;
    SET_GPR_U32(ctx, 31, 0x1B78ECu);
    ctx->pc = 0x1B78E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78E4u;
            // 0x1b78e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78ECu; }
        if (ctx->pc != 0x1B78ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78ECu; }
        if (ctx->pc != 0x1B78ECu) { return; }
    }
    ctx->pc = 0x1B78ECu;
label_1b78ec:
    // 0x1b78ec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b78ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b78f0:
    // 0x1b78f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b78f4:
    // 0x1b78f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b78f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b78f8:
    // 0x1b78f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b78f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b78fc:
    // 0x1b78fc: 0xc04d320  jal         func_134C80
label_1b7900:
    if (ctx->pc == 0x1B7900u) {
        ctx->pc = 0x1B7900u;
            // 0x1b7900: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7904u;
        goto label_1b7904;
    }
    ctx->pc = 0x1B78FCu;
    SET_GPR_U32(ctx, 31, 0x1B7904u);
    ctx->pc = 0x1B7900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78FCu;
            // 0x1b7900: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7904u; }
        if (ctx->pc != 0x1B7904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7904u; }
        if (ctx->pc != 0x1B7904u) { return; }
    }
    ctx->pc = 0x1B7904u;
label_1b7904:
    // 0x1b7904: 0xc6a000fc  lwc1        $f0, 0xFC($s5)
    ctx->pc = 0x1b7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7908:
    // 0x1b7908: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1b790c:
    // 0x1b790c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b790cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7910:
    // 0x1b7910: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b7914:
    // 0x1b7914: 0x27d6ffff  addiu       $s6, $fp, -0x1
    ctx->pc = 0x1b7914u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_1b7918:
    // 0x1b7918: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x1b7918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b791c:
    // 0x1b791c: 0x16b900  sll         $s7, $s6, 4
    ctx->pc = 0x1b791cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_1b7920:
    // 0x1b7920: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1b7924:
    if (ctx->pc == 0x1B7924u) {
        ctx->pc = 0x1B7924u;
            // 0x1b7924: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1B7928u;
        goto label_1b7928;
    }
    ctx->pc = 0x1B7920u;
    {
        const bool branch_taken_0x1b7920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7920u;
            // 0x1b7924: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7920) {
            ctx->pc = 0x1B7C18u;
            goto label_1b7c18;
        }
    }
    ctx->pc = 0x1B7928u;
label_1b7928:
    // 0x1b7928: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b792c:
    // 0x1b792c: 0x245401d0  addiu       $s4, $v0, 0x1D0
    ctx->pc = 0x1b792cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
label_1b7930:
    // 0x1b7930: 0x27a411d0  addiu       $a0, $sp, 0x11D0
    ctx->pc = 0x1b7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
label_1b7934:
    // 0x1b7934: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x1b7934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_1b7938:
    // 0x1b7938: 0x27a511e0  addiu       $a1, $sp, 0x11E0
    ctx->pc = 0x1b7938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
label_1b793c:
    // 0x1b793c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b793cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7940:
    // 0x1b7940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7944:
    // 0x1b7944: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b7944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b7948:
    // 0x1b7948: 0xc0516ec  jal         func_145BB0
label_1b794c:
    if (ctx->pc == 0x1B794Cu) {
        ctx->pc = 0x1B794Cu;
            // 0x1b794c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1B7950u;
        goto label_1b7950;
    }
    ctx->pc = 0x1B7948u;
    SET_GPR_U32(ctx, 31, 0x1B7950u);
    ctx->pc = 0x1B794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7948u;
            // 0x1b794c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7950u; }
        if (ctx->pc != 0x1B7950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7950u; }
        if (ctx->pc != 0x1B7950u) { return; }
    }
    ctx->pc = 0x1B7950u;
label_1b7950:
    // 0x1b7950: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1b7954:
    if (ctx->pc == 0x1B7954u) {
        ctx->pc = 0x1B7958u;
        goto label_1b7958;
    }
    ctx->pc = 0x1B7950u;
    {
        const bool branch_taken_0x1b7950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7950) {
            ctx->pc = 0x1B7A00u;
            goto label_1b7a00;
        }
    }
    ctx->pc = 0x1B7958u;
label_1b7958:
    // 0x1b7958: 0xc6a00110  lwc1        $f0, 0x110($s5)
    ctx->pc = 0x1b7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b795c:
    // 0x1b795c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1b7960:
    // 0x1b7960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7964:
    // 0x1b7964: 0xc0a248c  jal         func_289230
label_1b7968:
    if (ctx->pc == 0x1B7968u) {
        ctx->pc = 0x1B7968u;
            // 0x1b7968: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1B796Cu;
        goto label_1b796c;
    }
    ctx->pc = 0x1B7964u;
    SET_GPR_U32(ctx, 31, 0x1B796Cu);
    ctx->pc = 0x1B7968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7964u;
            // 0x1b7968: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B796Cu; }
        if (ctx->pc != 0x1B796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B796Cu; }
        if (ctx->pc != 0x1B796Cu) { return; }
    }
    ctx->pc = 0x1B796Cu;
label_1b796c:
    // 0x1b796c: 0xc6a10114  lwc1        $f1, 0x114($s5)
    ctx->pc = 0x1b796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7970:
    // 0x1b7970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7974:
    // 0x1b7974: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1b7978:
    // 0x1b7978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b797c:
    // 0x1b797c: 0xc0a248c  jal         func_289230
label_1b7980:
    if (ctx->pc == 0x1B7980u) {
        ctx->pc = 0x1B7980u;
            // 0x1b7980: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1B7984u;
        goto label_1b7984;
    }
    ctx->pc = 0x1B797Cu;
    SET_GPR_U32(ctx, 31, 0x1B7984u);
    ctx->pc = 0x1B7980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B797Cu;
            // 0x1b7980: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7984u; }
        if (ctx->pc != 0x1B7984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7984u; }
        if (ctx->pc != 0x1B7984u) { return; }
    }
    ctx->pc = 0x1B7984u;
label_1b7984:
    // 0x1b7984: 0xc6a10118  lwc1        $f1, 0x118($s5)
    ctx->pc = 0x1b7984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7988:
    // 0x1b7988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b7988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b798c:
    // 0x1b798c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1b798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1b7990:
    // 0x1b7990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7994:
    // 0x1b7994: 0xc0a248c  jal         func_289230
label_1b7998:
    if (ctx->pc == 0x1B7998u) {
        ctx->pc = 0x1B7998u;
            // 0x1b7998: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1B799Cu;
        goto label_1b799c;
    }
    ctx->pc = 0x1B7994u;
    SET_GPR_U32(ctx, 31, 0x1B799Cu);
    ctx->pc = 0x1B7998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7994u;
            // 0x1b7998: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B799Cu; }
        if (ctx->pc != 0x1B799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B799Cu; }
        if (ctx->pc != 0x1B799Cu) { return; }
    }
    ctx->pc = 0x1B799Cu;
label_1b799c:
    // 0x1b799c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b799cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b79a0:
    // 0x1b79a0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1b79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1b79a4:
    // 0x1b79a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b79a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b79a8:
    // 0x1b79a8: 0xc0a248c  jal         func_289230
label_1b79ac:
    if (ctx->pc == 0x1B79ACu) {
        ctx->pc = 0x1B79ACu;
            // 0x1b79ac: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x1B79B0u;
        goto label_1b79b0;
    }
    ctx->pc = 0x1B79A8u;
    SET_GPR_U32(ctx, 31, 0x1B79B0u);
    ctx->pc = 0x1B79ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79A8u;
            // 0x1b79ac: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79B0u; }
        if (ctx->pc != 0x1B79B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79B0u; }
        if (ctx->pc != 0x1B79B0u) { return; }
    }
    ctx->pc = 0x1B79B0u;
label_1b79b0:
    // 0x1b79b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b79b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b79b4:
    // 0x1b79b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b79b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b79b8:
    // 0x1b79b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b79b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b79bc:
    // 0x1b79bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b79bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b79c0:
    // 0x1b79c0: 0xc04d320  jal         func_134C80
label_1b79c4:
    if (ctx->pc == 0x1B79C4u) {
        ctx->pc = 0x1B79C4u;
            // 0x1b79c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B79C8u;
        goto label_1b79c8;
    }
    ctx->pc = 0x1B79C0u;
    SET_GPR_U32(ctx, 31, 0x1B79C8u);
    ctx->pc = 0x1B79C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79C0u;
            // 0x1b79c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79C8u; }
        if (ctx->pc != 0x1B79C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79C8u; }
        if (ctx->pc != 0x1B79C8u) { return; }
    }
    ctx->pc = 0x1B79C8u;
label_1b79c8:
    // 0x1b79c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b79cc:
    // 0x1b79cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b79ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b79d0:
    // 0x1b79d0: 0xc04d35c  jal         func_134D70
label_1b79d4:
    if (ctx->pc == 0x1B79D4u) {
        ctx->pc = 0x1B79D4u;
            // 0x1b79d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B79D8u;
        goto label_1b79d8;
    }
    ctx->pc = 0x1B79D0u;
    SET_GPR_U32(ctx, 31, 0x1B79D8u);
    ctx->pc = 0x1B79D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79D0u;
            // 0x1b79d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79D8u; }
        if (ctx->pc != 0x1B79D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79D8u; }
        if (ctx->pc != 0x1B79D8u) { return; }
    }
    ctx->pc = 0x1B79D8u;
label_1b79d8:
    // 0x1b79d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b79dc:
    // 0x1b79dc: 0xc04d318  jal         func_134C60
label_1b79e0:
    if (ctx->pc == 0x1B79E0u) {
        ctx->pc = 0x1B79E0u;
            // 0x1b79e0: 0x27a511d0  addiu       $a1, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->pc = 0x1B79E4u;
        goto label_1b79e4;
    }
    ctx->pc = 0x1B79DCu;
    SET_GPR_U32(ctx, 31, 0x1B79E4u);
    ctx->pc = 0x1B79E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79DCu;
            // 0x1b79e0: 0x27a511d0  addiu       $a1, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79E4u; }
        if (ctx->pc != 0x1B79E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79E4u; }
        if (ctx->pc != 0x1B79E4u) { return; }
    }
    ctx->pc = 0x1B79E4u;
label_1b79e4:
    // 0x1b79e4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1b79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b79e8:
    // 0x1b79e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b79ec:
    // 0x1b79ec: 0xc04d35c  jal         func_134D70
label_1b79f0:
    if (ctx->pc == 0x1B79F0u) {
        ctx->pc = 0x1B79F0u;
            // 0x1b79f0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B79F4u;
        goto label_1b79f4;
    }
    ctx->pc = 0x1B79ECu;
    SET_GPR_U32(ctx, 31, 0x1B79F4u);
    ctx->pc = 0x1B79F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79ECu;
            // 0x1b79f0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79F4u; }
        if (ctx->pc != 0x1B79F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79F4u; }
        if (ctx->pc != 0x1B79F4u) { return; }
    }
    ctx->pc = 0x1B79F4u;
label_1b79f4:
    // 0x1b79f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b79f8:
    // 0x1b79f8: 0xc04d318  jal         func_134C60
label_1b79fc:
    if (ctx->pc == 0x1B79FCu) {
        ctx->pc = 0x1B79FCu;
            // 0x1b79fc: 0x27a511e0  addiu       $a1, $sp, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
        ctx->pc = 0x1B7A00u;
        goto label_1b7a00;
    }
    ctx->pc = 0x1B79F8u;
    SET_GPR_U32(ctx, 31, 0x1B7A00u);
    ctx->pc = 0x1B79FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79F8u;
            // 0x1b79fc: 0x27a511e0  addiu       $a1, $sp, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A00u; }
        if (ctx->pc != 0x1B7A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A00u; }
        if (ctx->pc != 0x1B7A00u) { return; }
    }
    ctx->pc = 0x1B7A00u;
label_1b7a00:
    // 0x1b7a00: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_1b7a04:
    // 0x1b7a04: 0x12c2004b  beq         $s6, $v0, . + 4 + (0x4B << 2)
label_1b7a08:
    if (ctx->pc == 0x1B7A08u) {
        ctx->pc = 0x1B7A08u;
            // 0x1b7a08: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->pc = 0x1B7A0Cu;
        goto label_1b7a0c;
    }
    ctx->pc = 0x1B7A04u;
    {
        const bool branch_taken_0x1b7a04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A04u;
            // 0x1b7a08: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a04) {
            ctx->pc = 0x1B7B34u;
            goto label_1b7b34;
        }
    }
    ctx->pc = 0x1B7A0Cu;
label_1b7a0c:
    // 0x1b7a0c: 0x27a41210  addiu       $a0, $sp, 0x1210
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4624));
label_1b7a10:
    // 0x1b7a10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b7a14:
    // 0x1b7a14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b7a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a18:
    // 0x1b7a18: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1b7a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b7a1c:
    // 0x1b7a1c: 0xc041c3e  jal         func_1070F8
label_1b7a20:
    if (ctx->pc == 0x1B7A20u) {
        ctx->pc = 0x1B7A20u;
            // 0x1b7a20: 0x27a611f0  addiu       $a2, $sp, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
        ctx->pc = 0x1B7A24u;
        goto label_1b7a24;
    }
    ctx->pc = 0x1B7A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A24u);
    ctx->pc = 0x1B7A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A1Cu;
            // 0x1b7a20: 0x27a611f0  addiu       $a2, $sp, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A24u; }
        if (ctx->pc != 0x1B7A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A24u; }
        if (ctx->pc != 0x1B7A24u) { return; }
    }
    ctx->pc = 0x1B7A24u;
label_1b7a24:
    // 0x1b7a24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b7a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a28:
    // 0x1b7a28: 0x27a41200  addiu       $a0, $sp, 0x1200
    ctx->pc = 0x1b7a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_1b7a2c:
    // 0x1b7a2c: 0x27a51210  addiu       $a1, $sp, 0x1210
    ctx->pc = 0x1b7a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4624));
label_1b7a30:
    // 0x1b7a30: 0xc041c4a  jal         func_107128
label_1b7a34:
    if (ctx->pc == 0x1B7A34u) {
        ctx->pc = 0x1B7A34u;
            // 0x1b7a34: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x1B7A38u;
        goto label_1b7a38;
    }
    ctx->pc = 0x1B7A30u;
    SET_GPR_U32(ctx, 31, 0x1B7A38u);
    ctx->pc = 0x1B7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A30u;
            // 0x1b7a34: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A38u; }
        if (ctx->pc != 0x1B7A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A38u; }
        if (ctx->pc != 0x1B7A38u) { return; }
    }
    ctx->pc = 0x1B7A38u;
label_1b7a38:
    // 0x1b7a38: 0x27a41200  addiu       $a0, $sp, 0x1200
    ctx->pc = 0x1b7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_1b7a3c:
    // 0x1b7a3c: 0x27a611f0  addiu       $a2, $sp, 0x11F0
    ctx->pc = 0x1b7a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
label_1b7a40:
    // 0x1b7a40: 0xc041c38  jal         func_1070E0
label_1b7a44:
    if (ctx->pc == 0x1B7A44u) {
        ctx->pc = 0x1B7A44u;
            // 0x1b7a44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A48u;
        goto label_1b7a48;
    }
    ctx->pc = 0x1B7A40u;
    SET_GPR_U32(ctx, 31, 0x1B7A48u);
    ctx->pc = 0x1B7A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A40u;
            // 0x1b7a44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A48u; }
        if (ctx->pc != 0x1B7A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A48u; }
        if (ctx->pc != 0x1B7A48u) { return; }
    }
    ctx->pc = 0x1B7A48u;
label_1b7a48:
    // 0x1b7a48: 0x27a411d0  addiu       $a0, $sp, 0x11D0
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
label_1b7a4c:
    // 0x1b7a4c: 0x27a511e0  addiu       $a1, $sp, 0x11E0
    ctx->pc = 0x1b7a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
label_1b7a50:
    // 0x1b7a50: 0x27a61200  addiu       $a2, $sp, 0x1200
    ctx->pc = 0x1b7a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_1b7a54:
    // 0x1b7a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a58:
    // 0x1b7a58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b7a58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b7a5c:
    // 0x1b7a5c: 0xc0516ec  jal         func_145BB0
label_1b7a60:
    if (ctx->pc == 0x1B7A60u) {
        ctx->pc = 0x1B7A60u;
            // 0x1b7a60: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1B7A64u;
        goto label_1b7a64;
    }
    ctx->pc = 0x1B7A5Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A64u);
    ctx->pc = 0x1B7A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A5Cu;
            // 0x1b7a60: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A64u; }
        if (ctx->pc != 0x1B7A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A64u; }
        if (ctx->pc != 0x1B7A64u) { return; }
    }
    ctx->pc = 0x1B7A64u;
label_1b7a64:
    // 0x1b7a64: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1b7a68:
    if (ctx->pc == 0x1B7A68u) {
        ctx->pc = 0x1B7A6Cu;
        goto label_1b7a6c;
    }
    ctx->pc = 0x1B7A64u;
    {
        const bool branch_taken_0x1b7a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a64) {
            ctx->pc = 0x1B7B14u;
            goto label_1b7b14;
        }
    }
    ctx->pc = 0x1B7A6Cu;
label_1b7a6c:
    // 0x1b7a6c: 0xc6a00110  lwc1        $f0, 0x110($s5)
    ctx->pc = 0x1b7a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7a70:
    // 0x1b7a70: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1b7a74:
    // 0x1b7a74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7a78:
    // 0x1b7a78: 0xc0a248c  jal         func_289230
label_1b7a7c:
    if (ctx->pc == 0x1B7A7Cu) {
        ctx->pc = 0x1B7A7Cu;
            // 0x1b7a7c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1B7A80u;
        goto label_1b7a80;
    }
    ctx->pc = 0x1B7A78u;
    SET_GPR_U32(ctx, 31, 0x1B7A80u);
    ctx->pc = 0x1B7A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A78u;
            // 0x1b7a7c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A80u; }
        if (ctx->pc != 0x1B7A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A80u; }
        if (ctx->pc != 0x1B7A80u) { return; }
    }
    ctx->pc = 0x1B7A80u;
label_1b7a80:
    // 0x1b7a80: 0xc6a10114  lwc1        $f1, 0x114($s5)
    ctx->pc = 0x1b7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7a84:
    // 0x1b7a84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b7a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a88:
    // 0x1b7a88: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1b7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1b7a8c:
    // 0x1b7a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7a90:
    // 0x1b7a90: 0xc0a248c  jal         func_289230
label_1b7a94:
    if (ctx->pc == 0x1B7A94u) {
        ctx->pc = 0x1B7A94u;
            // 0x1b7a94: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1B7A98u;
        goto label_1b7a98;
    }
    ctx->pc = 0x1B7A90u;
    SET_GPR_U32(ctx, 31, 0x1B7A98u);
    ctx->pc = 0x1B7A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A90u;
            // 0x1b7a94: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A98u; }
        if (ctx->pc != 0x1B7A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A98u; }
        if (ctx->pc != 0x1B7A98u) { return; }
    }
    ctx->pc = 0x1B7A98u;
label_1b7a98:
    // 0x1b7a98: 0xc6a10118  lwc1        $f1, 0x118($s5)
    ctx->pc = 0x1b7a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7a9c:
    // 0x1b7a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b7a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7aa0:
    // 0x1b7aa0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1b7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1b7aa4:
    // 0x1b7aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7aa8:
    // 0x1b7aa8: 0xc0a248c  jal         func_289230
label_1b7aac:
    if (ctx->pc == 0x1B7AACu) {
        ctx->pc = 0x1B7AACu;
            // 0x1b7aac: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1B7AB0u;
        goto label_1b7ab0;
    }
    ctx->pc = 0x1B7AA8u;
    SET_GPR_U32(ctx, 31, 0x1B7AB0u);
    ctx->pc = 0x1B7AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AA8u;
            // 0x1b7aac: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AB0u; }
        if (ctx->pc != 0x1B7AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AB0u; }
        if (ctx->pc != 0x1B7AB0u) { return; }
    }
    ctx->pc = 0x1B7AB0u;
label_1b7ab0:
    // 0x1b7ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ab4:
    // 0x1b7ab4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1b7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1b7ab8:
    // 0x1b7ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7abc:
    // 0x1b7abc: 0xc0a248c  jal         func_289230
label_1b7ac0:
    if (ctx->pc == 0x1B7AC0u) {
        ctx->pc = 0x1B7AC0u;
            // 0x1b7ac0: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x1B7AC4u;
        goto label_1b7ac4;
    }
    ctx->pc = 0x1B7ABCu;
    SET_GPR_U32(ctx, 31, 0x1B7AC4u);
    ctx->pc = 0x1B7AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7ABCu;
            // 0x1b7ac0: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AC4u; }
        if (ctx->pc != 0x1B7AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AC4u; }
        if (ctx->pc != 0x1B7AC4u) { return; }
    }
    ctx->pc = 0x1B7AC4u;
label_1b7ac4:
    // 0x1b7ac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b7ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ac8:
    // 0x1b7ac8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b7ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7acc:
    // 0x1b7acc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b7accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ad0:
    // 0x1b7ad0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b7ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ad4:
    // 0x1b7ad4: 0xc04d320  jal         func_134C80
label_1b7ad8:
    if (ctx->pc == 0x1B7AD8u) {
        ctx->pc = 0x1B7AD8u;
            // 0x1b7ad8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B7ADCu;
        goto label_1b7adc;
    }
    ctx->pc = 0x1B7AD4u;
    SET_GPR_U32(ctx, 31, 0x1B7ADCu);
    ctx->pc = 0x1B7AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AD4u;
            // 0x1b7ad8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7ADCu; }
        if (ctx->pc != 0x1B7ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7ADCu; }
        if (ctx->pc != 0x1B7ADCu) { return; }
    }
    ctx->pc = 0x1B7ADCu;
label_1b7adc:
    // 0x1b7adc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7ae0:
    // 0x1b7ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ae4:
    // 0x1b7ae4: 0xc04d35c  jal         func_134D70
label_1b7ae8:
    if (ctx->pc == 0x1B7AE8u) {
        ctx->pc = 0x1B7AE8u;
            // 0x1b7ae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AECu;
        goto label_1b7aec;
    }
    ctx->pc = 0x1B7AE4u;
    SET_GPR_U32(ctx, 31, 0x1B7AECu);
    ctx->pc = 0x1B7AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AE4u;
            // 0x1b7ae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AECu; }
        if (ctx->pc != 0x1B7AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AECu; }
        if (ctx->pc != 0x1B7AECu) { return; }
    }
    ctx->pc = 0x1B7AECu;
label_1b7aec:
    // 0x1b7aec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7af0:
    // 0x1b7af0: 0xc04d318  jal         func_134C60
label_1b7af4:
    if (ctx->pc == 0x1B7AF4u) {
        ctx->pc = 0x1B7AF4u;
            // 0x1b7af4: 0x27a511d0  addiu       $a1, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->pc = 0x1B7AF8u;
        goto label_1b7af8;
    }
    ctx->pc = 0x1B7AF0u;
    SET_GPR_U32(ctx, 31, 0x1B7AF8u);
    ctx->pc = 0x1B7AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AF0u;
            // 0x1b7af4: 0x27a511d0  addiu       $a1, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AF8u; }
        if (ctx->pc != 0x1B7AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AF8u; }
        if (ctx->pc != 0x1B7AF8u) { return; }
    }
    ctx->pc = 0x1B7AF8u;
label_1b7af8:
    // 0x1b7af8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1b7af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b7afc:
    // 0x1b7afc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7b00:
    // 0x1b7b00: 0xc04d35c  jal         func_134D70
label_1b7b04:
    if (ctx->pc == 0x1B7B04u) {
        ctx->pc = 0x1B7B04u;
            // 0x1b7b04: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B08u;
        goto label_1b7b08;
    }
    ctx->pc = 0x1B7B00u;
    SET_GPR_U32(ctx, 31, 0x1B7B08u);
    ctx->pc = 0x1B7B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B00u;
            // 0x1b7b04: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B08u; }
        if (ctx->pc != 0x1B7B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B08u; }
        if (ctx->pc != 0x1B7B08u) { return; }
    }
    ctx->pc = 0x1B7B08u;
label_1b7b08:
    // 0x1b7b08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7b0c:
    // 0x1b7b0c: 0xc04d318  jal         func_134C60
label_1b7b10:
    if (ctx->pc == 0x1B7B10u) {
        ctx->pc = 0x1B7B10u;
            // 0x1b7b10: 0x27a511e0  addiu       $a1, $sp, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
        ctx->pc = 0x1B7B14u;
        goto label_1b7b14;
    }
    ctx->pc = 0x1B7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B14u);
    ctx->pc = 0x1B7B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B0Cu;
            // 0x1b7b10: 0x27a511e0  addiu       $a1, $sp, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B14u; }
        if (ctx->pc != 0x1B7B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B14u; }
        if (ctx->pc != 0x1B7B14u) { return; }
    }
    ctx->pc = 0x1B7B14u;
label_1b7b14:
    // 0x1b7b14: 0x0  nop
    ctx->pc = 0x1b7b14u;
    // NOP
label_1b7b18:
    // 0x1b7b18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b7b1c:
    // 0x1b7b1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b7b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b7b20:
    // 0x1b7b20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b7b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b7b24:
    // 0x1b7b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7b28:
    // 0x1b7b28: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x1b7b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
label_1b7b2c:
    // 0x1b7b2c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1b7b30:
    if (ctx->pc == 0x1B7B30u) {
        ctx->pc = 0x1B7B30u;
            // 0x1b7b30: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x1B7B34u;
        goto label_1b7b34;
    }
    ctx->pc = 0x1B7B2Cu;
    {
        const bool branch_taken_0x1b7b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B2Cu;
            // 0x1b7b30: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b2c) {
            ctx->pc = 0x1B7A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B7B34u;
label_1b7b34:
    // 0x1b7b34: 0x0  nop
    ctx->pc = 0x1b7b34u;
    // NOP
label_1b7b38:
    // 0x1b7b38: 0x27a411f0  addiu       $a0, $sp, 0x11F0
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
label_1b7b3c:
    // 0x1b7b3c: 0xc041c5c  jal         func_107170
label_1b7b40:
    if (ctx->pc == 0x1B7B40u) {
        ctx->pc = 0x1B7B40u;
            // 0x1b7b40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B44u;
        goto label_1b7b44;
    }
    ctx->pc = 0x1B7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B44u);
    ctx->pc = 0x1B7B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B3Cu;
            // 0x1b7b40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B44u; }
        if (ctx->pc != 0x1B7B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B44u; }
        if (ctx->pc != 0x1B7B44u) { return; }
    }
    ctx->pc = 0x1B7B44u;
label_1b7b44:
    // 0x1b7b44: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b7b48:
    // 0x1b7b48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b7b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b4c:
    // 0x1b7b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7b50:
    // 0x1b7b50: 0x27a411d0  addiu       $a0, $sp, 0x11D0
    ctx->pc = 0x1b7b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
label_1b7b54:
    // 0x1b7b54: 0x27a511e0  addiu       $a1, $sp, 0x11E0
    ctx->pc = 0x1b7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
label_1b7b58:
    // 0x1b7b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b5c:
    // 0x1b7b5c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1b7b5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b7b60:
    // 0x1b7b60: 0xc0516ec  jal         func_145BB0
label_1b7b64:
    if (ctx->pc == 0x1B7B64u) {
        ctx->pc = 0x1B7B64u;
            // 0x1b7b64: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B7B68u;
        goto label_1b7b68;
    }
    ctx->pc = 0x1B7B60u;
    SET_GPR_U32(ctx, 31, 0x1B7B68u);
    ctx->pc = 0x1B7B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B60u;
            // 0x1b7b64: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B68u; }
        if (ctx->pc != 0x1B7B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B68u; }
        if (ctx->pc != 0x1B7B68u) { return; }
    }
    ctx->pc = 0x1B7B68u;
label_1b7b68:
    // 0x1b7b68: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1b7b6c:
    if (ctx->pc == 0x1B7B6Cu) {
        ctx->pc = 0x1B7B70u;
        goto label_1b7b70;
    }
    ctx->pc = 0x1B7B68u;
    {
        const bool branch_taken_0x1b7b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b68) {
            ctx->pc = 0x1B7BF4u;
            goto label_1b7bf4;
        }
    }
    ctx->pc = 0x1B7B70u;
label_1b7b70:
    // 0x1b7b70: 0xc0a248c  jal         func_289230
label_1b7b74:
    if (ctx->pc == 0x1B7B74u) {
        ctx->pc = 0x1B7B74u;
            // 0x1b7b74: 0xc6ac0110  lwc1        $f12, 0x110($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B7B78u;
        goto label_1b7b78;
    }
    ctx->pc = 0x1B7B70u;
    SET_GPR_U32(ctx, 31, 0x1B7B78u);
    ctx->pc = 0x1B7B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B70u;
            // 0x1b7b74: 0xc6ac0110  lwc1        $f12, 0x110($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B78u; }
        if (ctx->pc != 0x1B7B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B78u; }
        if (ctx->pc != 0x1B7B78u) { return; }
    }
    ctx->pc = 0x1B7B78u;
label_1b7b78:
    // 0x1b7b78: 0xc6ac0114  lwc1        $f12, 0x114($s5)
    ctx->pc = 0x1b7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7b7c:
    // 0x1b7b7c: 0xc0a248c  jal         func_289230
label_1b7b80:
    if (ctx->pc == 0x1B7B80u) {
        ctx->pc = 0x1B7B80u;
            // 0x1b7b80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B84u;
        goto label_1b7b84;
    }
    ctx->pc = 0x1B7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B84u);
    ctx->pc = 0x1B7B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B7Cu;
            // 0x1b7b80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B84u; }
        if (ctx->pc != 0x1B7B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B84u; }
        if (ctx->pc != 0x1B7B84u) { return; }
    }
    ctx->pc = 0x1B7B84u;
label_1b7b84:
    // 0x1b7b84: 0xc6ac0118  lwc1        $f12, 0x118($s5)
    ctx->pc = 0x1b7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7b88:
    // 0x1b7b88: 0xc0a248c  jal         func_289230
label_1b7b8c:
    if (ctx->pc == 0x1B7B8Cu) {
        ctx->pc = 0x1B7B8Cu;
            // 0x1b7b8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B90u;
        goto label_1b7b90;
    }
    ctx->pc = 0x1B7B88u;
    SET_GPR_U32(ctx, 31, 0x1B7B90u);
    ctx->pc = 0x1B7B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B88u;
            // 0x1b7b8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B90u; }
        if (ctx->pc != 0x1B7B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B90u; }
        if (ctx->pc != 0x1B7B90u) { return; }
    }
    ctx->pc = 0x1B7B90u;
label_1b7b90:
    // 0x1b7b90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b7b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b94:
    // 0x1b7b94: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1b7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1b7b98:
    // 0x1b7b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7b9c:
    // 0x1b7b9c: 0xc0a248c  jal         func_289230
label_1b7ba0:
    if (ctx->pc == 0x1B7BA0u) {
        ctx->pc = 0x1B7BA0u;
            // 0x1b7ba0: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x1B7BA4u;
        goto label_1b7ba4;
    }
    ctx->pc = 0x1B7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7BA4u);
    ctx->pc = 0x1B7BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B9Cu;
            // 0x1b7ba0: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BA4u; }
        if (ctx->pc != 0x1B7BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BA4u; }
        if (ctx->pc != 0x1B7BA4u) { return; }
    }
    ctx->pc = 0x1B7BA4u;
label_1b7ba4:
    // 0x1b7ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b7ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ba8:
    // 0x1b7ba8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b7ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7bac:
    // 0x1b7bac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b7bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b7bb0:
    // 0x1b7bb0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b7bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7bb4:
    // 0x1b7bb4: 0xc04d320  jal         func_134C80
label_1b7bb8:
    if (ctx->pc == 0x1B7BB8u) {
        ctx->pc = 0x1B7BB8u;
            // 0x1b7bb8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B7BBCu;
        goto label_1b7bbc;
    }
    ctx->pc = 0x1B7BB4u;
    SET_GPR_U32(ctx, 31, 0x1B7BBCu);
    ctx->pc = 0x1B7BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BB4u;
            // 0x1b7bb8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BBCu; }
        if (ctx->pc != 0x1B7BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BBCu; }
        if (ctx->pc != 0x1B7BBCu) { return; }
    }
    ctx->pc = 0x1B7BBCu;
label_1b7bbc:
    // 0x1b7bbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7bc0:
    // 0x1b7bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7bc4:
    // 0x1b7bc4: 0xc04d35c  jal         func_134D70
label_1b7bc8:
    if (ctx->pc == 0x1B7BC8u) {
        ctx->pc = 0x1B7BC8u;
            // 0x1b7bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7BCCu;
        goto label_1b7bcc;
    }
    ctx->pc = 0x1B7BC4u;
    SET_GPR_U32(ctx, 31, 0x1B7BCCu);
    ctx->pc = 0x1B7BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BC4u;
            // 0x1b7bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BCCu; }
        if (ctx->pc != 0x1B7BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BCCu; }
        if (ctx->pc != 0x1B7BCCu) { return; }
    }
    ctx->pc = 0x1B7BCCu;
label_1b7bcc:
    // 0x1b7bcc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7bd0:
    // 0x1b7bd0: 0xc04d318  jal         func_134C60
label_1b7bd4:
    if (ctx->pc == 0x1B7BD4u) {
        ctx->pc = 0x1B7BD4u;
            // 0x1b7bd4: 0x27a511d0  addiu       $a1, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->pc = 0x1B7BD8u;
        goto label_1b7bd8;
    }
    ctx->pc = 0x1B7BD0u;
    SET_GPR_U32(ctx, 31, 0x1B7BD8u);
    ctx->pc = 0x1B7BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BD0u;
            // 0x1b7bd4: 0x27a511d0  addiu       $a1, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BD8u; }
        if (ctx->pc != 0x1B7BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BD8u; }
        if (ctx->pc != 0x1B7BD8u) { return; }
    }
    ctx->pc = 0x1B7BD8u;
label_1b7bd8:
    // 0x1b7bd8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b7bdc:
    // 0x1b7bdc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7be0:
    // 0x1b7be0: 0xc04d35c  jal         func_134D70
label_1b7be4:
    if (ctx->pc == 0x1B7BE4u) {
        ctx->pc = 0x1B7BE4u;
            // 0x1b7be4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7BE8u;
        goto label_1b7be8;
    }
    ctx->pc = 0x1B7BE0u;
    SET_GPR_U32(ctx, 31, 0x1B7BE8u);
    ctx->pc = 0x1B7BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BE0u;
            // 0x1b7be4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BE8u; }
        if (ctx->pc != 0x1B7BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BE8u; }
        if (ctx->pc != 0x1B7BE8u) { return; }
    }
    ctx->pc = 0x1B7BE8u;
label_1b7be8:
    // 0x1b7be8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b7bec:
    // 0x1b7bec: 0xc04d318  jal         func_134C60
label_1b7bf0:
    if (ctx->pc == 0x1B7BF0u) {
        ctx->pc = 0x1B7BF0u;
            // 0x1b7bf0: 0x27a511e0  addiu       $a1, $sp, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
        ctx->pc = 0x1B7BF4u;
        goto label_1b7bf4;
    }
    ctx->pc = 0x1B7BECu;
    SET_GPR_U32(ctx, 31, 0x1B7BF4u);
    ctx->pc = 0x1B7BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BECu;
            // 0x1b7bf0: 0x27a511e0  addiu       $a1, $sp, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BF4u; }
        if (ctx->pc != 0x1B7BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BF4u; }
        if (ctx->pc != 0x1B7BF4u) { return; }
    }
    ctx->pc = 0x1B7BF4u;
label_1b7bf4:
    // 0x1b7bf4: 0x0  nop
    ctx->pc = 0x1b7bf4u;
    // NOP
label_1b7bf8:
    // 0x1b7bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b7bfc:
    // 0x1b7bfc: 0xc6a100d0  lwc1        $f1, 0xD0($s5)
    ctx->pc = 0x1b7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7c00:
    // 0x1b7c00: 0x26f7fff0  addiu       $s7, $s7, -0x10
    ctx->pc = 0x1b7c00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967280));
label_1b7c04:
    // 0x1b7c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7c08:
    // 0x1b7c08: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1b7c08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1b7c0c:
    // 0x1b7c0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b7c10:
    // 0x1b7c10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b7c10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1b7c14:
    // 0x1b7c14: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1b7c14u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1b7c18:
    // 0x1b7c18: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x1b7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_1b7c1c:
    // 0x1b7c1c: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x1b7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1b7c20:
    // 0x1b7c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b7c24:
    // 0x1b7c24: 0x2c2082a  slt         $at, $s6, $v0
    ctx->pc = 0x1b7c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b7c28:
    // 0x1b7c28: 0x1020ff3f  beqz        $at, . + 4 + (-0xC1 << 2)
label_1b7c2c:
    if (ctx->pc == 0x1B7C2Cu) {
        ctx->pc = 0x1B7C2Cu;
            // 0x1b7c2c: 0x2fd1021  addu        $v0, $s7, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
        ctx->pc = 0x1B7C30u;
        goto label_1b7c30;
    }
    ctx->pc = 0x1B7C28u;
    {
        const bool branch_taken_0x1b7c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C28u;
            // 0x1b7c2c: 0x2fd1021  addu        $v0, $s7, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c28) {
            ctx->pc = 0x1B7928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7928;
        }
    }
    ctx->pc = 0x1B7C30u;
label_1b7c30:
    // 0x1b7c30: 0xc04d1a4  jal         func_134690
label_1b7c34:
    if (ctx->pc == 0x1B7C34u) {
        ctx->pc = 0x1B7C34u;
            // 0x1b7c34: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B7C38u;
        goto label_1b7c38;
    }
    ctx->pc = 0x1B7C30u;
    SET_GPR_U32(ctx, 31, 0x1B7C38u);
    ctx->pc = 0x1B7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C30u;
            // 0x1b7c34: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C38u; }
        if (ctx->pc != 0x1B7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C38u; }
        if (ctx->pc != 0x1B7C38u) { return; }
    }
    ctx->pc = 0x1B7C38u;
label_1b7c38:
    // 0x1b7c38: 0x8ea300ec  lw          $v1, 0xEC($s5)
    ctx->pc = 0x1b7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 236)));
label_1b7c3c:
    // 0x1b7c3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b7c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1b7c40:
    // 0x1b7c40: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1b7c44:
    if (ctx->pc == 0x1B7C44u) {
        ctx->pc = 0x1B7C44u;
            // 0x1b7c44: 0x27a41220  addiu       $a0, $sp, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4640));
        ctx->pc = 0x1B7C48u;
        goto label_1b7c48;
    }
    ctx->pc = 0x1B7C40u;
    {
        const bool branch_taken_0x1b7c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C40u;
            // 0x1b7c44: 0x27a41220  addiu       $a0, $sp, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c40) {
            ctx->pc = 0x1B7CD8u;
            goto label_1b7cd8;
        }
    }
    ctx->pc = 0x1B7C48u;
label_1b7c48:
    // 0x1b7c48: 0xc04d6d8  jal         func_135B60
label_1b7c4c:
    if (ctx->pc == 0x1B7C4Cu) {
        ctx->pc = 0x1B7C50u;
        goto label_1b7c50;
    }
    ctx->pc = 0x1B7C48u;
    SET_GPR_U32(ctx, 31, 0x1B7C50u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C50u; }
        if (ctx->pc != 0x1B7C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C50u; }
        if (ctx->pc != 0x1B7C50u) { return; }
    }
    ctx->pc = 0x1B7C50u;
label_1b7c50:
    // 0x1b7c50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7c54:
    // 0x1b7c54: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1b7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1b7c58:
    // 0x1b7c58: 0xafa61280  sw          $a2, 0x1280($sp)
    ctx->pc = 0x1b7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4736), GPR_U32(ctx, 6));
label_1b7c5c:
    // 0x1b7c5c: 0x27a51220  addiu       $a1, $sp, 0x1220
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4640));
label_1b7c60:
    // 0x1b7c60: 0xc6a00110  lwc1        $f0, 0x110($s5)
    ctx->pc = 0x1b7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7c64:
    // 0x1b7c64: 0xe7a01290  swc1        $f0, 0x1290($sp)
    ctx->pc = 0x1b7c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4752), bits); }
label_1b7c68:
    // 0x1b7c68: 0xc6a00114  lwc1        $f0, 0x114($s5)
    ctx->pc = 0x1b7c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7c6c:
    // 0x1b7c6c: 0xe7a01294  swc1        $f0, 0x1294($sp)
    ctx->pc = 0x1b7c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4756), bits); }
label_1b7c70:
    // 0x1b7c70: 0xc6a00118  lwc1        $f0, 0x118($s5)
    ctx->pc = 0x1b7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7c74:
    // 0x1b7c74: 0xe7a01298  swc1        $f0, 0x1298($sp)
    ctx->pc = 0x1b7c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4760), bits); }
label_1b7c78:
    // 0x1b7c78: 0xafa2129c  sw          $v0, 0x129C($sp)
    ctx->pc = 0x1b7c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4764), GPR_U32(ctx, 2));
label_1b7c7c:
    // 0x1b7c7c: 0x8ea40128  lw          $a0, 0x128($s5)
    ctx->pc = 0x1b7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
label_1b7c80:
    // 0x1b7c80: 0xc04de54  jal         func_137950
label_1b7c84:
    if (ctx->pc == 0x1B7C84u) {
        ctx->pc = 0x1B7C84u;
            // 0x1b7c84: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1B7C88u;
        goto label_1b7c88;
    }
    ctx->pc = 0x1B7C80u;
    SET_GPR_U32(ctx, 31, 0x1B7C88u);
    ctx->pc = 0x1B7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C80u;
            // 0x1b7c84: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C88u; }
        if (ctx->pc != 0x1B7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C88u; }
        if (ctx->pc != 0x1B7C88u) { return; }
    }
    ctx->pc = 0x1B7C88u;
label_1b7c88:
    // 0x1b7c88: 0x8ea40128  lw          $a0, 0x128($s5)
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
label_1b7c8c:
    // 0x1b7c8c: 0xc6ac00fc  lwc1        $f12, 0xFC($s5)
    ctx->pc = 0x1b7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7c90:
    // 0x1b7c90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b7c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b7c94:
    // 0x1b7c94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b7c94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b7c98:
    // 0x1b7c98: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b7c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b7c9c:
    // 0x1b7c9c: 0x320f809  jalr        $t9
label_1b7ca0:
    if (ctx->pc == 0x1B7CA0u) {
        ctx->pc = 0x1B7CA0u;
            // 0x1b7ca0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B7CA4u;
        goto label_1b7ca4;
    }
    ctx->pc = 0x1B7C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B7CA4u);
        ctx->pc = 0x1B7CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C9Cu;
            // 0x1b7ca0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7CA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CA4u; }
            if (ctx->pc != 0x1B7CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7CA4u;
label_1b7ca4:
    // 0x1b7ca4: 0x8ea40128  lw          $a0, 0x128($s5)
    ctx->pc = 0x1b7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
label_1b7ca8:
    // 0x1b7ca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b7ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b7cac:
    // 0x1b7cac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b7cb0:
    // 0x1b7cb0: 0x320f809  jalr        $t9
label_1b7cb4:
    if (ctx->pc == 0x1B7CB4u) {
        ctx->pc = 0x1B7CB4u;
            // 0x1b7cb4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x1B7CB8u;
        goto label_1b7cb8;
    }
    ctx->pc = 0x1B7CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B7CB8u);
        ctx->pc = 0x1B7CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CB0u;
            // 0x1b7cb4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CB8u; }
            if (ctx->pc != 0x1B7CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7CB8u;
label_1b7cb8:
    // 0x1b7cb8: 0x27a412b0  addiu       $a0, $sp, 0x12B0
    ctx->pc = 0x1b7cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4784));
label_1b7cbc:
    // 0x1b7cbc: 0xc04c16c  jal         func_1305B0
label_1b7cc0:
    if (ctx->pc == 0x1B7CC0u) {
        ctx->pc = 0x1B7CC0u;
            // 0x1b7cc0: 0x26a50040  addiu       $a1, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->pc = 0x1B7CC4u;
        goto label_1b7cc4;
    }
    ctx->pc = 0x1B7CBCu;
    SET_GPR_U32(ctx, 31, 0x1B7CC4u);
    ctx->pc = 0x1B7CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CBCu;
            // 0x1b7cc0: 0x26a50040  addiu       $a1, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1305B0u;
    if (runtime->hasFunction(0x1305B0u)) {
        auto targetFn = runtime->lookupFunction(0x1305B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CC4u; }
        if (ctx->pc != 0x1B7CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLookAtMatrixZ__FPA4_fPf_0x1305b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CC4u; }
        if (ctx->pc != 0x1B7CC4u) { return; }
    }
    ctx->pc = 0x1B7CC4u;
label_1b7cc4:
    // 0x1b7cc4: 0x8ea40128  lw          $a0, 0x128($s5)
    ctx->pc = 0x1b7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
label_1b7cc8:
    // 0x1b7cc8: 0xc04dd64  jal         func_137590
label_1b7ccc:
    if (ctx->pc == 0x1B7CCCu) {
        ctx->pc = 0x1B7CCCu;
            // 0x1b7ccc: 0x27a512b0  addiu       $a1, $sp, 0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4784));
        ctx->pc = 0x1B7CD0u;
        goto label_1b7cd0;
    }
    ctx->pc = 0x1B7CC8u;
    SET_GPR_U32(ctx, 31, 0x1B7CD0u);
    ctx->pc = 0x1B7CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CC8u;
            // 0x1b7ccc: 0x27a512b0  addiu       $a1, $sp, 0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CD0u; }
        if (ctx->pc != 0x1B7CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CD0u; }
        if (ctx->pc != 0x1B7CD0u) { return; }
    }
    ctx->pc = 0x1B7CD0u;
label_1b7cd0:
    // 0x1b7cd0: 0xc050bf4  jal         func_142FD0
label_1b7cd4:
    if (ctx->pc == 0x1B7CD4u) {
        ctx->pc = 0x1B7CD4u;
            // 0x1b7cd4: 0x8ea40128  lw          $a0, 0x128($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
        ctx->pc = 0x1B7CD8u;
        goto label_1b7cd8;
    }
    ctx->pc = 0x1B7CD0u;
    SET_GPR_U32(ctx, 31, 0x1B7CD8u);
    ctx->pc = 0x1B7CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CD0u;
            // 0x1b7cd4: 0x8ea40128  lw          $a0, 0x128($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CD8u; }
        if (ctx->pc != 0x1B7CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CD8u; }
        if (ctx->pc != 0x1B7CD8u) { return; }
    }
    ctx->pc = 0x1B7CD8u;
label_1b7cd8:
    // 0x1b7cd8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b7cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b7cdc:
    // 0x1b7cdc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1b7cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b7ce0:
    // 0x1b7ce0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b7ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b7ce4:
    // 0x1b7ce4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b7ce8:
    // 0x1b7ce8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b7ce8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b7cec:
    // 0x1b7cec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b7cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b7cf0:
    // 0x1b7cf0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b7cf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b7cf4:
    // 0x1b7cf4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b7cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b7cf8:
    // 0x1b7cf8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b7cf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b7cfc:
    // 0x1b7cfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b7d00:
    // 0x1b7d00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b7d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7d04:
    // 0x1b7d04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b7d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7d08:
    // 0x1b7d08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7d0c:
    // 0x1b7d0c: 0x3e00008  jr          $ra
label_1b7d10:
    if (ctx->pc == 0x1B7D10u) {
        ctx->pc = 0x1B7D10u;
            // 0x1b7d10: 0x27bd12f0  addiu       $sp, $sp, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4848));
        ctx->pc = 0x1B7D14u;
        goto label_fallthrough_0x1b7d0c;
    }
    ctx->pc = 0x1B7D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D0Cu;
            // 0x1b7d10: 0x27bd12f0  addiu       $sp, $sp, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b7d0c:
    ctx->pc = 0x1B7D14u;
}
