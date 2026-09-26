#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_dng_main.cpp
// Address: 0x373ca0 - 0x374170
void ps2___sinit_dng_main_cpp_0x373ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_dng_main_cpp_0x373ca0");
#endif

    switch (ctx->pc) {
        case 0x373ca0u: goto label_373ca0;
        case 0x373ca4u: goto label_373ca4;
        case 0x373ca8u: goto label_373ca8;
        case 0x373cacu: goto label_373cac;
        case 0x373cb0u: goto label_373cb0;
        case 0x373cb4u: goto label_373cb4;
        case 0x373cb8u: goto label_373cb8;
        case 0x373cbcu: goto label_373cbc;
        case 0x373cc0u: goto label_373cc0;
        case 0x373cc4u: goto label_373cc4;
        case 0x373cc8u: goto label_373cc8;
        case 0x373cccu: goto label_373ccc;
        case 0x373cd0u: goto label_373cd0;
        case 0x373cd4u: goto label_373cd4;
        case 0x373cd8u: goto label_373cd8;
        case 0x373cdcu: goto label_373cdc;
        case 0x373ce0u: goto label_373ce0;
        case 0x373ce4u: goto label_373ce4;
        case 0x373ce8u: goto label_373ce8;
        case 0x373cecu: goto label_373cec;
        case 0x373cf0u: goto label_373cf0;
        case 0x373cf4u: goto label_373cf4;
        case 0x373cf8u: goto label_373cf8;
        case 0x373cfcu: goto label_373cfc;
        case 0x373d00u: goto label_373d00;
        case 0x373d04u: goto label_373d04;
        case 0x373d08u: goto label_373d08;
        case 0x373d0cu: goto label_373d0c;
        case 0x373d10u: goto label_373d10;
        case 0x373d14u: goto label_373d14;
        case 0x373d18u: goto label_373d18;
        case 0x373d1cu: goto label_373d1c;
        case 0x373d20u: goto label_373d20;
        case 0x373d24u: goto label_373d24;
        case 0x373d28u: goto label_373d28;
        case 0x373d2cu: goto label_373d2c;
        case 0x373d30u: goto label_373d30;
        case 0x373d34u: goto label_373d34;
        case 0x373d38u: goto label_373d38;
        case 0x373d3cu: goto label_373d3c;
        case 0x373d40u: goto label_373d40;
        case 0x373d44u: goto label_373d44;
        case 0x373d48u: goto label_373d48;
        case 0x373d4cu: goto label_373d4c;
        case 0x373d50u: goto label_373d50;
        case 0x373d54u: goto label_373d54;
        case 0x373d58u: goto label_373d58;
        case 0x373d5cu: goto label_373d5c;
        case 0x373d60u: goto label_373d60;
        case 0x373d64u: goto label_373d64;
        case 0x373d68u: goto label_373d68;
        case 0x373d6cu: goto label_373d6c;
        case 0x373d70u: goto label_373d70;
        case 0x373d74u: goto label_373d74;
        case 0x373d78u: goto label_373d78;
        case 0x373d7cu: goto label_373d7c;
        case 0x373d80u: goto label_373d80;
        case 0x373d84u: goto label_373d84;
        case 0x373d88u: goto label_373d88;
        case 0x373d8cu: goto label_373d8c;
        case 0x373d90u: goto label_373d90;
        case 0x373d94u: goto label_373d94;
        case 0x373d98u: goto label_373d98;
        case 0x373d9cu: goto label_373d9c;
        case 0x373da0u: goto label_373da0;
        case 0x373da4u: goto label_373da4;
        case 0x373da8u: goto label_373da8;
        case 0x373dacu: goto label_373dac;
        case 0x373db0u: goto label_373db0;
        case 0x373db4u: goto label_373db4;
        case 0x373db8u: goto label_373db8;
        case 0x373dbcu: goto label_373dbc;
        case 0x373dc0u: goto label_373dc0;
        case 0x373dc4u: goto label_373dc4;
        case 0x373dc8u: goto label_373dc8;
        case 0x373dccu: goto label_373dcc;
        case 0x373dd0u: goto label_373dd0;
        case 0x373dd4u: goto label_373dd4;
        case 0x373dd8u: goto label_373dd8;
        case 0x373ddcu: goto label_373ddc;
        case 0x373de0u: goto label_373de0;
        case 0x373de4u: goto label_373de4;
        case 0x373de8u: goto label_373de8;
        case 0x373decu: goto label_373dec;
        case 0x373df0u: goto label_373df0;
        case 0x373df4u: goto label_373df4;
        case 0x373df8u: goto label_373df8;
        case 0x373dfcu: goto label_373dfc;
        case 0x373e00u: goto label_373e00;
        case 0x373e04u: goto label_373e04;
        case 0x373e08u: goto label_373e08;
        case 0x373e0cu: goto label_373e0c;
        case 0x373e10u: goto label_373e10;
        case 0x373e14u: goto label_373e14;
        case 0x373e18u: goto label_373e18;
        case 0x373e1cu: goto label_373e1c;
        case 0x373e20u: goto label_373e20;
        case 0x373e24u: goto label_373e24;
        case 0x373e28u: goto label_373e28;
        case 0x373e2cu: goto label_373e2c;
        case 0x373e30u: goto label_373e30;
        case 0x373e34u: goto label_373e34;
        case 0x373e38u: goto label_373e38;
        case 0x373e3cu: goto label_373e3c;
        case 0x373e40u: goto label_373e40;
        case 0x373e44u: goto label_373e44;
        case 0x373e48u: goto label_373e48;
        case 0x373e4cu: goto label_373e4c;
        case 0x373e50u: goto label_373e50;
        case 0x373e54u: goto label_373e54;
        case 0x373e58u: goto label_373e58;
        case 0x373e5cu: goto label_373e5c;
        case 0x373e60u: goto label_373e60;
        case 0x373e64u: goto label_373e64;
        case 0x373e68u: goto label_373e68;
        case 0x373e6cu: goto label_373e6c;
        case 0x373e70u: goto label_373e70;
        case 0x373e74u: goto label_373e74;
        case 0x373e78u: goto label_373e78;
        case 0x373e7cu: goto label_373e7c;
        case 0x373e80u: goto label_373e80;
        case 0x373e84u: goto label_373e84;
        case 0x373e88u: goto label_373e88;
        case 0x373e8cu: goto label_373e8c;
        case 0x373e90u: goto label_373e90;
        case 0x373e94u: goto label_373e94;
        case 0x373e98u: goto label_373e98;
        case 0x373e9cu: goto label_373e9c;
        case 0x373ea0u: goto label_373ea0;
        case 0x373ea4u: goto label_373ea4;
        case 0x373ea8u: goto label_373ea8;
        case 0x373eacu: goto label_373eac;
        case 0x373eb0u: goto label_373eb0;
        case 0x373eb4u: goto label_373eb4;
        case 0x373eb8u: goto label_373eb8;
        case 0x373ebcu: goto label_373ebc;
        case 0x373ec0u: goto label_373ec0;
        case 0x373ec4u: goto label_373ec4;
        case 0x373ec8u: goto label_373ec8;
        case 0x373eccu: goto label_373ecc;
        case 0x373ed0u: goto label_373ed0;
        case 0x373ed4u: goto label_373ed4;
        case 0x373ed8u: goto label_373ed8;
        case 0x373edcu: goto label_373edc;
        case 0x373ee0u: goto label_373ee0;
        case 0x373ee4u: goto label_373ee4;
        case 0x373ee8u: goto label_373ee8;
        case 0x373eecu: goto label_373eec;
        case 0x373ef0u: goto label_373ef0;
        case 0x373ef4u: goto label_373ef4;
        case 0x373ef8u: goto label_373ef8;
        case 0x373efcu: goto label_373efc;
        case 0x373f00u: goto label_373f00;
        case 0x373f04u: goto label_373f04;
        case 0x373f08u: goto label_373f08;
        case 0x373f0cu: goto label_373f0c;
        case 0x373f10u: goto label_373f10;
        case 0x373f14u: goto label_373f14;
        case 0x373f18u: goto label_373f18;
        case 0x373f1cu: goto label_373f1c;
        case 0x373f20u: goto label_373f20;
        case 0x373f24u: goto label_373f24;
        case 0x373f28u: goto label_373f28;
        case 0x373f2cu: goto label_373f2c;
        case 0x373f30u: goto label_373f30;
        case 0x373f34u: goto label_373f34;
        case 0x373f38u: goto label_373f38;
        case 0x373f3cu: goto label_373f3c;
        case 0x373f40u: goto label_373f40;
        case 0x373f44u: goto label_373f44;
        case 0x373f48u: goto label_373f48;
        case 0x373f4cu: goto label_373f4c;
        case 0x373f50u: goto label_373f50;
        case 0x373f54u: goto label_373f54;
        case 0x373f58u: goto label_373f58;
        case 0x373f5cu: goto label_373f5c;
        case 0x373f60u: goto label_373f60;
        case 0x373f64u: goto label_373f64;
        case 0x373f68u: goto label_373f68;
        case 0x373f6cu: goto label_373f6c;
        case 0x373f70u: goto label_373f70;
        case 0x373f74u: goto label_373f74;
        case 0x373f78u: goto label_373f78;
        case 0x373f7cu: goto label_373f7c;
        case 0x373f80u: goto label_373f80;
        case 0x373f84u: goto label_373f84;
        case 0x373f88u: goto label_373f88;
        case 0x373f8cu: goto label_373f8c;
        case 0x373f90u: goto label_373f90;
        case 0x373f94u: goto label_373f94;
        case 0x373f98u: goto label_373f98;
        case 0x373f9cu: goto label_373f9c;
        case 0x373fa0u: goto label_373fa0;
        case 0x373fa4u: goto label_373fa4;
        case 0x373fa8u: goto label_373fa8;
        case 0x373facu: goto label_373fac;
        case 0x373fb0u: goto label_373fb0;
        case 0x373fb4u: goto label_373fb4;
        case 0x373fb8u: goto label_373fb8;
        case 0x373fbcu: goto label_373fbc;
        case 0x373fc0u: goto label_373fc0;
        case 0x373fc4u: goto label_373fc4;
        case 0x373fc8u: goto label_373fc8;
        case 0x373fccu: goto label_373fcc;
        case 0x373fd0u: goto label_373fd0;
        case 0x373fd4u: goto label_373fd4;
        case 0x373fd8u: goto label_373fd8;
        case 0x373fdcu: goto label_373fdc;
        case 0x373fe0u: goto label_373fe0;
        case 0x373fe4u: goto label_373fe4;
        case 0x373fe8u: goto label_373fe8;
        case 0x373fecu: goto label_373fec;
        case 0x373ff0u: goto label_373ff0;
        case 0x373ff4u: goto label_373ff4;
        case 0x373ff8u: goto label_373ff8;
        case 0x373ffcu: goto label_373ffc;
        case 0x374000u: goto label_374000;
        case 0x374004u: goto label_374004;
        case 0x374008u: goto label_374008;
        case 0x37400cu: goto label_37400c;
        case 0x374010u: goto label_374010;
        case 0x374014u: goto label_374014;
        case 0x374018u: goto label_374018;
        case 0x37401cu: goto label_37401c;
        case 0x374020u: goto label_374020;
        case 0x374024u: goto label_374024;
        case 0x374028u: goto label_374028;
        case 0x37402cu: goto label_37402c;
        case 0x374030u: goto label_374030;
        case 0x374034u: goto label_374034;
        case 0x374038u: goto label_374038;
        case 0x37403cu: goto label_37403c;
        case 0x374040u: goto label_374040;
        case 0x374044u: goto label_374044;
        case 0x374048u: goto label_374048;
        case 0x37404cu: goto label_37404c;
        case 0x374050u: goto label_374050;
        case 0x374054u: goto label_374054;
        case 0x374058u: goto label_374058;
        case 0x37405cu: goto label_37405c;
        case 0x374060u: goto label_374060;
        case 0x374064u: goto label_374064;
        case 0x374068u: goto label_374068;
        case 0x37406cu: goto label_37406c;
        case 0x374070u: goto label_374070;
        case 0x374074u: goto label_374074;
        case 0x374078u: goto label_374078;
        case 0x37407cu: goto label_37407c;
        case 0x374080u: goto label_374080;
        case 0x374084u: goto label_374084;
        case 0x374088u: goto label_374088;
        case 0x37408cu: goto label_37408c;
        case 0x374090u: goto label_374090;
        case 0x374094u: goto label_374094;
        case 0x374098u: goto label_374098;
        case 0x37409cu: goto label_37409c;
        case 0x3740a0u: goto label_3740a0;
        case 0x3740a4u: goto label_3740a4;
        case 0x3740a8u: goto label_3740a8;
        case 0x3740acu: goto label_3740ac;
        case 0x3740b0u: goto label_3740b0;
        case 0x3740b4u: goto label_3740b4;
        case 0x3740b8u: goto label_3740b8;
        case 0x3740bcu: goto label_3740bc;
        case 0x3740c0u: goto label_3740c0;
        case 0x3740c4u: goto label_3740c4;
        case 0x3740c8u: goto label_3740c8;
        case 0x3740ccu: goto label_3740cc;
        case 0x3740d0u: goto label_3740d0;
        case 0x3740d4u: goto label_3740d4;
        case 0x3740d8u: goto label_3740d8;
        case 0x3740dcu: goto label_3740dc;
        case 0x3740e0u: goto label_3740e0;
        case 0x3740e4u: goto label_3740e4;
        case 0x3740e8u: goto label_3740e8;
        case 0x3740ecu: goto label_3740ec;
        case 0x3740f0u: goto label_3740f0;
        case 0x3740f4u: goto label_3740f4;
        case 0x3740f8u: goto label_3740f8;
        case 0x3740fcu: goto label_3740fc;
        case 0x374100u: goto label_374100;
        case 0x374104u: goto label_374104;
        case 0x374108u: goto label_374108;
        case 0x37410cu: goto label_37410c;
        case 0x374110u: goto label_374110;
        case 0x374114u: goto label_374114;
        case 0x374118u: goto label_374118;
        case 0x37411cu: goto label_37411c;
        case 0x374120u: goto label_374120;
        case 0x374124u: goto label_374124;
        case 0x374128u: goto label_374128;
        case 0x37412cu: goto label_37412c;
        case 0x374130u: goto label_374130;
        case 0x374134u: goto label_374134;
        case 0x374138u: goto label_374138;
        case 0x37413cu: goto label_37413c;
        case 0x374140u: goto label_374140;
        case 0x374144u: goto label_374144;
        case 0x374148u: goto label_374148;
        case 0x37414cu: goto label_37414c;
        case 0x374150u: goto label_374150;
        case 0x374154u: goto label_374154;
        case 0x374158u: goto label_374158;
        case 0x37415cu: goto label_37415c;
        case 0x374160u: goto label_374160;
        case 0x374164u: goto label_374164;
        case 0x374168u: goto label_374168;
        case 0x37416cu: goto label_37416c;
        default: break;
    }

    ctx->pc = 0x373ca0u;

