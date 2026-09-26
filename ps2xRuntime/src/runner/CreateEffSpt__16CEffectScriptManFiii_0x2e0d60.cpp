#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateEffSpt__16CEffectScriptManFiii
// Address: 0x2e0d60 - 0x2e1260
void CreateEffSpt__16CEffectScriptManFiii_0x2e0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateEffSpt__16CEffectScriptManFiii_0x2e0d60");
#endif

    switch (ctx->pc) {
        case 0x2e0d60u: goto label_2e0d60;
        case 0x2e0d64u: goto label_2e0d64;
        case 0x2e0d68u: goto label_2e0d68;
        case 0x2e0d6cu: goto label_2e0d6c;
        case 0x2e0d70u: goto label_2e0d70;
        case 0x2e0d74u: goto label_2e0d74;
        case 0x2e0d78u: goto label_2e0d78;
        case 0x2e0d7cu: goto label_2e0d7c;
        case 0x2e0d80u: goto label_2e0d80;
        case 0x2e0d84u: goto label_2e0d84;
        case 0x2e0d88u: goto label_2e0d88;
        case 0x2e0d8cu: goto label_2e0d8c;
        case 0x2e0d90u: goto label_2e0d90;
        case 0x2e0d94u: goto label_2e0d94;
        case 0x2e0d98u: goto label_2e0d98;
        case 0x2e0d9cu: goto label_2e0d9c;
        case 0x2e0da0u: goto label_2e0da0;
        case 0x2e0da4u: goto label_2e0da4;
        case 0x2e0da8u: goto label_2e0da8;
        case 0x2e0dacu: goto label_2e0dac;
        case 0x2e0db0u: goto label_2e0db0;
        case 0x2e0db4u: goto label_2e0db4;
        case 0x2e0db8u: goto label_2e0db8;
        case 0x2e0dbcu: goto label_2e0dbc;
        case 0x2e0dc0u: goto label_2e0dc0;
        case 0x2e0dc4u: goto label_2e0dc4;
        case 0x2e0dc8u: goto label_2e0dc8;
        case 0x2e0dccu: goto label_2e0dcc;
        case 0x2e0dd0u: goto label_2e0dd0;
        case 0x2e0dd4u: goto label_2e0dd4;
        case 0x2e0dd8u: goto label_2e0dd8;
        case 0x2e0ddcu: goto label_2e0ddc;
        case 0x2e0de0u: goto label_2e0de0;
        case 0x2e0de4u: goto label_2e0de4;
        case 0x2e0de8u: goto label_2e0de8;
        case 0x2e0decu: goto label_2e0dec;
        case 0x2e0df0u: goto label_2e0df0;
        case 0x2e0df4u: goto label_2e0df4;
        case 0x2e0df8u: goto label_2e0df8;
        case 0x2e0dfcu: goto label_2e0dfc;
        case 0x2e0e00u: goto label_2e0e00;
        case 0x2e0e04u: goto label_2e0e04;
        case 0x2e0e08u: goto label_2e0e08;
        case 0x2e0e0cu: goto label_2e0e0c;
        case 0x2e0e10u: goto label_2e0e10;
        case 0x2e0e14u: goto label_2e0e14;
        case 0x2e0e18u: goto label_2e0e18;
        case 0x2e0e1cu: goto label_2e0e1c;
        case 0x2e0e20u: goto label_2e0e20;
        case 0x2e0e24u: goto label_2e0e24;
        case 0x2e0e28u: goto label_2e0e28;
        case 0x2e0e2cu: goto label_2e0e2c;
        case 0x2e0e30u: goto label_2e0e30;
        case 0x2e0e34u: goto label_2e0e34;
        case 0x2e0e38u: goto label_2e0e38;
        case 0x2e0e3cu: goto label_2e0e3c;
        case 0x2e0e40u: goto label_2e0e40;
        case 0x2e0e44u: goto label_2e0e44;
        case 0x2e0e48u: goto label_2e0e48;
        case 0x2e0e4cu: goto label_2e0e4c;
        case 0x2e0e50u: goto label_2e0e50;
        case 0x2e0e54u: goto label_2e0e54;
        case 0x2e0e58u: goto label_2e0e58;
        case 0x2e0e5cu: goto label_2e0e5c;
        case 0x2e0e60u: goto label_2e0e60;
        case 0x2e0e64u: goto label_2e0e64;
        case 0x2e0e68u: goto label_2e0e68;
        case 0x2e0e6cu: goto label_2e0e6c;
        case 0x2e0e70u: goto label_2e0e70;
        case 0x2e0e74u: goto label_2e0e74;
        case 0x2e0e78u: goto label_2e0e78;
        case 0x2e0e7cu: goto label_2e0e7c;
        case 0x2e0e80u: goto label_2e0e80;
        case 0x2e0e84u: goto label_2e0e84;
        case 0x2e0e88u: goto label_2e0e88;
        case 0x2e0e8cu: goto label_2e0e8c;
        case 0x2e0e90u: goto label_2e0e90;
        case 0x2e0e94u: goto label_2e0e94;
        case 0x2e0e98u: goto label_2e0e98;
        case 0x2e0e9cu: goto label_2e0e9c;
        case 0x2e0ea0u: goto label_2e0ea0;
        case 0x2e0ea4u: goto label_2e0ea4;
        case 0x2e0ea8u: goto label_2e0ea8;
        case 0x2e0eacu: goto label_2e0eac;
        case 0x2e0eb0u: goto label_2e0eb0;
        case 0x2e0eb4u: goto label_2e0eb4;
        case 0x2e0eb8u: goto label_2e0eb8;
        case 0x2e0ebcu: goto label_2e0ebc;
        case 0x2e0ec0u: goto label_2e0ec0;
        case 0x2e0ec4u: goto label_2e0ec4;
        case 0x2e0ec8u: goto label_2e0ec8;
        case 0x2e0eccu: goto label_2e0ecc;
        case 0x2e0ed0u: goto label_2e0ed0;
        case 0x2e0ed4u: goto label_2e0ed4;
        case 0x2e0ed8u: goto label_2e0ed8;
        case 0x2e0edcu: goto label_2e0edc;
        case 0x2e0ee0u: goto label_2e0ee0;
        case 0x2e0ee4u: goto label_2e0ee4;
        case 0x2e0ee8u: goto label_2e0ee8;
        case 0x2e0eecu: goto label_2e0eec;
        case 0x2e0ef0u: goto label_2e0ef0;
        case 0x2e0ef4u: goto label_2e0ef4;
        case 0x2e0ef8u: goto label_2e0ef8;
        case 0x2e0efcu: goto label_2e0efc;
        case 0x2e0f00u: goto label_2e0f00;
        case 0x2e0f04u: goto label_2e0f04;
        case 0x2e0f08u: goto label_2e0f08;
        case 0x2e0f0cu: goto label_2e0f0c;
        case 0x2e0f10u: goto label_2e0f10;
        case 0x2e0f14u: goto label_2e0f14;
        case 0x2e0f18u: goto label_2e0f18;
        case 0x2e0f1cu: goto label_2e0f1c;
        case 0x2e0f20u: goto label_2e0f20;
        case 0x2e0f24u: goto label_2e0f24;
        case 0x2e0f28u: goto label_2e0f28;
        case 0x2e0f2cu: goto label_2e0f2c;
        case 0x2e0f30u: goto label_2e0f30;
        case 0x2e0f34u: goto label_2e0f34;
        case 0x2e0f38u: goto label_2e0f38;
        case 0x2e0f3cu: goto label_2e0f3c;
        case 0x2e0f40u: goto label_2e0f40;
        case 0x2e0f44u: goto label_2e0f44;
        case 0x2e0f48u: goto label_2e0f48;
        case 0x2e0f4cu: goto label_2e0f4c;
        case 0x2e0f50u: goto label_2e0f50;
        case 0x2e0f54u: goto label_2e0f54;
        case 0x2e0f58u: goto label_2e0f58;
        case 0x2e0f5cu: goto label_2e0f5c;
        case 0x2e0f60u: goto label_2e0f60;
        case 0x2e0f64u: goto label_2e0f64;
        case 0x2e0f68u: goto label_2e0f68;
        case 0x2e0f6cu: goto label_2e0f6c;
        case 0x2e0f70u: goto label_2e0f70;
        case 0x2e0f74u: goto label_2e0f74;
        case 0x2e0f78u: goto label_2e0f78;
        case 0x2e0f7cu: goto label_2e0f7c;
        case 0x2e0f80u: goto label_2e0f80;
        case 0x2e0f84u: goto label_2e0f84;
        case 0x2e0f88u: goto label_2e0f88;
        case 0x2e0f8cu: goto label_2e0f8c;
        case 0x2e0f90u: goto label_2e0f90;
        case 0x2e0f94u: goto label_2e0f94;
        case 0x2e0f98u: goto label_2e0f98;
        case 0x2e0f9cu: goto label_2e0f9c;
        case 0x2e0fa0u: goto label_2e0fa0;
        case 0x2e0fa4u: goto label_2e0fa4;
        case 0x2e0fa8u: goto label_2e0fa8;
        case 0x2e0facu: goto label_2e0fac;
        case 0x2e0fb0u: goto label_2e0fb0;
        case 0x2e0fb4u: goto label_2e0fb4;
        case 0x2e0fb8u: goto label_2e0fb8;
        case 0x2e0fbcu: goto label_2e0fbc;
        case 0x2e0fc0u: goto label_2e0fc0;
        case 0x2e0fc4u: goto label_2e0fc4;
        case 0x2e0fc8u: goto label_2e0fc8;
        case 0x2e0fccu: goto label_2e0fcc;
        case 0x2e0fd0u: goto label_2e0fd0;
        case 0x2e0fd4u: goto label_2e0fd4;
        case 0x2e0fd8u: goto label_2e0fd8;
        case 0x2e0fdcu: goto label_2e0fdc;
        case 0x2e0fe0u: goto label_2e0fe0;
        case 0x2e0fe4u: goto label_2e0fe4;
        case 0x2e0fe8u: goto label_2e0fe8;
        case 0x2e0fecu: goto label_2e0fec;
        case 0x2e0ff0u: goto label_2e0ff0;
        case 0x2e0ff4u: goto label_2e0ff4;
        case 0x2e0ff8u: goto label_2e0ff8;
        case 0x2e0ffcu: goto label_2e0ffc;
        case 0x2e1000u: goto label_2e1000;
        case 0x2e1004u: goto label_2e1004;
        case 0x2e1008u: goto label_2e1008;
        case 0x2e100cu: goto label_2e100c;
        case 0x2e1010u: goto label_2e1010;
        case 0x2e1014u: goto label_2e1014;
        case 0x2e1018u: goto label_2e1018;
        case 0x2e101cu: goto label_2e101c;
        case 0x2e1020u: goto label_2e1020;
        case 0x2e1024u: goto label_2e1024;
        case 0x2e1028u: goto label_2e1028;
        case 0x2e102cu: goto label_2e102c;
        case 0x2e1030u: goto label_2e1030;
        case 0x2e1034u: goto label_2e1034;
        case 0x2e1038u: goto label_2e1038;
        case 0x2e103cu: goto label_2e103c;
        case 0x2e1040u: goto label_2e1040;
        case 0x2e1044u: goto label_2e1044;
        case 0x2e1048u: goto label_2e1048;
        case 0x2e104cu: goto label_2e104c;
        case 0x2e1050u: goto label_2e1050;
        case 0x2e1054u: goto label_2e1054;
        case 0x2e1058u: goto label_2e1058;
        case 0x2e105cu: goto label_2e105c;
        case 0x2e1060u: goto label_2e1060;
        case 0x2e1064u: goto label_2e1064;
        case 0x2e1068u: goto label_2e1068;
        case 0x2e106cu: goto label_2e106c;
        case 0x2e1070u: goto label_2e1070;
        case 0x2e1074u: goto label_2e1074;
        case 0x2e1078u: goto label_2e1078;
        case 0x2e107cu: goto label_2e107c;
        case 0x2e1080u: goto label_2e1080;
        case 0x2e1084u: goto label_2e1084;
        case 0x2e1088u: goto label_2e1088;
        case 0x2e108cu: goto label_2e108c;
        case 0x2e1090u: goto label_2e1090;
        case 0x2e1094u: goto label_2e1094;
        case 0x2e1098u: goto label_2e1098;
        case 0x2e109cu: goto label_2e109c;
        case 0x2e10a0u: goto label_2e10a0;
        case 0x2e10a4u: goto label_2e10a4;
        case 0x2e10a8u: goto label_2e10a8;
        case 0x2e10acu: goto label_2e10ac;
        case 0x2e10b0u: goto label_2e10b0;
        case 0x2e10b4u: goto label_2e10b4;
        case 0x2e10b8u: goto label_2e10b8;
        case 0x2e10bcu: goto label_2e10bc;
        case 0x2e10c0u: goto label_2e10c0;
        case 0x2e10c4u: goto label_2e10c4;
        case 0x2e10c8u: goto label_2e10c8;
        case 0x2e10ccu: goto label_2e10cc;
        case 0x2e10d0u: goto label_2e10d0;
        case 0x2e10d4u: goto label_2e10d4;
        case 0x2e10d8u: goto label_2e10d8;
        case 0x2e10dcu: goto label_2e10dc;
        case 0x2e10e0u: goto label_2e10e0;
        case 0x2e10e4u: goto label_2e10e4;
        case 0x2e10e8u: goto label_2e10e8;
        case 0x2e10ecu: goto label_2e10ec;
        case 0x2e10f0u: goto label_2e10f0;
        case 0x2e10f4u: goto label_2e10f4;
        case 0x2e10f8u: goto label_2e10f8;
        case 0x2e10fcu: goto label_2e10fc;
        case 0x2e1100u: goto label_2e1100;
        case 0x2e1104u: goto label_2e1104;
        case 0x2e1108u: goto label_2e1108;
        case 0x2e110cu: goto label_2e110c;
        case 0x2e1110u: goto label_2e1110;
        case 0x2e1114u: goto label_2e1114;
        case 0x2e1118u: goto label_2e1118;
        case 0x2e111cu: goto label_2e111c;
        case 0x2e1120u: goto label_2e1120;
        case 0x2e1124u: goto label_2e1124;
        case 0x2e1128u: goto label_2e1128;
        case 0x2e112cu: goto label_2e112c;
        case 0x2e1130u: goto label_2e1130;
        case 0x2e1134u: goto label_2e1134;
        case 0x2e1138u: goto label_2e1138;
        case 0x2e113cu: goto label_2e113c;
        case 0x2e1140u: goto label_2e1140;
        case 0x2e1144u: goto label_2e1144;
        case 0x2e1148u: goto label_2e1148;
        case 0x2e114cu: goto label_2e114c;
        case 0x2e1150u: goto label_2e1150;
        case 0x2e1154u: goto label_2e1154;
        case 0x2e1158u: goto label_2e1158;
        case 0x2e115cu: goto label_2e115c;
        case 0x2e1160u: goto label_2e1160;
        case 0x2e1164u: goto label_2e1164;
        case 0x2e1168u: goto label_2e1168;
        case 0x2e116cu: goto label_2e116c;
        case 0x2e1170u: goto label_2e1170;
        case 0x2e1174u: goto label_2e1174;
        case 0x2e1178u: goto label_2e1178;
        case 0x2e117cu: goto label_2e117c;
        case 0x2e1180u: goto label_2e1180;
        case 0x2e1184u: goto label_2e1184;
        case 0x2e1188u: goto label_2e1188;
        case 0x2e118cu: goto label_2e118c;
        case 0x2e1190u: goto label_2e1190;
        case 0x2e1194u: goto label_2e1194;
        case 0x2e1198u: goto label_2e1198;
        case 0x2e119cu: goto label_2e119c;
        case 0x2e11a0u: goto label_2e11a0;
        case 0x2e11a4u: goto label_2e11a4;
        case 0x2e11a8u: goto label_2e11a8;
        case 0x2e11acu: goto label_2e11ac;
        case 0x2e11b0u: goto label_2e11b0;
        case 0x2e11b4u: goto label_2e11b4;
        case 0x2e11b8u: goto label_2e11b8;
        case 0x2e11bcu: goto label_2e11bc;
        case 0x2e11c0u: goto label_2e11c0;
        case 0x2e11c4u: goto label_2e11c4;
        case 0x2e11c8u: goto label_2e11c8;
        case 0x2e11ccu: goto label_2e11cc;
        case 0x2e11d0u: goto label_2e11d0;
        case 0x2e11d4u: goto label_2e11d4;
        case 0x2e11d8u: goto label_2e11d8;
        case 0x2e11dcu: goto label_2e11dc;
        case 0x2e11e0u: goto label_2e11e0;
        case 0x2e11e4u: goto label_2e11e4;
        case 0x2e11e8u: goto label_2e11e8;
        case 0x2e11ecu: goto label_2e11ec;
        case 0x2e11f0u: goto label_2e11f0;
        case 0x2e11f4u: goto label_2e11f4;
        case 0x2e11f8u: goto label_2e11f8;
        case 0x2e11fcu: goto label_2e11fc;
        case 0x2e1200u: goto label_2e1200;
        case 0x2e1204u: goto label_2e1204;
        case 0x2e1208u: goto label_2e1208;
        case 0x2e120cu: goto label_2e120c;
        case 0x2e1210u: goto label_2e1210;
        case 0x2e1214u: goto label_2e1214;
        case 0x2e1218u: goto label_2e1218;
        case 0x2e121cu: goto label_2e121c;
        case 0x2e1220u: goto label_2e1220;
        case 0x2e1224u: goto label_2e1224;
        case 0x2e1228u: goto label_2e1228;
        case 0x2e122cu: goto label_2e122c;
        case 0x2e1230u: goto label_2e1230;
        case 0x2e1234u: goto label_2e1234;
        case 0x2e1238u: goto label_2e1238;
        case 0x2e123cu: goto label_2e123c;
        case 0x2e1240u: goto label_2e1240;
        case 0x2e1244u: goto label_2e1244;
        case 0x2e1248u: goto label_2e1248;
        case 0x2e124cu: goto label_2e124c;
        case 0x2e1250u: goto label_2e1250;
        case 0x2e1254u: goto label_2e1254;
        case 0x2e1258u: goto label_2e1258;
        case 0x2e125cu: goto label_2e125c;
        default: break;
    }

    ctx->pc = 0x2e0d60u;

