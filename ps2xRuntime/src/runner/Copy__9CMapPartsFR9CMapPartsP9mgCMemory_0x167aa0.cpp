#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__9CMapPartsFR9CMapPartsP9mgCMemory
// Address: 0x167aa0 - 0x16814c
void Copy__9CMapPartsFR9CMapPartsP9mgCMemory_0x167aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__9CMapPartsFR9CMapPartsP9mgCMemory_0x167aa0");
#endif

    switch (ctx->pc) {
        case 0x167aa0u: goto label_167aa0;
        case 0x167aa4u: goto label_167aa4;
        case 0x167aa8u: goto label_167aa8;
        case 0x167aacu: goto label_167aac;
        case 0x167ab0u: goto label_167ab0;
        case 0x167ab4u: goto label_167ab4;
        case 0x167ab8u: goto label_167ab8;
        case 0x167abcu: goto label_167abc;
        case 0x167ac0u: goto label_167ac0;
        case 0x167ac4u: goto label_167ac4;
        case 0x167ac8u: goto label_167ac8;
        case 0x167accu: goto label_167acc;
        case 0x167ad0u: goto label_167ad0;
        case 0x167ad4u: goto label_167ad4;
        case 0x167ad8u: goto label_167ad8;
        case 0x167adcu: goto label_167adc;
        case 0x167ae0u: goto label_167ae0;
        case 0x167ae4u: goto label_167ae4;
        case 0x167ae8u: goto label_167ae8;
        case 0x167aecu: goto label_167aec;
        case 0x167af0u: goto label_167af0;
        case 0x167af4u: goto label_167af4;
        case 0x167af8u: goto label_167af8;
        case 0x167afcu: goto label_167afc;
        case 0x167b00u: goto label_167b00;
        case 0x167b04u: goto label_167b04;
        case 0x167b08u: goto label_167b08;
        case 0x167b0cu: goto label_167b0c;
        case 0x167b10u: goto label_167b10;
        case 0x167b14u: goto label_167b14;
        case 0x167b18u: goto label_167b18;
        case 0x167b1cu: goto label_167b1c;
        case 0x167b20u: goto label_167b20;
        case 0x167b24u: goto label_167b24;
        case 0x167b28u: goto label_167b28;
        case 0x167b2cu: goto label_167b2c;
        case 0x167b30u: goto label_167b30;
        case 0x167b34u: goto label_167b34;
        case 0x167b38u: goto label_167b38;
        case 0x167b3cu: goto label_167b3c;
        case 0x167b40u: goto label_167b40;
        case 0x167b44u: goto label_167b44;
        case 0x167b48u: goto label_167b48;
        case 0x167b4cu: goto label_167b4c;
        case 0x167b50u: goto label_167b50;
        case 0x167b54u: goto label_167b54;
        case 0x167b58u: goto label_167b58;
        case 0x167b5cu: goto label_167b5c;
        case 0x167b60u: goto label_167b60;
        case 0x167b64u: goto label_167b64;
        case 0x167b68u: goto label_167b68;
        case 0x167b6cu: goto label_167b6c;
        case 0x167b70u: goto label_167b70;
        case 0x167b74u: goto label_167b74;
        case 0x167b78u: goto label_167b78;
        case 0x167b7cu: goto label_167b7c;
        case 0x167b80u: goto label_167b80;
        case 0x167b84u: goto label_167b84;
        case 0x167b88u: goto label_167b88;
        case 0x167b8cu: goto label_167b8c;
        case 0x167b90u: goto label_167b90;
        case 0x167b94u: goto label_167b94;
        case 0x167b98u: goto label_167b98;
        case 0x167b9cu: goto label_167b9c;
        case 0x167ba0u: goto label_167ba0;
        case 0x167ba4u: goto label_167ba4;
        case 0x167ba8u: goto label_167ba8;
        case 0x167bacu: goto label_167bac;
        case 0x167bb0u: goto label_167bb0;
        case 0x167bb4u: goto label_167bb4;
        case 0x167bb8u: goto label_167bb8;
        case 0x167bbcu: goto label_167bbc;
        case 0x167bc0u: goto label_167bc0;
        case 0x167bc4u: goto label_167bc4;
        case 0x167bc8u: goto label_167bc8;
        case 0x167bccu: goto label_167bcc;
        case 0x167bd0u: goto label_167bd0;
        case 0x167bd4u: goto label_167bd4;
        case 0x167bd8u: goto label_167bd8;
        case 0x167bdcu: goto label_167bdc;
        case 0x167be0u: goto label_167be0;
        case 0x167be4u: goto label_167be4;
        case 0x167be8u: goto label_167be8;
        case 0x167becu: goto label_167bec;
        case 0x167bf0u: goto label_167bf0;
        case 0x167bf4u: goto label_167bf4;
        case 0x167bf8u: goto label_167bf8;
        case 0x167bfcu: goto label_167bfc;
        case 0x167c00u: goto label_167c00;
        case 0x167c04u: goto label_167c04;
        case 0x167c08u: goto label_167c08;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c10u: goto label_167c10;
        case 0x167c14u: goto label_167c14;
        case 0x167c18u: goto label_167c18;
        case 0x167c1cu: goto label_167c1c;
        case 0x167c20u: goto label_167c20;
        case 0x167c24u: goto label_167c24;
        case 0x167c28u: goto label_167c28;
        case 0x167c2cu: goto label_167c2c;
        case 0x167c30u: goto label_167c30;
        case 0x167c34u: goto label_167c34;
        case 0x167c38u: goto label_167c38;
        case 0x167c3cu: goto label_167c3c;
        case 0x167c40u: goto label_167c40;
        case 0x167c44u: goto label_167c44;
        case 0x167c48u: goto label_167c48;
        case 0x167c4cu: goto label_167c4c;
        case 0x167c50u: goto label_167c50;
        case 0x167c54u: goto label_167c54;
        case 0x167c58u: goto label_167c58;
        case 0x167c5cu: goto label_167c5c;
        case 0x167c60u: goto label_167c60;
        case 0x167c64u: goto label_167c64;
        case 0x167c68u: goto label_167c68;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c70u: goto label_167c70;
        case 0x167c74u: goto label_167c74;
        case 0x167c78u: goto label_167c78;
        case 0x167c7cu: goto label_167c7c;
        case 0x167c80u: goto label_167c80;
        case 0x167c84u: goto label_167c84;
        case 0x167c88u: goto label_167c88;
        case 0x167c8cu: goto label_167c8c;
        case 0x167c90u: goto label_167c90;
        case 0x167c94u: goto label_167c94;
        case 0x167c98u: goto label_167c98;
        case 0x167c9cu: goto label_167c9c;
        case 0x167ca0u: goto label_167ca0;
        case 0x167ca4u: goto label_167ca4;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cacu: goto label_167cac;
        case 0x167cb0u: goto label_167cb0;
        case 0x167cb4u: goto label_167cb4;
        case 0x167cb8u: goto label_167cb8;
        case 0x167cbcu: goto label_167cbc;
        case 0x167cc0u: goto label_167cc0;
        case 0x167cc4u: goto label_167cc4;
        case 0x167cc8u: goto label_167cc8;
        case 0x167cccu: goto label_167ccc;
        case 0x167cd0u: goto label_167cd0;
        case 0x167cd4u: goto label_167cd4;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cdcu: goto label_167cdc;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce4u: goto label_167ce4;
        case 0x167ce8u: goto label_167ce8;
        case 0x167cecu: goto label_167cec;
        case 0x167cf0u: goto label_167cf0;
        case 0x167cf4u: goto label_167cf4;
        case 0x167cf8u: goto label_167cf8;
        case 0x167cfcu: goto label_167cfc;
        case 0x167d00u: goto label_167d00;
        case 0x167d04u: goto label_167d04;
        case 0x167d08u: goto label_167d08;
        case 0x167d0cu: goto label_167d0c;
        case 0x167d10u: goto label_167d10;
        case 0x167d14u: goto label_167d14;
        case 0x167d18u: goto label_167d18;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d20u: goto label_167d20;
        case 0x167d24u: goto label_167d24;
        case 0x167d28u: goto label_167d28;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d30u: goto label_167d30;
        case 0x167d34u: goto label_167d34;
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        case 0x167e34u: goto label_167e34;
        case 0x167e38u: goto label_167e38;
        case 0x167e3cu: goto label_167e3c;
        case 0x167e40u: goto label_167e40;
        case 0x167e44u: goto label_167e44;
        case 0x167e48u: goto label_167e48;
        case 0x167e4cu: goto label_167e4c;
        case 0x167e50u: goto label_167e50;
        case 0x167e54u: goto label_167e54;
        case 0x167e58u: goto label_167e58;
        case 0x167e5cu: goto label_167e5c;
        case 0x167e60u: goto label_167e60;
        case 0x167e64u: goto label_167e64;
        case 0x167e68u: goto label_167e68;
        case 0x167e6cu: goto label_167e6c;
        case 0x167e70u: goto label_167e70;
        case 0x167e74u: goto label_167e74;
        case 0x167e78u: goto label_167e78;
        case 0x167e7cu: goto label_167e7c;
        case 0x167e80u: goto label_167e80;
        case 0x167e84u: goto label_167e84;
        case 0x167e88u: goto label_167e88;
        case 0x167e8cu: goto label_167e8c;
        case 0x167e90u: goto label_167e90;
        case 0x167e94u: goto label_167e94;
        case 0x167e98u: goto label_167e98;
        case 0x167e9cu: goto label_167e9c;
        case 0x167ea0u: goto label_167ea0;
        case 0x167ea4u: goto label_167ea4;
        case 0x167ea8u: goto label_167ea8;
        case 0x167eacu: goto label_167eac;
        case 0x167eb0u: goto label_167eb0;
        case 0x167eb4u: goto label_167eb4;
        case 0x167eb8u: goto label_167eb8;
        case 0x167ebcu: goto label_167ebc;
        case 0x167ec0u: goto label_167ec0;
        case 0x167ec4u: goto label_167ec4;
        case 0x167ec8u: goto label_167ec8;
        case 0x167eccu: goto label_167ecc;
        case 0x167ed0u: goto label_167ed0;
        case 0x167ed4u: goto label_167ed4;
        case 0x167ed8u: goto label_167ed8;
        case 0x167edcu: goto label_167edc;
        case 0x167ee0u: goto label_167ee0;
        case 0x167ee4u: goto label_167ee4;
        case 0x167ee8u: goto label_167ee8;
        case 0x167eecu: goto label_167eec;
        case 0x167ef0u: goto label_167ef0;
        case 0x167ef4u: goto label_167ef4;
        case 0x167ef8u: goto label_167ef8;
        case 0x167efcu: goto label_167efc;
        case 0x167f00u: goto label_167f00;
        case 0x167f04u: goto label_167f04;
        case 0x167f08u: goto label_167f08;
        case 0x167f0cu: goto label_167f0c;
        case 0x167f10u: goto label_167f10;
        case 0x167f14u: goto label_167f14;
        case 0x167f18u: goto label_167f18;
        case 0x167f1cu: goto label_167f1c;
        case 0x167f20u: goto label_167f20;
        case 0x167f24u: goto label_167f24;
        case 0x167f28u: goto label_167f28;
        case 0x167f2cu: goto label_167f2c;
        case 0x167f30u: goto label_167f30;
        case 0x167f34u: goto label_167f34;
        case 0x167f38u: goto label_167f38;
        case 0x167f3cu: goto label_167f3c;
        case 0x167f40u: goto label_167f40;
        case 0x167f44u: goto label_167f44;
        case 0x167f48u: goto label_167f48;
        case 0x167f4cu: goto label_167f4c;
        case 0x167f50u: goto label_167f50;
        case 0x167f54u: goto label_167f54;
        case 0x167f58u: goto label_167f58;
        case 0x167f5cu: goto label_167f5c;
        case 0x167f60u: goto label_167f60;
        case 0x167f64u: goto label_167f64;
        case 0x167f68u: goto label_167f68;
        case 0x167f6cu: goto label_167f6c;
        case 0x167f70u: goto label_167f70;
        case 0x167f74u: goto label_167f74;
        case 0x167f78u: goto label_167f78;
        case 0x167f7cu: goto label_167f7c;
        case 0x167f80u: goto label_167f80;
        case 0x167f84u: goto label_167f84;
        case 0x167f88u: goto label_167f88;
        case 0x167f8cu: goto label_167f8c;
        case 0x167f90u: goto label_167f90;
        case 0x167f94u: goto label_167f94;
        case 0x167f98u: goto label_167f98;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa0u: goto label_167fa0;
        case 0x167fa4u: goto label_167fa4;
        case 0x167fa8u: goto label_167fa8;
        case 0x167facu: goto label_167fac;
        case 0x167fb0u: goto label_167fb0;
        case 0x167fb4u: goto label_167fb4;
        case 0x167fb8u: goto label_167fb8;
        case 0x167fbcu: goto label_167fbc;
        case 0x167fc0u: goto label_167fc0;
        case 0x167fc4u: goto label_167fc4;
        case 0x167fc8u: goto label_167fc8;
        case 0x167fccu: goto label_167fcc;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fd4u: goto label_167fd4;
        case 0x167fd8u: goto label_167fd8;
        case 0x167fdcu: goto label_167fdc;
        case 0x167fe0u: goto label_167fe0;
        case 0x167fe4u: goto label_167fe4;
        case 0x167fe8u: goto label_167fe8;
        case 0x167fecu: goto label_167fec;
        case 0x167ff0u: goto label_167ff0;
        case 0x167ff4u: goto label_167ff4;
        case 0x167ff8u: goto label_167ff8;
        case 0x167ffcu: goto label_167ffc;
        case 0x168000u: goto label_168000;
        case 0x168004u: goto label_168004;
        case 0x168008u: goto label_168008;
        case 0x16800cu: goto label_16800c;
        case 0x168010u: goto label_168010;
        case 0x168014u: goto label_168014;
        case 0x168018u: goto label_168018;
        case 0x16801cu: goto label_16801c;
        case 0x168020u: goto label_168020;
        case 0x168024u: goto label_168024;
        case 0x168028u: goto label_168028;
        case 0x16802cu: goto label_16802c;
        case 0x168030u: goto label_168030;
        case 0x168034u: goto label_168034;
        case 0x168038u: goto label_168038;
        case 0x16803cu: goto label_16803c;
        case 0x168040u: goto label_168040;
        case 0x168044u: goto label_168044;
        case 0x168048u: goto label_168048;
        case 0x16804cu: goto label_16804c;
        case 0x168050u: goto label_168050;
        case 0x168054u: goto label_168054;
        case 0x168058u: goto label_168058;
        case 0x16805cu: goto label_16805c;
        case 0x168060u: goto label_168060;
        case 0x168064u: goto label_168064;
        case 0x168068u: goto label_168068;
        case 0x16806cu: goto label_16806c;
        case 0x168070u: goto label_168070;
        case 0x168074u: goto label_168074;
        case 0x168078u: goto label_168078;
        case 0x16807cu: goto label_16807c;
        case 0x168080u: goto label_168080;
        case 0x168084u: goto label_168084;
        case 0x168088u: goto label_168088;
        case 0x16808cu: goto label_16808c;
        case 0x168090u: goto label_168090;
        case 0x168094u: goto label_168094;
        case 0x168098u: goto label_168098;
        case 0x16809cu: goto label_16809c;
        case 0x1680a0u: goto label_1680a0;
        case 0x1680a4u: goto label_1680a4;
        case 0x1680a8u: goto label_1680a8;
        case 0x1680acu: goto label_1680ac;
        case 0x1680b0u: goto label_1680b0;
        case 0x1680b4u: goto label_1680b4;
        case 0x1680b8u: goto label_1680b8;
        case 0x1680bcu: goto label_1680bc;
        case 0x1680c0u: goto label_1680c0;
        case 0x1680c4u: goto label_1680c4;
        case 0x1680c8u: goto label_1680c8;
        case 0x1680ccu: goto label_1680cc;
        case 0x1680d0u: goto label_1680d0;
        case 0x1680d4u: goto label_1680d4;
        case 0x1680d8u: goto label_1680d8;
        case 0x1680dcu: goto label_1680dc;
        case 0x1680e0u: goto label_1680e0;
        case 0x1680e4u: goto label_1680e4;
        case 0x1680e8u: goto label_1680e8;
        case 0x1680ecu: goto label_1680ec;
        case 0x1680f0u: goto label_1680f0;
        case 0x1680f4u: goto label_1680f4;
        case 0x1680f8u: goto label_1680f8;
        case 0x1680fcu: goto label_1680fc;
        case 0x168100u: goto label_168100;
        case 0x168104u: goto label_168104;
        case 0x168108u: goto label_168108;
        case 0x16810cu: goto label_16810c;
        case 0x168110u: goto label_168110;
        case 0x168114u: goto label_168114;
        case 0x168118u: goto label_168118;
        case 0x16811cu: goto label_16811c;
        case 0x168120u: goto label_168120;
        case 0x168124u: goto label_168124;
        case 0x168128u: goto label_168128;
        case 0x16812cu: goto label_16812c;
        case 0x168130u: goto label_168130;
        case 0x168134u: goto label_168134;
        case 0x168138u: goto label_168138;
        case 0x16813cu: goto label_16813c;
        case 0x168140u: goto label_168140;
        case 0x168144u: goto label_168144;
        case 0x168148u: goto label_168148;
        default: break;
    }

    ctx->pc = 0x167aa0u;

