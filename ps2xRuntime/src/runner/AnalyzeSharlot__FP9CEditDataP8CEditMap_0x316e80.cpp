#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeSharlot__FP9CEditDataP8CEditMap
// Address: 0x316e80 - 0x3173cc
void AnalyzeSharlot__FP9CEditDataP8CEditMap_0x316e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeSharlot__FP9CEditDataP8CEditMap_0x316e80");
#endif

    switch (ctx->pc) {
        case 0x316e80u: goto label_316e80;
        case 0x316e84u: goto label_316e84;
        case 0x316e88u: goto label_316e88;
        case 0x316e8cu: goto label_316e8c;
        case 0x316e90u: goto label_316e90;
        case 0x316e94u: goto label_316e94;
        case 0x316e98u: goto label_316e98;
        case 0x316e9cu: goto label_316e9c;
        case 0x316ea0u: goto label_316ea0;
        case 0x316ea4u: goto label_316ea4;
        case 0x316ea8u: goto label_316ea8;
        case 0x316eacu: goto label_316eac;
        case 0x316eb0u: goto label_316eb0;
        case 0x316eb4u: goto label_316eb4;
        case 0x316eb8u: goto label_316eb8;
        case 0x316ebcu: goto label_316ebc;
        case 0x316ec0u: goto label_316ec0;
        case 0x316ec4u: goto label_316ec4;
        case 0x316ec8u: goto label_316ec8;
        case 0x316eccu: goto label_316ecc;
        case 0x316ed0u: goto label_316ed0;
        case 0x316ed4u: goto label_316ed4;
        case 0x316ed8u: goto label_316ed8;
        case 0x316edcu: goto label_316edc;
        case 0x316ee0u: goto label_316ee0;
        case 0x316ee4u: goto label_316ee4;
        case 0x316ee8u: goto label_316ee8;
        case 0x316eecu: goto label_316eec;
        case 0x316ef0u: goto label_316ef0;
        case 0x316ef4u: goto label_316ef4;
        case 0x316ef8u: goto label_316ef8;
        case 0x316efcu: goto label_316efc;
        case 0x316f00u: goto label_316f00;
        case 0x316f04u: goto label_316f04;
        case 0x316f08u: goto label_316f08;
        case 0x316f0cu: goto label_316f0c;
        case 0x316f10u: goto label_316f10;
        case 0x316f14u: goto label_316f14;
        case 0x316f18u: goto label_316f18;
        case 0x316f1cu: goto label_316f1c;
        case 0x316f20u: goto label_316f20;
        case 0x316f24u: goto label_316f24;
        case 0x316f28u: goto label_316f28;
        case 0x316f2cu: goto label_316f2c;
        case 0x316f30u: goto label_316f30;
        case 0x316f34u: goto label_316f34;
        case 0x316f38u: goto label_316f38;
        case 0x316f3cu: goto label_316f3c;
        case 0x316f40u: goto label_316f40;
        case 0x316f44u: goto label_316f44;
        case 0x316f48u: goto label_316f48;
        case 0x316f4cu: goto label_316f4c;
        case 0x316f50u: goto label_316f50;
        case 0x316f54u: goto label_316f54;
        case 0x316f58u: goto label_316f58;
        case 0x316f5cu: goto label_316f5c;
        case 0x316f60u: goto label_316f60;
        case 0x316f64u: goto label_316f64;
        case 0x316f68u: goto label_316f68;
        case 0x316f6cu: goto label_316f6c;
        case 0x316f70u: goto label_316f70;
        case 0x316f74u: goto label_316f74;
        case 0x316f78u: goto label_316f78;
        case 0x316f7cu: goto label_316f7c;
        case 0x316f80u: goto label_316f80;
        case 0x316f84u: goto label_316f84;
        case 0x316f88u: goto label_316f88;
        case 0x316f8cu: goto label_316f8c;
        case 0x316f90u: goto label_316f90;
        case 0x316f94u: goto label_316f94;
        case 0x316f98u: goto label_316f98;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fa0u: goto label_316fa0;
        case 0x316fa4u: goto label_316fa4;
        case 0x316fa8u: goto label_316fa8;
        case 0x316facu: goto label_316fac;
        case 0x316fb0u: goto label_316fb0;
        case 0x316fb4u: goto label_316fb4;
        case 0x316fb8u: goto label_316fb8;
        case 0x316fbcu: goto label_316fbc;
        case 0x316fc0u: goto label_316fc0;
        case 0x316fc4u: goto label_316fc4;
        case 0x316fc8u: goto label_316fc8;
        case 0x316fccu: goto label_316fcc;
        case 0x316fd0u: goto label_316fd0;
        case 0x316fd4u: goto label_316fd4;
        case 0x316fd8u: goto label_316fd8;
        case 0x316fdcu: goto label_316fdc;
        case 0x316fe0u: goto label_316fe0;
        case 0x316fe4u: goto label_316fe4;
        case 0x316fe8u: goto label_316fe8;
        case 0x316fecu: goto label_316fec;
        case 0x316ff0u: goto label_316ff0;
        case 0x316ff4u: goto label_316ff4;
        case 0x316ff8u: goto label_316ff8;
        case 0x316ffcu: goto label_316ffc;
        case 0x317000u: goto label_317000;
        case 0x317004u: goto label_317004;
        case 0x317008u: goto label_317008;
        case 0x31700cu: goto label_31700c;
        case 0x317010u: goto label_317010;
        case 0x317014u: goto label_317014;
        case 0x317018u: goto label_317018;
        case 0x31701cu: goto label_31701c;
        case 0x317020u: goto label_317020;
        case 0x317024u: goto label_317024;
        case 0x317028u: goto label_317028;
        case 0x31702cu: goto label_31702c;
        case 0x317030u: goto label_317030;
        case 0x317034u: goto label_317034;
        case 0x317038u: goto label_317038;
        case 0x31703cu: goto label_31703c;
        case 0x317040u: goto label_317040;
        case 0x317044u: goto label_317044;
        case 0x317048u: goto label_317048;
        case 0x31704cu: goto label_31704c;
        case 0x317050u: goto label_317050;
        case 0x317054u: goto label_317054;
        case 0x317058u: goto label_317058;
        case 0x31705cu: goto label_31705c;
        case 0x317060u: goto label_317060;
        case 0x317064u: goto label_317064;
        case 0x317068u: goto label_317068;
        case 0x31706cu: goto label_31706c;
        case 0x317070u: goto label_317070;
        case 0x317074u: goto label_317074;
        case 0x317078u: goto label_317078;
        case 0x31707cu: goto label_31707c;
        case 0x317080u: goto label_317080;
        case 0x317084u: goto label_317084;
        case 0x317088u: goto label_317088;
        case 0x31708cu: goto label_31708c;
        case 0x317090u: goto label_317090;
        case 0x317094u: goto label_317094;
        case 0x317098u: goto label_317098;
        case 0x31709cu: goto label_31709c;
        case 0x3170a0u: goto label_3170a0;
        case 0x3170a4u: goto label_3170a4;
        case 0x3170a8u: goto label_3170a8;
        case 0x3170acu: goto label_3170ac;
        case 0x3170b0u: goto label_3170b0;
        case 0x3170b4u: goto label_3170b4;
        case 0x3170b8u: goto label_3170b8;
        case 0x3170bcu: goto label_3170bc;
        case 0x3170c0u: goto label_3170c0;
        case 0x3170c4u: goto label_3170c4;
        case 0x3170c8u: goto label_3170c8;
        case 0x3170ccu: goto label_3170cc;
        case 0x3170d0u: goto label_3170d0;
        case 0x3170d4u: goto label_3170d4;
        case 0x3170d8u: goto label_3170d8;
        case 0x3170dcu: goto label_3170dc;
        case 0x3170e0u: goto label_3170e0;
        case 0x3170e4u: goto label_3170e4;
        case 0x3170e8u: goto label_3170e8;
        case 0x3170ecu: goto label_3170ec;
        case 0x3170f0u: goto label_3170f0;
        case 0x3170f4u: goto label_3170f4;
        case 0x3170f8u: goto label_3170f8;
        case 0x3170fcu: goto label_3170fc;
        case 0x317100u: goto label_317100;
        case 0x317104u: goto label_317104;
        case 0x317108u: goto label_317108;
        case 0x31710cu: goto label_31710c;
        case 0x317110u: goto label_317110;
        case 0x317114u: goto label_317114;
        case 0x317118u: goto label_317118;
        case 0x31711cu: goto label_31711c;
        case 0x317120u: goto label_317120;
        case 0x317124u: goto label_317124;
        case 0x317128u: goto label_317128;
        case 0x31712cu: goto label_31712c;
        case 0x317130u: goto label_317130;
        case 0x317134u: goto label_317134;
        case 0x317138u: goto label_317138;
        case 0x31713cu: goto label_31713c;
        case 0x317140u: goto label_317140;
        case 0x317144u: goto label_317144;
        case 0x317148u: goto label_317148;
        case 0x31714cu: goto label_31714c;
        case 0x317150u: goto label_317150;
        case 0x317154u: goto label_317154;
        case 0x317158u: goto label_317158;
        case 0x31715cu: goto label_31715c;
        case 0x317160u: goto label_317160;
        case 0x317164u: goto label_317164;
        case 0x317168u: goto label_317168;
        case 0x31716cu: goto label_31716c;
        case 0x317170u: goto label_317170;
        case 0x317174u: goto label_317174;
        case 0x317178u: goto label_317178;
        case 0x31717cu: goto label_31717c;
        case 0x317180u: goto label_317180;
        case 0x317184u: goto label_317184;
        case 0x317188u: goto label_317188;
        case 0x31718cu: goto label_31718c;
        case 0x317190u: goto label_317190;
        case 0x317194u: goto label_317194;
        case 0x317198u: goto label_317198;
        case 0x31719cu: goto label_31719c;
        case 0x3171a0u: goto label_3171a0;
        case 0x3171a4u: goto label_3171a4;
        case 0x3171a8u: goto label_3171a8;
        case 0x3171acu: goto label_3171ac;
        case 0x3171b0u: goto label_3171b0;
        case 0x3171b4u: goto label_3171b4;
        case 0x3171b8u: goto label_3171b8;
        case 0x3171bcu: goto label_3171bc;
        case 0x3171c0u: goto label_3171c0;
        case 0x3171c4u: goto label_3171c4;
        case 0x3171c8u: goto label_3171c8;
        case 0x3171ccu: goto label_3171cc;
        case 0x3171d0u: goto label_3171d0;
        case 0x3171d4u: goto label_3171d4;
        case 0x3171d8u: goto label_3171d8;
        case 0x3171dcu: goto label_3171dc;
        case 0x3171e0u: goto label_3171e0;
        case 0x3171e4u: goto label_3171e4;
        case 0x3171e8u: goto label_3171e8;
        case 0x3171ecu: goto label_3171ec;
        case 0x3171f0u: goto label_3171f0;
        case 0x3171f4u: goto label_3171f4;
        case 0x3171f8u: goto label_3171f8;
        case 0x3171fcu: goto label_3171fc;
        case 0x317200u: goto label_317200;
        case 0x317204u: goto label_317204;
        case 0x317208u: goto label_317208;
        case 0x31720cu: goto label_31720c;
        case 0x317210u: goto label_317210;
        case 0x317214u: goto label_317214;
        case 0x317218u: goto label_317218;
        case 0x31721cu: goto label_31721c;
        case 0x317220u: goto label_317220;
        case 0x317224u: goto label_317224;
        case 0x317228u: goto label_317228;
        case 0x31722cu: goto label_31722c;
        case 0x317230u: goto label_317230;
        case 0x317234u: goto label_317234;
        case 0x317238u: goto label_317238;
        case 0x31723cu: goto label_31723c;
        case 0x317240u: goto label_317240;
        case 0x317244u: goto label_317244;
        case 0x317248u: goto label_317248;
        case 0x31724cu: goto label_31724c;
        case 0x317250u: goto label_317250;
        case 0x317254u: goto label_317254;
        case 0x317258u: goto label_317258;
        case 0x31725cu: goto label_31725c;
        case 0x317260u: goto label_317260;
        case 0x317264u: goto label_317264;
        case 0x317268u: goto label_317268;
        case 0x31726cu: goto label_31726c;
        case 0x317270u: goto label_317270;
        case 0x317274u: goto label_317274;
        case 0x317278u: goto label_317278;
        case 0x31727cu: goto label_31727c;
        case 0x317280u: goto label_317280;
        case 0x317284u: goto label_317284;
        case 0x317288u: goto label_317288;
        case 0x31728cu: goto label_31728c;
        case 0x317290u: goto label_317290;
        case 0x317294u: goto label_317294;
        case 0x317298u: goto label_317298;
        case 0x31729cu: goto label_31729c;
        case 0x3172a0u: goto label_3172a0;
        case 0x3172a4u: goto label_3172a4;
        case 0x3172a8u: goto label_3172a8;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b0u: goto label_3172b0;
        case 0x3172b4u: goto label_3172b4;
        case 0x3172b8u: goto label_3172b8;
        case 0x3172bcu: goto label_3172bc;
        case 0x3172c0u: goto label_3172c0;
        case 0x3172c4u: goto label_3172c4;
        case 0x3172c8u: goto label_3172c8;
        case 0x3172ccu: goto label_3172cc;
        case 0x3172d0u: goto label_3172d0;
        case 0x3172d4u: goto label_3172d4;
        case 0x3172d8u: goto label_3172d8;
        case 0x3172dcu: goto label_3172dc;
        case 0x3172e0u: goto label_3172e0;
        case 0x3172e4u: goto label_3172e4;
        case 0x3172e8u: goto label_3172e8;
        case 0x3172ecu: goto label_3172ec;
        case 0x3172f0u: goto label_3172f0;
        case 0x3172f4u: goto label_3172f4;
        case 0x3172f8u: goto label_3172f8;
        case 0x3172fcu: goto label_3172fc;
        case 0x317300u: goto label_317300;
        case 0x317304u: goto label_317304;
        case 0x317308u: goto label_317308;
        case 0x31730cu: goto label_31730c;
        case 0x317310u: goto label_317310;
        case 0x317314u: goto label_317314;
        case 0x317318u: goto label_317318;
        case 0x31731cu: goto label_31731c;
        case 0x317320u: goto label_317320;
        case 0x317324u: goto label_317324;
        case 0x317328u: goto label_317328;
        case 0x31732cu: goto label_31732c;
        case 0x317330u: goto label_317330;
        case 0x317334u: goto label_317334;
        case 0x317338u: goto label_317338;
        case 0x31733cu: goto label_31733c;
        case 0x317340u: goto label_317340;
        case 0x317344u: goto label_317344;
        case 0x317348u: goto label_317348;
        case 0x31734cu: goto label_31734c;
        case 0x317350u: goto label_317350;
        case 0x317354u: goto label_317354;
        case 0x317358u: goto label_317358;
        case 0x31735cu: goto label_31735c;
        case 0x317360u: goto label_317360;
        case 0x317364u: goto label_317364;
        case 0x317368u: goto label_317368;
        case 0x31736cu: goto label_31736c;
        case 0x317370u: goto label_317370;
        case 0x317374u: goto label_317374;
        case 0x317378u: goto label_317378;
        case 0x31737cu: goto label_31737c;
        case 0x317380u: goto label_317380;
        case 0x317384u: goto label_317384;
        case 0x317388u: goto label_317388;
        case 0x31738cu: goto label_31738c;
        case 0x317390u: goto label_317390;
        case 0x317394u: goto label_317394;
        case 0x317398u: goto label_317398;
        case 0x31739cu: goto label_31739c;
        case 0x3173a0u: goto label_3173a0;
        case 0x3173a4u: goto label_3173a4;
        case 0x3173a8u: goto label_3173a8;
        case 0x3173acu: goto label_3173ac;
        case 0x3173b0u: goto label_3173b0;
        case 0x3173b4u: goto label_3173b4;
        case 0x3173b8u: goto label_3173b8;
        case 0x3173bcu: goto label_3173bc;
        case 0x3173c0u: goto label_3173c0;
        case 0x3173c4u: goto label_3173c4;
        case 0x3173c8u: goto label_3173c8;
        default: break;
    }

    ctx->pc = 0x316e80u;