label_2e0d60:
    // 0x2e0d60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e0d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e0d64:
    // 0x2e0d64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e0d68:
    // 0x2e0d68: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e0d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e0d6c:
    // 0x2e0d6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e0d70:
    // 0x2e0d70: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e0d70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d74:
    // 0x2e0d74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e0d78:
    // 0x2e0d78: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e0d78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d7c:
    // 0x2e0d7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e0d80:
    // 0x2e0d80: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e0d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d84:
    // 0x2e0d84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e0d88:
    // 0x2e0d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e0d8c:
    // 0x2e0d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e0d90:
    // 0x2e0d90: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x2e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_2e0d94:
    // 0x2e0d94: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_2e0d98:
    if (ctx->pc == 0x2E0D98u) {
        ctx->pc = 0x2E0D98u;
            // 0x2e0d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D9Cu;
        goto label_2e0d9c;
    }
    ctx->pc = 0x2E0D94u;
    {
        const bool branch_taken_0x2e0d94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E0D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D94u;
            // 0x2e0d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d94) {
            ctx->pc = 0x2E0DB0u;
            goto label_2e0db0;
        }
    }
    ctx->pc = 0x2E0D9Cu;
label_2e0d9c:
    // 0x2e0d9c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e0da0:
    // 0x2e0da0: 0xc04a0d2  jal         func_128348
