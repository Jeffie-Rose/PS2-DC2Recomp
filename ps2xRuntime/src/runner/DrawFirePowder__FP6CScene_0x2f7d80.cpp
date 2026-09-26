#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFirePowder__FP6CScene
// Address: 0x2f7d80 - 0x2f827c
void DrawFirePowder__FP6CScene_0x2f7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFirePowder__FP6CScene_0x2f7d80");
#endif

    switch (ctx->pc) {
        case 0x2f7d80u: goto label_2f7d80;
        case 0x2f7d84u: goto label_2f7d84;
        case 0x2f7d88u: goto label_2f7d88;
        case 0x2f7d8cu: goto label_2f7d8c;
        case 0x2f7d90u: goto label_2f7d90;
        case 0x2f7d94u: goto label_2f7d94;
        case 0x2f7d98u: goto label_2f7d98;
        case 0x2f7d9cu: goto label_2f7d9c;
        case 0x2f7da0u: goto label_2f7da0;
        case 0x2f7da4u: goto label_2f7da4;
        case 0x2f7da8u: goto label_2f7da8;
        case 0x2f7dacu: goto label_2f7dac;
        case 0x2f7db0u: goto label_2f7db0;
        case 0x2f7db4u: goto label_2f7db4;
        case 0x2f7db8u: goto label_2f7db8;
        case 0x2f7dbcu: goto label_2f7dbc;
        case 0x2f7dc0u: goto label_2f7dc0;
        case 0x2f7dc4u: goto label_2f7dc4;
        case 0x2f7dc8u: goto label_2f7dc8;
        case 0x2f7dccu: goto label_2f7dcc;
        case 0x2f7dd0u: goto label_2f7dd0;
        case 0x2f7dd4u: goto label_2f7dd4;
        case 0x2f7dd8u: goto label_2f7dd8;
        case 0x2f7ddcu: goto label_2f7ddc;
        case 0x2f7de0u: goto label_2f7de0;
        case 0x2f7de4u: goto label_2f7de4;
        case 0x2f7de8u: goto label_2f7de8;
        case 0x2f7decu: goto label_2f7dec;
        case 0x2f7df0u: goto label_2f7df0;
        case 0x2f7df4u: goto label_2f7df4;
        case 0x2f7df8u: goto label_2f7df8;
        case 0x2f7dfcu: goto label_2f7dfc;
        case 0x2f7e00u: goto label_2f7e00;
        case 0x2f7e04u: goto label_2f7e04;
        case 0x2f7e08u: goto label_2f7e08;
        case 0x2f7e0cu: goto label_2f7e0c;
        case 0x2f7e10u: goto label_2f7e10;
        case 0x2f7e14u: goto label_2f7e14;
        case 0x2f7e18u: goto label_2f7e18;
        case 0x2f7e1cu: goto label_2f7e1c;
        case 0x2f7e20u: goto label_2f7e20;
        case 0x2f7e24u: goto label_2f7e24;
        case 0x2f7e28u: goto label_2f7e28;
        case 0x2f7e2cu: goto label_2f7e2c;
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e34u: goto label_2f7e34;
        case 0x2f7e38u: goto label_2f7e38;
        case 0x2f7e3cu: goto label_2f7e3c;
        case 0x2f7e40u: goto label_2f7e40;
        case 0x2f7e44u: goto label_2f7e44;
        case 0x2f7e48u: goto label_2f7e48;
        case 0x2f7e4cu: goto label_2f7e4c;
        case 0x2f7e50u: goto label_2f7e50;
        case 0x2f7e54u: goto label_2f7e54;
        case 0x2f7e58u: goto label_2f7e58;
        case 0x2f7e5cu: goto label_2f7e5c;
        case 0x2f7e60u: goto label_2f7e60;
        case 0x2f7e64u: goto label_2f7e64;
        case 0x2f7e68u: goto label_2f7e68;
        case 0x2f7e6cu: goto label_2f7e6c;
        case 0x2f7e70u: goto label_2f7e70;
        case 0x2f7e74u: goto label_2f7e74;
        case 0x2f7e78u: goto label_2f7e78;
        case 0x2f7e7cu: goto label_2f7e7c;
        case 0x2f7e80u: goto label_2f7e80;
        case 0x2f7e84u: goto label_2f7e84;
        case 0x2f7e88u: goto label_2f7e88;
        case 0x2f7e8cu: goto label_2f7e8c;
        case 0x2f7e90u: goto label_2f7e90;
        case 0x2f7e94u: goto label_2f7e94;
        case 0x2f7e98u: goto label_2f7e98;
        case 0x2f7e9cu: goto label_2f7e9c;
        case 0x2f7ea0u: goto label_2f7ea0;
        case 0x2f7ea4u: goto label_2f7ea4;
        case 0x2f7ea8u: goto label_2f7ea8;
        case 0x2f7eacu: goto label_2f7eac;
        case 0x2f7eb0u: goto label_2f7eb0;
        case 0x2f7eb4u: goto label_2f7eb4;
        case 0x2f7eb8u: goto label_2f7eb8;
        case 0x2f7ebcu: goto label_2f7ebc;
        case 0x2f7ec0u: goto label_2f7ec0;
        case 0x2f7ec4u: goto label_2f7ec4;
        case 0x2f7ec8u: goto label_2f7ec8;
        case 0x2f7eccu: goto label_2f7ecc;
        case 0x2f7ed0u: goto label_2f7ed0;
        case 0x2f7ed4u: goto label_2f7ed4;
        case 0x2f7ed8u: goto label_2f7ed8;
        case 0x2f7edcu: goto label_2f7edc;
        case 0x2f7ee0u: goto label_2f7ee0;
        case 0x2f7ee4u: goto label_2f7ee4;
        case 0x2f7ee8u: goto label_2f7ee8;
        case 0x2f7eecu: goto label_2f7eec;
        case 0x2f7ef0u: goto label_2f7ef0;
        case 0x2f7ef4u: goto label_2f7ef4;
        case 0x2f7ef8u: goto label_2f7ef8;
        case 0x2f7efcu: goto label_2f7efc;
        case 0x2f7f00u: goto label_2f7f00;
        case 0x2f7f04u: goto label_2f7f04;
        case 0x2f7f08u: goto label_2f7f08;
        case 0x2f7f0cu: goto label_2f7f0c;
        case 0x2f7f10u: goto label_2f7f10;
        case 0x2f7f14u: goto label_2f7f14;
        case 0x2f7f18u: goto label_2f7f18;
        case 0x2f7f1cu: goto label_2f7f1c;
        case 0x2f7f20u: goto label_2f7f20;
        case 0x2f7f24u: goto label_2f7f24;
        case 0x2f7f28u: goto label_2f7f28;
        case 0x2f7f2cu: goto label_2f7f2c;
        case 0x2f7f30u: goto label_2f7f30;
        case 0x2f7f34u: goto label_2f7f34;
        case 0x2f7f38u: goto label_2f7f38;
        case 0x2f7f3cu: goto label_2f7f3c;
        case 0x2f7f40u: goto label_2f7f40;
        case 0x2f7f44u: goto label_2f7f44;
        case 0x2f7f48u: goto label_2f7f48;
        case 0x2f7f4cu: goto label_2f7f4c;
        case 0x2f7f50u: goto label_2f7f50;
        case 0x2f7f54u: goto label_2f7f54;
        case 0x2f7f58u: goto label_2f7f58;
        case 0x2f7f5cu: goto label_2f7f5c;
        case 0x2f7f60u: goto label_2f7f60;
        case 0x2f7f64u: goto label_2f7f64;
        case 0x2f7f68u: goto label_2f7f68;
        case 0x2f7f6cu: goto label_2f7f6c;
        case 0x2f7f70u: goto label_2f7f70;
        case 0x2f7f74u: goto label_2f7f74;
        case 0x2f7f78u: goto label_2f7f78;
        case 0x2f7f7cu: goto label_2f7f7c;
        case 0x2f7f80u: goto label_2f7f80;
        case 0x2f7f84u: goto label_2f7f84;
        case 0x2f7f88u: goto label_2f7f88;
        case 0x2f7f8cu: goto label_2f7f8c;
        case 0x2f7f90u: goto label_2f7f90;
        case 0x2f7f94u: goto label_2f7f94;
        case 0x2f7f98u: goto label_2f7f98;
        case 0x2f7f9cu: goto label_2f7f9c;
        case 0x2f7fa0u: goto label_2f7fa0;
        case 0x2f7fa4u: goto label_2f7fa4;
        case 0x2f7fa8u: goto label_2f7fa8;
        case 0x2f7facu: goto label_2f7fac;
        case 0x2f7fb0u: goto label_2f7fb0;
        case 0x2f7fb4u: goto label_2f7fb4;
        case 0x2f7fb8u: goto label_2f7fb8;
        case 0x2f7fbcu: goto label_2f7fbc;
        case 0x2f7fc0u: goto label_2f7fc0;
        case 0x2f7fc4u: goto label_2f7fc4;
        case 0x2f7fc8u: goto label_2f7fc8;
        case 0x2f7fccu: goto label_2f7fcc;
        case 0x2f7fd0u: goto label_2f7fd0;
        case 0x2f7fd4u: goto label_2f7fd4;
        case 0x2f7fd8u: goto label_2f7fd8;
        case 0x2f7fdcu: goto label_2f7fdc;
        case 0x2f7fe0u: goto label_2f7fe0;
        case 0x2f7fe4u: goto label_2f7fe4;
        case 0x2f7fe8u: goto label_2f7fe8;
        case 0x2f7fecu: goto label_2f7fec;
        case 0x2f7ff0u: goto label_2f7ff0;
        case 0x2f7ff4u: goto label_2f7ff4;
        case 0x2f7ff8u: goto label_2f7ff8;
        case 0x2f7ffcu: goto label_2f7ffc;
        case 0x2f8000u: goto label_2f8000;
        case 0x2f8004u: goto label_2f8004;
        case 0x2f8008u: goto label_2f8008;
        case 0x2f800cu: goto label_2f800c;
        case 0x2f8010u: goto label_2f8010;
        case 0x2f8014u: goto label_2f8014;
        case 0x2f8018u: goto label_2f8018;
        case 0x2f801cu: goto label_2f801c;
        case 0x2f8020u: goto label_2f8020;
        case 0x2f8024u: goto label_2f8024;
        case 0x2f8028u: goto label_2f8028;
        case 0x2f802cu: goto label_2f802c;
        case 0x2f8030u: goto label_2f8030;
        case 0x2f8034u: goto label_2f8034;
        case 0x2f8038u: goto label_2f8038;
        case 0x2f803cu: goto label_2f803c;
        case 0x2f8040u: goto label_2f8040;
        case 0x2f8044u: goto label_2f8044;
        case 0x2f8048u: goto label_2f8048;
        case 0x2f804cu: goto label_2f804c;
        case 0x2f8050u: goto label_2f8050;
        case 0x2f8054u: goto label_2f8054;
        case 0x2f8058u: goto label_2f8058;
        case 0x2f805cu: goto label_2f805c;
        case 0x2f8060u: goto label_2f8060;
        case 0x2f8064u: goto label_2f8064;
        case 0x2f8068u: goto label_2f8068;
        case 0x2f806cu: goto label_2f806c;
        case 0x2f8070u: goto label_2f8070;
        case 0x2f8074u: goto label_2f8074;
        case 0x2f8078u: goto label_2f8078;
        case 0x2f807cu: goto label_2f807c;
        case 0x2f8080u: goto label_2f8080;
        case 0x2f8084u: goto label_2f8084;
        case 0x2f8088u: goto label_2f8088;
        case 0x2f808cu: goto label_2f808c;
        case 0x2f8090u: goto label_2f8090;
        case 0x2f8094u: goto label_2f8094;
        case 0x2f8098u: goto label_2f8098;
        case 0x2f809cu: goto label_2f809c;
        case 0x2f80a0u: goto label_2f80a0;
        case 0x2f80a4u: goto label_2f80a4;
        case 0x2f80a8u: goto label_2f80a8;
        case 0x2f80acu: goto label_2f80ac;
        case 0x2f80b0u: goto label_2f80b0;
        case 0x2f80b4u: goto label_2f80b4;
        case 0x2f80b8u: goto label_2f80b8;
        case 0x2f80bcu: goto label_2f80bc;
        case 0x2f80c0u: goto label_2f80c0;
        case 0x2f80c4u: goto label_2f80c4;
        case 0x2f80c8u: goto label_2f80c8;
        case 0x2f80ccu: goto label_2f80cc;
        case 0x2f80d0u: goto label_2f80d0;
        case 0x2f80d4u: goto label_2f80d4;
        case 0x2f80d8u: goto label_2f80d8;
        case 0x2f80dcu: goto label_2f80dc;
        case 0x2f80e0u: goto label_2f80e0;
        case 0x2f80e4u: goto label_2f80e4;
        case 0x2f80e8u: goto label_2f80e8;
        case 0x2f80ecu: goto label_2f80ec;
        case 0x2f80f0u: goto label_2f80f0;
        case 0x2f80f4u: goto label_2f80f4;
        case 0x2f80f8u: goto label_2f80f8;
        case 0x2f80fcu: goto label_2f80fc;
        case 0x2f8100u: goto label_2f8100;
        case 0x2f8104u: goto label_2f8104;
        case 0x2f8108u: goto label_2f8108;
        case 0x2f810cu: goto label_2f810c;
        case 0x2f8110u: goto label_2f8110;
        case 0x2f8114u: goto label_2f8114;
        case 0x2f8118u: goto label_2f8118;
        case 0x2f811cu: goto label_2f811c;
        case 0x2f8120u: goto label_2f8120;
        case 0x2f8124u: goto label_2f8124;
        case 0x2f8128u: goto label_2f8128;
        case 0x2f812cu: goto label_2f812c;
        case 0x2f8130u: goto label_2f8130;
        case 0x2f8134u: goto label_2f8134;
        case 0x2f8138u: goto label_2f8138;
        case 0x2f813cu: goto label_2f813c;
        case 0x2f8140u: goto label_2f8140;
        case 0x2f8144u: goto label_2f8144;
        case 0x2f8148u: goto label_2f8148;
        case 0x2f814cu: goto label_2f814c;
        case 0x2f8150u: goto label_2f8150;
        case 0x2f8154u: goto label_2f8154;
        case 0x2f8158u: goto label_2f8158;
        case 0x2f815cu: goto label_2f815c;
        case 0x2f8160u: goto label_2f8160;
        case 0x2f8164u: goto label_2f8164;
        case 0x2f8168u: goto label_2f8168;
        case 0x2f816cu: goto label_2f816c;
        case 0x2f8170u: goto label_2f8170;
        case 0x2f8174u: goto label_2f8174;
        case 0x2f8178u: goto label_2f8178;
        case 0x2f817cu: goto label_2f817c;
        case 0x2f8180u: goto label_2f8180;
        case 0x2f8184u: goto label_2f8184;
        case 0x2f8188u: goto label_2f8188;
        case 0x2f818cu: goto label_2f818c;
        case 0x2f8190u: goto label_2f8190;
        case 0x2f8194u: goto label_2f8194;
        case 0x2f8198u: goto label_2f8198;
        case 0x2f819cu: goto label_2f819c;
        case 0x2f81a0u: goto label_2f81a0;
        case 0x2f81a4u: goto label_2f81a4;
        case 0x2f81a8u: goto label_2f81a8;
        case 0x2f81acu: goto label_2f81ac;
        case 0x2f81b0u: goto label_2f81b0;
        case 0x2f81b4u: goto label_2f81b4;
        case 0x2f81b8u: goto label_2f81b8;
        case 0x2f81bcu: goto label_2f81bc;
        case 0x2f81c0u: goto label_2f81c0;
        case 0x2f81c4u: goto label_2f81c4;
        case 0x2f81c8u: goto label_2f81c8;
        case 0x2f81ccu: goto label_2f81cc;
        case 0x2f81d0u: goto label_2f81d0;
        case 0x2f81d4u: goto label_2f81d4;
        case 0x2f81d8u: goto label_2f81d8;
        case 0x2f81dcu: goto label_2f81dc;
        case 0x2f81e0u: goto label_2f81e0;
        case 0x2f81e4u: goto label_2f81e4;
        case 0x2f81e8u: goto label_2f81e8;
        case 0x2f81ecu: goto label_2f81ec;
        case 0x2f81f0u: goto label_2f81f0;
        case 0x2f81f4u: goto label_2f81f4;
        case 0x2f81f8u: goto label_2f81f8;
        case 0x2f81fcu: goto label_2f81fc;
        case 0x2f8200u: goto label_2f8200;
        case 0x2f8204u: goto label_2f8204;
        case 0x2f8208u: goto label_2f8208;
        case 0x2f820cu: goto label_2f820c;
        case 0x2f8210u: goto label_2f8210;
        case 0x2f8214u: goto label_2f8214;
        case 0x2f8218u: goto label_2f8218;
        case 0x2f821cu: goto label_2f821c;
        case 0x2f8220u: goto label_2f8220;
        case 0x2f8224u: goto label_2f8224;
        case 0x2f8228u: goto label_2f8228;
        case 0x2f822cu: goto label_2f822c;
        case 0x2f8230u: goto label_2f8230;
        case 0x2f8234u: goto label_2f8234;
        case 0x2f8238u: goto label_2f8238;
        case 0x2f823cu: goto label_2f823c;
        case 0x2f8240u: goto label_2f8240;
        case 0x2f8244u: goto label_2f8244;
        case 0x2f8248u: goto label_2f8248;
        case 0x2f824cu: goto label_2f824c;
        case 0x2f8250u: goto label_2f8250;
        case 0x2f8254u: goto label_2f8254;
        case 0x2f8258u: goto label_2f8258;
        case 0x2f825cu: goto label_2f825c;
        case 0x2f8260u: goto label_2f8260;
        case 0x2f8264u: goto label_2f8264;
        case 0x2f8268u: goto label_2f8268;
        case 0x2f826cu: goto label_2f826c;
        case 0x2f8270u: goto label_2f8270;
        case 0x2f8274u: goto label_2f8274;
        case 0x2f8278u: goto label_2f8278;
        default: break;
    }

    ctx->pc = 0x2f7d80u;