label_316e80:
    // 0x316e80: 0x27bdf4f0  addiu       $sp, $sp, -0xB10
    ctx->pc = 0x316e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964464));
label_316e84:
    // 0x316e84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x316e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_316e88:
    // 0x316e88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x316e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_316e8c:
    // 0x316e8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x316e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_316e90:
    // 0x316e90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x316e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_316e94:
    // 0x316e94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_316e98:
    // 0x316e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_316e9c:
    // 0x316e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_316ea0:
    // 0x316ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x316ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316ea4:
    // 0x316ea4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x316ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_316ea8:
    // 0x316ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316eac:
    // 0x316eac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x316eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_316eb0:
    // 0x316eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316eb4:
    // 0x316eb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x316eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_316eb8:
    // 0x316eb8: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x316eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_316ebc:
    // 0x316ebc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x316ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_316ec0:
    // 0x316ec0: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x316ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_316ec4:
    // 0x316ec4: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x316ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_316ec8:
    // 0x316ec8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x316ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_316ecc:
    // 0x316ecc: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x316eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
label_316ed0:
    // 0x316ed0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x316ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_316ed4:
    // 0x316ed4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x316ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_316ed8:
    // 0x316ed8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x316ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_316edc:
    // 0x316edc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x316edcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_316ee0:
    // 0x316ee0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x316ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_316ee4:
    // 0x316ee4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x316ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_316ee8:
    // 0x316ee8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x316ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_316eec:
    // 0x316eec: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x316eecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_316ef0:
    // 0x316ef0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x316ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_316ef4:
    // 0x316ef4: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x316ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