label_167aa0:
    // 0x167aa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_167aa4:
    // 0x167aa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x167aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_167aa8:
    // 0x167aa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x167aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_167aac:
    // 0x167aac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_167ab0:
    // 0x167ab0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x167ab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167ab4:
    // 0x167ab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_167ab8:
    // 0x167ab8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x167ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_167abc:
    // 0x167abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_167ac0:
    // 0x167ac0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x167ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_167ac4:
    // 0x167ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167ac8:
    // 0x167ac8: 0x126000f7  beqz        $s3, . + 4 + (0xF7 << 2)
label_167acc:
    if (ctx->pc == 0x167ACCu) {
        ctx->pc = 0x167ACCu;
            // 0x167acc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x167AD0u;
        goto label_167ad0;
    }
    ctx->pc = 0x167AC8u;
    {
        const bool branch_taken_0x167ac8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x167ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167AC8u;
            // 0x167acc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ac8) {
            ctx->pc = 0x167EA8u;
            goto label_167ea8;
        }
    }
    ctx->pc = 0x167AD0u;
label_167ad0:
    // 0x167ad0: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x167ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167ad4:
    // 0x167ad4: 0x26a60070  addiu       $a2, $s5, 0x70
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_167ad8:
    // 0x167ad8: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x167ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167adc:
    // 0x167adc: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x167adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_167ae0:
    // 0x167ae0: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x167ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167ae4:
    // 0x167ae4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_167ae8:
    // 0x167ae8: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x167ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167aec:
    // 0x167aec: 0xe6830010  swc1        $f3, 0x10($s4)
    ctx->pc = 0x167aecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_167af0:
    // 0x167af0: 0xe6820014  swc1        $f2, 0x14($s4)
    ctx->pc = 0x167af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_167af4:
    // 0x167af4: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x167af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_167af8:
    // 0x167af8: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x167af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_167afc:
    // 0x167afc: 0xc6a30020  lwc1        $f3, 0x20($s5)
    ctx->pc = 0x167afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167b00:
    // 0x167b00: 0xc6a20024  lwc1        $f2, 0x24($s5)
    ctx->pc = 0x167b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167b04:
    // 0x167b04: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x167b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167b08:
    // 0x167b08: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x167b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b0c:
    // 0x167b0c: 0xe6830020  swc1        $f3, 0x20($s4)
    ctx->pc = 0x167b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_167b10:
    // 0x167b10: 0xe6820024  swc1        $f2, 0x24($s4)
    ctx->pc = 0x167b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_167b14:
    // 0x167b14: 0xe6810028  swc1        $f1, 0x28($s4)
    ctx->pc = 0x167b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_167b18:
    // 0x167b18: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x167b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_167b1c:
    // 0x167b1c: 0xc6a30030  lwc1        $f3, 0x30($s5)
    ctx->pc = 0x167b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167b20:
    // 0x167b20: 0xc6a20034  lwc1        $f2, 0x34($s5)
    ctx->pc = 0x167b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167b24:
    // 0x167b24: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x167b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167b28:
    // 0x167b28: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x167b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b2c:
    // 0x167b2c: 0xe6830030  swc1        $f3, 0x30($s4)
    ctx->pc = 0x167b2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