label_2f7d80:
    // 0x2f7d80: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2f7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_2f7d84:
    // 0x2f7d84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f7d88:
    // 0x2f7d88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f7d8c:
    // 0x2f7d8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f7d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f7d90:
    // 0x2f7d90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f7d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f7d94:
    // 0x2f7d94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f7d98:
    // 0x2f7d98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f7d9c:
    // 0x2f7d9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f7da0:
    // 0x2f7da0: 0x8f839f24  lw          $v1, -0x60DC($gp)
    ctx->pc = 0x2f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942500)));
label_2f7da4:
    // 0x2f7da4: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
label_2f7da8:
    if (ctx->pc == 0x2F7DA8u) {
        ctx->pc = 0x2F7DA8u;
            // 0x2f7da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DACu;
        goto label_2f7dac;
    }
    ctx->pc = 0x2F7DA4u;
    {
        const bool branch_taken_0x2f7da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DA4u;
            // 0x2f7da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7da4) {
            ctx->pc = 0x2F8258u;
            goto label_2f8258;
        }
    }
    ctx->pc = 0x2F7DACu;
label_2f7dac:
    // 0x2f7dac: 0x8f859f28  lw          $a1, -0x60D8($gp)
    ctx->pc = 0x2f7dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942504)));
label_2f7db0:
    // 0x2f7db0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f7db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f7db4:
    // 0x2f7db4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f7db8:
    // 0x2f7db8: 0xc04ba14  jal         func_12E850