label_373ca0:
    // 0x373ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_373ca4:
    // 0x373ca4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373ca8:
    // 0x373ca8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373cac:
    // 0x373cac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x373cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_373cb0:
    // 0x373cb0: 0x2484f230  addiu       $a0, $a0, -0xDD0
    ctx->pc = 0x373cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963760));
label_373cb4:
    // 0x373cb4: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373cb8:
    // 0x373cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373cbc:
    // 0x373cbc: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373cc0:
    // 0x373cc0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x373cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_373cc4:
    // 0x373cc4: 0xc040070  jal         func_1001C0
label_373cc8:
    if (ctx->pc == 0x373CC8u) {
        ctx->pc = 0x373CC8u;
            // 0x373cc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x373CCCu;
        goto label_373ccc;
    }
    ctx->pc = 0x373CC4u;
    SET_GPR_U32(ctx, 31, 0x373CCCu);
    ctx->pc = 0x373CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373CC4u;
            // 0x373cc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CCCu; }
        if (ctx->pc != 0x373CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CCCu; }
        if (ctx->pc != 0x373CCCu) { return; }
    }
    ctx->pc = 0x373CCCu;
label_373ccc:
    // 0x373ccc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373cd0:
    // 0x373cd0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373cd4:
    // 0x373cd4: 0x2484f290  addiu       $a0, $a0, -0xD70
    ctx->pc = 0x373cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963856));