label_2e0da4:
    if (ctx->pc == 0x2E0DA4u) {
        ctx->pc = 0x2E0DA4u;
            // 0x2e0da4: 0x24841170  addiu       $a0, $a0, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
        ctx->pc = 0x2E0DA8u;
        goto label_2e0da8;
    }
    ctx->pc = 0x2E0DA0u;
    SET_GPR_U32(ctx, 31, 0x2E0DA8u);
    ctx->pc = 0x2E0DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DA0u;
            // 0x2e0da4: 0x24841170  addiu       $a0, $a0, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0DA8u; }
        if (ctx->pc != 0x2E0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0DA8u; }
        if (ctx->pc != 0x2E0DA8u) { return; }
    }
    ctx->pc = 0x2E0DA8u;
label_2e0da8:
    // 0x2e0da8: 0x10000123  b           . + 4 + (0x123 << 2)
label_2e0dac:
    if (ctx->pc == 0x2E0DACu) {
        ctx->pc = 0x2E0DACu;
            // 0x2e0dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DB0u;
        goto label_2e0db0;
    }
    ctx->pc = 0x2E0DA8u;
    {
        const bool branch_taken_0x2e0da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DA8u;
            // 0x2e0dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0da8) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E0DB0u;
label_2e0db0:
    // 0x2e0db0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e0db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0db4:
    // 0x2e0db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0db8:
    // 0x2e0db8: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x2e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_2e0dbc:
    // 0x2e0dbc: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2e0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2e0dc0:
    // 0x2e0dc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e0dc4:
    if (ctx->pc == 0x2E0DC4u) {
        ctx->pc = 0x2E0DC8u;
        goto label_2e0dc8;
    }
    ctx->pc = 0x2E0DC0u;
    {
        const bool branch_taken_0x2e0dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0dc0) {
            ctx->pc = 0x2E0DE0u;
            goto label_2e0de0;
        }
    }
    ctx->pc = 0x2E0DC8u;
label_2e0dc8:
    // 0x2e0dc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e0dcc:
    // 0x2e0dcc: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_2e0dd0:
    if (ctx->pc == 0x2E0DD0u) {
        ctx->pc = 0x2E0DD0u;
            // 0x2e0dd0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x2E0DD4u;
        goto label_2e0dd4;
    }
    ctx->pc = 0x2E0DCCu;
    {
        const bool branch_taken_0x2e0dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E0DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DCCu;
            // 0x2e0dd0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0dcc) {
            ctx->pc = 0x2E0DE0u;
            goto label_2e0de0;
        }
    }
    ctx->pc = 0x2E0DD4u;
label_2e0dd4:
    // 0x2e0dd4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2e0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2e0dd8:
    // 0x2e0dd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e0ddc:
    if (ctx->pc == 0x2E0DDCu) {
        ctx->pc = 0x2E0DDCu;
            // 0x2e0ddc: 0x8c500080  lw          $s0, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->pc = 0x2E0DE0u;
        goto label_2e0de0;
    }
    ctx->pc = 0x2E0DD8u;
    {
        const bool branch_taken_0x2e0dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DD8u;
            // 0x2e0ddc: 0x8c500080  lw          $s0, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0dd8) {
            ctx->pc = 0x2E0DF0u;
            goto label_2e0df0;
        }
    }
    ctx->pc = 0x2E0DE0u;
label_2e0de0:
    // 0x2e0de0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e0de4:
    // 0x2e0de4: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2e0de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_2e0de8:
    // 0x2e0de8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2e0dec:
    if (ctx->pc == 0x2E0DECu) {
        ctx->pc = 0x2E0DECu;
            // 0x2e0dec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2E0DF0u;
        goto label_2e0df0;
    }
    ctx->pc = 0x2E0DE8u;
    {
        const bool branch_taken_0x2e0de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DE8u;
            // 0x2e0dec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0de8) {
            ctx->pc = 0x2E0DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0DF0u;
label_2e0df0:
    // 0x2e0df0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2e0df4:
    if (ctx->pc == 0x2E0DF4u) {
        ctx->pc = 0x2E0DF4u;
            // 0x2e0df4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2E0DF8u;
        goto label_2e0df8;
    }
    ctx->pc = 0x2E0DF0u;
    {
        const bool branch_taken_0x2e0df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DF0u;
            // 0x2e0df4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0df0) {
            ctx->pc = 0x2E0E0Cu;
            goto label_2e0e0c;
        }
    }
    ctx->pc = 0x2E0DF8u;
label_2e0df8:
    // 0x2e0df8: 0xc04a0d2  jal         func_128348
label_2e0dfc:
    if (ctx->pc == 0x2E0DFCu) {
        ctx->pc = 0x2E0DFCu;
            // 0x2e0dfc: 0x248411a0  addiu       $a0, $a0, 0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
        ctx->pc = 0x2E0E00u;
        goto label_2e0e00;
    }
    ctx->pc = 0x2E0DF8u;
    SET_GPR_U32(ctx, 31, 0x2E0E00u);
    ctx->pc = 0x2E0DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0DF8u;
            // 0x2e0dfc: 0x248411a0  addiu       $a0, $a0, 0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0E00u; }
        if (ctx->pc != 0x2E0E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0E00u; }
        if (ctx->pc != 0x2E0E00u) { return; }
    }
    ctx->pc = 0x2E0E00u;
label_2e0e00:
    // 0x2e0e00: 0xaec01184  sw          $zero, 0x1184($s6)
    ctx->pc = 0x2e0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4484), GPR_U32(ctx, 0));