label_2f7dbc:
    if (ctx->pc == 0x2F7DBCu) {
        ctx->pc = 0x2F7DBCu;
            // 0x2f7dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DC0u;
        goto label_2f7dc0;
    }
    ctx->pc = 0x2F7DB8u;
    SET_GPR_U32(ctx, 31, 0x2F7DC0u);
    ctx->pc = 0x2F7DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DB8u;
            // 0x2f7dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DC0u; }
        if (ctx->pc != 0x2F7DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DC0u; }
        if (ctx->pc != 0x2F7DC0u) { return; }
    }
    ctx->pc = 0x2F7DC0u;
label_2f7dc0:
    // 0x2f7dc0: 0x8f849f2c  lw          $a0, -0x60D4($gp)
    ctx->pc = 0x2f7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942508)));
label_2f7dc4:
    // 0x2f7dc4: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x2f7dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2f7dc8:
    // 0x2f7dc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f7dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f7dcc:
    // 0x2f7dcc: 0x320f809  jalr        $t9
label_2f7dd0:
    if (ctx->pc == 0x2F7DD0u) {
        ctx->pc = 0x2F7DD4u;
        goto label_2f7dd4;
    }
    ctx->pc = 0x2F7DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7DD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7DD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DD4u; }
            if (ctx->pc != 0x2F7DD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7DD4u;
label_2f7dd4:
    // 0x2f7dd4: 0x8f929f2c  lw          $s2, -0x60D4($gp)
    ctx->pc = 0x2f7dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942508)));
label_2f7dd8:
    // 0x2f7dd8: 0xc051150  jal         func_144540
label_2f7ddc:
    if (ctx->pc == 0x2F7DDCu) {
        ctx->pc = 0x2F7DDCu;
            // 0x2f7ddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DE0u;
        goto label_2f7de0;
    }
    ctx->pc = 0x2F7DD8u;
    SET_GPR_U32(ctx, 31, 0x2F7DE0u);
    ctx->pc = 0x2F7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DD8u;
            // 0x2f7ddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DE0u; }
        if (ctx->pc != 0x2F7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7DE0u; }
        if (ctx->pc != 0x2F7DE0u) { return; }
    }
    ctx->pc = 0x2F7DE0u;
label_2f7de0:
    // 0x2f7de0: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x2f7de0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7de4:
    // 0x2f7de4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f7de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f7de8:
    // 0x2f7de8: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2f7de8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2f7dec:
    // 0x2f7dec: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2f7decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f7df0:
    // 0x2f7df0: 0x27ac0090  addiu       $t4, $sp, 0x90
    ctx->pc = 0x2f7df0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f7df4:
    // 0x2f7df4: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x2f7df4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f7df8:
    // 0x2f7df8: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x2f7df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2f7dfc:
    // 0x2f7dfc: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2f7dfcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f7e00:
    // 0x2f7e00: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x2f7e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2f7e04:
    // 0x2f7e04: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x2f7e04u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2f7e08:
    // 0x2f7e08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7e0c:
    // 0x2f7e0c: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2f7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
label_2f7e10:
    // 0x2f7e10: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2f7e10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_2f7e14:
    // 0x2f7e14: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x2f7e14u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2f7e18:
    // 0x2f7e18: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2f7e18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_2f7e1c:
    // 0x2f7e1c: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x2f7e1cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_2f7e20:
    // 0x2f7e20: 0xffaa0088  sd          $t2, 0x88($sp)
    ctx->pc = 0x2f7e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 10));
label_2f7e24:
    // 0x2f7e24: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x2f7e24u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f7e28:
    // 0x2f7e28: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x2f7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
label_2f7e2c:
    // 0x2f7e2c: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x2f7e2cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_2f7e30:
    // 0x2f7e30: 0xffaa0098  sd          $t2, 0x98($sp)
    ctx->pc = 0x2f7e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 10));
label_2f7e34:
    // 0x2f7e34: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x2f7e34u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_2f7e38:
    // 0x2f7e38: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x2f7e38u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
label_2f7e3c:
    // 0x2f7e3c: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2f7e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_2f7e40:
    // 0x2f7e40: 0xffa200a8  sd          $v0, 0xA8($sp)
    ctx->pc = 0x2f7e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