label_167b30:
    // 0x167b30: 0xe6820034  swc1        $f2, 0x34($s4)
    ctx->pc = 0x167b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_167b34:
    // 0x167b34: 0xe6810038  swc1        $f1, 0x38($s4)
    ctx->pc = 0x167b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_167b38:
    // 0x167b38: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x167b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_167b3c:
    // 0x167b3c: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x167b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_167b40:
    // 0x167b40: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x167b40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_167b44:
    // 0x167b44: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x167b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_167b48:
    // 0x167b48: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x167b48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_167b4c:
    // 0x167b4c: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x167b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b50:
    // 0x167b50: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x167b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_167b54:
    // 0x167b54: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x167b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_167b58:
    // 0x167b58: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x167b58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_167b5c:
    // 0x167b5c: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x167b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b60:
    // 0x167b60: 0xe6800058  swc1        $f0, 0x58($s4)
    ctx->pc = 0x167b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
label_167b64:
    // 0x167b64: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x167b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b68:
    // 0x167b68: 0xe680005c  swc1        $f0, 0x5C($s4)
    ctx->pc = 0x167b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
label_167b6c:
    // 0x167b6c: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x167b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b70:
    // 0x167b70: 0xe6800060  swc1        $f0, 0x60($s4)
    ctx->pc = 0x167b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
label_167b74:
    // 0x167b74: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_167b78:
    // 0x167b78: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x167b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_167b7c:
    // 0x167b7c: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x167b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_167b80:
    // 0x167b80: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x167b80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_167b84:
    // 0x167b84: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x167b84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_167b88:
    // 0x167b88: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_167b8c:
    // 0x167b8c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x167b8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_167b90:
    // 0x167b90: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x167b90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_167b94:
    // 0x167b94: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x167b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_167b98:
    // 0x167b98: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x167b98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_167b9c:
    // 0x167b9c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_167ba0:
    if (ctx->pc == 0x167BA0u) {
        ctx->pc = 0x167BA0u;
            // 0x167ba0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x167BA4u;
        goto label_167ba4;
    }
    ctx->pc = 0x167B9Cu;
    {
        const bool branch_taken_0x167b9c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x167BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167B9Cu;
            // 0x167ba0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b9c) {
            ctx->pc = 0x167B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167b84;
        }
    }
    ctx->pc = 0x167BA4u;
label_167ba4:
    // 0x167ba4: 0x26a60090  addiu       $a2, $s5, 0x90
    ctx->pc = 0x167ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_167ba8:
    // 0x167ba8: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x167ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_167bac:
    // 0x167bac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x167bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_167bb0:
    // 0x167bb0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x167bb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_167bb4:
    // 0x167bb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_167bb8:
    // 0x167bb8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x167bb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_167bbc:
    // 0x167bbc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x167bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_167bc0:
    // 0x167bc0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x167bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_167bc4:
    // 0x167bc4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x167bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_167bc8:
    // 0x167bc8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_167bcc:
    if (ctx->pc == 0x167BCCu) {
        ctx->pc = 0x167BCCu;
            // 0x167bcc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x167BD0u;
        goto label_167bd0;
    }
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x167BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167BC8u;
            // 0x167bcc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167bb0;
        }
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_167bd4:
    // 0x167bd4: 0x268400c0  addiu       $a0, $s4, 0xC0
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_167bd8:
    // 0x167bd8: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x167bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_167bdc:
    // 0x167bdc: 0xc04e1b0  jal         func_1386C0
label_167be0:
    if (ctx->pc == 0x167BE0u) {
        ctx->pc = 0x167BE0u;
            // 0x167be0: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x167BE4u;
        goto label_167be4;
    }
    ctx->pc = 0x167BDCu;
    SET_GPR_U32(ctx, 31, 0x167BE4u);
    ctx->pc = 0x167BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167BDCu;
            // 0x167be0: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167BE4u; }
        if (ctx->pc != 0x167BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167BE4u; }
        if (ctx->pc != 0x167BE4u) { return; }
    }
    ctx->pc = 0x167BE4u;
label_167be4:
    // 0x167be4: 0x8ea201d0  lw          $v0, 0x1D0($s5)
    ctx->pc = 0x167be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
label_167be8:
    // 0x167be8: 0x26a601f0  addiu       $a2, $s5, 0x1F0
    ctx->pc = 0x167be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
label_167bec:
    // 0x167bec: 0x268501f0  addiu       $a1, $s4, 0x1F0
    ctx->pc = 0x167becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
label_167bf0:
    // 0x167bf0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_167bf4:
    // 0x167bf4: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x167bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_167bf8:
    // 0x167bf8: 0x8ea201d4  lw          $v0, 0x1D4($s5)
    ctx->pc = 0x167bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 468)));
label_167bfc:
    // 0x167bfc: 0xae8201d4  sw          $v0, 0x1D4($s4)
    ctx->pc = 0x167bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 2));
label_167c00:
    // 0x167c00: 0x8ea201d8  lw          $v0, 0x1D8($s5)
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 472)));
label_167c04:
    // 0x167c04: 0xae8201d8  sw          $v0, 0x1D8($s4)
    ctx->pc = 0x167c04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 2));
label_167c08:
    // 0x167c08: 0x8ea201dc  lw          $v0, 0x1DC($s5)
    ctx->pc = 0x167c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_167c0c:
    // 0x167c0c: 0xae8201dc  sw          $v0, 0x1DC($s4)
    ctx->pc = 0x167c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 476), GPR_U32(ctx, 2));
label_167c10:
    // 0x167c10: 0xc6a001e0  lwc1        $f0, 0x1E0($s5)
    ctx->pc = 0x167c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167c14:
    // 0x167c14: 0xe68001e0  swc1        $f0, 0x1E0($s4)
    ctx->pc = 0x167c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 480), bits); }
label_167c18:
    // 0x167c18: 0x8ea201e4  lw          $v0, 0x1E4($s5)
    ctx->pc = 0x167c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 484)));
label_167c1c:
    // 0x167c1c: 0xae8201e4  sw          $v0, 0x1E4($s4)
    ctx->pc = 0x167c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 2));
label_167c20:
    // 0x167c20: 0x8ea201e8  lw          $v0, 0x1E8($s5)
    ctx->pc = 0x167c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 488)));
label_167c24:
    // 0x167c24: 0xae8201e8  sw          $v0, 0x1E8($s4)
    ctx->pc = 0x167c24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 488), GPR_U32(ctx, 2));
label_167c28:
    // 0x167c28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x167c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_167c2c:
    // 0x167c2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_167c30:
    // 0x167c30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_167c34:
    // 0x167c34: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x167c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_167c38:
    // 0x167c38: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x167c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_167c3c:
    // 0x167c3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x167c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_167c40:
    // 0x167c40: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_167c44:
    if (ctx->pc == 0x167C44u) {
        ctx->pc = 0x167C44u;
            // 0x167c44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x167C48u;
        goto label_167c48;
    }
    ctx->pc = 0x167C40u;
    {
        const bool branch_taken_0x167c40 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x167C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167C40u;
            // 0x167c44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c40) {
            ctx->pc = 0x167C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167c28;
        }
    }
    ctx->pc = 0x167C48u;
label_167c48:
    // 0x167c48: 0x8ea20230  lw          $v0, 0x230($s5)
    ctx->pc = 0x167c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 560)));