label_373cd8:
    // 0x373cd8: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373cdc:
    // 0x373cdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373ce0:
    // 0x373ce0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373ce4:
    // 0x373ce4: 0xc040070  jal         func_1001C0
label_373ce8:
    if (ctx->pc == 0x373CE8u) {
        ctx->pc = 0x373CE8u;
            // 0x373ce8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x373CECu;
        goto label_373cec;
    }
    ctx->pc = 0x373CE4u;
    SET_GPR_U32(ctx, 31, 0x373CECu);
    ctx->pc = 0x373CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373CE4u;
            // 0x373ce8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CECu; }
        if (ctx->pc != 0x373CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CECu; }
        if (ctx->pc != 0x373CECu) { return; }
    }
    ctx->pc = 0x373CECu;
label_373cec:
    // 0x373cec: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373cf0:
    // 0x373cf0: 0xc04e640  jal         func_139900
label_373cf4:
    if (ctx->pc == 0x373CF4u) {
        ctx->pc = 0x373CF4u;
            // 0x373cf4: 0x2484f2f0  addiu       $a0, $a0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963952));
        ctx->pc = 0x373CF8u;
        goto label_373cf8;
    }
    ctx->pc = 0x373CF0u;
    SET_GPR_U32(ctx, 31, 0x373CF8u);
    ctx->pc = 0x373CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373CF0u;
            // 0x373cf4: 0x2484f2f0  addiu       $a0, $a0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CF8u; }
        if (ctx->pc != 0x373CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CF8u; }
        if (ctx->pc != 0x373CF8u) { return; }
    }
    ctx->pc = 0x373CF8u;
label_373cf8:
    // 0x373cf8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373cfc:
    // 0x373cfc: 0xc04e640  jal         func_139900
label_373d00:
    if (ctx->pc == 0x373D00u) {
        ctx->pc = 0x373D00u;
            // 0x373d00: 0x2484f320  addiu       $a0, $a0, -0xCE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964000));
        ctx->pc = 0x373D04u;
        goto label_373d04;
    }
    ctx->pc = 0x373CFCu;
    SET_GPR_U32(ctx, 31, 0x373D04u);
    ctx->pc = 0x373D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373CFCu;
            // 0x373d00: 0x2484f320  addiu       $a0, $a0, -0xCE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D04u; }
        if (ctx->pc != 0x373D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D04u; }
        if (ctx->pc != 0x373D04u) { return; }
    }
    ctx->pc = 0x373D04u;
label_373d04:
    // 0x373d04: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d08:
    // 0x373d08: 0xc04e640  jal         func_139900
label_373d0c:
    if (ctx->pc == 0x373D0Cu) {
        ctx->pc = 0x373D0Cu;
            // 0x373d0c: 0x2484f350  addiu       $a0, $a0, -0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964048));
        ctx->pc = 0x373D10u;
        goto label_373d10;
    }
    ctx->pc = 0x373D08u;
    SET_GPR_U32(ctx, 31, 0x373D10u);
    ctx->pc = 0x373D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D08u;
            // 0x373d0c: 0x2484f350  addiu       $a0, $a0, -0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D10u; }
        if (ctx->pc != 0x373D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D10u; }
        if (ctx->pc != 0x373D10u) { return; }
    }
    ctx->pc = 0x373D10u;
label_373d10:
    // 0x373d10: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d14:
    // 0x373d14: 0xc04e640  jal         func_139900
label_373d18:
    if (ctx->pc == 0x373D18u) {
        ctx->pc = 0x373D18u;
            // 0x373d18: 0x2484f380  addiu       $a0, $a0, -0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
        ctx->pc = 0x373D1Cu;
        goto label_373d1c;
    }
    ctx->pc = 0x373D14u;
    SET_GPR_U32(ctx, 31, 0x373D1Cu);
    ctx->pc = 0x373D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D14u;
            // 0x373d18: 0x2484f380  addiu       $a0, $a0, -0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D1Cu; }
        if (ctx->pc != 0x373D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D1Cu; }
        if (ctx->pc != 0x373D1Cu) { return; }
    }
    ctx->pc = 0x373D1Cu;
label_373d1c:
    // 0x373d1c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d20:
    // 0x373d20: 0xc04e640  jal         func_139900
label_373d24:
    if (ctx->pc == 0x373D24u) {
        ctx->pc = 0x373D24u;
            // 0x373d24: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x373D28u;
        goto label_373d28;
    }
    ctx->pc = 0x373D20u;
    SET_GPR_U32(ctx, 31, 0x373D28u);
    ctx->pc = 0x373D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D20u;
            // 0x373d24: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D28u; }
        if (ctx->pc != 0x373D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D28u; }
        if (ctx->pc != 0x373D28u) { return; }
    }
    ctx->pc = 0x373D28u;
label_373d28:
    // 0x373d28: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d2c:
    // 0x373d2c: 0xc04e640  jal         func_139900
label_373d30:
    if (ctx->pc == 0x373D30u) {
        ctx->pc = 0x373D30u;
            // 0x373d30: 0x2484f3e0  addiu       $a0, $a0, -0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964192));
        ctx->pc = 0x373D34u;
        goto label_373d34;
    }
    ctx->pc = 0x373D2Cu;
    SET_GPR_U32(ctx, 31, 0x373D34u);
    ctx->pc = 0x373D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D2Cu;
            // 0x373d30: 0x2484f3e0  addiu       $a0, $a0, -0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D34u; }
        if (ctx->pc != 0x373D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D34u; }
        if (ctx->pc != 0x373D34u) { return; }
    }
    ctx->pc = 0x373D34u;
label_373d34:
    // 0x373d34: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d38:
    // 0x373d38: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373d3c:
    // 0x373d3c: 0x2484f410  addiu       $a0, $a0, -0xBF0
    ctx->pc = 0x373d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964240));
label_373d40:
    // 0x373d40: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373d44:
    // 0x373d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373d48:
    // 0x373d48: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373d4c:
    // 0x373d4c: 0xc040070  jal         func_1001C0
label_373d50:
    if (ctx->pc == 0x373D50u) {
        ctx->pc = 0x373D50u;
            // 0x373d50: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x373D54u;
        goto label_373d54;
    }
    ctx->pc = 0x373D4Cu;
    SET_GPR_U32(ctx, 31, 0x373D54u);
    ctx->pc = 0x373D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D4Cu;
            // 0x373d50: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D54u; }
        if (ctx->pc != 0x373D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D54u; }
        if (ctx->pc != 0x373D54u) { return; }
    }
    ctx->pc = 0x373D54u;