label_316ef8:
    // 0x316ef8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x316ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_316efc:
    // 0x316efc: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x316efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_316f00:
    // 0x316f00: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x316f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_316f04:
    // 0x316f04: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x316f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_316f08:
    // 0x316f08: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x316f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_316f0c:
    // 0x316f0c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_316f10:
    if (ctx->pc == 0x316F10u) {
        ctx->pc = 0x316F10u;
            // 0x316f10: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x316F14u;
        goto label_316f14;
    }
    ctx->pc = 0x316F0Cu;
    {
        const bool branch_taken_0x316f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316F0Cu;
            // 0x316f10: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f0c) {
            ctx->pc = 0x316EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316eb8;
        }
    }
    ctx->pc = 0x316F14u;
label_316f14:
    // 0x316f14: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x316f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_316f18:
    // 0x316f18: 0x27a50a80  addiu       $a1, $sp, 0xA80
    ctx->pc = 0x316f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_316f1c:
    // 0x316f1c: 0x2442e7a0  addiu       $v0, $v0, -0x1860
    ctx->pc = 0x316f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
label_316f20:
    // 0x316f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316f24:
    // 0x316f24: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x316f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_316f28:
    // 0x316f28: 0xc0a5ae0  jal         func_296B80
label_316f2c:
    if (ctx->pc == 0x316F2Cu) {
        ctx->pc = 0x316F2Cu;
            // 0x316f2c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x316F30u;
        goto label_316f30;
    }
    ctx->pc = 0x316F28u;
    SET_GPR_U32(ctx, 31, 0x316F30u);
    ctx->pc = 0x316F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316F28u;
            // 0x316f2c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B80u;
    if (runtime->hasFunction(0x296B80u)) {
        auto targetFn = runtime->lookupFunction(0x296B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F30u; }
        if (ctx->pc != 0x316F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFPf_0x296b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F30u; }
        if (ctx->pc != 0x316F30u) { return; }
    }
    ctx->pc = 0x316F30u;
label_316f30:
    // 0x316f30: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x316f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_316f34:
    // 0x316f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316f38:
    // 0x316f38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x316f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_316f3c:
    // 0x316f3c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x316f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_316f40:
    // 0x316f40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x316f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_316f44:
    // 0x316f44: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x316f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_316f48:
    // 0x316f48: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x316f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_316f4c:
    // 0x316f4c: 0xc0bb9dc  jal         func_2EE770
label_316f50:
    if (ctx->pc == 0x316F50u) {
        ctx->pc = 0x316F50u;
            // 0x316f50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x316F54u;
        goto label_316f54;
    }
    ctx->pc = 0x316F4Cu;
    SET_GPR_U32(ctx, 31, 0x316F54u);
    ctx->pc = 0x316F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316F4Cu;
            // 0x316f50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F54u; }
        if (ctx->pc != 0x316F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F54u; }
        if (ctx->pc != 0x316F54u) { return; }
    }
    ctx->pc = 0x316F54u;
label_316f54:
    // 0x316f54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x316f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316f58:
    // 0x316f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316f5c:
    // 0x316f5c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x316f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_316f60:
    // 0x316f60: 0x27a60284  addiu       $a2, $sp, 0x284
    ctx->pc = 0x316f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_316f64:
    // 0x316f64: 0xc0bb9dc  jal         func_2EE770
label_316f68:
    if (ctx->pc == 0x316F68u) {
        ctx->pc = 0x316F68u;
            // 0x316f68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x316F6Cu;
        goto label_316f6c;
    }
    ctx->pc = 0x316F64u;
    SET_GPR_U32(ctx, 31, 0x316F6Cu);
    ctx->pc = 0x316F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316F64u;
            // 0x316f68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F6Cu; }
        if (ctx->pc != 0x316F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F6Cu; }
        if (ctx->pc != 0x316F6Cu) { return; }
    }
    ctx->pc = 0x316F6Cu;
label_316f6c:
    // 0x316f6c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x316f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_316f70:
    // 0x316f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316f74:
    // 0x316f74: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x316f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_316f78:
    // 0x316f78: 0x27a60288  addiu       $a2, $sp, 0x288
    ctx->pc = 0x316f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_316f7c:
    // 0x316f7c: 0xc0bb9dc  jal         func_2EE770
label_316f80:
    if (ctx->pc == 0x316F80u) {
        ctx->pc = 0x316F80u;
            // 0x316f80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x316F84u;
        goto label_316f84;
    }
    ctx->pc = 0x316F7Cu;
    SET_GPR_U32(ctx, 31, 0x316F84u);
    ctx->pc = 0x316F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316F7Cu;
            // 0x316f80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F84u; }
        if (ctx->pc != 0x316F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316F84u; }
        if (ctx->pc != 0x316F84u) { return; }
    }
    ctx->pc = 0x316F84u;
label_316f84:
    // 0x316f84: 0x1000004e  b           . + 4 + (0x4E << 2)
label_316f88:
    if (ctx->pc == 0x316F88u) {
        ctx->pc = 0x316F88u;
            // 0x316f88: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x316F8Cu;
        goto label_316f8c;
    }
    ctx->pc = 0x316F84u;
    {
        const bool branch_taken_0x316f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316F84u;
            // 0x316f88: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f84) {
            ctx->pc = 0x3170C0u;
            goto label_3170c0;
        }
    }
    ctx->pc = 0x316F8Cu;
label_316f8c:
    // 0x316f8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x316f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316f90:
    // 0x316f90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x316f90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316f94:
    // 0x316f94: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x316f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_316f98:
    // 0x316f98: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x316f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_316f9c:
    // 0x316f9c: 0xc06c310  jal         func_1B0C40
label_316fa0:
    if (ctx->pc == 0x316FA0u) {
        ctx->pc = 0x316FA0u;
            // 0x316fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316FA4u;
        goto label_316fa4;
    }
    ctx->pc = 0x316F9Cu;
    SET_GPR_U32(ctx, 31, 0x316FA4u);
    ctx->pc = 0x316FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316F9Cu;
            // 0x316fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FA4u; }
        if (ctx->pc != 0x316FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FA4u; }
        if (ctx->pc != 0x316FA4u) { return; }
    }
    ctx->pc = 0x316FA4u;
