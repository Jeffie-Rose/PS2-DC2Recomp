#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRiverMask__8CEditMapFv
// Address: 0x296e30 - 0x297348
void DrawRiverMask__8CEditMapFv_0x296e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRiverMask__8CEditMapFv_0x296e30");
#endif

    switch (ctx->pc) {
        case 0x296e30u: goto label_296e30;
        case 0x296e34u: goto label_296e34;
        case 0x296e38u: goto label_296e38;
        case 0x296e3cu: goto label_296e3c;
        case 0x296e40u: goto label_296e40;
        case 0x296e44u: goto label_296e44;
        case 0x296e48u: goto label_296e48;
        case 0x296e4cu: goto label_296e4c;
        case 0x296e50u: goto label_296e50;
        case 0x296e54u: goto label_296e54;
        case 0x296e58u: goto label_296e58;
        case 0x296e5cu: goto label_296e5c;
        case 0x296e60u: goto label_296e60;
        case 0x296e64u: goto label_296e64;
        case 0x296e68u: goto label_296e68;
        case 0x296e6cu: goto label_296e6c;
        case 0x296e70u: goto label_296e70;
        case 0x296e74u: goto label_296e74;
        case 0x296e78u: goto label_296e78;
        case 0x296e7cu: goto label_296e7c;
        case 0x296e80u: goto label_296e80;
        case 0x296e84u: goto label_296e84;
        case 0x296e88u: goto label_296e88;
        case 0x296e8cu: goto label_296e8c;
        case 0x296e90u: goto label_296e90;
        case 0x296e94u: goto label_296e94;
        case 0x296e98u: goto label_296e98;
        case 0x296e9cu: goto label_296e9c;
        case 0x296ea0u: goto label_296ea0;
        case 0x296ea4u: goto label_296ea4;
        case 0x296ea8u: goto label_296ea8;
        case 0x296eacu: goto label_296eac;
        case 0x296eb0u: goto label_296eb0;
        case 0x296eb4u: goto label_296eb4;
        case 0x296eb8u: goto label_296eb8;
        case 0x296ebcu: goto label_296ebc;
        case 0x296ec0u: goto label_296ec0;
        case 0x296ec4u: goto label_296ec4;
        case 0x296ec8u: goto label_296ec8;
        case 0x296eccu: goto label_296ecc;
        case 0x296ed0u: goto label_296ed0;
        case 0x296ed4u: goto label_296ed4;
        case 0x296ed8u: goto label_296ed8;
        case 0x296edcu: goto label_296edc;
        case 0x296ee0u: goto label_296ee0;
        case 0x296ee4u: goto label_296ee4;
        case 0x296ee8u: goto label_296ee8;
        case 0x296eecu: goto label_296eec;
        case 0x296ef0u: goto label_296ef0;
        case 0x296ef4u: goto label_296ef4;
        case 0x296ef8u: goto label_296ef8;
        case 0x296efcu: goto label_296efc;
        case 0x296f00u: goto label_296f00;
        case 0x296f04u: goto label_296f04;
        case 0x296f08u: goto label_296f08;
        case 0x296f0cu: goto label_296f0c;
        case 0x296f10u: goto label_296f10;
        case 0x296f14u: goto label_296f14;
        case 0x296f18u: goto label_296f18;
        case 0x296f1cu: goto label_296f1c;
        case 0x296f20u: goto label_296f20;
        case 0x296f24u: goto label_296f24;
        case 0x296f28u: goto label_296f28;
        case 0x296f2cu: goto label_296f2c;
        case 0x296f30u: goto label_296f30;
        case 0x296f34u: goto label_296f34;
        case 0x296f38u: goto label_296f38;
        case 0x296f3cu: goto label_296f3c;
        case 0x296f40u: goto label_296f40;
        case 0x296f44u: goto label_296f44;
        case 0x296f48u: goto label_296f48;
        case 0x296f4cu: goto label_296f4c;
        case 0x296f50u: goto label_296f50;
        case 0x296f54u: goto label_296f54;
        case 0x296f58u: goto label_296f58;
        case 0x296f5cu: goto label_296f5c;
        case 0x296f60u: goto label_296f60;
        case 0x296f64u: goto label_296f64;
        case 0x296f68u: goto label_296f68;
        case 0x296f6cu: goto label_296f6c;
        case 0x296f70u: goto label_296f70;
        case 0x296f74u: goto label_296f74;
        case 0x296f78u: goto label_296f78;
        case 0x296f7cu: goto label_296f7c;
        case 0x296f80u: goto label_296f80;
        case 0x296f84u: goto label_296f84;
        case 0x296f88u: goto label_296f88;
        case 0x296f8cu: goto label_296f8c;
        case 0x296f90u: goto label_296f90;
        case 0x296f94u: goto label_296f94;
        case 0x296f98u: goto label_296f98;
        case 0x296f9cu: goto label_296f9c;
        case 0x296fa0u: goto label_296fa0;
        case 0x296fa4u: goto label_296fa4;
        case 0x296fa8u: goto label_296fa8;
        case 0x296facu: goto label_296fac;
        case 0x296fb0u: goto label_296fb0;
        case 0x296fb4u: goto label_296fb4;
        case 0x296fb8u: goto label_296fb8;
        case 0x296fbcu: goto label_296fbc;
        case 0x296fc0u: goto label_296fc0;
        case 0x296fc4u: goto label_296fc4;
        case 0x296fc8u: goto label_296fc8;
        case 0x296fccu: goto label_296fcc;
        case 0x296fd0u: goto label_296fd0;
        case 0x296fd4u: goto label_296fd4;
        case 0x296fd8u: goto label_296fd8;
        case 0x296fdcu: goto label_296fdc;
        case 0x296fe0u: goto label_296fe0;
        case 0x296fe4u: goto label_296fe4;
        case 0x296fe8u: goto label_296fe8;
        case 0x296fecu: goto label_296fec;
        case 0x296ff0u: goto label_296ff0;
        case 0x296ff4u: goto label_296ff4;
        case 0x296ff8u: goto label_296ff8;
        case 0x296ffcu: goto label_296ffc;
        case 0x297000u: goto label_297000;
        case 0x297004u: goto label_297004;
        case 0x297008u: goto label_297008;
        case 0x29700cu: goto label_29700c;
        case 0x297010u: goto label_297010;
        case 0x297014u: goto label_297014;
        case 0x297018u: goto label_297018;
        case 0x29701cu: goto label_29701c;
        case 0x297020u: goto label_297020;
        case 0x297024u: goto label_297024;
        case 0x297028u: goto label_297028;
        case 0x29702cu: goto label_29702c;
        case 0x297030u: goto label_297030;
        case 0x297034u: goto label_297034;
        case 0x297038u: goto label_297038;
        case 0x29703cu: goto label_29703c;
        case 0x297040u: goto label_297040;
        case 0x297044u: goto label_297044;
        case 0x297048u: goto label_297048;
        case 0x29704cu: goto label_29704c;
        case 0x297050u: goto label_297050;
        case 0x297054u: goto label_297054;
        case 0x297058u: goto label_297058;
        case 0x29705cu: goto label_29705c;
        case 0x297060u: goto label_297060;
        case 0x297064u: goto label_297064;
        case 0x297068u: goto label_297068;
        case 0x29706cu: goto label_29706c;
        case 0x297070u: goto label_297070;
        case 0x297074u: goto label_297074;
        case 0x297078u: goto label_297078;
        case 0x29707cu: goto label_29707c;
        case 0x297080u: goto label_297080;
        case 0x297084u: goto label_297084;
        case 0x297088u: goto label_297088;
        case 0x29708cu: goto label_29708c;
        case 0x297090u: goto label_297090;
        case 0x297094u: goto label_297094;
        case 0x297098u: goto label_297098;
        case 0x29709cu: goto label_29709c;
        case 0x2970a0u: goto label_2970a0;
        case 0x2970a4u: goto label_2970a4;
        case 0x2970a8u: goto label_2970a8;
        case 0x2970acu: goto label_2970ac;
        case 0x2970b0u: goto label_2970b0;
        case 0x2970b4u: goto label_2970b4;
        case 0x2970b8u: goto label_2970b8;
        case 0x2970bcu: goto label_2970bc;
        case 0x2970c0u: goto label_2970c0;
        case 0x2970c4u: goto label_2970c4;
        case 0x2970c8u: goto label_2970c8;
        case 0x2970ccu: goto label_2970cc;
        case 0x2970d0u: goto label_2970d0;
        case 0x2970d4u: goto label_2970d4;
        case 0x2970d8u: goto label_2970d8;
        case 0x2970dcu: goto label_2970dc;
        case 0x2970e0u: goto label_2970e0;
        case 0x2970e4u: goto label_2970e4;
        case 0x2970e8u: goto label_2970e8;
        case 0x2970ecu: goto label_2970ec;
        case 0x2970f0u: goto label_2970f0;
        case 0x2970f4u: goto label_2970f4;
        case 0x2970f8u: goto label_2970f8;
        case 0x2970fcu: goto label_2970fc;
        case 0x297100u: goto label_297100;
        case 0x297104u: goto label_297104;
        case 0x297108u: goto label_297108;
        case 0x29710cu: goto label_29710c;
        case 0x297110u: goto label_297110;
        case 0x297114u: goto label_297114;
        case 0x297118u: goto label_297118;
        case 0x29711cu: goto label_29711c;
        case 0x297120u: goto label_297120;
        case 0x297124u: goto label_297124;
        case 0x297128u: goto label_297128;
        case 0x29712cu: goto label_29712c;
        case 0x297130u: goto label_297130;
        case 0x297134u: goto label_297134;
        case 0x297138u: goto label_297138;
        case 0x29713cu: goto label_29713c;
        case 0x297140u: goto label_297140;
        case 0x297144u: goto label_297144;
        case 0x297148u: goto label_297148;
        case 0x29714cu: goto label_29714c;
        case 0x297150u: goto label_297150;
        case 0x297154u: goto label_297154;
        case 0x297158u: goto label_297158;
        case 0x29715cu: goto label_29715c;
        case 0x297160u: goto label_297160;
        case 0x297164u: goto label_297164;
        case 0x297168u: goto label_297168;
        case 0x29716cu: goto label_29716c;
        case 0x297170u: goto label_297170;
        case 0x297174u: goto label_297174;
        case 0x297178u: goto label_297178;
        case 0x29717cu: goto label_29717c;
        case 0x297180u: goto label_297180;
        case 0x297184u: goto label_297184;
        case 0x297188u: goto label_297188;
        case 0x29718cu: goto label_29718c;
        case 0x297190u: goto label_297190;
        case 0x297194u: goto label_297194;
        case 0x297198u: goto label_297198;
        case 0x29719cu: goto label_29719c;
        case 0x2971a0u: goto label_2971a0;
        case 0x2971a4u: goto label_2971a4;
        case 0x2971a8u: goto label_2971a8;
        case 0x2971acu: goto label_2971ac;
        case 0x2971b0u: goto label_2971b0;
        case 0x2971b4u: goto label_2971b4;
        case 0x2971b8u: goto label_2971b8;
        case 0x2971bcu: goto label_2971bc;
        case 0x2971c0u: goto label_2971c0;
        case 0x2971c4u: goto label_2971c4;
        case 0x2971c8u: goto label_2971c8;
        case 0x2971ccu: goto label_2971cc;
        case 0x2971d0u: goto label_2971d0;
        case 0x2971d4u: goto label_2971d4;
        case 0x2971d8u: goto label_2971d8;
        case 0x2971dcu: goto label_2971dc;
        case 0x2971e0u: goto label_2971e0;
        case 0x2971e4u: goto label_2971e4;
        case 0x2971e8u: goto label_2971e8;
        case 0x2971ecu: goto label_2971ec;
        case 0x2971f0u: goto label_2971f0;
        case 0x2971f4u: goto label_2971f4;
        case 0x2971f8u: goto label_2971f8;
        case 0x2971fcu: goto label_2971fc;
        case 0x297200u: goto label_297200;
        case 0x297204u: goto label_297204;
        case 0x297208u: goto label_297208;
        case 0x29720cu: goto label_29720c;
        case 0x297210u: goto label_297210;
        case 0x297214u: goto label_297214;
        case 0x297218u: goto label_297218;
        case 0x29721cu: goto label_29721c;
        case 0x297220u: goto label_297220;
        case 0x297224u: goto label_297224;
        case 0x297228u: goto label_297228;
        case 0x29722cu: goto label_29722c;
        case 0x297230u: goto label_297230;
        case 0x297234u: goto label_297234;
        case 0x297238u: goto label_297238;
        case 0x29723cu: goto label_29723c;
        case 0x297240u: goto label_297240;
        case 0x297244u: goto label_297244;
        case 0x297248u: goto label_297248;
        case 0x29724cu: goto label_29724c;
        case 0x297250u: goto label_297250;
        case 0x297254u: goto label_297254;
        case 0x297258u: goto label_297258;
        case 0x29725cu: goto label_29725c;
        case 0x297260u: goto label_297260;
        case 0x297264u: goto label_297264;
        case 0x297268u: goto label_297268;
        case 0x29726cu: goto label_29726c;
        case 0x297270u: goto label_297270;
        case 0x297274u: goto label_297274;
        case 0x297278u: goto label_297278;
        case 0x29727cu: goto label_29727c;
        case 0x297280u: goto label_297280;
        case 0x297284u: goto label_297284;
        case 0x297288u: goto label_297288;
        case 0x29728cu: goto label_29728c;
        case 0x297290u: goto label_297290;
        case 0x297294u: goto label_297294;
        case 0x297298u: goto label_297298;
        case 0x29729cu: goto label_29729c;
        case 0x2972a0u: goto label_2972a0;
        case 0x2972a4u: goto label_2972a4;
        case 0x2972a8u: goto label_2972a8;
        case 0x2972acu: goto label_2972ac;
        case 0x2972b0u: goto label_2972b0;
        case 0x2972b4u: goto label_2972b4;
        case 0x2972b8u: goto label_2972b8;
        case 0x2972bcu: goto label_2972bc;
        case 0x2972c0u: goto label_2972c0;
        case 0x2972c4u: goto label_2972c4;
        case 0x2972c8u: goto label_2972c8;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972d0u: goto label_2972d0;
        case 0x2972d4u: goto label_2972d4;
        case 0x2972d8u: goto label_2972d8;
        case 0x2972dcu: goto label_2972dc;
        case 0x2972e0u: goto label_2972e0;
        case 0x2972e4u: goto label_2972e4;
        case 0x2972e8u: goto label_2972e8;
        case 0x2972ecu: goto label_2972ec;
        case 0x2972f0u: goto label_2972f0;
        case 0x2972f4u: goto label_2972f4;
        case 0x2972f8u: goto label_2972f8;
        case 0x2972fcu: goto label_2972fc;
        case 0x297300u: goto label_297300;
        case 0x297304u: goto label_297304;
        case 0x297308u: goto label_297308;
        case 0x29730cu: goto label_29730c;
        case 0x297310u: goto label_297310;
        case 0x297314u: goto label_297314;
        case 0x297318u: goto label_297318;
        case 0x29731cu: goto label_29731c;
        case 0x297320u: goto label_297320;
        case 0x297324u: goto label_297324;
        case 0x297328u: goto label_297328;
        case 0x29732cu: goto label_29732c;
        case 0x297330u: goto label_297330;
        case 0x297334u: goto label_297334;
        case 0x297338u: goto label_297338;
        case 0x29733cu: goto label_29733c;
        case 0x297340u: goto label_297340;
        case 0x297344u: goto label_297344;
        default: break;
    }

    ctx->pc = 0x296e30u;