label_373d54:
    // 0x373d54: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d58:
    // 0x373d58: 0xc04e640  jal         func_139900
label_373d5c:
    if (ctx->pc == 0x373D5Cu) {
        ctx->pc = 0x373D5Cu;
            // 0x373d5c: 0x2484f530  addiu       $a0, $a0, -0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964528));
        ctx->pc = 0x373D60u;
        goto label_373d60;
    }
    ctx->pc = 0x373D58u;
    SET_GPR_U32(ctx, 31, 0x373D60u);
    ctx->pc = 0x373D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D58u;
            // 0x373d5c: 0x2484f530  addiu       $a0, $a0, -0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D60u; }
        if (ctx->pc != 0x373D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D60u; }
        if (ctx->pc != 0x373D60u) { return; }
    }
    ctx->pc = 0x373D60u;
label_373d60:
    // 0x373d60: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d64:
    // 0x373d64: 0xc04e640  jal         func_139900
label_373d68:
    if (ctx->pc == 0x373D68u) {
        ctx->pc = 0x373D68u;
            // 0x373d68: 0x2484f560  addiu       $a0, $a0, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
        ctx->pc = 0x373D6Cu;
        goto label_373d6c;
    }
    ctx->pc = 0x373D64u;
    SET_GPR_U32(ctx, 31, 0x373D6Cu);
    ctx->pc = 0x373D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D64u;
            // 0x373d68: 0x2484f560  addiu       $a0, $a0, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D6Cu; }
        if (ctx->pc != 0x373D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D6Cu; }
        if (ctx->pc != 0x373D6Cu) { return; }
    }
    ctx->pc = 0x373D6Cu;
label_373d6c:
    // 0x373d6c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d70:
    // 0x373d70: 0xc04e640  jal         func_139900
label_373d74:
    if (ctx->pc == 0x373D74u) {
        ctx->pc = 0x373D74u;
            // 0x373d74: 0x2484f590  addiu       $a0, $a0, -0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
        ctx->pc = 0x373D78u;
        goto label_373d78;
    }
    ctx->pc = 0x373D70u;
    SET_GPR_U32(ctx, 31, 0x373D78u);
    ctx->pc = 0x373D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D70u;
            // 0x373d74: 0x2484f590  addiu       $a0, $a0, -0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D78u; }
        if (ctx->pc != 0x373D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D78u; }
        if (ctx->pc != 0x373D78u) { return; }
    }
    ctx->pc = 0x373D78u;
label_373d78:
    // 0x373d78: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d7c:
    // 0x373d7c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x373d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
label_373d80:
    // 0x373d80: 0x2484f5c0  addiu       $a0, $a0, -0xA40
    ctx->pc = 0x373d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
label_373d84:
    // 0x373d84: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x373d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_373d88:
    // 0x373d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373d8c:
    // 0x373d8c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x373d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_373d90:
    // 0x373d90: 0xc040070  jal         func_1001C0
label_373d94:
    if (ctx->pc == 0x373D94u) {
        ctx->pc = 0x373D94u;
            // 0x373d94: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x373D98u;
        goto label_373d98;
    }
    ctx->pc = 0x373D90u;
    SET_GPR_U32(ctx, 31, 0x373D98u);
    ctx->pc = 0x373D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D90u;
            // 0x373d94: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D98u; }
        if (ctx->pc != 0x373D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D98u; }
        if (ctx->pc != 0x373D98u) { return; }
    }
    ctx->pc = 0x373D98u;
label_373d98:
    // 0x373d98: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373d9c:
    // 0x373d9c: 0xc04e640  jal         func_139900
label_373da0:
    if (ctx->pc == 0x373DA0u) {
        ctx->pc = 0x373DA0u;
            // 0x373da0: 0x2484f680  addiu       $a0, $a0, -0x980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964864));
        ctx->pc = 0x373DA4u;
        goto label_373da4;
    }
    ctx->pc = 0x373D9Cu;
    SET_GPR_U32(ctx, 31, 0x373DA4u);
    ctx->pc = 0x373DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D9Cu;
            // 0x373da0: 0x2484f680  addiu       $a0, $a0, -0x980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DA4u; }
        if (ctx->pc != 0x373DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DA4u; }
        if (ctx->pc != 0x373DA4u) { return; }
    }
    ctx->pc = 0x373DA4u;
label_373da4:
    // 0x373da4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373da8:
    // 0x373da8: 0xc04e640  jal         func_139900
label_373dac:
    if (ctx->pc == 0x373DACu) {
        ctx->pc = 0x373DACu;
            // 0x373dac: 0x2484f6b0  addiu       $a0, $a0, -0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964912));
        ctx->pc = 0x373DB0u;
        goto label_373db0;
    }
    ctx->pc = 0x373DA8u;
    SET_GPR_U32(ctx, 31, 0x373DB0u);
    ctx->pc = 0x373DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373DA8u;
            // 0x373dac: 0x2484f6b0  addiu       $a0, $a0, -0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DB0u; }
        if (ctx->pc != 0x373DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DB0u; }
        if (ctx->pc != 0x373DB0u) { return; }
    }
    ctx->pc = 0x373DB0u;
label_373db0:
    // 0x373db0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373db4:
    // 0x373db4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x373db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_373db8:
    // 0x373db8: 0x2484fa98  addiu       $a0, $a0, -0x568
    ctx->pc = 0x373db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965912));
label_373dbc:
    // 0x373dbc: 0xc049c86  jal         func_127218
label_373dc0:
    if (ctx->pc == 0x373DC0u) {
        ctx->pc = 0x373DC0u;
            // 0x373dc0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x373DC4u;
        goto label_373dc4;
    }
    ctx->pc = 0x373DBCu;
    SET_GPR_U32(ctx, 31, 0x373DC4u);
    ctx->pc = 0x373DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373DBCu;
            // 0x373dc0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DC4u; }
        if (ctx->pc != 0x373DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DC4u; }
        if (ctx->pc != 0x373DC4u) { return; }
    }
    ctx->pc = 0x373DC4u;
label_373dc4:
    // 0x373dc4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373dc8:
    // 0x373dc8: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x373dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_373dcc:
    // 0x373dcc: 0x2484fae0  addiu       $a0, $a0, -0x520
    ctx->pc = 0x373dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965984));
label_373dd0:
    // 0x373dd0: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    ctx->pc = 0x373dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
label_373dd4:
    // 0x373dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373dd8:
    // 0x373dd8: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x373dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_373ddc:
    // 0x373ddc: 0xc040070  jal         func_1001C0
label_373de0:
    if (ctx->pc == 0x373DE0u) {
        ctx->pc = 0x373DE0u;
            // 0x373de0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x373DE4u;
        goto label_373de4;
    }
    ctx->pc = 0x373DDCu;
    SET_GPR_U32(ctx, 31, 0x373DE4u);
    ctx->pc = 0x373DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373DDCu;
            // 0x373de0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DE4u; }
        if (ctx->pc != 0x373DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DE4u; }
        if (ctx->pc != 0x373DE4u) { return; }
    }
    ctx->pc = 0x373DE4u;
label_373de4:
    // 0x373de4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373de8:
    // 0x373de8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373dec:
    // 0x373dec: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x373decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_373df0:
    // 0x373df0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373df4:
    // 0x373df4: 0x248403b0  addiu       $a0, $a0, 0x3B0
    ctx->pc = 0x373df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