label_2f7e44:
    // 0x2f7e44: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2f7e44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2f7e48:
    // 0x2f7e48: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2f7e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2f7e4c:
    // 0x2f7e4c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2f7e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2f7e50:
    // 0x2f7e50: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2f7e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2f7e54:
    // 0x2f7e54: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2f7e54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2f7e58:
    // 0x2f7e58: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f7e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2f7e5c:
    // 0x2f7e5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f7e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2f7e60:
    // 0x2f7e60: 0xc04e290  jal         func_138A40
label_2f7e64:
    if (ctx->pc == 0x2F7E64u) {
        ctx->pc = 0x2F7E64u;
            // 0x2f7e64: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F7E68u;
        goto label_2f7e68;
    }
    ctx->pc = 0x2F7E60u;
    SET_GPR_U32(ctx, 31, 0x2F7E68u);
    ctx->pc = 0x2F7E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E60u;
            // 0x2f7e64: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E68u; }
        if (ctx->pc != 0x2F7E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E68u; }
        if (ctx->pc != 0x2F7E68u) { return; }
    }
    ctx->pc = 0x2F7E68u;
label_2f7e68:
    // 0x2f7e68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f7e6c:
    // 0x2f7e6c: 0xc04e25c  jal         func_138970
label_2f7e70:
    if (ctx->pc == 0x2F7E70u) {
        ctx->pc = 0x2F7E70u;
            // 0x2f7e70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F7E74u;
        goto label_2f7e74;
    }
    ctx->pc = 0x2F7E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E74u);
    ctx->pc = 0x2F7E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E6Cu;
            // 0x2f7e70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E74u; }
        if (ctx->pc != 0x2F7E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E74u; }
        if (ctx->pc != 0x2F7E74u) { return; }
    }
    ctx->pc = 0x2F7E74u;
label_2f7e74:
    // 0x2f7e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e78:
    // 0x2f7e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e7c:
    // 0x2f7e7c: 0xc04ec68  jal         func_13B1A0
label_2f7e80:
    if (ctx->pc == 0x2F7E80u) {
        ctx->pc = 0x2F7E80u;
            // 0x2f7e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E84u;
        goto label_2f7e84;
    }
    ctx->pc = 0x2F7E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E84u);
    ctx->pc = 0x2F7E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E7Cu;
            // 0x2f7e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E84u; }
        if (ctx->pc != 0x2F7E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E84u; }
        if (ctx->pc != 0x2F7E84u) { return; }
    }
    ctx->pc = 0x2F7E84u;
label_2f7e84:
    // 0x2f7e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e88:
    // 0x2f7e88: 0xc04ec80  jal         func_13B200
label_2f7e8c:
    if (ctx->pc == 0x2F7E8Cu) {
        ctx->pc = 0x2F7E8Cu;
            // 0x2f7e8c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F7E90u;
        goto label_2f7e90;
    }
    ctx->pc = 0x2F7E88u;
    SET_GPR_U32(ctx, 31, 0x2F7E90u);
    ctx->pc = 0x2F7E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E88u;
            // 0x2f7e8c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E90u; }
        if (ctx->pc != 0x2F7E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E90u; }
        if (ctx->pc != 0x2F7E90u) { return; }
    }
    ctx->pc = 0x2F7E90u;
label_2f7e90:
    // 0x2f7e90: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f7e94:
    // 0x2f7e94: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f7e98:
    // 0x2f7e98: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f7e9c:
    // 0x2f7e9c: 0x24a51a98  addiu       $a1, $a1, 0x1A98
    ctx->pc = 0x2f7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6808));
label_2f7ea0:
    // 0x2f7ea0: 0xc04b414  jal         func_12D050
label_2f7ea4:
    if (ctx->pc == 0x2F7EA4u) {
        ctx->pc = 0x2F7EA4u;
            // 0x2f7ea4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F7EA8u;
        goto label_2f7ea8;
    }
    ctx->pc = 0x2F7EA0u;
    SET_GPR_U32(ctx, 31, 0x2F7EA8u);
    ctx->pc = 0x2F7EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EA0u;
            // 0x2f7ea4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EA8u; }
        if (ctx->pc != 0x2F7EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EA8u; }
        if (ctx->pc != 0x2F7EA8u) { return; }
    }
    ctx->pc = 0x2F7EA8u;
label_2f7ea8:
    // 0x2f7ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7eac:
    // 0x2f7eac: 0xc04ecbc  jal         func_13B2F0
label_2f7eb0:
    if (ctx->pc == 0x2F7EB0u) {
        ctx->pc = 0x2F7EB0u;
            // 0x2f7eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EB4u;
        goto label_2f7eb4;
    }
    ctx->pc = 0x2F7EACu;
    SET_GPR_U32(ctx, 31, 0x2F7EB4u);
    ctx->pc = 0x2F7EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EACu;
            // 0x2f7eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EB4u; }
        if (ctx->pc != 0x2F7EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EB4u; }
        if (ctx->pc != 0x2F7EB4u) { return; }
    }
    ctx->pc = 0x2F7EB4u;
label_2f7eb4:
    // 0x2f7eb4: 0xc04ecd8  jal         func_13B360
label_2f7eb8:
    if (ctx->pc == 0x2F7EB8u) {
        ctx->pc = 0x2F7EB8u;
            // 0x2f7eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EBCu;
        goto label_2f7ebc;
    }
    ctx->pc = 0x2F7EB4u;
    SET_GPR_U32(ctx, 31, 0x2F7EBCu);
    ctx->pc = 0x2F7EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EB4u;
            // 0x2f7eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EBCu; }
        if (ctx->pc != 0x2F7EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EBCu; }
        if (ctx->pc != 0x2F7EBCu) { return; }
    }
    ctx->pc = 0x2F7EBCu;
label_2f7ebc:
    // 0x2f7ebc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2f7ec0:
    // 0x2f7ec0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_2f7ec4:
    // 0x2f7ec4: 0x2442cee0  addiu       $v0, $v0, -0x3120
    ctx->pc = 0x2f7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954720));
label_2f7ec8:
    // 0x2f7ec8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2f7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_2f7ecc:
    // 0x2f7ecc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2f7eccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7ed0:
    // 0x2f7ed0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2f7ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f7ed4:
    // 0x2f7ed4: 0x24a5cef0  addiu       $a1, $a1, -0x3110
    ctx->pc = 0x2f7ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954736));
label_2f7ed8:
    // 0x2f7ed8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f7edc:
    // 0x2f7edc: 0x2484cf30  addiu       $a0, $a0, -0x30D0
    ctx->pc = 0x2f7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954800));
label_2f7ee0:
    // 0x2f7ee0: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x2f7ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f7ee4:
    // 0x2f7ee4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2f7ee8:
    // 0x2f7ee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f7ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7eec:
    // 0x2f7eec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f7eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ef0:
    // 0x2f7ef0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x2f7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_2f7ef4:
    // 0x2f7ef4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2f7ef8:
    // 0x2f7ef8: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x2f7ef8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7efc:
    // 0x2f7efc: 0x2442cf70  addiu       $v0, $v0, -0x3090
    ctx->pc = 0x2f7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954864));
label_2f7f00:
    // 0x2f7f00: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x2f7f00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2f7f04:
    // 0x2f7f04: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x2f7f04u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_2f7f08:
    // 0x2f7f08: 0x78a50030  lq          $a1, 0x30($a1)
    ctx->pc = 0x2f7f08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2f7f0c:
    // 0x2f7f0c: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x2f7f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
label_2f7f10:
    // 0x2f7f10: 0x7d470010  sq          $a3, 0x10($t2)
    ctx->pc = 0x2f7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 7));
label_2f7f14:
    // 0x2f7f14: 0x7d460020  sq          $a2, 0x20($t2)
    ctx->pc = 0x2f7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 6));
label_2f7f18:
    // 0x2f7f18: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x2f7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
label_2f7f1c:
    // 0x2f7f1c: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x2f7f1cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7f20:
    // 0x2f7f20: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x2f7f20u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2f7f24:
    // 0x2f7f24: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x2f7f24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2f7f28:
    // 0x2f7f28: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x2f7f28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_2f7f2c:
    // 0x2f7f2c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2f7f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_2f7f30:
    // 0x2f7f30: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x2f7f30u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