label_296e30:
    // 0x296e30: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x296e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_296e34:
    // 0x296e34: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x296e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_296e38:
    // 0x296e38: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x296e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_296e3c:
    // 0x296e3c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x296e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_296e40:
    // 0x296e40: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x296e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_296e44:
    // 0x296e44: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x296e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_296e48:
    // 0x296e48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x296e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_296e4c:
    // 0x296e4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x296e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_296e50:
    // 0x296e50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x296e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_296e54:
    // 0x296e54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x296e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_296e58:
    // 0x296e58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_296e5c:
    // 0x296e5c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x296e5cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_296e60:
    // 0x296e60: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x296e60u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_296e64:
    // 0x296e64: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x296e64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_296e68:
    // 0x296e68: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x296e68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_296e6c:
    // 0x296e6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x296e6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_296e70:
    // 0x296e70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x296e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_296e74:
    // 0x296e74: 0x8c830fd0  lw          $v1, 0xFD0($a0)
    ctx->pc = 0x296e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4048)));
label_296e78:
    // 0x296e78: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
label_296e7c:
    if (ctx->pc == 0x296E7Cu) {
        ctx->pc = 0x296E7Cu;
            // 0x296e7c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296E80u;
        goto label_296e80;
    }
    ctx->pc = 0x296E78u;
    {
        const bool branch_taken_0x296e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E78u;
            // 0x296e7c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e78) {
            ctx->pc = 0x297300u;
            goto label_297300;
        }
    }
    ctx->pc = 0x296E80u;