label_167c4c:
    // 0x167c4c: 0x26840240  addiu       $a0, $s4, 0x240
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_167c50:
    // 0x167c50: 0x26a50240  addiu       $a1, $s5, 0x240
    ctx->pc = 0x167c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
label_167c54:
    // 0x167c54: 0xc04e624  jal         func_139890
label_167c58:
    if (ctx->pc == 0x167C58u) {
        ctx->pc = 0x167C58u;
            // 0x167c58: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->pc = 0x167C5Cu;
        goto label_167c5c;
    }
    ctx->pc = 0x167C54u;
    SET_GPR_U32(ctx, 31, 0x167C5Cu);
    ctx->pc = 0x167C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167C54u;
            // 0x167c58: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C5Cu; }
        if (ctx->pc != 0x167C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C5Cu; }
        if (ctx->pc != 0x167C5Cu) { return; }
    }
    ctx->pc = 0x167C5Cu;
label_167c5c:
    // 0x167c5c: 0xc6a30260  lwc1        $f3, 0x260($s5)
    ctx->pc = 0x167c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167c60:
    // 0x167c60: 0x26840280  addiu       $a0, $s4, 0x280
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
label_167c64:
    // 0x167c64: 0xc6a20264  lwc1        $f2, 0x264($s5)
    ctx->pc = 0x167c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167c68:
    // 0x167c68: 0x26a50280  addiu       $a1, $s5, 0x280
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
label_167c6c:
    // 0x167c6c: 0xc6a10268  lwc1        $f1, 0x268($s5)
    ctx->pc = 0x167c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167c70:
    // 0x167c70: 0xc6a0026c  lwc1        $f0, 0x26C($s5)
    ctx->pc = 0x167c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167c74:
    // 0x167c74: 0xe6830260  swc1        $f3, 0x260($s4)
    ctx->pc = 0x167c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 608), bits); }
label_167c78:
    // 0x167c78: 0xe6820264  swc1        $f2, 0x264($s4)
    ctx->pc = 0x167c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 612), bits); }
label_167c7c:
    // 0x167c7c: 0xe6810268  swc1        $f1, 0x268($s4)
    ctx->pc = 0x167c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 616), bits); }
label_167c80:
    // 0x167c80: 0xe680026c  swc1        $f0, 0x26C($s4)
    ctx->pc = 0x167c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 620), bits); }
label_167c84:
    // 0x167c84: 0x8ea20270  lw          $v0, 0x270($s5)
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
label_167c88:
    // 0x167c88: 0xc04e624  jal         func_139890
label_167c8c:
    if (ctx->pc == 0x167C8Cu) {
        ctx->pc = 0x167C8Cu;
            // 0x167c8c: 0xae820270  sw          $v0, 0x270($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
        ctx->pc = 0x167C90u;
        goto label_167c90;
    }
    ctx->pc = 0x167C88u;
    SET_GPR_U32(ctx, 31, 0x167C90u);
    ctx->pc = 0x167C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167C88u;
            // 0x167c8c: 0xae820270  sw          $v0, 0x270($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C90u; }
        if (ctx->pc != 0x167C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C90u; }
        if (ctx->pc != 0x167C90u) { return; }
    }
    ctx->pc = 0x167C90u;
label_167c90:
    // 0x167c90: 0xc6a302a0  lwc1        $f3, 0x2A0($s5)
    ctx->pc = 0x167c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167c94:
    // 0x167c94: 0xc6a202a4  lwc1        $f2, 0x2A4($s5)
    ctx->pc = 0x167c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167c98:
    // 0x167c98: 0xc6a102a8  lwc1        $f1, 0x2A8($s5)
    ctx->pc = 0x167c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167c9c:
    // 0x167c9c: 0xc6a002ac  lwc1        $f0, 0x2AC($s5)
    ctx->pc = 0x167c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167ca0:
    // 0x167ca0: 0xe68302a0  swc1        $f3, 0x2A0($s4)
    ctx->pc = 0x167ca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 672), bits); }
label_167ca4:
    // 0x167ca4: 0xe68202a4  swc1        $f2, 0x2A4($s4)
    ctx->pc = 0x167ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 676), bits); }
label_167ca8:
    // 0x167ca8: 0xe68102a8  swc1        $f1, 0x2A8($s4)
    ctx->pc = 0x167ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 680), bits); }
label_167cac:
    // 0x167cac: 0xe68002ac  swc1        $f0, 0x2AC($s4)
    ctx->pc = 0x167cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 684), bits); }
label_167cb0:
    // 0x167cb0: 0x8ea202b0  lw          $v0, 0x2B0($s5)
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
label_167cb4:
    // 0x167cb4: 0xae8202b0  sw          $v0, 0x2B0($s4)
    ctx->pc = 0x167cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 2));
label_167cb8:
    // 0x167cb8: 0xc6a302b4  lwc1        $f3, 0x2B4($s5)
    ctx->pc = 0x167cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167cbc:
    // 0x167cbc: 0xc6a202b8  lwc1        $f2, 0x2B8($s5)
    ctx->pc = 0x167cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167cc0:
    // 0x167cc0: 0xc6a102bc  lwc1        $f1, 0x2BC($s5)
    ctx->pc = 0x167cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167cc4:
    // 0x167cc4: 0xc6a002c0  lwc1        $f0, 0x2C0($s5)
    ctx->pc = 0x167cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167cc8:
    // 0x167cc8: 0xe68302b4  swc1        $f3, 0x2B4($s4)
    ctx->pc = 0x167cc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 692), bits); }
label_167ccc:
    // 0x167ccc: 0xe68202b8  swc1        $f2, 0x2B8($s4)
    ctx->pc = 0x167cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 696), bits); }
label_167cd0:
    // 0x167cd0: 0xe68102bc  swc1        $f1, 0x2BC($s4)
    ctx->pc = 0x167cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 700), bits); }
label_167cd4:
    // 0x167cd4: 0xe68002c0  swc1        $f0, 0x2C0($s4)
    ctx->pc = 0x167cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 704), bits); }
label_167cd8:
    // 0x167cd8: 0xc6a302c4  lwc1        $f3, 0x2C4($s5)
    ctx->pc = 0x167cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167cdc:
    // 0x167cdc: 0xc6a202c8  lwc1        $f2, 0x2C8($s5)
    ctx->pc = 0x167cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167ce0:
    // 0x167ce0: 0xc6a102cc  lwc1        $f1, 0x2CC($s5)
    ctx->pc = 0x167ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167ce4:
    // 0x167ce4: 0xc6a002d0  lwc1        $f0, 0x2D0($s5)
    ctx->pc = 0x167ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167ce8:
    // 0x167ce8: 0xe68302c4  swc1        $f3, 0x2C4($s4)
    ctx->pc = 0x167ce8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 708), bits); }
label_167cec:
    // 0x167cec: 0xe68202c8  swc1        $f2, 0x2C8($s4)
    ctx->pc = 0x167cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 712), bits); }
label_167cf0:
    // 0x167cf0: 0xe68102cc  swc1        $f1, 0x2CC($s4)
    ctx->pc = 0x167cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 716), bits); }
label_167cf4:
    // 0x167cf4: 0xe68002d0  swc1        $f0, 0x2D0($s4)
    ctx->pc = 0x167cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 720), bits); }
label_167cf8:
    // 0x167cf8: 0xc6a102d4  lwc1        $f1, 0x2D4($s5)
    ctx->pc = 0x167cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167cfc:
    // 0x167cfc: 0xc6a002d8  lwc1        $f0, 0x2D8($s5)
    ctx->pc = 0x167cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167d00:
    // 0x167d00: 0xe68102d4  swc1        $f1, 0x2D4($s4)
    ctx->pc = 0x167d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 724), bits); }
label_167d04:
    // 0x167d04: 0xe68002d8  swc1        $f0, 0x2D8($s4)
    ctx->pc = 0x167d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 728), bits); }
label_167d08:
    // 0x167d08: 0x8ea202dc  lw          $v0, 0x2DC($s5)
    ctx->pc = 0x167d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
label_167d0c:
    // 0x167d0c: 0xae8202dc  sw          $v0, 0x2DC($s4)
    ctx->pc = 0x167d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 2));
label_167d10:
    // 0x167d10: 0x8ea202e4  lw          $v0, 0x2E4($s5)
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 740)));
label_167d14:
    // 0x167d14: 0xae8202e4  sw          $v0, 0x2E4($s4)
    ctx->pc = 0x167d14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 740), GPR_U32(ctx, 2));
label_167d18:
    // 0x167d18: 0x8ea202e8  lw          $v0, 0x2E8($s5)
    ctx->pc = 0x167d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 744)));
label_167d1c:
    // 0x167d1c: 0xae8202e8  sw          $v0, 0x2E8($s4)
    ctx->pc = 0x167d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 744), GPR_U32(ctx, 2));
label_167d20:
    // 0x167d20: 0x8ea202ec  lw          $v0, 0x2EC($s5)
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 748)));
label_167d24:
    // 0x167d24: 0xae8202ec  sw          $v0, 0x2EC($s4)
    ctx->pc = 0x167d24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 748), GPR_U32(ctx, 2));
label_167d28:
    // 0x167d28: 0x8ea202f0  lw          $v0, 0x2F0($s5)
    ctx->pc = 0x167d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_167d2c:
    // 0x167d2c: 0xae8202f0  sw          $v0, 0x2F0($s4)
    ctx->pc = 0x167d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 752), GPR_U32(ctx, 2));
