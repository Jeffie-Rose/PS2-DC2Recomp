#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRoot__11CDngFreeMapF9mgRect<f>P16DNGMAP_ROOT_INFOiUii
// Address: 0x1eb120 - 0x1ebe3c
void DrawRoot__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOT_INFOiUii_0x1eb120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRoot__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOT_INFOiUii_0x1eb120");
#endif

    switch (ctx->pc) {
        case 0x1eb278u: goto label_1eb278;
        case 0x1eb284u: goto label_1eb284;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb298u: goto label_1eb298;
        case 0x1eb2a4u: goto label_1eb2a4;
        case 0x1eb2b0u: goto label_1eb2b0;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb308u: goto label_1eb308;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb3d0u: goto label_1eb3d0;
        case 0x1eb3fcu: goto label_1eb3fc;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb608u: goto label_1eb608;
        case 0x1eb62cu: goto label_1eb62c;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb720u: goto label_1eb720;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb76cu: goto label_1eb76c;
        case 0x1eb780u: goto label_1eb780;
        case 0x1eb7acu: goto label_1eb7ac;
        case 0x1eb7dcu: goto label_1eb7dc;
        case 0x1eb848u: goto label_1eb848;
        case 0x1eb888u: goto label_1eb888;
        case 0x1eb8c8u: goto label_1eb8c8;
        case 0x1eb8dcu: goto label_1eb8dc;
        case 0x1eb8fcu: goto label_1eb8fc;
        case 0x1eb934u: goto label_1eb934;
        case 0x1eb994u: goto label_1eb994;
        case 0x1eb9b4u: goto label_1eb9b4;
        case 0x1eb9d8u: goto label_1eb9d8;
        case 0x1eba40u: goto label_1eba40;
        case 0x1eba74u: goto label_1eba74;
        case 0x1eba94u: goto label_1eba94;
        case 0x1ebafcu: goto label_1ebafc;
        case 0x1ebb28u: goto label_1ebb28;
        case 0x1ebb5cu: goto label_1ebb5c;
        case 0x1ebbc4u: goto label_1ebbc4;
        case 0x1ebbe8u: goto label_1ebbe8;
        case 0x1ebc08u: goto label_1ebc08;
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc2cu: goto label_1ebc2c;
        case 0x1ebc38u: goto label_1ebc38;
        case 0x1ebc44u: goto label_1ebc44;
        case 0x1ebc5cu: goto label_1ebc5c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd5cu: goto label_1ebd5c;
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebda8u: goto label_1ebda8;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebdf8u: goto label_1ebdf8;
        default: break;
    }

    ctx->pc = 0x1eb120u;

    // 0x1eb120: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1eb124: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1eb124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1eb128: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1eb128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1eb12c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1eb12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1eb130: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1eb130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1eb134: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1eb134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1eb138: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1eb138u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb13c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1eb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1eb140: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1eb140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1eb144: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1eb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1eb148: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1eb148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb14c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1eb14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1eb150: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1eb150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1eb154: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1eb154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb158: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1eb158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1eb15c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1eb15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb160: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1eb160u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1eb164: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1eb164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb168: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1eb168u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1eb16c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1eb16cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1eb170: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1eb170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eb174: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1eb174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eb178: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1eb178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eb17c: 0x1240031e  beqz        $s2, . + 4 + (0x31E << 2)
    ctx->pc = 0x1EB17Cu;
    {
        const bool branch_taken_0x1eb17c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB17Cu;
            // 0x1eb180: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb17c) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EB184u;
    // 0x1eb184: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x1eb184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb188: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb18c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb190: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb194: 0x0  nop
    ctx->pc = 0x1eb194u;
    // NOP
    // 0x1eb198: 0x45010317  bc1t        . + 4 + (0x317 << 2)
    ctx->pc = 0x1EB198u;
    {
        const bool branch_taken_0x1eb198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb198) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EB1A0u;
    // 0x1eb1a0: 0xc7b500d4  lwc1        $f21, 0xD4($sp)
    ctx->pc = 0x1eb1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eb1a4: 0x3c0343da  lui         $v1, 0x43DA
    ctx->pc = 0x1eb1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17370 << 16));
    // 0x1eb1a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1ac: 0x0  nop
    ctx->pc = 0x1eb1acu;
    // NOP
    // 0x1eb1b0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1eb1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb1b4: 0x0  nop
    ctx->pc = 0x1eb1b4u;
    // NOP
    // 0x1eb1b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB1B8u;
    {
        const bool branch_taken_0x1eb1b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb1b8) {
            ctx->pc = 0x1EB1C8u;
            goto label_1eb1c8;
        }
    }
    ctx->pc = 0x1EB1C0u;
    // 0x1eb1c0: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x1EB1C0u;
    {
        const bool branch_taken_0x1eb1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1C0u;
            // 0x1eb1c4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1c0) {
            ctx->pc = 0x1EBDFCu;
            goto label_1ebdfc;
        }
    }
    ctx->pc = 0x1EB1C8u;
label_1eb1c8:
    // 0x1eb1c8: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x1eb1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb1cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1eb1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1eb1d0: 0xe4358de4  swc1        $f21, -0x721C($at)
    ctx->pc = 0x1eb1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294938084), bits); }
    // 0x1eb1d4: 0x3c1301ed  lui         $s3, 0x1ED
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)493 << 16));
    // 0x1eb1d8: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1eb1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb1dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1eb1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1eb1e0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1eb1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb1e4: 0x26738de0  addiu       $s3, $s3, -0x7220
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938080));
    // 0x1eb1e8: 0xe4228de0  swc1        $f2, -0x7220($at)
    ctx->pc = 0x1eb1e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294938080), bits); }
    // 0x1eb1ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1eb1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1eb1f0: 0xe4218de8  swc1        $f1, -0x7218($at)
    ctx->pc = 0x1eb1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294938088), bits); }
    // 0x1eb1f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1eb1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1eb1f8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB1F8u;
    {
        const bool branch_taken_0x1eb1f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1F8u;
            // 0x1eb1fc: 0xe4208dec  swc1        $f0, -0x7214($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294938092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1f8) {
            ctx->pc = 0x1EB224u;
            goto label_1eb224;
        }
    }
    ctx->pc = 0x1EB200u;
    // 0x1eb200: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb204: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1eb208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb20c: 0x0  nop
    ctx->pc = 0x1eb20cu;
    // NOP
    // 0x1eb210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb214: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1eb218: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb21c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb220: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1eb224:
    // 0x1eb224: 0x3c024354  lui         $v0, 0x4354
    ctx->pc = 0x1eb224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17236 << 16));
    // 0x1eb228: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x1eb228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x1eb22c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1eb22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1eb230: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb230u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb234: 0x86c3000c  lh          $v1, 0xC($s6)
    ctx->pc = 0x1eb234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1eb238: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x1eb238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1eb23c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x1eb240: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x1eb240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1eb244: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x1eb244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x1eb248: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x1eb248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1eb24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb250: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB250u;
    {
        const bool branch_taken_0x1eb250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB250u;
            // 0x1eb254: 0x2694db90  addiu       $s4, $s4, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb250) {
            ctx->pc = 0x1EB270u;
            goto label_1eb270;
        }
    }
    ctx->pc = 0x1EB258u;
    // 0x1eb258: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x1eb258u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x1eb25c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1eb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1eb260: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1eb260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1eb264: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1eb264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1eb268: 0x3c0242de  lui         $v0, 0x42DE
    ctx->pc = 0x1eb268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17118 << 16));
    // 0x1eb26c: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x1eb26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1eb270:
    // 0x1eb270: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EB270u;
    SET_GPR_U32(ctx, 31, 0x1EB278u);
    ctx->pc = 0x1EB274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB270u;
            // 0x1eb274: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB278u; }
        if (ctx->pc != 0x1EB278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB278u; }
        if (ctx->pc != 0x1EB278u) { return; }
    }
    ctx->pc = 0x1EB278u;
