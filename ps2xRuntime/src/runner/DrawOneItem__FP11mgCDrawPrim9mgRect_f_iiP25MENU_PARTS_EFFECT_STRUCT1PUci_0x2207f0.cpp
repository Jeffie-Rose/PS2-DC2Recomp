#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawOneItem__FP11mgCDrawPrim9mgRect<f>iiP25MENU_PARTS_EFFECT_STRUCT1PUci
// Address: 0x2207f0 - 0x22133c
void DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0");
#endif

    switch (ctx->pc) {
        case 0x2208b4u: goto label_2208b4;
        case 0x2208c8u: goto label_2208c8;
        case 0x2208d4u: goto label_2208d4;
        case 0x2208f4u: goto label_2208f4;
        case 0x220994u: goto label_220994;
        case 0x2209c0u: goto label_2209c0;
        case 0x220a04u: goto label_220a04;
        case 0x220a3cu: goto label_220a3c;
        case 0x220a58u: goto label_220a58;
        case 0x220a68u: goto label_220a68;
        case 0x220a70u: goto label_220a70;
        case 0x220aacu: goto label_220aac;
        case 0x220ab8u: goto label_220ab8;
        case 0x220ac4u: goto label_220ac4;
        case 0x220af0u: goto label_220af0;
        case 0x220b24u: goto label_220b24;
        case 0x220b38u: goto label_220b38;
        case 0x220b50u: goto label_220b50;
        case 0x220b60u: goto label_220b60;
        case 0x220b84u: goto label_220b84;
        case 0x220bf8u: goto label_220bf8;
        case 0x220c18u: goto label_220c18;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c40u: goto label_220c40;
        case 0x220c50u: goto label_220c50;
        case 0x220c64u: goto label_220c64;
        case 0x220c84u: goto label_220c84;
        case 0x220c90u: goto label_220c90;
        case 0x220c9cu: goto label_220c9c;
        case 0x220cf8u: goto label_220cf8;
        case 0x220d08u: goto label_220d08;
        case 0x220d1cu: goto label_220d1c;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d40u: goto label_220d40;
        case 0x220d48u: goto label_220d48;
        case 0x220d54u: goto label_220d54;
        case 0x220d60u: goto label_220d60;
        case 0x220d88u: goto label_220d88;
        case 0x220d9cu: goto label_220d9c;
        case 0x220db0u: goto label_220db0;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220df0u: goto label_220df0;
        case 0x220e08u: goto label_220e08;
        case 0x220e64u: goto label_220e64;
        case 0x220e94u: goto label_220e94;
        case 0x220ea4u: goto label_220ea4;
        case 0x220ec0u: goto label_220ec0;
        case 0x220ed8u: goto label_220ed8;
        case 0x220ee4u: goto label_220ee4;
        case 0x220ef0u: goto label_220ef0;
        case 0x220efcu: goto label_220efc;
        case 0x220f18u: goto label_220f18;
        case 0x220f2cu: goto label_220f2c;
        case 0x220f40u: goto label_220f40;
        case 0x220f50u: goto label_220f50;
        case 0x220f64u: goto label_220f64;
        case 0x220f6cu: goto label_220f6c;
        case 0x220f7cu: goto label_220f7c;
        case 0x220f98u: goto label_220f98;
        case 0x220facu: goto label_220fac;
        case 0x220fc4u: goto label_220fc4;
        case 0x220ff4u: goto label_220ff4;
        case 0x221004u: goto label_221004;
        case 0x22101cu: goto label_22101c;
        case 0x22102cu: goto label_22102c;
        case 0x221044u: goto label_221044;
        case 0x221054u: goto label_221054;
        case 0x22108cu: goto label_22108c;
        case 0x22109cu: goto label_22109c;
        case 0x2210b0u: goto label_2210b0;
        case 0x2210c4u: goto label_2210c4;
        case 0x2210e4u: goto label_2210e4;
        case 0x221110u: goto label_221110;
        case 0x221158u: goto label_221158;
        case 0x221164u: goto label_221164;
        case 0x22117cu: goto label_22117c;
        case 0x221188u: goto label_221188;
        case 0x221198u: goto label_221198;
        case 0x2211acu: goto label_2211ac;
        case 0x2211bcu: goto label_2211bc;
        case 0x2211d0u: goto label_2211d0;
        case 0x2211f0u: goto label_2211f0;
        case 0x221204u: goto label_221204;
        case 0x221214u: goto label_221214;
        case 0x221228u: goto label_221228;
        case 0x221230u: goto label_221230;
        case 0x22123cu: goto label_22123c;
        case 0x221250u: goto label_221250;
        case 0x221260u: goto label_221260;
        case 0x221278u: goto label_221278;
        case 0x221288u: goto label_221288;
        case 0x2212b0u: goto label_2212b0;
        case 0x2212c0u: goto label_2212c0;
        case 0x2212e8u: goto label_2212e8;
        case 0x2212f0u: goto label_2212f0;
        default: break;
    }

    ctx->pc = 0x2207f0u;

    // 0x2207f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2207f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2207f4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2207f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2207f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2207f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2207fc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2207fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x220800: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x220800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x220804: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x220804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x220808: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x220808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x22080c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x22080cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220810: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x220810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x220814: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x220814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x220818: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x220818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22081c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x220820: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x220820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x220824: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x220824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x220828: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x220828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22082c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x220830: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x220830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220834: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x220834u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x220838: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x220838u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22083c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x22083cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x220840: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x220840u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x220844: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x220844u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x220848: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x220848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22084c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22084cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x220850: 0xafaa00cc  sw          $t2, 0xCC($sp)
    ctx->pc = 0x220850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 10));
    // 0x220854: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x220854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220858: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x220858u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x22085c: 0xc7b800d4  lwc1        $f24, 0xD4($sp)
    ctx->pc = 0x22085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x220860: 0xc7b500dc  lwc1        $f21, 0xDC($sp)
    ctx->pc = 0x220860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x220864: 0x4615c5c0  add.s       $f23, $f24, $f21
    ctx->pc = 0x220864u;
    ctx->f[23] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x220868: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x220868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22086c: 0x0  nop
    ctx->pc = 0x22086cu;
    // NOP
    // 0x220870: 0x4501029f  bc1t        . + 4 + (0x29F << 2)
    ctx->pc = 0x220870u;
    {
        const bool branch_taken_0x220870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x220874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220870u;
            // 0x220874: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220870) {
            ctx->pc = 0x2212F0u;
            goto label_2212f0;
        }
    }
    ctx->pc = 0x220878u;
    // 0x220878: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x220878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22087c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x22087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220880: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x220884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220888: 0x0  nop
    ctx->pc = 0x220888u;
    // NOP
    // 0x22088c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22088cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x220890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x220890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220894: 0x0  nop
    ctx->pc = 0x220894u;
    // NOP
    // 0x220898: 0x45010295  bc1t        . + 4 + (0x295 << 2)
    ctx->pc = 0x220898u;
    {
        const bool branch_taken_0x220898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220898u;
            // 0x22089c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220898) {
            ctx->pc = 0x2212F0u;
            goto label_2212f0;
        }
    }
    ctx->pc = 0x2208A0u;
    // 0x2208a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2208a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2208a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2208a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2208ACu;
    SET_GPR_U32(ctx, 31, 0x2208B4u);
    ctx->pc = 0x2208B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208ACu;
            // 0x2208b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208B4u; }
        if (ctx->pc != 0x2208B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208B4u; }
        if (ctx->pc != 0x2208B4u) { return; }
    }
    ctx->pc = 0x2208B4u;
label_2208b4:
    // 0x2208b4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2208b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2208b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2208b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208bc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2208bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2208c0: 0xc087d88  jal         func_21F620
    ctx->pc = 0x2208C0u;
    SET_GPR_U32(ctx, 31, 0x2208C8u);
    ctx->pc = 0x2208C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208C0u;
            // 0x2208c4: 0x26521ef0  addiu       $s2, $s2, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F620u;
    if (runtime->hasFunction(0x21F620u)) {
        auto targetFn = runtime->lookupFunction(0x21F620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208C8u; }
        if (ctx->pc != 0x2208C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuItemIconTexGetXY__FiR9mgRect_i__0x21f620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208C8u; }
        if (ctx->pc != 0x2208C8u) { return; }
    }
    ctx->pc = 0x2208C8u;