label_167d30:
    // 0x167d30: 0x8ea202f4  lw          $v0, 0x2F4($s5)
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_167d34:
    // 0x167d34: 0xae8202f4  sw          $v0, 0x2F4($s4)
    ctx->pc = 0x167d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 2));
label_167d38:
    // 0x167d38: 0x8ea202f8  lw          $v0, 0x2F8($s5)
    ctx->pc = 0x167d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 760)));
label_167d3c:
    // 0x167d3c: 0xae8202f8  sw          $v0, 0x2F8($s4)
    ctx->pc = 0x167d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 760), GPR_U32(ctx, 2));
label_167d40:
    // 0x167d40: 0xc6a102fc  lwc1        $f1, 0x2FC($s5)
    ctx->pc = 0x167d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167d44:
    // 0x167d44: 0xc6a00300  lwc1        $f0, 0x300($s5)
    ctx->pc = 0x167d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167d48:
    // 0x167d48: 0xe68102fc  swc1        $f1, 0x2FC($s4)
    ctx->pc = 0x167d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 764), bits); }
label_167d4c:
    // 0x167d4c: 0xe6800300  swc1        $f0, 0x300($s4)
    ctx->pc = 0x167d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 768), bits); }
label_167d50:
    // 0x167d50: 0x8eb100b0  lw          $s1, 0xB0($s5)
    ctx->pc = 0x167d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_167d54:
    // 0x167d54: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_167d58:
    if (ctx->pc == 0x167D58u) {
        ctx->pc = 0x167D58u;
            // 0x167d58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167D5Cu;
        goto label_167d5c;
    }
    ctx->pc = 0x167D54u;
    {
        const bool branch_taken_0x167d54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D54u;
            // 0x167d58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d54) {
            ctx->pc = 0x167E74u;
            goto label_167e74;
        }
    }
    ctx->pc = 0x167D5Cu;
label_167d5c:
    // 0x167d5c: 0x862200b0  lh          $v0, 0xB0($s1)
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 176)));
label_167d60:
    // 0x167d60: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_167d64:
    if (ctx->pc == 0x167D64u) {
        ctx->pc = 0x167D64u;
            // 0x167d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167D68u;
        goto label_167d68;
    }
    ctx->pc = 0x167D60u;
    {
        const bool branch_taken_0x167d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D60u;
            // 0x167d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d60) {
            ctx->pc = 0x167E64u;
            goto label_167e64;
        }
    }
    ctx->pc = 0x167D68u;
label_167d68:
    // 0x167d68: 0xc04e748  jal         func_139D20
label_167d6c:
    if (ctx->pc == 0x167D6Cu) {
        ctx->pc = 0x167D6Cu;
            // 0x167d6c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x167D70u;
        goto label_167d70;
    }
    ctx->pc = 0x167D68u;
    SET_GPR_U32(ctx, 31, 0x167D70u);
    ctx->pc = 0x167D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D68u;
            // 0x167d6c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D70u; }
        if (ctx->pc != 0x167D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D70u; }
        if (ctx->pc != 0x167D70u) { return; }
    }
    ctx->pc = 0x167D70u;
label_167d70:
    // 0x167d70: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_167d74:
    // 0x167d74: 0xc04e638  jal         func_1398E0
label_167d78:
    if (ctx->pc == 0x167D78u) {
        ctx->pc = 0x167D78u;
            // 0x167d78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167D7Cu;
        goto label_167d7c;
    }
    ctx->pc = 0x167D74u;
    SET_GPR_U32(ctx, 31, 0x167D7Cu);
    ctx->pc = 0x167D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D74u;
            // 0x167d78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D7Cu; }
        if (ctx->pc != 0x167D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D7Cu; }
        if (ctx->pc != 0x167D7Cu) { return; }
    }
    ctx->pc = 0x167D7Cu;
label_167d7c:
    // 0x167d7c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_167d80:
    if (ctx->pc == 0x167D80u) {
        ctx->pc = 0x167D80u;
            // 0x167d80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167D84u;
        goto label_167d84;
    }
    ctx->pc = 0x167D7Cu;
    {
        const bool branch_taken_0x167d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D7Cu;
            // 0x167d80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d7c) {
            ctx->pc = 0x167E10u;
            goto label_167e10;
        }
    }
    ctx->pc = 0x167D84u;
label_167d84:
    // 0x167d84: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x167d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_167d88:
    // 0x167d88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_167d8c:
    // 0x167d8c: 0x24635398  addiu       $v1, $v1, 0x5398
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21400));
label_167d90:
    // 0x167d90: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x167d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_167d94:
    // 0x167d94: 0xae4300c0  sw          $v1, 0xC0($s2)
    ctx->pc = 0x167d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
label_167d98:
    // 0x167d98: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x167d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_167d9c:
    // 0x167d9c: 0x8e590010  lw          $t9, 0x10($s2)
    ctx->pc = 0x167d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_167da0:
    // 0x167da0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x167da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_167da4:
    // 0x167da4: 0x320f809  jalr        $t9
label_167da8:
    if (ctx->pc == 0x167DA8u) {
        ctx->pc = 0x167DA8u;
            // 0x167da8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x167DACu;
        goto label_167dac;
    }
    ctx->pc = 0x167DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167DACu);
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DA4u;
            // 0x167da8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167DACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167DACu; }
            if (ctx->pc != 0x167DACu) { return; }
        }
        }
    }
    ctx->pc = 0x167DACu;
label_167dac:
    // 0x167dac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x167dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_167db0:
    // 0x167db0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x167db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_167db4:
    // 0x167db4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x167db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_167db8:
    // 0x167db8: 0x8e590010  lw          $t9, 0x10($s2)
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_167dbc:
    // 0x167dbc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x167dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_167dc0:
    // 0x167dc0: 0x320f809  jalr        $t9
label_167dc4:
    if (ctx->pc == 0x167DC4u) {
        ctx->pc = 0x167DC4u;
            // 0x167dc4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x167DC8u;
        goto label_167dc8;
    }
    ctx->pc = 0x167DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167DC8u);
        ctx->pc = 0x167DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DC0u;
            // 0x167dc4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167DC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167DC8u; }
            if (ctx->pc != 0x167DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x167DC8u;
label_167dc8:
    // 0x167dc8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x167dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_167dcc:
    // 0x167dcc: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x167dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_167dd0:
    // 0x167dd0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x167dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_167dd4:
    // 0x167dd4: 0x8e590010  lw          $t9, 0x10($s2)
    ctx->pc = 0x167dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_167dd8:
    // 0x167dd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x167dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_167ddc:
    // 0x167ddc: 0x320f809  jalr        $t9
label_167de0:
    if (ctx->pc == 0x167DE0u) {
        ctx->pc = 0x167DE0u;
            // 0x167de0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x167DE4u;
        goto label_167de4;
    }
    ctx->pc = 0x167DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167DE4u);
        ctx->pc = 0x167DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DDCu;
            // 0x167de0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167DE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167DE4u; }
            if (ctx->pc != 0x167DE4u) { return; }
        }
        }
    }
    ctx->pc = 0x167DE4u;
label_167de4:
    // 0x167de4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x167de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_167de8:
    // 0x167de8: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x167de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
label_167dec:
    // 0x167dec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x167decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_167df0:
    // 0x167df0: 0x8e590010  lw          $t9, 0x10($s2)
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_167df4:
    // 0x167df4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_167df8:
    // 0x167df8: 0x320f809  jalr        $t9
label_167dfc:
    if (ctx->pc == 0x167DFCu) {
        ctx->pc = 0x167DFCu;
            // 0x167dfc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x167E00u;
        goto label_167e00;
    }
    ctx->pc = 0x167DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167E00u);
        ctx->pc = 0x167DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DF8u;
            // 0x167dfc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167E00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167E00u; }
            if (ctx->pc != 0x167E00u) { return; }
        }
        }
    }
    ctx->pc = 0x167E00u;
label_167e00:
    // 0x167e00: 0x8e5900c0  lw          $t9, 0xC0($s2)
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_167e04:
    // 0x167e04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_167e08:
    // 0x167e08: 0x320f809  jalr        $t9
label_167e0c:
    if (ctx->pc == 0x167E0Cu) {
        ctx->pc = 0x167E0Cu;
            // 0x167e0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E10u;
        goto label_167e10;
    }
    ctx->pc = 0x167E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167E10u);
        ctx->pc = 0x167E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E08u;
            // 0x167e0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167E10u; }
            if (ctx->pc != 0x167E10u) { return; }
        }
        }
    }
    ctx->pc = 0x167E10u;
label_167e10:
    // 0x167e10: 0x124000c5  beqz        $s2, . + 4 + (0xC5 << 2)
label_167e14:
    if (ctx->pc == 0x167E14u) {
        ctx->pc = 0x167E14u;
            // 0x167e14: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x167E18u;
        goto label_167e18;
    }
    ctx->pc = 0x167E10u;
    {
        const bool branch_taken_0x167e10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E10u;
            // 0x167e14: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e10) {
            ctx->pc = 0x168128u;
            goto label_168128;
        }
    }
    ctx->pc = 0x167E18u;
label_167e18:
    // 0x167e18: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_167e1c:
    // 0x167e1c: 0xc05a214  jal         func_168850