label_316fa4:
    // 0x316fa4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_316fa8:
    if (ctx->pc == 0x316FA8u) {
        ctx->pc = 0x316FACu;
        goto label_316fac;
    }
    ctx->pc = 0x316FA4u;
    {
        const bool branch_taken_0x316fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316fa4) {
            ctx->pc = 0x316FC4u;
            goto label_316fc4;
        }
    }
    ctx->pc = 0x316FACu;
label_316fac:
    // 0x316fac: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x316facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316fb0:
    // 0x316fb0: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x316fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_316fb4:
    // 0x316fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316fb8:
    // 0x316fb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316fbc:
    // 0x316fbc: 0x320f809  jalr        $t9
label_316fc0:
    if (ctx->pc == 0x316FC0u) {
        ctx->pc = 0x316FC0u;
            // 0x316fc0: 0x24650a90  addiu       $a1, $v1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2704));
        ctx->pc = 0x316FC4u;
        goto label_316fc4;
    }
    ctx->pc = 0x316FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316FC4u);
        ctx->pc = 0x316FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316FBCu;
            // 0x316fc0: 0x24650a90  addiu       $a1, $v1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316FC4u; }
            if (ctx->pc != 0x316FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x316FC4u;
label_316fc4:
    // 0x316fc4: 0x0  nop
    ctx->pc = 0x316fc4u;
    // NOP
label_316fc8:
    // 0x316fc8: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x316fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_316fcc:
    // 0x316fcc: 0xac400a94  sw          $zero, 0xA94($v0)
    ctx->pc = 0x316fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2708), GPR_U32(ctx, 0));
label_316fd0:
    // 0x316fd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x316fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_316fd4:
    // 0x316fd4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x316fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_316fd8:
    // 0x316fd8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x316fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_316fdc:
    // 0x316fdc: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_316fe0:
    if (ctx->pc == 0x316FE0u) {
        ctx->pc = 0x316FE0u;
            // 0x316fe0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x316FE4u;
        goto label_316fe4;
    }
    ctx->pc = 0x316FDCu;
    {
        const bool branch_taken_0x316fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316FDCu;
            // 0x316fe0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fdc) {
            ctx->pc = 0x316F94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316f94;
        }
    }
    ctx->pc = 0x316FE4u;
label_316fe4:
    // 0x316fe4: 0x27b20aa0  addiu       $s2, $sp, 0xAA0
    ctx->pc = 0x316fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2720));
label_316fe8:
    // 0x316fe8: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x316fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_316fec:
    // 0x316fec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x316fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316ff0:
    // 0x316ff0: 0xc041c3e  jal         func_1070F8
label_316ff4:
    if (ctx->pc == 0x316FF4u) {
        ctx->pc = 0x316FF4u;
            // 0x316ff4: 0x27a60a90  addiu       $a2, $sp, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
        ctx->pc = 0x316FF8u;
        goto label_316ff8;
    }
    ctx->pc = 0x316FF0u;
    SET_GPR_U32(ctx, 31, 0x316FF8u);
    ctx->pc = 0x316FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316FF0u;
            // 0x316ff4: 0x27a60a90  addiu       $a2, $sp, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FF8u; }
        if (ctx->pc != 0x316FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FF8u; }
        if (ctx->pc != 0x316FF8u) { return; }
    }
    ctx->pc = 0x316FF8u;
label_316ff8:
    // 0x316ff8: 0x27b30ab0  addiu       $s3, $sp, 0xAB0
    ctx->pc = 0x316ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2736));
label_316ffc:
    // 0x316ffc: 0x27a40ad0  addiu       $a0, $sp, 0xAD0
    ctx->pc = 0x316ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2768));
label_317000:
    // 0x317000: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x317000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_317004:
    // 0x317004: 0xc041c3e  jal         func_1070F8
label_317008:
    if (ctx->pc == 0x317008u) {
        ctx->pc = 0x317008u;
            // 0x317008: 0x27a60a90  addiu       $a2, $sp, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
        ctx->pc = 0x31700Cu;
        goto label_31700c;
    }
    ctx->pc = 0x317004u;
    SET_GPR_U32(ctx, 31, 0x31700Cu);
    ctx->pc = 0x317008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317004u;
            // 0x317008: 0x27a60a90  addiu       $a2, $sp, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31700Cu; }
        if (ctx->pc != 0x31700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31700Cu; }
        if (ctx->pc != 0x31700Cu) { return; }
    }
    ctx->pc = 0x31700Cu;
label_31700c:
    // 0x31700c: 0xc04bff4  jal         func_12FFD0
label_317010:
    if (ctx->pc == 0x317010u) {
        ctx->pc = 0x317010u;
            // 0x317010: 0x27a40ac0  addiu       $a0, $sp, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
        ctx->pc = 0x317014u;
        goto label_317014;
    }
    ctx->pc = 0x31700Cu;
    SET_GPR_U32(ctx, 31, 0x317014u);
    ctx->pc = 0x317010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31700Cu;
            // 0x317010: 0x27a40ac0  addiu       $a0, $sp, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317014u; }
        if (ctx->pc != 0x317014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317014u; }
        if (ctx->pc != 0x317014u) { return; }
    }
    ctx->pc = 0x317014u;
label_317014:
    // 0x317014: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x317014u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_317018:
    // 0x317018: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x317018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_31701c:
    // 0x31701c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31701cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317020:
    // 0x317020: 0x0  nop
    ctx->pc = 0x317020u;
    // NOP
label_317024:
    // 0x317024: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x317024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317028:
    // 0x317028: 0x0  nop
    ctx->pc = 0x317028u;
    // NOP
label_31702c:
    // 0x31702c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_317030:
    if (ctx->pc == 0x317030u) {
        ctx->pc = 0x317030u;
            // 0x317030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317034u;
        goto label_317034;
    }
    ctx->pc = 0x31702Cu;
    {
        const bool branch_taken_0x31702c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31702Cu;
            // 0x317030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31702c) {
            ctx->pc = 0x3170D0u;
            goto label_3170d0;
        }
    }
    ctx->pc = 0x317034u;
label_317034:
    // 0x317034: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x317034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_317038:
    // 0x317038: 0xc041be0  jal         func_106F80
label_31703c:
    if (ctx->pc == 0x31703Cu) {
        ctx->pc = 0x31703Cu;
            // 0x31703c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317040u;
        goto label_317040;
    }
    ctx->pc = 0x317038u;
    SET_GPR_U32(ctx, 31, 0x317040u);
    ctx->pc = 0x31703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317038u;
            // 0x31703c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317040u; }
        if (ctx->pc != 0x317040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317040u; }
        if (ctx->pc != 0x317040u) { return; }
    }
    ctx->pc = 0x317040u;
label_317040:
    // 0x317040: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x317040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_317044:
    // 0x317044: 0xc041bd6  jal         func_106F58
label_317048:
    if (ctx->pc == 0x317048u) {
        ctx->pc = 0x317048u;
            // 0x317048: 0x27a50ad0  addiu       $a1, $sp, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2768));
        ctx->pc = 0x31704Cu;
        goto label_31704c;
    }
    ctx->pc = 0x317044u;
    SET_GPR_U32(ctx, 31, 0x31704Cu);
    ctx->pc = 0x317048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317044u;
            // 0x317048: 0x27a50ad0  addiu       $a1, $sp, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31704Cu; }
        if (ctx->pc != 0x31704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31704Cu; }
        if (ctx->pc != 0x31704Cu) { return; }
    }
    ctx->pc = 0x31704Cu;
label_31704c:
    // 0x31704c: 0x0  nop
    ctx->pc = 0x31704cu;
    // NOP
label_317050:
    // 0x317050: 0x0  nop
    ctx->pc = 0x317050u;
    // NOP