label_2208c8:
    // 0x2208c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2208c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208cc: 0xc087db4  jal         func_21F6D0
    ctx->pc = 0x2208CCu;
    SET_GPR_U32(ctx, 31, 0x2208D4u);
    ctx->pc = 0x2208D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208CCu;
            // 0x2208d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F6D0u;
    if (runtime->hasFunction(0x21F6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21F6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208D4u; }
        if (ctx->pc != 0x2208D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuItemIconTexInfo__Fii_0x21f6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208D4u; }
        if (ctx->pc != 0x2208D4u) { return; }
    }
    ctx->pc = 0x2208D4u;
label_2208d4:
    // 0x2208d4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2208d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208d8: 0x13c00285  beqz        $fp, . + 4 + (0x285 << 2)
    ctx->pc = 0x2208D8u;
    {
        const bool branch_taken_0x2208d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208d8) {
            ctx->pc = 0x2212F0u;
            goto label_2212f0;
        }
    }
    ctx->pc = 0x2208E0u;
    // 0x2208e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2208E0u;
    {
        const bool branch_taken_0x2208e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2208E0u;
            // 0x2208e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208e0) {
            ctx->pc = 0x2208F4u;
            goto label_2208f4;
        }
    }
    ctx->pc = 0x2208E8u;
    // 0x2208e8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2208e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208ec: 0xc04bba8  jal         func_12EEA0
    ctx->pc = 0x2208ECu;
    SET_GPR_U32(ctx, 31, 0x2208F4u);
    ctx->pc = 0x2208F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208ECu;
            // 0x2208f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA0u;
    if (runtime->hasFunction(0x12EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208F4u; }
        if (ctx->pc != 0x2208F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208F4u; }
        if (ctx->pc != 0x2208F4u) { return; }
    }
    ctx->pc = 0x2208F4u;
label_2208f4:
    // 0x2208f4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2208F4u;
    {
        const bool branch_taken_0x2208f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208f4) {
            ctx->pc = 0x220944u;
            goto label_220944;
        }
    }
    ctx->pc = 0x2208FCu;
    // 0x2208fc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2208fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220900: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220908: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x220908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x22090c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22090cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220910: 0x0  nop
    ctx->pc = 0x220910u;
    // NOP
    // 0x220914: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x220914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x220918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x220918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22091c: 0x0  nop
    ctx->pc = 0x22091cu;
    // NOP
    // 0x220920: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x220920u;
    {
        const bool branch_taken_0x220920 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x220924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220920u;
            // 0x220924: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220920) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x220928u;
    // 0x220928: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x220928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_22092c:
    // 0x22092c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x22092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220930: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220938: 0x0  nop
    ctx->pc = 0x220938u;
    // NOP
    // 0x22093c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22093cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x220940: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x220940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_220944:
    // 0x220944: 0x87879340  lh          $a3, -0x6CC0($gp)
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939456)));
    // 0x220948: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x22094c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x22094cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x220950: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x220950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x220954: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x220954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x220958: 0x24c602f0  addiu       $a2, $a2, 0x2F0
    ctx->pc = 0x220958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x22095c: 0x24a502f2  addiu       $a1, $a1, 0x2F2
    ctx->pc = 0x22095cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 754));
    // 0x220960: 0x246302f4  addiu       $v1, $v1, 0x2F4
    ctx->pc = 0x220960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 756));
    // 0x220964: 0x244202f6  addiu       $v0, $v0, 0x2F6
    ctx->pc = 0x220964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 758));
    // 0x220968: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x220968u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x22096c: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x220970: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x220970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x220974: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x220974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x220978: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x220978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22097c: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x22097cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x220980: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x220984: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x220984u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220988: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x220988u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22098c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22098Cu;
    SET_GPR_U32(ctx, 31, 0x220994u);
    ctx->pc = 0x220990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22098Cu;
            // 0x220990: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220994u; }
        if (ctx->pc != 0x220994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220994u; }
        if (ctx->pc != 0x220994u) { return; }
    }
    ctx->pc = 0x220994u;
label_220994:
    // 0x220994: 0xdfc20038  ld          $v0, 0x38($fp)
    ctx->pc = 0x220994u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x220998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22099c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209a0: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x2209a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2209a4: 0x213ba  dsrl        $v0, $v0, 14
    ctx->pc = 0x2209a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 14);
    // 0x2209a8: 0x3a83c  dsll32      $s5, $v1, 0
    ctx->pc = 0x2209a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2209ac: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2209acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2209b0: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x2209b0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x2209b4: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2209b8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2209B8u;
    SET_GPR_U32(ctx, 31, 0x2209C0u);
    ctx->pc = 0x2209BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209B8u;
            // 0x2209bc: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209C0u; }
        if (ctx->pc != 0x2209C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209C0u; }
        if (ctx->pc != 0x2209C0u) { return; }
    }
    ctx->pc = 0x2209C0u;
label_2209c0:
    // 0x2209c0: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x2209c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2209c4: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x2209c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2209c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2209c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2209cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2209ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2209d0: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2209d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2209d4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2209d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2209d8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x2209d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2209dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2209dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2209e0: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x2209e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x2209e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2209e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2209e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2209ec: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x2209ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2209f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2209f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2209f4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2209f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2209f8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2209fc: 0xc04d360  jal         func_134D80
    ctx->pc = 0x2209FCu;
    SET_GPR_U32(ctx, 31, 0x220A04u);
    ctx->pc = 0x220A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209FCu;
            // 0x220a00: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A04u; }
        if (ctx->pc != 0x220A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A04u; }
        if (ctx->pc != 0x220A04u) { return; }
    }
    ctx->pc = 0x220A04u;
label_220a04:
    // 0x220a04: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x220a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x220a08: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x220a0c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x220a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x220a10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220a18: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x220a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x220a1c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x220a20: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x220a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x220a24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x220a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x220a28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x220a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x220a2c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x220a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x220a30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x220a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x220a34: 0xc04d360  jal         func_134D80
    ctx->pc = 0x220A34u;
    SET_GPR_U32(ctx, 31, 0x220A3Cu);
    ctx->pc = 0x220A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A34u;
            // 0x220a38: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A3Cu; }
        if (ctx->pc != 0x220A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A3Cu; }
        if (ctx->pc != 0x220A3Cu) { return; }
    }
    ctx->pc = 0x220A3Cu;
label_220a3c:
    // 0x220a3c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x220a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x220a40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x220a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x220a48: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x220a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x220a4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x220a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x220a50: 0xc04d360  jal         func_134D80
    ctx->pc = 0x220A50u;
    SET_GPR_U32(ctx, 31, 0x220A58u);
    ctx->pc = 0x220A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A50u;
            // 0x220a54: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A58u; }
        if (ctx->pc != 0x220A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A58u; }
        if (ctx->pc != 0x220A58u) { return; }
    }
    ctx->pc = 0x220A58u;
label_220a58:
    // 0x220a58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a5c: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x220a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x220a60: 0xc04d360  jal         func_134D80
    ctx->pc = 0x220A60u;
    SET_GPR_U32(ctx, 31, 0x220A68u);
    ctx->pc = 0x220A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A60u;
            // 0x220a64: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A68u; }
        if (ctx->pc != 0x220A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A68u; }
        if (ctx->pc != 0x220A68u) { return; }
    }
    ctx->pc = 0x220A68u;
label_220a68:
    // 0x220a68: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x220A68u;
    SET_GPR_U32(ctx, 31, 0x220A70u);
    ctx->pc = 0x220A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A68u;
            // 0x220a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A70u; }
        if (ctx->pc != 0x220A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A70u; }
        if (ctx->pc != 0x220A70u) { return; }
    }
    ctx->pc = 0x220A70u;
