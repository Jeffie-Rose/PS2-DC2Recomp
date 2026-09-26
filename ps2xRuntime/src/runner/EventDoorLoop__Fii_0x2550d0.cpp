#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventDoorLoop__Fii
// Address: 0x2550d0 - 0x255454
void EventDoorLoop__Fii_0x2550d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventDoorLoop__Fii_0x2550d0");
#endif

    switch (ctx->pc) {
        case 0x2550d0u: goto label_2550d0;
        case 0x2550d4u: goto label_2550d4;
        case 0x2550d8u: goto label_2550d8;
        case 0x2550dcu: goto label_2550dc;
        case 0x2550e0u: goto label_2550e0;
        case 0x2550e4u: goto label_2550e4;
        case 0x2550e8u: goto label_2550e8;
        case 0x2550ecu: goto label_2550ec;
        case 0x2550f0u: goto label_2550f0;
        case 0x2550f4u: goto label_2550f4;
        case 0x2550f8u: goto label_2550f8;
        case 0x2550fcu: goto label_2550fc;
        case 0x255100u: goto label_255100;
        case 0x255104u: goto label_255104;
        case 0x255108u: goto label_255108;
        case 0x25510cu: goto label_25510c;
        case 0x255110u: goto label_255110;
        case 0x255114u: goto label_255114;
        case 0x255118u: goto label_255118;
        case 0x25511cu: goto label_25511c;
        case 0x255120u: goto label_255120;
        case 0x255124u: goto label_255124;
        case 0x255128u: goto label_255128;
        case 0x25512cu: goto label_25512c;
        case 0x255130u: goto label_255130;
        case 0x255134u: goto label_255134;
        case 0x255138u: goto label_255138;
        case 0x25513cu: goto label_25513c;
        case 0x255140u: goto label_255140;
        case 0x255144u: goto label_255144;
        case 0x255148u: goto label_255148;
        case 0x25514cu: goto label_25514c;
        case 0x255150u: goto label_255150;
        case 0x255154u: goto label_255154;
        case 0x255158u: goto label_255158;
        case 0x25515cu: goto label_25515c;
        case 0x255160u: goto label_255160;
        case 0x255164u: goto label_255164;
        case 0x255168u: goto label_255168;
        case 0x25516cu: goto label_25516c;
        case 0x255170u: goto label_255170;
        case 0x255174u: goto label_255174;
        case 0x255178u: goto label_255178;
        case 0x25517cu: goto label_25517c;
        case 0x255180u: goto label_255180;
        case 0x255184u: goto label_255184;
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        case 0x255318u: goto label_255318;
        case 0x25531cu: goto label_25531c;
        case 0x255320u: goto label_255320;
        case 0x255324u: goto label_255324;
        case 0x255328u: goto label_255328;
        case 0x25532cu: goto label_25532c;
        case 0x255330u: goto label_255330;
        case 0x255334u: goto label_255334;
        case 0x255338u: goto label_255338;
        case 0x25533cu: goto label_25533c;
        case 0x255340u: goto label_255340;
        case 0x255344u: goto label_255344;
        case 0x255348u: goto label_255348;
        case 0x25534cu: goto label_25534c;
        case 0x255350u: goto label_255350;
        case 0x255354u: goto label_255354;
        case 0x255358u: goto label_255358;
        case 0x25535cu: goto label_25535c;
        case 0x255360u: goto label_255360;
        case 0x255364u: goto label_255364;
        case 0x255368u: goto label_255368;
        case 0x25536cu: goto label_25536c;
        case 0x255370u: goto label_255370;
        case 0x255374u: goto label_255374;
        case 0x255378u: goto label_255378;
        case 0x25537cu: goto label_25537c;
        case 0x255380u: goto label_255380;
        case 0x255384u: goto label_255384;
        case 0x255388u: goto label_255388;
        case 0x25538cu: goto label_25538c;
        case 0x255390u: goto label_255390;
        case 0x255394u: goto label_255394;
        case 0x255398u: goto label_255398;
        case 0x25539cu: goto label_25539c;
        case 0x2553a0u: goto label_2553a0;
        case 0x2553a4u: goto label_2553a4;
        case 0x2553a8u: goto label_2553a8;
        case 0x2553acu: goto label_2553ac;
        case 0x2553b0u: goto label_2553b0;
        case 0x2553b4u: goto label_2553b4;
        case 0x2553b8u: goto label_2553b8;
        case 0x2553bcu: goto label_2553bc;
        case 0x2553c0u: goto label_2553c0;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553c8u: goto label_2553c8;
        case 0x2553ccu: goto label_2553cc;
        case 0x2553d0u: goto label_2553d0;
        case 0x2553d4u: goto label_2553d4;
        case 0x2553d8u: goto label_2553d8;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553e0u: goto label_2553e0;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553e8u: goto label_2553e8;
        case 0x2553ecu: goto label_2553ec;
        case 0x2553f0u: goto label_2553f0;
        case 0x2553f4u: goto label_2553f4;
        case 0x2553f8u: goto label_2553f8;
        case 0x2553fcu: goto label_2553fc;
        case 0x255400u: goto label_255400;
        case 0x255404u: goto label_255404;
        case 0x255408u: goto label_255408;
        case 0x25540cu: goto label_25540c;
        case 0x255410u: goto label_255410;
        case 0x255414u: goto label_255414;
        case 0x255418u: goto label_255418;
        case 0x25541cu: goto label_25541c;
        case 0x255420u: goto label_255420;
        case 0x255424u: goto label_255424;
        case 0x255428u: goto label_255428;
        case 0x25542cu: goto label_25542c;
        case 0x255430u: goto label_255430;
        case 0x255434u: goto label_255434;
        case 0x255438u: goto label_255438;
        case 0x25543cu: goto label_25543c;
        case 0x255440u: goto label_255440;
        case 0x255444u: goto label_255444;
        case 0x255448u: goto label_255448;
        case 0x25544cu: goto label_25544c;
        case 0x255450u: goto label_255450;
        default: break;
    }

    ctx->pc = 0x2550d0u;