label_1eb278:
    // 0x1eb278: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb27c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EB27Cu;
    SET_GPR_U32(ctx, 31, 0x1EB284u);
    ctx->pc = 0x1EB280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB27Cu;
            // 0x1eb280: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB284u; }
        if (ctx->pc != 0x1EB284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB284u; }
        if (ctx->pc != 0x1EB284u) { return; }
    }
    ctx->pc = 0x1EB284u;
label_1eb284:
    // 0x1eb284: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb288: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EB288u;
    SET_GPR_U32(ctx, 31, 0x1EB290u);
    ctx->pc = 0x1EB28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB288u;
            // 0x1eb28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
        if (ctx->pc != 0x1EB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
        if (ctx->pc != 0x1EB290u) { return; }
    }
    ctx->pc = 0x1EB290u;
label_1eb290:
    // 0x1eb290: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EB290u;
    SET_GPR_U32(ctx, 31, 0x1EB298u);
    ctx->pc = 0x1EB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB290u;
            // 0x1eb294: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB298u; }
        if (ctx->pc != 0x1EB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB298u; }
        if (ctx->pc != 0x1EB298u) { return; }
    }
    ctx->pc = 0x1EB298u;
label_1eb298:
    // 0x1eb298: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1eb298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1eb29c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EB29Cu;
    SET_GPR_U32(ctx, 31, 0x1EB2A4u);
    ctx->pc = 0x1EB2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB29Cu;
            // 0x1eb2a0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2A4u; }
        if (ctx->pc != 0x1EB2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2A4u; }
        if (ctx->pc != 0x1EB2A4u) { return; }
    }
    ctx->pc = 0x1EB2A4u;
label_1eb2a4:
    // 0x1eb2a4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1eb2a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1eb2a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EB2A8u;
    SET_GPR_U32(ctx, 31, 0x1EB2B0u);
    ctx->pc = 0x1EB2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2A8u;
            // 0x1eb2ac: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B0u; }
        if (ctx->pc != 0x1EB2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B0u; }
        if (ctx->pc != 0x1EB2B0u) { return; }
    }
    ctx->pc = 0x1EB2B0u;
label_1eb2b0:
    // 0x1eb2b0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1eb2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1eb2b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1eb2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb2bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eb2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2c0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1eb2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2c4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EB2C4u;
    SET_GPR_U32(ctx, 31, 0x1EB2CCu);
    ctx->pc = 0x1EB2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2C4u;
            // 0x1eb2c8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2CCu; }
        if (ctx->pc != 0x1EB2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2CCu; }
        if (ctx->pc != 0x1EB2CCu) { return; }
    }
    ctx->pc = 0x1EB2CCu;
label_1eb2cc:
    // 0x1eb2cc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB2CCu;
    {
        const bool branch_taken_0x1eb2cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb2cc) {
            ctx->pc = 0x1EB308u;
            goto label_1eb308;
        }
    }
    ctx->pc = 0x1EB2D4u;
    // 0x1eb2d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1eb2d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb2d8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1eb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1eb2dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1eb2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1eb2e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb2e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb2e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EB2E8u;
    SET_GPR_U32(ctx, 31, 0x1EB2F0u);
    ctx->pc = 0x1EB2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2E8u;
            // 0x1eb2ec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F0u; }
        if (ctx->pc != 0x1EB2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F0u; }
        if (ctx->pc != 0x1EB2F0u) { return; }
    }
    ctx->pc = 0x1EB2F0u;
label_1eb2f0:
    // 0x1eb2f0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1eb2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2f4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb300: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EB300u;
    SET_GPR_U32(ctx, 31, 0x1EB308u);
    ctx->pc = 0x1EB304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB300u;
            // 0x1eb304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB308u; }
        if (ctx->pc != 0x1EB308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB308u; }
        if (ctx->pc != 0x1EB308u) { return; }
    }
    ctx->pc = 0x1EB308u;
label_1eb308:
    // 0x1eb308: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1eb308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1eb30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb310: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EB310u;
    {
        const bool branch_taken_0x1eb310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eb310) {
            ctx->pc = 0x1EB348u;
            goto label_1eb348;
        }
    }
    ctx->pc = 0x1EB318u;
    // 0x1eb318: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1eb318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1eb31c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB31Cu;
    {
        const bool branch_taken_0x1eb31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB31Cu;
            // 0x1eb320: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb31c) {
            ctx->pc = 0x1EB334u;
            goto label_1eb334;
        }
    }
    ctx->pc = 0x1EB324u;
    // 0x1eb324: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1eb324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1eb328: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB328u;
    {
        const bool branch_taken_0x1eb328 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb328) {
            ctx->pc = 0x1EB348u;
            goto label_1eb348;
        }
    }
    ctx->pc = 0x1EB330u;
    // 0x1eb330: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x1eb330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1eb334:
    // 0x1eb334: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB334u;
    {
        const bool branch_taken_0x1eb334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb334) {
            ctx->pc = 0x1EB360u;
            goto label_1eb360;
        }
    }
    ctx->pc = 0x1EB33Cu;
    // 0x1eb33c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1eb33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1eb340: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB340u;
    {
        const bool branch_taken_0x1eb340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb340) {
            ctx->pc = 0x1EB360u;
            goto label_1eb360;
        }
    }
    ctx->pc = 0x1EB348u;