label_296e80:
    // 0x296e80: 0x8ec30fd4  lw          $v1, 0xFD4($s6)
    ctx->pc = 0x296e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4052)));
label_296e84:
    // 0x296e84: 0x1060011e  beqz        $v1, . + 4 + (0x11E << 2)
label_296e88:
    if (ctx->pc == 0x296E88u) {
        ctx->pc = 0x296E8Cu;
        goto label_296e8c;
    }
    ctx->pc = 0x296E84u;
    {
        const bool branch_taken_0x296e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e84) {
            ctx->pc = 0x297300u;
            goto label_297300;
        }
    }
    ctx->pc = 0x296E8Cu;
label_296e8c:
    // 0x296e8c: 0x8ec30fd8  lw          $v1, 0xFD8($s6)
    ctx->pc = 0x296e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4056)));
label_296e90:
    // 0x296e90: 0x1060011b  beqz        $v1, . + 4 + (0x11B << 2)
label_296e94:
    if (ctx->pc == 0x296E94u) {
        ctx->pc = 0x296E98u;
        goto label_296e98;
    }
    ctx->pc = 0x296E90u;
    {
        const bool branch_taken_0x296e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e90) {
            ctx->pc = 0x297300u;
            goto label_297300;
        }
    }
    ctx->pc = 0x296E98u;
label_296e98:
    // 0x296e98: 0x8ec30fdc  lw          $v1, 0xFDC($s6)
    ctx->pc = 0x296e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4060)));
label_296e9c:
    // 0x296e9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_296ea0:
    if (ctx->pc == 0x296EA0u) {
        ctx->pc = 0x296EA0u;
            // 0x296ea0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x296EA4u;
        goto label_296ea4;
    }
    ctx->pc = 0x296E9Cu;
    {
        const bool branch_taken_0x296e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E9Cu;
            // 0x296ea0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e9c) {
            ctx->pc = 0x296EB0u;
            goto label_296eb0;
        }
    }
    ctx->pc = 0x296EA4u;
label_296ea4:
    // 0x296ea4: 0x10000117  b           . + 4 + (0x117 << 2)
label_296ea8:
    if (ctx->pc == 0x296EA8u) {
        ctx->pc = 0x296EA8u;
            // 0x296ea8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x296EACu;
        goto label_296eac;
    }
    ctx->pc = 0x296EA4u;
    {
        const bool branch_taken_0x296ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296EA4u;
            // 0x296ea8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ea4) {
            ctx->pc = 0x297304u;
            goto label_297304;
        }
    }
    ctx->pc = 0x296EACu;
label_296eac:
    // 0x296eac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296eb0:
    // 0x296eb0: 0xc04d0e8  jal         func_1343A0
label_296eb4:
    if (ctx->pc == 0x296EB4u) {
        ctx->pc = 0x296EB8u;
        goto label_296eb8;
    }
    ctx->pc = 0x296EB0u;
    SET_GPR_U32(ctx, 31, 0x296EB8u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EB8u; }
        if (ctx->pc != 0x296EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EB8u; }
        if (ctx->pc != 0x296EB8u) { return; }
    }
    ctx->pc = 0x296EB8u;
label_296eb8:
    // 0x296eb8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296ebc:
    // 0x296ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296ec0:
    // 0x296ec0: 0xc04d104  jal         func_134410
label_296ec4:
    if (ctx->pc == 0x296EC4u) {
        ctx->pc = 0x296EC4u;
            // 0x296ec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296EC8u;
        goto label_296ec8;
    }
    ctx->pc = 0x296EC0u;
    SET_GPR_U32(ctx, 31, 0x296EC8u);
    ctx->pc = 0x296EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296EC0u;
            // 0x296ec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EC8u; }
        if (ctx->pc != 0x296EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EC8u; }
        if (ctx->pc != 0x296EC8u) { return; }
    }
    ctx->pc = 0x296EC8u;
label_296ec8:
    // 0x296ec8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296ecc:
    // 0x296ecc: 0xc04d428  jal         func_1350A0
label_296ed0:
    if (ctx->pc == 0x296ED0u) {
        ctx->pc = 0x296ED0u;
            // 0x296ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296ED4u;
        goto label_296ed4;
    }
    ctx->pc = 0x296ECCu;
    SET_GPR_U32(ctx, 31, 0x296ED4u);
    ctx->pc = 0x296ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296ECCu;
            // 0x296ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296ED4u; }
        if (ctx->pc != 0x296ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296ED4u; }
        if (ctx->pc != 0x296ED4u) { return; }
    }
    ctx->pc = 0x296ED4u;
label_296ed4:
    // 0x296ed4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296ed8:
    // 0x296ed8: 0xc04d3e4  jal         func_134F90
label_296edc:
    if (ctx->pc == 0x296EDCu) {
        ctx->pc = 0x296EDCu;
            // 0x296edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296EE0u;
        goto label_296ee0;
    }
    ctx->pc = 0x296ED8u;
    SET_GPR_U32(ctx, 31, 0x296EE0u);
    ctx->pc = 0x296EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296ED8u;
            // 0x296edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EE0u; }
        if (ctx->pc != 0x296EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EE0u; }
        if (ctx->pc != 0x296EE0u) { return; }
    }
    ctx->pc = 0x296EE0u;
label_296ee0:
    // 0x296ee0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296ee4:
    // 0x296ee4: 0xc04d3bc  jal         func_134EF0