label_317054:
    // 0x317054: 0x46140043  div.s       $f1, $f0, $f20
    ctx->pc = 0x317054u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_317058:
    // 0x317058: 0x0  nop
    ctx->pc = 0x317058u;
    // NOP
label_31705c:
    // 0x31705c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31705cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317060:
    // 0x317060: 0x0  nop
    ctx->pc = 0x317060u;
    // NOP
label_317064:
    // 0x317064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317068:
    // 0x317068: 0x0  nop
    ctx->pc = 0x317068u;
    // NOP
label_31706c:
    // 0x31706c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_317070:
    if (ctx->pc == 0x317070u) {
        ctx->pc = 0x317070u;
            // 0x317070: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x317074u;
        goto label_317074;
    }
    ctx->pc = 0x31706Cu;
    {
        const bool branch_taken_0x31706c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31706Cu;
            // 0x317070: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31706c) {
            ctx->pc = 0x3170CCu;
            goto label_3170cc;
        }
    }
    ctx->pc = 0x317074u;
label_317074:
    // 0x317074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317078:
    // 0x317078: 0x0  nop
    ctx->pc = 0x317078u;
    // NOP
label_31707c:
    // 0x31707c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317080:
    // 0x317080: 0x0  nop
    ctx->pc = 0x317080u;
    // NOP
label_317084:
    // 0x317084: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_317088:
    if (ctx->pc == 0x317088u) {
        ctx->pc = 0x317088u;
            // 0x317088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31708Cu;
        goto label_31708c;
    }
    ctx->pc = 0x317084u;
    {
        const bool branch_taken_0x317084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317084u;
            // 0x317088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317084) {
            ctx->pc = 0x3170CCu;
            goto label_3170cc;
        }
    }
    ctx->pc = 0x31708Cu;
label_31708c:
    // 0x31708c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31708cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_317090:
    // 0x317090: 0x27a50a90  addiu       $a1, $sp, 0xA90
    ctx->pc = 0x317090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
label_317094:
    // 0x317094: 0xc04bd7c  jal         func_12F5F0
label_317098:
    if (ctx->pc == 0x317098u) {
        ctx->pc = 0x317098u;
            // 0x317098: 0x27a70ae0  addiu       $a3, $sp, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
        ctx->pc = 0x31709Cu;
        goto label_31709c;
    }
    ctx->pc = 0x317094u;
    SET_GPR_U32(ctx, 31, 0x31709Cu);
    ctx->pc = 0x317098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317094u;
            // 0x317098: 0x27a70ae0  addiu       $a3, $sp, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31709Cu; }
        if (ctx->pc != 0x31709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31709Cu; }
        if (ctx->pc != 0x31709Cu) { return; }
    }
    ctx->pc = 0x31709Cu;
label_31709c:
    // 0x31709c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3170a0:
    // 0x3170a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3170a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3170a4:
    // 0x3170a4: 0x0  nop
    ctx->pc = 0x3170a4u;
    // NOP
label_3170a8:
    // 0x3170a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3170a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3170ac:
    // 0x3170ac: 0x0  nop
    ctx->pc = 0x3170acu;
    // NOP
label_3170b0:
    // 0x3170b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3170b4:
    if (ctx->pc == 0x3170B4u) {
        ctx->pc = 0x3170B4u;
            // 0x3170b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3170B8u;
        goto label_3170b8;
    }
    ctx->pc = 0x3170B0u;
    {
        const bool branch_taken_0x3170b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3170B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3170B0u;
            // 0x3170b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170b0) {
            ctx->pc = 0x3170CCu;
            goto label_3170cc;
        }
    }
    ctx->pc = 0x3170B8u;
label_3170b8:
    // 0x3170b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3170bc:
    if (ctx->pc == 0x3170BCu) {
        ctx->pc = 0x3170BCu;
            // 0x3170bc: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x3170C0u;
        goto label_3170c0;
    }
    ctx->pc = 0x3170B8u;
    {
        const bool branch_taken_0x3170b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3170BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3170B8u;
            // 0x3170bc: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170b8) {
            ctx->pc = 0x3170CCu;
            goto label_3170cc;
        }
    }
    ctx->pc = 0x3170C0u;
label_3170c0:
    // 0x3170c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3170c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3170c4:
    // 0x3170c4: 0x1242ffb1  beq         $s2, $v0, . + 4 + (-0x4F << 2)
label_3170c8:
    if (ctx->pc == 0x3170C8u) {
        ctx->pc = 0x3170C8u;
            // 0x3170c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3170CCu;
        goto label_3170cc;
    }
    ctx->pc = 0x3170C4u;
    {
        const bool branch_taken_0x3170c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3170C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3170C4u;
            // 0x3170c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170c4) {
            ctx->pc = 0x316F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316f8c;
        }
    }
    ctx->pc = 0x3170CCu;
label_3170cc:
    // 0x3170cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3170ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3170d0:
    // 0x3170d0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3170d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3170d4:
    // 0x3170d4: 0x27a60afc  addiu       $a2, $sp, 0xAFC
    ctx->pc = 0x3170d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2812));
label_3170d8:
    // 0x3170d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3170d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3170dc:
    // 0x3170dc: 0xc0bb9dc  jal         func_2EE770
label_3170e0:
    if (ctx->pc == 0x3170E0u) {
        ctx->pc = 0x3170E0u;
            // 0x3170e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3170E4u;
        goto label_3170e4;
    }
    ctx->pc = 0x3170DCu;
    SET_GPR_U32(ctx, 31, 0x3170E4u);
    ctx->pc = 0x3170E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3170DCu;
            // 0x3170e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3170E4u; }
        if (ctx->pc != 0x3170E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3170E4u; }
        if (ctx->pc != 0x3170E4u) { return; }
    }
    ctx->pc = 0x3170E4u;
label_3170e4:
    // 0x3170e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3170e8:
    if (ctx->pc == 0x3170E8u) {
        ctx->pc = 0x3170E8u;
            // 0x3170e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3170ECu;
        goto label_3170ec;
    }
    ctx->pc = 0x3170E4u;
    {
        const bool branch_taken_0x3170e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3170E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3170E4u;
            // 0x3170e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170e4) {
            ctx->pc = 0x317118u;
            goto label_317118;
        }
    }
    ctx->pc = 0x3170ECu;
label_3170ec:
    // 0x3170ec: 0x8fa50afc  lw          $a1, 0xAFC($sp)
    ctx->pc = 0x3170ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2812)));
label_3170f0:
    // 0x3170f0: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x3170f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_3170f4:
    // 0x3170f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3170f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3170f8:
    // 0x3170f8: 0xc0a5b68  jal         func_296DA0
label_3170fc:
    if (ctx->pc == 0x3170FCu) {
        ctx->pc = 0x3170FCu;
            // 0x3170fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317100u;
        goto label_317100;
    }
    ctx->pc = 0x3170F8u;
    SET_GPR_U32(ctx, 31, 0x317100u);
    ctx->pc = 0x3170FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3170F8u;
            // 0x3170fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DA0u;
    if (runtime->hasFunction(0x296DA0u)) {
        auto targetFn = runtime->lookupFunction(0x296DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317100u; }
        if (ctx->pc != 0x317100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFif_0x296da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317100u; }
        if (ctx->pc != 0x317100u) { return; }
    }
    ctx->pc = 0x317100u;
label_317100:
    // 0x317100: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x317100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_317104:
    // 0x317104: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_317108:
    if (ctx->pc == 0x317108u) {
        ctx->pc = 0x31710Cu;
        goto label_31710c;
    }
    ctx->pc = 0x317104u;
    {
        const bool branch_taken_0x317104 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x317104) {
            ctx->pc = 0x317110u;
            goto label_317110;
        }
    }
    ctx->pc = 0x31710Cu;