label_1eb348:
    // 0x1eb348: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb34c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1eb350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb354: 0x0  nop
    ctx->pc = 0x1eb354u;
    // NOP
    // 0x1eb358: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb35c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1eb360:
    // 0x1eb360: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb364: 0x3c024250  lui         $v0, 0x4250
    ctx->pc = 0x1eb364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16976 << 16));
    // 0x1eb368: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb36c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1eb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1eb370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb374: 0x0  nop
    ctx->pc = 0x1eb374u;
    // NOP
    // 0x1eb378: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1eb378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1eb37c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1eb380: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1eb380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb388: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1eb38c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1eb38cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1eb390: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EB390u;
    {
        const bool branch_taken_0x1eb390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB390u;
            // 0x1eb394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb390) {
            ctx->pc = 0x1EB42Cu;
            goto label_1eb42c;
        }
    }
    ctx->pc = 0x1EB398u;
    // 0x1eb398: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb39c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1eb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1eb3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb3a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb3ac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1eb3b0:
    // 0x1eb3b0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb3b0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb3b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb3b8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb3bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb3c0: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1eb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb3c4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb3c8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB3C8u;
    SET_GPR_U32(ctx, 31, 0x1EB3D0u);
    ctx->pc = 0x1EB3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3C8u;
            // 0x1eb3cc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3D0u; }
        if (ctx->pc != 0x1EB3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3D0u; }
        if (ctx->pc != 0x1EB3D0u) { return; }
    }
    ctx->pc = 0x1EB3D0u;
label_1eb3d0:
    // 0x1eb3d0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb3d0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb3d4: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x1eb3d8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb3dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb3e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb3e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb3e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eb3e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb3ec: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x1eb3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb3f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb3f4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB3F4u;
    SET_GPR_U32(ctx, 31, 0x1EB3FCu);
    ctx->pc = 0x1EB3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3F4u;
            // 0x1eb3f8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3FCu; }
        if (ctx->pc != 0x1EB3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3FCu; }
        if (ctx->pc != 0x1EB3FCu) { return; }
    }
    ctx->pc = 0x1EB3FCu;
label_1eb3fc:
    // 0x1eb3fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb400: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb404: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EB404u;
    {
        const bool branch_taken_0x1eb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb404) {
            ctx->pc = 0x1EB3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb3b0;
        }
    }
    ctx->pc = 0x1EB40Cu;
    // 0x1eb40c: 0x86c3000a  lh          $v1, 0xA($s6)
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x1eb410: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb410u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb414: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eb414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eb418: 0x146201ff  bne         $v1, $v0, . + 4 + (0x1FF << 2)
    ctx->pc = 0x1EB418u;
    {
        const bool branch_taken_0x1eb418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB418u;
            // 0x1eb41c: 0x2694db90  addiu       $s4, $s4, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb418) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB420u;
    // 0x1eb420: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x1EB420u;
    {
        const bool branch_taken_0x1eb420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB420u;
            // 0x1eb424: 0x27948138  addiu       $s4, $gp, -0x7EC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb420) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB428u;
    // 0x1eb428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb42c:
    // 0x1eb42c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1EB42Cu;
    {
        const bool branch_taken_0x1eb42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB42Cu;
            // 0x1eb430: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb42c) {
            ctx->pc = 0x1EB4D8u;
            goto label_1eb4d8;
        }
    }
    ctx->pc = 0x1EB434u;
    // 0x1eb434: 0x32a20100  andi        $v0, $s5, 0x100
    ctx->pc = 0x1eb434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x1eb438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB438u;
    {
        const bool branch_taken_0x1eb438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb438) {
            ctx->pc = 0x1EB458u;
            goto label_1eb458;
        }
    }
    ctx->pc = 0x1EB440u;
    // 0x1eb440: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb444: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1eb448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb44c: 0x0  nop
    ctx->pc = 0x1eb44cu;
    // NOP
    // 0x1eb450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb454: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1eb458:
    // 0x1eb458: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1eb458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb45c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb464: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb46c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1eb470:
    // 0x1eb470: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb470u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb474: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb478: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1eb478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb47c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb480: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb484: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb484u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb488: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb48c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB48Cu;
    SET_GPR_U32(ctx, 31, 0x1EB494u);
    ctx->pc = 0x1EB490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB48Cu;
            // 0x1eb490: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB494u; }
        if (ctx->pc != 0x1EB494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB494u; }
        if (ctx->pc != 0x1EB494u) { return; }
    }
    ctx->pc = 0x1EB494u;
label_1eb494:
    // 0x1eb494: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb494u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb498: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb49c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1eb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb4a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb4a4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb4a8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb4a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb4ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb4b0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB4B0u;
    SET_GPR_U32(ctx, 31, 0x1EB4B8u);
    ctx->pc = 0x1EB4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4B0u;
            // 0x1eb4b4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4B8u; }
        if (ctx->pc != 0x1EB4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4B8u; }
        if (ctx->pc != 0x1EB4B8u) { return; }
    }
    ctx->pc = 0x1EB4B8u;
label_1eb4b8:
    // 0x1eb4b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb4b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb4bc: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb4c0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1EB4C0u;
    {
        const bool branch_taken_0x1eb4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb4c0) {
            ctx->pc = 0x1EB470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb470;
        }
    }
    ctx->pc = 0x1EB4C8u;
    // 0x1eb4c8: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb4c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb4cc: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x1EB4CCu;
    {
        const bool branch_taken_0x1eb4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4CCu;
            // 0x1eb4d0: 0x2694db94  addiu       $s4, $s4, -0x246C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4cc) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB4D4u;
    // 0x1eb4d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb4d8:
    // 0x1eb4d8: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB4D8u;
    {
        const bool branch_taken_0x1eb4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4D8u;
            // 0x1eb4dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4d8) {
            ctx->pc = 0x1EB5D4u;
            goto label_1eb5d4;
        }
    }
    ctx->pc = 0x1EB4E0u;
    // 0x1eb4e0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb4e4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1eb4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb4ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb4f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb4f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb4fc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1eb500: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb504: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1eb504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eb508: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1eb50c:
    // 0x1eb50c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb50cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb510: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb514: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1eb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb518: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb51c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb520: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb520u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb524: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb528: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB528u;
    SET_GPR_U32(ctx, 31, 0x1EB530u);
    ctx->pc = 0x1EB52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB528u;
            // 0x1eb52c: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB530u; }
        if (ctx->pc != 0x1EB530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB530u; }
        if (ctx->pc != 0x1EB530u) { return; }
    }
    ctx->pc = 0x1EB530u;
label_1eb530:
    // 0x1eb530: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb530u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb534: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb538: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1eb538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb53c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb540: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb544: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb544u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb548: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb54c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB54Cu;
    SET_GPR_U32(ctx, 31, 0x1EB554u);
    ctx->pc = 0x1EB550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB54Cu;
            // 0x1eb550: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB554u; }
        if (ctx->pc != 0x1EB554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB554u; }
        if (ctx->pc != 0x1EB554u) { return; }
    }
    ctx->pc = 0x1EB554u;
