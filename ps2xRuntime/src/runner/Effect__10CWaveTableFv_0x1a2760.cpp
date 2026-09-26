#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Effect__10CWaveTableFv
// Address: 0x1a2760 - 0x1a2c70
void Effect__10CWaveTableFv_0x1a2760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Effect__10CWaveTableFv_0x1a2760");
#endif

    switch (ctx->pc) {
        case 0x1a27acu: goto label_1a27ac;
        case 0x1a27d4u: goto label_1a27d4;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2c20u: goto label_1a2c20;
        default: break;
    }

    ctx->pc = 0x1a2760u;

    // 0x1a2760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a2760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a2764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2768: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a2768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a276c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1a276cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a2770: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a2770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a2774: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a2774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a2778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a277c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2784: 0x8c861200  lw          $a2, 0x1200($a0)
    ctx->pc = 0x1a2784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4608)));
    // 0x1a2788: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a278c: 0x663823  subu        $a3, $v1, $a2
    ctx->pc = 0x1a278cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a2790: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a2790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a2794: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1a2794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a2798: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1a279c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1a279cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a27a0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1a27a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1a27a4: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a27a8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1a27a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1a27ac:
    // 0x1a27ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a27acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a27b0: 0x3c093ca0  lui         $t1, 0x3CA0
    ctx->pc = 0x1a27b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15520 << 16));
    // 0x1a27b4: 0x3c053ff5  lui         $a1, 0x3FF5
    ctx->pc = 0x1a27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16373 << 16));
    // 0x1a27b8: 0x352a902e  ori         $t2, $t1, 0x902E
    ctx->pc = 0x1a27b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)36910);
    // 0x1a27bc: 0x34a9f6fd  ori         $t1, $a1, 0xF6FD
    ctx->pc = 0x1a27bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63229);
    // 0x1a27c0: 0x3c053ac4  lui         $a1, 0x3AC4
    ctx->pc = 0x1a27c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15044 << 16));
    // 0x1a27c4: 0x34a59ba6  ori         $a1, $a1, 0x9BA6
    ctx->pc = 0x1a27c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39846);
    // 0x1a27c8: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1a27c8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a27cc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1a27ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a27d0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1a27d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a27d4:
    // 0x1a27d4: 0x0  nop
    ctx->pc = 0x1a27d4u;
    // NOP
    // 0x1a27d8: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x1a27d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a27dc: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x1a27dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a27e0: 0xeb5021  addu        $t2, $a3, $t3
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1a27e4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a27e8: 0xc546fffc  lwc1        $f6, -0x4($t2)
    ctx->pc = 0x1a27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a27ec: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1a27ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a27f0: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x1a27f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a27f4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a27f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a27f8: 0xcb2821  addu        $a1, $a2, $t3
    ctx->pc = 0x1a27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1a27fc: 0xe97021  addu        $t6, $a3, $t1
    ctx->pc = 0x1a27fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a2800: 0xc99021  addu        $s2, $a2, $t1
    ctx->pc = 0x1a2800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a2804: 0xc5440060  lwc1        $f4, 0x60($t2)
    ctx->pc = 0x1a2804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2808: 0x24890002  addiu       $t1, $a0, 0x2
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1a280c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1a280cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1a2810: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a2810u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a2814: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2814u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2818: 0xe96821  addu        $t5, $a3, $t1
    ctx->pc = 0x1a2818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a281c: 0xc98821  addu        $s1, $a2, $t1
    ctx->pc = 0x1a281cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a2820: 0x24890003  addiu       $t1, $a0, 0x3
    ctx->pc = 0x1a2820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a2824: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1a2824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1a2828: 0xc543ffa0  lwc1        $f3, -0x60($t2)
    ctx->pc = 0x1a2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a282c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a282cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a2830: 0xc5480000  lwc1        $f8, 0x0($t2)
    ctx->pc = 0x1a2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2834: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a2834u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a2838: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x1a2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a283c: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a283cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a2840: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x1a2840u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a2844: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x1a2844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a2848: 0xea6021  addu        $t4, $a3, $t2
    ctx->pc = 0x1a2848u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1a284c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1a284cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1a2850: 0xca8021  addu        $s0, $a2, $t2
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1a2854: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a2854u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a2858: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x1a2858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a285c: 0xc9c821  addu        $t9, $a2, $t1
    ctx->pc = 0x1a285cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a2860: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a2860u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a2864: 0x24890005  addiu       $t1, $a0, 0x5
    ctx->pc = 0x1a2864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1a2868: 0x1285021  addu        $t2, $t1, $t0
    ctx->pc = 0x1a2868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1a286c: 0xa7880  sll         $t7, $t2, 2
    ctx->pc = 0x1a286cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a2870: 0x24890006  addiu       $t1, $a0, 0x6
    ctx->pc = 0x1a2870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1a2874: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1a2874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1a2878: 0xef5021  addu        $t2, $a3, $t7
    ctx->pc = 0x1a2878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x1a287c: 0x99880  sll         $s3, $t1, 2
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a2880: 0xcfc021  addu        $t8, $a2, $t7
    ctx->pc = 0x1a2880u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x1a2884: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a2884u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a2888: 0xf34821  addu        $t1, $a3, $s3
    ctx->pc = 0x1a2888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1a288c: 0xd37821  addu        $t7, $a2, $s3
    ctx->pc = 0x1a288cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1a2890: 0x24930007  addiu       $s3, $a0, 0x7
    ctx->pc = 0x1a2890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1a2894: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x1a2894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1a2898: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a289c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a289cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a28a0: 0x13a080  sll         $s4, $s3, 2
    ctx->pc = 0x1a28a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a28a4: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a28a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a28a8: 0xf4a821  addu        $s5, $a3, $s4
    ctx->pc = 0x1a28a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1a28ac: 0xd4a021  addu        $s4, $a2, $s4
    ctx->pc = 0x1a28acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x1a28b0: 0x2893000f  slti        $s3, $a0, 0xF
    ctx->pc = 0x1a28b0u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1a28b4: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a28b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a28b8: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1a28b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a28bc: 0xc5c6fffc  lwc1        $f6, -0x4($t6)
    ctx->pc = 0x1a28bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a28c0: 0xc5c50004  lwc1        $f5, 0x4($t6)
    ctx->pc = 0x1a28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a28c4: 0xc5c40060  lwc1        $f4, 0x60($t6)
    ctx->pc = 0x1a28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a28c8: 0xc5c3ffa0  lwc1        $f3, -0x60($t6)
    ctx->pc = 0x1a28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a28cc: 0xc5c80000  lwc1        $f8, 0x0($t6)
    ctx->pc = 0x1a28ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a28d0: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x1a28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a28d4: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a28d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a28d8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a28d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a28dc: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a28dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a28e0: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a28e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a28e4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a28e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a28e8: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a28e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a28ec: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a28ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a28f0: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a28f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a28f4: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a28f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a28f8: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1a28f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1a28fc: 0xc5a6fffc  lwc1        $f6, -0x4($t5)
    ctx->pc = 0x1a28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2900: 0xc5a50004  lwc1        $f5, 0x4($t5)
    ctx->pc = 0x1a2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2904: 0xc5a40060  lwc1        $f4, 0x60($t5)
    ctx->pc = 0x1a2904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2908: 0xc5a3ffa0  lwc1        $f3, -0x60($t5)
    ctx->pc = 0x1a2908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a290c: 0xc5a80000  lwc1        $f8, 0x0($t5)
    ctx->pc = 0x1a290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2910: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x1a2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2914: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2914u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2918: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a2918u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a291c: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a291cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a2920: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a2920u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a2924: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a2924u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a2928: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a2928u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a292c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a292cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a2930: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a2930u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a2934: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a2934u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a2938: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x1a2938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1a293c: 0xc586fffc  lwc1        $f6, -0x4($t4)
    ctx->pc = 0x1a293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2940: 0xc5850004  lwc1        $f5, 0x4($t4)
    ctx->pc = 0x1a2940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2944: 0xc5840060  lwc1        $f4, 0x60($t4)
    ctx->pc = 0x1a2944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2948: 0xc583ffa0  lwc1        $f3, -0x60($t4)
    ctx->pc = 0x1a2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a294c: 0xc5880000  lwc1        $f8, 0x0($t4)
    ctx->pc = 0x1a294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2950: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x1a2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2954: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2954u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2958: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a2958u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a295c: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a295cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a2960: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a2960u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a2964: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a2964u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a2968: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a2968u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a296c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a296cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a2970: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a2970u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a2974: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a2974u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a2978: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x1a2978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a297c: 0xc566fffc  lwc1        $f6, -0x4($t3)
    ctx->pc = 0x1a297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2980: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x1a2980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2984: 0xc5640060  lwc1        $f4, 0x60($t3)
    ctx->pc = 0x1a2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2988: 0xc563ffa0  lwc1        $f3, -0x60($t3)
    ctx->pc = 0x1a2988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a298c: 0xc5680000  lwc1        $f8, 0x0($t3)
    ctx->pc = 0x1a298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2990: 0xc7270000  lwc1        $f7, 0x0($t9)
    ctx->pc = 0x1a2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2994: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2994u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2998: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a2998u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a299c: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a299cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a29a0: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a29a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a29a4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a29a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a29a8: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a29a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a29ac: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a29acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a29b0: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a29b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a29b4: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a29b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a29b8: 0xe7230000  swc1        $f3, 0x0($t9)
    ctx->pc = 0x1a29b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x1a29bc: 0xc546fffc  lwc1        $f6, -0x4($t2)
    ctx->pc = 0x1a29bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a29c0: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x1a29c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a29c4: 0xc5440060  lwc1        $f4, 0x60($t2)
    ctx->pc = 0x1a29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a29c8: 0xc543ffa0  lwc1        $f3, -0x60($t2)
    ctx->pc = 0x1a29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a29cc: 0xc5480000  lwc1        $f8, 0x0($t2)
    ctx->pc = 0x1a29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a29d0: 0xc7070000  lwc1        $f7, 0x0($t8)
    ctx->pc = 0x1a29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a29d4: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a29d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a29d8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a29d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a29dc: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a29dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a29e0: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a29e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a29e4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a29e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a29e8: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a29e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a29ec: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a29ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a29f0: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a29f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a29f4: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a29f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a29f8: 0xe7030000  swc1        $f3, 0x0($t8)
    ctx->pc = 0x1a29f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x1a29fc: 0xc526fffc  lwc1        $f6, -0x4($t1)
    ctx->pc = 0x1a29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2a00: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x1a2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2a04: 0xc5240060  lwc1        $f4, 0x60($t1)
    ctx->pc = 0x1a2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2a08: 0xc523ffa0  lwc1        $f3, -0x60($t1)
    ctx->pc = 0x1a2a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2a0c: 0xc5280000  lwc1        $f8, 0x0($t1)
    ctx->pc = 0x1a2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2a10: 0xc5e70000  lwc1        $f7, 0x0($t7)
    ctx->pc = 0x1a2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2a14: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2a14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2a18: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a2a18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a2a1c: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a2a1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a2a20: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a2a20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a2a24: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a2a24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a2a28: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a2a28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a2a2c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a2a2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a2a30: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a2a30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a2a34: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a2a34u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a2a38: 0xe5e30000  swc1        $f3, 0x0($t7)
    ctx->pc = 0x1a2a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x1a2a3c: 0xc6a6fffc  lwc1        $f6, -0x4($s5)
    ctx->pc = 0x1a2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2a40: 0xc6a50004  lwc1        $f5, 0x4($s5)
    ctx->pc = 0x1a2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2a44: 0xc6a40060  lwc1        $f4, 0x60($s5)
    ctx->pc = 0x1a2a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2a48: 0xc6a3ffa0  lwc1        $f3, -0x60($s5)
    ctx->pc = 0x1a2a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2a4c: 0xc6a80000  lwc1        $f8, 0x0($s5)
    ctx->pc = 0x1a2a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2a50: 0xc6870000  lwc1        $f7, 0x0($s4)
    ctx->pc = 0x1a2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2a54: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2a54u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2a58: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a2a58u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a2a5c: 0x46041900  add.s       $f4, $f3, $f4
    ctx->pc = 0x1a2a5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1a2a60: 0x460800c2  mul.s       $f3, $f0, $f8
    ctx->pc = 0x1a2a60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1a2a64: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a2a64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a2a68: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1a2a68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1a2a6c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x1a2a6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a2a70: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1a2a70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a2a74: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1a2a74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a2a78: 0x1660ff56  bnez        $s3, . + 4 + (-0xAA << 2)
    ctx->pc = 0x1A2A78u;
    {
        const bool branch_taken_0x1a2a78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A78u;
            // 0x1a2a7c: 0xe6830000  swc1        $f3, 0x0($s4) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a78) {
            ctx->pc = 0x1A27D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a27d4;
        }
    }
    ctx->pc = 0x1A2A80u;
    // 0x1a2a80: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x1a2a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a2a84: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A2A84u;
    {
        const bool branch_taken_0x1a2a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A84u;
            // 0x1a2a88: 0x3c093ca0  lui         $t1, 0x3CA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a84) {
            ctx->pc = 0x1A2B0Cu;
            goto label_1a2b0c;
        }
    }
    ctx->pc = 0x1A2A8Cu;
    // 0x1a2a8c: 0x3c053ff5  lui         $a1, 0x3FF5
    ctx->pc = 0x1a2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16373 << 16));
    // 0x1a2a90: 0x352a902e  ori         $t2, $t1, 0x902E
    ctx->pc = 0x1a2a90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)36910);
    // 0x1a2a94: 0x34a9f6fd  ori         $t1, $a1, 0xF6FD
    ctx->pc = 0x1a2a94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63229);
    // 0x1a2a98: 0x3c053ac4  lui         $a1, 0x3AC4
    ctx->pc = 0x1a2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15044 << 16));
    // 0x1a2a9c: 0x34a59ba6  ori         $a1, $a1, 0x9BA6
    ctx->pc = 0x1a2a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39846);
    // 0x1a2aa0: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x1a2aa0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2aa4: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1a2aa4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2aa8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1a2aa8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2aac:
    // 0x1a2aac: 0x0  nop
    ctx->pc = 0x1a2aacu;
    // NOP
    // 0x1a2ab0: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x1a2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a2ab4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a2ab8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a2ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2abc: 0xe54821  addu        $t1, $a3, $a1
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a2ac0: 0xc55021  addu        $t2, $a2, $a1
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a2ac4: 0xc526fffc  lwc1        $f6, -0x4($t1)
    ctx->pc = 0x1a2ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2ac8: 0x28850017  slti        $a1, $a0, 0x17
    ctx->pc = 0x1a2ac8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a2acc: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x1a2accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2ad0: 0xc5240060  lwc1        $f4, 0x60($t1)
    ctx->pc = 0x1a2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2ad4: 0xc520ffa0  lwc1        $f0, -0x60($t1)
    ctx->pc = 0x1a2ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2ad8: 0xc5280000  lwc1        $f8, 0x0($t1)
    ctx->pc = 0x1a2ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2adc: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x1a2adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2ae0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1a2ae0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a2ae4: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1a2ae4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a2ae8: 0x46040100  add.s       $f4, $f0, $f4
    ctx->pc = 0x1a2ae8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1a2aec: 0x46081002  mul.s       $f0, $f2, $f8
    ctx->pc = 0x1a2aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x1a2af0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1a2af0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a2af4: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x1a2af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x1a2af8: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x1a2af8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1a2afc: 0x46074001  sub.s       $f0, $f8, $f7
    ctx->pc = 0x1a2afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1a2b00: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1a2b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1a2b04: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A2B04u;
    {
        const bool branch_taken_0x1a2b04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B04u;
            // 0x1a2b08: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b04) {
            ctx->pc = 0x1A2AACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2aac;
        }
    }
    ctx->pc = 0x1A2B0Cu;
