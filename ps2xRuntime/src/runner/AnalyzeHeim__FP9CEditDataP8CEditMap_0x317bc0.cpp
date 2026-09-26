#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeHeim__FP9CEditDataP8CEditMap
// Address: 0x317bc0 - 0x318124
void AnalyzeHeim__FP9CEditDataP8CEditMap_0x317bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeHeim__FP9CEditDataP8CEditMap_0x317bc0");
#endif

    switch (ctx->pc) {
        case 0x317bc0u: goto label_317bc0;
        case 0x317bc4u: goto label_317bc4;
        case 0x317bc8u: goto label_317bc8;
        case 0x317bccu: goto label_317bcc;
        case 0x317bd0u: goto label_317bd0;
        case 0x317bd4u: goto label_317bd4;
        case 0x317bd8u: goto label_317bd8;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be0u: goto label_317be0;
        case 0x317be4u: goto label_317be4;
        case 0x317be8u: goto label_317be8;
        case 0x317becu: goto label_317bec;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bf4u: goto label_317bf4;
        case 0x317bf8u: goto label_317bf8;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c00u: goto label_317c00;
        case 0x317c04u: goto label_317c04;
        case 0x317c08u: goto label_317c08;
        case 0x317c0cu: goto label_317c0c;
        case 0x317c10u: goto label_317c10;
        case 0x317c14u: goto label_317c14;
        case 0x317c18u: goto label_317c18;
        case 0x317c1cu: goto label_317c1c;
        case 0x317c20u: goto label_317c20;
        case 0x317c24u: goto label_317c24;
        case 0x317c28u: goto label_317c28;
        case 0x317c2cu: goto label_317c2c;
        case 0x317c30u: goto label_317c30;
        case 0x317c34u: goto label_317c34;
        case 0x317c38u: goto label_317c38;
        case 0x317c3cu: goto label_317c3c;
        case 0x317c40u: goto label_317c40;
        case 0x317c44u: goto label_317c44;
        case 0x317c48u: goto label_317c48;
        case 0x317c4cu: goto label_317c4c;
        case 0x317c50u: goto label_317c50;
        case 0x317c54u: goto label_317c54;
        case 0x317c58u: goto label_317c58;
        case 0x317c5cu: goto label_317c5c;
        case 0x317c60u: goto label_317c60;
        case 0x317c64u: goto label_317c64;
        case 0x317c68u: goto label_317c68;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c70u: goto label_317c70;
        case 0x317c74u: goto label_317c74;
        case 0x317c78u: goto label_317c78;
        case 0x317c7cu: goto label_317c7c;
        case 0x317c80u: goto label_317c80;
        case 0x317c84u: goto label_317c84;
        case 0x317c88u: goto label_317c88;
        case 0x317c8cu: goto label_317c8c;
        case 0x317c90u: goto label_317c90;
        case 0x317c94u: goto label_317c94;
        case 0x317c98u: goto label_317c98;
        case 0x317c9cu: goto label_317c9c;
        case 0x317ca0u: goto label_317ca0;
        case 0x317ca4u: goto label_317ca4;
        case 0x317ca8u: goto label_317ca8;
        case 0x317cacu: goto label_317cac;
        case 0x317cb0u: goto label_317cb0;
        case 0x317cb4u: goto label_317cb4;
        case 0x317cb8u: goto label_317cb8;
        case 0x317cbcu: goto label_317cbc;
        case 0x317cc0u: goto label_317cc0;
        case 0x317cc4u: goto label_317cc4;
        case 0x317cc8u: goto label_317cc8;
        case 0x317cccu: goto label_317ccc;
        case 0x317cd0u: goto label_317cd0;
        case 0x317cd4u: goto label_317cd4;
        case 0x317cd8u: goto label_317cd8;
        case 0x317cdcu: goto label_317cdc;
        case 0x317ce0u: goto label_317ce0;
        case 0x317ce4u: goto label_317ce4;
        case 0x317ce8u: goto label_317ce8;
        case 0x317cecu: goto label_317cec;
        case 0x317cf0u: goto label_317cf0;
        case 0x317cf4u: goto label_317cf4;
        case 0x317cf8u: goto label_317cf8;
        case 0x317cfcu: goto label_317cfc;
        case 0x317d00u: goto label_317d00;
        case 0x317d04u: goto label_317d04;
        case 0x317d08u: goto label_317d08;
        case 0x317d0cu: goto label_317d0c;
        case 0x317d10u: goto label_317d10;
        case 0x317d14u: goto label_317d14;
        case 0x317d18u: goto label_317d18;
        case 0x317d1cu: goto label_317d1c;
        case 0x317d20u: goto label_317d20;
        case 0x317d24u: goto label_317d24;
        case 0x317d28u: goto label_317d28;
        case 0x317d2cu: goto label_317d2c;
        case 0x317d30u: goto label_317d30;
        case 0x317d34u: goto label_317d34;
        case 0x317d38u: goto label_317d38;
        case 0x317d3cu: goto label_317d3c;
        case 0x317d40u: goto label_317d40;
        case 0x317d44u: goto label_317d44;
        case 0x317d48u: goto label_317d48;
        case 0x317d4cu: goto label_317d4c;
        case 0x317d50u: goto label_317d50;
        case 0x317d54u: goto label_317d54;
        case 0x317d58u: goto label_317d58;
        case 0x317d5cu: goto label_317d5c;
        case 0x317d60u: goto label_317d60;
        case 0x317d64u: goto label_317d64;
        case 0x317d68u: goto label_317d68;
        case 0x317d6cu: goto label_317d6c;
        case 0x317d70u: goto label_317d70;
        case 0x317d74u: goto label_317d74;
        case 0x317d78u: goto label_317d78;
        case 0x317d7cu: goto label_317d7c;
        case 0x317d80u: goto label_317d80;
        case 0x317d84u: goto label_317d84;
        case 0x317d88u: goto label_317d88;
        case 0x317d8cu: goto label_317d8c;
        case 0x317d90u: goto label_317d90;
        case 0x317d94u: goto label_317d94;
        case 0x317d98u: goto label_317d98;
        case 0x317d9cu: goto label_317d9c;
        case 0x317da0u: goto label_317da0;
        case 0x317da4u: goto label_317da4;
        case 0x317da8u: goto label_317da8;
        case 0x317dacu: goto label_317dac;
        case 0x317db0u: goto label_317db0;
        case 0x317db4u: goto label_317db4;
        case 0x317db8u: goto label_317db8;
        case 0x317dbcu: goto label_317dbc;
        case 0x317dc0u: goto label_317dc0;
        case 0x317dc4u: goto label_317dc4;
        case 0x317dc8u: goto label_317dc8;
        case 0x317dccu: goto label_317dcc;
        case 0x317dd0u: goto label_317dd0;
        case 0x317dd4u: goto label_317dd4;
        case 0x317dd8u: goto label_317dd8;
        case 0x317ddcu: goto label_317ddc;
        case 0x317de0u: goto label_317de0;
        case 0x317de4u: goto label_317de4;
        case 0x317de8u: goto label_317de8;
        case 0x317decu: goto label_317dec;
        case 0x317df0u: goto label_317df0;
        case 0x317df4u: goto label_317df4;
        case 0x317df8u: goto label_317df8;
        case 0x317dfcu: goto label_317dfc;
        case 0x317e00u: goto label_317e00;
        case 0x317e04u: goto label_317e04;
        case 0x317e08u: goto label_317e08;
        case 0x317e0cu: goto label_317e0c;
        case 0x317e10u: goto label_317e10;
        case 0x317e14u: goto label_317e14;
        case 0x317e18u: goto label_317e18;
        case 0x317e1cu: goto label_317e1c;
        case 0x317e20u: goto label_317e20;
        case 0x317e24u: goto label_317e24;
        case 0x317e28u: goto label_317e28;
        case 0x317e2cu: goto label_317e2c;
        case 0x317e30u: goto label_317e30;
        case 0x317e34u: goto label_317e34;
        case 0x317e38u: goto label_317e38;
        case 0x317e3cu: goto label_317e3c;
        case 0x317e40u: goto label_317e40;
        case 0x317e44u: goto label_317e44;
        case 0x317e48u: goto label_317e48;
        case 0x317e4cu: goto label_317e4c;
        case 0x317e50u: goto label_317e50;
        case 0x317e54u: goto label_317e54;
        case 0x317e58u: goto label_317e58;
        case 0x317e5cu: goto label_317e5c;
        case 0x317e60u: goto label_317e60;
        case 0x317e64u: goto label_317e64;
        case 0x317e68u: goto label_317e68;
        case 0x317e6cu: goto label_317e6c;
        case 0x317e70u: goto label_317e70;
        case 0x317e74u: goto label_317e74;
        case 0x317e78u: goto label_317e78;
        case 0x317e7cu: goto label_317e7c;
        case 0x317e80u: goto label_317e80;
        case 0x317e84u: goto label_317e84;
        case 0x317e88u: goto label_317e88;
        case 0x317e8cu: goto label_317e8c;
        case 0x317e90u: goto label_317e90;
        case 0x317e94u: goto label_317e94;
        case 0x317e98u: goto label_317e98;
        case 0x317e9cu: goto label_317e9c;
        case 0x317ea0u: goto label_317ea0;
        case 0x317ea4u: goto label_317ea4;
        case 0x317ea8u: goto label_317ea8;
        case 0x317eacu: goto label_317eac;
        case 0x317eb0u: goto label_317eb0;
        case 0x317eb4u: goto label_317eb4;
        case 0x317eb8u: goto label_317eb8;
        case 0x317ebcu: goto label_317ebc;
        case 0x317ec0u: goto label_317ec0;
        case 0x317ec4u: goto label_317ec4;
        case 0x317ec8u: goto label_317ec8;
        case 0x317eccu: goto label_317ecc;
        case 0x317ed0u: goto label_317ed0;
        case 0x317ed4u: goto label_317ed4;
        case 0x317ed8u: goto label_317ed8;
        case 0x317edcu: goto label_317edc;
        case 0x317ee0u: goto label_317ee0;
        case 0x317ee4u: goto label_317ee4;
        case 0x317ee8u: goto label_317ee8;
        case 0x317eecu: goto label_317eec;
        case 0x317ef0u: goto label_317ef0;
        case 0x317ef4u: goto label_317ef4;
        case 0x317ef8u: goto label_317ef8;
        case 0x317efcu: goto label_317efc;
        case 0x317f00u: goto label_317f00;
        case 0x317f04u: goto label_317f04;
        case 0x317f08u: goto label_317f08;
        case 0x317f0cu: goto label_317f0c;
        case 0x317f10u: goto label_317f10;
        case 0x317f14u: goto label_317f14;
        case 0x317f18u: goto label_317f18;
        case 0x317f1cu: goto label_317f1c;
        case 0x317f20u: goto label_317f20;
        case 0x317f24u: goto label_317f24;
        case 0x317f28u: goto label_317f28;
        case 0x317f2cu: goto label_317f2c;
        case 0x317f30u: goto label_317f30;
        case 0x317f34u: goto label_317f34;
        case 0x317f38u: goto label_317f38;
        case 0x317f3cu: goto label_317f3c;
        case 0x317f40u: goto label_317f40;
        case 0x317f44u: goto label_317f44;
        case 0x317f48u: goto label_317f48;
        case 0x317f4cu: goto label_317f4c;
        case 0x317f50u: goto label_317f50;
        case 0x317f54u: goto label_317f54;
        case 0x317f58u: goto label_317f58;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f60u: goto label_317f60;
        case 0x317f64u: goto label_317f64;
        case 0x317f68u: goto label_317f68;
        case 0x317f6cu: goto label_317f6c;
        case 0x317f70u: goto label_317f70;
        case 0x317f74u: goto label_317f74;
        case 0x317f78u: goto label_317f78;
        case 0x317f7cu: goto label_317f7c;
        case 0x317f80u: goto label_317f80;
        case 0x317f84u: goto label_317f84;
        case 0x317f88u: goto label_317f88;
        case 0x317f8cu: goto label_317f8c;
        case 0x317f90u: goto label_317f90;
        case 0x317f94u: goto label_317f94;
        case 0x317f98u: goto label_317f98;
        case 0x317f9cu: goto label_317f9c;
        case 0x317fa0u: goto label_317fa0;
        case 0x317fa4u: goto label_317fa4;
        case 0x317fa8u: goto label_317fa8;
        case 0x317facu: goto label_317fac;
        case 0x317fb0u: goto label_317fb0;
        case 0x317fb4u: goto label_317fb4;
        case 0x317fb8u: goto label_317fb8;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc0u: goto label_317fc0;
        case 0x317fc4u: goto label_317fc4;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fccu: goto label_317fcc;
        case 0x317fd0u: goto label_317fd0;
        case 0x317fd4u: goto label_317fd4;
        case 0x317fd8u: goto label_317fd8;
        case 0x317fdcu: goto label_317fdc;
        case 0x317fe0u: goto label_317fe0;
        case 0x317fe4u: goto label_317fe4;
        case 0x317fe8u: goto label_317fe8;
        case 0x317fecu: goto label_317fec;
        case 0x317ff0u: goto label_317ff0;
        case 0x317ff4u: goto label_317ff4;
        case 0x317ff8u: goto label_317ff8;
        case 0x317ffcu: goto label_317ffc;
        case 0x318000u: goto label_318000;
        case 0x318004u: goto label_318004;
        case 0x318008u: goto label_318008;
        case 0x31800cu: goto label_31800c;
        case 0x318010u: goto label_318010;
        case 0x318014u: goto label_318014;
        case 0x318018u: goto label_318018;
        case 0x31801cu: goto label_31801c;
        case 0x318020u: goto label_318020;
        case 0x318024u: goto label_318024;
        case 0x318028u: goto label_318028;
        case 0x31802cu: goto label_31802c;
        case 0x318030u: goto label_318030;
        case 0x318034u: goto label_318034;
        case 0x318038u: goto label_318038;
        case 0x31803cu: goto label_31803c;
        case 0x318040u: goto label_318040;
        case 0x318044u: goto label_318044;
        case 0x318048u: goto label_318048;
        case 0x31804cu: goto label_31804c;
        case 0x318050u: goto label_318050;
        case 0x318054u: goto label_318054;
        case 0x318058u: goto label_318058;
        case 0x31805cu: goto label_31805c;
        case 0x318060u: goto label_318060;
        case 0x318064u: goto label_318064;
        case 0x318068u: goto label_318068;
        case 0x31806cu: goto label_31806c;
        case 0x318070u: goto label_318070;
        case 0x318074u: goto label_318074;
        case 0x318078u: goto label_318078;
        case 0x31807cu: goto label_31807c;
        case 0x318080u: goto label_318080;
        case 0x318084u: goto label_318084;
        case 0x318088u: goto label_318088;
        case 0x31808cu: goto label_31808c;
        case 0x318090u: goto label_318090;
        case 0x318094u: goto label_318094;
        case 0x318098u: goto label_318098;
        case 0x31809cu: goto label_31809c;
        case 0x3180a0u: goto label_3180a0;
        case 0x3180a4u: goto label_3180a4;
        case 0x3180a8u: goto label_3180a8;
        case 0x3180acu: goto label_3180ac;
        case 0x3180b0u: goto label_3180b0;
        case 0x3180b4u: goto label_3180b4;
        case 0x3180b8u: goto label_3180b8;
        case 0x3180bcu: goto label_3180bc;
        case 0x3180c0u: goto label_3180c0;
        case 0x3180c4u: goto label_3180c4;
        case 0x3180c8u: goto label_3180c8;
        case 0x3180ccu: goto label_3180cc;
        case 0x3180d0u: goto label_3180d0;
        case 0x3180d4u: goto label_3180d4;
        case 0x3180d8u: goto label_3180d8;
        case 0x3180dcu: goto label_3180dc;
        case 0x3180e0u: goto label_3180e0;
        case 0x3180e4u: goto label_3180e4;
        case 0x3180e8u: goto label_3180e8;
        case 0x3180ecu: goto label_3180ec;
        case 0x3180f0u: goto label_3180f0;
        case 0x3180f4u: goto label_3180f4;
        case 0x3180f8u: goto label_3180f8;
        case 0x3180fcu: goto label_3180fc;
        case 0x318100u: goto label_318100;
        case 0x318104u: goto label_318104;
        case 0x318108u: goto label_318108;
        case 0x31810cu: goto label_31810c;
        case 0x318110u: goto label_318110;
        case 0x318114u: goto label_318114;
        case 0x318118u: goto label_318118;
        case 0x31811cu: goto label_31811c;
        case 0x318120u: goto label_318120;
        default: break;
    }

    ctx->pc = 0x317bc0u;