label_31710c:
    // 0x31710c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_317110:
    // 0x317110: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x317110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_317114:
    // 0x317114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317118:
    // 0x317118: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x317118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_31711c:
    // 0x31711c: 0x27a60b00  addiu       $a2, $sp, 0xB00
    ctx->pc = 0x31711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2816));
label_317120:
    // 0x317120: 0xc0bb9dc  jal         func_2EE770
label_317124:
    if (ctx->pc == 0x317124u) {
        ctx->pc = 0x317124u;
            // 0x317124: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317128u;
        goto label_317128;
    }
    ctx->pc = 0x317120u;
    SET_GPR_U32(ctx, 31, 0x317128u);
    ctx->pc = 0x317124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317120u;
            // 0x317124: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317128u; }
        if (ctx->pc != 0x317128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317128u; }
        if (ctx->pc != 0x317128u) { return; }
    }
    ctx->pc = 0x317128u;
label_317128:
    // 0x317128: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31712c:
    if (ctx->pc == 0x31712Cu) {
        ctx->pc = 0x31712Cu;
            // 0x31712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317130u;
        goto label_317130;
    }
    ctx->pc = 0x317128u;
    {
        const bool branch_taken_0x317128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317128u;
            // 0x31712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317128) {
            ctx->pc = 0x31715Cu;
            goto label_31715c;
        }
    }
    ctx->pc = 0x317130u;
label_317130:
    // 0x317130: 0x8fa50b00  lw          $a1, 0xB00($sp)
    ctx->pc = 0x317130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2816)));
label_317134:
    // 0x317134: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x317134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_317138:
    // 0x317138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x317138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31713c:
    // 0x31713c: 0xc0a5b68  jal         func_296DA0
label_317140:
    if (ctx->pc == 0x317140u) {
        ctx->pc = 0x317140u;
            // 0x317140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317144u;
        goto label_317144;
    }
    ctx->pc = 0x31713Cu;
    SET_GPR_U32(ctx, 31, 0x317144u);
    ctx->pc = 0x317140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31713Cu;
            // 0x317140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DA0u;
    if (runtime->hasFunction(0x296DA0u)) {
        auto targetFn = runtime->lookupFunction(0x296DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317144u; }
        if (ctx->pc != 0x317144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFif_0x296da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317144u; }
        if (ctx->pc != 0x317144u) { return; }
    }
    ctx->pc = 0x317144u;
label_317144:
    // 0x317144: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x317144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_317148:
    // 0x317148: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_31714c:
    if (ctx->pc == 0x31714Cu) {
        ctx->pc = 0x317150u;
        goto label_317150;
    }
    ctx->pc = 0x317148u;
    {
        const bool branch_taken_0x317148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x317148) {
            ctx->pc = 0x317154u;
            goto label_317154;
        }
    }
    ctx->pc = 0x317150u;
label_317150:
    // 0x317150: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x317150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_317154:
    // 0x317154: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x317154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_317158:
    // 0x317158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31715c:
    // 0x31715c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x31715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_317160:
    // 0x317160: 0x27a60b04  addiu       $a2, $sp, 0xB04
    ctx->pc = 0x317160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2820));
label_317164:
    // 0x317164: 0xc0bb9dc  jal         func_2EE770
label_317168:
    if (ctx->pc == 0x317168u) {
        ctx->pc = 0x317168u;
            // 0x317168: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31716Cu;
        goto label_31716c;
    }
    ctx->pc = 0x317164u;
    SET_GPR_U32(ctx, 31, 0x31716Cu);
    ctx->pc = 0x317168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317164u;
            // 0x317168: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31716Cu; }
        if (ctx->pc != 0x31716Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31716Cu; }
        if (ctx->pc != 0x31716Cu) { return; }
    }
    ctx->pc = 0x31716Cu;
label_31716c:
    // 0x31716c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_317170:
    if (ctx->pc == 0x317170u) {
        ctx->pc = 0x317170u;
            // 0x317170: 0x2a42000f  slti        $v0, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->pc = 0x317174u;
        goto label_317174;
    }
    ctx->pc = 0x31716Cu;
    {
        const bool branch_taken_0x31716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31716Cu;
            // 0x317170: 0x2a42000f  slti        $v0, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31716c) {
            ctx->pc = 0x3171A0u;
            goto label_3171a0;
        }
    }
    ctx->pc = 0x317174u;
label_317174:
    // 0x317174: 0x8fa50b04  lw          $a1, 0xB04($sp)
    ctx->pc = 0x317174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2820)));
label_317178:
    // 0x317178: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x317178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_31717c:
    // 0x31717c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31717cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_317180:
    // 0x317180: 0xc0a5b68  jal         func_296DA0
label_317184:
    if (ctx->pc == 0x317184u) {
        ctx->pc = 0x317184u;
            // 0x317184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317188u;
        goto label_317188;
    }
    ctx->pc = 0x317180u;
    SET_GPR_U32(ctx, 31, 0x317188u);
    ctx->pc = 0x317184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317180u;
            // 0x317184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DA0u;
    if (runtime->hasFunction(0x296DA0u)) {
        auto targetFn = runtime->lookupFunction(0x296DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317188u; }
        if (ctx->pc != 0x317188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFif_0x296da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317188u; }
        if (ctx->pc != 0x317188u) { return; }
    }
    ctx->pc = 0x317188u;
label_317188:
    // 0x317188: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x317188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_31718c:
    // 0x31718c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_317190:
    if (ctx->pc == 0x317190u) {
        ctx->pc = 0x317194u;
        goto label_317194;
    }
    ctx->pc = 0x31718Cu;
    {
        const bool branch_taken_0x31718c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31718c) {
            ctx->pc = 0x317198u;
            goto label_317198;
        }
    }
    ctx->pc = 0x317194u;
label_317194:
    // 0x317194: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x317194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_317198:
    // 0x317198: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x317198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_31719c:
    // 0x31719c: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x31719cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
label_3171a0:
    // 0x3171a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3171a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3171a4:
    // 0x3171a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3171a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3171a8:
    // 0x3171a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3171a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3171ac:
    // 0x3171ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3171acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3171b0:
    // 0x3171b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3171b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3171b4:
    // 0x3171b4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x3171b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_3171b8:
    // 0x3171b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3171b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3171bc:
    // 0x3171bc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3171bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_3171c0:
    // 0x3171c0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3171c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_3171c4:
    // 0x3171c4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3171c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3171c8:
    // 0x3171c8: 0xc0bb998  jal         func_2EE660
label_3171cc:
    if (ctx->pc == 0x3171CCu) {
        ctx->pc = 0x3171CCu;
            // 0x3171cc: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->pc = 0x3171D0u;
        goto label_3171d0;
    }
    ctx->pc = 0x3171C8u;
    SET_GPR_U32(ctx, 31, 0x3171D0u);
    ctx->pc = 0x3171CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3171C8u;
            // 0x3171cc: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3171D0u; }
        if (ctx->pc != 0x3171D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3171D0u; }
        if (ctx->pc != 0x3171D0u) { return; }
    }
    ctx->pc = 0x3171D0u;
label_3171d0:
    // 0x3171d0: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x3171d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_3171d4:
    // 0x3171d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3171d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3171d8:
    // 0x3171d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3171d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3171dc:
    // 0x3171dc: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x3171dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_3171e0:
    // 0x3171e0: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x3171e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_3171e4:
    // 0x3171e4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3171e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3171e8:
    // 0x3171e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3171e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3171ec:
    // 0x3171ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3171ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3171f0:
    // 0x3171f0: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x3171f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_3171f4:
    // 0x3171f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3171f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3171f8:
    // 0x3171f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3171f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3171fc:
    // 0x3171fc: 0xc0bb998  jal         func_2EE660
label_317200:
    if (ctx->pc == 0x317200u) {
        ctx->pc = 0x317200u;
            // 0x317200: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->pc = 0x317204u;
        goto label_317204;
    }
    ctx->pc = 0x3171FCu;
    SET_GPR_U32(ctx, 31, 0x317204u);
    ctx->pc = 0x317200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3171FCu;
            // 0x317200: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317204u; }
        if (ctx->pc != 0x317204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317204u; }
        if (ctx->pc != 0x317204u) { return; }
    }
    ctx->pc = 0x317204u;