label_373df8:
    // 0x373df8: 0xac2203b0  sw          $v0, 0x3B0($at)
    ctx->pc = 0x373df8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 944), GPR_U32(ctx, 2));
label_373dfc:
    // 0x373dfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373e00:
    // 0x373e00: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373e04:
    // 0x373e04: 0x320f809  jalr        $t9
label_373e08:
    if (ctx->pc == 0x373E08u) {
        ctx->pc = 0x373E0Cu;
        goto label_373e0c;
    }
    ctx->pc = 0x373E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373E0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373E0Cu; }
            if (ctx->pc != 0x373E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x373E0Cu;
label_373e0c:
    // 0x373e0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373e10:
    // 0x373e10: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373e14:
    // 0x373e14: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x373e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_373e18:
    // 0x373e18: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373e1c:
    // 0x373e1c: 0x248403b0  addiu       $a0, $a0, 0x3B0
    ctx->pc = 0x373e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
label_373e20:
    // 0x373e20: 0xac2203b0  sw          $v0, 0x3B0($at)
    ctx->pc = 0x373e20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 944), GPR_U32(ctx, 2));
label_373e24:
    // 0x373e24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373e28:
    // 0x373e28: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373e2c:
    // 0x373e2c: 0x320f809  jalr        $t9
label_373e30:
    if (ctx->pc == 0x373E30u) {
        ctx->pc = 0x373E34u;
        goto label_373e34;
    }
    ctx->pc = 0x373E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373E34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373E34u; }
            if (ctx->pc != 0x373E34u) { return; }
        }
        }
    }
    ctx->pc = 0x373E34u;
label_373e34:
    // 0x373e34: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373e38:
    // 0x373e38: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373e3c:
    // 0x373e3c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x373e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_373e40:
    // 0x373e40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373e44:
    // 0x373e44: 0x248403b0  addiu       $a0, $a0, 0x3B0
    ctx->pc = 0x373e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
label_373e48:
    // 0x373e48: 0xac2203b0  sw          $v0, 0x3B0($at)
    ctx->pc = 0x373e48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 944), GPR_U32(ctx, 2));
label_373e4c:
    // 0x373e4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373e50:
    // 0x373e50: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373e54:
    // 0x373e54: 0x320f809  jalr        $t9
label_373e58:
    if (ctx->pc == 0x373E58u) {
        ctx->pc = 0x373E5Cu;
        goto label_373e5c;
    }
    ctx->pc = 0x373E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373E5Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373E5Cu; }
            if (ctx->pc != 0x373E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x373E5Cu;
label_373e5c:
    // 0x373e5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373e60:
    // 0x373e60: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373e64:
    // 0x373e64: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x373e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
label_373e68:
    // 0x373e68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373e6c:
    // 0x373e6c: 0x248404d0  addiu       $a0, $a0, 0x4D0
    ctx->pc = 0x373e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
label_373e70:
    // 0x373e70: 0xc04d0e8  jal         func_1343A0
label_373e74:
    if (ctx->pc == 0x373E74u) {
        ctx->pc = 0x373E74u;
            // 0x373e74: 0xac2203b0  sw          $v0, 0x3B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 944), GPR_U32(ctx, 2));
        ctx->pc = 0x373E78u;
        goto label_373e78;
    }
    ctx->pc = 0x373E70u;
    SET_GPR_U32(ctx, 31, 0x373E78u);
    ctx->pc = 0x373E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373E70u;
            // 0x373e74: 0xac2203b0  sw          $v0, 0x3B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E78u; }
        if (ctx->pc != 0x373E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E78u; }
        if (ctx->pc != 0x373E78u) { return; }
    }
    ctx->pc = 0x373E78u;
label_373e78:
    // 0x373e78: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373e7c:
    // 0x373e7c: 0xc058768  jal         func_161DA0
label_373e80:
    if (ctx->pc == 0x373E80u) {
        ctx->pc = 0x373E80u;
            // 0x373e80: 0x24844b60  addiu       $a0, $a0, 0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
        ctx->pc = 0x373E84u;
        goto label_373e84;
    }
    ctx->pc = 0x373E7Cu;
    SET_GPR_U32(ctx, 31, 0x373E84u);
    ctx->pc = 0x373E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373E7Cu;
            // 0x373e80: 0x24844b60  addiu       $a0, $a0, 0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E84u; }
        if (ctx->pc != 0x373E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E84u; }
        if (ctx->pc != 0x373E84u) { return; }
    }
    ctx->pc = 0x373E84u;
label_373e84:
    // 0x373e84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373e88:
    // 0x373e88: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373e8c:
    // 0x373e8c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x373e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_373e90:
    // 0x373e90: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373e94:
    // 0x373e94: 0x24844b60  addiu       $a0, $a0, 0x4B60
    ctx->pc = 0x373e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
label_373e98:
    // 0x373e98: 0xac224b60  sw          $v0, 0x4B60($at)
    ctx->pc = 0x373e98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19296), GPR_U32(ctx, 2));
label_373e9c:
    // 0x373e9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373ea0:
    // 0x373ea0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373ea4:
    // 0x373ea4: 0x320f809  jalr        $t9
label_373ea8:
    if (ctx->pc == 0x373EA8u) {
        ctx->pc = 0x373EACu;
        goto label_373eac;
    }
    ctx->pc = 0x373EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373EACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373EACu; }
            if (ctx->pc != 0x373EACu) { return; }
        }
        }
    }
    ctx->pc = 0x373EACu;
label_373eac:
    // 0x373eac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373eb0:
    // 0x373eb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373eb4:
    // 0x373eb4: 0xac204ebc  sw          $zero, 0x4EBC($at)
    ctx->pc = 0x373eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20156), GPR_U32(ctx, 0));
label_373eb8:
    // 0x373eb8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373ebc:
    // 0x373ebc: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x373ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_373ec0:
    // 0x373ec0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373ec4:
    // 0x373ec4: 0xac224b60  sw          $v0, 0x4B60($at)
    ctx->pc = 0x373ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19296), GPR_U32(ctx, 2));
label_373ec8:
    // 0x373ec8: 0x24844b60  addiu       $a0, $a0, 0x4B60
    ctx->pc = 0x373ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
label_373ecc:
    // 0x373ecc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373ed0:
    // 0x373ed0: 0xac204ec4  sw          $zero, 0x4EC4($at)
    ctx->pc = 0x373ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20164), GPR_U32(ctx, 0));
label_373ed4:
    // 0x373ed4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373ed8:
    // 0x373ed8: 0xac204ec0  sw          $zero, 0x4EC0($at)
    ctx->pc = 0x373ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20160), GPR_U32(ctx, 0));
label_373edc:
    // 0x373edc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373ee0:
    // 0x373ee0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373ee4:
    // 0x373ee4: 0x320f809  jalr        $t9
label_373ee8:
    if (ctx->pc == 0x373EE8u) {
        ctx->pc = 0x373EECu;
        goto label_373eec;
    }
    ctx->pc = 0x373EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373EECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373EECu; }
            if (ctx->pc != 0x373EECu) { return; }
        }
        }
    }
    ctx->pc = 0x373EECu;
label_373eec:
    // 0x373eec: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373ef0:
    // 0x373ef0: 0xc058768  jal         func_161DA0
label_373ef4:
    if (ctx->pc == 0x373EF4u) {
        ctx->pc = 0x373EF4u;
            // 0x373ef4: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->pc = 0x373EF8u;
        goto label_373ef8;
    }
    ctx->pc = 0x373EF0u;
    SET_GPR_U32(ctx, 31, 0x373EF8u);
    ctx->pc = 0x373EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373EF0u;
            // 0x373ef4: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EF8u; }
        if (ctx->pc != 0x373EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EF8u; }
        if (ctx->pc != 0x373EF8u) { return; }
    }
    ctx->pc = 0x373EF8u;