label_317bc0:
    // 0x317bc0: 0x27bded10  addiu       $sp, $sp, -0x12F0
    ctx->pc = 0x317bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962448));
label_317bc4:
    // 0x317bc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x317bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_317bc8:
    // 0x317bc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x317bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_317bcc:
    // 0x317bcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x317bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_317bd0:
    // 0x317bd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x317bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_317bd4:
    // 0x317bd4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x317bd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317bd8:
    // 0x317bd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x317bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_317bdc:
    // 0x317bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317be0:
    // 0x317be0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x317be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_317be4:
    // 0x317be4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x317be4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_317be8:
    // 0x317be8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x317be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_317bec:
    // 0x317bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317bf0:
    // 0x317bf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_317bf4:
    // 0x317bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_317bf8:
    // 0x317bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_317bfc:
    // 0x317bfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x317bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317c00:
    // 0x317c00: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x317c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_317c04:
    // 0x317c04: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x317c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_317c08:
    // 0x317c08: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x317c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_317c0c:
    // 0x317c0c: 0x244701e0  addiu       $a3, $v0, 0x1E0
    ctx->pc = 0x317c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_317c10:
    // 0x317c10: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x317c10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_317c14:
    // 0x317c14: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x317c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
label_317c18:
    // 0x317c18: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x317c18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_317c1c:
    // 0x317c1c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x317c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_317c20:
    // 0x317c20: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x317c20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_317c24:
    // 0x317c24: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x317c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_317c28:
    // 0x317c28: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x317c28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_317c2c:
    // 0x317c2c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x317c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_317c30:
    // 0x317c30: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x317c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_317c34:
    // 0x317c34: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x317c34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_317c38:
    // 0x317c38: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x317c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_317c3c:
    // 0x317c3c: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x317c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