label_296ee8:
    if (ctx->pc == 0x296EE8u) {
        ctx->pc = 0x296EE8u;
            // 0x296ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296EECu;
        goto label_296eec;
    }
    ctx->pc = 0x296EE4u;
    SET_GPR_U32(ctx, 31, 0x296EECu);
    ctx->pc = 0x296EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296EE4u;
            // 0x296ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EECu; }
        if (ctx->pc != 0x296EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EECu; }
        if (ctx->pc != 0x296EECu) { return; }
    }
    ctx->pc = 0x296EECu;
label_296eec:
    // 0x296eec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296ef0:
    // 0x296ef0: 0xc04d3b0  jal         func_134EC0
label_296ef4:
    if (ctx->pc == 0x296EF4u) {
        ctx->pc = 0x296EF4u;
            // 0x296ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x296EF8u;
        goto label_296ef8;
    }
    ctx->pc = 0x296EF0u;
    SET_GPR_U32(ctx, 31, 0x296EF8u);
    ctx->pc = 0x296EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296EF0u;
            // 0x296ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EF8u; }
        if (ctx->pc != 0x296EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EF8u; }
        if (ctx->pc != 0x296EF8u) { return; }
    }
    ctx->pc = 0x296EF8u;
label_296ef8:
    // 0x296ef8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296efc:
    // 0x296efc: 0xc04d3b8  jal         func_134EE0
label_296f00:
    if (ctx->pc == 0x296F00u) {
        ctx->pc = 0x296F00u;
            // 0x296f00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x296F04u;
        goto label_296f04;
    }
    ctx->pc = 0x296EFCu;
    SET_GPR_U32(ctx, 31, 0x296F04u);
    ctx->pc = 0x296F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296EFCu;
            // 0x296f00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F04u; }
        if (ctx->pc != 0x296F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F04u; }
        if (ctx->pc != 0x296F04u) { return; }
    }
    ctx->pc = 0x296F04u;
label_296f04:
    // 0x296f04: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296f08:
    // 0x296f08: 0xc04d128  jal         func_1344A0
label_296f0c:
    if (ctx->pc == 0x296F0Cu) {
        ctx->pc = 0x296F0Cu;
            // 0x296f0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x296F10u;
        goto label_296f10;
    }
    ctx->pc = 0x296F08u;
    SET_GPR_U32(ctx, 31, 0x296F10u);
    ctx->pc = 0x296F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296F08u;
            // 0x296f0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F10u; }
        if (ctx->pc != 0x296F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F10u; }
        if (ctx->pc != 0x296F10u) { return; }
    }
    ctx->pc = 0x296F10u;
label_296f10:
    // 0x296f10: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296f14:
    // 0x296f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296f18:
    // 0x296f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296f1c:
    // 0x296f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296f20:
    // 0x296f20: 0xc04d320  jal         func_134C80
label_296f24:
    if (ctx->pc == 0x296F24u) {
        ctx->pc = 0x296F24u;
            // 0x296f24: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x296F28u;
        goto label_296f28;
    }
    ctx->pc = 0x296F20u;
    SET_GPR_U32(ctx, 31, 0x296F28u);
    ctx->pc = 0x296F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296F20u;
            // 0x296f24: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F28u; }
        if (ctx->pc != 0x296F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F28u; }
        if (ctx->pc != 0x296F28u) { return; }
    }
    ctx->pc = 0x296F28u;
label_296f28:
    // 0x296f28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296f2c:
    // 0x296f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296f30:
    // 0x296f30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296f34:
    // 0x296f34: 0xc04d2c8  jal         func_134B20
label_296f38:
    if (ctx->pc == 0x296F38u) {
        ctx->pc = 0x296F38u;
            // 0x296f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296F3Cu;
        goto label_296f3c;
    }
    ctx->pc = 0x296F34u;
    SET_GPR_U32(ctx, 31, 0x296F3Cu);
    ctx->pc = 0x296F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296F34u;
            // 0x296f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F3Cu; }
        if (ctx->pc != 0x296F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F3Cu; }
        if (ctx->pc != 0x296F3Cu) { return; }
    }
    ctx->pc = 0x296F3Cu;
label_296f3c:
    // 0x296f3c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x296f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_296f40:
    // 0x296f40: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x296f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_296f44:
    // 0x296f44: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x296f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_296f48:
    // 0x296f48: 0xc04d2c8  jal         func_134B20
label_296f4c:
    if (ctx->pc == 0x296F4Cu) {
        ctx->pc = 0x296F4Cu;
            // 0x296f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296F50u;
        goto label_296f50;
    }
    ctx->pc = 0x296F48u;
    SET_GPR_U32(ctx, 31, 0x296F50u);
    ctx->pc = 0x296F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296F48u;
            // 0x296f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F50u; }
        if (ctx->pc != 0x296F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F50u; }
        if (ctx->pc != 0x296F50u) { return; }
    }
    ctx->pc = 0x296F50u;
label_296f50:
    // 0x296f50: 0xc04d1a4  jal         func_134690
label_296f54:
    if (ctx->pc == 0x296F54u) {
        ctx->pc = 0x296F54u;
            // 0x296f54: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x296F58u;
        goto label_296f58;
    }
    ctx->pc = 0x296F50u;
    SET_GPR_U32(ctx, 31, 0x296F58u);
    ctx->pc = 0x296F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296F50u;
            // 0x296f54: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F58u; }
        if (ctx->pc != 0x296F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F58u; }
        if (ctx->pc != 0x296F58u) { return; }
    }
    ctx->pc = 0x296F58u;
label_296f58:
    // 0x296f58: 0xc050c30  jal         func_1430C0
label_296f5c:
    if (ctx->pc == 0x296F5Cu) {
        ctx->pc = 0x296F60u;
        goto label_296f60;
    }
    ctx->pc = 0x296F58u;
    SET_GPR_U32(ctx, 31, 0x296F60u);
    ctx->pc = 0x1430C0u;
    if (runtime->hasFunction(0x1430C0u)) {
        auto targetFn = runtime->lookupFunction(0x1430C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F60u; }
        if (ctx->pc != 0x296F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirectStart__Fv_0x1430c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F60u; }
        if (ctx->pc != 0x296F60u) { return; }
    }
    ctx->pc = 0x296F60u;
label_296f60:
    // 0x296f60: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x296f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_296f64:
    // 0x296f64: 0x100000aa  b           . + 4 + (0xAA << 2)
label_296f68:
    if (ctx->pc == 0x296F68u) {
        ctx->pc = 0x296F68u;
            // 0x296f68: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x296F6Cu;
        goto label_296f6c;
    }
    ctx->pc = 0x296F64u;
    {
        const bool branch_taken_0x296f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F64u;
            // 0x296f68: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f64) {
            ctx->pc = 0x297210u;
            goto label_297210;
        }
    }
    ctx->pc = 0x296F6Cu;
label_296f6c:
    // 0x296f6c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x296f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_296f70:
    // 0x296f70: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x296f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_296f74:
    // 0x296f74: 0x8c500f54  lw          $s0, 0xF54($v0)
    ctx->pc = 0x296f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
label_296f78:
    // 0x296f78: 0x1200009f  beqz        $s0, . + 4 + (0x9F << 2)
label_296f7c:
    if (ctx->pc == 0x296F7Cu) {
        ctx->pc = 0x296F80u;
        goto label_296f80;
    }
    ctx->pc = 0x296F78u;
    {
        const bool branch_taken_0x296f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f78) {
            ctx->pc = 0x2971F8u;
            goto label_2971f8;
        }
    }
    ctx->pc = 0x296F80u;