label_373ef8:
    // 0x373ef8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373efc:
    // 0x373efc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373f00:
    // 0x373f00: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x373f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_373f04:
    // 0x373f04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373f08:
    // 0x373f08: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x373f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_373f0c:
    // 0x373f0c: 0xac2251c0  sw          $v0, 0x51C0($at)
    ctx->pc = 0x373f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20928), GPR_U32(ctx, 2));
label_373f10:
    // 0x373f10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373f14:
    // 0x373f14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373f18:
    // 0x373f18: 0x320f809  jalr        $t9
label_373f1c:
    if (ctx->pc == 0x373F1Cu) {
        ctx->pc = 0x373F20u;
        goto label_373f20;
    }
    ctx->pc = 0x373F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373F20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373F20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373F20u; }
            if (ctx->pc != 0x373F20u) { return; }
        }
        }
    }
    ctx->pc = 0x373F20u;
label_373f20:
    // 0x373f20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373f24:
    // 0x373f24: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373f28:
    // 0x373f28: 0xac20551c  sw          $zero, 0x551C($at)
    ctx->pc = 0x373f28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21788), GPR_U32(ctx, 0));
label_373f2c:
    // 0x373f2c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373f30:
    // 0x373f30: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x373f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_373f34:
    // 0x373f34: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373f38:
    // 0x373f38: 0xac2251c0  sw          $v0, 0x51C0($at)
    ctx->pc = 0x373f38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20928), GPR_U32(ctx, 2));
label_373f3c:
    // 0x373f3c: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x373f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_373f40:
    // 0x373f40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373f44:
    // 0x373f44: 0xac205524  sw          $zero, 0x5524($at)
    ctx->pc = 0x373f44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21796), GPR_U32(ctx, 0));
label_373f48:
    // 0x373f48: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373f4c:
    // 0x373f4c: 0xac205520  sw          $zero, 0x5520($at)
    ctx->pc = 0x373f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21792), GPR_U32(ctx, 0));
label_373f50:
    // 0x373f50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x373f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373f54:
    // 0x373f54: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x373f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_373f58:
    // 0x373f58: 0x320f809  jalr        $t9
label_373f5c:
    if (ctx->pc == 0x373F5Cu) {
        ctx->pc = 0x373F60u;
        goto label_373f60;
    }
    ctx->pc = 0x373F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373F60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x373F60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373F60u; }
            if (ctx->pc != 0x373F60u) { return; }
        }
        }
    }
    ctx->pc = 0x373F60u;
label_373f60:
    // 0x373f60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x373f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_373f64:
    // 0x373f64: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373f68:
    // 0x373f68: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x373f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
label_373f6c:
    // 0x373f6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x373f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_373f70:
    // 0x373f70: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x373f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_373f74:
    // 0x373f74: 0xc0bafa0  jal         func_2EBE80
label_373f78:
    if (ctx->pc == 0x373F78u) {
        ctx->pc = 0x373F78u;
            // 0x373f78: 0xac2251c0  sw          $v0, 0x51C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20928), GPR_U32(ctx, 2));
        ctx->pc = 0x373F7Cu;
        goto label_373f7c;
    }
    ctx->pc = 0x373F74u;
    SET_GPR_U32(ctx, 31, 0x373F7Cu);
    ctx->pc = 0x373F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373F74u;
            // 0x373f78: 0xac2251c0  sw          $v0, 0x51C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F7Cu; }
        if (ctx->pc != 0x373F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F7Cu; }
        if (ctx->pc != 0x373F7Cu) { return; }
    }
    ctx->pc = 0x373F7Cu;
label_373f7c:
    // 0x373f7c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373f80:
    // 0x373f80: 0xc0bafa0  jal         func_2EBE80
label_373f84:
    if (ctx->pc == 0x373F84u) {
        ctx->pc = 0x373F84u;
            // 0x373f84: 0x24845a20  addiu       $a0, $a0, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
        ctx->pc = 0x373F88u;
        goto label_373f88;
    }
    ctx->pc = 0x373F80u;
    SET_GPR_U32(ctx, 31, 0x373F88u);
    ctx->pc = 0x373F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373F80u;
            // 0x373f84: 0x24845a20  addiu       $a0, $a0, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F88u; }
        if (ctx->pc != 0x373F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F88u; }
        if (ctx->pc != 0x373F88u) { return; }
    }
    ctx->pc = 0x373F88u;
label_373f88:
    // 0x373f88: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373f8c:
    // 0x373f8c: 0xc04d0e8  jal         func_1343A0
label_373f90:
    if (ctx->pc == 0x373F90u) {
        ctx->pc = 0x373F90u;
            // 0x373f90: 0x24846750  addiu       $a0, $a0, 0x6750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
        ctx->pc = 0x373F94u;
        goto label_373f94;
    }
    ctx->pc = 0x373F8Cu;
    SET_GPR_U32(ctx, 31, 0x373F94u);
    ctx->pc = 0x373F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373F8Cu;
            // 0x373f90: 0x24846750  addiu       $a0, $a0, 0x6750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F94u; }
        if (ctx->pc != 0x373F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F94u; }
        if (ctx->pc != 0x373F94u) { return; }
    }
    ctx->pc = 0x373F94u;
label_373f94:
    // 0x373f94: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_373f98:
    // 0x373f98: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x373f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_373f9c:
    // 0x373f9c: 0x24846870  addiu       $a0, $a0, 0x6870
    ctx->pc = 0x373f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26736));
label_373fa0:
    // 0x373fa0: 0x24a558a0  addiu       $a1, $a1, 0x58A0
    ctx->pc = 0x373fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22688));
label_373fa4:
    // 0x373fa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373fa8:
    // 0x373fa8: 0x24070660  addiu       $a3, $zero, 0x660
    ctx->pc = 0x373fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_373fac:
    // 0x373fac: 0xc040070  jal         func_1001C0
label_373fb0:
    if (ctx->pc == 0x373FB0u) {
        ctx->pc = 0x373FB0u;
            // 0x373fb0: 0x24080013  addiu       $t0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x373FB4u;
        goto label_373fb4;
    }
    ctx->pc = 0x373FACu;
    SET_GPR_U32(ctx, 31, 0x373FB4u);
    ctx->pc = 0x373FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373FACu;
            // 0x373fb0: 0x24080013  addiu       $t0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FB4u; }
        if (ctx->pc != 0x373FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FB4u; }
        if (ctx->pc != 0x373FB4u) { return; }
    }
    ctx->pc = 0x373FB4u;
label_373fb4:
    // 0x373fb4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x373fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_373fb8:
    // 0x373fb8: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x373fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_373fbc:
    // 0x373fbc: 0x2484e190  addiu       $a0, $a0, -0x1E70
    ctx->pc = 0x373fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959504));
label_373fc0:
    // 0x373fc0: 0x24a548e0  addiu       $a1, $a1, 0x48E0
    ctx->pc = 0x373fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18656));
label_373fc4:
    // 0x373fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373fc8:
    // 0x373fc8: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x373fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_373fcc:
    // 0x373fcc: 0xc040070  jal         func_1001C0
label_373fd0:
    if (ctx->pc == 0x373FD0u) {
        ctx->pc = 0x373FD0u;
            // 0x373fd0: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x373FD4u;
        goto label_373fd4;
    }
    ctx->pc = 0x373FCCu;
    SET_GPR_U32(ctx, 31, 0x373FD4u);
    ctx->pc = 0x373FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373FCCu;
            // 0x373fd0: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FD4u; }
        if (ctx->pc != 0x373FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FD4u; }
        if (ctx->pc != 0x373FD4u) { return; }
    }
    ctx->pc = 0x373FD4u;