label_2550d0:
    // 0x2550d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2550d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2550d4:
    // 0x2550d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2550d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2550d8:
    // 0x2550d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2550d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2550dc:
    // 0x2550dc: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x2550dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_2550e0:
    // 0x2550e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2550e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2550e4:
    // 0x2550e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2550e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2550e8:
    // 0x2550e8: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x2550e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2550ec:
    // 0x2550ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2550ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2550f0:
    // 0x2550f0: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x2550f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_2550f4:
    // 0x2550f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2550f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2550f8:
    // 0x2550f8: 0x27b600c8  addiu       $s6, $sp, 0xC8
    ctx->pc = 0x2550f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2550fc:
    // 0x2550fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2550fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_255100:
    // 0x255100: 0x27b500b4  addiu       $s5, $sp, 0xB4
    ctx->pc = 0x255100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_255104:
    // 0x255104: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x255104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_255108:
    // 0x255108: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x255108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25510c:
    // 0x25510c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_255110:
    // 0x255110: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_255114:
    // 0x255114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_255118:
    // 0x255118: 0xc421e5ac  lwc1        $f1, -0x1A54($at)
    ctx->pc = 0x255118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25511c:
    // 0x25511c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25511cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255120:
    // 0x255120: 0xc420e5b0  lwc1        $f0, -0x1A50($at)
    ctx->pc = 0x255120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255124:
    // 0x255124: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x255124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_255128:
    // 0x255128: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x255128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25512c:
    // 0x25512c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25512cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255130:
    // 0x255130: 0xc420e5b4  lwc1        $f0, -0x1A4C($at)
    ctx->pc = 0x255130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255134:
    // 0x255134: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x255134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_255138:
    // 0x255138: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25513c:
    // 0x25513c: 0xc420e5b8  lwc1        $f0, -0x1A48($at)
    ctx->pc = 0x25513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255140:
    // 0x255140: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x255140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_255144:
    // 0x255144: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x255144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_255148:
    // 0x255148: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25514c:
    // 0x25514c: 0xc421e5bc  lwc1        $f1, -0x1A44($at)
    ctx->pc = 0x25514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255150:
    // 0x255150: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x255150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_255154:
    // 0x255154: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255158:
    // 0x255158: 0xc420e5c0  lwc1        $f0, -0x1A40($at)
    ctx->pc = 0x255158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25515c:
    // 0x25515c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x25515cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_255160:
    // 0x255160: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x255160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_255164:
    // 0x255164: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255168:
    // 0x255168: 0xc420e5c4  lwc1        $f0, -0x1A3C($at)
    ctx->pc = 0x255168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25516c:
    // 0x25516c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x25516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_255170:
    // 0x255170: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255174:
    // 0x255174: 0x8c24e56c  lw          $a0, -0x1A94($at)
    ctx->pc = 0x255174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960492)));
label_255178:
    // 0x255178: 0xc0956d4  jal         func_255B50
label_25517c:
    if (ctx->pc == 0x25517Cu) {
        ctx->pc = 0x25517Cu;
            // 0x25517c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255180u;
        goto label_255180;
    }
    ctx->pc = 0x255178u;
    SET_GPR_U32(ctx, 31, 0x255180u);
    ctx->pc = 0x25517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255178u;
            // 0x25517c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255180u; }
        if (ctx->pc != 0x255180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255180u; }
        if (ctx->pc != 0x255180u) { return; }
    }
    ctx->pc = 0x255180u;
label_255180:
    // 0x255180: 0xc0956c8  jal         func_255B20