label_2f7f34:
    // 0x2f7f34: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x2f7f34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
label_2f7f38:
    // 0x2f7f38: 0x7d040030  sq          $a0, 0x30($t0)
    ctx->pc = 0x2f7f38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 4));
label_2f7f3c:
    // 0x2f7f3c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f7f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7f40:
    // 0x2f7f40: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f7f40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2f7f44:
    // 0x2f7f44: 0x8f829f34  lw          $v0, -0x60CC($gp)
    ctx->pc = 0x2f7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942516)));
label_2f7f48:
    // 0x2f7f48: 0x549821  addu        $s3, $v0, $s4
    ctx->pc = 0x2f7f48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f7f4c:
    // 0x2f7f4c: 0xc047a42  jal         func_11E908
label_2f7f50:
    if (ctx->pc == 0x2F7F50u) {
        ctx->pc = 0x2F7F50u;
            // 0x2f7f50: 0xc66c000c  lwc1        $f12, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F7F54u;
        goto label_2f7f54;
    }
    ctx->pc = 0x2F7F4Cu;
    SET_GPR_U32(ctx, 31, 0x2F7F54u);
    ctx->pc = 0x2F7F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F4Cu;
            // 0x2f7f50: 0xc66c000c  lwc1        $f12, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F54u; }
        if (ctx->pc != 0x2F7F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F54u; }
        if (ctx->pc != 0x2F7F54u) { return; }
    }
    ctx->pc = 0x2F7F54u;
label_2f7f54:
    // 0x2f7f54: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2f7f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7f58:
    // 0x2f7f58: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2f7f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7f5c:
    // 0x2f7f5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f7f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f7f60:
    // 0x2f7f60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f7f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f7f64:
    // 0x2f7f64: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2f7f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f7f68:
    // 0x2f7f68: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2f7f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7f6c:
    // 0x2f7f6c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2f7f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f7f70:
    // 0x2f7f70: 0xc047a42  jal         func_11E908
label_2f7f74:
    if (ctx->pc == 0x2F7F74u) {
        ctx->pc = 0x2F7F74u;
            // 0x2f7f74: 0xc66c000c  lwc1        $f12, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F7F78u;
        goto label_2f7f78;
    }
    ctx->pc = 0x2F7F70u;
    SET_GPR_U32(ctx, 31, 0x2F7F78u);
    ctx->pc = 0x2F7F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F70u;
            // 0x2f7f74: 0xc66c000c  lwc1        $f12, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F78u; }
        if (ctx->pc != 0x2F7F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F78u; }
        if (ctx->pc != 0x2F7F78u) { return; }
    }
    ctx->pc = 0x2F7F78u;
label_2f7f78:
    // 0x2f7f78: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2f7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f7f7c:
    // 0x2f7f7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f7f80:
    // 0x2f7f80: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2f7f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7f84:
    // 0x2f7f84: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x2f7f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f7f88:
    // 0x2f7f88: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f7f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f7f8c:
    // 0x2f7f8c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2f7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_2f7f90:
    // 0x2f7f90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f7f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f7f94:
    // 0x2f7f94: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2f7f98:
    if (ctx->pc == 0x2F7F98u) {
        ctx->pc = 0x2F7F98u;
            // 0x2f7f98: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->pc = 0x2F7F9Cu;
        goto label_2f7f9c;
    }
    ctx->pc = 0x2F7F94u;
    {
        const bool branch_taken_0x2f7f94 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2F7F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F94u;
            // 0x2f7f98: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f94) {
            ctx->pc = 0x2F7FA8u;
            goto label_2f7fa8;
        }
    }
    ctx->pc = 0x2F7F9Cu;
label_2f7f9c:
    // 0x2f7f9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f7fa0:
    if (ctx->pc == 0x2F7FA0u) {
        ctx->pc = 0x2F7FA0u;
            // 0x2f7fa0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2F7FA4u;
        goto label_2f7fa4;
    }
    ctx->pc = 0x2F7F9Cu;
    {
        const bool branch_taken_0x2f7f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F9Cu;
            // 0x2f7fa0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f9c) {
            ctx->pc = 0x2F7FACu;
            goto label_2f7fac;
        }
    }
    ctx->pc = 0x2F7FA4u;
label_2f7fa4:
    // 0x2f7fa4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2f7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2f7fa8:
    // 0x2f7fa8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2f7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2f7fac:
    // 0x2f7fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7fb0:
    // 0x2f7fb0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2f7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2f7fb4:
    // 0x2f7fb4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2f7fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2f7fb8:
    // 0x2f7fb8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2f7fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f7fbc:
    // 0x2f7fbc: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x2f7fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2f7fc0:
    // 0x2f7fc0: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x2f7fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2f7fc4:
    // 0x2f7fc4: 0xc04ed64  jal         func_13B590
label_2f7fc8:
    if (ctx->pc == 0x2F7FC8u) {
        ctx->pc = 0x2F7FC8u;
            // 0x2f7fc8: 0x24490100  addiu       $t1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->pc = 0x2F7FCCu;
        goto label_2f7fcc;
    }
    ctx->pc = 0x2F7FC4u;
    SET_GPR_U32(ctx, 31, 0x2F7FCCu);
    ctx->pc = 0x2F7FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FC4u;
            // 0x2f7fc8: 0x24490100  addiu       $t1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FCCu; }
        if (ctx->pc != 0x2F7FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FCCu; }
        if (ctx->pc != 0x2F7FCCu) { return; }
    }
    ctx->pc = 0x2F7FCCu;
label_2f7fcc:
    // 0x2f7fcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f7fd0:
    // 0x2f7fd0: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x2f7fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_2f7fd4:
    // 0x2f7fd4: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_2f7fd8:
    if (ctx->pc == 0x2F7FD8u) {
        ctx->pc = 0x2F7FD8u;
            // 0x2f7fd8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x2F7FDCu;
        goto label_2f7fdc;
    }
    ctx->pc = 0x2F7FD4u;
    {
        const bool branch_taken_0x2f7fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FD4u;
            // 0x2f7fd8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fd4) {
            ctx->pc = 0x2F7F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7f44;
        }
    }
    ctx->pc = 0x2F7FDCu;
label_2f7fdc:
    // 0x2f7fdc: 0xc04edb0  jal         func_13B6C0
label_2f7fe0:
    if (ctx->pc == 0x2F7FE0u) {
        ctx->pc = 0x2F7FE0u;
            // 0x2f7fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FE4u;
        goto label_2f7fe4;
    }
    ctx->pc = 0x2F7FDCu;
    SET_GPR_U32(ctx, 31, 0x2F7FE4u);
    ctx->pc = 0x2F7FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FDCu;
            // 0x2f7fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FE4u; }
        if (ctx->pc != 0x2F7FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FE4u; }
        if (ctx->pc != 0x2F7FE4u) { return; }
    }
    ctx->pc = 0x2F7FE4u;
label_2f7fe4:
    // 0x2f7fe4: 0xc04edfc  jal         func_13B7F0
label_2f7fe8:
    if (ctx->pc == 0x2F7FE8u) {
        ctx->pc = 0x2F7FE8u;
            // 0x2f7fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FECu;
        goto label_2f7fec;
    }
    ctx->pc = 0x2F7FE4u;
    SET_GPR_U32(ctx, 31, 0x2F7FECu);
    ctx->pc = 0x2F7FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FE4u;
            // 0x2f7fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FECu; }
        if (ctx->pc != 0x2F7FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FECu; }
        if (ctx->pc != 0x2F7FECu) { return; }
    }
    ctx->pc = 0x2F7FECu;
label_2f7fec:
    // 0x2f7fec: 0x8e052e54  lw          $a1, 0x2E54($s0)
    ctx->pc = 0x2f7fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
label_2f7ff0:
    // 0x2f7ff0: 0xc0a0e30  jal         func_2838C0