label_317204:
    // 0x317204: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x317204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_317208:
    // 0x317208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31720c:
    // 0x31720c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x31720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_317210:
    // 0x317210: 0xc0bb998  jal         func_2EE660
label_317214:
    if (ctx->pc == 0x317214u) {
        ctx->pc = 0x317214u;
            // 0x317214: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x317218u;
        goto label_317218;
    }
    ctx->pc = 0x317210u;
    SET_GPR_U32(ctx, 31, 0x317218u);
    ctx->pc = 0x317214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317210u;
            // 0x317214: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317218u; }
        if (ctx->pc != 0x317218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317218u; }
        if (ctx->pc != 0x317218u) { return; }
    }
    ctx->pc = 0x317218u;
label_317218:
    // 0x317218: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x317218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_31721c:
    // 0x31721c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317220:
    // 0x317220: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x317220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_317224:
    // 0x317224: 0xc0bb998  jal         func_2EE660
label_317228:
    if (ctx->pc == 0x317228u) {
        ctx->pc = 0x317228u;
            // 0x317228: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x31722Cu;
        goto label_31722c;
    }
    ctx->pc = 0x317224u;
    SET_GPR_U32(ctx, 31, 0x31722Cu);
    ctx->pc = 0x317228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317224u;
            // 0x317228: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31722Cu; }
        if (ctx->pc != 0x31722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31722Cu; }
        if (ctx->pc != 0x31722Cu) { return; }
    }
    ctx->pc = 0x31722Cu;
label_31722c:
    // 0x31722c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x31722cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_317230:
    // 0x317230: 0xc0c5b10  jal         func_316C40
label_317234:
    if (ctx->pc == 0x317234u) {
        ctx->pc = 0x317234u;
            // 0x317234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317238u;
        goto label_317238;
    }
    ctx->pc = 0x317230u;
    SET_GPR_U32(ctx, 31, 0x317238u);
    ctx->pc = 0x317234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317230u;
            // 0x317234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316C40u;
    if (runtime->hasFunction(0x316C40u)) {
        auto targetFn = runtime->lookupFunction(0x316C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317238u; }
        if (ctx->pc != 0x317238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTreeNum__FP8CEditMap_0x316c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317238u; }
        if (ctx->pc != 0x317238u) { return; }
    }
    ctx->pc = 0x317238u;
label_317238:
    // 0x317238: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x317238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_31723c:
    // 0x31723c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317240:
    // 0x317240: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x317240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317244:
    // 0x317244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x317244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317248:
    // 0x317248: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x317248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31724c:
    // 0x31724c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317250:
    // 0x317250: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x317250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_317254:
    // 0x317254: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x317254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_317258:
    // 0x317258: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x317258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_31725c:
    // 0x31725c: 0xc0bb998  jal         func_2EE660
label_317260:
    if (ctx->pc == 0x317260u) {
        ctx->pc = 0x317260u;
            // 0x317260: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x317264u;
        goto label_317264;
    }
    ctx->pc = 0x31725Cu;
    SET_GPR_U32(ctx, 31, 0x317264u);
    ctx->pc = 0x317260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31725Cu;
            // 0x317260: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317264u; }
        if (ctx->pc != 0x317264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317264u; }
        if (ctx->pc != 0x317264u) { return; }
    }
    ctx->pc = 0x317264u;
label_317264:
    // 0x317264: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x317264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_317268:
    // 0x317268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31726c:
    // 0x31726c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x31726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_317270:
    // 0x317270: 0x27a60b08  addiu       $a2, $sp, 0xB08
    ctx->pc = 0x317270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2824));
label_317274:
    // 0x317274: 0xc0bb9dc  jal         func_2EE770
label_317278:
    if (ctx->pc == 0x317278u) {
        ctx->pc = 0x317278u;
            // 0x317278: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31727Cu;
        goto label_31727c;
    }
    ctx->pc = 0x317274u;
    SET_GPR_U32(ctx, 31, 0x31727Cu);
    ctx->pc = 0x317278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317274u;
            // 0x317278: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31727Cu; }
        if (ctx->pc != 0x31727Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31727Cu; }
        if (ctx->pc != 0x31727Cu) { return; }
    }
    ctx->pc = 0x31727Cu;
label_31727c:
    // 0x31727c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_317280:
    if (ctx->pc == 0x317280u) {
        ctx->pc = 0x317284u;
        goto label_317284;
    }
    ctx->pc = 0x31727Cu;
    {
        const bool branch_taken_0x31727c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31727c) {
            ctx->pc = 0x3172E0u;
            goto label_3172e0;
        }
    }
    ctx->pc = 0x317284u;
label_317284:
    // 0x317284: 0x8fa50b08  lw          $a1, 0xB08($sp)
    ctx->pc = 0x317284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2824)));
label_317288:
    // 0x317288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31728c:
    // 0x31728c: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x31728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_317290:
    // 0x317290: 0xc0bba8c  jal         func_2EEA30
label_317294:
    if (ctx->pc == 0x317294u) {
        ctx->pc = 0x317294u;
            // 0x317294: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x317298u;
        goto label_317298;
    }
    ctx->pc = 0x317290u;
    SET_GPR_U32(ctx, 31, 0x317298u);
    ctx->pc = 0x317294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317290u;
            // 0x317294: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA30u;
    if (runtime->hasFunction(0x2EEA30u)) {
        auto targetFn = runtime->lookupFunction(0x2EEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317298u; }
        if (ctx->pc != 0x317298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChildParts__8CEditMapFiPii_0x2eea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317298u; }
        if (ctx->pc != 0x317298u) { return; }
    }
    ctx->pc = 0x317298u;
label_317298:
    // 0x317298: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31729c:
    // 0x31729c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x31729cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3172a0:
    // 0x3172a0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_3172a4:
    if (ctx->pc == 0x3172A4u) {
        ctx->pc = 0x3172A4u;
            // 0x3172a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3172A8u;
        goto label_3172a8;
    }
    ctx->pc = 0x3172A0u;
    {
        const bool branch_taken_0x3172a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3172A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3172A0u;
            // 0x3172a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172a0) {
            ctx->pc = 0x3172E0u;
            goto label_3172e0;
        }
    }
    ctx->pc = 0x3172A8u;
label_3172a8:
    // 0x3172a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3172a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3172ac:
    // 0x3172ac: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x3172acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_3172b0:
    // 0x3172b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3172b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3172b4:
    // 0x3172b4: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x3172b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_3172b8:
    // 0x3172b8: 0xc0c5b70  jal         func_316DC0
label_3172bc:
    if (ctx->pc == 0x3172BCu) {
        ctx->pc = 0x3172BCu;
            // 0x3172bc: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3172C0u;
        goto label_3172c0;
    }
    ctx->pc = 0x3172B8u;
    SET_GPR_U32(ctx, 31, 0x3172C0u);
    ctx->pc = 0x3172BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3172B8u;
            // 0x3172bc: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316DC0u;
    if (runtime->hasFunction(0x316DC0u)) {
        auto targetFn = runtime->lookupFunction(0x316DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3172C0u; }
        if (ctx->pc != 0x3172C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInfoID__FP8CEditMapii_0x316dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3172C0u; }
        if (ctx->pc != 0x3172C0u) { return; }
    }
    ctx->pc = 0x3172C0u;
label_3172c0:
    // 0x3172c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3172c4:
    if (ctx->pc == 0x3172C4u) {
        ctx->pc = 0x3172C4u;
            // 0x3172c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3172C8u;
        goto label_3172c8;
    }
    ctx->pc = 0x3172C0u;
    {
        const bool branch_taken_0x3172c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3172C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3172C0u;
            // 0x3172c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172c0) {
            ctx->pc = 0x3172CCu;
            goto label_3172cc;
        }
    }
    ctx->pc = 0x3172C8u;