label_2e0e04:
    // 0x2e0e04: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2e0e08:
    if (ctx->pc == 0x2E0E08u) {
        ctx->pc = 0x2E0E08u;
            // 0x2e0e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E0Cu;
        goto label_2e0e0c;
    }
    ctx->pc = 0x2E0E04u;
    {
        const bool branch_taken_0x2e0e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E04u;
            // 0x2e0e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e04) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E0E0Cu;
label_2e0e0c:
    // 0x2e0e0c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2e0e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e0e10:
    // 0x2e0e10: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2e0e14:
    if (ctx->pc == 0x2E0E14u) {
        ctx->pc = 0x2E0E14u;
            // 0x2e0e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E0E18u;
        goto label_2e0e18;
    }
    ctx->pc = 0x2E0E10u;
    {
        const bool branch_taken_0x2e0e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E10u;
            // 0x2e0e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e10) {
            ctx->pc = 0x2E0E30u;
            goto label_2e0e30;
        }
    }
    ctx->pc = 0x2E0E18u;
label_2e0e18:
    // 0x2e0e18: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e0e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e0e1c:
    // 0x2e0e1c: 0xc04a0d2  jal         func_128348
label_2e0e20:
    if (ctx->pc == 0x2E0E20u) {
        ctx->pc = 0x2E0E20u;
            // 0x2e0e20: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
        ctx->pc = 0x2E0E24u;
        goto label_2e0e24;
    }
    ctx->pc = 0x2E0E1Cu;
    SET_GPR_U32(ctx, 31, 0x2E0E24u);
    ctx->pc = 0x2E0E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E1Cu;
            // 0x2e0e20: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0E24u; }
        if (ctx->pc != 0x2E0E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0E24u; }
        if (ctx->pc != 0x2E0E24u) { return; }
    }
    ctx->pc = 0x2E0E24u;
label_2e0e24:
    // 0x2e0e24: 0xaec01184  sw          $zero, 0x1184($s6)
    ctx->pc = 0x2e0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4484), GPR_U32(ctx, 0));
label_2e0e28:
    // 0x2e0e28: 0x10000103  b           . + 4 + (0x103 << 2)
label_2e0e2c:
    if (ctx->pc == 0x2E0E2Cu) {
        ctx->pc = 0x2E0E2Cu;
            // 0x2e0e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E30u;
        goto label_2e0e30;
    }
    ctx->pc = 0x2E0E28u;
    {
        const bool branch_taken_0x2e0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E28u;
            // 0x2e0e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e28) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E0E30u;
label_2e0e30:
    // 0x2e0e30: 0x1682001a  bne         $s4, $v0, . + 4 + (0x1A << 2)
label_2e0e34:
    if (ctx->pc == 0x2E0E34u) {
        ctx->pc = 0x2E0E34u;
            // 0x2e0e34: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E0E38u;
        goto label_2e0e38;
    }
    ctx->pc = 0x2E0E30u;
    {
        const bool branch_taken_0x2e0e30 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E30u;
            // 0x2e0e34: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e30) {
            ctx->pc = 0x2E0E9Cu;
            goto label_2e0e9c;
        }
    }
    ctx->pc = 0x2E0E38u;
label_2e0e38:
    // 0x2e0e38: 0x2aa10000  slti        $at, $s5, 0x0
    ctx->pc = 0x2e0e38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)0) ? 1 : 0);
label_2e0e3c:
    // 0x2e0e3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2e0e40:
    if (ctx->pc == 0x2E0E40u) {
        ctx->pc = 0x2E0E40u;
            // 0x2e0e40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E44u;
        goto label_2e0e44;
    }
    ctx->pc = 0x2E0E3Cu;
    {
        const bool branch_taken_0x2e0e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E3Cu;
            // 0x2e0e40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e3c) {
            ctx->pc = 0x2E0E4Cu;
            goto label_2e0e4c;
        }
    }
    ctx->pc = 0x2E0E44u;
label_2e0e44:
    // 0x2e0e44: 0x100000fc  b           . + 4 + (0xFC << 2)
label_2e0e48:
    if (ctx->pc == 0x2E0E48u) {
        ctx->pc = 0x2E0E48u;
            // 0x2e0e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E4Cu;
        goto label_2e0e4c;
    }
    ctx->pc = 0x2E0E44u;
    {
        const bool branch_taken_0x2e0e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E44u;
            // 0x2e0e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e44) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E0E4Cu;
label_2e0e4c:
    // 0x2e0e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e50:
    // 0x2e0e50: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
label_2e0e54:
    // 0x2e0e54: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2e0e58:
    // 0x2e0e58: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2e0e5c:
    // 0x2e0e5c: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
label_2e0e60:
    // 0x2e0e60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e0e64:
    if (ctx->pc == 0x2E0E64u) {
        ctx->pc = 0x2E0E68u;
        goto label_2e0e68;
    }
    ctx->pc = 0x2E0E60u;
    {
        const bool branch_taken_0x2e0e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e60) {
            ctx->pc = 0x2E0E78u;
            goto label_2e0e78;
        }
    }
    ctx->pc = 0x2E0E68u;
label_2e0e68:
    // 0x2e0e68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e0e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e0e6c:
    // 0x2e0e6c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2e0e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_2e0e70:
    // 0x2e0e70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2e0e74:
    if (ctx->pc == 0x2E0E74u) {
        ctx->pc = 0x2E0E74u;
            // 0x2e0e74: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2E0E78u;
        goto label_2e0e78;
    }
    ctx->pc = 0x2E0E70u;
    {
        const bool branch_taken_0x2e0e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E70u;
            // 0x2e0e74: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e70) {
            ctx->pc = 0x2E0E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0e58;
        }
    }
    ctx->pc = 0x2E0E78u;
label_2e0e78:
    // 0x2e0e78: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e0e7c:
    // 0x2e0e7c: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_2e0e80:
    if (ctx->pc == 0x2E0E80u) {
        ctx->pc = 0x2E0E84u;
        goto label_2e0e84;
    }
    ctx->pc = 0x2E0E7Cu;
    {
        const bool branch_taken_0x2e0e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0e7c) {
            ctx->pc = 0x2E0E9Cu;
            goto label_2e0e9c;
        }
    }
    ctx->pc = 0x2E0E84u;
label_2e0e84:
    // 0x2e0e84: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e0e88:
    // 0x2e0e88: 0xc04a0d2  jal         func_128348
label_2e0e8c:
    if (ctx->pc == 0x2E0E8Cu) {
        ctx->pc = 0x2E0E8Cu;
            // 0x2e0e8c: 0x24841200  addiu       $a0, $a0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
        ctx->pc = 0x2E0E90u;
        goto label_2e0e90;
    }
    ctx->pc = 0x2E0E88u;
    SET_GPR_U32(ctx, 31, 0x2E0E90u);
    ctx->pc = 0x2E0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E88u;
            // 0x2e0e8c: 0x24841200  addiu       $a0, $a0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0E90u; }
        if (ctx->pc != 0x2E0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0E90u; }
        if (ctx->pc != 0x2E0E90u) { return; }
    }
    ctx->pc = 0x2E0E90u;
label_2e0e90:
    // 0x2e0e90: 0xaec01184  sw          $zero, 0x1184($s6)
    ctx->pc = 0x2e0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4484), GPR_U32(ctx, 0));
label_2e0e94:
    // 0x2e0e94: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_2e0e98:
    if (ctx->pc == 0x2E0E98u) {
        ctx->pc = 0x2E0E98u;
            // 0x2e0e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E9Cu;
        goto label_2e0e9c;
    }
    ctx->pc = 0x2E0E94u;
    {
        const bool branch_taken_0x2e0e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E94u;
            // 0x2e0e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e94) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E0E9Cu;
label_2e0e9c:
    // 0x2e0e9c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2e0e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e0ea0:
    // 0x2e0ea0: 0xc04e6a8  jal         func_139AA0
label_2e0ea4:
    if (ctx->pc == 0x2E0EA4u) {
        ctx->pc = 0x2E0EA4u;
            // 0x2e0ea4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2E0EA8u;
        goto label_2e0ea8;
    }
    ctx->pc = 0x2E0EA0u;
    SET_GPR_U32(ctx, 31, 0x2E0EA8u);
    ctx->pc = 0x2E0EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EA0u;
            // 0x2e0ea4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (runtime->hasFunction(0x139AA0u)) {
        auto targetFn = runtime->lookupFunction(0x139AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EA8u; }
        if (ctx->pc != 0x2E0EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartStackMode__9mgCMemoryFii_0x139aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EA8u; }
        if (ctx->pc != 0x2E0EA8u) { return; }
    }
    ctx->pc = 0x2E0EA8u;
label_2e0ea8:
    // 0x2e0ea8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e0ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0eac:
    // 0x2e0eac: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