label_2f7ff4:
    if (ctx->pc == 0x2F7FF4u) {
        ctx->pc = 0x2F7FF4u;
            // 0x2f7ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FF8u;
        goto label_2f7ff8;
    }
    ctx->pc = 0x2F7FF0u;
    SET_GPR_U32(ctx, 31, 0x2F7FF8u);
    ctx->pc = 0x2F7FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FF0u;
            // 0x2f7ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FF8u; }
        if (ctx->pc != 0x2F7FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FF8u; }
        if (ctx->pc != 0x2F7FF8u) { return; }
    }
    ctx->pc = 0x2F7FF8u;
label_2f7ff8:
    // 0x2f7ff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ffc:
    // 0x2f7ffc: 0xc04c050  jal         func_130140
label_2f8000:
    if (ctx->pc == 0x2F8000u) {
        ctx->pc = 0x2F8000u;
            // 0x2f8000: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2F8004u;
        goto label_2f8004;
    }
    ctx->pc = 0x2F7FFCu;
    SET_GPR_U32(ctx, 31, 0x2F8004u);
    ctx->pc = 0x2F8000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FFCu;
            // 0x2f8000: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8004u; }
        if (ctx->pc != 0x2F8004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8004u; }
        if (ctx->pc != 0x2F8004u) { return; }
    }
    ctx->pc = 0x2F8004u;
label_2f8004:
    // 0x2f8004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8008:
    // 0x2f8008: 0xc04c574  jal         func_1315D0
label_2f800c:
    if (ctx->pc == 0x2F800Cu) {
        ctx->pc = 0x2F800Cu;
            // 0x2f800c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2F8010u;
        goto label_2f8010;
    }
    ctx->pc = 0x2F8008u;
    SET_GPR_U32(ctx, 31, 0x2F8010u);
    ctx->pc = 0x2F800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8008u;
            // 0x2f800c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8010u; }
        if (ctx->pc != 0x2F8010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8010u; }
        if (ctx->pc != 0x2F8010u) { return; }
    }
    ctx->pc = 0x2F8010u;
label_2f8010:
    // 0x2f8010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8014:
    // 0x2f8014: 0xc04c524  jal         func_131490
label_2f8018:
    if (ctx->pc == 0x2F8018u) {
        ctx->pc = 0x2F8018u;
            // 0x2f8018: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2F801Cu;
        goto label_2f801c;
    }
    ctx->pc = 0x2F8014u;
    SET_GPR_U32(ctx, 31, 0x2F801Cu);
    ctx->pc = 0x2F8018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8014u;
            // 0x2f8018: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (runtime->hasFunction(0x131490u)) {
        auto targetFn = runtime->lookupFunction(0x131490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F801Cu; }
        if (ctx->pc != 0x2F801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDir__9mgCCameraFPf_0x131490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F801Cu; }
        if (ctx->pc != 0x2F801Cu) { return; }
    }
    ctx->pc = 0x2F801Cu;
label_2f801c:
    // 0x2f801c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f801cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2f8020:
    // 0x2f8020: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2f8020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2f8024:
    // 0x2f8024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8028:
    // 0x2f8028: 0xc04bd04  jal         func_12F410
label_2f802c:
    if (ctx->pc == 0x2F802Cu) {
        ctx->pc = 0x2F802Cu;
            // 0x2f802c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8030u;
        goto label_2f8030;
    }
    ctx->pc = 0x2F8028u;
    SET_GPR_U32(ctx, 31, 0x2F8030u);
    ctx->pc = 0x2F802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8028u;
            // 0x2f802c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F410u;
    if (runtime->hasFunction(0x12F410u)) {
        auto targetFn = runtime->lookupFunction(0x12F410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8030u; }
        if (ctx->pc != 0x2F8030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgNormalizeVector__FPfPff_0x12f410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8030u; }
        if (ctx->pc != 0x2F8030u) { return; }
    }
    ctx->pc = 0x2F8030u;
label_2f8030:
    // 0x2f8030: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2f8030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2f8034:
    // 0x2f8034: 0xc04bcf4  jal         func_12F3D0
label_2f8038:
    if (ctx->pc == 0x2F8038u) {
        ctx->pc = 0x2F8038u;
            // 0x2f8038: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2F803Cu;
        goto label_2f803c;
    }
    ctx->pc = 0x2F8034u;
    SET_GPR_U32(ctx, 31, 0x2F803Cu);
    ctx->pc = 0x2F8038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8034u;
            // 0x2f8038: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F803Cu; }
        if (ctx->pc != 0x2F803Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F803Cu; }
        if (ctx->pc != 0x2F803Cu) { return; }
    }
    ctx->pc = 0x2F803Cu;
label_2f803c:
    // 0x2f803c: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2f803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2f8040:
    // 0x2f8040: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x2f8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2f8044:
    // 0x2f8044: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2f8044u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8048:
    // 0x2f8048: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f804c:
    // 0x2f804c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2f804cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2f8050:
    // 0x2f8050: 0xc050e3c  jal         func_1438F0
label_2f8054:
    if (ctx->pc == 0x2F8054u) {
        ctx->pc = 0x2F8054u;
            // 0x2f8054: 0xafa201bc  sw          $v0, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
        ctx->pc = 0x2F8058u;
        goto label_2f8058;
    }
    ctx->pc = 0x2F8050u;
    SET_GPR_U32(ctx, 31, 0x2F8058u);
    ctx->pc = 0x2F8054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8050u;
            // 0x2f8054: 0xafa201bc  sw          $v0, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438F0u;
    if (runtime->hasFunction(0x1438F0u)) {
        auto targetFn = runtime->lookupFunction(0x1438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8058u; }
        if (ctx->pc != 0x2F8058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFogEnable__Fv_0x1438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8058u; }
        if (ctx->pc != 0x2F8058u) { return; }
    }
    ctx->pc = 0x2F8058u;
label_2f8058:
    // 0x2f8058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f805c:
    // 0x2f805c: 0xc050e5c  jal         func_143970
label_2f8060:
    if (ctx->pc == 0x2F8060u) {
        ctx->pc = 0x2F8060u;
            // 0x2f8060: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2F8064u;
        goto label_2f8064;
    }
    ctx->pc = 0x2F805Cu;
    SET_GPR_U32(ctx, 31, 0x2F8064u);
    ctx->pc = 0x2F8060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F805Cu;
            // 0x2f8060: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143970u;
    if (runtime->hasFunction(0x143970u)) {
        auto targetFn = runtime->lookupFunction(0x143970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8064u; }
        if (ctx->pc != 0x2F8064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFogParam__FP11mgFOG_PARAM_0x143970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8064u; }
        if (ctx->pc != 0x2F8064u) { return; }
    }
    ctx->pc = 0x2F8064u;
label_2f8064:
    // 0x2f8064: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f8064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f8068:
    // 0x2f8068: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x2f8068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2f806c:
    // 0x2f806c: 0x24421d60  addiu       $v0, $v0, 0x1D60
    ctx->pc = 0x2f806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
label_2f8070:
    // 0x2f8070: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f8070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2f8074:
    // 0x2f8074: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2f8074u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8078:
    // 0x2f8078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f807c:
    // 0x2f807c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2f807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2f8080:
    // 0x2f8080: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2f8080u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_2f8084:
    // 0x2f8084: 0xc050e38  jal         func_1438E0
label_2f8088:
    if (ctx->pc == 0x2F8088u) {
        ctx->pc = 0x2F8088u;
            // 0x2f8088: 0xac221d6c  sw          $v0, 0x1D6C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7532), GPR_U32(ctx, 2));
        ctx->pc = 0x2F808Cu;
        goto label_2f808c;
    }
    ctx->pc = 0x2F8084u;
    SET_GPR_U32(ctx, 31, 0x2F808Cu);
    ctx->pc = 0x2F8088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8084u;
            // 0x2f8088: 0xac221d6c  sw          $v0, 0x1D6C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F808Cu; }
        if (ctx->pc != 0x2F808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F808Cu; }
        if (ctx->pc != 0x2F808Cu) { return; }
    }
    ctx->pc = 0x2F808Cu;