label_373fd4:
    // 0x373fd4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x373fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_373fd8:
    // 0x373fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373fdc:
    // 0x373fdc: 0xc0b3414  jal         func_2CD050
label_373fe0:
    if (ctx->pc == 0x373FE0u) {
        ctx->pc = 0x373FE0u;
            // 0x373fe0: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x373FE4u;
        goto label_373fe4;
    }
    ctx->pc = 0x373FDCu;
    SET_GPR_U32(ctx, 31, 0x373FE4u);
    ctx->pc = 0x373FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373FDCu;
            // 0x373fe0: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FE4u; }
        if (ctx->pc != 0x373FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FE4u; }
        if (ctx->pc != 0x373FE4u) { return; }
    }
    ctx->pc = 0x373FE4u;
label_373fe4:
    // 0x373fe4: 0x3c1001eb  lui         $s0, 0x1EB
    ctx->pc = 0x373fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)491 << 16));
label_373fe8:
    // 0x373fe8: 0x2610f470  addiu       $s0, $s0, -0xB90
    ctx->pc = 0x373fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964336));
label_373fec:
    // 0x373fec: 0xc0b308c  jal         func_2CC230
label_373ff0:
    if (ctx->pc == 0x373FF0u) {
        ctx->pc = 0x373FF0u;
            // 0x373ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373FF4u;
        goto label_373ff4;
    }
    ctx->pc = 0x373FECu;
    SET_GPR_U32(ctx, 31, 0x373FF4u);
    ctx->pc = 0x373FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373FECu;
            // 0x373ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC230u;
    if (runtime->hasFunction(0x2CC230u)) {
        auto targetFn = runtime->lookupFunction(0x2CC230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FF4u; }
        if (ctx->pc != 0x373FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CFragmentFv_0x2cc230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FF4u; }
        if (ctx->pc != 0x373FF4u) { return; }
    }
    ctx->pc = 0x373FF4u;
label_373ff4:
    // 0x373ff4: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x373ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_373ff8:
    // 0x373ff8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x373ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_373ffc:
    // 0x373ffc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x373ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_374000:
    // 0x374000: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x374000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_374004:
    // 0x374004: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_374008:
    if (ctx->pc == 0x374008u) {
        ctx->pc = 0x37400Cu;
        goto label_37400c;
    }
    ctx->pc = 0x374004u;
    {
        const bool branch_taken_0x374004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374004) {
            ctx->pc = 0x373FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_373fec;
        }
    }
    ctx->pc = 0x37400Cu;
label_37400c:
    // 0x37400c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x37400cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_374010:
    // 0x374010: 0xc0b31e8  jal         func_2CC7A0
label_374014:
    if (ctx->pc == 0x374014u) {
        ctx->pc = 0x374014u;
            // 0x374014: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->pc = 0x374018u;
        goto label_374018;
    }
    ctx->pc = 0x374010u;
    SET_GPR_U32(ctx, 31, 0x374018u);
    ctx->pc = 0x374014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374010u;
            // 0x374014: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC7A0u;
    if (runtime->hasFunction(0x2CC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374018u; }
        if (ctx->pc != 0x374018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CBPotFv_0x2cc7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374018u; }
        if (ctx->pc != 0x374018u) { return; }
    }
    ctx->pc = 0x374018u;
label_374018:
    // 0x374018: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x374018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_37401c:
    // 0x37401c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x37401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_374020:
    // 0x374020: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x374020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_374024:
    // 0x374024: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x374024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_374028:
    // 0x374028: 0x24843c90  addiu       $a0, $a0, 0x3C90
    ctx->pc = 0x374028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
label_37402c:
    // 0x37402c: 0xac223c90  sw          $v0, 0x3C90($at)
    ctx->pc = 0x37402cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15504), GPR_U32(ctx, 2));
label_374030:
    // 0x374030: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x374030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_374034:
    // 0x374034: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x374034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_374038:
    // 0x374038: 0x320f809  jalr        $t9
label_37403c:
    if (ctx->pc == 0x37403Cu) {
        ctx->pc = 0x374040u;
        goto label_374040;
    }
    ctx->pc = 0x374038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374040u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x374040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374040u; }
            if (ctx->pc != 0x374040u) { return; }
        }
        }
    }
    ctx->pc = 0x374040u;
label_374040:
    // 0x374040: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x374040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_374044:
    // 0x374044: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x374044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_374048:
    // 0x374048: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x374048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_37404c:
    // 0x37404c: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x37404cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_374050:
    // 0x374050: 0x24843c90  addiu       $a0, $a0, 0x3C90
    ctx->pc = 0x374050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
label_374054:
    // 0x374054: 0xac223c90  sw          $v0, 0x3C90($at)
    ctx->pc = 0x374054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15504), GPR_U32(ctx, 2));
label_374058:
    // 0x374058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x374058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37405c:
    // 0x37405c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37405cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_374060:
    // 0x374060: 0x320f809  jalr        $t9
label_374064:
    if (ctx->pc == 0x374064u) {
        ctx->pc = 0x374068u;
        goto label_374068;
    }
    ctx->pc = 0x374060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374068u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x374068u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374068u; }
            if (ctx->pc != 0x374068u) { return; }
        }
        }
    }
    ctx->pc = 0x374068u;
label_374068:
    // 0x374068: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x374068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_37406c:
    // 0x37406c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x37406cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_374070:
    // 0x374070: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x374070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_374074:
    // 0x374074: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x374074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_374078:
    // 0x374078: 0x24843c90  addiu       $a0, $a0, 0x3C90
    ctx->pc = 0x374078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
label_37407c:
    // 0x37407c: 0xac223c90  sw          $v0, 0x3C90($at)
    ctx->pc = 0x37407cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15504), GPR_U32(ctx, 2));
label_374080:
    // 0x374080: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x374080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_374084:
    // 0x374084: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x374084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_374088:
    // 0x374088: 0x320f809  jalr        $t9
label_37408c:
    if (ctx->pc == 0x37408Cu) {
        ctx->pc = 0x374090u;
        goto label_374090;
    }
    ctx->pc = 0x374088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x374090u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x374090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x374090u; }
            if (ctx->pc != 0x374090u) { return; }
        }
        }
    }
    ctx->pc = 0x374090u;
label_374090:
    // 0x374090: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x374090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_374094:
    // 0x374094: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x374094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_374098:
    // 0x374098: 0xac203fec  sw          $zero, 0x3FEC($at)
    ctx->pc = 0x374098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16364), GPR_U32(ctx, 0));
label_37409c:
    // 0x37409c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x37409cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_3740a0:
    // 0x3740a0: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x3740a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_3740a4:
    // 0x3740a4: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x3740a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_3740a8:
    // 0x3740a8: 0xac223c90  sw          $v0, 0x3C90($at)
    ctx->pc = 0x3740a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15504), GPR_U32(ctx, 2));
label_3740ac:
    // 0x3740ac: 0x24843c90  addiu       $a0, $a0, 0x3C90
    ctx->pc = 0x3740acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
label_3740b0:
    // 0x3740b0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x3740b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_3740b4:
    // 0x3740b4: 0xac203ff4  sw          $zero, 0x3FF4($at)
    ctx->pc = 0x3740b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16372), GPR_U32(ctx, 0));
label_3740b8:
    // 0x3740b8: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x3740b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_3740bc:
    // 0x3740bc: 0xac203ff0  sw          $zero, 0x3FF0($at)
    ctx->pc = 0x3740bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16368), GPR_U32(ctx, 0));