label_2e0eb0:
    if (ctx->pc == 0x2E0EB0u) {
        ctx->pc = 0x2E0EB4u;
        goto label_2e0eb4;
    }
    ctx->pc = 0x2E0EACu;
    {
        const bool branch_taken_0x2e0eac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0eac) {
            ctx->pc = 0x2E0EDCu;
            goto label_2e0edc;
        }
    }
    ctx->pc = 0x2E0EB4u;
label_2e0eb4:
    // 0x2e0eb4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e0eb8:
    // 0x2e0eb8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e0ebc:
    // 0x2e0ebc: 0x24841230  addiu       $a0, $a0, 0x1230
    ctx->pc = 0x2e0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4656));
label_2e0ec0:
    // 0x2e0ec0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2e0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2e0ec4:
    // 0x2e0ec4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2e0ec8:
    // 0x2e0ec8: 0xc04a0d2  jal         func_128348
label_2e0ecc:
    if (ctx->pc == 0x2E0ECCu) {
        ctx->pc = 0x2E0ECCu;
            // 0x2e0ecc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2E0ED0u;
        goto label_2e0ed0;
    }
    ctx->pc = 0x2E0EC8u;
    SET_GPR_U32(ctx, 31, 0x2E0ED0u);
    ctx->pc = 0x2E0ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EC8u;
            // 0x2e0ecc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0ED0u; }
        if (ctx->pc != 0x2E0ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0ED0u; }
        if (ctx->pc != 0x2E0ED0u) { return; }
    }
    ctx->pc = 0x2E0ED0u;
label_2e0ed0:
    // 0x2e0ed0: 0xaec01184  sw          $zero, 0x1184($s6)
    ctx->pc = 0x2e0ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4484), GPR_U32(ctx, 0));
label_2e0ed4:
    // 0x2e0ed4: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_2e0ed8:
    if (ctx->pc == 0x2E0ED8u) {
        ctx->pc = 0x2E0ED8u;
            // 0x2e0ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EDCu;
        goto label_2e0edc;
    }
    ctx->pc = 0x2E0ED4u;
    {
        const bool branch_taken_0x2e0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0ED4u;
            // 0x2e0ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ed4) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E0EDCu;
label_2e0edc:
    // 0x2e0edc: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2e0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e0ee0:
    // 0x2e0ee0: 0xc04e748  jal         func_139D20
label_2e0ee4:
    if (ctx->pc == 0x2E0EE4u) {
        ctx->pc = 0x2E0EE4u;
            // 0x2e0ee4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x2E0EE8u;
        goto label_2e0ee8;
    }
    ctx->pc = 0x2E0EE0u;
    SET_GPR_U32(ctx, 31, 0x2E0EE8u);
    ctx->pc = 0x2E0EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EE0u;
            // 0x2e0ee4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EE8u; }
        if (ctx->pc != 0x2E0EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EE8u; }
        if (ctx->pc != 0x2E0EE8u) { return; }
    }
    ctx->pc = 0x2E0EE8u;
label_2e0ee8:
    // 0x2e0ee8: 0x24040150  addiu       $a0, $zero, 0x150
    ctx->pc = 0x2e0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2e0eec:
    // 0x2e0eec: 0xc04e638  jal         func_1398E0
label_2e0ef0:
    if (ctx->pc == 0x2E0EF0u) {
        ctx->pc = 0x2E0EF0u;
            // 0x2e0ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EF4u;
        goto label_2e0ef4;
    }
    ctx->pc = 0x2E0EECu;
    SET_GPR_U32(ctx, 31, 0x2E0EF4u);
    ctx->pc = 0x2E0EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EECu;
            // 0x2e0ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EF4u; }
        if (ctx->pc != 0x2E0EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EF4u; }
        if (ctx->pc != 0x2E0EF4u) { return; }
    }
    ctx->pc = 0x2E0EF4u;
label_2e0ef4:
    // 0x2e0ef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e0ef8:
    if (ctx->pc == 0x2E0EF8u) {
        ctx->pc = 0x2E0EF8u;
            // 0x2e0ef8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EFCu;
        goto label_2e0efc;
    }
    ctx->pc = 0x2E0EF4u;
    {
        const bool branch_taken_0x2e0ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EF4u;
            // 0x2e0ef8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ef4) {
            ctx->pc = 0x2E0F04u;
            goto label_2e0f04;
        }
    }
    ctx->pc = 0x2E0EFCu;
label_2e0efc:
    // 0x2e0efc: 0xc061b34  jal         func_186CD0
label_2e0f00:
    if (ctx->pc == 0x2E0F00u) {
        ctx->pc = 0x2E0F00u;
            // 0x2e0f00: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x2E0F04u;
        goto label_2e0f04;
    }
    ctx->pc = 0x2E0EFCu;
    SET_GPR_U32(ctx, 31, 0x2E0F04u);
    ctx->pc = 0x2E0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EFCu;
            // 0x2e0f00: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F04u; }
        if (ctx->pc != 0x2E0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F04u; }
        if (ctx->pc != 0x2E0F04u) { return; }
    }
    ctx->pc = 0x2E0F04u;
label_2e0f04:
    // 0x2e0f04: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x2e0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_2e0f08:
    // 0x2e0f08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2e0f0c:
    // 0x2e0f0c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e0f10:
    // 0x2e0f10: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2e0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2e0f14:
    // 0x2e0f14: 0x24a51258  addiu       $a1, $a1, 0x1258
    ctx->pc = 0x2e0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
label_2e0f18:
    // 0x2e0f18: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2e0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_2e0f1c:
    // 0x2e0f1c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2e0f20:
    // 0x2e0f20: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2e0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2e0f24:
    // 0x2e0f24: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x2e0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_2e0f28:
    // 0x2e0f28: 0xc04a3dc  jal         func_128F70
label_2e0f2c:
    if (ctx->pc == 0x2E0F2Cu) {
        ctx->pc = 0x2E0F2Cu;
            // 0x2e0f2c: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x2E0F30u;
        goto label_2e0f30;
    }
    ctx->pc = 0x2E0F28u;
    SET_GPR_U32(ctx, 31, 0x2E0F30u);
    ctx->pc = 0x2E0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F28u;
            // 0x2e0f2c: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F30u; }
        if (ctx->pc != 0x2E0F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F30u; }
        if (ctx->pc != 0x2E0F30u) { return; }
    }
    ctx->pc = 0x2E0F30u;
label_2e0f30:
    // 0x2e0f30: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e0f34:
    // 0x2e0f34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e0f38:
    // 0x2e0f38: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2e0f3c:
    if (ctx->pc == 0x2E0F3Cu) {
        ctx->pc = 0x2E0F40u;
        goto label_2e0f40;
    }
    ctx->pc = 0x2E0F38u;
    {
        const bool branch_taken_0x2e0f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f38) {
            ctx->pc = 0x2E1088u;
            goto label_2e1088;
        }
    }
    ctx->pc = 0x2E0F40u;
label_2e0f40:
    // 0x2e0f40: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2e0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e0f44:
    // 0x2e0f44: 0xc04e748  jal         func_139D20
label_2e0f48:
    if (ctx->pc == 0x2E0F48u) {
        ctx->pc = 0x2E0F48u;
            // 0x2e0f48: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2E0F4Cu;
        goto label_2e0f4c;
    }
    ctx->pc = 0x2E0F44u;
    SET_GPR_U32(ctx, 31, 0x2E0F4Cu);
    ctx->pc = 0x2E0F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F44u;
            // 0x2e0f48: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F4Cu; }
        if (ctx->pc != 0x2E0F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F4Cu; }
        if (ctx->pc != 0x2E0F4Cu) { return; }
    }
    ctx->pc = 0x2E0F4Cu;
label_2e0f4c:
    // 0x2e0f4c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2e0f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2e0f50:
    // 0x2e0f50: 0xc04e638  jal         func_1398E0
label_2e0f54:
    if (ctx->pc == 0x2E0F54u) {
        ctx->pc = 0x2E0F54u;
            // 0x2e0f54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F58u;
        goto label_2e0f58;
    }
    ctx->pc = 0x2E0F50u;
    SET_GPR_U32(ctx, 31, 0x2E0F58u);
    ctx->pc = 0x2E0F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F50u;
            // 0x2e0f54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F58u; }
        if (ctx->pc != 0x2E0F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F58u; }
        if (ctx->pc != 0x2E0F58u) { return; }
    }
    ctx->pc = 0x2E0F58u;