label_255184:
    if (ctx->pc == 0x255184u) {
        ctx->pc = 0x255184u;
            // 0x255184: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255188u;
        goto label_255188;
    }
    ctx->pc = 0x255180u;
    SET_GPR_U32(ctx, 31, 0x255188u);
    ctx->pc = 0x255184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255180u;
            // 0x255184: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255188u; }
        if (ctx->pc != 0x255188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255188u; }
        if (ctx->pc != 0x255188u) { return; }
    }
    ctx->pc = 0x255188u;
label_255188:
    // 0x255188: 0xc0956c8  jal         func_255B20
label_25518c:
    if (ctx->pc == 0x25518Cu) {
        ctx->pc = 0x25518Cu;
            // 0x25518c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255190u;
        goto label_255190;
    }
    ctx->pc = 0x255188u;
    SET_GPR_U32(ctx, 31, 0x255190u);
    ctx->pc = 0x25518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255188u;
            // 0x25518c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255190u; }
        if (ctx->pc != 0x255190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255190u; }
        if (ctx->pc != 0x255190u) { return; }
    }
    ctx->pc = 0x255190u;
label_255190:
    // 0x255190: 0x1e80001f  bgtz        $s4, . + 4 + (0x1F << 2)
label_255194:
    if (ctx->pc == 0x255194u) {
        ctx->pc = 0x255194u;
            // 0x255194: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255198u;
        goto label_255198;
    }
    ctx->pc = 0x255190u;
    {
        const bool branch_taken_0x255190 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x255194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255190u;
            // 0x255194: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255190) {
            ctx->pc = 0x255210u;
            goto label_255210;
        }
    }
    ctx->pc = 0x255198u;
label_255198:
    // 0x255198: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x255198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25519c:
    // 0x25519c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2551a0:
    // 0x2551a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2551a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2551a4:
    // 0x2551a4: 0x320f809  jalr        $t9
label_2551a8:
    if (ctx->pc == 0x2551A8u) {
        ctx->pc = 0x2551A8u;
            // 0x2551a8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2551ACu;
        goto label_2551ac;
    }
    ctx->pc = 0x2551A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2551ACu);
        ctx->pc = 0x2551A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2551A4u;
            // 0x2551a8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2551ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2551ACu; }
            if (ctx->pc != 0x2551ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2551ACu;
label_2551ac:
    // 0x2551ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2551acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2551b0:
    // 0x2551b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2551b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2551b4:
    // 0x2551b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2551b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2551b8:
    // 0x2551b8: 0x320f809  jalr        $t9
label_2551bc:
    if (ctx->pc == 0x2551BCu) {
        ctx->pc = 0x2551BCu;
            // 0x2551bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2551C0u;
        goto label_2551c0;
    }
    ctx->pc = 0x2551B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2551C0u);
        ctx->pc = 0x2551BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2551B8u;
            // 0x2551bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2551C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2551C0u; }
            if (ctx->pc != 0x2551C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2551C0u;
label_2551c0:
    // 0x2551c0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2551c4:
    if (ctx->pc == 0x2551C4u) {
        ctx->pc = 0x2551C8u;
        goto label_2551c8;
    }
    ctx->pc = 0x2551C0u;
    {
        const bool branch_taken_0x2551c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2551c0) {
            ctx->pc = 0x2551ECu;
            goto label_2551ec;
        }
    }
    ctx->pc = 0x2551C8u;
label_2551c8:
    // 0x2551c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2551c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2551cc:
    // 0x2551cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2551ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2551d0:
    // 0x2551d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2551d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2551d4:
    // 0x2551d4: 0x24a5c410  addiu       $a1, $a1, -0x3BF0
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
label_2551d8:
    // 0x2551d8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2551d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2551dc:
    // 0x2551dc: 0x320f809  jalr        $t9
label_2551e0:
    if (ctx->pc == 0x2551E0u) {
        ctx->pc = 0x2551E0u;
            // 0x2551e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2551E4u;
        goto label_2551e4;
    }
    ctx->pc = 0x2551DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2551E4u);
        ctx->pc = 0x2551E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2551DCu;
            // 0x2551e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2551E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2551E4u; }
            if (ctx->pc != 0x2551E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2551E4u;
label_2551e4:
    // 0x2551e4: 0x10000048  b           . + 4 + (0x48 << 2)
label_2551e8:
    if (ctx->pc == 0x2551E8u) {
        ctx->pc = 0x2551E8u;
            // 0x2551e8: 0x2a81003d  slti        $at, $s4, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->pc = 0x2551ECu;
        goto label_2551ec;
    }
    ctx->pc = 0x2551E4u;
    {
        const bool branch_taken_0x2551e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2551E4u;
            // 0x2551e8: 0x2a81003d  slti        $at, $s4, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551e4) {
            ctx->pc = 0x255308u;
            goto label_255308;
        }
    }
    ctx->pc = 0x2551ECu;
label_2551ec:
    // 0x2551ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2551ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2551f0:
    // 0x2551f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2551f4:
    // 0x2551f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2551f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2551f8:
    // 0x2551f8: 0x24a5c410  addiu       $a1, $a1, -0x3BF0
    ctx->pc = 0x2551f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