label_220a70:
    // 0x220a70: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x220a74: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x220a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x220a78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220a7c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x220a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220a80: 0xc7b600d8  lwc1        $f22, 0xD8($sp)
    ctx->pc = 0x220a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x220a84: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x220a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x220a88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220a8c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x220a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x220a90: 0x46160500  add.s       $f20, $f0, $f22
    ctx->pc = 0x220a90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x220a94: 0xc5a821  addu        $s5, $a2, $a1
    ctx->pc = 0x220a94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x220a98: 0x1223010b  beq         $s1, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x220A98u;
    {
        const bool branch_taken_0x220a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A98u;
            // 0x220a9c: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a98) {
            ctx->pc = 0x220EC8u;
            goto label_220ec8;
        }
    }
    ctx->pc = 0x220AA0u;
    // 0x220aa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220aa4: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x220AA4u;
    SET_GPR_U32(ctx, 31, 0x220AACu);
    ctx->pc = 0x220AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220AA4u;
            // 0x220aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AACu; }
        if (ctx->pc != 0x220AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AACu; }
        if (ctx->pc != 0x220AACu) { return; }
    }
    ctx->pc = 0x220AACu;
label_220aac:
    // 0x220aac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ab0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x220AB0u;
    SET_GPR_U32(ctx, 31, 0x220AB8u);
    ctx->pc = 0x220AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220AB0u;
            // 0x220ab4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AB8u; }
        if (ctx->pc != 0x220AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AB8u; }
        if (ctx->pc != 0x220AB8u) { return; }
    }
    ctx->pc = 0x220AB8u;
label_220ab8:
    // 0x220ab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220abc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x220ABCu;
    SET_GPR_U32(ctx, 31, 0x220AC4u);
    ctx->pc = 0x220AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220ABCu;
            // 0x220ac0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AC4u; }
        if (ctx->pc != 0x220AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AC4u; }
        if (ctx->pc != 0x220AC4u) { return; }
    }
    ctx->pc = 0x220AC4u;
label_220ac4:
    // 0x220ac4: 0x1620002f  bnez        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x220AC4u;
    {
        const bool branch_taken_0x220ac4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x220ac4) {
            ctx->pc = 0x220B84u;
            goto label_220b84;
        }
    }
    ctx->pc = 0x220ACCu;
    // 0x220acc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x220accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ad0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x220ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x220ad4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220ad8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x220ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x220adc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x220adcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x220ae0: 0x46180b40  add.s       $f13, $f1, $f24
    ctx->pc = 0x220ae0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x220ae4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x220ae4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x220ae8: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x220AE8u;
    SET_GPR_U32(ctx, 31, 0x220AF0u);
    ctx->pc = 0x220AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220AE8u;
            // 0x220aec: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AF0u; }
        if (ctx->pc != 0x220AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AF0u; }
        if (ctx->pc != 0x220AF0u) { return; }
    }
    ctx->pc = 0x220AF0u;
label_220af0:
    // 0x220af0: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x220af0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220af4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x220af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x220af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220afc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x220afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x220b00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220B00u;
    {
        const bool branch_taken_0x220b00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B00u;
            // 0x220b04: 0x241c3  sra         $t0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b00) {
            ctx->pc = 0x220B10u;
            goto label_220b10;
        }
    }
    ctx->pc = 0x220B08u;
    // 0x220b08: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x220b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x220b0c: 0x241c3  sra         $t0, $v0, 7
    ctx->pc = 0x220b0cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 7));
label_220b10:
    // 0x220b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b1c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220B1Cu;
    SET_GPR_U32(ctx, 31, 0x220B24u);
    ctx->pc = 0x220B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B1Cu;
            // 0x220b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B24u; }
        if (ctx->pc != 0x220B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B24u; }
        if (ctx->pc != 0x220B24u) { return; }
    }
    ctx->pc = 0x220B24u;
label_220b24:
    // 0x220b24: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x220b28: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x220b2c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220b30: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220B30u;
    SET_GPR_U32(ctx, 31, 0x220B38u);
    ctx->pc = 0x220B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B30u;
            // 0x220b34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B38u; }
        if (ctx->pc != 0x220B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B38u; }
        if (ctx->pc != 0x220B38u) { return; }
    }
    ctx->pc = 0x220B38u;
label_220b38:
    // 0x220b38: 0x27b00104  addiu       $s0, $sp, 0x104
    ctx->pc = 0x220b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x220b3c: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x220b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220b40: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x220b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x220b44: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220b48: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220B48u;
    SET_GPR_U32(ctx, 31, 0x220B50u);
    ctx->pc = 0x220B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B48u;
            // 0x220b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B50u; }
        if (ctx->pc != 0x220B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B50u; }
        if (ctx->pc != 0x220B50u) { return; }
    }
    ctx->pc = 0x220B50u;
label_220b50:
    // 0x220b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b58: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220B58u;
    SET_GPR_U32(ctx, 31, 0x220B60u);
    ctx->pc = 0x220B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B58u;
            // 0x220b5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B60u; }
        if (ctx->pc != 0x220B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B60u; }
        if (ctx->pc != 0x220B60u) { return; }
    }
    ctx->pc = 0x220B60u;
label_220b60:
    // 0x220b60: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x220b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b68: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x220b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220b6c: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x220b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x220b70: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x220b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220b74: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220b78: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x220b78u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x220b7c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220B7Cu;
    SET_GPR_U32(ctx, 31, 0x220B84u);
    ctx->pc = 0x220B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B7Cu;
            // 0x220b80: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B84u; }
        if (ctx->pc != 0x220B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B84u; }
        if (ctx->pc != 0x220B84u) { return; }
    }
    ctx->pc = 0x220B84u;
label_220b84:
    // 0x220b84: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x220b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x220b88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x220b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x220b8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220B8Cu;
    {
        const bool branch_taken_0x220b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B8Cu;
            // 0x220b90: 0x24020128  addiu       $v0, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b8c) {
            ctx->pc = 0x220B9Cu;
            goto label_220b9c;
        }
    }
    ctx->pc = 0x220B94u;
    // 0x220b94: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x220B94u;
    {
        const bool branch_taken_0x220b94 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x220b94) {
            ctx->pc = 0x220C00u;
            goto label_220c00;
        }
    }
    ctx->pc = 0x220B9Cu;
label_220b9c:
    // 0x220b9c: 0x8382935c  lb          $v0, -0x6CA4($gp)
    ctx->pc = 0x220b9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x220ba0: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x220ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x220ba4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220BA4u;
    {
        const bool branch_taken_0x220ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BA4u;
            // 0x220ba8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ba4) {
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220BACu;
    // 0x220bac: 0x2403ffdc  addiu       $v1, $zero, -0x24
    ctx->pc = 0x220bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967260));
label_220bb0:
    // 0x220bb0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x220bb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220bb4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220bb8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x220BB8u;
    {
        const bool branch_taken_0x220bb8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x220bb8) {
            ctx->pc = 0x220BC4u;
            goto label_220bc4;
        }
    }
    ctx->pc = 0x220BC0u;
    // 0x220bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220bc4:
    // 0x220bc4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x220bc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x220bc8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x220bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220bcc: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x220BCCu;
    {
        const bool branch_taken_0x220bcc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x220bcc) {
            ctx->pc = 0x220BD8u;
            goto label_220bd8;
        }
    }
    ctx->pc = 0x220BD4u;
    // 0x220bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220bd8:
    // 0x220bd8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x220bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x220bdc: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x220bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220be0: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x220BE0u;
    {
        const bool branch_taken_0x220be0 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x220be0) {
            ctx->pc = 0x220BECu;
            goto label_220bec;
        }
    }
    ctx->pc = 0x220BE8u;
    // 0x220be8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220bec:
    // 0x220bec: 0x92680003  lbu         $t0, 0x3($s3)
    ctx->pc = 0x220becu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220bf0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220BF0u;
    SET_GPR_U32(ctx, 31, 0x220BF8u);
    ctx->pc = 0x220BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220BF0u;
            // 0x220bf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BF8u; }
        if (ctx->pc != 0x220BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BF8u; }
        if (ctx->pc != 0x220BF8u) { return; }
    }
    ctx->pc = 0x220BF8u;
label_220bf8:
    // 0x220bf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x220BF8u;
    {
        const bool branch_taken_0x220bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BF8u;
            // 0x220bfc: 0x27a200f4  addiu       $v0, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bf8) {
            ctx->pc = 0x220C1Cu;
            goto label_220c1c;
        }
    }
    ctx->pc = 0x220C00u;
label_220c00:
    // 0x220c00: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x220c00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220c04: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x220c04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x220c08: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x220c08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x220c0c: 0x92680003  lbu         $t0, 0x3($s3)
    ctx->pc = 0x220c0cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220c10: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220C10u;
    SET_GPR_U32(ctx, 31, 0x220C18u);
    ctx->pc = 0x220C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C10u;
            // 0x220c14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C18u; }
        if (ctx->pc != 0x220C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C18u; }
        if (ctx->pc != 0x220C18u) { return; }
    }
    ctx->pc = 0x220C18u;