label_2e0f58:
    // 0x2e0f58: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2e0f5c:
    if (ctx->pc == 0x2E0F5Cu) {
        ctx->pc = 0x2E0F5Cu;
            // 0x2e0f5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F60u;
        goto label_2e0f60;
    }
    ctx->pc = 0x2E0F58u;
    {
        const bool branch_taken_0x2e0f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F58u;
            // 0x2e0f5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f58) {
            ctx->pc = 0x2E0FDCu;
            goto label_2e0fdc;
        }
    }
    ctx->pc = 0x2E0F60u;
label_2e0f60:
    // 0x2e0f60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0f64:
    // 0x2e0f64: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e0f68:
    // 0x2e0f68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2e0f6c:
    // 0x2e0f6c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e0f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0f70:
    // 0x2e0f70: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0f74:
    // 0x2e0f74: 0x320f809  jalr        $t9
label_2e0f78:
    if (ctx->pc == 0x2E0F78u) {
        ctx->pc = 0x2E0F78u;
            // 0x2e0f78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F7Cu;
        goto label_2e0f7c;
    }
    ctx->pc = 0x2E0F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0F7Cu);
        ctx->pc = 0x2E0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F74u;
            // 0x2e0f78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0F7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F7Cu; }
            if (ctx->pc != 0x2E0F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E0F7Cu;
label_2e0f7c:
    // 0x2e0f7c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0f80:
    // 0x2e0f80: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e0f84:
    // 0x2e0f84: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2e0f88:
    // 0x2e0f88: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e0f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0f8c:
    // 0x2e0f8c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0f90:
    // 0x2e0f90: 0x320f809  jalr        $t9
label_2e0f94:
    if (ctx->pc == 0x2E0F94u) {
        ctx->pc = 0x2E0F94u;
            // 0x2e0f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F98u;
        goto label_2e0f98;
    }
    ctx->pc = 0x2E0F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0F98u);
        ctx->pc = 0x2E0F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F90u;
            // 0x2e0f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F98u; }
            if (ctx->pc != 0x2E0F98u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0F98u;
label_2e0f98:
    // 0x2e0f98: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0f9c:
    // 0x2e0f9c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e0fa0:
    // 0x2e0fa0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2e0fa4:
    // 0x2e0fa4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e0fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0fa8:
    // 0x2e0fa8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0fac:
    // 0x2e0fac: 0x320f809  jalr        $t9
label_2e0fb0:
    if (ctx->pc == 0x2E0FB0u) {
        ctx->pc = 0x2E0FB0u;
            // 0x2e0fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FB4u;
        goto label_2e0fb4;
    }
    ctx->pc = 0x2E0FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0FB4u);
        ctx->pc = 0x2E0FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FACu;
            // 0x2e0fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0FB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FB4u; }
            if (ctx->pc != 0x2E0FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0FB4u;
label_2e0fb4:
    // 0x2e0fb4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e0fb8:
    // 0x2e0fb8: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2e0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2e0fbc:
    // 0x2e0fbc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2e0fc0:
    // 0x2e0fc0: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2e0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2e0fc4:
    // 0x2e0fc4: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2e0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2e0fc8:
    // 0x2e0fc8: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2e0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2e0fcc:
    // 0x2e0fcc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e0fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0fd0:
    // 0x2e0fd0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0fd4:
    // 0x2e0fd4: 0x320f809  jalr        $t9
label_2e0fd8:
    if (ctx->pc == 0x2E0FD8u) {
        ctx->pc = 0x2E0FD8u;
            // 0x2e0fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FDCu;
        goto label_2e0fdc;
    }
    ctx->pc = 0x2E0FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0FDCu);
        ctx->pc = 0x2E0FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FD4u;
            // 0x2e0fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FDCu; }
            if (ctx->pc != 0x2E0FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x2E0FDCu;
label_2e0fdc:
    // 0x2e0fdc: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x2e0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_2e0fe0:
    // 0x2e0fe0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2e0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2e0fe4:
    // 0x2e0fe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e0fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e0fe8:
    // 0x2e0fe8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e0fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e0fec:
    // 0x2e0fec: 0x320f809  jalr        $t9
label_2e0ff0:
    if (ctx->pc == 0x2E0FF0u) {
        ctx->pc = 0x2E0FF4u;
        goto label_2e0ff4;
    }
    ctx->pc = 0x2E0FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E0FF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E0FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FF4u; }
            if (ctx->pc != 0x2E0FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E0FF4u;
label_2e0ff4:
    // 0x2e0ff4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2e0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e0ff8:
    // 0x2e0ff8: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2e0ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e0ffc:
    // 0x2e0ffc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e0ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1000:
    // 0x2e1000: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2e1000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2e1004:
    // 0x2e1004: 0x320f809  jalr        $t9
label_2e1008:
    if (ctx->pc == 0x2E1008u) {
        ctx->pc = 0x2E1008u;
            // 0x2e1008: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2E100Cu;
        goto label_2e100c;
    }
    ctx->pc = 0x2E1004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E100Cu);
        ctx->pc = 0x2E1008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1004u;
            // 0x2e1008: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E100Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E100Cu; }
            if (ctx->pc != 0x2E100Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E100Cu;
label_2e100c:
    // 0x2e100c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2e100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e1010:
    // 0x2e1010: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1014:
    // 0x2e1014: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x2e1014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_2e1018:
    // 0x2e1018: 0x320f809  jalr        $t9
label_2e101c:
    if (ctx->pc == 0x2E101Cu) {
        ctx->pc = 0x2E1020u;
        goto label_2e1020;
    }
    ctx->pc = 0x2E1018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1020u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1020u; }
            if (ctx->pc != 0x2E1020u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1020u;
label_2e1020:
    // 0x2e1020: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2e1020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2e1024:
    // 0x2e1024: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e1024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e1028:
    // 0x2e1028: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2e1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e102c:
    // 0x2e102c: 0x3c02c61c  lui         $v0, 0xC61C
    ctx->pc = 0x2e102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50716 << 16));
label_2e1030:
    // 0x2e1030: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e1030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2e1034:
    // 0x2e1034: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e1034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e1038:
    // 0x2e1038: 0x2462007d  addiu       $v0, $v1, 0x7D
    ctx->pc = 0x2e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 125));
label_2e103c:
    // 0x2e103c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2e103cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2e1040:
    // 0x2e1040: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2e1040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e1044:
    // 0x2e1044: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2e1044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e1048:
    // 0x2e1048: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2e1048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2e104c:
    // 0x2e104c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2e104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2e1050:
    // 0x2e1050: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1054:
    // 0x2e1054: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e1058:
    // 0x2e1058: 0x320f809  jalr        $t9
label_2e105c:
    if (ctx->pc == 0x2E105Cu) {
        ctx->pc = 0x2E105Cu;
            // 0x2e105c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2E1060u;
        goto label_2e1060;
    }
    ctx->pc = 0x2E1058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1060u);
        ctx->pc = 0x2E105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1058u;
            // 0x2e105c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1060u; }
            if (ctx->pc != 0x2E1060u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1060u;
label_2e1060:
    // 0x2e1060: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2e1060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2e1064:
    // 0x2e1064: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e1064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e1068:
    // 0x2e1068: 0x0  nop
    ctx->pc = 0x2e1068u;
    // NOP
label_2e106c:
    // 0x2e106c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e106cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e1070:
    // 0x2e1070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1074:
    // 0x2e1074: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2e1074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2e1078:
    // 0x2e1078: 0x320f809  jalr        $t9
label_2e107c:
    if (ctx->pc == 0x2E107Cu) {
        ctx->pc = 0x2E107Cu;
            // 0x2e107c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2E1080u;
        goto label_2e1080;
    }
    ctx->pc = 0x2E1078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1080u);
        ctx->pc = 0x2E107Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1078u;
            // 0x2e107c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1080u; }
            if (ctx->pc != 0x2E1080u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1080u;
label_2e1080:
    // 0x2e1080: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e1084:
    if (ctx->pc == 0x2E1084u) {
        ctx->pc = 0x2E1088u;
        goto label_2e1088;
    }
    ctx->pc = 0x2E1080u;
    {
        const bool branch_taken_0x2e1080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1080) {
            ctx->pc = 0x2E108Cu;
            goto label_2e108c;
        }
    }
    ctx->pc = 0x2E1088u;
label_2e1088:
    // 0x2e1088: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2e1088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_2e108c:
    // 0x2e108c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2e108cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2e1090:
    // 0x2e1090: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2e1090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_2e1094:
    // 0x2e1094: 0x24a58f30  addiu       $a1, $a1, -0x70D0
    ctx->pc = 0x2e1094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938416));
label_2e1098:
    // 0x2e1098: 0xc061c74  jal         func_1871D0