label_2551fc:
    // 0x2551fc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2551fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_255200:
    // 0x255200: 0x320f809  jalr        $t9
label_255204:
    if (ctx->pc == 0x255204u) {
        ctx->pc = 0x255204u;
            // 0x255204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x255208u;
        goto label_255208;
    }
    ctx->pc = 0x255200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x255208u);
        ctx->pc = 0x255204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255200u;
            // 0x255204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x255208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x255208u; }
            if (ctx->pc != 0x255208u) { return; }
        }
        }
    }
    ctx->pc = 0x255208u;
label_255208:
    // 0x255208: 0x1000003e  b           . + 4 + (0x3E << 2)
label_25520c:
    if (ctx->pc == 0x25520Cu) {
        ctx->pc = 0x255210u;
        goto label_255210;
    }
    ctx->pc = 0x255208u;
    {
        const bool branch_taken_0x255208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255208) {
            ctx->pc = 0x255304u;
            goto label_255304;
        }
    }
    ctx->pc = 0x255210u;
label_255210:
    // 0x255210: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x255210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_255214:
    // 0x255214: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
label_255218:
    if (ctx->pc == 0x255218u) {
        ctx->pc = 0x255218u;
            // 0x255218: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x25521Cu;
        goto label_25521c;
    }
    ctx->pc = 0x255214u;
    {
        const bool branch_taken_0x255214 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x255218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255214u;
            // 0x255218: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255214) {
            ctx->pc = 0x2552E0u;
            goto label_2552e0;
        }
    }
    ctx->pc = 0x25521Cu;
label_25521c:
    // 0x25521c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x25521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_255220:
    // 0x255220: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x255220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_255224:
    // 0x255224: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x255224u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_255228:
    // 0x255228: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_25522c:
    if (ctx->pc == 0x25522Cu) {
        ctx->pc = 0x25522Cu;
            // 0x25522c: 0x8c24a498  lw          $a0, -0x5B68($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
        ctx->pc = 0x255230u;
        goto label_255230;
    }
    ctx->pc = 0x255228u;
    {
        const bool branch_taken_0x255228 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255228u;
            // 0x25522c: 0x8c24a498  lw          $a0, -0x5B68($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255228) {
            ctx->pc = 0x255248u;
            goto label_255248;
        }
    }
    ctx->pc = 0x255230u;
label_255230:
    // 0x255230: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255234:
    // 0x255234: 0x8c25e574  lw          $a1, -0x1A8C($at)
    ctx->pc = 0x255234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960500)));
label_255238:
    // 0x255238: 0xc063818  jal         func_18E060
label_25523c:
    if (ctx->pc == 0x25523Cu) {
        ctx->pc = 0x25523Cu;
            // 0x25523c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255240u;
        goto label_255240;
    }
    ctx->pc = 0x255238u;
    SET_GPR_U32(ctx, 31, 0x255240u);
    ctx->pc = 0x25523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255238u;
            // 0x25523c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255240u; }
        if (ctx->pc != 0x255240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255240u; }
        if (ctx->pc != 0x255240u) { return; }
    }
    ctx->pc = 0x255240u;
label_255240:
    // 0x255240: 0x10000030  b           . + 4 + (0x30 << 2)
label_255244:
    if (ctx->pc == 0x255244u) {
        ctx->pc = 0x255248u;
        goto label_255248;
    }
    ctx->pc = 0x255240u;
    {
        const bool branch_taken_0x255240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255240) {
            ctx->pc = 0x255304u;
            goto label_255304;
        }
    }
    ctx->pc = 0x255248u;
label_255248:
    // 0x255248: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25524c:
    // 0x25524c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_255250:
    // 0x255250: 0x8c26e5f8  lw          $a2, -0x1A08($at)
    ctx->pc = 0x255250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960632)));
label_255254:
    // 0x255254: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
label_255258:
    if (ctx->pc == 0x255258u) {
        ctx->pc = 0x255258u;
            // 0x255258: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x25525Cu;
        goto label_25525c;
    }
    ctx->pc = 0x255254u;
    {
        const bool branch_taken_0x255254 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x255258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255254u;
            // 0x255258: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255254) {
            ctx->pc = 0x2552B8u;
            goto label_2552b8;
        }
    }
    ctx->pc = 0x25525Cu;
label_25525c:
    // 0x25525c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_255260:
    // 0x255260: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
label_255264:
    if (ctx->pc == 0x255264u) {
        ctx->pc = 0x255264u;
            // 0x255264: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x255268u;
        goto label_255268;
    }
    ctx->pc = 0x255260u;
    {
        const bool branch_taken_0x255260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x255264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255260u;
            // 0x255264: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255260) {
            ctx->pc = 0x2552ACu;
            goto label_2552ac;
        }
    }
    ctx->pc = 0x255268u;