label_1eb554:
    // 0x1eb554: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb558: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb55c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1EB55Cu;
    {
        const bool branch_taken_0x1eb55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb55c) {
            ctx->pc = 0x1EB50Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb50c;
        }
    }
    ctx->pc = 0x1EB564u;
    // 0x1eb564: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb568:
    // 0x1eb568: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb568u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb56c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb570: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb578: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1eb578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb57c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb580: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB580u;
    SET_GPR_U32(ctx, 31, 0x1EB588u);
    ctx->pc = 0x1EB584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB580u;
            // 0x1eb584: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB588u; }
        if (ctx->pc != 0x1EB588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB588u; }
        if (ctx->pc != 0x1EB588u) { return; }
    }
    ctx->pc = 0x1EB588u;
label_1eb588:
    // 0x1eb588: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb588u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb58c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb590: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb594: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb59c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eb59cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb5a4: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x1eb5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb5a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb5ac: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB5ACu;
    SET_GPR_U32(ctx, 31, 0x1EB5B4u);
    ctx->pc = 0x1EB5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5ACu;
            // 0x1eb5b0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5B4u; }
        if (ctx->pc != 0x1EB5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5B4u; }
        if (ctx->pc != 0x1EB5B4u) { return; }
    }
    ctx->pc = 0x1EB5B4u;
label_1eb5b4:
    // 0x1eb5b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb5b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb5b8: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb5bc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EB5BCu;
    {
        const bool branch_taken_0x1eb5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5bc) {
            ctx->pc = 0x1EB568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb568;
        }
    }
    ctx->pc = 0x1EB5C4u;
    // 0x1eb5c4: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb5c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb5c8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x1EB5C8u;
    {
        const bool branch_taken_0x1eb5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5C8u;
            // 0x1eb5cc: 0x2694db98  addiu       $s4, $s4, -0x2468 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5c8) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB5D0u;
    // 0x1eb5d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eb5d4:
    // 0x1eb5d4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB5D4u;
    {
        const bool branch_taken_0x1eb5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5D4u;
            // 0x1eb5d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5d4) {
            ctx->pc = 0x1EB6D0u;
            goto label_1eb6d0;
        }
    }
    ctx->pc = 0x1EB5DCu;
    // 0x1eb5dc: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb5e0: 0x3c0241d8  lui         $v0, 0x41D8
    ctx->pc = 0x1eb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16856 << 16));
    // 0x1eb5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb5e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb5f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb5f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb5f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb5f8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1eb5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1eb5fc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb600: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1eb600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eb604: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1eb608:
    // 0x1eb608: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb608u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb60c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb610: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1eb610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb614: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb618: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb61c: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb61cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb620: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb624: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB624u;
    SET_GPR_U32(ctx, 31, 0x1EB62Cu);
    ctx->pc = 0x1EB628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB624u;
            // 0x1eb628: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB62Cu; }
        if (ctx->pc != 0x1EB62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB62Cu; }
        if (ctx->pc != 0x1EB62Cu) { return; }
    }
    ctx->pc = 0x1EB62Cu;
label_1eb62c:
    // 0x1eb62c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb62cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb630: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb634: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1eb634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb63c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb640: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb640u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb644: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb648: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB648u;
    SET_GPR_U32(ctx, 31, 0x1EB650u);
    ctx->pc = 0x1EB64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB648u;
            // 0x1eb64c: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB650u; }
        if (ctx->pc != 0x1EB650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB650u; }
        if (ctx->pc != 0x1EB650u) { return; }
    }
    ctx->pc = 0x1EB650u;
label_1eb650:
    // 0x1eb650: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb654: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb658: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1EB658u;
    {
        const bool branch_taken_0x1eb658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb658) {
            ctx->pc = 0x1EB608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb608;
        }
    }
    ctx->pc = 0x1EB660u;
    // 0x1eb660: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb664:
    // 0x1eb664: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb664u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb668: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb66c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb674: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1eb674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb678: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb67c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB67Cu;
    SET_GPR_U32(ctx, 31, 0x1EB684u);
    ctx->pc = 0x1EB680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB67Cu;
            // 0x1eb680: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB684u; }
        if (ctx->pc != 0x1EB684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB684u; }
        if (ctx->pc != 0x1EB684u) { return; }
    }
    ctx->pc = 0x1EB684u;
label_1eb684:
    // 0x1eb684: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb684u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb688: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb68c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb690: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb698: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eb698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb6a0: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x1eb6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb6a4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb6a8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB6A8u;
    SET_GPR_U32(ctx, 31, 0x1EB6B0u);
    ctx->pc = 0x1EB6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6A8u;
            // 0x1eb6ac: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6B0u; }
        if (ctx->pc != 0x1EB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6B0u; }
        if (ctx->pc != 0x1EB6B0u) { return; }
    }
    ctx->pc = 0x1EB6B0u;
label_1eb6b0:
    // 0x1eb6b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb6b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb6b4: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb6b8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EB6B8u;
    {
        const bool branch_taken_0x1eb6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb6b8) {
            ctx->pc = 0x1EB664u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb664;
        }
    }
    ctx->pc = 0x1EB6C0u;
    // 0x1eb6c0: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb6c4: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x1EB6C4u;
    {
        const bool branch_taken_0x1eb6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6C4u;
            // 0x1eb6c8: 0x2694db9c  addiu       $s4, $s4, -0x2464 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb6c4) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB6CCu;
    // 0x1eb6cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eb6d0:
    // 0x1eb6d0: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1EB6D0u;
    {
        const bool branch_taken_0x1eb6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6D0u;
            // 0x1eb6d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb6d0) {
            ctx->pc = 0x1EB7FCu;
            goto label_1eb7fc;
        }
    }
    ctx->pc = 0x1EB6D8u;
    // 0x1eb6d8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb6dc: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1eb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1eb6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb6e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb6e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb6ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1eb6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eb6f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb6f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eb6f8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1eb6fc: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb700: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb704: 0x0  nop
    ctx->pc = 0x1eb704u;
    // NOP
    // 0x1eb708: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1eb708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1eb70c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1eb710: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb714: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb718: 0x46020d01  sub.s       $f20, $f1, $f2
    ctx->pc = 0x1eb718u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1eb71c: 0x460015c0  add.s       $f23, $f2, $f0
    ctx->pc = 0x1eb71cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb720:
    // 0x1eb720: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb720u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb724: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb728: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb72c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb730: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1eb730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb734: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb738: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB738u;
    SET_GPR_U32(ctx, 31, 0x1EB740u);
    ctx->pc = 0x1EB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB738u;
            // 0x1eb73c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB740u; }
        if (ctx->pc != 0x1EB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB740u; }
        if (ctx->pc != 0x1EB740u) { return; }
    }
    ctx->pc = 0x1EB740u;
label_1eb740:
    // 0x1eb740: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb740u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb744: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb748: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb74c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb754: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eb754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb75c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb760: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1eb760u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb764: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB764u;
    SET_GPR_U32(ctx, 31, 0x1EB76Cu);
    ctx->pc = 0x1EB768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB764u;
            // 0x1eb768: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB76Cu; }
        if (ctx->pc != 0x1EB76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB76Cu; }
        if (ctx->pc != 0x1EB76Cu) { return; }
    }
    ctx->pc = 0x1EB76Cu;