label_2e109c:
    if (ctx->pc == 0x2E109Cu) {
        ctx->pc = 0x2E109Cu;
            // 0x2e109c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2E10A0u;
        goto label_2e10a0;
    }
    ctx->pc = 0x2E1098u;
    SET_GPR_U32(ctx, 31, 0x2E10A0u);
    ctx->pc = 0x2E109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1098u;
            // 0x2e109c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (runtime->hasFunction(0x1871D0u)) {
        auto targetFn = runtime->lookupFunction(0x1871D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10A0u; }
        if (ctx->pc != 0x2E10A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10A0u; }
        if (ctx->pc != 0x2E10A0u) { return; }
    }
    ctx->pc = 0x2E10A0u;
label_2e10a0:
    // 0x2e10a0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2e10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e10a4:
    // 0x2e10a4: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2e10a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e10a8:
    // 0x2e10a8: 0xc0ba300  jal         func_2E8C00
label_2e10ac:
    if (ctx->pc == 0x2E10ACu) {
        ctx->pc = 0x2E10ACu;
            // 0x2e10ac: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x2E10B0u;
        goto label_2e10b0;
    }
    ctx->pc = 0x2E10A8u;
    SET_GPR_U32(ctx, 31, 0x2E10B0u);
    ctx->pc = 0x2E10ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10A8u;
            // 0x2e10ac: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8C00u;
    if (runtime->hasFunction(0x2E8C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E8C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10B0u; }
        if (ctx->pc != 0x2E10B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEffectScript__FP10CRunScriptPcP9mgCMemory_0x2e8c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10B0u; }
        if (ctx->pc != 0x2E10B0u) { return; }
    }
    ctx->pc = 0x2E10B0u;
label_2e10b0:
    // 0x2e10b0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2e10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2e10b4:
    // 0x2e10b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2e10b8:
    // 0x2e10b8: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x2e10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_2e10bc:
    // 0x2e10bc: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x2e10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_2e10c0:
    // 0x2e10c0: 0xae5500a8  sw          $s5, 0xA8($s2)
    ctx->pc = 0x2e10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 21));
label_2e10c4:
    // 0x2e10c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e10c8:
    // 0x2e10c8: 0xae5100ac  sw          $s1, 0xAC($s2)
    ctx->pc = 0x2e10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 17));
label_2e10cc:
    // 0x2e10cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e10ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e10d0:
    // 0x2e10d0: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x2e10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
label_2e10d4:
    // 0x2e10d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e10d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2e10d8:
    // 0x2e10d8: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x2e10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_2e10dc:
    // 0x2e10dc: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x2e10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
label_2e10e0:
    // 0x2e10e0: 0xae4300fc  sw          $v1, 0xFC($s2)
    ctx->pc = 0x2e10e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 3));
label_2e10e4:
    // 0x2e10e4: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x2e10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_2e10e8:
    // 0x2e10e8: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x2e10e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_2e10ec:
    // 0x2e10ec: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x2e10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
label_2e10f0:
    // 0x2e10f0: 0xae43010c  sw          $v1, 0x10C($s2)
    ctx->pc = 0x2e10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 3));
label_2e10f4:
    // 0x2e10f4: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x2e10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
label_2e10f8:
    // 0x2e10f8: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2e10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
label_2e10fc:
    // 0x2e10fc: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x2e10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_2e1100:
    // 0x2e1100: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x2e1100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_2e1104:
    // 0x2e1104: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x2e1104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_2e1108:
    // 0x2e1108: 0xc049c86  jal         func_127218
label_2e110c:
    if (ctx->pc == 0x2E110Cu) {
        ctx->pc = 0x2E110Cu;
            // 0x2e110c: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x2E1110u;
        goto label_2e1110;
    }
    ctx->pc = 0x2E1108u;
    SET_GPR_U32(ctx, 31, 0x2E1110u);
    ctx->pc = 0x2E110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1108u;
            // 0x2e110c: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1110u; }
        if (ctx->pc != 0x2E1110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1110u; }
        if (ctx->pc != 0x2E1110u) { return; }
    }
    ctx->pc = 0x2E1110u;
label_2e1110:
    // 0x2e1110: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x2e1110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
label_2e1114:
    // 0x2e1114: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x2e1114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_2e1118:
    // 0x2e1118: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x2e1118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
label_2e111c:
    // 0x2e111c: 0xae400120  sw          $zero, 0x120($s2)
    ctx->pc = 0x2e111cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
label_2e1120:
    // 0x2e1120: 0xae400124  sw          $zero, 0x124($s2)
    ctx->pc = 0x2e1120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
label_2e1124:
    // 0x2e1124: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x2e1124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
label_2e1128:
    // 0x2e1128: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x2e1128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
label_2e112c:
    // 0x2e112c: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x2e112cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
label_2e1130:
    // 0x2e1130: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2e1130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2e1134:
    // 0x2e1134: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2e1134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2e1138:
    // 0x2e1138: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2e1138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_2e113c:
    // 0x2e113c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2e113cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_2e1140:
    // 0x2e1140: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2e1140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_2e1144:
    // 0x2e1144: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x2e1144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
label_2e1148:
    // 0x2e1148: 0xae400138  sw          $zero, 0x138($s2)
    ctx->pc = 0x2e1148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 0));
label_2e114c:
    // 0x2e114c: 0xae40013c  sw          $zero, 0x13C($s2)
    ctx->pc = 0x2e114cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 0));
label_2e1150:
    // 0x2e1150: 0xae400144  sw          $zero, 0x144($s2)
    ctx->pc = 0x2e1150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
label_2e1154:
    // 0x2e1154: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2e1154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2e1158:
    // 0x2e1158: 0xc04e764  jal         func_139D90
label_2e115c:
    if (ctx->pc == 0x2E115Cu) {
        ctx->pc = 0x2E115Cu;
            // 0x2e115c: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x2E1160u;
        goto label_2e1160;
    }
    ctx->pc = 0x2E1158u;
    SET_GPR_U32(ctx, 31, 0x2E1160u);
    ctx->pc = 0x2E115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1158u;
            // 0x2e115c: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D90u;
    if (runtime->hasFunction(0x139D90u)) {
        auto targetFn = runtime->lookupFunction(0x139D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1160u; }
        if (ctx->pc != 0x2E1160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlign64__9mgCMemoryFv_0x139d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1160u; }
        if (ctx->pc != 0x2E1160u) { return; }
    }
    ctx->pc = 0x2E1160u;
label_2e1160:
    // 0x2e1160: 0xc04e6f4  jal         func_139BD0
label_2e1164:
    if (ctx->pc == 0x2E1164u) {
        ctx->pc = 0x2E1164u;
            // 0x2e1164: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x2E1168u;
        goto label_2e1168;
    }
    ctx->pc = 0x2E1160u;
    SET_GPR_U32(ctx, 31, 0x2E1168u);
    ctx->pc = 0x2E1164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1160u;
            // 0x2e1164: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139BD0u;
    if (runtime->hasFunction(0x139BD0u)) {
        auto targetFn = runtime->lookupFunction(0x139BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1168u; }
        if (ctx->pc != 0x2E1168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndStackMode__9mgCMemoryFv_0x139bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1168u; }
        if (ctx->pc != 0x2E1168u) { return; }
    }
    ctx->pc = 0x2E1168u;
label_2e1168:
    // 0x2e1168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e116c:
    // 0x2e116c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_2e1170:
    if (ctx->pc == 0x2E1170u) {
        ctx->pc = 0x2E1170u;
            // 0x2e1170: 0x151940  sll         $v1, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->pc = 0x2E1174u;
        goto label_2e1174;
    }
    ctx->pc = 0x2E116Cu;
    {
        const bool branch_taken_0x2e116c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E116Cu;
            // 0x2e1170: 0x151940  sll         $v1, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e116c) {
            ctx->pc = 0x2E1184u;
            goto label_2e1184;
        }
    }
    ctx->pc = 0x2E1174u;
label_2e1174:
    // 0x2e1174: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e1174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2e1178:
    // 0x2e1178: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2e1178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2e117c:
    // 0x2e117c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e1180:
    // 0x2e1180: 0xac520184  sw          $s2, 0x184($v0)
    ctx->pc = 0x2e1180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 18));
label_2e1184:
    // 0x2e1184: 0x8ec41188  lw          $a0, 0x1188($s6)
    ctx->pc = 0x2e1184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4488)));
label_2e1188:
    // 0x2e1188: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_2e118c:
    if (ctx->pc == 0x2E118Cu) {
        ctx->pc = 0x2E1190u;
        goto label_2e1190;
    }
    ctx->pc = 0x2E1188u;
    {
        const bool branch_taken_0x2e1188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1188) {
            ctx->pc = 0x2E11BCu;
            goto label_2e11bc;
        }
    }
    ctx->pc = 0x2E1190u;