label_2f808c:
    // 0x2f808c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2f8090:
    // 0x2f8090: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2f8090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_2f8094:
    // 0x2f8094: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8098:
    // 0x2f8098: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2f8098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f809c:
    // 0x2f809c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2f809cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f80a0:
    // 0x2f80a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f80a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f80a4:
    // 0x2f80a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2f80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2f80a8:
    // 0x2f80a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f80a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f80ac:
    // 0x2f80ac: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2f80acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2f80b0:
    // 0x2f80b0: 0xc050e48  jal         func_143920
label_2f80b4:
    if (ctx->pc == 0x2F80B4u) {
        ctx->pc = 0x2F80B4u;
            // 0x2f80b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F80B8u;
        goto label_2f80b8;
    }
    ctx->pc = 0x2F80B0u;
    SET_GPR_U32(ctx, 31, 0x2F80B8u);
    ctx->pc = 0x2F80B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F80B0u;
            // 0x2f80b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143920u;
    if (runtime->hasFunction(0x143920u)) {
        auto targetFn = runtime->lookupFunction(0x143920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F80B8u; }
        if (ctx->pc != 0x2F80B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetFogParam__FffUcUcUcff_0x143920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F80B8u; }
        if (ctx->pc != 0x2F80B8u) { return; }
    }
    ctx->pc = 0x2F80B8u;
label_2f80b8:
    // 0x2f80b8: 0xc050e88  jal         func_143A20
label_2f80bc:
    if (ctx->pc == 0x2F80BCu) {
        ctx->pc = 0x2F80C0u;
        goto label_2f80c0;
    }
    ctx->pc = 0x2F80B8u;
    SET_GPR_U32(ctx, 31, 0x2F80C0u);
    ctx->pc = 0x143A20u;
    if (runtime->hasFunction(0x143A20u)) {
        auto targetFn = runtime->lookupFunction(0x143A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F80C0u; }
        if (ctx->pc != 0x2F80C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFlushRenderInfo__Fv_0x143a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F80C0u; }
        if (ctx->pc != 0x2F80C0u) { return; }
    }
    ctx->pc = 0x2F80C0u;
label_2f80c0:
    // 0x2f80c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2f80c4:
    // 0x2f80c4: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x2f80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2f80c8:
    // 0x2f80c8: 0x2442cf80  addiu       $v0, $v0, -0x3080
    ctx->pc = 0x2f80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
label_2f80cc:
    // 0x2f80cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f80ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f80d0:
    // 0x2f80d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f80d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f80d4:
    // 0x2f80d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f80d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f80d8:
    // 0x2f80d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2f80dc:
    // 0x2f80dc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2f80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2f80e0:
    // 0x2f80e0: 0xc4540210  lwc1        $f20, 0x210($v0)
    ctx->pc = 0x2f80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f80e4:
    // 0x2f80e4: 0xc4400160  lwc1        $f0, 0x160($v0)
    ctx->pc = 0x2f80e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f80e8:
    // 0x2f80e8: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x2f80e8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_2f80ec:
    // 0x2f80ec: 0x0  nop
    ctx->pc = 0x2f80ecu;
    // NOP
label_2f80f0:
    // 0x2f80f0: 0x0  nop
    ctx->pc = 0x2f80f0u;
    // NOP
label_2f80f4:
    // 0x2f80f4: 0xc0a248c  jal         func_289230
label_2f80f8:
    if (ctx->pc == 0x2F80F8u) {
        ctx->pc = 0x2F80FCu;
        goto label_2f80fc;
    }
    ctx->pc = 0x2F80F4u;
    SET_GPR_U32(ctx, 31, 0x2F80FCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F80FCu; }
        if (ctx->pc != 0x2F80FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F80FCu; }
        if (ctx->pc != 0x2F80FCu) { return; }
    }
    ctx->pc = 0x2F80FCu;
label_2f80fc:
    // 0x2f80fc: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_2f8100:
    if (ctx->pc == 0x2F8100u) {
        ctx->pc = 0x2F8104u;
        goto label_2f8104;
    }
    ctx->pc = 0x2F80FCu;
    {
        const bool branch_taken_0x2f80fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f80fc) {
            ctx->pc = 0x2F810Cu;
            goto label_2f810c;
        }
    }
    ctx->pc = 0x2F8104u;
label_2f8104:
    // 0x2f8104: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f8108:
    if (ctx->pc == 0x2F8108u) {
        ctx->pc = 0x2F8108u;
            // 0x2f8108: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2F810Cu;
        goto label_2f810c;
    }
    ctx->pc = 0x2F8104u;
    {
        const bool branch_taken_0x2f8104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8104u;
            // 0x2f8108: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8104) {
            ctx->pc = 0x2F8114u;
            goto label_2f8114;
        }
    }
    ctx->pc = 0x2F810Cu;
label_2f810c:
    // 0x2f810c: 0x0  nop
    ctx->pc = 0x2f810cu;
    // NOP
label_2f8110:
    // 0x2f8110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f8110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f8114:
    // 0x2f8114: 0x0  nop
    ctx->pc = 0x2f8114u;
    // NOP
label_2f8118:
    // 0x2f8118: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2f811c:
    if (ctx->pc == 0x2F811Cu) {
        ctx->pc = 0x2F811Cu;
            // 0x2f811c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x2F8120u;
        goto label_2f8120;
    }
    ctx->pc = 0x2F8118u;
    {
        const bool branch_taken_0x2f8118 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8118u;
            // 0x2f811c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8118) {
            ctx->pc = 0x2F8128u;
            goto label_2f8128;
        }
    }
    ctx->pc = 0x2F8120u;
label_2f8120:
    // 0x2f8120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f8124:
    // 0x2f8124: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2f8124u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2f8128:
    // 0x2f8128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f812c:
    // 0x2f812c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f8130:
    // 0x2f8130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8134:
    // 0x2f8134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f8134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f8138:
    // 0x2f8138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f8138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f813c:
    // 0x2f813c: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2f813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2f8140:
    // 0x2f8140: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2f8140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f8144:
    // 0x2f8144: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2f8144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2f8148:
    // 0x2f8148: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f8148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2f814c:
    // 0x2f814c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f814cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8150:
    // 0x2f8150: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2f8154:
    if (ctx->pc == 0x2F8154u) {
        ctx->pc = 0x2F8154u;
            // 0x2f8154: 0xe4600200  swc1        $f0, 0x200($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
        ctx->pc = 0x2F8158u;
        goto label_2f8158;
    }
    ctx->pc = 0x2F8150u;
    {
        const bool branch_taken_0x2f8150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8150u;
            // 0x2f8154: 0xe4600200  swc1        $f0, 0x200($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8150) {
            ctx->pc = 0x2F80DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f80dc;
        }
    }
    ctx->pc = 0x2F8158u;
label_2f8158:
    // 0x2f8158: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2f8158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f815c:
    // 0x2f815c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f815cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8160:
    // 0x2f8160: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2f8160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8164:
    // 0x2f8164: 0x0  nop
    ctx->pc = 0x2f8164u;
    // NOP
label_2f8168:
    // 0x2f8168: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2f8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2f816c:
    // 0x2f816c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f816cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8170:
    // 0x2f8170: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f8170u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8174:
    // 0x2f8174: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2f8174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2f8178:
    // 0x2f8178: 0x46800260  cvt.s.w     $f9, $f0
    ctx->pc = 0x2f8178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
label_2f817c:
    // 0x2f817c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2f817cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2f8180:
    // 0x2f8180: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f8180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f8184:
    // 0x2f8184: 0x8f849f30  lw          $a0, -0x60D0($gp)
    ctx->pc = 0x2f8184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942512)));
label_2f8188:
    // 0x2f8188: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2f8188u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f818c:
    // 0x2f818c: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x2f818cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f8190:
    // 0x2f8190: 0xc7a80210  lwc1        $f8, 0x210($sp)
    ctx->pc = 0x2f8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2f8194:
    // 0x2f8194: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x2f8194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_2f8198:
    // 0x2f8198: 0xc7a40214  lwc1        $f4, 0x214($sp)
    ctx->pc = 0x2f8198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f819c:
    // 0x2f819c: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x2f819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f81a0:
    // 0x2f81a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f81a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2f81a4:
    // 0x2f81a4: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x2f81a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