label_1eb76c:
    // 0x1eb76c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb770: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb774: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1EB774u;
    {
        const bool branch_taken_0x1eb774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb774) {
            ctx->pc = 0x1EB720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb720;
        }
    }
    ctx->pc = 0x1EB77Cu;
    // 0x1eb77c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb77cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb780:
    // 0x1eb780: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb780u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb784: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1eb784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1eb788: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb78c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb790: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb794: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1eb794u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb798: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x1eb798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x1eb79c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb7a0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb7a4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB7A4u;
    SET_GPR_U32(ctx, 31, 0x1EB7ACu);
    ctx->pc = 0x1EB7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7A4u;
            // 0x1eb7a8: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7ACu; }
        if (ctx->pc != 0x1EB7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7ACu; }
        if (ctx->pc != 0x1EB7ACu) { return; }
    }
    ctx->pc = 0x1EB7ACu;
label_1eb7ac:
    // 0x1eb7ac: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1eb7acu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb7b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1eb7b4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb7b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb7bc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1eb7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1eb7c0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1eb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eb7c4: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x1eb7c4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eb7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb7cc: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1eb7ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1eb7d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb7d4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB7D4u;
    SET_GPR_U32(ctx, 31, 0x1EB7DCu);
    ctx->pc = 0x1EB7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7D4u;
            // 0x1eb7d8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7DCu; }
        if (ctx->pc != 0x1EB7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7DCu; }
        if (ctx->pc != 0x1EB7DCu) { return; }
    }
    ctx->pc = 0x1EB7DCu;
label_1eb7dc:
    // 0x1eb7dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb7e0: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb7e4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1EB7E4u;
    {
        const bool branch_taken_0x1eb7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb7e4) {
            ctx->pc = 0x1EB780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb780;
        }
    }
    ctx->pc = 0x1EB7ECu;
    // 0x1eb7ec: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb7f0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x1EB7F0u;
    {
        const bool branch_taken_0x1eb7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7F0u;
            // 0x1eb7f4: 0x2694dba0  addiu       $s4, $s4, -0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7f0) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB7F8u;
    // 0x1eb7f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eb7fc:
    // 0x1eb7fc: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1EB7FCu;
    {
        const bool branch_taken_0x1eb7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7FCu;
            // 0x1eb800: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7fc) {
            ctx->pc = 0x1EB95Cu;
            goto label_1eb95c;
        }
    }
    ctx->pc = 0x1EB804u;
    // 0x1eb804: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb808: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1eb80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb810: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb814: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb818: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1eb818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eb81c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb81cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb824: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1eb824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1eb828: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb82c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb830: 0x0  nop
    ctx->pc = 0x1eb830u;
    // NOP
    // 0x1eb834: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1eb834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1eb838: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1eb83c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb840: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1eb840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eb844: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1eb844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1eb848:
    // 0x1eb848: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb848u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb84c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1eb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1eb850: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb854: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb858: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1eb858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1eb85c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb860: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb864: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1eb864u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1eb868: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb86c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x1eb86cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eb870: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1eb870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb878: 0x0  nop
    ctx->pc = 0x1eb878u;
    // NOP
    // 0x1eb87c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1eb87cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1eb880: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB880u;
    SET_GPR_U32(ctx, 31, 0x1EB888u);
    ctx->pc = 0x1EB884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB880u;
            // 0x1eb884: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB888u; }
        if (ctx->pc != 0x1EB888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB888u; }
        if (ctx->pc != 0x1EB888u) { return; }
    }
    ctx->pc = 0x1EB888u;
label_1eb888:
    // 0x1eb888: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb888u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb88c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1eb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1eb890: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1eb890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb894: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb898: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb89c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb8a0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eb8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb8a4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1eb8a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb8a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb8ac: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1eb8acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb8b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eb8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb8b8: 0x0  nop
    ctx->pc = 0x1eb8b8u;
    // NOP
    // 0x1eb8bc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1eb8bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb8c0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB8C0u;
    SET_GPR_U32(ctx, 31, 0x1EB8C8u);
    ctx->pc = 0x1EB8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8C0u;
            // 0x1eb8c4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8C8u; }
        if (ctx->pc != 0x1EB8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8C8u; }
        if (ctx->pc != 0x1EB8C8u) { return; }
    }
    ctx->pc = 0x1EB8C8u;
label_1eb8c8:
    // 0x1eb8c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb8c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb8cc: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb8d0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1EB8D0u;
    {
        const bool branch_taken_0x1eb8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb8d0) {
            ctx->pc = 0x1EB848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb848;
        }
    }
    ctx->pc = 0x1EB8D8u;
    // 0x1eb8d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb8d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb8dc:
    // 0x1eb8dc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb8dcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb8e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb8e4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb8e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb8e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb8ec: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1eb8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb8f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb8f4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB8F4u;
    SET_GPR_U32(ctx, 31, 0x1EB8FCu);
    ctx->pc = 0x1EB8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8F4u;
            // 0x1eb8f8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8FCu; }
        if (ctx->pc != 0x1EB8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8FCu; }
        if (ctx->pc != 0x1EB8FCu) { return; }
    }
    ctx->pc = 0x1EB8FCu;
label_1eb8fc:
    // 0x1eb8fc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1eb8fcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb900: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb904: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eb904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb908: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb90c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb910: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb914: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1eb914u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb918: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eb918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb91c: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x1eb91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb920: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1eb920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb928: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb92c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB92Cu;
    SET_GPR_U32(ctx, 31, 0x1EB934u);
    ctx->pc = 0x1EB930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB92Cu;
            // 0x1eb930: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB934u; }
        if (ctx->pc != 0x1EB934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB934u; }
        if (ctx->pc != 0x1EB934u) { return; }
    }
    ctx->pc = 0x1EB934u;