label_220c18:
    // 0x220c18: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_220c1c:
    // 0x220c1c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x220c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x220c20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220c24: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220C24u;
    SET_GPR_U32(ctx, 31, 0x220C2Cu);
    ctx->pc = 0x220C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C24u;
            // 0x220c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C2Cu; }
        if (ctx->pc != 0x220C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C2Cu; }
        if (ctx->pc != 0x220C2Cu) { return; }
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x220c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220c30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c34: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220c38: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220C38u;
    SET_GPR_U32(ctx, 31, 0x220C40u);
    ctx->pc = 0x220C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C38u;
            // 0x220c3c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C40u; }
        if (ctx->pc != 0x220C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C40u; }
        if (ctx->pc != 0x220C40u) { return; }
    }
    ctx->pc = 0x220C40u;
label_220c40:
    // 0x220c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c48: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220C48u;
    SET_GPR_U32(ctx, 31, 0x220C50u);
    ctx->pc = 0x220C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C48u;
            // 0x220c4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C50u; }
        if (ctx->pc != 0x220C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C50u; }
        if (ctx->pc != 0x220C50u) { return; }
    }
    ctx->pc = 0x220C50u;
label_220c50:
    // 0x220c50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220c58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x220c5c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220C5Cu;
    SET_GPR_U32(ctx, 31, 0x220C64u);
    ctx->pc = 0x220C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C5Cu;
            // 0x220c60: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C64u; }
        if (ctx->pc != 0x220C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C64u; }
        if (ctx->pc != 0x220C64u) { return; }
    }
    ctx->pc = 0x220C64u;
label_220c64:
    // 0x220c64: 0x2ac200ed  slti        $v0, $s6, 0xED
    ctx->pc = 0x220c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)237) ? 1 : 0);
    // 0x220c68: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x220C68u;
    {
        const bool branch_taken_0x220c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C68u;
            // 0x220c6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c68) {
            ctx->pc = 0x220D64u;
            goto label_220d64;
        }
    }
    ctx->pc = 0x220C70u;
    // 0x220c70: 0x2ac100f5  slti        $at, $s6, 0xF5
    ctx->pc = 0x220c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)245) ? 1 : 0);
    // 0x220c74: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x220C74u;
    {
        const bool branch_taken_0x220c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C74u;
            // 0x220c78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c74) {
            ctx->pc = 0x220D60u;
            goto label_220d60;
        }
    }
    ctx->pc = 0x220C7Cu;
    // 0x220c7c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x220C7Cu;
    SET_GPR_U32(ctx, 31, 0x220C84u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C84u; }
        if (ctx->pc != 0x220C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C84u; }
        if (ctx->pc != 0x220C84u) { return; }
    }
    ctx->pc = 0x220C84u;
label_220c84:
    // 0x220c84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c88: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x220C88u;
    SET_GPR_U32(ctx, 31, 0x220C90u);
    ctx->pc = 0x220C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C88u;
            // 0x220c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C90u; }
        if (ctx->pc != 0x220C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C90u; }
        if (ctx->pc != 0x220C90u) { return; }
    }
    ctx->pc = 0x220C90u;
label_220c90:
    // 0x220c90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c94: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x220C94u;
    SET_GPR_U32(ctx, 31, 0x220C9Cu);
    ctx->pc = 0x220C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C94u;
            // 0x220c98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C9Cu; }
        if (ctx->pc != 0x220C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C9Cu; }
        if (ctx->pc != 0x220C9Cu) { return; }
    }
    ctx->pc = 0x220C9Cu;
label_220c9c:
    // 0x220c9c: 0x26c3ff13  addiu       $v1, $s6, -0xED
    ctx->pc = 0x220c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967059));
    // 0x220ca0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x220ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x220ca4: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x220ca8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x220ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x220cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220cb0: 0x926a0000  lbu         $t2, 0x0($s3)
    ctx->pc = 0x220cb0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220cb4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x220cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cbc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x220cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x220cc0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x220cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x220cc4: 0x92680001  lbu         $t0, 0x1($s3)
    ctx->pc = 0x220cc4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x220cc8: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x220cc8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x220ccc: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x220cccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220cd0: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x220cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x220cd4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x220cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x220cd8: 0x70c83018  mult1       $a2, $a2, $t0
    ctx->pc = 0x220cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x220cdc: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x220cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x220ce0: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x220ce0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x220ce4: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x220ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220ce8: 0x929c3  sra         $a1, $t1, 7
    ctx->pc = 0x220ce8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 9), 7));
    // 0x220cec: 0x241c3  sra         $t0, $v0, 7
    ctx->pc = 0x220cecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 7));
    // 0x220cf0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220CF0u;
    SET_GPR_U32(ctx, 31, 0x220CF8u);
    ctx->pc = 0x220CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CF0u;
            // 0x220cf4: 0x739c3  sra         $a3, $a3, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CF8u; }
        if (ctx->pc != 0x220CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CF8u; }
        if (ctx->pc != 0x220CF8u) { return; }
    }
    ctx->pc = 0x220CF8u;
label_220cf8:
    // 0x220cf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cfc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x220d00: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220D00u;
    SET_GPR_U32(ctx, 31, 0x220D08u);
    ctx->pc = 0x220D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D00u;
            // 0x220d04: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D08u; }
        if (ctx->pc != 0x220D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D08u; }
        if (ctx->pc != 0x220D08u) { return; }
    }
    ctx->pc = 0x220D08u;
label_220d08:
    // 0x220d08: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x220d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220d0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d10: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220d14: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220D14u;
    SET_GPR_U32(ctx, 31, 0x220D1Cu);
    ctx->pc = 0x220D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D14u;
            // 0x220d18: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D1Cu; }
        if (ctx->pc != 0x220D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D1Cu; }
        if (ctx->pc != 0x220D1Cu) { return; }
    }
    ctx->pc = 0x220D1Cu;
label_220d1c:
    // 0x220d1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d20: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x220d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x220d24: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220D24u;
    SET_GPR_U32(ctx, 31, 0x220D2Cu);
    ctx->pc = 0x220D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D24u;
            // 0x220d28: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D2Cu; }
        if (ctx->pc != 0x220D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D2Cu; }
        if (ctx->pc != 0x220D2Cu) { return; }
    }
    ctx->pc = 0x220D2Cu;
label_220d2c:
    // 0x220d2c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220d34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x220d38: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220D38u;
    SET_GPR_U32(ctx, 31, 0x220D40u);
    ctx->pc = 0x220D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D38u;
            // 0x220d3c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D40u; }
        if (ctx->pc != 0x220D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D40u; }
        if (ctx->pc != 0x220D40u) { return; }
    }
    ctx->pc = 0x220D40u;
label_220d40:
    // 0x220d40: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x220D40u;
    SET_GPR_U32(ctx, 31, 0x220D48u);
    ctx->pc = 0x220D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D40u;
            // 0x220d44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D48u; }
        if (ctx->pc != 0x220D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D48u; }
        if (ctx->pc != 0x220D48u) { return; }
    }
    ctx->pc = 0x220D48u;
label_220d48:
    // 0x220d48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d4c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x220D4Cu;
    SET_GPR_U32(ctx, 31, 0x220D54u);
    ctx->pc = 0x220D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D4Cu;
            // 0x220d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D54u; }
        if (ctx->pc != 0x220D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D54u; }
        if (ctx->pc != 0x220D54u) { return; }
    }
    ctx->pc = 0x220D54u;
label_220d54:
    // 0x220d54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d58: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x220D58u;
    SET_GPR_U32(ctx, 31, 0x220D60u);
    ctx->pc = 0x220D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D58u;
            // 0x220d5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D60u; }
        if (ctx->pc != 0x220D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D60u; }
        if (ctx->pc != 0x220D60u) { return; }
    }
    ctx->pc = 0x220D60u;