label_296f80:
    // 0x296f80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x296f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_296f84:
    // 0x296f84: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x296f84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296f88:
    // 0x296f88: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x296f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_296f8c:
    // 0x296f8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x296f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_296f90:
    // 0x296f90: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x296f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_296f94:
    // 0x296f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296f98:
    // 0x296f98: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x296f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_296f9c:
    // 0x296f9c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x296f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_296fa0:
    // 0x296fa0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x296fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_296fa4:
    // 0x296fa4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x296fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_296fa8:
    // 0x296fa8: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x296fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_296fac:
    // 0x296fac: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x296facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_296fb0:
    // 0x296fb0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x296fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_296fb4:
    // 0x296fb4: 0xc6180024  lwc1        $f24, 0x24($s0)
    ctx->pc = 0x296fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_296fb8:
    // 0x296fb8: 0x46040503  div.s       $f20, $f0, $f4
    ctx->pc = 0x296fb8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_296fbc:
    // 0x296fbc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x296fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_296fc0:
    // 0x296fc0: 0x46020583  div.s       $f22, $f0, $f2
    ctx->pc = 0x296fc0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_296fc4:
    // 0x296fc4: 0x46041803  div.s       $f0, $f3, $f4
    ctx->pc = 0x296fc4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
label_296fc8:
    // 0x296fc8: 0x46021d43  div.s       $f21, $f3, $f2
    ctx->pc = 0x296fc8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_296fcc:
    // 0x296fcc: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
label_296fd0:
    if (ctx->pc == 0x296FD0u) {
        ctx->pc = 0x296FD0u;
            // 0x296fd0: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x296FD4u;
        goto label_296fd4;
    }
    ctx->pc = 0x296FCCu;
    {
        const bool branch_taken_0x296fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296FCCu;
            // 0x296fd0: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fcc) {
            ctx->pc = 0x2971F8u;
            goto label_2971f8;
        }
    }
    ctx->pc = 0x296FD4u;
label_296fd4:
    // 0x296fd4: 0x0  nop
    ctx->pc = 0x296fd4u;
    // NOP
label_296fd8:
    // 0x296fd8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x296fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_296fdc:
    // 0x296fdc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x296fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_296fe0:
    // 0x296fe0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x296fe0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296fe4:
    // 0x296fe4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x296fe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_296fe8:
    // 0x296fe8: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
label_296fec:
    if (ctx->pc == 0x296FECu) {
        ctx->pc = 0x296FECu;
            // 0x296fec: 0x46140640  add.s       $f25, $f0, $f20 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x296FF0u;
        goto label_296ff0;
    }
    ctx->pc = 0x296FE8u;
    {
        const bool branch_taken_0x296fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296FE8u;
            // 0x296fec: 0x46140640  add.s       $f25, $f0, $f20 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fe8) {
            ctx->pc = 0x2971E0u;
            goto label_2971e0;
        }
    }
    ctx->pc = 0x296FF0u;
label_296ff0:
    // 0x296ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296ff4:
    // 0x296ff4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x296ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_296ff8:
    // 0x296ff8: 0xc0a5e58  jal         func_297960
label_296ffc:
    if (ctx->pc == 0x296FFCu) {
        ctx->pc = 0x296FFCu;
            // 0x296ffc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297000u;
        goto label_297000;
    }
    ctx->pc = 0x296FF8u;
    SET_GPR_U32(ctx, 31, 0x297000u);
    ctx->pc = 0x296FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296FF8u;
            // 0x296ffc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297960u;
    if (runtime->hasFunction(0x297960u)) {
        auto targetFn = runtime->lookupFunction(0x297960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297000u; }
        if (ctx->pc != 0x297000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFast__9CEditGridFii_0x297960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297000u; }
        if (ctx->pc != 0x297000u) { return; }
    }
    ctx->pc = 0x297000u;
label_297000:
    // 0x297000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297004:
    // 0x297004: 0x1220006f  beqz        $s1, . + 4 + (0x6F << 2)
label_297008:
    if (ctx->pc == 0x297008u) {
        ctx->pc = 0x29700Cu;
        goto label_29700c;
    }
    ctx->pc = 0x297004u;
    {
        const bool branch_taken_0x297004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x297004) {
            ctx->pc = 0x2971C4u;
            goto label_2971c4;
        }
    }
    ctx->pc = 0x29700Cu;
label_29700c:
    // 0x29700c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_297010:
    // 0x297010: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_297014:
    if (ctx->pc == 0x297014u) {
        ctx->pc = 0x297018u;
        goto label_297018;
    }
    ctx->pc = 0x297010u;
    {
        const bool branch_taken_0x297010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297010) {
            ctx->pc = 0x2971C4u;
            goto label_2971c4;
        }
    }
    ctx->pc = 0x297018u;
label_297018:
    // 0x297018: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x297018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_29701c:
    // 0x29701c: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x29701cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_297020:
    // 0x297020: 0x24424180  addiu       $v0, $v0, 0x4180
    ctx->pc = 0x297020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16768));
label_297024:
    // 0x297024: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x297024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_297028:
    // 0x297028: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x297028u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29702c:
    // 0x29702c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x29702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_297030:
    // 0x297030: 0x4615b881  sub.s       $f2, $f23, $f21
    ctx->pc = 0x297030u;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_297034:
    // 0x297034: 0x24e74190  addiu       $a3, $a3, 0x4190
    ctx->pc = 0x297034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16784));
label_297038:
    // 0x297038: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x297038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_29703c:
    // 0x29703c: 0x248441a0  addiu       $a0, $a0, 0x41A0
    ctx->pc = 0x29703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16800));
label_297040:
    // 0x297040: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x297040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_297044:
    // 0x297044: 0x27a30240  addiu       $v1, $sp, 0x240
    ctx->pc = 0x297044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_297048:
    // 0x297048: 0x4616c801  sub.s       $f0, $f25, $f22
    ctx->pc = 0x297048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[22]);
label_29704c:
    // 0x29704c: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x29704cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
label_297050:
    // 0x297050: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x297050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_297054:
    // 0x297054: 0x244241b0  addiu       $v0, $v0, 0x41B0
    ctx->pc = 0x297054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16816));
label_297058:
    // 0x297058: 0xe7a20210  swc1        $f2, 0x210($sp)
    ctx->pc = 0x297058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_29705c:
    // 0x29705c: 0xe7b80214  swc1        $f24, 0x214($sp)
    ctx->pc = 0x29705cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_297060:
    // 0x297060: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x297060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_297064:
    // 0x297064: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x297064u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_297068:
    // 0x297068: 0x4615b840  add.s       $f1, $f23, $f21
    ctx->pc = 0x297068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_29706c:
    // 0x29706c: 0x4616c8c0  add.s       $f3, $f25, $f22
    ctx->pc = 0x29706cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