label_1eb934:
    // 0x1eb934: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1eb934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb938: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1eb938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb93c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1EB93Cu;
    {
        const bool branch_taken_0x1eb93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb93c) {
            ctx->pc = 0x1EB8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb8dc;
        }
    }
    ctx->pc = 0x1EB944u;
    // 0x1eb944: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1eb944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb948: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x1eb948u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x1eb94c: 0x2694dba4  addiu       $s4, $s4, -0x245C
    ctx->pc = 0x1eb94cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957988));
    // 0x1eb950: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1EB950u;
    {
        const bool branch_taken_0x1eb950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB950u;
            // 0x1eb954: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb950) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB958u;
    // 0x1eb958: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1eb958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eb95c:
    // 0x1eb95c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EB95Cu;
    {
        const bool branch_taken_0x1eb95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB95Cu;
            // 0x1eb960: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb95c) {
            ctx->pc = 0x1EB9F4u;
            goto label_1eb9f4;
        }
    }
    ctx->pc = 0x1EB964u;
    // 0x1eb964: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1eb964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb968: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x1eb968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x1eb96c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eb96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb970: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eb970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb974: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb97c: 0x0  nop
    ctx->pc = 0x1eb97cu;
    // NOP
    // 0x1eb980: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1eb980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1eb984: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1eb988: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1eb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb98c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb990: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1eb994:
    // 0x1eb994: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1eb994u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb998: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb99c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1eb99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb9a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb9a4: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x1eb9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eb9a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb9ac: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB9ACu;
    SET_GPR_U32(ctx, 31, 0x1EB9B4u);
    ctx->pc = 0x1EB9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9ACu;
            // 0x1eb9b0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9B4u; }
        if (ctx->pc != 0x1EB9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9B4u; }
        if (ctx->pc != 0x1EB9B4u) { return; }
    }
    ctx->pc = 0x1EB9B4u;
label_1eb9b4:
    // 0x1eb9b4: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1eb9b4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb9b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eb9bc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1eb9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb9c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb9c4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eb9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb9c8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1eb9c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eb9cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eb9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb9d0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EB9D0u;
    SET_GPR_U32(ctx, 31, 0x1EB9D8u);
    ctx->pc = 0x1EB9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9D0u;
            // 0x1eb9d4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9D8u; }
        if (ctx->pc != 0x1EB9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9D8u; }
        if (ctx->pc != 0x1EB9D8u) { return; }
    }
    ctx->pc = 0x1EB9D8u;
label_1eb9d8:
    // 0x1eb9d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1eb9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1eb9dc: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1eb9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eb9e0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1EB9E0u;
    {
        const bool branch_taken_0x1eb9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9e0) {
            ctx->pc = 0x1EB994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb994;
        }
    }
    ctx->pc = 0x1EB9E8u;
    // 0x1eb9e8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1EB9E8u;
    {
        const bool branch_taken_0x1eb9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9e8) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EB9F0u;
    // 0x1eb9f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1eb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1eb9f4:
    // 0x1eb9f4: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1EB9F4u;
    {
        const bool branch_taken_0x1eb9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9F4u;
            // 0x1eb9f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9f4) {
            ctx->pc = 0x1EBAB0u;
            goto label_1ebab0;
        }
    }
    ctx->pc = 0x1EB9FCu;
    // 0x1eb9fc: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1eb9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eba00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eba04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eba04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eba08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eba08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba0c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1eba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x1eba10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eba10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eba14: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1eba14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1eba18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eba1c: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1eba1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1eba20: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1eba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eba24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eba24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba28: 0x0  nop
    ctx->pc = 0x1eba28u;
    // NOP
    // 0x1eba2c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1eba2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1eba30: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1eba30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1eba34: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1eba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eba38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eba38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eba3c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1eba3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1eba40:
    // 0x1eba40: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1eba40u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eba44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eba44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eba48: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1eba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eba4c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eba50: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1eba50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1eba54: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x1eba54u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eba58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eba58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eba5c: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1eba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eba60: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x1eba60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1eba64: 0x0  nop
    ctx->pc = 0x1eba64u;
    // NOP
    // 0x1eba68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eba68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eba6c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1EBA74u);
    ctx->pc = 0x1EBA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA6Cu;
            // 0x1eba70: 0x46001b01  sub.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA74u; }
        if (ctx->pc != 0x1EBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA74u; }
        if (ctx->pc != 0x1EBA74u) { return; }
    }
    ctx->pc = 0x1EBA74u;
label_1eba74:
    // 0x1eba74: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1eba74u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eba7c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1eba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eba80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eba80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eba84: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x1eba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eba88: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1eba88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eba8c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBA94u);
    ctx->pc = 0x1EBA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA8Cu;
            // 0x1eba90: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA94u; }
        if (ctx->pc != 0x1EBA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA94u; }
        if (ctx->pc != 0x1EBA94u) { return; }
    }
    ctx->pc = 0x1EBA94u;
label_1eba94:
    // 0x1eba94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1eba94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1eba98: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1eba98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eba9c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EBA9Cu;
    {
        const bool branch_taken_0x1eba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eba9c) {
            ctx->pc = 0x1EBA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eba40;
        }
    }
    ctx->pc = 0x1EBAA4u;
    // 0x1ebaa4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1EBAA4u;
    {
        const bool branch_taken_0x1ebaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebaa4) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EBAACu;
    // 0x1ebaac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ebaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ebab0:
    // 0x1ebab0: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EBAB0u;
    {
        const bool branch_taken_0x1ebab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAB0u;
            // 0x1ebab4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebab0) {
            ctx->pc = 0x1EBB78u;
            goto label_1ebb78;
        }
    }
    ctx->pc = 0x1EBAB8u;
    // 0x1ebab8: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1ebab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ebabc: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1ebabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1ebac0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ebac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ebac4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ebac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebac8: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x1ebac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
    // 0x1ebacc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebad0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ebad0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ebad4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ebad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ebad8: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1ebad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1ebadc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1ebadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebae4: 0x0  nop
    ctx->pc = 0x1ebae4u;
    // NOP
    // 0x1ebae8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ebae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ebaec: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ebaecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1ebaf0: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1ebaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebaf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebaf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebaf8: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1ebaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ebafc:
    // 0x1ebafc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1ebafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebb00: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ebb04: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1ebb04u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebb08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebb0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ebb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ebb10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebb10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebb14: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ebb14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ebb18: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1ebb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ebb1c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ebb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ebb20: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBB20u;
    SET_GPR_U32(ctx, 31, 0x1EBB28u);
    ctx->pc = 0x1EBB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB20u;
            // 0x1ebb24: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB28u; }
        if (ctx->pc != 0x1EBB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB28u; }
        if (ctx->pc != 0x1EBB28u) { return; }
    }
    ctx->pc = 0x1EBB28u;
label_1ebb28:
    // 0x1ebb28: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1ebb28u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebb2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ebb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ebb30: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1ebb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb34: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebb38: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1ebb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ebb3c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x1ebb3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ebb40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebb44: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1ebb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ebb48: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x1ebb48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ebb4c: 0x0  nop
    ctx->pc = 0x1ebb4cu;
    // NOP
    // 0x1ebb50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ebb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ebb54: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBB54u;
    SET_GPR_U32(ctx, 31, 0x1EBB5Cu);
    ctx->pc = 0x1EBB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB54u;
            // 0x1ebb58: 0x46001b01  sub.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB5Cu; }
        if (ctx->pc != 0x1EBB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB5Cu; }
        if (ctx->pc != 0x1EBB5Cu) { return; }
    }
    ctx->pc = 0x1EBB5Cu;