label_220d60:
    // 0x220d60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x220d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220d64:
    // 0x220d64: 0x1622001c  bne         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x220D64u;
    {
        const bool branch_taken_0x220d64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x220D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D64u;
            // 0x220d68: 0x2ac20188  slti        $v0, $s6, 0x188 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)392) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d64) {
            ctx->pc = 0x220DD8u;
            goto label_220dd8;
        }
    }
    ctx->pc = 0x220D6Cu;
    // 0x220d6c: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x220d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220d70: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x220d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x220d74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x220d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d7c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x220d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d80: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220D80u;
    SET_GPR_U32(ctx, 31, 0x220D88u);
    ctx->pc = 0x220D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D80u;
            // 0x220d84: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D88u; }
        if (ctx->pc != 0x220D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D88u; }
        if (ctx->pc != 0x220D88u) { return; }
    }
    ctx->pc = 0x220D88u;
label_220d88:
    // 0x220d88: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x220d8c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x220d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x220d90: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d94: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220D94u;
    SET_GPR_U32(ctx, 31, 0x220D9Cu);
    ctx->pc = 0x220D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D94u;
            // 0x220d98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D9Cu; }
        if (ctx->pc != 0x220D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D9Cu; }
        if (ctx->pc != 0x220D9Cu) { return; }
    }
    ctx->pc = 0x220D9Cu;
label_220d9c:
    // 0x220d9c: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x220d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220da4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220da8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220DA8u;
    SET_GPR_U32(ctx, 31, 0x220DB0u);
    ctx->pc = 0x220DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DA8u;
            // 0x220dac: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DB0u; }
        if (ctx->pc != 0x220DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DB0u; }
        if (ctx->pc != 0x220DB0u) { return; }
    }
    ctx->pc = 0x220DB0u;
label_220db0:
    // 0x220db0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220db4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x220db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220db8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220DB8u;
    SET_GPR_U32(ctx, 31, 0x220DC0u);
    ctx->pc = 0x220DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DB8u;
            // 0x220dbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DC0u; }
        if (ctx->pc != 0x220DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DC0u; }
        if (ctx->pc != 0x220DC0u) { return; }
    }
    ctx->pc = 0x220DC0u;
label_220dc0:
    // 0x220dc0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220dc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x220dcc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220DCCu;
    SET_GPR_U32(ctx, 31, 0x220DD4u);
    ctx->pc = 0x220DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DCCu;
            // 0x220dd0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DD4u; }
        if (ctx->pc != 0x220DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DD4u; }
        if (ctx->pc != 0x220DD4u) { return; }
    }
    ctx->pc = 0x220DD4u;
label_220dd4:
    // 0x220dd4: 0x2ac20188  slti        $v0, $s6, 0x188
    ctx->pc = 0x220dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)392) ? 1 : 0);
label_220dd8:
    // 0x220dd8: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x220DD8u;
    {
        const bool branch_taken_0x220dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DD8u;
            // 0x220ddc: 0x2ac101a6  slti        $at, $s6, 0x1A6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)422) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dd8) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x220DE0u;
    // 0x220de0: 0x102000c8  beqz        $at, . + 4 + (0xC8 << 2)
    ctx->pc = 0x220DE0u;
    {
        const bool branch_taken_0x220de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DE0u;
            // 0x220de4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220de0) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x220DE8u;
    // 0x220de8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x220DE8u;
    SET_GPR_U32(ctx, 31, 0x220DF0u);
    ctx->pc = 0x220DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DE8u;
            // 0x220dec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DF0u; }
        if (ctx->pc != 0x220DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DF0u; }
        if (ctx->pc != 0x220DF0u) { return; }
    }
    ctx->pc = 0x220DF0u;
label_220df0:
    // 0x220df0: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x220df0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220df4: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x220df4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x220df8: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x220df8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x220dfc: 0x92680003  lbu         $t0, 0x3($s3)
    ctx->pc = 0x220dfcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220e00: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220E00u;
    SET_GPR_U32(ctx, 31, 0x220E08u);
    ctx->pc = 0x220E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E00u;
            // 0x220e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E08u; }
        if (ctx->pc != 0x220E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E08u; }
        if (ctx->pc != 0x220E08u) { return; }
    }
    ctx->pc = 0x220E08u;
label_220e08:
    // 0x220e08: 0x26c3fe78  addiu       $v1, $s6, -0x188
    ctx->pc = 0x220e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966904));
    // 0x220e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x220e10: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x220e10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x220e14: 0x0  nop
    ctx->pc = 0x220e14u;
    // NOP
    // 0x220e18: 0x0  nop
    ctx->pc = 0x220e18u;
    // NOP
    // 0x220e1c: 0x2010  mfhi        $a0
    ctx->pc = 0x220e1cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x220e20: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220E20u;
    {
        const bool branch_taken_0x220e20 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x220E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E20u;
            // 0x220e24: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e20) {
            ctx->pc = 0x220E34u;
            goto label_220e34;
        }
    }
    ctx->pc = 0x220E28u;
    // 0x220e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220E28u;
    {
        const bool branch_taken_0x220e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E28u;
            // 0x220e2c: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e28) {
            ctx->pc = 0x220E38u;
            goto label_220e38;
        }
    }
    ctx->pc = 0x220E30u;
    // 0x220e30: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_220e34:
    // 0x220e34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x220e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_220e38:
    // 0x220e38: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x220e38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x220e3c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220E3Cu;
    {
        const bool branch_taken_0x220e3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x220E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E3Cu;
            // 0x220e40: 0x247100c0  addiu       $s1, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e3c) {
            ctx->pc = 0x220E4Cu;
            goto label_220e4c;
        }
    }
    ctx->pc = 0x220E44u;
    // 0x220e44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x220e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x220e48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x220e48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_220e4c:
    // 0x220e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x220e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x220e50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e54: 0x245001a0  addiu       $s0, $v0, 0x1A0
    ctx->pc = 0x220e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x220e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e5c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220E5Cu;
    SET_GPR_U32(ctx, 31, 0x220E64u);
    ctx->pc = 0x220E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E5Cu;
            // 0x220e60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E64u; }
        if (ctx->pc != 0x220E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E64u; }
        if (ctx->pc != 0x220E64u) { return; }
    }
    ctx->pc = 0x220E64u;
label_220e64:
    // 0x220e64: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x220e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x220e68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x220e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x220e70: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x220e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220e74: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x220e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x220e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220e7c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220e80: 0x46180540  add.s       $f21, $f0, $f24
    ctx->pc = 0x220e80u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x220e84: 0x46011580  add.s       $f22, $f2, $f1
    ctx->pc = 0x220e84u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x220e88: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x220e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x220e8c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220E8Cu;
    SET_GPR_U32(ctx, 31, 0x220E94u);
    ctx->pc = 0x220E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E8Cu;
            // 0x220e90: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E94u; }
        if (ctx->pc != 0x220E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E94u; }
        if (ctx->pc != 0x220E94u) { return; }
    }
    ctx->pc = 0x220E94u;
label_220e94:
    // 0x220e94: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x220e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x220e98: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x220e9c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220E9Cu;
    SET_GPR_U32(ctx, 31, 0x220EA4u);
    ctx->pc = 0x220EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E9Cu;
            // 0x220ea0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EA4u; }
        if (ctx->pc != 0x220EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EA4u; }
        if (ctx->pc != 0x220EA4u) { return; }
    }
    ctx->pc = 0x220EA4u;
label_220ea4:
    // 0x220ea4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x220ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x220ea8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220eb0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220eb4: 0x46160300  add.s       $f12, $f0, $f22
    ctx->pc = 0x220eb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x220eb8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220EB8u;
    SET_GPR_U32(ctx, 31, 0x220EC0u);
    ctx->pc = 0x220EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220EB8u;
            // 0x220ebc: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EC0u; }
        if (ctx->pc != 0x220EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EC0u; }
        if (ctx->pc != 0x220EC0u) { return; }
    }
    ctx->pc = 0x220EC0u;
label_220ec0:
    // 0x220ec0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x220EC0u;
    {
        const bool branch_taken_0x220ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ec0) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x220EC8u;
label_220ec8:
    // 0x220ec8: 0x1623008e  bne         $s1, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x220EC8u;
    {
        const bool branch_taken_0x220ec8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x220ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EC8u;
            // 0x220ecc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ec8) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x220ED0u;
    // 0x220ed0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x220ED0u;
    SET_GPR_U32(ctx, 31, 0x220ED8u);
    ctx->pc = 0x220ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220ED0u;
            // 0x220ed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220ED8u; }
        if (ctx->pc != 0x220ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220ED8u; }
        if (ctx->pc != 0x220ED8u) { return; }
    }
    ctx->pc = 0x220ED8u;