label_167e20:
    if (ctx->pc == 0x167E20u) {
        ctx->pc = 0x167E20u;
            // 0x167e20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E24u;
        goto label_167e24;
    }
    ctx->pc = 0x167E1Cu;
    SET_GPR_U32(ctx, 31, 0x167E24u);
    ctx->pc = 0x167E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E1Cu;
            // 0x167e20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168850u;
    if (runtime->hasFunction(0x168850u)) {
        auto targetFn = runtime->lookupFunction(0x168850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E24u; }
        if (ctx->pc != 0x167E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__9CMapPieceFR9CMapPieceP9mgCMemory_0x168850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E24u; }
        if (ctx->pc != 0x167E24u) { return; }
    }
    ctx->pc = 0x167E24u;
label_167e24:
    // 0x167e24: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_167e28:
    if (ctx->pc == 0x167E28u) {
        ctx->pc = 0x167E28u;
            // 0x167e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E2Cu;
        goto label_167e2c;
    }
    ctx->pc = 0x167E24u;
    {
        const bool branch_taken_0x167e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E24u;
            // 0x167e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e24) {
            ctx->pc = 0x167E60u;
            goto label_167e60;
        }
    }
    ctx->pc = 0x167E2Cu;
label_167e2c:
    // 0x167e2c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_167e30:
    if (ctx->pc == 0x167E30u) {
        ctx->pc = 0x167E34u;
        goto label_167e34;
    }
    ctx->pc = 0x167E2Cu;
    {
        const bool branch_taken_0x167e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167e2c) {
            ctx->pc = 0x167E4Cu;
            goto label_167e4c;
        }
    }
    ctx->pc = 0x167E34u;
label_167e34:
    // 0x167e34: 0x0  nop
    ctx->pc = 0x167e34u;
    // NOP
label_167e38:
    // 0x167e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167e3c:
    // 0x167e3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_167e40:
    if (ctx->pc == 0x167E40u) {
        ctx->pc = 0x167E44u;
        goto label_167e44;
    }
    ctx->pc = 0x167E3Cu;
    {
        const bool branch_taken_0x167e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167e3c) {
            ctx->pc = 0x167E4Cu;
            goto label_167e4c;
        }
    }
    ctx->pc = 0x167E44u;
label_167e44:
    // 0x167e44: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_167e48:
    if (ctx->pc == 0x167E48u) {
        ctx->pc = 0x167E48u;
            // 0x167e48: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E4Cu;
        goto label_167e4c;
    }
    ctx->pc = 0x167E44u;
    {
        const bool branch_taken_0x167e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E44u;
            // 0x167e48: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e44) {
            ctx->pc = 0x167E34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167e34;
        }
    }
    ctx->pc = 0x167E4Cu;
label_167e4c:
    // 0x167e4c: 0x0  nop
    ctx->pc = 0x167e4cu;
    // NOP
label_167e50:
    // 0x167e50: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_167e54:
    if (ctx->pc == 0x167E54u) {
        ctx->pc = 0x167E54u;
            // 0x167e54: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x167E58u;
        goto label_167e58;
    }
    ctx->pc = 0x167E50u;
    {
        const bool branch_taken_0x167e50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E50u;
            // 0x167e54: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e50) {
            ctx->pc = 0x167E64u;
            goto label_167e64;
        }
    }
    ctx->pc = 0x167E58u;
label_167e58:
    // 0x167e58: 0x10000002  b           . + 4 + (0x2 << 2)
label_167e5c:
    if (ctx->pc == 0x167E5Cu) {
        ctx->pc = 0x167E5Cu;
            // 0x167e5c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x167E60u;
        goto label_167e60;
    }
    ctx->pc = 0x167E58u;
    {
        const bool branch_taken_0x167e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E58u;
            // 0x167e5c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e58) {
            ctx->pc = 0x167E64u;
            goto label_167e64;
        }
    }
    ctx->pc = 0x167E60u;
label_167e60:
    // 0x167e60: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x167e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167e64:
    // 0x167e64: 0x0  nop
    ctx->pc = 0x167e64u;
    // NOP
label_167e68:
    // 0x167e68: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x167e68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_167e6c:
    // 0x167e6c: 0x1620ffbb  bnez        $s1, . + 4 + (-0x45 << 2)
label_167e70:
    if (ctx->pc == 0x167E70u) {
        ctx->pc = 0x167E74u;
        goto label_167e74;
    }
    ctx->pc = 0x167E6Cu;
    {
        const bool branch_taken_0x167e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x167e6c) {
            ctx->pc = 0x167D5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167d5c;
        }
    }
    ctx->pc = 0x167E74u;
label_167e74:
    // 0x167e74: 0x0  nop
    ctx->pc = 0x167e74u;
    // NOP
label_167e78:
    // 0x167e78: 0xae9000b0  sw          $s0, 0xB0($s4)
    ctx->pc = 0x167e78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 16));
label_167e7c:
    // 0x167e7c: 0x8eb902e0  lw          $t9, 0x2E0($s5)
    ctx->pc = 0x167e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 736)));
label_167e80:
    // 0x167e80: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_167e84:
    // 0x167e84: 0x268502b0  addiu       $a1, $s4, 0x2B0
    ctx->pc = 0x167e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
label_167e88:
    // 0x167e88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x167e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_167e8c:
    // 0x167e8c: 0x320f809  jalr        $t9
label_167e90:
    if (ctx->pc == 0x167E90u) {
        ctx->pc = 0x167E90u;
            // 0x167e90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E94u;
        goto label_167e94;
    }
    ctx->pc = 0x167E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167E94u);
        ctx->pc = 0x167E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E8Cu;
            // 0x167e90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167E94u; }
            if (ctx->pc != 0x167E94u) { return; }
        }
        }
    }
    ctx->pc = 0x167E94u;
label_167e94:
    // 0x167e94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x167e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_167e98:
    // 0x167e98: 0xc05a054  jal         func_168150
label_167e9c:
    if (ctx->pc == 0x167E9Cu) {
        ctx->pc = 0x167E9Cu;
            // 0x167e9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167EA0u;
        goto label_167ea0;
    }
    ctx->pc = 0x167E98u;
    SET_GPR_U32(ctx, 31, 0x167EA0u);
    ctx->pc = 0x167E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E98u;
            // 0x167e9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168150u;
    if (runtime->hasFunction(0x168150u)) {
        auto targetFn = runtime->lookupFunction(0x168150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EA0u; }
        if (ctx->pc != 0x167EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignFuncAnime__9CMapPartsFP9mgCMemory_0x168150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EA0u; }
        if (ctx->pc != 0x167EA0u) { return; }
    }
    ctx->pc = 0x167EA0u;
label_167ea0:
    // 0x167ea0: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_167ea4:
    if (ctx->pc == 0x167EA4u) {
        ctx->pc = 0x167EA4u;
            // 0x167ea4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x167EA8u;
        goto label_167ea8;
    }
    ctx->pc = 0x167EA0u;
    {
        const bool branch_taken_0x167ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167EA0u;
            // 0x167ea4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ea0) {
            ctx->pc = 0x16812Cu;
            goto label_16812c;
        }
    }
    ctx->pc = 0x167EA8u;
label_167ea8:
    // 0x167ea8: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x167ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167eac:
    // 0x167eac: 0x26a60070  addiu       $a2, $s5, 0x70
    ctx->pc = 0x167eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_167eb0:
    // 0x167eb0: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x167eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167eb4:
    // 0x167eb4: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_167eb8:
    // 0x167eb8: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x167eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167ebc:
    // 0x167ebc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x167ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_167ec0:
    // 0x167ec0: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x167ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167ec4:
    // 0x167ec4: 0xe6830010  swc1        $f3, 0x10($s4)
    ctx->pc = 0x167ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_167ec8:
    // 0x167ec8: 0xe6820014  swc1        $f2, 0x14($s4)
    ctx->pc = 0x167ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_167ecc:
    // 0x167ecc: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x167eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_167ed0:
    // 0x167ed0: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x167ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_167ed4:
    // 0x167ed4: 0xc6a30020  lwc1        $f3, 0x20($s5)
    ctx->pc = 0x167ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167ed8:
    // 0x167ed8: 0xc6a20024  lwc1        $f2, 0x24($s5)
    ctx->pc = 0x167ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167edc:
    // 0x167edc: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x167edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167ee0:
    // 0x167ee0: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x167ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167ee4:
    // 0x167ee4: 0xe6830020  swc1        $f3, 0x20($s4)
    ctx->pc = 0x167ee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_167ee8:
    // 0x167ee8: 0xe6820024  swc1        $f2, 0x24($s4)
    ctx->pc = 0x167ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_167eec:
    // 0x167eec: 0xe6810028  swc1        $f1, 0x28($s4)
    ctx->pc = 0x167eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_167ef0:
    // 0x167ef0: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x167ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_167ef4:
    // 0x167ef4: 0xc6a30030  lwc1        $f3, 0x30($s5)
    ctx->pc = 0x167ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167ef8:
    // 0x167ef8: 0xc6a20034  lwc1        $f2, 0x34($s5)
    ctx->pc = 0x167ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167efc:
    // 0x167efc: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x167efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167f00:
    // 0x167f00: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x167f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167f04:
    // 0x167f04: 0xe6830030  swc1        $f3, 0x30($s4)
    ctx->pc = 0x167f04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