label_1ebb5c:
    // 0x1ebb5c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ebb5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ebb60: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1ebb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ebb64: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1EBB64u;
    {
        const bool branch_taken_0x1ebb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb64) {
            ctx->pc = 0x1EBAFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ebafc;
        }
    }
    ctx->pc = 0x1EBB6Cu;
    // 0x1ebb6c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1EBB6Cu;
    {
        const bool branch_taken_0x1ebb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb6c) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EBB74u;
    // 0x1ebb74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ebb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ebb78:
    // 0x1ebb78: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EBB78u;
    {
        const bool branch_taken_0x1ebb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebb78) {
            ctx->pc = 0x1EBC18u;
            goto label_1ebc18;
        }
    }
    ctx->pc = 0x1EBB80u;
    // 0x1ebb80: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1ebb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ebb84: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1ebb88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ebb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ebb8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb90: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1ebb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1ebb94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebb98: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1ebb98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1ebb9c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ebba0: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1ebba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1ebba4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1ebba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebbac: 0x0  nop
    ctx->pc = 0x1ebbacu;
    // NOP
    // 0x1ebbb0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ebbb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ebbb4: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ebbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1ebbb8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1ebbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebbbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebbbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebbc0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1ebbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ebbc4:
    // 0x1ebbc4: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1ebbc4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebbc8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebbcc: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1ebbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebbd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ebbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ebbd4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1ebbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebbd8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1ebbd8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ebbdc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ebbdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ebbe0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBBE0u;
    SET_GPR_U32(ctx, 31, 0x1EBBE8u);
    ctx->pc = 0x1EBBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBE0u;
            // 0x1ebbe4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBE8u; }
        if (ctx->pc != 0x1EBBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBE8u; }
        if (ctx->pc != 0x1EBBE8u) { return; }
    }
    ctx->pc = 0x1EBBE8u;
label_1ebbe8:
    // 0x1ebbe8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1ebbe8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebbec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebbf0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1ebbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebbf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebbf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebbf8: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1ebbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ebbfc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ebbfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ebc00: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBC00u;
    SET_GPR_U32(ctx, 31, 0x1EBC08u);
    ctx->pc = 0x1EBC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC00u;
            // 0x1ebc04: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC08u; }
        if (ctx->pc != 0x1EBC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC08u; }
        if (ctx->pc != 0x1EBC08u) { return; }
    }
    ctx->pc = 0x1EBC08u;
label_1ebc08:
    // 0x1ebc08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ebc0c: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1ebc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ebc10: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1EBC10u;
    {
        const bool branch_taken_0x1ebc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc10) {
            ctx->pc = 0x1EBBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ebbc4;
        }
    }
    ctx->pc = 0x1EBC18u;
label_1ebc18:
    // 0x1ebc18: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EBC18u;
    SET_GPR_U32(ctx, 31, 0x1EBC20u);
    ctx->pc = 0x1EBC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC18u;
            // 0x1ebc1c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC20u; }
        if (ctx->pc != 0x1EBC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC20u; }
        if (ctx->pc != 0x1EBC20u) { return; }
    }
    ctx->pc = 0x1EBC20u;
label_1ebc20:
    // 0x1ebc20: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebc24: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1EBC24u;
    SET_GPR_U32(ctx, 31, 0x1EBC2Cu);
    ctx->pc = 0x1EBC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC24u;
            // 0x1ebc28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC2Cu; }
        if (ctx->pc != 0x1EBC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC2Cu; }
        if (ctx->pc != 0x1EBC2Cu) { return; }
    }
    ctx->pc = 0x1EBC2Cu;
label_1ebc2c:
    // 0x1ebc2c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebc30: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1EBC30u;
    SET_GPR_U32(ctx, 31, 0x1EBC38u);
    ctx->pc = 0x1EBC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC30u;
            // 0x1ebc34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC38u; }
        if (ctx->pc != 0x1EBC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC38u; }
        if (ctx->pc != 0x1EBC38u) { return; }
    }
    ctx->pc = 0x1EBC38u;
label_1ebc38:
    // 0x1ebc38: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebc3c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EBC3Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC44u);
    ctx->pc = 0x1EBC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC3Cu;
            // 0x1ebc40: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC44u; }
        if (ctx->pc != 0x1EBC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC44u; }
        if (ctx->pc != 0x1EBC44u) { return; }
    }
    ctx->pc = 0x1EBC44u;
label_1ebc44:
    // 0x1ebc44: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x1ebc44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1ebc48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ebc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc4c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ebc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebc54: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EBC54u;
    SET_GPR_U32(ctx, 31, 0x1EBC5Cu);
    ctx->pc = 0x1EBC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC54u;
            // 0x1ebc58: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC5Cu; }
        if (ctx->pc != 0x1EBC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC5Cu; }
        if (ctx->pc != 0x1EBC5Cu) { return; }
    }
    ctx->pc = 0x1EBC5Cu;
label_1ebc5c:
    // 0x1ebc5c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EBC5Cu;
    {
        const bool branch_taken_0x1ebc5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc5c) {
            ctx->pc = 0x1EBC98u;
            goto label_1ebc98;
        }
    }
    ctx->pc = 0x1EBC64u;
    // 0x1ebc64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ebc64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc68: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ebc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ebc6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ebc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ebc70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebc70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebc74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebc78: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EBC78u;
    SET_GPR_U32(ctx, 31, 0x1EBC80u);
    ctx->pc = 0x1EBC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC78u;
            // 0x1ebc7c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC80u; }
        if (ctx->pc != 0x1EBC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC80u; }
        if (ctx->pc != 0x1EBC80u) { return; }
    }
    ctx->pc = 0x1EBC80u;
label_1ebc80:
    // 0x1ebc80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ebc80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc84: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebc88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ebc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ebc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc90: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EBC90u;
    SET_GPR_U32(ctx, 31, 0x1EBC98u);
    ctx->pc = 0x1EBC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC90u;
            // 0x1ebc94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC98u; }
        if (ctx->pc != 0x1EBC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC98u; }
        if (ctx->pc != 0x1EBC98u) { return; }
    }
    ctx->pc = 0x1EBC98u;
label_1ebc98:
    // 0x1ebc98: 0x8ec500d8  lw          $a1, 0xD8($s6)
    ctx->pc = 0x1ebc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
    // 0x1ebc9c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EBC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EBCA4u);
    ctx->pc = 0x1EBCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC9Cu;
            // 0x1ebca0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCA4u; }
        if (ctx->pc != 0x1EBCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCA4u; }
        if (ctx->pc != 0x1EBCA4u) { return; }
    }
    ctx->pc = 0x1EBCA4u;