label_297070:
    // 0x297070: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x297070u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_297074:
    // 0x297074: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x297074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_297078:
    // 0x297078: 0xe7a10220  swc1        $f1, 0x220($sp)
    ctx->pc = 0x297078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_29707c:
    // 0x29707c: 0xe7b80224  swc1        $f24, 0x224($sp)
    ctx->pc = 0x29707cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_297080:
    // 0x297080: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x297080u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_297084:
    // 0x297084: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x297084u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_297088:
    // 0x297088: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x297088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_29708c:
    // 0x29708c: 0xe7b80234  swc1        $f24, 0x234($sp)
    ctx->pc = 0x29708cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_297090:
    // 0x297090: 0xe7a30238  swc1        $f3, 0x238($sp)
    ctx->pc = 0x297090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_297094:
    // 0x297094: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x297094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_297098:
    // 0x297098: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x297098u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_29709c:
    // 0x29709c: 0xe7a20240  swc1        $f2, 0x240($sp)
    ctx->pc = 0x29709cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_2970a0:
    // 0x2970a0: 0xe7a30248  swc1        $f3, 0x248($sp)
    ctx->pc = 0x2970a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2970a4:
    // 0x2970a4: 0xe7b80244  swc1        $f24, 0x244($sp)
    ctx->pc = 0x2970a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2970a8:
    // 0x2970a8: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x2970a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2970ac:
    // 0x2970ac: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x2970acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_2970b0:
    // 0x2970b0: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x2970b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2970b4:
    // 0x2970b4: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x2970b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2970b8:
    // 0x2970b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2970b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2970bc:
    // 0x2970bc: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x2970bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_2970c0:
    // 0x2970c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2970c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2970c4:
    // 0x2970c4: 0x8cc60fd0  lw          $a2, 0xFD0($a2)
    ctx->pc = 0x2970c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4048)));
label_2970c8:
    // 0x2970c8: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x2970c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_2970cc:
    // 0x2970cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2970ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2970d0:
    // 0x2970d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2970d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2970d4:
    // 0x2970d4: 0x8c840fd0  lw          $a0, 0xFD0($a0)
    ctx->pc = 0x2970d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4048)));
label_2970d8:
    // 0x2970d8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2970d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_2970dc:
    // 0x2970dc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2970dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2970e0:
    // 0x2970e0: 0x8c630fd0  lw          $v1, 0xFD0($v1)
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4048)));
label_2970e4:
    // 0x2970e4: 0x8c420fd0  lw          $v0, 0xFD0($v0)
    ctx->pc = 0x2970e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4048)));
label_2970e8:
    // 0x2970e8: 0x8cd20070  lw          $s2, 0x70($a2)
    ctx->pc = 0x2970e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_2970ec:
    // 0x2970ec: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x2970ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2970f0:
    // 0x2970f0: 0x8c740070  lw          $s4, 0x70($v1)
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2970f4:
    // 0x2970f4: 0x8c550070  lw          $s5, 0x70($v0)
    ctx->pc = 0x2970f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2970f8:
    // 0x2970f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2970f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2970fc:
    // 0x2970fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2970fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297100:
    // 0x297100: 0x320f809  jalr        $t9
label_297104:
    if (ctx->pc == 0x297104u) {
        ctx->pc = 0x297104u;
            // 0x297104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297108u;
        goto label_297108;
    }
    ctx->pc = 0x297100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297108u);
        ctx->pc = 0x297104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297100u;
            // 0x297104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297108u; }
            if (ctx->pc != 0x297108u) { return; }
        }
        }
    }
    ctx->pc = 0x297108u;
label_297108:
    // 0x297108: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x297108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_29710c:
    // 0x29710c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_297110:
    // 0x297110: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x297110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_297114:
    // 0x297114: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x297114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297118:
    // 0x297118: 0xc04dd64  jal         func_137590
label_29711c:
    if (ctx->pc == 0x29711Cu) {
        ctx->pc = 0x29711Cu;
            // 0x29711c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x297120u;
        goto label_297120;
    }
    ctx->pc = 0x297118u;
    SET_GPR_U32(ctx, 31, 0x297120u);
    ctx->pc = 0x29711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297118u;
            // 0x29711c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297120u; }
        if (ctx->pc != 0x297120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297120u; }
        if (ctx->pc != 0x297120u) { return; }
    }
    ctx->pc = 0x297120u;
label_297120:
    // 0x297120: 0xc050c38  jal         func_1430E0
label_297124:
    if (ctx->pc == 0x297124u) {
        ctx->pc = 0x297124u;
            // 0x297124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297128u;
        goto label_297128;
    }
    ctx->pc = 0x297120u;
    SET_GPR_U32(ctx, 31, 0x297128u);
    ctx->pc = 0x297124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297120u;
            // 0x297124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1430E0u;
    if (runtime->hasFunction(0x1430E0u)) {
        auto targetFn = runtime->lookupFunction(0x1430E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297128u; }
        if (ctx->pc != 0x297128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect2__FP8mgCFrame_0x1430e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297128u; }
        if (ctx->pc != 0x297128u) { return; }
    }
    ctx->pc = 0x297128u;
label_297128:
    // 0x297128: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x297128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29712c:
    // 0x29712c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297130:
    // 0x297130: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x297130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297134:
    // 0x297134: 0x320f809  jalr        $t9
label_297138:
    if (ctx->pc == 0x297138u) {
        ctx->pc = 0x297138u;
            // 0x297138: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x29713Cu;
        goto label_29713c;
    }
    ctx->pc = 0x297134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29713Cu);
        ctx->pc = 0x297138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297134u;
            // 0x297138: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29713Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29713Cu; }
            if (ctx->pc != 0x29713Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29713Cu;
label_29713c:
    // 0x29713c: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x29713cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_297140:
    // 0x297140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297144:
    // 0x297144: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x297144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_297148:
    // 0x297148: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x297148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_29714c:
    // 0x29714c: 0xc04dd64  jal         func_137590
label_297150:
    if (ctx->pc == 0x297150u) {
        ctx->pc = 0x297150u;
            // 0x297150: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x297154u;
        goto label_297154;
    }
    ctx->pc = 0x29714Cu;
    SET_GPR_U32(ctx, 31, 0x297154u);
    ctx->pc = 0x297150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29714Cu;
            // 0x297150: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297154u; }
        if (ctx->pc != 0x297154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297154u; }
        if (ctx->pc != 0x297154u) { return; }
    }
    ctx->pc = 0x297154u;
label_297154:
    // 0x297154: 0xc050c38  jal         func_1430E0
label_297158:
    if (ctx->pc == 0x297158u) {
        ctx->pc = 0x297158u;
            // 0x297158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29715Cu;
        goto label_29715c;
    }
    ctx->pc = 0x297154u;
    SET_GPR_U32(ctx, 31, 0x29715Cu);
    ctx->pc = 0x297158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297154u;
            // 0x297158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1430E0u;
    if (runtime->hasFunction(0x1430E0u)) {
        auto targetFn = runtime->lookupFunction(0x1430E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29715Cu; }
        if (ctx->pc != 0x29715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect2__FP8mgCFrame_0x1430e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29715Cu; }
        if (ctx->pc != 0x29715Cu) { return; }
    }
    ctx->pc = 0x29715Cu;
label_29715c:
    // 0x29715c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x29715cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_297160:
    // 0x297160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x297160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_297164:
    // 0x297164: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x297164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_297168:
    // 0x297168: 0x320f809  jalr        $t9
label_29716c:
    if (ctx->pc == 0x29716Cu) {
        ctx->pc = 0x29716Cu;
            // 0x29716c: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x297170u;
        goto label_297170;
    }
    ctx->pc = 0x297168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297170u);
        ctx->pc = 0x29716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297168u;
            // 0x29716c: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297170u; }
            if (ctx->pc != 0x297170u) { return; }
        }
        }
    }
    ctx->pc = 0x297170u;
label_297170:
    // 0x297170: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x297170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_297174:
    // 0x297174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x297174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_297178:
    // 0x297178: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x297178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_29717c:
    // 0x29717c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297180:
    // 0x297180: 0xc04dd64  jal         func_137590