label_317c40:
    // 0x317c40: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x317c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_317c44:
    // 0x317c44: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x317c44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_317c48:
    // 0x317c48: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x317c48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_317c4c:
    // 0x317c4c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x317c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_317c50:
    // 0x317c50: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x317c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_317c54:
    // 0x317c54: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_317c58:
    if (ctx->pc == 0x317C58u) {
        ctx->pc = 0x317C58u;
            // 0x317c58: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x317C5Cu;
        goto label_317c5c;
    }
    ctx->pc = 0x317C54u;
    {
        const bool branch_taken_0x317c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317C54u;
            // 0x317c58: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c54) {
            ctx->pc = 0x317C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317c00;
        }
    }
    ctx->pc = 0x317C5Cu;
label_317c5c:
    // 0x317c5c: 0xc064220  jal         func_190880
label_317c60:
    if (ctx->pc == 0x317C60u) {
        ctx->pc = 0x317C64u;
        goto label_317c64;
    }
    ctx->pc = 0x317C5Cu;
    SET_GPR_U32(ctx, 31, 0x317C64u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C64u; }
        if (ctx->pc != 0x317C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C64u; }
        if (ctx->pc != 0x317C64u) { return; }
    }
    ctx->pc = 0x317C64u;
label_317c64:
    // 0x317c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317c68:
    // 0x317c68: 0xc0bd920  jal         func_2F6480
label_317c6c:
    if (ctx->pc == 0x317C6Cu) {
        ctx->pc = 0x317C6Cu;
            // 0x317c6c: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->pc = 0x317C70u;
        goto label_317c70;
    }
    ctx->pc = 0x317C68u;
    SET_GPR_U32(ctx, 31, 0x317C70u);
    ctx->pc = 0x317C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C68u;
            // 0x317c6c: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C70u; }
        if (ctx->pc != 0x317C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C70u; }
        if (ctx->pc != 0x317C70u) { return; }
    }
    ctx->pc = 0x317C70u;
label_317c70:
    // 0x317c70: 0xc064220  jal         func_190880
label_317c74:
    if (ctx->pc == 0x317C74u) {
        ctx->pc = 0x317C74u;
            // 0x317c74: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x317C78u;
        goto label_317c78;
    }
    ctx->pc = 0x317C70u;
    SET_GPR_U32(ctx, 31, 0x317C78u);
    ctx->pc = 0x317C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C70u;
            // 0x317c74: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C78u; }
        if (ctx->pc != 0x317C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C78u; }
        if (ctx->pc != 0x317C78u) { return; }
    }
    ctx->pc = 0x317C78u;
label_317c78:
    // 0x317c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317c7c:
    // 0x317c7c: 0xc0bd920  jal         func_2F6480
label_317c80:
    if (ctx->pc == 0x317C80u) {
        ctx->pc = 0x317C80u;
            // 0x317c80: 0x24050218  addiu       $a1, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->pc = 0x317C84u;
        goto label_317c84;
    }
    ctx->pc = 0x317C7Cu;
    SET_GPR_U32(ctx, 31, 0x317C84u);
    ctx->pc = 0x317C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C7Cu;
            // 0x317c80: 0x24050218  addiu       $a1, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C84u; }
        if (ctx->pc != 0x317C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C84u; }
        if (ctx->pc != 0x317C84u) { return; }
    }
    ctx->pc = 0x317C84u;
label_317c84:
    // 0x317c84: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x317c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_317c88:
    // 0x317c88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317c8c:
    // 0x317c8c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x317c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_317c90:
    // 0x317c90: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x317c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_317c94:
    // 0x317c94: 0xc0c5b44  jal         func_316D10
label_317c98:
    if (ctx->pc == 0x317C98u) {
        ctx->pc = 0x317C98u;
            // 0x317c98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317C9Cu;
        goto label_317c9c;
    }
    ctx->pc = 0x317C94u;
    SET_GPR_U32(ctx, 31, 0x317C9Cu);
    ctx->pc = 0x317C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317C94u;
            // 0x317c98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316D10u;
    if (runtime->hasFunction(0x316D10u)) {
        auto targetFn = runtime->lookupFunction(0x316D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C9Cu; }
        if (ctx->pc != 0x317C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHouseParts__FP8CEditMapPii_0x316d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317C9Cu; }
        if (ctx->pc != 0x317C9Cu) { return; }
    }
    ctx->pc = 0x317C9Cu;