label_167f08:
    // 0x167f08: 0xe6820034  swc1        $f2, 0x34($s4)
    ctx->pc = 0x167f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_167f0c:
    // 0x167f0c: 0xe6810038  swc1        $f1, 0x38($s4)
    ctx->pc = 0x167f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_167f10:
    // 0x167f10: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x167f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_167f14:
    // 0x167f14: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x167f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_167f18:
    // 0x167f18: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x167f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_167f1c:
    // 0x167f1c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x167f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_167f20:
    // 0x167f20: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x167f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_167f24:
    // 0x167f24: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x167f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167f28:
    // 0x167f28: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x167f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_167f2c:
    // 0x167f2c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x167f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_167f30:
    // 0x167f30: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x167f30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_167f34:
    // 0x167f34: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x167f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167f38:
    // 0x167f38: 0xe6800058  swc1        $f0, 0x58($s4)
    ctx->pc = 0x167f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
label_167f3c:
    // 0x167f3c: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x167f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167f40:
    // 0x167f40: 0xe680005c  swc1        $f0, 0x5C($s4)
    ctx->pc = 0x167f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
label_167f44:
    // 0x167f44: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x167f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167f48:
    // 0x167f48: 0xe6800060  swc1        $f0, 0x60($s4)
    ctx->pc = 0x167f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
label_167f4c:
    // 0x167f4c: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_167f50:
    // 0x167f50: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x167f50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_167f54:
    // 0x167f54: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x167f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_167f58:
    // 0x167f58: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x167f58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_167f5c:
    // 0x167f5c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x167f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_167f60:
    // 0x167f60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_167f64:
    // 0x167f64: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x167f64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_167f68:
    // 0x167f68: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x167f68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_167f6c:
    // 0x167f6c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x167f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_167f70:
    // 0x167f70: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x167f70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_167f74:
    // 0x167f74: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_167f78:
    if (ctx->pc == 0x167F78u) {
        ctx->pc = 0x167F78u;
            // 0x167f78: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x167F7Cu;
        goto label_167f7c;
    }
    ctx->pc = 0x167F74u;
    {
        const bool branch_taken_0x167f74 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x167F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167F74u;
            // 0x167f78: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f74) {
            ctx->pc = 0x167F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167f5c;
        }
    }
    ctx->pc = 0x167F7Cu;
label_167f7c:
    // 0x167f7c: 0x26a60090  addiu       $a2, $s5, 0x90
    ctx->pc = 0x167f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_167f80:
    // 0x167f80: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x167f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_167f84:
    // 0x167f84: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x167f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_167f88:
    // 0x167f88: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x167f88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_167f8c:
    // 0x167f8c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_167f90:
    // 0x167f90: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x167f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_167f94:
    // 0x167f94: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x167f94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_167f98:
    // 0x167f98: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x167f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_167f9c:
    // 0x167f9c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x167f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_167fa0:
    // 0x167fa0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_167fa4:
    if (ctx->pc == 0x167FA4u) {
        ctx->pc = 0x167FA4u;
            // 0x167fa4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x167FA8u;
        goto label_167fa8;
    }
    ctx->pc = 0x167FA0u;
    {
        const bool branch_taken_0x167fa0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x167FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167FA0u;
            // 0x167fa4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fa0) {
            ctx->pc = 0x167F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167f88;
        }
    }
    ctx->pc = 0x167FA8u;
label_167fa8:
    // 0x167fa8: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x167fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_167fac:
    // 0x167fac: 0x268400c0  addiu       $a0, $s4, 0xC0
    ctx->pc = 0x167facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_167fb0:
    // 0x167fb0: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x167fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_167fb4:
    // 0x167fb4: 0xc04e1b0  jal         func_1386C0
label_167fb8:
    if (ctx->pc == 0x167FB8u) {
        ctx->pc = 0x167FB8u;
            // 0x167fb8: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x167FBCu;
        goto label_167fbc;
    }
    ctx->pc = 0x167FB4u;
    SET_GPR_U32(ctx, 31, 0x167FBCu);
    ctx->pc = 0x167FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FB4u;
            // 0x167fb8: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FBCu; }
        if (ctx->pc != 0x167FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FBCu; }
        if (ctx->pc != 0x167FBCu) { return; }
    }
    ctx->pc = 0x167FBCu;
label_167fbc:
    // 0x167fbc: 0x8ea201d0  lw          $v0, 0x1D0($s5)
    ctx->pc = 0x167fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
label_167fc0:
    // 0x167fc0: 0x26a601f0  addiu       $a2, $s5, 0x1F0
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
label_167fc4:
    // 0x167fc4: 0x268501f0  addiu       $a1, $s4, 0x1F0
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
label_167fc8:
    // 0x167fc8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x167fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_167fcc:
    // 0x167fcc: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x167fccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_167fd0:
    // 0x167fd0: 0x8ea201d4  lw          $v0, 0x1D4($s5)
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 468)));
label_167fd4:
    // 0x167fd4: 0xae8201d4  sw          $v0, 0x1D4($s4)
    ctx->pc = 0x167fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 2));
label_167fd8:
    // 0x167fd8: 0x8ea201d8  lw          $v0, 0x1D8($s5)
    ctx->pc = 0x167fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 472)));
label_167fdc:
    // 0x167fdc: 0xae8201d8  sw          $v0, 0x1D8($s4)
    ctx->pc = 0x167fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 2));
label_167fe0:
    // 0x167fe0: 0x8ea201dc  lw          $v0, 0x1DC($s5)
    ctx->pc = 0x167fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_167fe4:
    // 0x167fe4: 0xae8201dc  sw          $v0, 0x1DC($s4)
    ctx->pc = 0x167fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 476), GPR_U32(ctx, 2));
label_167fe8:
    // 0x167fe8: 0xc6a001e0  lwc1        $f0, 0x1E0($s5)
    ctx->pc = 0x167fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167fec:
    // 0x167fec: 0xe68001e0  swc1        $f0, 0x1E0($s4)
    ctx->pc = 0x167fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 480), bits); }
label_167ff0:
    // 0x167ff0: 0x8ea201e4  lw          $v0, 0x1E4($s5)
    ctx->pc = 0x167ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 484)));
label_167ff4:
    // 0x167ff4: 0xae8201e4  sw          $v0, 0x1E4($s4)
    ctx->pc = 0x167ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 2));
label_167ff8:
    // 0x167ff8: 0x8ea201e8  lw          $v0, 0x1E8($s5)
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 488)));
label_167ffc:
    // 0x167ffc: 0xae8201e8  sw          $v0, 0x1E8($s4)
    ctx->pc = 0x167ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 488), GPR_U32(ctx, 2));
label_168000:
    // 0x168000: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_168004:
    // 0x168004: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_168008:
    // 0x168008: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16800c:
    // 0x16800c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16800cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_168010:
    // 0x168010: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x168010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_168014:
    // 0x168014: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x168014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_168018:
    // 0x168018: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_16801c:
    if (ctx->pc == 0x16801Cu) {
        ctx->pc = 0x16801Cu;
            // 0x16801c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x168020u;
        goto label_168020;
    }
    ctx->pc = 0x168018u;
    {
        const bool branch_taken_0x168018 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x16801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168018u;
            // 0x16801c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168018) {
            ctx->pc = 0x168000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168000;
        }
    }
    ctx->pc = 0x168020u;
label_168020:
    // 0x168020: 0x8ea20230  lw          $v0, 0x230($s5)
    ctx->pc = 0x168020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 560)));
label_168024:
    // 0x168024: 0x26840240  addiu       $a0, $s4, 0x240
    ctx->pc = 0x168024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_168028:
    // 0x168028: 0x26a50240  addiu       $a1, $s5, 0x240
    ctx->pc = 0x168028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
label_16802c:
    // 0x16802c: 0xc04e624  jal         func_139890
label_168030:
    if (ctx->pc == 0x168030u) {
        ctx->pc = 0x168030u;
            // 0x168030: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->pc = 0x168034u;
        goto label_168034;
    }
    ctx->pc = 0x16802Cu;
    SET_GPR_U32(ctx, 31, 0x168034u);
    ctx->pc = 0x168030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16802Cu;
            // 0x168030: 0xae820230  sw          $v0, 0x230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168034u; }
        if (ctx->pc != 0x168034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168034u; }
        if (ctx->pc != 0x168034u) { return; }
    }
    ctx->pc = 0x168034u;
label_168034:
    // 0x168034: 0xc6a30260  lwc1        $f3, 0x260($s5)
    ctx->pc = 0x168034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_168038:
    // 0x168038: 0x26840280  addiu       $a0, $s4, 0x280
    ctx->pc = 0x168038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
label_16803c:
    // 0x16803c: 0xc6a20264  lwc1        $f2, 0x264($s5)
    ctx->pc = 0x16803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168040:
    // 0x168040: 0x26a50280  addiu       $a1, $s5, 0x280
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
label_168044:
    // 0x168044: 0xc6a10268  lwc1        $f1, 0x268($s5)
    ctx->pc = 0x168044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168048:
    // 0x168048: 0xc6a0026c  lwc1        $f0, 0x26C($s5)
    ctx->pc = 0x168048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16804c:
    // 0x16804c: 0xe6830260  swc1        $f3, 0x260($s4)
    ctx->pc = 0x16804cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 608), bits); }