label_3172c8:
    // 0x3172c8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3172c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_3172cc:
    // 0x3172cc: 0x0  nop
    ctx->pc = 0x3172ccu;
    // NOP
label_3172d0:
    // 0x3172d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3172d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3172d4:
    // 0x3172d4: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3172d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3172d8:
    // 0x3172d8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3172dc:
    if (ctx->pc == 0x3172DCu) {
        ctx->pc = 0x3172DCu;
            // 0x3172dc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x3172E0u;
        goto label_3172e0;
    }
    ctx->pc = 0x3172D8u;
    {
        const bool branch_taken_0x3172d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3172DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3172D8u;
            // 0x3172dc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172d8) {
            ctx->pc = 0x3172ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3172ac;
        }
    }
    ctx->pc = 0x3172E0u;
label_3172e0:
    // 0x3172e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3172e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3172e4:
    // 0x3172e4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x3172e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3172e8:
    // 0x3172e8: 0x27a60b0c  addiu       $a2, $sp, 0xB0C
    ctx->pc = 0x3172e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2828));
label_3172ec:
    // 0x3172ec: 0xc0bb9dc  jal         func_2EE770
label_3172f0:
    if (ctx->pc == 0x3172F0u) {
        ctx->pc = 0x3172F0u;
            // 0x3172f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3172F4u;
        goto label_3172f4;
    }
    ctx->pc = 0x3172ECu;
    SET_GPR_U32(ctx, 31, 0x3172F4u);
    ctx->pc = 0x3172F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3172ECu;
            // 0x3172f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3172F4u; }
        if (ctx->pc != 0x3172F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3172F4u; }
        if (ctx->pc != 0x3172F4u) { return; }
    }
    ctx->pc = 0x3172F4u;
label_3172f4:
    // 0x3172f4: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_3172f8:
    if (ctx->pc == 0x3172F8u) {
        ctx->pc = 0x3172FCu;
        goto label_3172fc;
    }
    ctx->pc = 0x3172F4u;
    {
        const bool branch_taken_0x3172f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3172f4) {
            ctx->pc = 0x317368u;
            goto label_317368;
        }
    }
    ctx->pc = 0x3172FCu;
label_3172fc:
    // 0x3172fc: 0x8fa50b0c  lw          $a1, 0xB0C($sp)
    ctx->pc = 0x3172fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2828)));
label_317300:
    // 0x317300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317304:
    // 0x317304: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x317304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_317308:
    // 0x317308: 0xc0bba48  jal         func_2EE920
label_31730c:
    if (ctx->pc == 0x31730Cu) {
        ctx->pc = 0x31730Cu;
            // 0x31730c: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x317310u;
        goto label_317310;
    }
    ctx->pc = 0x317308u;
    SET_GPR_U32(ctx, 31, 0x317310u);
    ctx->pc = 0x31730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317308u;
            // 0x31730c: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317310u; }
        if (ctx->pc != 0x317310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317310u; }
        if (ctx->pc != 0x317310u) { return; }
    }
    ctx->pc = 0x317310u;
label_317310:
    // 0x317310: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317314:
    // 0x317314: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x317314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317318:
    // 0x317318: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x317318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_31731c:
    // 0x31731c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_317320:
    if (ctx->pc == 0x317320u) {
        ctx->pc = 0x317320u;
            // 0x317320: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317324u;
        goto label_317324;
    }
    ctx->pc = 0x31731Cu;
    {
        const bool branch_taken_0x31731c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x317320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31731Cu;
            // 0x317320: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31731c) {
            ctx->pc = 0x317358u;
            goto label_317358;
        }
    }
    ctx->pc = 0x317324u;
label_317324:
    // 0x317324: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x317324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317328:
    // 0x317328: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x317328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_31732c:
    // 0x31732c: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x31732cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_317330:
    // 0x317330: 0xc0c5b00  jal         func_316C00
label_317334:
    if (ctx->pc == 0x317334u) {
        ctx->pc = 0x317334u;
            // 0x317334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317338u;
        goto label_317338;
    }
    ctx->pc = 0x317330u;
    SET_GPR_U32(ctx, 31, 0x317338u);
    ctx->pc = 0x317334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317330u;
            // 0x317334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316C00u;
    if (runtime->hasFunction(0x316C00u)) {
        auto targetFn = runtime->lookupFunction(0x316C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317338u; }
        if (ctx->pc != 0x317338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSaku__FP8CEditMapi_0x316c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317338u; }
        if (ctx->pc != 0x317338u) { return; }
    }
    ctx->pc = 0x317338u;
label_317338:
    // 0x317338: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_31733c:
    if (ctx->pc == 0x31733Cu) {
        ctx->pc = 0x317340u;
        goto label_317340;
    }
    ctx->pc = 0x317338u;
    {
        const bool branch_taken_0x317338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317338) {
            ctx->pc = 0x317344u;
            goto label_317344;
        }
    }
    ctx->pc = 0x317340u;
label_317340:
    // 0x317340: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x317340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_317344:
    // 0x317344: 0x0  nop
    ctx->pc = 0x317344u;
    // NOP
label_317348:
    // 0x317348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x317348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31734c:
    // 0x31734c: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x31734cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_317350:
    // 0x317350: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_317354:
    if (ctx->pc == 0x317354u) {
        ctx->pc = 0x317354u;
            // 0x317354: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x317358u;
        goto label_317358;
    }
    ctx->pc = 0x317350u;
    {
        const bool branch_taken_0x317350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317350u;
            // 0x317354: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317350) {
            ctx->pc = 0x317328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317328;
        }
    }
    ctx->pc = 0x317358u;
label_317358:
    // 0x317358: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x317358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_31735c:
    // 0x31735c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317360:
    // 0x317360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317364:
    // 0x317364: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x317364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_317368:
    // 0x317368: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x317368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31736c:
    // 0x31736c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317370:
    // 0x317370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317374:
    // 0x317374: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x317374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_317378:
    // 0x317378: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x317378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_31737c:
    // 0x31737c: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x31737cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_317380:
    // 0x317380: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317384:
    // 0x317384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_317388:
    // 0x317388: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x317388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_31738c:
    // 0x31738c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_317390:
    // 0x317390: 0x28420032  slti        $v0, $v0, 0x32
    ctx->pc = 0x317390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_317394:
    // 0x317394: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317398:
    // 0x317398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31739c:
    // 0x31739c: 0xc0aa7f4  jal         func_2A9FD0
label_3173a0:
    if (ctx->pc == 0x3173A0u) {
        ctx->pc = 0x3173A0u;
            // 0x3173a0: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->pc = 0x3173A4u;
        goto label_3173a4;
    }
    ctx->pc = 0x31739Cu;
    SET_GPR_U32(ctx, 31, 0x3173A4u);
    ctx->pc = 0x3173A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31739Cu;
            // 0x3173a0: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3173A4u; }
        if (ctx->pc != 0x3173A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3173A4u; }
        if (ctx->pc != 0x3173A4u) { return; }
    }
    ctx->pc = 0x3173A4u;
label_3173a4:
    // 0x3173a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3173a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3173a8:
    // 0x3173a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3173a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3173ac:
    // 0x3173ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3173acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3173b0:
    // 0x3173b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3173b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3173b4:
    // 0x3173b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3173b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3173b8:
    // 0x3173b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3173b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3173bc:
    // 0x3173bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3173bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3173c0:
    // 0x3173c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3173c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3173c4:
    // 0x3173c4: 0x3e00008  jr          $ra
label_3173c8:
    if (ctx->pc == 0x3173C8u) {
        ctx->pc = 0x3173C8u;
            // 0x3173c8: 0x27bd0b10  addiu       $sp, $sp, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
        ctx->pc = 0x3173CCu;
        goto label_fallthrough_0x3173c4;
    }
    ctx->pc = 0x3173C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3173C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3173C4u;
            // 0x3173c8: 0x27bd0b10  addiu       $sp, $sp, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3173c4:
    ctx->pc = 0x3173CCu;
}