label_317c9c:
    // 0x317c9c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x317c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_317ca0:
    // 0x317ca0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x317ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_317ca4:
    // 0x317ca4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x317ca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317ca8:
    // 0x317ca8: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_317cac:
    if (ctx->pc == 0x317CACu) {
        ctx->pc = 0x317CACu;
            // 0x317cac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317CB0u;
        goto label_317cb0;
    }
    ctx->pc = 0x317CA8u;
    {
        const bool branch_taken_0x317ca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317CA8u;
            // 0x317cac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ca8) {
            ctx->pc = 0x317E84u;
            goto label_317e84;
        }
    }
    ctx->pc = 0x317CB0u;
label_317cb0:
    // 0x317cb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x317cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317cb4:
    // 0x317cb4: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x317cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_317cb8:
    // 0x317cb8: 0x245402e0  addiu       $s4, $v0, 0x2E0
    ctx->pc = 0x317cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
label_317cbc:
    // 0x317cbc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x317cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_317cc0:
    // 0x317cc0: 0xc06c310  jal         func_1B0C40
label_317cc4:
    if (ctx->pc == 0x317CC4u) {
        ctx->pc = 0x317CC4u;
            // 0x317cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317CC8u;
        goto label_317cc8;
    }
    ctx->pc = 0x317CC0u;
    SET_GPR_U32(ctx, 31, 0x317CC8u);
    ctx->pc = 0x317CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317CC0u;
            // 0x317cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317CC8u; }
        if (ctx->pc != 0x317CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317CC8u; }
        if (ctx->pc != 0x317CC8u) { return; }
    }
    ctx->pc = 0x317CC8u;
label_317cc8:
    // 0x317cc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317ccc:
    // 0x317ccc: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
label_317cd0:
    if (ctx->pc == 0x317CD0u) {
        ctx->pc = 0x317CD4u;
        goto label_317cd4;
    }
    ctx->pc = 0x317CCCu;
    {
        const bool branch_taken_0x317ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ccc) {
            ctx->pc = 0x317E6Cu;
            goto label_317e6c;
        }
    }
    ctx->pc = 0x317CD4u;
label_317cd4:
    // 0x317cd4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x317cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_317cd8:
    // 0x317cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317cdc:
    // 0x317cdc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x317cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_317ce0:
    // 0x317ce0: 0x320f809  jalr        $t9
label_317ce4:
    if (ctx->pc == 0x317CE4u) {
        ctx->pc = 0x317CE4u;
            // 0x317ce4: 0x27a512e0  addiu       $a1, $sp, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4832));
        ctx->pc = 0x317CE8u;
        goto label_317ce8;
    }
    ctx->pc = 0x317CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x317CE8u);
        ctx->pc = 0x317CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317CE0u;
            // 0x317ce4: 0x27a512e0  addiu       $a1, $sp, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4832));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x317CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x317CE8u; }
            if (ctx->pc != 0x317CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x317CE8u;
label_317ce8:
    // 0x317ce8: 0xc7a112e4  lwc1        $f1, 0x12E4($sp)
    ctx->pc = 0x317ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317cec:
    // 0x317cec: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x317cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_317cf0:
    // 0x317cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317cf4:
    // 0x317cf4: 0x0  nop
    ctx->pc = 0x317cf4u;
    // NOP
label_317cf8:
    // 0x317cf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317cfc:
    // 0x317cfc: 0x0  nop
    ctx->pc = 0x317cfcu;
    // NOP
label_317d00:
    // 0x317d00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_317d04:
    if (ctx->pc == 0x317D04u) {
        ctx->pc = 0x317D04u;
            // 0x317d04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x317D08u;
        goto label_317d08;
    }
    ctx->pc = 0x317D00u;
    {
        const bool branch_taken_0x317d00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D00u;
            // 0x317d04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d00) {
            ctx->pc = 0x317D10u;
            goto label_317d10;
        }
    }
    ctx->pc = 0x317D08u;
label_317d08:
    // 0x317d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317d0c:
    // 0x317d0c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x317d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_317d10:
    // 0x317d10: 0x3c024327  lui         $v0, 0x4327
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17191 << 16));
label_317d14:
    // 0x317d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d18:
    // 0x317d18: 0x0  nop
    ctx->pc = 0x317d18u;
    // NOP
label_317d1c:
    // 0x317d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317d20:
    // 0x317d20: 0x0  nop
    ctx->pc = 0x317d20u;
    // NOP
label_317d24:
    // 0x317d24: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_317d28:
    if (ctx->pc == 0x317D28u) {
        ctx->pc = 0x317D28u;
            // 0x317d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317D2Cu;
        goto label_317d2c;
    }
    ctx->pc = 0x317D24u;
    {
        const bool branch_taken_0x317d24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D24u;
            // 0x317d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d24) {
            ctx->pc = 0x317D40u;
            goto label_317d40;
        }
    }
    ctx->pc = 0x317D2Cu;
label_317d2c:
    // 0x317d2c: 0xc06d69c  jal         func_1B5A70
label_317d30:
    if (ctx->pc == 0x317D30u) {
        ctx->pc = 0x317D34u;
        goto label_317d34;
    }
    ctx->pc = 0x317D2Cu;
    SET_GPR_U32(ctx, 31, 0x317D34u);
    ctx->pc = 0x1B5A70u;
    if (runtime->hasFunction(0x1B5A70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D34u; }
        if (ctx->pc != 0x317D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLiveNPC__10CEditPartsFv_0x1b5a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D34u; }
        if (ctx->pc != 0x317D34u) { return; }
    }
    ctx->pc = 0x317D34u;
label_317d34:
    // 0x317d34: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_317d38:
    if (ctx->pc == 0x317D38u) {
        ctx->pc = 0x317D38u;
            // 0x317d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317D3Cu;
        goto label_317d3c;
    }
    ctx->pc = 0x317D34u;
    {
        const bool branch_taken_0x317d34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x317D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D34u;
            // 0x317d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d34) {
            ctx->pc = 0x317D40u;
            goto label_317d40;
        }
    }
    ctx->pc = 0x317D3Cu;
label_317d3c:
    // 0x317d3c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x317d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_317d40:
    // 0x317d40: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x317d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_317d44:
    // 0x317d44: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x317d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_317d48:
    // 0x317d48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317d4c:
    // 0x317d4c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x317d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_317d50:
    // 0x317d50: 0x27a60ae0  addiu       $a2, $sp, 0xAE0
    ctx->pc = 0x317d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
label_317d54:
    // 0x317d54: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x317d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_317d58:
    // 0x317d58: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x317d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_317d5c:
    // 0x317d5c: 0xc0bba8c  jal         func_2EEA30
label_317d60:
    if (ctx->pc == 0x317D60u) {
        ctx->pc = 0x317D60u;
            // 0x317d60: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317D64u;
        goto label_317d64;
    }
    ctx->pc = 0x317D5Cu;
    SET_GPR_U32(ctx, 31, 0x317D64u);
    ctx->pc = 0x317D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317D5Cu;
            // 0x317d60: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA30u;
    if (runtime->hasFunction(0x2EEA30u)) {
        auto targetFn = runtime->lookupFunction(0x2EEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D64u; }
        if (ctx->pc != 0x317D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChildParts__8CEditMapFiPii_0x2eea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D64u; }
        if (ctx->pc != 0x317D64u) { return; }
    }
    ctx->pc = 0x317D64u;