label_1ebca4:
    // 0x1ebca4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1ebca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ebca8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1EBCA8u;
    {
        const bool branch_taken_0x1ebca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebca8) {
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBCB0u;
    // 0x1ebcb0: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x1ebcb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ebcb4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1EBCB4u;
    {
        const bool branch_taken_0x1ebcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcb4) {
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBCBCu;
    // 0x1ebcbc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x1ebcbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ebcc0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1EBCC0u;
    {
        const bool branch_taken_0x1ebcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcc0) {
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBCC8u;
    // 0x1ebcc8: 0x12800049  beqz        $s4, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EBCC8u;
    {
        const bool branch_taken_0x1ebcc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcc8) {
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBCD0u;
    // 0x1ebcd0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EBCD0u;
    SET_GPR_U32(ctx, 31, 0x1EBCD8u);
    ctx->pc = 0x1EBCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCD0u;
            // 0x1ebcd4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCD8u; }
        if (ctx->pc != 0x1EBCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCD8u; }
        if (ctx->pc != 0x1EBCD8u) { return; }
    }
    ctx->pc = 0x1EBCD8u;
label_1ebcd8:
    // 0x1ebcd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebcdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ebcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ebce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebce4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ebce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebce8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EBCE8u;
    SET_GPR_U32(ctx, 31, 0x1EBCF0u);
    ctx->pc = 0x1EBCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCE8u;
            // 0x1ebcec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCF0u; }
        if (ctx->pc != 0x1EBCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCF0u; }
        if (ctx->pc != 0x1EBCF0u) { return; }
    }
    ctx->pc = 0x1EBCF0u;
label_1ebcf0:
    // 0x1ebcf0: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EBCF0u;
    {
        const bool branch_taken_0x1ebcf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcf0) {
            ctx->pc = 0x1EBD2Cu;
            goto label_1ebd2c;
        }
    }
    ctx->pc = 0x1EBCF8u;
    // 0x1ebcf8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ebcf8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebcfc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1ebcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1ebd00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ebd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ebd04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebd0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EBD0Cu;
    SET_GPR_U32(ctx, 31, 0x1EBD14u);
    ctx->pc = 0x1EBD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD0Cu;
            // 0x1ebd10: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD14u; }
        if (ctx->pc != 0x1EBD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD14u; }
        if (ctx->pc != 0x1EBD14u) { return; }
    }
    ctx->pc = 0x1EBD14u;
label_1ebd14:
    // 0x1ebd14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ebd14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebd1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ebd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ebd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd24: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EBD24u;
    SET_GPR_U32(ctx, 31, 0x1EBD2Cu);
    ctx->pc = 0x1EBD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD24u;
            // 0x1ebd28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD2Cu; }
        if (ctx->pc != 0x1EBD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD2Cu; }
        if (ctx->pc != 0x1EBD2Cu) { return; }
    }
    ctx->pc = 0x1EBD2Cu;
label_1ebd2c:
    // 0x1ebd2c: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x1ebd2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ebd30: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1ebd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1ebd34: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ebd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ebd38: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x1ebd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1ebd3c: 0x2442dbc2  addiu       $v0, $v0, -0x243E
    ctx->pc = 0x1ebd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958018));
    // 0x1ebd40: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ebd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ebd44: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x1ebd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ebd48: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ebd4c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x1ebd4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebd50: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x1ebd50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebd54: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EBD54u;
    SET_GPR_U32(ctx, 31, 0x1EBD5Cu);
    ctx->pc = 0x1EBD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD54u;
            // 0x1ebd58: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD5Cu; }
        if (ctx->pc != 0x1EBD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD5Cu; }
        if (ctx->pc != 0x1EBD5Cu) { return; }
    }
    ctx->pc = 0x1EBD5Cu;
label_1ebd5c:
    // 0x1ebd5c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x1ebd5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ebd60: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x1ebd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebd64: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x1ebd64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1ebd68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ebd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ebd6c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebd70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebd78: 0x0  nop
    ctx->pc = 0x1ebd78u;
    // NOP
    // 0x1ebd7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ebd7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ebd80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebd84: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x1ebd84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ebd88: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBD88u;
    SET_GPR_U32(ctx, 31, 0x1EBD90u);
    ctx->pc = 0x1EBD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD88u;
            // 0x1ebd8c: 0x4600ab40  add.s       $f13, $f21, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD90u; }
        if (ctx->pc != 0x1EBD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD90u; }
        if (ctx->pc != 0x1EBD90u) { return; }
    }
    ctx->pc = 0x1EBD90u;
label_1ebd90:
    // 0x1ebd90: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ebd90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebd94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebd98: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1ebd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebd9c: 0x24650016  addiu       $a1, $v1, 0x16
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x1ebda0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EBDA0u;
    SET_GPR_U32(ctx, 31, 0x1EBDA8u);
    ctx->pc = 0x1EBDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDA0u;
            // 0x1ebda4: 0x24460016  addiu       $a2, $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDA8u; }
        if (ctx->pc != 0x1EBDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDA8u; }
        if (ctx->pc != 0x1EBDA8u) { return; }
    }
    ctx->pc = 0x1EBDA8u;
label_1ebda8:
    // 0x1ebda8: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1ebda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1ebdac: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x1ebdacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ebdb0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ebdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ebdb4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ebdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ebdb8: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x1ebdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebdbc: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1ebdc0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ebdc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ebdc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebdc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebdc8: 0x0  nop
    ctx->pc = 0x1ebdc8u;
    // NOP
    // 0x1ebdcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ebdccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ebdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebdd4: 0x0  nop
    ctx->pc = 0x1ebdd4u;
    // NOP
    // 0x1ebdd8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ebdd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ebddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebde0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1ebde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1ebde4: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x1ebde4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1ebde8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EBDE8u;
    SET_GPR_U32(ctx, 31, 0x1EBDF0u);
    ctx->pc = 0x1EBDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDE8u;
            // 0x1ebdec: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDF0u; }
        if (ctx->pc != 0x1EBDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDF0u; }
        if (ctx->pc != 0x1EBDF0u) { return; }
    }
    ctx->pc = 0x1EBDF0u;
label_1ebdf0:
    // 0x1ebdf0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EBDF0u;
    SET_GPR_U32(ctx, 31, 0x1EBDF8u);
    ctx->pc = 0x1EBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDF0u;
            // 0x1ebdf4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDF8u; }
        if (ctx->pc != 0x1EBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDF8u; }
        if (ctx->pc != 0x1EBDF8u) { return; }
    }
    ctx->pc = 0x1EBDF8u;
label_1ebdf8:
    // 0x1ebdf8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ebdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ebdfc:
    // 0x1ebdfc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1ebdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ebe00: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1ebe00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebe04: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1ebe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ebe08: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1ebe08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ebe0c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1ebe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ebe10: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ebe10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ebe14: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ebe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ebe18: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ebe18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ebe1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ebe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ebe20: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ebe20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ebe24: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ebe24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebe28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ebe28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebe2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ebe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebe30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebe30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebe34: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE34u;
            // 0x1ebe38: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBE3Cu;
}