label_2e1190:
    // 0x2e1190: 0xaed21188  sw          $s2, 0x1188($s6)
    ctx->pc = 0x2e1190u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4488), GPR_U32(ctx, 18));
label_2e1194:
    // 0x2e1194: 0xaed2118c  sw          $s2, 0x118C($s6)
    ctx->pc = 0x2e1194u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4492), GPR_U32(ctx, 18));
label_2e1198:
    // 0x2e1198: 0x8ec2118c  lw          $v0, 0x118C($s6)
    ctx->pc = 0x2e1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
label_2e119c:
    // 0x2e119c: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x2e119cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
label_2e11a0:
    // 0x2e11a0: 0x8ec2118c  lw          $v0, 0x118C($s6)
    ctx->pc = 0x2e11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
label_2e11a4:
    // 0x2e11a4: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x2e11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
label_2e11a8:
    // 0x2e11a8: 0x8ec21188  lw          $v0, 0x1188($s6)
    ctx->pc = 0x2e11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4488)));
label_2e11ac:
    // 0x2e11ac: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x2e11acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
label_2e11b0:
    // 0x2e11b0: 0x8ec21188  lw          $v0, 0x1188($s6)
    ctx->pc = 0x2e11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4488)));
label_2e11b4:
    // 0x2e11b4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2e11b8:
    if (ctx->pc == 0x2E11B8u) {
        ctx->pc = 0x2E11B8u;
            // 0x2e11b8: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x2E11BCu;
        goto label_2e11bc;
    }
    ctx->pc = 0x2E11B4u;
    {
        const bool branch_taken_0x2e11b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11B4u;
            // 0x2e11b8: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11b4) {
            ctx->pc = 0x2E122Cu;
            goto label_2e122c;
        }
    }
    ctx->pc = 0x2E11BCu;
label_2e11bc:
    // 0x2e11bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_2e11c0:
    if (ctx->pc == 0x2E11C0u) {
        ctx->pc = 0x2E11C4u;
        goto label_2e11c4;
    }
    ctx->pc = 0x2E11BCu;
    {
        const bool branch_taken_0x2e11bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11bc) {
            ctx->pc = 0x2E122Cu;
            goto label_2e122c;
        }
    }
    ctx->pc = 0x2E11C4u;
label_2e11c4:
    // 0x2e11c4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2e11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2e11c8:
    // 0x2e11c8: 0x0  nop
    ctx->pc = 0x2e11c8u;
    // NOP
label_2e11cc:
    // 0x2e11cc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2e11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2e11d0:
    // 0x2e11d0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2e11d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e11d4:
    // 0x2e11d4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_2e11d8:
    if (ctx->pc == 0x2E11D8u) {
        ctx->pc = 0x2E11DCu;
        goto label_2e11dc;
    }
    ctx->pc = 0x2E11D4u;
    {
        const bool branch_taken_0x2e11d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11d4) {
            ctx->pc = 0x2E1208u;
            goto label_2e1208;
        }
    }
    ctx->pc = 0x2E11DCu;
label_2e11dc:
    // 0x2e11dc: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x2e11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_2e11e0:
    // 0x2e11e0: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x2e11e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
label_2e11e4:
    // 0x2e11e4: 0xae440144  sw          $a0, 0x144($s2)
    ctx->pc = 0x2e11e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 4));
label_2e11e8:
    // 0x2e11e8: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x2e11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_2e11ec:
    // 0x2e11ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e11f0:
    if (ctx->pc == 0x2E11F0u) {
        ctx->pc = 0x2E11F4u;
        goto label_2e11f4;
    }
    ctx->pc = 0x2E11ECu;
    {
        const bool branch_taken_0x2e11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11ec) {
            ctx->pc = 0x2E11FCu;
            goto label_2e11fc;
        }
    }
    ctx->pc = 0x2E11F4u;
label_2e11f4:
    // 0x2e11f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e11f8:
    if (ctx->pc == 0x2E11F8u) {
        ctx->pc = 0x2E11F8u;
            // 0x2e11f8: 0xac520144  sw          $s2, 0x144($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 18));
        ctx->pc = 0x2E11FCu;
        goto label_2e11fc;
    }
    ctx->pc = 0x2E11F4u;
    {
        const bool branch_taken_0x2e11f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11F4u;
            // 0x2e11f8: 0xac520144  sw          $s2, 0x144($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11f4) {
            ctx->pc = 0x2E1200u;
            goto label_2e1200;
        }
    }
    ctx->pc = 0x2E11FCu;
label_2e11fc:
    // 0x2e11fc: 0xaed21188  sw          $s2, 0x1188($s6)
    ctx->pc = 0x2e11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4488), GPR_U32(ctx, 18));
label_2e1200:
    // 0x2e1200: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e1204:
    if (ctx->pc == 0x2E1204u) {
        ctx->pc = 0x2E1204u;
            // 0x2e1204: 0xac920140  sw          $s2, 0x140($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 18));
        ctx->pc = 0x2E1208u;
        goto label_2e1208;
    }
    ctx->pc = 0x2E1200u;
    {
        const bool branch_taken_0x2e1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1200u;
            // 0x2e1204: 0xac920140  sw          $s2, 0x140($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1200) {
            ctx->pc = 0x2E122Cu;
            goto label_2e122c;
        }
    }
    ctx->pc = 0x2E1208u;
label_2e1208:
    // 0x2e1208: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x2e1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
label_2e120c:
    // 0x2e120c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2e1210:
    if (ctx->pc == 0x2E1210u) {
        ctx->pc = 0x2E1214u;
        goto label_2e1214;
    }
    ctx->pc = 0x2E120Cu;
    {
        const bool branch_taken_0x2e120c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e120c) {
            ctx->pc = 0x2E1224u;
            goto label_2e1224;
        }
    }
    ctx->pc = 0x2E1214u;
label_2e1214:
    // 0x2e1214: 0xac920144  sw          $s2, 0x144($a0)
    ctx->pc = 0x2e1214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 18));
label_2e1218:
    // 0x2e1218: 0xae440140  sw          $a0, 0x140($s2)
    ctx->pc = 0x2e1218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 4));
label_2e121c:
    // 0x2e121c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e1220:
    if (ctx->pc == 0x2E1220u) {
        ctx->pc = 0x2E1220u;
            // 0x2e1220: 0xaed2118c  sw          $s2, 0x118C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4492), GPR_U32(ctx, 18));
        ctx->pc = 0x2E1224u;
        goto label_2e1224;
    }
    ctx->pc = 0x2E121Cu;
    {
        const bool branch_taken_0x2e121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E121Cu;
            // 0x2e1220: 0xaed2118c  sw          $s2, 0x118C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4492), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e121c) {
            ctx->pc = 0x2E122Cu;
            goto label_2e122c;
        }
    }
    ctx->pc = 0x2E1224u;
label_2e1224:
    // 0x2e1224: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_2e1228:
    if (ctx->pc == 0x2E1228u) {
        ctx->pc = 0x2E1228u;
            // 0x2e1228: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E122Cu;
        goto label_2e122c;
    }
    ctx->pc = 0x2E1224u;
    {
        const bool branch_taken_0x2e1224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1224u;
            // 0x2e1228: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1224) {
            ctx->pc = 0x2E11CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e11cc;
        }
    }
    ctx->pc = 0x2E122Cu;
label_2e122c:
    // 0x2e122c: 0x0  nop
    ctx->pc = 0x2e122cu;
    // NOP
label_2e1230:
    // 0x2e1230: 0xaed21184  sw          $s2, 0x1184($s6)
    ctx->pc = 0x2e1230u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4484), GPR_U32(ctx, 18));
label_2e1234:
    // 0x2e1234: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e1234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1238:
    // 0x2e1238: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e1238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e123c:
    // 0x2e123c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e123cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e1240:
    // 0x2e1240: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e1240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e1244:
    // 0x2e1244: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1248:
    // 0x2e1248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e124c:
    // 0x2e124c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e124cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1250:
    // 0x2e1250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1254:
    // 0x2e1254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1258:
    // 0x2e1258: 0x3e00008  jr          $ra
label_2e125c:
    if (ctx->pc == 0x2E125Cu) {
        ctx->pc = 0x2E125Cu;
            // 0x2e125c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E1260u;
        goto label_fallthrough_0x2e1258;
    }
    ctx->pc = 0x2E1258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1258u;
            // 0x2e125c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e1258:
    ctx->pc = 0x2E1260u;
}