label_317d64:
    // 0x317d64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d68:
    // 0x317d68: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x317d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_317d6c:
    // 0x317d6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x317d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317d70:
    // 0x317d70: 0x27a60ae0  addiu       $a2, $sp, 0xAE0
    ctx->pc = 0x317d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
label_317d74:
    // 0x317d74: 0xc0c5ad0  jal         func_316B40
label_317d78:
    if (ctx->pc == 0x317D78u) {
        ctx->pc = 0x317D78u;
            // 0x317d78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317D7Cu;
        goto label_317d7c;
    }
    ctx->pc = 0x317D74u;
    SET_GPR_U32(ctx, 31, 0x317D7Cu);
    ctx->pc = 0x317D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317D74u;
            // 0x317d78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D7Cu; }
        if (ctx->pc != 0x317D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D7Cu; }
        if (ctx->pc != 0x317D7Cu) { return; }
    }
    ctx->pc = 0x317D7Cu;
label_317d7c:
    // 0x317d7c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_317d80:
    if (ctx->pc == 0x317D80u) {
        ctx->pc = 0x317D80u;
            // 0x317d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317D84u;
        goto label_317d84;
    }
    ctx->pc = 0x317D7Cu;
    {
        const bool branch_taken_0x317d7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x317D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D7Cu;
            // 0x317d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d7c) {
            ctx->pc = 0x317D88u;
            goto label_317d88;
        }
    }
    ctx->pc = 0x317D84u;
label_317d84:
    // 0x317d84: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x317d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_317d88:
    // 0x317d88: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x317d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_317d8c:
    // 0x317d8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x317d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317d90:
    // 0x317d90: 0x27a60ae0  addiu       $a2, $sp, 0xAE0
    ctx->pc = 0x317d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
label_317d94:
    // 0x317d94: 0xc0c5ad0  jal         func_316B40
label_317d98:
    if (ctx->pc == 0x317D98u) {
        ctx->pc = 0x317D98u;
            // 0x317d98: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317D9Cu;
        goto label_317d9c;
    }
    ctx->pc = 0x317D94u;
    SET_GPR_U32(ctx, 31, 0x317D9Cu);
    ctx->pc = 0x317D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317D94u;
            // 0x317d98: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D9Cu; }
        if (ctx->pc != 0x317D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317D9Cu; }
        if (ctx->pc != 0x317D9Cu) { return; }
    }
    ctx->pc = 0x317D9Cu;
label_317d9c:
    // 0x317d9c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_317da0:
    if (ctx->pc == 0x317DA0u) {
        ctx->pc = 0x317DA0u;
            // 0x317da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317DA4u;
        goto label_317da4;
    }
    ctx->pc = 0x317D9Cu;
    {
        const bool branch_taken_0x317d9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x317DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D9Cu;
            // 0x317da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d9c) {
            ctx->pc = 0x317DA8u;
            goto label_317da8;
        }
    }
    ctx->pc = 0x317DA4u;
label_317da4:
    // 0x317da4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x317da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_317da8:
    // 0x317da8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x317da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_317dac:
    // 0x317dac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x317dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_317db0:
    // 0x317db0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x317db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317db4:
    // 0x317db4: 0xc0c5aa0  jal         func_316A80
label_317db8:
    if (ctx->pc == 0x317DB8u) {
        ctx->pc = 0x317DB8u;
            // 0x317db8: 0x27a60ae0  addiu       $a2, $sp, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
        ctx->pc = 0x317DBCu;
        goto label_317dbc;
    }
    ctx->pc = 0x317DB4u;
    SET_GPR_U32(ctx, 31, 0x317DBCu);
    ctx->pc = 0x317DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317DB4u;
            // 0x317db8: 0x27a60ae0  addiu       $a2, $sp, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316A80u;
    if (runtime->hasFunction(0x316A80u)) {
        auto targetFn = runtime->lookupFunction(0x316A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317DBCu; }
        if (ctx->pc != 0x317DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsType__FiP8CEditMapPii_0x316a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317DBCu; }
        if (ctx->pc != 0x317DBCu) { return; }
    }
    ctx->pc = 0x317DBCu;
label_317dbc:
    // 0x317dbc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_317dc0:
    if (ctx->pc == 0x317DC0u) {
        ctx->pc = 0x317DC0u;
            // 0x317dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317DC4u;
        goto label_317dc4;
    }
    ctx->pc = 0x317DBCu;
    {
        const bool branch_taken_0x317dbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x317DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317DBCu;
            // 0x317dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dbc) {
            ctx->pc = 0x317DC8u;
            goto label_317dc8;
        }
    }
    ctx->pc = 0x317DC4u;
label_317dc4:
    // 0x317dc4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x317dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_317dc8:
    // 0x317dc8: 0xc06d69c  jal         func_1B5A70
label_317dcc:
    if (ctx->pc == 0x317DCCu) {
        ctx->pc = 0x317DCCu;
            // 0x317dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317DD0u;
        goto label_317dd0;
    }
    ctx->pc = 0x317DC8u;
    SET_GPR_U32(ctx, 31, 0x317DD0u);
    ctx->pc = 0x317DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317DC8u;
            // 0x317dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A70u;
    if (runtime->hasFunction(0x1B5A70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317DD0u; }
        if (ctx->pc != 0x317DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLiveNPC__10CEditPartsFv_0x1b5a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317DD0u; }
        if (ctx->pc != 0x317DD0u) { return; }
    }
    ctx->pc = 0x317DD0u;
label_317dd0:
    // 0x317dd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317dd4:
    // 0x317dd4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x317dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_317dd8:
    // 0x317dd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_317ddc:
    if (ctx->pc == 0x317DDCu) {
        ctx->pc = 0x317DE0u;
        goto label_317de0;
    }
    ctx->pc = 0x317DD8u;
    {
        const bool branch_taken_0x317dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317dd8) {
            ctx->pc = 0x317DECu;
            goto label_317dec;
        }
    }
    ctx->pc = 0x317DE0u;
label_317de0:
    // 0x317de0: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
label_317de4:
    if (ctx->pc == 0x317DE4u) {
        ctx->pc = 0x317DE4u;
            // 0x317de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317DE8u;
        goto label_317de8;
    }
    ctx->pc = 0x317DE0u;
    {
        const bool branch_taken_0x317de0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x317DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317DE0u;
            // 0x317de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317de0) {
            ctx->pc = 0x317DECu;
            goto label_317dec;
        }
    }
    ctx->pc = 0x317DE8u;
label_317de8:
    // 0x317de8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x317de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_317dec:
    // 0x317dec: 0x0  nop
    ctx->pc = 0x317decu;
    // NOP
label_317df0:
    // 0x317df0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x317df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_317df4:
    // 0x317df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_317df8:
    if (ctx->pc == 0x317DF8u) {
        ctx->pc = 0x317DFCu;
        goto label_317dfc;
    }
    ctx->pc = 0x317DF4u;
    {
        const bool branch_taken_0x317df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317df4) {
            ctx->pc = 0x317E08u;
            goto label_317e08;
        }
    }
    ctx->pc = 0x317DFCu;
label_317dfc:
    // 0x317dfc: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
label_317e00:
    if (ctx->pc == 0x317E00u) {
        ctx->pc = 0x317E00u;
            // 0x317e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317E04u;
        goto label_317e04;
    }
    ctx->pc = 0x317DFCu;
    {
        const bool branch_taken_0x317dfc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x317E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317DFCu;
            // 0x317e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dfc) {
            ctx->pc = 0x317E08u;
            goto label_317e08;
        }
    }
    ctx->pc = 0x317E04u;