label_220ed8:
    // 0x220ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220edc: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x220EDCu;
    SET_GPR_U32(ctx, 31, 0x220EE4u);
    ctx->pc = 0x220EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220EDCu;
            // 0x220ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EE4u; }
        if (ctx->pc != 0x220EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EE4u; }
        if (ctx->pc != 0x220EE4u) { return; }
    }
    ctx->pc = 0x220EE4u;
label_220ee4:
    // 0x220ee4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ee8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x220EE8u;
    SET_GPR_U32(ctx, 31, 0x220EF0u);
    ctx->pc = 0x220EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220EE8u;
            // 0x220eec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EF0u; }
        if (ctx->pc != 0x220EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EF0u; }
        if (ctx->pc != 0x220EF0u) { return; }
    }
    ctx->pc = 0x220EF0u;
label_220ef0:
    // 0x220ef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ef4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x220EF4u;
    SET_GPR_U32(ctx, 31, 0x220EFCu);
    ctx->pc = 0x220EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220EF4u;
            // 0x220ef8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EFCu; }
        if (ctx->pc != 0x220EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EFCu; }
        if (ctx->pc != 0x220EFCu) { return; }
    }
    ctx->pc = 0x220EFCu;
label_220efc:
    // 0x220efc: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x220efcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x220f00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f04: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x220f04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220f08: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x220f08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x220f0c: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x220f0cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x220f10: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220F10u;
    SET_GPR_U32(ctx, 31, 0x220F18u);
    ctx->pc = 0x220F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F10u;
            // 0x220f14: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F18u; }
        if (ctx->pc != 0x220F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F18u; }
        if (ctx->pc != 0x220F18u) { return; }
    }
    ctx->pc = 0x220F18u;
label_220f18:
    // 0x220f18: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x220f1c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x220f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x220f20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220f24: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220F24u;
    SET_GPR_U32(ctx, 31, 0x220F2Cu);
    ctx->pc = 0x220F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F24u;
            // 0x220f28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F2Cu; }
        if (ctx->pc != 0x220F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F2Cu; }
        if (ctx->pc != 0x220F2Cu) { return; }
    }
    ctx->pc = 0x220F2Cu;
label_220f2c:
    // 0x220f2c: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x220f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220f30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f34: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220f38: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220F38u;
    SET_GPR_U32(ctx, 31, 0x220F40u);
    ctx->pc = 0x220F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F38u;
            // 0x220f3c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F40u; }
        if (ctx->pc != 0x220F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F40u; }
        if (ctx->pc != 0x220F40u) { return; }
    }
    ctx->pc = 0x220F40u;
label_220f40:
    // 0x220f40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x220f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f48: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x220F48u;
    SET_GPR_U32(ctx, 31, 0x220F50u);
    ctx->pc = 0x220F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F48u;
            // 0x220f4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F50u; }
        if (ctx->pc != 0x220F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F50u; }
        if (ctx->pc != 0x220F50u) { return; }
    }
    ctx->pc = 0x220F50u;
label_220f50:
    // 0x220f50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x220f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220f54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220f58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x220f5c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x220F5Cu;
    SET_GPR_U32(ctx, 31, 0x220F64u);
    ctx->pc = 0x220F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F5Cu;
            // 0x220f60: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F64u; }
        if (ctx->pc != 0x220F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F64u; }
        if (ctx->pc != 0x220F64u) { return; }
    }
    ctx->pc = 0x220F64u;
label_220f64:
    // 0x220f64: 0xc04d198  jal         func_134660
    ctx->pc = 0x220F64u;
    SET_GPR_U32(ctx, 31, 0x220F6Cu);
    ctx->pc = 0x220F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F64u;
            // 0x220f68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134660u;
    if (runtime->hasFunction(0x134660u)) {
        auto targetFn = runtime->lookupFunction(0x134660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F6Cu; }
        if (ctx->pc != 0x220F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Flush__11mgCDrawPrimFv_0x134660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F6Cu; }
        if (ctx->pc != 0x220F6Cu) { return; }
    }
    ctx->pc = 0x220F6Cu;
label_220f6c:
    // 0x220f6c: 0x12000065  beqz        $s0, . + 4 + (0x65 << 2)
    ctx->pc = 0x220F6Cu;
    {
        const bool branch_taken_0x220f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f6c) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x220F74u;
    // 0x220f74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x220F74u;
    SET_GPR_U32(ctx, 31, 0x220F7Cu);
    ctx->pc = 0x220F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F74u;
            // 0x220f78: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F7Cu; }
        if (ctx->pc != 0x220F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F7Cu; }
        if (ctx->pc != 0x220F7Cu) { return; }
    }
    ctx->pc = 0x220F7Cu;
label_220f7c:
    // 0x220f7c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x220f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f80: 0x2b940  sll         $s7, $v0, 5
    ctx->pc = 0x220f80u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x220f84: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x220f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x220f88: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x220f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x220f8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220f90: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x220F90u;
    SET_GPR_U32(ctx, 31, 0x220F98u);
    ctx->pc = 0x220F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F90u;
            // 0x220f94: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F98u; }
        if (ctx->pc != 0x220F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F98u; }
        if (ctx->pc != 0x220F98u) { return; }
    }
    ctx->pc = 0x220F98u;
label_220f98:
    // 0x220f98: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x220f9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220fa4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x220fa4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x220fa8: 0x4600c586  mov.s       $f22, $f24
    ctx->pc = 0x220fa8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
label_220fac:
    // 0x220fac: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x220facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x220fb0: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x220fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x220fb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x220fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x220fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220fbc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x220FBCu;
    SET_GPR_U32(ctx, 31, 0x220FC4u);
    ctx->pc = 0x220FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FBCu;
            // 0x220fc0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC4u; }
        if (ctx->pc != 0x220FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC4u; }
        if (ctx->pc != 0x220FC4u) { return; }
    }
    ctx->pc = 0x220FC4u;
label_220fc4:
    // 0x220fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220fc8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x220fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220fcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x220fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x220fd0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x220fd4: 0x24420390  addiu       $v0, $v0, 0x390
    ctx->pc = 0x220fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x220fd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x220fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x220fdc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x220fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220fe0: 0x46010640  add.s       $f25, $f0, $f1
    ctx->pc = 0x220fe0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220fe8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x220fe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x220fec: 0xc047a42  jal         func_11E908
    ctx->pc = 0x220FECu;
    SET_GPR_U32(ctx, 31, 0x220FF4u);
    ctx->pc = 0x220FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FECu;
            // 0x220ff0: 0x468006a0  cvt.s.w     $f26, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FF4u; }
        if (ctx->pc != 0x220FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FF4u; }
        if (ctx->pc != 0x220FF4u) { return; }
    }
    ctx->pc = 0x220FF4u;
label_220ff4:
    // 0x220ff4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x220ff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220ffc: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x220FFCu;
    SET_GPR_U32(ctx, 31, 0x221004u);
    ctx->pc = 0x221000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FFCu;
            // 0x221000: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221004u; }
        if (ctx->pc != 0x221004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221004u; }
        if (ctx->pc != 0x221004u) { return; }
    }
    ctx->pc = 0x221004u;
label_221004:
    // 0x221004: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x221004u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221008: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x22100c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x221010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221014: 0xc047a42  jal         func_11E908
    ctx->pc = 0x221014u;
    SET_GPR_U32(ctx, 31, 0x22101Cu);
    ctx->pc = 0x221018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221014u;
            // 0x221018: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22101Cu; }
        if (ctx->pc != 0x22101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22101Cu; }
        if (ctx->pc != 0x22101Cu) { return; }
    }
    ctx->pc = 0x22101Cu;
label_22101c:
    // 0x22101c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x221020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221024: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x221024u;
    SET_GPR_U32(ctx, 31, 0x22102Cu);
    ctx->pc = 0x221028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221024u;
            // 0x221028: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22102Cu; }
        if (ctx->pc != 0x22102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22102Cu; }
        if (ctx->pc != 0x22102Cu) { return; }
    }
    ctx->pc = 0x22102Cu;