label_2f81a8:
    // 0x2f81a8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2f81a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2f81ac:
    // 0x2f81ac: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2f81acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2f81b0:
    // 0x2f81b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f81b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f81b4:
    // 0x2f81b4: 0xc7a60220  lwc1        $f6, 0x220($sp)
    ctx->pc = 0x2f81b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2f81b8:
    // 0x2f81b8: 0x46083942  mul.s       $f5, $f7, $f8
    ctx->pc = 0x2f81b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
label_2f81bc:
    // 0x2f81bc: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x2f81bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_2f81c0:
    // 0x2f81c0: 0xc7a30224  lwc1        $f3, 0x224($sp)
    ctx->pc = 0x2f81c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f81c4:
    // 0x2f81c4: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x2f81c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_2f81c8:
    // 0x2f81c8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2f81c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2f81cc:
    // 0x2f81cc: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x2f81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f81d0:
    // 0x2f81d0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2f81d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2f81d4:
    // 0x2f81d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f81d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f81d8:
    // 0x2f81d8: 0xe7a50220  swc1        $f5, 0x220($sp)
    ctx->pc = 0x2f81d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_2f81dc:
    // 0x2f81dc: 0xe7a30224  swc1        $f3, 0x224($sp)
    ctx->pc = 0x2f81dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_2f81e0:
    // 0x2f81e0: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2f81e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_2f81e4:
    // 0x2f81e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f81e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f81e8:
    // 0x2f81e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f81ec:
    // 0x2f81ec: 0x320f809  jalr        $t9
label_2f81f0:
    if (ctx->pc == 0x2F81F0u) {
        ctx->pc = 0x2F81F4u;
        goto label_2f81f4;
    }
    ctx->pc = 0x2F81ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F81F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F81F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F81F4u; }
            if (ctx->pc != 0x2F81F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F81F4u;
label_2f81f4:
    // 0x2f81f4: 0xc050bf4  jal         func_142FD0
label_2f81f8:
    if (ctx->pc == 0x2F81F8u) {
        ctx->pc = 0x2F81F8u;
            // 0x2f81f8: 0x8f849f30  lw          $a0, -0x60D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942512)));
        ctx->pc = 0x2F81FCu;
        goto label_2f81fc;
    }
    ctx->pc = 0x2F81F4u;
    SET_GPR_U32(ctx, 31, 0x2F81FCu);
    ctx->pc = 0x2F81F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81F4u;
            // 0x2f81f8: 0x8f849f30  lw          $a0, -0x60D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F81FCu; }
        if (ctx->pc != 0x2F81FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F81FCu; }
        if (ctx->pc != 0x2F81FCu) { return; }
    }
    ctx->pc = 0x2F81FCu;
label_2f81fc:
    // 0x2f81fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f81fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f8200:
    // 0x2f8200: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x2f8200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f8204:
    // 0x2f8204: 0x1420ffd7  bnez        $at, . + 4 + (-0x29 << 2)
label_2f8208:
    if (ctx->pc == 0x2F8208u) {
        ctx->pc = 0x2F820Cu;
        goto label_2f820c;
    }
    ctx->pc = 0x2F8204u;
    {
        const bool branch_taken_0x2f8204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8204) {
            ctx->pc = 0x2F8164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8164;
        }
    }
    ctx->pc = 0x2F820Cu;
label_2f820c:
    // 0x2f820c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f820cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f8210:
    // 0x2f8210: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2f8210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f8214:
    // 0x2f8214: 0x1420ffd2  bnez        $at, . + 4 + (-0x2E << 2)
label_2f8218:
    if (ctx->pc == 0x2F8218u) {
        ctx->pc = 0x2F821Cu;
        goto label_2f821c;
    }
    ctx->pc = 0x2F8214u;
    {
        const bool branch_taken_0x2f8214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8214) {
            ctx->pc = 0x2F8160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8160;
        }
    }
    ctx->pc = 0x2F821Cu;
label_2f821c:
    // 0x2f821c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f821cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f8220:
    // 0x2f8220: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x2f8220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f8224:
    // 0x2f8224: 0x1420ffce  bnez        $at, . + 4 + (-0x32 << 2)
label_2f8228:
    if (ctx->pc == 0x2F8228u) {
        ctx->pc = 0x2F8228u;
            // 0x2f8228: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F822Cu;
        goto label_2f822c;
    }
    ctx->pc = 0x2F8224u;
    {
        const bool branch_taken_0x2f8224 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8224u;
            // 0x2f8228: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8224) {
            ctx->pc = 0x2F8160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8160;
        }
    }
    ctx->pc = 0x2F822Cu;
label_2f822c:
    // 0x2f822c: 0xc050e38  jal         func_1438E0
label_2f8230:
    if (ctx->pc == 0x2F8230u) {
        ctx->pc = 0x2F8230u;
            // 0x2f8230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8234u;
        goto label_2f8234;
    }
    ctx->pc = 0x2F822Cu;
    SET_GPR_U32(ctx, 31, 0x2F8234u);
    ctx->pc = 0x2F8230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F822Cu;
            // 0x2f8230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8234u; }
        if (ctx->pc != 0x2F8234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8234u; }
        if (ctx->pc != 0x2F8234u) { return; }
    }
    ctx->pc = 0x2F8234u;
label_2f8234:
    // 0x2f8234: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x2f8234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2f8238:
    // 0x2f8238: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f8238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f823c:
    // 0x2f823c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2f823cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8240:
    // 0x2f8240: 0x24421d60  addiu       $v0, $v0, 0x1D60
    ctx->pc = 0x2f8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
label_2f8244:
    // 0x2f8244: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2f8244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2f8248:
    // 0x2f8248: 0xc050e50  jal         func_143940
label_2f824c:
    if (ctx->pc == 0x2F824Cu) {
        ctx->pc = 0x2F824Cu;
            // 0x2f824c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x2F8250u;
        goto label_2f8250;
    }
    ctx->pc = 0x2F8248u;
    SET_GPR_U32(ctx, 31, 0x2F8250u);
    ctx->pc = 0x2F824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8248u;
            // 0x2f824c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143940u;
    if (runtime->hasFunction(0x143940u)) {
        auto targetFn = runtime->lookupFunction(0x143940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8250u; }
        if (ctx->pc != 0x2F8250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetFogParam__FP11mgFOG_PARAM_0x143940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8250u; }
        if (ctx->pc != 0x2F8250u) { return; }
    }
    ctx->pc = 0x2F8250u;
label_2f8250:
    // 0x2f8250: 0xc050e88  jal         func_143A20
label_2f8254:
    if (ctx->pc == 0x2F8254u) {
        ctx->pc = 0x2F8258u;
        goto label_2f8258;
    }
    ctx->pc = 0x2F8250u;
    SET_GPR_U32(ctx, 31, 0x2F8258u);
    ctx->pc = 0x143A20u;
    if (runtime->hasFunction(0x143A20u)) {
        auto targetFn = runtime->lookupFunction(0x143A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8258u; }
        if (ctx->pc != 0x2F8258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFlushRenderInfo__Fv_0x143a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8258u; }
        if (ctx->pc != 0x2F8258u) { return; }
    }
    ctx->pc = 0x2F8258u;
label_2f8258:
    // 0x2f8258: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f8258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f825c:
    // 0x2f825c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f8260:
    // 0x2f8260: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f8260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8264:
    // 0x2f8264: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f8264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8268:
    // 0x2f8268: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f8268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f826c:
    // 0x2f826c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f826cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8270:
    // 0x2f8270: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f8270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8274:
    // 0x2f8274: 0x3e00008  jr          $ra
label_2f8278:
    if (ctx->pc == 0x2F8278u) {
        ctx->pc = 0x2F8278u;
            // 0x2f8278: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2F827Cu;
        goto label_fallthrough_0x2f8274;
    }
    ctx->pc = 0x2F8274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8274u;
            // 0x2f8278: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f8274:
    ctx->pc = 0x2F827Cu;
}