label_317e04:
    // 0x317e04: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x317e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_317e08:
    // 0x317e08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x317e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_317e0c:
    // 0x317e0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_317e10:
    if (ctx->pc == 0x317E10u) {
        ctx->pc = 0x317E14u;
        goto label_317e14;
    }
    ctx->pc = 0x317E0Cu;
    {
        const bool branch_taken_0x317e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e0c) {
            ctx->pc = 0x317E20u;
            goto label_317e20;
        }
    }
    ctx->pc = 0x317E14u;
label_317e14:
    // 0x317e14: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
label_317e18:
    if (ctx->pc == 0x317E18u) {
        ctx->pc = 0x317E18u;
            // 0x317e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317E1Cu;
        goto label_317e1c;
    }
    ctx->pc = 0x317E14u;
    {
        const bool branch_taken_0x317e14 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x317E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317E14u;
            // 0x317e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e14) {
            ctx->pc = 0x317E20u;
            goto label_317e20;
        }
    }
    ctx->pc = 0x317E1Cu;
label_317e1c:
    // 0x317e1c: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x317e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_317e20:
    // 0x317e20: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x317e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_317e24:
    // 0x317e24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317e28:
    // 0x317e28: 0x27a60ae0  addiu       $a2, $sp, 0xAE0
    ctx->pc = 0x317e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
label_317e2c:
    // 0x317e2c: 0xc0bba48  jal         func_2EE920
label_317e30:
    if (ctx->pc == 0x317E30u) {
        ctx->pc = 0x317E30u;
            // 0x317e30: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x317E34u;
        goto label_317e34;
    }
    ctx->pc = 0x317E2Cu;
    SET_GPR_U32(ctx, 31, 0x317E34u);
    ctx->pc = 0x317E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317E2Cu;
            // 0x317e30: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317E34u; }
        if (ctx->pc != 0x317E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317E34u; }
        if (ctx->pc != 0x317E34u) { return; }
    }
    ctx->pc = 0x317E34u;
label_317e34:
    // 0x317e34: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_317e38:
    // 0x317e38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x317e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317e3c:
    // 0x317e3c: 0x27a60ae0  addiu       $a2, $sp, 0xAE0
    ctx->pc = 0x317e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
label_317e40:
    // 0x317e40: 0xc0c5ad0  jal         func_316B40
label_317e44:
    if (ctx->pc == 0x317E44u) {
        ctx->pc = 0x317E44u;
            // 0x317e44: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317E48u;
        goto label_317e48;
    }
    ctx->pc = 0x317E40u;
    SET_GPR_U32(ctx, 31, 0x317E48u);
    ctx->pc = 0x317E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317E40u;
            // 0x317e44: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317E48u; }
        if (ctx->pc != 0x317E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317E48u; }
        if (ctx->pc != 0x317E48u) { return; }
    }
    ctx->pc = 0x317E48u;
label_317e48:
    // 0x317e48: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_317e4c:
    if (ctx->pc == 0x317E4Cu) {
        ctx->pc = 0x317E50u;
        goto label_317e50;
    }
    ctx->pc = 0x317E48u;
    {
        const bool branch_taken_0x317e48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x317e48) {
            ctx->pc = 0x317E54u;
            goto label_317e54;
        }
    }
    ctx->pc = 0x317E50u;
label_317e50:
    // 0x317e50: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x317e50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317e54:
    // 0x317e54: 0x0  nop
    ctx->pc = 0x317e54u;
    // NOP
label_317e58:
    // 0x317e58: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_317e5c:
    if (ctx->pc == 0x317E5Cu) {
        ctx->pc = 0x317E5Cu;
            // 0x317e5c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x317E60u;
        goto label_317e60;
    }
    ctx->pc = 0x317E58u;
    {
        const bool branch_taken_0x317e58 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317E58u;
            // 0x317e5c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e58) {
            ctx->pc = 0x317E6Cu;
            goto label_317e6c;
        }
    }
    ctx->pc = 0x317E60u;
label_317e60:
    // 0x317e60: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_317e64:
    if (ctx->pc == 0x317E64u) {
        ctx->pc = 0x317E64u;
            // 0x317e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317E68u;
        goto label_317e68;
    }
    ctx->pc = 0x317E60u;
    {
        const bool branch_taken_0x317e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x317E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317E60u;
            // 0x317e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e60) {
            ctx->pc = 0x317E6Cu;
            goto label_317e6c;
        }
    }
    ctx->pc = 0x317E68u;
label_317e68:
    // 0x317e68: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x317e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_317e6c:
    // 0x317e6c: 0x0  nop
    ctx->pc = 0x317e6cu;
    // NOP
label_317e70:
    // 0x317e70: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x317e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_317e74:
    // 0x317e74: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x317e74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_317e78:
    // 0x317e78: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x317e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317e7c:
    // 0x317e7c: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
label_317e80:
    if (ctx->pc == 0x317E80u) {
        ctx->pc = 0x317E80u;
            // 0x317e80: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x317E84u;
        goto label_317e84;
    }
    ctx->pc = 0x317E7Cu;
    {
        const bool branch_taken_0x317e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317E7Cu;
            // 0x317e80: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e7c) {
            ctx->pc = 0x317CB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317cb4;
        }
    }
    ctx->pc = 0x317E84u;
label_317e84:
    // 0x317e84: 0x0  nop
    ctx->pc = 0x317e84u;
    // NOP
label_317e88:
    // 0x317e88: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x317e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_317e8c:
    // 0x317e8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317e90:
    // 0x317e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317e94:
    // 0x317e94: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x317e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317e98:
    // 0x317e98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x317e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_317e9c:
    // 0x317e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317ea0:
    // 0x317ea0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x317ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_317ea4:
    // 0x317ea4: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x317ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_317ea8:
    // 0x317ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x317ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317eac:
    // 0x317eac: 0xc0bb998  jal         func_2EE660
label_317eb0:
    if (ctx->pc == 0x317EB0u) {
        ctx->pc = 0x317EB0u;
            // 0x317eb0: 0xafa001e8  sw          $zero, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
        ctx->pc = 0x317EB4u;
        goto label_317eb4;
    }
    ctx->pc = 0x317EACu;
    SET_GPR_U32(ctx, 31, 0x317EB4u);
    ctx->pc = 0x317EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EACu;
            // 0x317eb0: 0xafa001e8  sw          $zero, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EB4u; }
        if (ctx->pc != 0x317EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EB4u; }
        if (ctx->pc != 0x317EB4u) { return; }
    }
    ctx->pc = 0x317EB4u;
label_317eb4:
    // 0x317eb4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x317eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_317eb8:
    // 0x317eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317ebc:
    // 0x317ebc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x317ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_317ec0:
    // 0x317ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317ec4:
    // 0x317ec4: 0xc0bb9dc  jal         func_2EE770
label_317ec8:
    if (ctx->pc == 0x317EC8u) {
        ctx->pc = 0x317EC8u;
            // 0x317ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317ECCu;
        goto label_317ecc;
    }
    ctx->pc = 0x317EC4u;
    SET_GPR_U32(ctx, 31, 0x317ECCu);
    ctx->pc = 0x317EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EC4u;
            // 0x317ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317ECCu; }
        if (ctx->pc != 0x317ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317ECCu; }
        if (ctx->pc != 0x317ECCu) { return; }
    }
    ctx->pc = 0x317ECCu;