label_3740c0:
    // 0x3740c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3740c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3740c4:
    // 0x3740c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3740c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3740c8:
    // 0x3740c8: 0x320f809  jalr        $t9
label_3740cc:
    if (ctx->pc == 0x3740CCu) {
        ctx->pc = 0x3740D0u;
        goto label_3740d0;
    }
    ctx->pc = 0x3740C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3740D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3740D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3740D0u; }
            if (ctx->pc != 0x3740D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3740D0u;
label_3740d0:
    // 0x3740d0: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x3740d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_3740d4:
    // 0x3740d4: 0xc0c26c4  jal         func_309B10
label_3740d8:
    if (ctx->pc == 0x3740D8u) {
        ctx->pc = 0x3740D8u;
            // 0x3740d8: 0x248466f0  addiu       $a0, $a0, 0x66F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26352));
        ctx->pc = 0x3740DCu;
        goto label_3740dc;
    }
    ctx->pc = 0x3740D4u;
    SET_GPR_U32(ctx, 31, 0x3740DCu);
    ctx->pc = 0x3740D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3740D4u;
            // 0x3740d8: 0x248466f0  addiu       $a0, $a0, 0x66F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309B10u;
    if (runtime->hasFunction(0x309B10u)) {
        auto targetFn = runtime->lookupFunction(0x309B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3740DCu; }
        if (ctx->pc != 0x3740DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14NowLoadingInfoFv_0x309b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3740DCu; }
        if (ctx->pc != 0x3740DCu) { return; }
    }
    ctx->pc = 0x3740DCu;
label_3740dc:
    // 0x3740dc: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x3740dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_3740e0:
    // 0x3740e0: 0xc068844  jal         func_1A2110
label_3740e4:
    if (ctx->pc == 0x3740E4u) {
        ctx->pc = 0x3740E4u;
            // 0x3740e4: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->pc = 0x3740E8u;
        goto label_3740e8;
    }
    ctx->pc = 0x3740E0u;
    SET_GPR_U32(ctx, 31, 0x3740E8u);
    ctx->pc = 0x3740E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3740E0u;
            // 0x3740e4: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2110u;
    if (runtime->hasFunction(0x1A2110u)) {
        auto targetFn = runtime->lookupFunction(0x1A2110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3740E8u; }
        if (ctx->pc != 0x3740E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CWaveTableFv_0x1a2110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3740E8u; }
        if (ctx->pc != 0x3740E8u) { return; }
    }
    ctx->pc = 0x3740E8u;
label_3740e8:
    // 0x3740e8: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x3740e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_3740ec:
    // 0x3740ec: 0x3c0601eb  lui         $a2, 0x1EB
    ctx->pc = 0x3740ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)491 << 16));
label_3740f0:
    // 0x3740f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3740f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3740f4:
    // 0x3740f4: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x3740f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
label_3740f8:
    // 0x3740f8: 0xc040268  jal         func_1009A0
label_3740fc:
    if (ctx->pc == 0x3740FCu) {
        ctx->pc = 0x3740FCu;
            // 0x3740fc: 0x24c66730  addiu       $a2, $a2, 0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26416));
        ctx->pc = 0x374100u;
        goto label_374100;
    }
    ctx->pc = 0x3740F8u;
    SET_GPR_U32(ctx, 31, 0x374100u);
    ctx->pc = 0x3740FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3740F8u;
            // 0x3740fc: 0x24c66730  addiu       $a2, $a2, 0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1009A0u;
    if (runtime->hasFunction(0x1009A0u)) {
        auto targetFn = runtime->lookupFunction(0x1009A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374100u; }
        if (ctx->pc != 0x374100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___register_global_object_0x1009a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374100u; }
        if (ctx->pc != 0x374100u) { return; }
    }
    ctx->pc = 0x374100u;
label_374100:
    // 0x374100: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x374100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_374104:
    // 0x374104: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x374104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_374108:
    // 0x374108: 0x2484bba0  addiu       $a0, $a0, -0x4460
    ctx->pc = 0x374108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949792));
label_37410c:
    // 0x37410c: 0x24a548b0  addiu       $a1, $a1, 0x48B0
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18608));
label_374110:
    // 0x374110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374114:
    // 0x374114: 0x24070dc0  addiu       $a3, $zero, 0xDC0
    ctx->pc = 0x374114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3520));
label_374118:
    // 0x374118: 0xc040070  jal         func_1001C0
label_37411c:
    if (ctx->pc == 0x37411Cu) {
        ctx->pc = 0x37411Cu;
            // 0x37411c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x374120u;
        goto label_374120;
    }
    ctx->pc = 0x374118u;
    SET_GPR_U32(ctx, 31, 0x374120u);
    ctx->pc = 0x37411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374118u;
            // 0x37411c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374120u; }
        if (ctx->pc != 0x374120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374120u; }
        if (ctx->pc != 0x374120u) { return; }
    }
    ctx->pc = 0x374120u;
label_374120:
    // 0x374120: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x374120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_374124:
    // 0x374124: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x374124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_374128:
    // 0x374128: 0x24842320  addiu       $a0, $a0, 0x2320
    ctx->pc = 0x374128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8992));
label_37412c:
    // 0x37412c: 0x24a54880  addiu       $a1, $a1, 0x4880
    ctx->pc = 0x37412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18560));
label_374130:
    // 0x374130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374134:
    // 0x374134: 0x240707a0  addiu       $a3, $zero, 0x7A0
    ctx->pc = 0x374134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
label_374138:
    // 0x374138: 0xc040070  jal         func_1001C0
label_37413c:
    if (ctx->pc == 0x37413Cu) {
        ctx->pc = 0x37413Cu;
            // 0x37413c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x374140u;
        goto label_374140;
    }
    ctx->pc = 0x374138u;
    SET_GPR_U32(ctx, 31, 0x374140u);
    ctx->pc = 0x37413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374138u;
            // 0x37413c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374140u; }
        if (ctx->pc != 0x374140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374140u; }
        if (ctx->pc != 0x374140u) { return; }
    }
    ctx->pc = 0x374140u;
label_374140:
    // 0x374140: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x374140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_374144:
    // 0x374144: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x374144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_374148:
    // 0x374148: 0x248450e0  addiu       $a0, $a0, 0x50E0
    ctx->pc = 0x374148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20704));
label_37414c:
    // 0x37414c: 0x24a54850  addiu       $a1, $a1, 0x4850
    ctx->pc = 0x37414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18512));
label_374150:
    // 0x374150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374154:
    // 0x374154: 0x24070940  addiu       $a3, $zero, 0x940
    ctx->pc = 0x374154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2368));
label_374158:
    // 0x374158: 0xc040070  jal         func_1001C0
label_37415c:
    if (ctx->pc == 0x37415Cu) {
        ctx->pc = 0x37415Cu;
            // 0x37415c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x374160u;
        goto label_374160;
    }
    ctx->pc = 0x374158u;
    SET_GPR_U32(ctx, 31, 0x374160u);
    ctx->pc = 0x37415Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374158u;
            // 0x37415c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374160u; }
        if (ctx->pc != 0x374160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374160u; }
        if (ctx->pc != 0x374160u) { return; }
    }
    ctx->pc = 0x374160u;
label_374160:
    // 0x374160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_374164:
    // 0x374164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374168:
    // 0x374168: 0x3e00008  jr          $ra
label_37416c:
    if (ctx->pc == 0x37416Cu) {
        ctx->pc = 0x37416Cu;
            // 0x37416c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x374170u;
        goto label_fallthrough_0x374168;
    }
    ctx->pc = 0x374168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374168u;
            // 0x37416c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x374168:
    ctx->pc = 0x374170u;
}