label_255268:
    // 0x255268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25526c:
    // 0x25526c: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
label_255270:
    if (ctx->pc == 0x255270u) {
        ctx->pc = 0x255270u;
            // 0x255270: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x255274u;
        goto label_255274;
    }
    ctx->pc = 0x25526Cu;
    {
        const bool branch_taken_0x25526c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x255270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25526Cu;
            // 0x255270: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25526c) {
            ctx->pc = 0x2552A0u;
            goto label_2552a0;
        }
    }
    ctx->pc = 0x255274u;
label_255274:
    // 0x255274: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_255278:
    // 0x255278: 0x10c50006  beq         $a2, $a1, . + 4 + (0x6 << 2)
label_25527c:
    if (ctx->pc == 0x25527Cu) {
        ctx->pc = 0x255280u;
        goto label_255280;
    }
    ctx->pc = 0x255278u;
    {
        const bool branch_taken_0x255278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x255278) {
            ctx->pc = 0x255294u;
            goto label_255294;
        }
    }
    ctx->pc = 0x255280u;
label_255280:
    // 0x255280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255284:
    // 0x255284: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
label_255288:
    if (ctx->pc == 0x255288u) {
        ctx->pc = 0x255288u;
            // 0x255288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25528Cu;
        goto label_25528c;
    }
    ctx->pc = 0x255284u;
    {
        const bool branch_taken_0x255284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x255288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255284u;
            // 0x255288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255284) {
            ctx->pc = 0x2552C8u;
            goto label_2552c8;
        }
    }
    ctx->pc = 0x25528Cu;
label_25528c:
    // 0x25528c: 0x1000000d  b           . + 4 + (0xD << 2)
label_255290:
    if (ctx->pc == 0x255290u) {
        ctx->pc = 0x255290u;
            // 0x255290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255294u;
        goto label_255294;
    }
    ctx->pc = 0x25528Cu;
    {
        const bool branch_taken_0x25528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25528Cu;
            // 0x255290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25528c) {
            ctx->pc = 0x2552C4u;
            goto label_2552c4;
        }
    }
    ctx->pc = 0x255294u;
label_255294:
    // 0x255294: 0x1000000b  b           . + 4 + (0xB << 2)
label_255298:
    if (ctx->pc == 0x255298u) {
        ctx->pc = 0x255298u;
            // 0x255298: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25529Cu;
        goto label_25529c;
    }
    ctx->pc = 0x255294u;
    {
        const bool branch_taken_0x255294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255294u;
            // 0x255298: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255294) {
            ctx->pc = 0x2552C4u;
            goto label_2552c4;
        }
    }
    ctx->pc = 0x25529Cu;
label_25529c:
    // 0x25529c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x25529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2552a0:
    // 0x2552a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2552a4:
    if (ctx->pc == 0x2552A4u) {
        ctx->pc = 0x2552A8u;
        goto label_2552a8;
    }
    ctx->pc = 0x2552A0u;
    {
        const bool branch_taken_0x2552a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2552a0) {
            ctx->pc = 0x2552C4u;
            goto label_2552c4;
        }
    }
    ctx->pc = 0x2552A8u;
label_2552a8:
    // 0x2552a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2552a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2552ac:
    // 0x2552ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_2552b0:
    if (ctx->pc == 0x2552B0u) {
        ctx->pc = 0x2552B4u;
        goto label_2552b4;
    }
    ctx->pc = 0x2552ACu;
    {
        const bool branch_taken_0x2552ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2552ac) {
            ctx->pc = 0x2552C4u;
            goto label_2552c4;
        }
    }
    ctx->pc = 0x2552B4u;
label_2552b4:
    // 0x2552b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2552b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2552b8:
    // 0x2552b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2552bc:
    if (ctx->pc == 0x2552BCu) {
        ctx->pc = 0x2552C0u;
        goto label_2552c0;
    }
    ctx->pc = 0x2552B8u;
    {
        const bool branch_taken_0x2552b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2552b8) {
            ctx->pc = 0x2552C4u;
            goto label_2552c4;
        }
    }
    ctx->pc = 0x2552C0u;
label_2552c0:
    // 0x2552c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2552c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2552c4:
    // 0x2552c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2552c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2552c8:
    // 0x2552c8: 0xc063818  jal         func_18E060
label_2552cc:
    if (ctx->pc == 0x2552CCu) {
        ctx->pc = 0x2552D0u;
        goto label_2552d0;
    }
    ctx->pc = 0x2552C8u;
    SET_GPR_U32(ctx, 31, 0x2552D0u);
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2552D0u; }
        if (ctx->pc != 0x2552D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2552D0u; }
        if (ctx->pc != 0x2552D0u) { return; }
    }
    ctx->pc = 0x2552D0u;