label_317ecc:
    // 0x317ecc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_317ed0:
    if (ctx->pc == 0x317ED0u) {
        ctx->pc = 0x317ED0u;
            // 0x317ed0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317ED4u;
        goto label_317ed4;
    }
    ctx->pc = 0x317ECCu;
    {
        const bool branch_taken_0x317ecc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x317ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317ECCu;
            // 0x317ed0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ecc) {
            ctx->pc = 0x317EDCu;
            goto label_317edc;
        }
    }
    ctx->pc = 0x317ED4u;
label_317ed4:
    // 0x317ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317ed8:
    // 0x317ed8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x317ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_317edc:
    // 0x317edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x317edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317ee0:
    // 0x317ee0: 0xc0bb998  jal         func_2EE660
label_317ee4:
    if (ctx->pc == 0x317EE4u) {
        ctx->pc = 0x317EE4u;
            // 0x317ee4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x317EE8u;
        goto label_317ee8;
    }
    ctx->pc = 0x317EE0u;
    SET_GPR_U32(ctx, 31, 0x317EE8u);
    ctx->pc = 0x317EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317EE0u;
            // 0x317ee4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EE8u; }
        if (ctx->pc != 0x317EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317EE8u; }
        if (ctx->pc != 0x317EE8u) { return; }
    }
    ctx->pc = 0x317EE8u;
label_317ee8:
    // 0x317ee8: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x317ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_317eec:
    // 0x317eec: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x317eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_317ef0:
    // 0x317ef0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x317ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_317ef4:
    // 0x317ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317ef8:
    // 0x317ef8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x317ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_317efc:
    // 0x317efc: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x317efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_317f00:
    // 0x317f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317f04:
    // 0x317f04: 0xc0bb9dc  jal         func_2EE770
label_317f08:
    if (ctx->pc == 0x317F08u) {
        ctx->pc = 0x317F08u;
            // 0x317f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317F0Cu;
        goto label_317f0c;
    }
    ctx->pc = 0x317F04u;
    SET_GPR_U32(ctx, 31, 0x317F0Cu);
    ctx->pc = 0x317F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F04u;
            // 0x317f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F0Cu; }
        if (ctx->pc != 0x317F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F0Cu; }
        if (ctx->pc != 0x317F0Cu) { return; }
    }
    ctx->pc = 0x317F0Cu;
label_317f0c:
    // 0x317f0c: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x317f0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_317f10:
    // 0x317f10: 0x27b10210  addiu       $s1, $sp, 0x210
    ctx->pc = 0x317f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_317f14:
    // 0x317f14: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x317f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_317f18:
    // 0x317f18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x317f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_317f1c:
    // 0x317f1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x317f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_317f20:
    // 0x317f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317f24:
    // 0x317f24: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x317f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_317f28:
    // 0x317f28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x317f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_317f2c:
    // 0x317f2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x317f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_317f30:
    // 0x317f30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317f34:
    // 0x317f34: 0xc0bb9dc  jal         func_2EE770
label_317f38:
    if (ctx->pc == 0x317F38u) {
        ctx->pc = 0x317F38u;
            // 0x317f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317F3Cu;
        goto label_317f3c;
    }
    ctx->pc = 0x317F34u;
    SET_GPR_U32(ctx, 31, 0x317F3Cu);
    ctx->pc = 0x317F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F34u;
            // 0x317f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F3Cu; }
        if (ctx->pc != 0x317F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F3Cu; }
        if (ctx->pc != 0x317F3Cu) { return; }
    }
    ctx->pc = 0x317F3Cu;
label_317f3c:
    // 0x317f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317f40:
    // 0x317f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317f44:
    // 0x317f44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x317f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_317f48:
    // 0x317f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317f4c:
    // 0x317f4c: 0xc0bb9dc  jal         func_2EE770
label_317f50:
    if (ctx->pc == 0x317F50u) {
        ctx->pc = 0x317F50u;
            // 0x317f50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317F54u;
        goto label_317f54;
    }
    ctx->pc = 0x317F4Cu;
    SET_GPR_U32(ctx, 31, 0x317F54u);
    ctx->pc = 0x317F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F4Cu;
            // 0x317f50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F54u; }
        if (ctx->pc != 0x317F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F54u; }
        if (ctx->pc != 0x317F54u) { return; }
    }
    ctx->pc = 0x317F54u;
label_317f54:
    // 0x317f54: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x317f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_317f58:
    // 0x317f58: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x317f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_317f5c:
    // 0x317f5c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x317f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_317f60:
    // 0x317f60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317f64:
    // 0x317f64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317f68:
    // 0x317f68: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x317f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_317f6c:
    // 0x317f6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317f70:
    // 0x317f70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x317f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317f74:
    // 0x317f74: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x317f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_317f78:
    // 0x317f78: 0xc0bb998  jal         func_2EE660
label_317f7c:
    if (ctx->pc == 0x317F7Cu) {
        ctx->pc = 0x317F7Cu;
            // 0x317f7c: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->pc = 0x317F80u;
        goto label_317f80;
    }
    ctx->pc = 0x317F78u;
    SET_GPR_U32(ctx, 31, 0x317F80u);
    ctx->pc = 0x317F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317F78u;
            // 0x317f7c: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F80u; }
        if (ctx->pc != 0x317F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317F80u; }
        if (ctx->pc != 0x317F80u) { return; }
    }
    ctx->pc = 0x317F80u;
label_317f80:
    // 0x317f80: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x317f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_317f84:
    // 0x317f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x317f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_317f88:
    // 0x317f88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x317f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_317f8c:
    // 0x317f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x317f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_317f90:
    // 0x317f90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_317f94:
    // 0x317f94: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x317f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_317f98:
    // 0x317f98: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x317f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_317f9c:
    // 0x317f9c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x317f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_317fa0:
    // 0x317fa0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x317fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_317fa4:
    // 0x317fa4: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x317fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_317fa8:
    // 0x317fa8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317fac:
    // 0x317fac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317fb0:
    // 0x317fb0: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x317fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_317fb4:
    // 0x317fb4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x317fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_317fb8:
    // 0x317fb8: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x317fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_317fbc:
    // 0x317fbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317fc0:
    // 0x317fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317fc4:
    // 0x317fc4: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x317fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_317fc8:
    // 0x317fc8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x317fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_317fcc:
    // 0x317fcc: 0x28420046  slti        $v0, $v0, 0x46
    ctx->pc = 0x317fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)70) ? 1 : 0);
label_317fd0:
    // 0x317fd0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317fd4:
    // 0x317fd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317fd8:
    // 0x317fd8: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x317fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_317fdc:
    // 0x317fdc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x317fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_317fe0:
    // 0x317fe0: 0x28420050  slti        $v0, $v0, 0x50
    ctx->pc = 0x317fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
label_317fe4:
    // 0x317fe4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317fe8:
    // 0x317fe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317fec:
    // 0x317fec: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x317fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_317ff0:
    // 0x317ff0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_317ff4:
    // 0x317ff4: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x317ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_317ff8:
    // 0x317ff8: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x317ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
label_317ffc:
    // 0x317ffc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_318000:
    // 0x318000: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x318000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_318004:
    // 0x318004: 0xc0aa7f4  jal         func_2A9FD0
label_318008:
    if (ctx->pc == 0x318008u) {
        ctx->pc = 0x318008u;
            // 0x318008: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x31800Cu;
        goto label_31800c;
    }
    ctx->pc = 0x318004u;
    SET_GPR_U32(ctx, 31, 0x31800Cu);
    ctx->pc = 0x318008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318004u;
            // 0x318008: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31800Cu; }
        if (ctx->pc != 0x31800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31800Cu; }
        if (ctx->pc != 0x31800Cu) { return; }
    }
    ctx->pc = 0x31800Cu;