label_168050:
    // 0x168050: 0xe6820264  swc1        $f2, 0x264($s4)
    ctx->pc = 0x168050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 612), bits); }
label_168054:
    // 0x168054: 0xe6810268  swc1        $f1, 0x268($s4)
    ctx->pc = 0x168054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 616), bits); }
label_168058:
    // 0x168058: 0xe680026c  swc1        $f0, 0x26C($s4)
    ctx->pc = 0x168058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 620), bits); }
label_16805c:
    // 0x16805c: 0x8ea20270  lw          $v0, 0x270($s5)
    ctx->pc = 0x16805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
label_168060:
    // 0x168060: 0xc04e624  jal         func_139890
label_168064:
    if (ctx->pc == 0x168064u) {
        ctx->pc = 0x168064u;
            // 0x168064: 0xae820270  sw          $v0, 0x270($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
        ctx->pc = 0x168068u;
        goto label_168068;
    }
    ctx->pc = 0x168060u;
    SET_GPR_U32(ctx, 31, 0x168068u);
    ctx->pc = 0x168064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168060u;
            // 0x168064: 0xae820270  sw          $v0, 0x270($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168068u; }
        if (ctx->pc != 0x168068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168068u; }
        if (ctx->pc != 0x168068u) { return; }
    }
    ctx->pc = 0x168068u;
label_168068:
    // 0x168068: 0xc6a302a0  lwc1        $f3, 0x2A0($s5)
    ctx->pc = 0x168068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16806c:
    // 0x16806c: 0xc6a202a4  lwc1        $f2, 0x2A4($s5)
    ctx->pc = 0x16806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168070:
    // 0x168070: 0xc6a102a8  lwc1        $f1, 0x2A8($s5)
    ctx->pc = 0x168070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168074:
    // 0x168074: 0xc6a002ac  lwc1        $f0, 0x2AC($s5)
    ctx->pc = 0x168074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168078:
    // 0x168078: 0xe68302a0  swc1        $f3, 0x2A0($s4)
    ctx->pc = 0x168078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 672), bits); }
label_16807c:
    // 0x16807c: 0xe68202a4  swc1        $f2, 0x2A4($s4)
    ctx->pc = 0x16807cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 676), bits); }
label_168080:
    // 0x168080: 0xe68102a8  swc1        $f1, 0x2A8($s4)
    ctx->pc = 0x168080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 680), bits); }
label_168084:
    // 0x168084: 0xe68002ac  swc1        $f0, 0x2AC($s4)
    ctx->pc = 0x168084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 684), bits); }
label_168088:
    // 0x168088: 0x8ea302b0  lw          $v1, 0x2B0($s5)
    ctx->pc = 0x168088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
label_16808c:
    // 0x16808c: 0xae8302b0  sw          $v1, 0x2B0($s4)
    ctx->pc = 0x16808cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 3));
label_168090:
    // 0x168090: 0xc6a302b4  lwc1        $f3, 0x2B4($s5)
    ctx->pc = 0x168090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_168094:
    // 0x168094: 0xc6a202b8  lwc1        $f2, 0x2B8($s5)
    ctx->pc = 0x168094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168098:
    // 0x168098: 0xc6a102bc  lwc1        $f1, 0x2BC($s5)
    ctx->pc = 0x168098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16809c:
    // 0x16809c: 0xc6a002c0  lwc1        $f0, 0x2C0($s5)
    ctx->pc = 0x16809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1680a0:
    // 0x1680a0: 0xe68302b4  swc1        $f3, 0x2B4($s4)
    ctx->pc = 0x1680a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 692), bits); }
label_1680a4:
    // 0x1680a4: 0xe68202b8  swc1        $f2, 0x2B8($s4)
    ctx->pc = 0x1680a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 696), bits); }
label_1680a8:
    // 0x1680a8: 0xe68102bc  swc1        $f1, 0x2BC($s4)
    ctx->pc = 0x1680a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 700), bits); }
label_1680ac:
    // 0x1680ac: 0xe68002c0  swc1        $f0, 0x2C0($s4)
    ctx->pc = 0x1680acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 704), bits); }
label_1680b0:
    // 0x1680b0: 0xc6a302c4  lwc1        $f3, 0x2C4($s5)
    ctx->pc = 0x1680b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1680b4:
    // 0x1680b4: 0xc6a202c8  lwc1        $f2, 0x2C8($s5)
    ctx->pc = 0x1680b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1680b8:
    // 0x1680b8: 0xc6a102cc  lwc1        $f1, 0x2CC($s5)
    ctx->pc = 0x1680b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1680bc:
    // 0x1680bc: 0xc6a002d0  lwc1        $f0, 0x2D0($s5)
    ctx->pc = 0x1680bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1680c0:
    // 0x1680c0: 0xe68302c4  swc1        $f3, 0x2C4($s4)
    ctx->pc = 0x1680c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 708), bits); }
label_1680c4:
    // 0x1680c4: 0xe68202c8  swc1        $f2, 0x2C8($s4)
    ctx->pc = 0x1680c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 712), bits); }
label_1680c8:
    // 0x1680c8: 0xe68102cc  swc1        $f1, 0x2CC($s4)
    ctx->pc = 0x1680c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 716), bits); }
label_1680cc:
    // 0x1680cc: 0xe68002d0  swc1        $f0, 0x2D0($s4)
    ctx->pc = 0x1680ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 720), bits); }
label_1680d0:
    // 0x1680d0: 0xc6a102d4  lwc1        $f1, 0x2D4($s5)
    ctx->pc = 0x1680d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1680d4:
    // 0x1680d4: 0xc6a002d8  lwc1        $f0, 0x2D8($s5)
    ctx->pc = 0x1680d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1680d8:
    // 0x1680d8: 0xe68102d4  swc1        $f1, 0x2D4($s4)
    ctx->pc = 0x1680d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 724), bits); }
label_1680dc:
    // 0x1680dc: 0xe68002d8  swc1        $f0, 0x2D8($s4)
    ctx->pc = 0x1680dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 728), bits); }
label_1680e0:
    // 0x1680e0: 0x8ea302dc  lw          $v1, 0x2DC($s5)
    ctx->pc = 0x1680e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 732)));
label_1680e4:
    // 0x1680e4: 0xae8302dc  sw          $v1, 0x2DC($s4)
    ctx->pc = 0x1680e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 3));
label_1680e8:
    // 0x1680e8: 0x8ea302e4  lw          $v1, 0x2E4($s5)
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 740)));
label_1680ec:
    // 0x1680ec: 0xae8302e4  sw          $v1, 0x2E4($s4)
    ctx->pc = 0x1680ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 740), GPR_U32(ctx, 3));
label_1680f0:
    // 0x1680f0: 0x8ea302e8  lw          $v1, 0x2E8($s5)
    ctx->pc = 0x1680f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 744)));
label_1680f4:
    // 0x1680f4: 0xae8302e8  sw          $v1, 0x2E8($s4)
    ctx->pc = 0x1680f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 744), GPR_U32(ctx, 3));
label_1680f8:
    // 0x1680f8: 0x8ea302ec  lw          $v1, 0x2EC($s5)
    ctx->pc = 0x1680f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 748)));
label_1680fc:
    // 0x1680fc: 0xae8302ec  sw          $v1, 0x2EC($s4)
    ctx->pc = 0x1680fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 748), GPR_U32(ctx, 3));
label_168100:
    // 0x168100: 0x8ea302f0  lw          $v1, 0x2F0($s5)
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_168104:
    // 0x168104: 0xae8302f0  sw          $v1, 0x2F0($s4)
    ctx->pc = 0x168104u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 752), GPR_U32(ctx, 3));
label_168108:
    // 0x168108: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x168108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_16810c:
    // 0x16810c: 0xae8302f4  sw          $v1, 0x2F4($s4)
    ctx->pc = 0x16810cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 3));
label_168110:
    // 0x168110: 0x8ea302f8  lw          $v1, 0x2F8($s5)
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 760)));
label_168114:
    // 0x168114: 0xae8302f8  sw          $v1, 0x2F8($s4)
    ctx->pc = 0x168114u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 760), GPR_U32(ctx, 3));
label_168118:
    // 0x168118: 0xc6a102fc  lwc1        $f1, 0x2FC($s5)
    ctx->pc = 0x168118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16811c:
    // 0x16811c: 0xc6a00300  lwc1        $f0, 0x300($s5)
    ctx->pc = 0x16811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168120:
    // 0x168120: 0xe68102fc  swc1        $f1, 0x2FC($s4)
    ctx->pc = 0x168120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 764), bits); }
label_168124:
    // 0x168124: 0xe6800300  swc1        $f0, 0x300($s4)
    ctx->pc = 0x168124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 768), bits); }
label_168128:
    // 0x168128: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x168128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16812c:
    // 0x16812c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16812cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_168130:
    // 0x168130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_168134:
    // 0x168134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_168138:
    // 0x168138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16813c:
    // 0x16813c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16813cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168140:
    // 0x168140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168144:
    // 0x168144: 0x3e00008  jr          $ra
label_168148:
    if (ctx->pc == 0x168148u) {
        ctx->pc = 0x168148u;
            // 0x168148: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16814Cu;
        goto label_fallthrough_0x168144;
    }
    ctx->pc = 0x168144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168144u;
            // 0x168148: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x168144:
    ctx->pc = 0x16814Cu;
}