label_22102c:
    // 0x22102c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x22102cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221030: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x221030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x221034: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x221034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x221038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22103c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22103Cu;
    SET_GPR_U32(ctx, 31, 0x221044u);
    ctx->pc = 0x221040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22103Cu;
            // 0x221040: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221044u; }
        if (ctx->pc != 0x221044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221044u; }
        if (ctx->pc != 0x221044u) { return; }
    }
    ctx->pc = 0x221044u;
label_221044:
    // 0x221044: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x221044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x221048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22104c: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x22104Cu;
    SET_GPR_U32(ctx, 31, 0x221054u);
    ctx->pc = 0x221050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22104Cu;
            // 0x221050: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221054u; }
        if (ctx->pc != 0x221054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221054u; }
        if (ctx->pc != 0x221054u) { return; }
    }
    ctx->pc = 0x221054u;
label_221054:
    // 0x221054: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x221054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x221058: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x221058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22105c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x221060: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x221060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x221064: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x221064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x221068: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x221068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x22106c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221070: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x221070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x221074: 0x0  nop
    ctx->pc = 0x221074u;
    // NOP
    // 0x221078: 0x0  nop
    ctx->pc = 0x221078u;
    // NOP
    // 0x22107c: 0x1010  mfhi        $v0
    ctx->pc = 0x22107cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x221080: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x221080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x221084: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221084u;
    SET_GPR_U32(ctx, 31, 0x22108Cu);
    ctx->pc = 0x221088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221084u;
            // 0x221088: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22108Cu; }
        if (ctx->pc != 0x22108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22108Cu; }
        if (ctx->pc != 0x22108Cu) { return; }
    }
    ctx->pc = 0x22108Cu;
label_22108c:
    // 0x22108c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x22108cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x221090: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221094: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x221094u;
    SET_GPR_U32(ctx, 31, 0x22109Cu);
    ctx->pc = 0x221098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221094u;
            // 0x221098: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22109Cu; }
        if (ctx->pc != 0x22109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22109Cu; }
        if (ctx->pc != 0x22109Cu) { return; }
    }
    ctx->pc = 0x22109Cu;
label_22109c:
    // 0x22109c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22109cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2210a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2210a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210a4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2210a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2210a8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2210A8u;
    SET_GPR_U32(ctx, 31, 0x2210B0u);
    ctx->pc = 0x2210ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2210A8u;
            // 0x2210ac: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210B0u; }
        if (ctx->pc != 0x2210B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210B0u; }
        if (ctx->pc != 0x2210B0u) { return; }
    }
    ctx->pc = 0x2210B0u;
label_2210b0:
    // 0x2210b0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2210b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2210b4: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2210b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2210b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2210b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210bc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2210BCu;
    SET_GPR_U32(ctx, 31, 0x2210C4u);
    ctx->pc = 0x2210C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2210BCu;
            // 0x2210c0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210C4u; }
        if (ctx->pc != 0x2210C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210C4u; }
        if (ctx->pc != 0x2210C4u) { return; }
    }
    ctx->pc = 0x2210C4u;
label_2210c4:
    // 0x2210c4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2210c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2210c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2210c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2210ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2210d0: 0x461ab580  add.s       $f22, $f22, $f26
    ctx->pc = 0x2210d0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[26]);
    // 0x2210d4: 0x46190300  add.s       $f12, $f0, $f25
    ctx->pc = 0x2210d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x2210d8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2210d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2210dc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2210DCu;
    SET_GPR_U32(ctx, 31, 0x2210E4u);
    ctx->pc = 0x2210E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2210DCu;
            // 0x2210e0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210E4u; }
        if (ctx->pc != 0x2210E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210E4u; }
        if (ctx->pc != 0x2210E4u) { return; }
    }
    ctx->pc = 0x2210E4u;
label_2210e4:
    // 0x2210e4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2210e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2210e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2210ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2210ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2210f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2210f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2210f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2210f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2210f8: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x2210f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2210fc: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2210FCu;
    {
        const bool branch_taken_0x2210fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210FCu;
            // 0x221100: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210fc) {
            ctx->pc = 0x220FACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220fac;
        }
    }
    ctx->pc = 0x221104u;
label_221104:
    // 0x221104: 0x0  nop
    ctx->pc = 0x221104u;
    // NOP
    // 0x221108: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x221108u;
    SET_GPR_U32(ctx, 31, 0x221110u);
    ctx->pc = 0x22110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221108u;
            // 0x22110c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221110u; }
        if (ctx->pc != 0x221110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221110u; }
        if (ctx->pc != 0x221110u) { return; }
    }
    ctx->pc = 0x221110u;
label_221110:
    // 0x221110: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x221110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x221114: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x221114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x221118: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x221118u;
    {
        const bool branch_taken_0x221118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221118u;
            // 0x22111c: 0x24030137  addiu       $v1, $zero, 0x137 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221118) {
            ctx->pc = 0x221240u;
            goto label_221240;
        }
    }
    ctx->pc = 0x221120u;
    // 0x221120: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x221124: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221128: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x221128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22112c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221130: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x221130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221134: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x221134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x221138: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x221138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22113c: 0xc7809358  lwc1        $f0, -0x6CA8($gp)
    ctx->pc = 0x22113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221140: 0x46182040  add.s       $f1, $f4, $f24
    ctx->pc = 0x221140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[24]);
    // 0x221144: 0x46021d40  add.s       $f21, $f3, $f2
    ctx->pc = 0x221144u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x221148: 0x46000e41  sub.s       $f25, $f1, $f0
    ctx->pc = 0x221148u;
    ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22114c: 0x46152580  add.s       $f22, $f4, $f21
    ctx->pc = 0x22114cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[4], ctx->f[21]);
    // 0x221150: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x221150u;
    SET_GPR_U32(ctx, 31, 0x221158u);
    ctx->pc = 0x221154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221150u;
            // 0x221154: 0x46192680  add.s       $f26, $f4, $f25 (Delay Slot)
        ctx->f[26] = FPU_ADD_S(ctx->f[4], ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221158u; }
        if (ctx->pc != 0x221158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221158u; }
        if (ctx->pc != 0x221158u) { return; }
    }
    ctx->pc = 0x221158u;
label_221158:
    // 0x221158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22115c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22115Cu;
    SET_GPR_U32(ctx, 31, 0x221164u);
    ctx->pc = 0x221160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22115Cu;
            // 0x221160: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221164u; }
        if (ctx->pc != 0x221164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221164u; }
        if (ctx->pc != 0x221164u) { return; }
    }
    ctx->pc = 0x221164u;
label_221164:
    // 0x221164: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x221164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x221168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22116c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22116cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221170: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221174: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221174u;
    SET_GPR_U32(ctx, 31, 0x22117Cu);
    ctx->pc = 0x221178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221174u;
            // 0x221178: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22117Cu; }
        if (ctx->pc != 0x22117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22117Cu; }
        if (ctx->pc != 0x22117Cu) { return; }
    }
    ctx->pc = 0x22117Cu;
label_22117c:
    // 0x22117c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x22117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221180: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x221180u;
    SET_GPR_U32(ctx, 31, 0x221188u);
    ctx->pc = 0x221184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221180u;
            // 0x221184: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221188u; }
        if (ctx->pc != 0x221188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221188u; }
        if (ctx->pc != 0x221188u) { return; }
    }
    ctx->pc = 0x221188u;
label_221188:
    // 0x221188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22118c: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x221190: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x221190u;
    SET_GPR_U32(ctx, 31, 0x221198u);
    ctx->pc = 0x221194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221190u;
            // 0x221194: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221198u; }
        if (ctx->pc != 0x221198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221198u; }
        if (ctx->pc != 0x221198u) { return; }
    }
    ctx->pc = 0x221198u;
label_221198:
    // 0x221198: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22119c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2211a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2211a4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2211A4u;
    SET_GPR_U32(ctx, 31, 0x2211ACu);
    ctx->pc = 0x2211A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211A4u;
            // 0x2211a8: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211ACu; }
        if (ctx->pc != 0x2211ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211ACu; }
        if (ctx->pc != 0x2211ACu) { return; }
    }
    ctx->pc = 0x2211ACu;