label_297184:
    if (ctx->pc == 0x297184u) {
        ctx->pc = 0x297184u;
            // 0x297184: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x297188u;
        goto label_297188;
    }
    ctx->pc = 0x297180u;
    SET_GPR_U32(ctx, 31, 0x297188u);
    ctx->pc = 0x297184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297180u;
            // 0x297184: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297188u; }
        if (ctx->pc != 0x297188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297188u; }
        if (ctx->pc != 0x297188u) { return; }
    }
    ctx->pc = 0x297188u;
label_297188:
    // 0x297188: 0xc050c38  jal         func_1430E0
label_29718c:
    if (ctx->pc == 0x29718Cu) {
        ctx->pc = 0x29718Cu;
            // 0x29718c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297190u;
        goto label_297190;
    }
    ctx->pc = 0x297188u;
    SET_GPR_U32(ctx, 31, 0x297190u);
    ctx->pc = 0x29718Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297188u;
            // 0x29718c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1430E0u;
    if (runtime->hasFunction(0x1430E0u)) {
        auto targetFn = runtime->lookupFunction(0x1430E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297190u; }
        if (ctx->pc != 0x297190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect2__FP8mgCFrame_0x1430e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297190u; }
        if (ctx->pc != 0x297190u) { return; }
    }
    ctx->pc = 0x297190u;
label_297190:
    // 0x297190: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x297190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_297194:
    // 0x297194: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_297198:
    // 0x297198: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x297198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29719c:
    // 0x29719c: 0x320f809  jalr        $t9
label_2971a0:
    if (ctx->pc == 0x2971A0u) {
        ctx->pc = 0x2971A0u;
            // 0x2971a0: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2971A4u;
        goto label_2971a4;
    }
    ctx->pc = 0x29719Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2971A4u);
        ctx->pc = 0x2971A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29719Cu;
            // 0x2971a0: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2971A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2971A4u; }
            if (ctx->pc != 0x2971A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2971A4u;
label_2971a4:
    // 0x2971a4: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x2971a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2971a8:
    // 0x2971a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2971a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2971ac:
    // 0x2971ac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2971acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2971b0:
    // 0x2971b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2971b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2971b4:
    // 0x2971b4: 0xc04dd64  jal         func_137590
label_2971b8:
    if (ctx->pc == 0x2971B8u) {
        ctx->pc = 0x2971B8u;
            // 0x2971b8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x2971BCu;
        goto label_2971bc;
    }
    ctx->pc = 0x2971B4u;
    SET_GPR_U32(ctx, 31, 0x2971BCu);
    ctx->pc = 0x2971B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2971B4u;
            // 0x2971b8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971BCu; }
        if (ctx->pc != 0x2971BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971BCu; }
        if (ctx->pc != 0x2971BCu) { return; }
    }
    ctx->pc = 0x2971BCu;
label_2971bc:
    // 0x2971bc: 0xc050c38  jal         func_1430E0
label_2971c0:
    if (ctx->pc == 0x2971C0u) {
        ctx->pc = 0x2971C0u;
            // 0x2971c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2971C4u;
        goto label_2971c4;
    }
    ctx->pc = 0x2971BCu;
    SET_GPR_U32(ctx, 31, 0x2971C4u);
    ctx->pc = 0x2971C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2971BCu;
            // 0x2971c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1430E0u;
    if (runtime->hasFunction(0x1430E0u)) {
        auto targetFn = runtime->lookupFunction(0x1430E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971C4u; }
        if (ctx->pc != 0x2971C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect2__FP8mgCFrame_0x1430e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971C4u; }
        if (ctx->pc != 0x2971C4u) { return; }
    }
    ctx->pc = 0x2971C4u;
label_2971c4:
    // 0x2971c4: 0x0  nop
    ctx->pc = 0x2971c4u;
    // NOP
label_2971c8:
    // 0x2971c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2971c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2971cc:
    // 0x2971cc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2971ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2971d0:
    // 0x2971d0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2971d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2971d4:
    // 0x2971d4: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2971d8:
    // 0x2971d8: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
label_2971dc:
    if (ctx->pc == 0x2971DCu) {
        ctx->pc = 0x2971DCu;
            // 0x2971dc: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->pc = 0x2971E0u;
        goto label_2971e0;
    }
    ctx->pc = 0x2971D8u;
    {
        const bool branch_taken_0x2971d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2971DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2971D8u;
            // 0x2971dc: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971d8) {
            ctx->pc = 0x296FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296ff0;
        }
    }
    ctx->pc = 0x2971E0u;
label_2971e0:
    // 0x2971e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2971e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2971e4:
    // 0x2971e4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2971e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2971e8:
    // 0x2971e8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2971e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2971ec:
    // 0x2971ec: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x2971ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2971f0:
    // 0x2971f0: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_2971f4:
    if (ctx->pc == 0x2971F4u) {
        ctx->pc = 0x2971F4u;
            // 0x2971f4: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x2971F8u;
        goto label_2971f8;
    }
    ctx->pc = 0x2971F0u;
    {
        const bool branch_taken_0x2971f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2971F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2971F0u;
            // 0x2971f4: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971f0) {
            ctx->pc = 0x296FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296fd4;
        }
    }
    ctx->pc = 0x2971F8u;
label_2971f8:
    // 0x2971f8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2971f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2971fc:
    // 0x2971fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_297200:
    // 0x297200: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x297200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_297204:
    // 0x297204: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x297204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_297208:
    // 0x297208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x297208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29720c:
    // 0x29720c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x29720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_297210:
    // 0x297210: 0x8ec30f50  lw          $v1, 0xF50($s6)
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3920)));
label_297214:
    // 0x297214: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x297214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_297218:
    // 0x297218: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x297218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29721c:
    // 0x29721c: 0x1440ff53  bnez        $v0, . + 4 + (-0xAD << 2)
label_297220:
    if (ctx->pc == 0x297220u) {
        ctx->pc = 0x297224u;
        goto label_297224;
    }
    ctx->pc = 0x29721Cu;
    {
        const bool branch_taken_0x29721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29721c) {
            ctx->pc = 0x296F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296f6c;
        }
    }
    ctx->pc = 0x297224u;
label_297224:
    // 0x297224: 0xc050c4c  jal         func_143130
label_297228:
    if (ctx->pc == 0x297228u) {
        ctx->pc = 0x29722Cu;
        goto label_29722c;
    }
    ctx->pc = 0x297224u;
    SET_GPR_U32(ctx, 31, 0x29722Cu);
    ctx->pc = 0x143130u;
    if (runtime->hasFunction(0x143130u)) {
        auto targetFn = runtime->lookupFunction(0x143130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29722Cu; }
        if (ctx->pc != 0x29722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirectEnd__Fv_0x143130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29722Cu; }
        if (ctx->pc != 0x29722Cu) { return; }
    }
    ctx->pc = 0x29722Cu;
label_29722c:
    // 0x29722c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29722cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297230:
    // 0x297230: 0x1000002f  b           . + 4 + (0x2F << 2)
label_297234:
    if (ctx->pc == 0x297234u) {
        ctx->pc = 0x297234u;
            // 0x297234: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x297238u;
        goto label_297238;
    }
    ctx->pc = 0x297230u;
    {
        const bool branch_taken_0x297230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297230u;
            // 0x297234: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297230) {
            ctx->pc = 0x2972F0u;
            goto label_2972f0;
        }
    }
    ctx->pc = 0x297238u;
label_297238:
    // 0x297238: 0x8ec30d44  lw          $v1, 0xD44($s6)
    ctx->pc = 0x297238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3396)));