label_2552d0:
    // 0x2552d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2552d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2552d4:
    // 0x2552d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2552d8:
    if (ctx->pc == 0x2552D8u) {
        ctx->pc = 0x2552D8u;
            // 0x2552d8: 0xac20e5f8  sw          $zero, -0x1A08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960632), GPR_U32(ctx, 0));
        ctx->pc = 0x2552DCu;
        goto label_2552dc;
    }
    ctx->pc = 0x2552D4u;
    {
        const bool branch_taken_0x2552d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2552D4u;
            // 0x2552d8: 0xac20e5f8  sw          $zero, -0x1A08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552d4) {
            ctx->pc = 0x255304u;
            goto label_255304;
        }
    }
    ctx->pc = 0x2552DCu;
label_2552dc:
    // 0x2552dc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2552dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2552e0:
    // 0x2552e0: 0x16850008  bne         $s4, $a1, . + 4 + (0x8 << 2)
label_2552e4:
    if (ctx->pc == 0x2552E4u) {
        ctx->pc = 0x2552E8u;
        goto label_2552e8;
    }
    ctx->pc = 0x2552E0u;
    {
        const bool branch_taken_0x2552e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        if (branch_taken_0x2552e0) {
            ctx->pc = 0x255304u;
            goto label_255304;
        }
    }
    ctx->pc = 0x2552E8u;
label_2552e8:
    // 0x2552e8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2552e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2552ec:
    // 0x2552ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2552ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2552f0:
    // 0x2552f0: 0x0  nop
    ctx->pc = 0x2552f0u;
    // NOP
label_2552f4:
    // 0x2552f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2552f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2552f8:
    // 0x2552f8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2552f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2552fc:
    // 0x2552fc: 0xc05f610  jal         func_17D840
label_255300:
    if (ctx->pc == 0x255300u) {
        ctx->pc = 0x255300u;
            // 0x255300: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x255304u;
        goto label_255304;
    }
    ctx->pc = 0x2552FCu;
    SET_GPR_U32(ctx, 31, 0x255304u);
    ctx->pc = 0x255300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2552FCu;
            // 0x255300: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255304u; }
        if (ctx->pc != 0x255304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255304u; }
        if (ctx->pc != 0x255304u) { return; }
    }
    ctx->pc = 0x255304u;
label_255304:
    // 0x255304: 0x2a81003d  slti        $at, $s4, 0x3D
    ctx->pc = 0x255304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)61) ? 1 : 0);
label_255308:
    // 0x255308: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_25530c:
    if (ctx->pc == 0x25530Cu) {
        ctx->pc = 0x255310u;
        goto label_255310;
    }
    ctx->pc = 0x255308u;
    {
        const bool branch_taken_0x255308 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x255308) {
            ctx->pc = 0x255318u;
            goto label_255318;
        }
    }
    ctx->pc = 0x255310u;
label_255310:
    // 0x255310: 0x10000044  b           . + 4 + (0x44 << 2)
label_255314:
    if (ctx->pc == 0x255314u) {
        ctx->pc = 0x255314u;
            // 0x255314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x255318u;
        goto label_255318;
    }
    ctx->pc = 0x255310u;
    {
        const bool branch_taken_0x255310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255310u;
            // 0x255314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255310) {
            ctx->pc = 0x255424u;
            goto label_255424;
        }
    }
    ctx->pc = 0x255318u;
label_255318:
    // 0x255318: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25531c:
    // 0x25531c: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x25531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_255320:
    // 0x255320: 0xc422e5c8  lwc1        $f2, -0x1A38($at)
    ctx->pc = 0x255320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_255324:
    // 0x255324: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x255324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_255328:
    // 0x255328: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25532c:
    // 0x25532c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x25532cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_255330:
    // 0x255330: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x255330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_255334:
    // 0x255334: 0xc421e5cc  lwc1        $f1, -0x1A34($at)
    ctx->pc = 0x255334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255338:
    // 0x255338: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x255338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25533c:
    // 0x25533c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_255340:
    // 0x255340: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x255340u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_255344:
    // 0x255344: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x255344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_255348:
    // 0x255348: 0xc420e5d0  lwc1        $f0, -0x1A30($at)
    ctx->pc = 0x255348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25534c:
    // 0x25534c: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x25534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255350:
    // 0x255350: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255354:
    // 0x255354: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_255358:
    if (ctx->pc == 0x255358u) {
        ctx->pc = 0x255358u;
            // 0x255358: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x25535Cu;
        goto label_25535c;
    }
    ctx->pc = 0x255354u;
    {
        const bool branch_taken_0x255354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x255358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255354u;
            // 0x255358: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255354) {
            ctx->pc = 0x255370u;
            goto label_255370;
        }
    }
    ctx->pc = 0x25535Cu;
label_25535c:
    // 0x25535c: 0xc04c66c  jal         func_1319B0