label_2211ac:
    // 0x2211ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2211acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211b0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2211b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2211b4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2211B4u;
    SET_GPR_U32(ctx, 31, 0x2211BCu);
    ctx->pc = 0x2211B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211B4u;
            // 0x2211b8: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211BCu; }
        if (ctx->pc != 0x2211BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211BCu; }
        if (ctx->pc != 0x2211BCu) { return; }
    }
    ctx->pc = 0x2211BCu;
label_2211bc:
    // 0x2211bc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2211bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2211c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2211c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211c4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2211c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2211c8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2211C8u;
    SET_GPR_U32(ctx, 31, 0x2211D0u);
    ctx->pc = 0x2211CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211C8u;
            // 0x2211cc: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211D0u; }
        if (ctx->pc != 0x2211D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211D0u; }
        if (ctx->pc != 0x2211D0u) { return; }
    }
    ctx->pc = 0x2211D0u;
label_2211d0:
    // 0x2211d0: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2211d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2211d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2211d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2211dc: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2211dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2211e0: 0x240601b0  addiu       $a2, $zero, 0x1B0
    ctx->pc = 0x2211e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x2211e4: 0x4600ce40  add.s       $f25, $f25, $f0
    ctx->pc = 0x2211e4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x2211e8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2211E8u;
    SET_GPR_U32(ctx, 31, 0x2211F0u);
    ctx->pc = 0x2211ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211E8u;
            // 0x2211ec: 0x4600d680  add.s       $f26, $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211F0u; }
        if (ctx->pc != 0x2211F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211F0u; }
        if (ctx->pc != 0x2211F0u) { return; }
    }
    ctx->pc = 0x2211F0u;
label_2211f0:
    // 0x2211f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2211f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2211f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2211f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2211f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2211fc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2211FCu;
    SET_GPR_U32(ctx, 31, 0x221204u);
    ctx->pc = 0x221200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211FCu;
            // 0x221200: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221204u; }
        if (ctx->pc != 0x221204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221204u; }
        if (ctx->pc != 0x221204u) { return; }
    }
    ctx->pc = 0x221204u;
label_221204:
    // 0x221204: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221208: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x221208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x22120c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22120Cu;
    SET_GPR_U32(ctx, 31, 0x221214u);
    ctx->pc = 0x221210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22120Cu;
            // 0x221210: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221214u; }
        if (ctx->pc != 0x221214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221214u; }
        if (ctx->pc != 0x221214u) { return; }
    }
    ctx->pc = 0x221214u;
label_221214:
    // 0x221214: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221218: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22121c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x22121cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x221220: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221220u;
    SET_GPR_U32(ctx, 31, 0x221228u);
    ctx->pc = 0x221224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221220u;
            // 0x221224: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221228u; }
        if (ctx->pc != 0x221228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221228u; }
        if (ctx->pc != 0x221228u) { return; }
    }
    ctx->pc = 0x221228u;
label_221228:
    // 0x221228: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x221228u;
    SET_GPR_U32(ctx, 31, 0x221230u);
    ctx->pc = 0x22122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221228u;
            // 0x22122c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221230u; }
        if (ctx->pc != 0x221230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221230u; }
        if (ctx->pc != 0x221230u) { return; }
    }
    ctx->pc = 0x221230u;
label_221230:
    // 0x221230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221234: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x221234u;
    SET_GPR_U32(ctx, 31, 0x22123Cu);
    ctx->pc = 0x221238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221234u;
            // 0x221238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22123Cu; }
        if (ctx->pc != 0x22123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22123Cu; }
        if (ctx->pc != 0x22123Cu) { return; }
    }
    ctx->pc = 0x22123Cu;
label_22123c:
    // 0x22123c: 0x24030137  addiu       $v1, $zero, 0x137
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
label_221240:
    // 0x221240: 0x16c3002b  bne         $s6, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x221240u;
    {
        const bool branch_taken_0x221240 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x221244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221240u;
            // 0x221244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221240) {
            ctx->pc = 0x2212F0u;
            goto label_2212f0;
        }
    }
    ctx->pc = 0x221248u;
    // 0x221248: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x221248u;
    SET_GPR_U32(ctx, 31, 0x221250u);
    ctx->pc = 0x22124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221248u;
            // 0x22124c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221250u; }
        if (ctx->pc != 0x221250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221250u; }
        if (ctx->pc != 0x221250u) { return; }
    }
    ctx->pc = 0x221250u;
label_221250:
    // 0x221250: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x221250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x221254: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x221254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x221258: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x221258u;
    SET_GPR_U32(ctx, 31, 0x221260u);
    ctx->pc = 0x22125Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221258u;
            // 0x22125c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221260u; }
        if (ctx->pc != 0x221260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221260u; }
        if (ctx->pc != 0x221260u) { return; }
    }
    ctx->pc = 0x221260u;
label_221260:
    // 0x221260: 0x92680003  lbu         $t0, 0x3($s3)
    ctx->pc = 0x221260u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x221264: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x221268: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22126c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22126cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221270: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221270u;
    SET_GPR_U32(ctx, 31, 0x221278u);
    ctx->pc = 0x221274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221270u;
            // 0x221274: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221278u; }
        if (ctx->pc != 0x221278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221278u; }
        if (ctx->pc != 0x221278u) { return; }
    }
    ctx->pc = 0x221278u;
label_221278:
    // 0x221278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22127c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x22127cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x221280: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x221280u;
    SET_GPR_U32(ctx, 31, 0x221288u);
    ctx->pc = 0x221284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221280u;
            // 0x221284: 0x24060240  addiu       $a2, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221288u; }
        if (ctx->pc != 0x221288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221288u; }
        if (ctx->pc != 0x221288u) { return; }
    }
    ctx->pc = 0x221288u;
label_221288:
    // 0x221288: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x22128c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221290: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x221290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x221294: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x221294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x221298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22129c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2212a0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2212a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2212a4: 0x46180b40  add.s       $f13, $f1, $f24
    ctx->pc = 0x2212a4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x2212a8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2212A8u;
    SET_GPR_U32(ctx, 31, 0x2212B0u);
    ctx->pc = 0x2212ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2212A8u;
            // 0x2212ac: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212B0u; }
        if (ctx->pc != 0x2212B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212B0u; }
        if (ctx->pc != 0x2212B0u) { return; }
    }
    ctx->pc = 0x2212B0u;
label_2212b0:
    // 0x2212b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2212b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212b4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2212b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2212b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2212B8u;
    SET_GPR_U32(ctx, 31, 0x2212C0u);
    ctx->pc = 0x2212BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2212B8u;
            // 0x2212bc: 0x24060260  addiu       $a2, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212C0u; }
        if (ctx->pc != 0x2212C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212C0u; }
        if (ctx->pc != 0x2212C0u) { return; }
    }
    ctx->pc = 0x2212C0u;
label_2212c0:
    // 0x2212c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2212c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2212c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2212c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2212c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2212cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2212ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2212d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2212d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2212d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2212d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2212d8: 0x0  nop
    ctx->pc = 0x2212d8u;
    // NOP
    // 0x2212dc: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x2212dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2212e0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2212E0u;
    SET_GPR_U32(ctx, 31, 0x2212E8u);
    ctx->pc = 0x2212E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2212E0u;
            // 0x2212e4: 0x46170340  add.s       $f13, $f0, $f23 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212E8u; }
        if (ctx->pc != 0x2212E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212E8u; }
        if (ctx->pc != 0x2212E8u) { return; }
    }
    ctx->pc = 0x2212E8u;
label_2212e8:
    // 0x2212e8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2212E8u;
    SET_GPR_U32(ctx, 31, 0x2212F0u);
    ctx->pc = 0x2212ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2212E8u;
            // 0x2212ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212F0u; }
        if (ctx->pc != 0x2212F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212F0u; }
        if (ctx->pc != 0x2212F0u) { return; }
    }
    ctx->pc = 0x2212F0u;
label_2212f0:
    // 0x2212f0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2212f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2212f4: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x2212f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2212f8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2212f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2212fc: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2212fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x221300: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x221300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221304: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x221304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x221308: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x221308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22130c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x22130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x221310: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x221310u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221314: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x221314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x221318: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x221318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22131c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x221320: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x221320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221324: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x221324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221328: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x221328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22132c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22132cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221330: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x221330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221334: 0x3e00008  jr          $ra
    ctx->pc = 0x221334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221334u;
            // 0x221338: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22133Cu;
}