label_31800c:
    // 0x31800c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31800cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318010:
    // 0x318010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x318010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318014:
    // 0x318014: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x318014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_318018:
    // 0x318018: 0x2e62821  addu        $a1, $s7, $a2
    ctx->pc = 0x318018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
label_31801c:
    // 0x31801c: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x31801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_318020:
    // 0x318020: 0x80a35050  lb          $v1, 0x5050($a1)
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20560)));
label_318024:
    // 0x318024: 0x244800e0  addiu       $t0, $v0, 0xE0
    ctx->pc = 0x318024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_318028:
    // 0x318028: 0x244901e0  addiu       $t1, $v0, 0x1E0
    ctx->pc = 0x318028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_31802c:
    // 0x31802c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x31802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_318030:
    // 0x318030: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x318030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
label_318034:
    // 0x318034: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x318034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_318038:
    // 0x318038: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x318038u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_31803c:
    // 0x31803c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x31803cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_318040:
    // 0x318040: 0x80a35051  lb          $v1, 0x5051($a1)
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20561)));
label_318044:
    // 0x318044: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x318044u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_318048:
    // 0x318048: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x318048u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_31804c:
    // 0x31804c: 0x80a35052  lb          $v1, 0x5052($a1)
    ctx->pc = 0x31804cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20562)));
label_318050:
    // 0x318050: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x318050u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_318054:
    // 0x318054: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x318054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
label_318058:
    // 0x318058: 0x80a35053  lb          $v1, 0x5053($a1)
    ctx->pc = 0x318058u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20563)));
label_31805c:
    // 0x31805c: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x31805cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_318060:
    // 0x318060: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x318060u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
label_318064:
    // 0x318064: 0x80a35054  lb          $v1, 0x5054($a1)
    ctx->pc = 0x318064u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20564)));
label_318068:
    // 0x318068: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x318068u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_31806c:
    // 0x31806c: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x31806cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_318070:
    // 0x318070: 0x80a35055  lb          $v1, 0x5055($a1)
    ctx->pc = 0x318070u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20565)));
label_318074:
    // 0x318074: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x318074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_318078:
    // 0x318078: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x318078u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
label_31807c:
    // 0x31807c: 0x80a35056  lb          $v1, 0x5056($a1)
    ctx->pc = 0x31807cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20566)));
label_318080:
    // 0x318080: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x318080u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_318084:
    // 0x318084: 0xad240018  sw          $a0, 0x18($t1)
    ctx->pc = 0x318084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
label_318088:
    // 0x318088: 0x80a35057  lb          $v1, 0x5057($a1)
    ctx->pc = 0x318088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20567)));
label_31808c:
    // 0x31808c: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x31808cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_318090:
    // 0x318090: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_318094:
    if (ctx->pc == 0x318094u) {
        ctx->pc = 0x318094u;
            // 0x318094: 0xad24001c  sw          $a0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 4));
        ctx->pc = 0x318098u;
        goto label_318098;
    }
    ctx->pc = 0x318090u;
    {
        const bool branch_taken_0x318090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318090u;
            // 0x318094: 0xad24001c  sw          $a0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318090) {
            ctx->pc = 0x318018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318018;
        }
    }
    ctx->pc = 0x318098u;
label_318098:
    // 0x318098: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x318098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31809c:
    // 0x31809c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3180a0:
    // 0x3180a0: 0xc0aa894  jal         func_2AA250
label_3180a4:
    if (ctx->pc == 0x3180A4u) {
        ctx->pc = 0x3180A4u;
            // 0x3180a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3180A8u;
        goto label_3180a8;
    }
    ctx->pc = 0x3180A0u;
    SET_GPR_U32(ctx, 31, 0x3180A8u);
    ctx->pc = 0x3180A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180A0u;
            // 0x3180a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180A8u; }
        if (ctx->pc != 0x3180A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180A8u; }
        if (ctx->pc != 0x3180A8u) { return; }
    }
    ctx->pc = 0x3180A8u;
label_3180a8:
    // 0x3180a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3180a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3180ac:
    // 0x3180ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3180acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3180b0:
    // 0x3180b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3180b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3180b4:
    // 0x3180b4: 0xc0aa894  jal         func_2AA250
label_3180b8:
    if (ctx->pc == 0x3180B8u) {
        ctx->pc = 0x3180B8u;
            // 0x3180b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3180BCu;
        goto label_3180bc;
    }
    ctx->pc = 0x3180B4u;
    SET_GPR_U32(ctx, 31, 0x3180BCu);
    ctx->pc = 0x3180B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180B4u;
            // 0x3180b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180BCu; }
        if (ctx->pc != 0x3180BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180BCu; }
        if (ctx->pc != 0x3180BCu) { return; }
    }
    ctx->pc = 0x3180BCu;
label_3180bc:
    // 0x3180bc: 0x12182b  sltu        $v1, $zero, $s2
    ctx->pc = 0x3180bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3180c0:
    // 0x3180c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3180c4:
    if (ctx->pc == 0x3180C4u) {
        ctx->pc = 0x3180C8u;
        goto label_3180c8;
    }
    ctx->pc = 0x3180C0u;
    {
        const bool branch_taken_0x3180c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3180c0) {
            ctx->pc = 0x3180CCu;
            goto label_3180cc;
        }
    }
    ctx->pc = 0x3180C8u;
label_3180c8:
    // 0x3180c8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3180c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3180cc:
    // 0x3180cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3180ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3180d0:
    // 0x3180d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3180d4:
    // 0x3180d4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x3180d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_3180d8:
    // 0x3180d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3180d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3180dc:
    // 0x3180dc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3180dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_3180e0:
    // 0x3180e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3180e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3180e4:
    // 0x3180e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3180e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3180e8:
    // 0x3180e8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3180e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3180ec:
    // 0x3180ec: 0xc0aa7f4  jal         func_2A9FD0
label_3180f0:
    if (ctx->pc == 0x3180F0u) {
        ctx->pc = 0x3180F0u;
            // 0x3180f0: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x3180F4u;
        goto label_3180f4;
    }
    ctx->pc = 0x3180ECu;
    SET_GPR_U32(ctx, 31, 0x3180F4u);
    ctx->pc = 0x3180F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3180ECu;
            // 0x3180f0: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180F4u; }
        if (ctx->pc != 0x3180F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3180F4u; }
        if (ctx->pc != 0x3180F4u) { return; }
    }
    ctx->pc = 0x3180F4u;
label_3180f4:
    // 0x3180f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3180f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3180f8:
    // 0x3180f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3180f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3180fc:
    // 0x3180fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3180fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_318100:
    // 0x318100: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x318100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_318104:
    // 0x318104: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x318104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_318108:
    // 0x318108: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x318108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31810c:
    // 0x31810c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31810cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_318110:
    // 0x318110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_318114:
    // 0x318114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318118:
    // 0x318118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31811c:
    // 0x31811c: 0x3e00008  jr          $ra
label_318120:
    if (ctx->pc == 0x318120u) {
        ctx->pc = 0x318120u;
            // 0x318120: 0x27bd12f0  addiu       $sp, $sp, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4848));
        ctx->pc = 0x318124u;
        goto label_fallthrough_0x31811c;
    }
    ctx->pc = 0x31811Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31811Cu;
            // 0x318120: 0x27bd12f0  addiu       $sp, $sp, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x31811c:
    ctx->pc = 0x318124u;
}