label_29723c:
    // 0x29723c: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x29723cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_297240:
    // 0x297240: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_297244:
    // 0x297244: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x297244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_297248:
    // 0x297248: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x297248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29724c:
    // 0x29724c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_297250:
    if (ctx->pc == 0x297250u) {
        ctx->pc = 0x297254u;
        goto label_297254;
    }
    ctx->pc = 0x29724Cu;
    {
        const bool branch_taken_0x29724c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29724c) {
            ctx->pc = 0x2972E8u;
            goto label_2972e8;
        }
    }
    ctx->pc = 0x297254u;
label_297254:
    // 0x297254: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x297254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_297258:
    // 0x297258: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_29725c:
    if (ctx->pc == 0x29725Cu) {
        ctx->pc = 0x297260u;
        goto label_297260;
    }
    ctx->pc = 0x297258u;
    {
        const bool branch_taken_0x297258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297258) {
            ctx->pc = 0x2972E8u;
            goto label_2972e8;
        }
    }
    ctx->pc = 0x297260u;
label_297260:
    // 0x297260: 0x8e230324  lw          $v1, 0x324($s1)
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_297264:
    // 0x297264: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_297268:
    if (ctx->pc == 0x297268u) {
        ctx->pc = 0x29726Cu;
        goto label_29726c;
    }
    ctx->pc = 0x297264u;
    {
        const bool branch_taken_0x297264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297264) {
            ctx->pc = 0x2972E8u;
            goto label_2972e8;
        }
    }
    ctx->pc = 0x29726Cu;
label_29726c:
    // 0x29726c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_297270:
    // 0x297270: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x297270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_297274:
    // 0x297274: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_297278:
    if (ctx->pc == 0x297278u) {
        ctx->pc = 0x29727Cu;
        goto label_29727c;
    }
    ctx->pc = 0x297274u;
    {
        const bool branch_taken_0x297274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297274) {
            ctx->pc = 0x2972E8u;
            goto label_2972e8;
        }
    }
    ctx->pc = 0x29727Cu;
label_29727c:
    // 0x29727c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29727cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_297280:
    // 0x297280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297284:
    // 0x297284: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x297284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_297288:
    // 0x297288: 0x320f809  jalr        $t9
label_29728c:
    if (ctx->pc == 0x29728Cu) {
        ctx->pc = 0x29728Cu;
            // 0x29728c: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x297290u;
        goto label_297290;
    }
    ctx->pc = 0x297288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297290u);
        ctx->pc = 0x29728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297288u;
            // 0x29728c: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297290u; }
            if (ctx->pc != 0x297290u) { return; }
        }
        }
    }
    ctx->pc = 0x297290u;
label_297290:
    // 0x297290: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x297290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_297294:
    // 0x297294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297298:
    // 0x297298: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x297298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_29729c:
    // 0x29729c: 0x320f809  jalr        $t9
label_2972a0:
    if (ctx->pc == 0x2972A0u) {
        ctx->pc = 0x2972A0u;
            // 0x2972a0: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x2972A4u;
        goto label_2972a4;
    }
    ctx->pc = 0x29729Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2972A4u);
        ctx->pc = 0x2972A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29729Cu;
            // 0x2972a0: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2972A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2972A4u; }
            if (ctx->pc != 0x2972A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2972A4u;
label_2972a4:
    // 0x2972a4: 0x8ec40ff4  lw          $a0, 0xFF4($s6)
    ctx->pc = 0x2972a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4084)));
label_2972a8:
    // 0x2972a8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2972ac:
    if (ctx->pc == 0x2972ACu) {
        ctx->pc = 0x2972B0u;
        goto label_2972b0;
    }
    ctx->pc = 0x2972A8u;
    {
        const bool branch_taken_0x2972a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972a8) {
            ctx->pc = 0x2972E8u;
            goto label_2972e8;
        }
    }
    ctx->pc = 0x2972B0u;
label_2972b0:
    // 0x2972b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2972b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2972b4:
    // 0x2972b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2972b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2972b8:
    // 0x2972b8: 0x320f809  jalr        $t9
label_2972bc:
    if (ctx->pc == 0x2972BCu) {
        ctx->pc = 0x2972BCu;
            // 0x2972bc: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x2972C0u;
        goto label_2972c0;
    }
    ctx->pc = 0x2972B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2972C0u);
        ctx->pc = 0x2972BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972B8u;
            // 0x2972bc: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2972C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2972C0u; }
            if (ctx->pc != 0x2972C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2972C0u;
label_2972c0:
    // 0x2972c0: 0x8ec40ff4  lw          $a0, 0xFF4($s6)
    ctx->pc = 0x2972c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4084)));
label_2972c4:
    // 0x2972c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2972c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2972c8:
    // 0x2972c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2972c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2972cc:
    // 0x2972cc: 0x320f809  jalr        $t9
label_2972d0:
    if (ctx->pc == 0x2972D0u) {
        ctx->pc = 0x2972D0u;
            // 0x2972d0: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x2972D4u;
        goto label_2972d4;
    }
    ctx->pc = 0x2972CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2972D4u);
        ctx->pc = 0x2972D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2972CCu;
            // 0x2972d0: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2972D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2972D4u; }
            if (ctx->pc != 0x2972D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2972D4u;
label_2972d4:
    // 0x2972d4: 0x8ec40ff4  lw          $a0, 0xFF4($s6)
    ctx->pc = 0x2972d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4084)));
label_2972d8:
    // 0x2972d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2972d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2972dc:
    // 0x2972dc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2972dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2972e0:
    // 0x2972e0: 0x320f809  jalr        $t9
label_2972e4:
    if (ctx->pc == 0x2972E4u) {
        ctx->pc = 0x2972E8u;
        goto label_2972e8;
    }
    ctx->pc = 0x2972E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2972E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2972E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2972E8u; }
            if (ctx->pc != 0x2972E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2972E8u;
label_2972e8:
    // 0x2972e8: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x2972e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_2972ec:
    // 0x2972ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2972ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2972f0:
    // 0x2972f0: 0x8ec30d40  lw          $v1, 0xD40($s6)
    ctx->pc = 0x2972f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3392)));
label_2972f4:
    // 0x2972f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2972f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2972f8:
    // 0x2972f8: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_2972fc:
    if (ctx->pc == 0x2972FCu) {
        ctx->pc = 0x297300u;
        goto label_297300;
    }
    ctx->pc = 0x2972F8u;
    {
        const bool branch_taken_0x2972f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2972f8) {
            ctx->pc = 0x297238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297238;
        }
    }
    ctx->pc = 0x297300u;
label_297300:
    // 0x297300: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x297300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_297304:
    // 0x297304: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x297304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_297308:
    // 0x297308: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x297308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_29730c:
    // 0x29730c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x29730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_297310:
    // 0x297310: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x297310u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_297314:
    // 0x297314: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x297314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_297318:
    // 0x297318: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x297318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29731c:
    // 0x29731c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x29731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_297320:
    // 0x297320: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x297320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_297324:
    // 0x297324: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x297324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_297328:
    // 0x297328: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x297328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29732c:
    // 0x29732c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_297330:
    // 0x297330: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x297330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_297334:
    // 0x297334: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x297334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_297338:
    // 0x297338: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x297338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29733c:
    // 0x29733c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29733cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_297340:
    // 0x297340: 0x3e00008  jr          $ra
label_297344:
    if (ctx->pc == 0x297344u) {
        ctx->pc = 0x297344u;
            // 0x297344: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x297348u;
        goto label_fallthrough_0x297340;
    }
    ctx->pc = 0x297340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297340u;
            // 0x297344: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x297340:
    ctx->pc = 0x297348u;
}