label_255360:
    if (ctx->pc == 0x255360u) {
        ctx->pc = 0x255360u;
            // 0x255360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255364u;
        goto label_255364;
    }
    ctx->pc = 0x25535Cu;
    SET_GPR_U32(ctx, 31, 0x255364u);
    ctx->pc = 0x255360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25535Cu;
            // 0x255360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255364u; }
        if (ctx->pc != 0x255364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255364u; }
        if (ctx->pc != 0x255364u) { return; }
    }
    ctx->pc = 0x255364u;
label_255364:
    // 0x255364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255368:
    // 0x255368: 0xc04c518  jal         func_131460
label_25536c:
    if (ctx->pc == 0x25536Cu) {
        ctx->pc = 0x25536Cu;
            // 0x25536c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x255370u;
        goto label_255370;
    }
    ctx->pc = 0x255368u;
    SET_GPR_U32(ctx, 31, 0x255370u);
    ctx->pc = 0x25536Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255368u;
            // 0x25536c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255370u; }
        if (ctx->pc != 0x255370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255370u; }
        if (ctx->pc != 0x255370u) { return; }
    }
    ctx->pc = 0x255370u;
label_255370:
    // 0x255370: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x255370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255374:
    // 0x255374: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x255374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_255378:
    // 0x255378: 0x0  nop
    ctx->pc = 0x255378u;
    // NOP
label_25537c:
    // 0x25537c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25537cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255380:
    // 0x255380: 0x0  nop
    ctx->pc = 0x255380u;
    // NOP
label_255384:
    // 0x255384: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_255388:
    if (ctx->pc == 0x255388u) {
        ctx->pc = 0x25538Cu;
        goto label_25538c;
    }
    ctx->pc = 0x255384u;
    {
        const bool branch_taken_0x255384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255384) {
            ctx->pc = 0x25540Cu;
            goto label_25540c;
        }
    }
    ctx->pc = 0x25538Cu;
label_25538c:
    // 0x25538c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x25538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255390:
    // 0x255390: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x255390u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255394:
    // 0x255394: 0x0  nop
    ctx->pc = 0x255394u;
    // NOP
label_255398:
    // 0x255398: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_25539c:
    if (ctx->pc == 0x25539Cu) {
        ctx->pc = 0x2553A0u;
        goto label_2553a0;
    }
    ctx->pc = 0x255398u;
    {
        const bool branch_taken_0x255398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255398) {
            ctx->pc = 0x25540Cu;
            goto label_25540c;
        }
    }
    ctx->pc = 0x2553A0u;
label_2553a0:
    // 0x2553a0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2553a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2553a4:
    // 0x2553a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2553a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2553a8:
    // 0x2553a8: 0x0  nop
    ctx->pc = 0x2553a8u;
    // NOP
label_2553ac:
    // 0x2553ac: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2553b0:
    if (ctx->pc == 0x2553B0u) {
        ctx->pc = 0x2553B4u;
        goto label_2553b4;
    }
    ctx->pc = 0x2553ACu;
    {
        const bool branch_taken_0x2553ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2553ac) {
            ctx->pc = 0x25540Cu;
            goto label_25540c;
        }
    }
    ctx->pc = 0x2553B4u;
label_2553b4:
    // 0x2553b4: 0xc041c7a  jal         func_1071E8
label_2553b8:
    if (ctx->pc == 0x2553B8u) {
        ctx->pc = 0x2553B8u;
            // 0x2553b8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2553BCu;
        goto label_2553bc;
    }
    ctx->pc = 0x2553B4u;
    SET_GPR_U32(ctx, 31, 0x2553BCu);
    ctx->pc = 0x2553B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2553B4u;
            // 0x2553b8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553BCu; }
        if (ctx->pc != 0x2553BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553BCu; }
        if (ctx->pc != 0x2553BCu) { return; }
    }
    ctx->pc = 0x2553BCu;
label_2553bc:
    // 0x2553bc: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2553bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2553c0:
    // 0x2553c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2553c4:
    // 0x2553c4: 0xc041cf6  jal         func_1073D8
label_2553c8:
    if (ctx->pc == 0x2553C8u) {
        ctx->pc = 0x2553C8u;
            // 0x2553c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2553CCu;
        goto label_2553cc;
    }
    ctx->pc = 0x2553C4u;
    SET_GPR_U32(ctx, 31, 0x2553CCu);
    ctx->pc = 0x2553C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2553C4u;
            // 0x2553c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553CCu; }
        if (ctx->pc != 0x2553CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553CCu; }
        if (ctx->pc != 0x2553CCu) { return; }
    }
    ctx->pc = 0x2553CCu;
label_2553cc:
    // 0x2553cc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2553ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2553d0:
    // 0x2553d0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2553d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2553d4:
    // 0x2553d4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2553d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2553d8:
    // 0x2553d8: 0xc041bb0  jal         func_106EC0