label_1a2b0c:
    // 0x1a2b0c: 0x0  nop
    ctx->pc = 0x1a2b0cu;
    // NOP
    // 0x1a2b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2b14: 0x28640017  slti        $a0, $v1, 0x17
    ctx->pc = 0x1a2b14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a2b18: 0x1480ff24  bnez        $a0, . + 4 + (-0xDC << 2)
    ctx->pc = 0x1A2B18u;
    {
        const bool branch_taken_0x1a2b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B18u;
            // 0x1a2b1c: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b18) {
            ctx->pc = 0x1A27ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a27ac;
        }
    }
    ctx->pc = 0x1A2B20u;
    // 0x1a2b20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a2b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2b24: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1a2b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a2b28: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2b30:
    // 0x1a2b30: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1a2b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a2b34: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1a2b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1a2b38: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x1a2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b3c: 0x28e3000f  slti        $v1, $a3, 0xF
    ctx->pc = 0x1a2b3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1a2b40: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b44: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x1a2b48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2b48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2b4c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2b50: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1a2b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a2b54: 0xe4a10058  swc1        $f1, 0x58($a1)
    ctx->pc = 0x1a2b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x1a2b58: 0xc4a200b8  lwc1        $f2, 0xB8($a1)
    ctx->pc = 0x1a2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b5c: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x1a2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b60: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2b64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2b68: 0xe4a10064  swc1        $f1, 0x64($a1)
    ctx->pc = 0x1a2b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x1a2b6c: 0xe4a100b8  swc1        $f1, 0xB8($a1)
    ctx->pc = 0x1a2b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 184), bits); }
    // 0x1a2b70: 0xc4a20118  lwc1        $f2, 0x118($a1)
    ctx->pc = 0x1a2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b74: 0xc4a100c4  lwc1        $f1, 0xC4($a1)
    ctx->pc = 0x1a2b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2b7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2b80: 0xe4a100c4  swc1        $f1, 0xC4($a1)
    ctx->pc = 0x1a2b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 196), bits); }
    // 0x1a2b84: 0xe4a10118  swc1        $f1, 0x118($a1)
    ctx->pc = 0x1a2b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 280), bits); }
    // 0x1a2b88: 0xc4a20178  lwc1        $f2, 0x178($a1)
    ctx->pc = 0x1a2b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b8c: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1a2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2b90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2b94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2b98: 0xe4a10124  swc1        $f1, 0x124($a1)
    ctx->pc = 0x1a2b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1a2b9c: 0xe4a10178  swc1        $f1, 0x178($a1)
    ctx->pc = 0x1a2b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 376), bits); }
    // 0x1a2ba0: 0xc4a201d8  lwc1        $f2, 0x1D8($a1)
    ctx->pc = 0x1a2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2ba4: 0xc4a10184  lwc1        $f1, 0x184($a1)
    ctx->pc = 0x1a2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2ba8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2bac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2bacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2bb0: 0xe4a10184  swc1        $f1, 0x184($a1)
    ctx->pc = 0x1a2bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x1a2bb4: 0xe4a101d8  swc1        $f1, 0x1D8($a1)
    ctx->pc = 0x1a2bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 472), bits); }
    // 0x1a2bb8: 0xc4a20238  lwc1        $f2, 0x238($a1)
    ctx->pc = 0x1a2bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2bbc: 0xc4a101e4  lwc1        $f1, 0x1E4($a1)
    ctx->pc = 0x1a2bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2bc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2bc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2bc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2bc8: 0xe4a101e4  swc1        $f1, 0x1E4($a1)
    ctx->pc = 0x1a2bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 484), bits); }
    // 0x1a2bcc: 0xe4a10238  swc1        $f1, 0x238($a1)
    ctx->pc = 0x1a2bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 568), bits); }
    // 0x1a2bd0: 0xc4a20298  lwc1        $f2, 0x298($a1)
    ctx->pc = 0x1a2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2bd4: 0xc4a10244  lwc1        $f1, 0x244($a1)
    ctx->pc = 0x1a2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2bd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2bdc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2be0: 0xe4a10244  swc1        $f1, 0x244($a1)
    ctx->pc = 0x1a2be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 580), bits); }
    // 0x1a2be4: 0xe4a10298  swc1        $f1, 0x298($a1)
    ctx->pc = 0x1a2be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 664), bits); }
    // 0x1a2be8: 0xc4a202f8  lwc1        $f2, 0x2F8($a1)
    ctx->pc = 0x1a2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2bec: 0xc4a102a4  lwc1        $f1, 0x2A4($a1)
    ctx->pc = 0x1a2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2bf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a2bf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a2bf4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a2bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a2bf8: 0xe4a102a4  swc1        $f1, 0x2A4($a1)
    ctx->pc = 0x1a2bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 676), bits); }
    // 0x1a2bfc: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1A2BFCu;
    {
        const bool branch_taken_0x1a2bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BFCu;
            // 0x1a2c00: 0xe4a102f8  swc1        $f1, 0x2F8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bfc) {
            ctx->pc = 0x1A2B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2b30;
        }
    }
    ctx->pc = 0x1A2C04u;
    // 0x1a2c04: 0x28e10017  slti        $at, $a3, 0x17
    ctx->pc = 0x1a2c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a2c08: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2C08u;
    {
        const bool branch_taken_0x1a2c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C08u;
            // 0x1a2c0c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c08) {
            ctx->pc = 0x1A2C4Cu;
            goto label_1a2c4c;
        }
    }
    ctx->pc = 0x1A2C10u;
    // 0x1a2c10: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a2c14: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1a2c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2c18: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1a2c1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a2c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2c20:
    // 0x1a2c20: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a2c24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a2c28: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x1a2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2c2c: 0x28e30017  slti        $v1, $a3, 0x17
    ctx->pc = 0x1a2c2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a2c30: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a2c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2c34: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1a2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1a2c38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a2c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a2c3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a2c40: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1a2c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a2c44: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A2C44u;
    {
        const bool branch_taken_0x1a2c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C44u;
            // 0x1a2c48: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c44) {
            ctx->pc = 0x1A2C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2c20;
        }
    }
    ctx->pc = 0x1A2C4Cu;
label_1a2c4c:
    // 0x1a2c4c: 0x0  nop
    ctx->pc = 0x1a2c4cu;
    // NOP
    // 0x1a2c50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a2c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a2c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2c58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2c5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C68u;
            // 0x1a2c6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C70u;
}