label_2553dc:
    if (ctx->pc == 0x2553DCu) {
        ctx->pc = 0x2553DCu;
            // 0x2553dc: 0x24c61a70  addiu       $a2, $a2, 0x1A70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6768));
        ctx->pc = 0x2553E0u;
        goto label_2553e0;
    }
    ctx->pc = 0x2553D8u;
    SET_GPR_U32(ctx, 31, 0x2553E0u);
    ctx->pc = 0x2553DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2553D8u;
            // 0x2553dc: 0x24c61a70  addiu       $a2, $a2, 0x1A70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553E0u; }
        if (ctx->pc != 0x2553E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553E0u; }
        if (ctx->pc != 0x2553E0u) { return; }
    }
    ctx->pc = 0x2553E0u;
label_2553e0:
    // 0x2553e0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2553e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2553e4:
    // 0x2553e4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2553e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2553e8:
    // 0x2553e8: 0xc041c38  jal         func_1070E0
label_2553ec:
    if (ctx->pc == 0x2553ECu) {
        ctx->pc = 0x2553ECu;
            // 0x2553ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2553F0u;
        goto label_2553f0;
    }
    ctx->pc = 0x2553E8u;
    SET_GPR_U32(ctx, 31, 0x2553F0u);
    ctx->pc = 0x2553ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2553E8u;
            // 0x2553ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553F0u; }
        if (ctx->pc != 0x2553F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553F0u; }
        if (ctx->pc != 0x2553F0u) { return; }
    }
    ctx->pc = 0x2553F0u;
label_2553f0:
    // 0x2553f0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2553f4:
    if (ctx->pc == 0x2553F4u) {
        ctx->pc = 0x2553F4u;
            // 0x2553f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2553F8u;
        goto label_2553f8;
    }
    ctx->pc = 0x2553F0u;
    {
        const bool branch_taken_0x2553f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2553F0u;
            // 0x2553f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553f0) {
            ctx->pc = 0x255424u;
            goto label_255424;
        }
    }
    ctx->pc = 0x2553F8u;
label_2553f8:
    // 0x2553f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2553f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2553fc:
    // 0x2553fc: 0xc04c504  jal         func_131410
label_255400:
    if (ctx->pc == 0x255400u) {
        ctx->pc = 0x255400u;
            // 0x255400: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x255404u;
        goto label_255404;
    }
    ctx->pc = 0x2553FCu;
    SET_GPR_U32(ctx, 31, 0x255404u);
    ctx->pc = 0x255400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2553FCu;
            // 0x255400: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255404u; }
        if (ctx->pc != 0x255404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255404u; }
        if (ctx->pc != 0x255404u) { return; }
    }
    ctx->pc = 0x255404u;
label_255404:
    // 0x255404: 0x10000006  b           . + 4 + (0x6 << 2)
label_255408:
    if (ctx->pc == 0x255408u) {
        ctx->pc = 0x25540Cu;
        goto label_25540c;
    }
    ctx->pc = 0x255404u;
    {
        const bool branch_taken_0x255404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255404) {
            ctx->pc = 0x255420u;
            goto label_255420;
        }
    }
    ctx->pc = 0x25540Cu;
label_25540c:
    // 0x25540c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_255410:
    if (ctx->pc == 0x255410u) {
        ctx->pc = 0x255414u;
        goto label_255414;
    }
    ctx->pc = 0x25540Cu;
    {
        const bool branch_taken_0x25540c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25540c) {
            ctx->pc = 0x255420u;
            goto label_255420;
        }
    }
    ctx->pc = 0x255414u;
label_255414:
    // 0x255414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255418:
    // 0x255418: 0xc04c504  jal         func_131410
label_25541c:
    if (ctx->pc == 0x25541Cu) {
        ctx->pc = 0x25541Cu;
            // 0x25541c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x255420u;
        goto label_255420;
    }
    ctx->pc = 0x255418u;
    SET_GPR_U32(ctx, 31, 0x255420u);
    ctx->pc = 0x25541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255418u;
            // 0x25541c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255420u; }
        if (ctx->pc != 0x255420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255420u; }
        if (ctx->pc != 0x255420u) { return; }
    }
    ctx->pc = 0x255420u;
label_255420:
    // 0x255420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x255420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255424:
    // 0x255424: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x255424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_255428:
    // 0x255428: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x255428u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25542c:
    // 0x25542c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25542cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_255430:
    // 0x255430: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_255434:
    // 0x255434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x255434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_255438:
    // 0x255438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25543c:
    // 0x25543c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25543cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_255440:
    // 0x255440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_255444:
    // 0x255444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255448:
    // 0x255448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25544c:
    // 0x25544c: 0x3e00008  jr          $ra
label_255450:
    if (ctx->pc == 0x255450u) {
        ctx->pc = 0x255450u;
            // 0x255450: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x255454u;
        goto label_fallthrough_0x25544c;
    }
    ctx->pc = 0x25544Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25544Cu;
            // 0x255450: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25544c:
    ctx->pc = 0x255454u;
}
