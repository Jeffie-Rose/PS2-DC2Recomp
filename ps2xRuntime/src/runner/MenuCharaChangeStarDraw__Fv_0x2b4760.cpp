#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaChangeStarDraw__Fv
// Address: 0x2b4760 - 0x2b4cc4
void MenuCharaChangeStarDraw__Fv_0x2b4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaChangeStarDraw__Fv_0x2b4760");
#endif

    switch (ctx->pc) {
        case 0x2b47c0u: goto label_2b47c0;
        case 0x2b4808u: goto label_2b4808;
        case 0x2b4824u: goto label_2b4824;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48b8u: goto label_2b48b8;
        case 0x2b48c4u: goto label_2b48c4;
        case 0x2b48d0u: goto label_2b48d0;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48f4u: goto label_2b48f4;
        case 0x2b48fcu: goto label_2b48fc;
        case 0x2b490cu: goto label_2b490c;
        case 0x2b4918u: goto label_2b4918;
        case 0x2b4928u: goto label_2b4928;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4950u: goto label_2b4950;
        case 0x2b496cu: goto label_2b496c;
        case 0x2b4994u: goto label_2b4994;
        case 0x2b49acu: goto label_2b49ac;
        case 0x2b49dcu: goto label_2b49dc;
        case 0x2b4a08u: goto label_2b4a08;
        case 0x2b4a18u: goto label_2b4a18;
        case 0x2b4a3cu: goto label_2b4a3c;
        case 0x2b4a48u: goto label_2b4a48;
        case 0x2b4a7cu: goto label_2b4a7c;
        case 0x2b4a84u: goto label_2b4a84;
        case 0x2b4ab0u: goto label_2b4ab0;
        case 0x2b4ae8u: goto label_2b4ae8;
        case 0x2b4af0u: goto label_2b4af0;
        case 0x2b4b1cu: goto label_2b4b1c;
        case 0x2b4b58u: goto label_2b4b58;
        case 0x2b4b70u: goto label_2b4b70;
        case 0x2b4b7cu: goto label_2b4b7c;
        case 0x2b4b88u: goto label_2b4b88;
        case 0x2b4b90u: goto label_2b4b90;
        case 0x2b4bccu: goto label_2b4bcc;
        case 0x2b4be4u: goto label_2b4be4;
        case 0x2b4bf8u: goto label_2b4bf8;
        case 0x2b4c0cu: goto label_2b4c0c;
        case 0x2b4c34u: goto label_2b4c34;
        case 0x2b4c64u: goto label_2b4c64;
        case 0x2b4c80u: goto label_2b4c80;
        default: break;
    }

    ctx->pc = 0x2b4760u;

    // 0x2b4760: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2b4760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x2b4764: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b4768: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2b4768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2b476c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2b4770: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b4774: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b4774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b4778: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b477c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x2b477cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4780: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2b4780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2b4784: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x2b4784u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b4788: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x2b4788u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b478c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2b478cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b4790: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2b4790u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b4794: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2b4794u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2b4798: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2b4798u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b479c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b479cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b47a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b47a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b47a4: 0x8f839b78  lw          $v1, -0x6488($gp)
    ctx->pc = 0x2b47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x2b47a8: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x2B47A8u;
    {
        const bool branch_taken_0x2b47a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B47A8u;
            // 0x2b47ac: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47a8) {
            ctx->pc = 0x2B4C80u;
            goto label_2b4c80;
        }
    }
    ctx->pc = 0x2B47B0u;
    // 0x2b47b0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2b47b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b47b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b47b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47b8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2B47B8u;
    SET_GPR_U32(ctx, 31, 0x2B47C0u);
    ctx->pc = 0x2B47BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B47B8u;
            // 0x2b47bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B47C0u; }
        if (ctx->pc != 0x2B47C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B47C0u; }
        if (ctx->pc != 0x2B47C0u) { return; }
    }
    ctx->pc = 0x2B47C0u;
label_2b47c0:
    // 0x2b47c0: 0x8f859bc8  lw          $a1, -0x6438($gp)
    ctx->pc = 0x2b47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b47c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b47c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b47c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b47cc: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x2b47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x2b47d0: 0xdf829bd0  ld          $v0, -0x6430($gp)
    ctx->pc = 0x2b47d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941648)));
    // 0x2b47d4: 0xc4b50264  lwc1        $f21, 0x264($a1)
    ctx->pc = 0x2b47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b47d8: 0x4602a843  div.s       $f1, $f21, $f2
    ctx->pc = 0x2b47d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[2]); }
    // 0x2b47dc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2b47dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2b47e0: 0xc4a00258  lwc1        $f0, 0x258($a1)
    ctx->pc = 0x2b47e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b47e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b47e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2b47e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b47e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b47ec: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2b47ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2b47f0: 0xc4a0025c  lwc1        $f0, 0x25C($a1)
    ctx->pc = 0x2b47f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b47f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b47f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b47f8: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x2b47f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x2b47fc: 0xc4b40268  lwc1        $f20, 0x268($a1)
    ctx->pc = 0x2b47fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4800: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2B4800u;
    SET_GPR_U32(ctx, 31, 0x2B4808u);
    ctx->pc = 0x2B4804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4800u;
            // 0x2b4804: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4808u; }
        if (ctx->pc != 0x2B4808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4808u; }
        if (ctx->pc != 0x2B4808u) { return; }
    }
    ctx->pc = 0x2B4808u;
label_2b4808:
    // 0x2b4808: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2b4808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b480c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2b480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2b4810: 0x2405013f  addiu       $a1, $zero, 0x13F
    ctx->pc = 0x2b4810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
    // 0x2b4814: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2b4814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2b4818: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2b4818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b481c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2B481Cu;
    SET_GPR_U32(ctx, 31, 0x2B4824u);
    ctx->pc = 0x2B4820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B481Cu;
            // 0x2b4820: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4824u; }
        if (ctx->pc != 0x2B4824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4824u; }
        if (ctx->pc != 0x2B4824u) { return; }
    }
    ctx->pc = 0x2B4824u;
label_2b4824:
    // 0x2b4824: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b4824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b4828: 0x8fa901a0  lw          $t1, 0x1A0($sp)
    ctx->pc = 0x2b4828u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2b482c: 0x2442cd00  addiu       $v0, $v0, -0x3300
    ctx->pc = 0x2b482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x2b4830: 0x8fa801a8  lw          $t0, 0x1A8($sp)
    ctx->pc = 0x2b4830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2b4834: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b4834u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4838: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2b4838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2b483c: 0x8faa01a4  lw          $t2, 0x1A4($sp)
    ctx->pc = 0x2b483cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2b4840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4844: 0x8fa701ac  lw          $a3, 0x1AC($sp)
    ctx->pc = 0x2b4844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2b4848: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b4848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b484c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2b484cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4850: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2b4850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2b4854: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2b4854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b4858: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2b4858u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b485c: 0x0  nop
    ctx->pc = 0x2b485cu;
    // NOP
    // 0x2b4860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b4860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b4864: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x2b4864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2b4868: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2b4868u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2b486c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2b486cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x2b4870: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2b4870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b4874: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2b4874u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4878: 0x0  nop
    ctx->pc = 0x2b4878u;
    // NOP
    // 0x2b487c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b487cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2b4880: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b4880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b4884: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2b4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2b4888: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2b4888u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b488c: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x2b488cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2b4890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b4890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b4894: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x2b4894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2b4898: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x2b4898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x2b489c: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x2b489cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2b48a0: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b48a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x2b48a4: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2B48A4u;
    SET_GPR_U32(ctx, 31, 0x2B48ACu);
    ctx->pc = 0x2B48A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48A4u;
            // 0x2b48a8: 0xe7a001bc  swc1        $f0, 0x1BC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48ACu; }
        if (ctx->pc != 0x2B48ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48ACu; }
        if (ctx->pc != 0x2B48ACu) { return; }
    }
    ctx->pc = 0x2B48ACu;
label_2b48ac:
    // 0x2b48ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b48acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48b0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2B48B0u;
    SET_GPR_U32(ctx, 31, 0x2B48B8u);
    ctx->pc = 0x2B48B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48B0u;
            // 0x2b48b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48B8u; }
        if (ctx->pc != 0x2B48B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48B8u; }
        if (ctx->pc != 0x2B48B8u) { return; }
    }
    ctx->pc = 0x2B48B8u;
label_2b48b8:
    // 0x2b48b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b48b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48bc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2B48BCu;
    SET_GPR_U32(ctx, 31, 0x2B48C4u);
    ctx->pc = 0x2B48C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48BCu;
            // 0x2b48c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48C4u; }
        if (ctx->pc != 0x2B48C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48C4u; }
        if (ctx->pc != 0x2B48C4u) { return; }
    }
    ctx->pc = 0x2B48C4u;
label_2b48c4:
    // 0x2b48c4: 0x8f859b78  lw          $a1, -0x6488($gp)
    ctx->pc = 0x2b48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x2b48c8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2B48C8u;
    SET_GPR_U32(ctx, 31, 0x2B48D0u);
    ctx->pc = 0x2B48CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48C8u;
            // 0x2b48cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48D0u; }
        if (ctx->pc != 0x2B48D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48D0u; }
        if (ctx->pc != 0x2B48D0u) { return; }
    }
    ctx->pc = 0x2B48D0u;
label_2b48d0:
    // 0x2b48d0: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b48d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B48D4u;
    SET_GPR_U32(ctx, 31, 0x2B48DCu);
    ctx->pc = 0x2B48D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48D4u;
            // 0x2b48d8: 0xc44c026c  lwc1        $f12, 0x26C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48DCu; }
        if (ctx->pc != 0x2B48DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48DCu; }
        if (ctx->pc != 0x2B48DCu) { return; }
    }
    ctx->pc = 0x2B48DCu;
label_2b48dc:
    // 0x2b48dc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2b48dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b48e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b48e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b48e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b48e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48ec: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2B48ECu;
    SET_GPR_U32(ctx, 31, 0x2B48F4u);
    ctx->pc = 0x2B48F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B48ECu;
            // 0x2b48f0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48F4u; }
        if (ctx->pc != 0x2B48F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B48F4u; }
        if (ctx->pc != 0x2B48F4u) { return; }
    }
    ctx->pc = 0x2B48F4u;
label_2b48f4:
    // 0x2b48f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b48f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b48f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b48fc:
    // 0x2b48fc: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2b4900: 0x245401b0  addiu       $s4, $v0, 0x1B0
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2b4904: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4904u;
    SET_GPR_U32(ctx, 31, 0x2B490Cu);
    ctx->pc = 0x2B4908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4904u;
            // 0x2b4908: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B490Cu; }
        if (ctx->pc != 0x2B490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B490Cu; }
        if (ctx->pc != 0x2B490Cu) { return; }
    }
    ctx->pc = 0x2B490Cu;
label_2b490c:
    // 0x2b490c: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x2b490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b4910: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4910u;
    SET_GPR_U32(ctx, 31, 0x2B4918u);
    ctx->pc = 0x2B4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4910u;
            // 0x2b4914: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4918u; }
        if (ctx->pc != 0x2B4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4918u; }
        if (ctx->pc != 0x2B4918u) { return; }
    }
    ctx->pc = 0x2B4918u;
label_2b4918:
    // 0x2b4918: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b4918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b491c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b491cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4920: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2B4920u;
    SET_GPR_U32(ctx, 31, 0x2B4928u);
    ctx->pc = 0x2B4924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4920u;
            // 0x2b4924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4928u; }
        if (ctx->pc != 0x2B4928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4928u; }
        if (ctx->pc != 0x2B4928u) { return; }
    }
    ctx->pc = 0x2B4928u;
label_2b4928:
    // 0x2b4928: 0xc047964  jal         func_11E590
    ctx->pc = 0x2B4928u;
    SET_GPR_U32(ctx, 31, 0x2B4930u);
    ctx->pc = 0x2B492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4928u;
            // 0x2b492c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4930u; }
        if (ctx->pc != 0x2B4930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4930u; }
        if (ctx->pc != 0x2B4930u) { return; }
    }
    ctx->pc = 0x2B4930u;
label_2b4930:
    // 0x2b4930: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x2b4930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4938: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x2b4938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b493c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b493cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b4940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4944: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b4944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b4948: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B4948u;
    SET_GPR_U32(ctx, 31, 0x2B4950u);
    ctx->pc = 0x2B494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4948u;
            // 0x2b494c: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4950u; }
        if (ctx->pc != 0x2B4950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4950u; }
        if (ctx->pc != 0x2B4950u) { return; }
    }
    ctx->pc = 0x2B4950u;
label_2b4950:
    // 0x2b4950: 0xc7b9021c  lwc1        $f25, 0x21C($sp)
    ctx->pc = 0x2b4950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b4954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4958: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2b4958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b495c: 0x4600cb40  add.s       $f13, $f25, $f0
    ctx->pc = 0x2b495cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x2b4960: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2b4960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b4964: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2B4964u;
    SET_GPR_U32(ctx, 31, 0x2B496Cu);
    ctx->pc = 0x2B4968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4964u;
            // 0x2b4968: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B496Cu; }
        if (ctx->pc != 0x2B496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B496Cu; }
        if (ctx->pc != 0x2B496Cu) { return; }
    }
    ctx->pc = 0x2B496Cu;
label_2b496c:
    // 0x2b496c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b4970: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b4970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b4974: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b4974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b4978: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2b4978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2b497c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b497cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4980: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2b4980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b4984: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2B4984u;
    {
        const bool branch_taken_0x2b4984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4984u;
            // 0x2b4988: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4984) {
            ctx->pc = 0x2B48FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b48fc;
        }
    }
    ctx->pc = 0x2B498Cu;
    // 0x2b498c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2B498Cu;
    SET_GPR_U32(ctx, 31, 0x2B4994u);
    ctx->pc = 0x2B4990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B498Cu;
            // 0x2b4990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4994u; }
        if (ctx->pc != 0x2B4994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4994u; }
        if (ctx->pc != 0x2B4994u) { return; }
    }
    ctx->pc = 0x2B4994u;
label_2b4994:
    // 0x2b4994: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2b4994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b4998: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2b4998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2b499c: 0x24050121  addiu       $a1, $zero, 0x121
    ctx->pc = 0x2b499cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
    // 0x2b49a0: 0x240600e1  addiu       $a2, $zero, 0xE1
    ctx->pc = 0x2b49a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x2b49a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2B49A4u;
    SET_GPR_U32(ctx, 31, 0x2B49ACu);
    ctx->pc = 0x2B49A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49A4u;
            // 0x2b49a8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49ACu; }
        if (ctx->pc != 0x2B49ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49ACu; }
        if (ctx->pc != 0x2B49ACu) { return; }
    }
    ctx->pc = 0x2B49ACu;
label_2b49ac:
    // 0x2b49ac: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x2b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x2b49b0: 0x8f839bc8  lw          $v1, -0x6438($gp)
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b49b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b49b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b49b8: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2b49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2b49bc: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2b49bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2b49c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b49c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b49c4: 0xc4770274  lwc1        $f23, 0x274($v1)
    ctx->pc = 0x2b49c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b49c8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2b49c8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2b49cc: 0xc4600264  lwc1        $f0, 0x264($v1)
    ctx->pc = 0x2b49ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b49d0: 0xc46c0278  lwc1        $f12, 0x278($v1)
    ctx->pc = 0x2b49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b49d4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B49D4u;
    SET_GPR_U32(ctx, 31, 0x2B49DCu);
    ctx->pc = 0x2B49D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49D4u;
            // 0x2b49d8: 0x46000f02  mul.s       $f28, $f1, $f0 (Delay Slot)
        ctx->f[28] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49DCu; }
        if (ctx->pc != 0x2B49DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B49DCu; }
        if (ctx->pc != 0x2B49DCu) { return; }
    }
    ctx->pc = 0x2B49DCu;
label_2b49dc:
    // 0x2b49dc: 0x8f839bc8  lw          $v1, -0x6438($gp)
    ctx->pc = 0x2b49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b49e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b49e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b49e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2b49e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b49e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b49ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b49ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b49f0: 0xc461026c  lwc1        $f1, 0x26C($v1)
    ctx->pc = 0x2b49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b49f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B49F4u;
    {
        const bool branch_taken_0x2b49f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B49F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B49F4u;
            // 0x2b49f8: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49f4) {
            ctx->pc = 0x2B4A00u;
            goto label_2b4a00;
        }
    }
    ctx->pc = 0x2B49FCu;
    // 0x2b49fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b49fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2b4a00:
    // 0x2b4a00: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x2b4a00u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4a04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4a08:
    // 0x2b4a08: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4a0c: 0xc456026c  lwc1        $f22, 0x26C($v0)
    ctx->pc = 0x2b4a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4a10: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B4A10u;
    SET_GPR_U32(ctx, 31, 0x2B4A18u);
    ctx->pc = 0x2B4A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A10u;
            // 0x2b4a14: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A18u; }
        if (ctx->pc != 0x2B4A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A18u; }
        if (ctx->pc != 0x2B4A18u) { return; }
    }
    ctx->pc = 0x2B4A18u;
label_2b4a18:
    // 0x2b4a18: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2b4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2b4a1c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2b4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2b4a20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b4a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b4a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4a28: 0x0  nop
    ctx->pc = 0x2b4a28u;
    // NOP
    // 0x2b4a2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b4a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b4a30: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x2b4a30u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b4a34: 0xc047964  jal         func_11E590
    ctx->pc = 0x2B4A34u;
    SET_GPR_U32(ctx, 31, 0x2B4A3Cu);
    ctx->pc = 0x2B4A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A34u;
            // 0x2b4a38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A3Cu; }
        if (ctx->pc != 0x2B4A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A3Cu; }
        if (ctx->pc != 0x2B4A3Cu) { return; }
    }
    ctx->pc = 0x2B4A3Cu;
label_2b4a3c:
    // 0x2b4a3c: 0x4600e6c2  mul.s       $f27, $f28, $f0
    ctx->pc = 0x2b4a3cu;
    ctx->f[27] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2b4a40: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B4A40u;
    SET_GPR_U32(ctx, 31, 0x2B4A48u);
    ctx->pc = 0x2B4A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A40u;
            // 0x2b4a44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A48u; }
        if (ctx->pc != 0x2B4A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A48u; }
        if (ctx->pc != 0x2B4A48u) { return; }
    }
    ctx->pc = 0x2B4A48u;
label_2b4a48:
    // 0x2b4a48: 0x4600e082  mul.s       $f2, $f28, $f0
    ctx->pc = 0x2b4a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2b4a4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2b4a50: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2b4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2b4a54: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x2b4a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4a58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4a5c: 0x4602ce80  add.s       $f26, $f25, $f2
    ctx->pc = 0x2b4a5cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
    // 0x2b4a60: 0x461b06c0  add.s       $f27, $f0, $f27
    ctx->pc = 0x2b4a60u;
    ctx->f[27] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x2b4a64: 0x46150802  mul.s       $f0, $f1, $f21
    ctx->pc = 0x2b4a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2b4a68: 0x4600db01  sub.s       $f12, $f27, $f0
    ctx->pc = 0x2b4a68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
    // 0x2b4a6c: 0x4600d341  sub.s       $f13, $f26, $f0
    ctx->pc = 0x2b4a6cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x2b4a70: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2b4a70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2b4a74: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2B4A74u;
    SET_GPR_U32(ctx, 31, 0x2B4A7Cu);
    ctx->pc = 0x2B4A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A74u;
            // 0x2b4a78: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A7Cu; }
        if (ctx->pc != 0x2B4A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A7Cu; }
        if (ctx->pc != 0x2B4A7Cu) { return; }
    }
    ctx->pc = 0x2B4A7Cu;
label_2b4a7c:
    // 0x2b4a7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B4A84u);
    ctx->pc = 0x2B4A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4A7Cu;
            // 0x2b4a80: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A84u; }
        if (ctx->pc != 0x2B4A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4A84u; }
        if (ctx->pc != 0x2B4A84u) { return; }
    }
    ctx->pc = 0x2B4A84u;
label_2b4a84:
    // 0x2b4a84: 0x8f859b78  lw          $a1, -0x6488($gp)
    ctx->pc = 0x2b4a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x2b4a88: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2b4a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b4a8c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b4a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a94: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2b4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2b4a98: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x2b4a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2b4a9c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2b4a9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2b4aa0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2b4aa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4aa4: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x2b4aa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x2b4aa8: 0xc089570  jal         func_2255C0
    ctx->pc = 0x2B4AA8u;
    SET_GPR_U32(ctx, 31, 0x2B4AB0u);
    ctx->pc = 0x2B4AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AA8u;
            // 0x2b4aac: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2255C0u;
    if (runtime->hasFunction(0x2255C0u)) {
        auto targetFn = runtime->lookupFunction(0x2255C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AB0u; }
        if (ctx->pc != 0x2B4AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawWakuCircle__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_ffiiii_0x2255c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AB0u; }
        if (ctx->pc != 0x2B4AB0u) { return; }
    }
    ctx->pc = 0x2B4AB0u;
label_2b4ab0:
    // 0x2b4ab0: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2b4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2b4ab4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2b4ab8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b4ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b4abc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2b4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2b4ac0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4ac8: 0x0  nop
    ctx->pc = 0x2b4ac8u;
    // NOP
    // 0x2b4acc: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x2b4accu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2b4ad0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2b4ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2b4ad4: 0x4600d341  sub.s       $f13, $f26, $f0
    ctx->pc = 0x2b4ad4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x2b4ad8: 0x4600db01  sub.s       $f12, $f27, $f0
    ctx->pc = 0x2b4ad8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
    // 0x2b4adc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2b4adcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2b4ae0: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2B4AE0u;
    SET_GPR_U32(ctx, 31, 0x2B4AE8u);
    ctx->pc = 0x2B4AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AE0u;
            // 0x2b4ae4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AE8u; }
        if (ctx->pc != 0x2B4AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AE8u; }
        if (ctx->pc != 0x2B4AE8u) { return; }
    }
    ctx->pc = 0x2B4AE8u;
label_2b4ae8:
    // 0x2b4ae8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4AE8u;
    SET_GPR_U32(ctx, 31, 0x2B4AF0u);
    ctx->pc = 0x2B4AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4AE8u;
            // 0x2b4aec: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AF0u; }
        if (ctx->pc != 0x2B4AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4AF0u; }
        if (ctx->pc != 0x2B4AF0u) { return; }
    }
    ctx->pc = 0x2B4AF0u;
label_2b4af0:
    // 0x2b4af0: 0x8f859b78  lw          $a1, -0x6488($gp)
    ctx->pc = 0x2b4af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x2b4af4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2b4af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b4af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4afc: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2b4b00: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x2b4b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2b4b04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b4b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b08: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2b4b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2b4b0c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2b4b0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b10: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x2b4b10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x2b4b14: 0xc089570  jal         func_2255C0
    ctx->pc = 0x2B4B14u;
    SET_GPR_U32(ctx, 31, 0x2B4B1Cu);
    ctx->pc = 0x2B4B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B14u;
            // 0x2b4b18: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2255C0u;
    if (runtime->hasFunction(0x2255C0u)) {
        auto targetFn = runtime->lookupFunction(0x2255C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B1Cu; }
        if (ctx->pc != 0x2B4B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawWakuCircle__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_ffiiii_0x2255c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B1Cu; }
        if (ctx->pc != 0x2B4B1Cu) { return; }
    }
    ctx->pc = 0x2B4B1Cu;
label_2b4b1c:
    // 0x2b4b1c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b4b20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b4b24: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2b4b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b4b28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b4b28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4b2c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x2b4b2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b4b30: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2b4b30u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b4b34: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2B4B34u;
    {
        const bool branch_taken_0x2b4b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B34u;
            // 0x2b4b38: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b34) {
            ctx->pc = 0x2B4A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4a08;
        }
    }
    ctx->pc = 0x2B4B3Cu;
    // 0x2b4b3c: 0x8f839b80  lw          $v1, -0x6480($gp)
    ctx->pc = 0x2b4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941568)));
    // 0x2b4b40: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B4B40u;
    {
        const bool branch_taken_0x2b4b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b40) {
            ctx->pc = 0x2B4C80u;
            goto label_2b4c80;
        }
    }
    ctx->pc = 0x2B4B48u;
    // 0x2b4b48: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b4b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b50: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2B4B50u;
    SET_GPR_U32(ctx, 31, 0x2B4B58u);
    ctx->pc = 0x2B4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B50u;
            // 0x2b4b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B58u; }
        if (ctx->pc != 0x2B4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B58u; }
        if (ctx->pc != 0x2B4B58u) { return; }
    }
    ctx->pc = 0x2B4B58u;
label_2b4b58:
    // 0x2b4b58: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2b4b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b4b5c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2b4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2b4b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b64: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4b68: 0xc0aff0c  jal         func_2BFC30
    ctx->pc = 0x2B4B68u;
    SET_GPR_U32(ctx, 31, 0x2B4B70u);
    ctx->pc = 0x2B4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B68u;
            // 0x2b4b6c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC30u;
    if (runtime->hasFunction(0x2BFC30u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B70u; }
        if (ctx->pc != 0x2B4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_s_Fssss_0x2bfc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B70u; }
        if (ctx->pc != 0x2B4B70u) { return; }
    }
    ctx->pc = 0x2B4B70u;
label_2b4b70:
    // 0x2b4b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b74: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2B4B74u;
    SET_GPR_U32(ctx, 31, 0x2B4B7Cu);
    ctx->pc = 0x2B4B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B74u;
            // 0x2b4b78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B7Cu; }
        if (ctx->pc != 0x2B4B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B7Cu; }
        if (ctx->pc != 0x2B4B7Cu) { return; }
    }
    ctx->pc = 0x2B4B7Cu;
label_2b4b7c:
    // 0x2b4b7c: 0x8f859b80  lw          $a1, -0x6480($gp)
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941568)));
    // 0x2b4b80: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2B4B80u;
    SET_GPR_U32(ctx, 31, 0x2B4B88u);
    ctx->pc = 0x2B4B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4B80u;
            // 0x2b4b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B88u; }
        if (ctx->pc != 0x2B4B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4B88u; }
        if (ctx->pc != 0x2B4B88u) { return; }
    }
    ctx->pc = 0x2B4B88u;
label_2b4b88:
    // 0x2b4b88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b4b88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b4b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b90:
    // 0x2b4b90: 0x8f829bc8  lw          $v0, -0x6438($gp)
    ctx->pc = 0x2b4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b4b94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4b98: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2b4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b4b9c: 0xc46c0284  lwc1        $f12, 0x284($v1)
    ctx->pc = 0x2b4b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b4ba0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2b4ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4ba4: 0x0  nop
    ctx->pc = 0x2b4ba4u;
    // NOP
    // 0x2b4ba8: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2B4BA8u;
    {
        const bool branch_taken_0x2b4ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4ba8) {
            ctx->pc = 0x2B4C64u;
            goto label_2b4c64;
        }
    }
    ctx->pc = 0x2B4BB0u;
    // 0x2b4bb0: 0xc4630288  lwc1        $f3, 0x288($v1)
    ctx->pc = 0x2b4bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4bb4: 0xc4420258  lwc1        $f2, 0x258($v0)
    ctx->pc = 0x2b4bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4bb8: 0xc461028c  lwc1        $f1, 0x28C($v1)
    ctx->pc = 0x2b4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4bbc: 0xc440025c  lwc1        $f0, 0x25C($v0)
    ctx->pc = 0x2b4bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4bc0: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x2b4bc0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b4bc4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4BC4u;
    SET_GPR_U32(ctx, 31, 0x2B4BCCu);
    ctx->pc = 0x2B4BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4BC4u;
            // 0x2b4bc8: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BCCu; }
        if (ctx->pc != 0x2B4BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BCCu; }
        if (ctx->pc != 0x2B4BCCu) { return; }
    }
    ctx->pc = 0x2B4BCCu;
label_2b4bcc:
    // 0x2b4bcc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2b4bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b4bd0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b4bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b4bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bdc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2B4BDCu;
    SET_GPR_U32(ctx, 31, 0x2B4BE4u);
    ctx->pc = 0x2B4BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4BDCu;
            // 0x2b4be0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BE4u; }
        if (ctx->pc != 0x2B4BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BE4u; }
        if (ctx->pc != 0x2B4BE4u) { return; }
    }
    ctx->pc = 0x2B4BE4u;
label_2b4be4:
    // 0x2b4be4: 0x27b201e2  addiu       $s2, $sp, 0x1E2
    ctx->pc = 0x2b4be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 482));
    // 0x2b4be8: 0x87a501e0  lh          $a1, 0x1E0($sp)
    ctx->pc = 0x2b4be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2b4bec: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x2b4becu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4bf0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2B4BF0u;
    SET_GPR_U32(ctx, 31, 0x2B4BF8u);
    ctx->pc = 0x2B4BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4BF0u;
            // 0x2b4bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BF8u; }
        if (ctx->pc != 0x2B4BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BF8u; }
        if (ctx->pc != 0x2B4BF8u) { return; }
    }
    ctx->pc = 0x2B4BF8u;
label_2b4bf8:
    // 0x2b4bf8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2b4bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b4bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b4c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b4c04: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2B4C04u;
    SET_GPR_U32(ctx, 31, 0x2B4C0Cu);
    ctx->pc = 0x2B4C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C04u;
            // 0x2b4c08: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C0Cu; }
        if (ctx->pc != 0x2B4C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C0Cu; }
        if (ctx->pc != 0x2B4C0Cu) { return; }
    }
    ctx->pc = 0x2B4C0Cu;
label_2b4c0c:
    // 0x2b4c0c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x2b4c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4c10: 0x27b301e4  addiu       $s3, $sp, 0x1E4
    ctx->pc = 0x2b4c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x2b4c14: 0x87a601e0  lh          $a2, 0x1E0($sp)
    ctx->pc = 0x2b4c14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2b4c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c1c: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x2b4c1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b4c20: 0x27b201e6  addiu       $s2, $sp, 0x1E6
    ctx->pc = 0x2b4c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 486));
    // 0x2b4c24: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4c28: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b4c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b4c2c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2B4C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B4C34u);
    ctx->pc = 0x2B4C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C2Cu;
            // 0x2b4c30: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C34u; }
        if (ctx->pc != 0x2B4C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C34u; }
        if (ctx->pc != 0x2B4C34u) { return; }
    }
    ctx->pc = 0x2B4C34u;
label_2b4c34:
    // 0x2b4c34: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x2b4c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b4c38: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2b4c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b4c3c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c4c: 0x0  nop
    ctx->pc = 0x2b4c4cu;
    // NOP
    // 0x2b4c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b4c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b4c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b4c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b4c58: 0x4601a300  add.s       $f12, $f20, $f1
    ctx->pc = 0x2b4c58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2b4c5c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2B4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B4C64u);
    ctx->pc = 0x2B4C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C5Cu;
            // 0x2b4c60: 0x4600ab40  add.s       $f13, $f21, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C64u; }
        if (ctx->pc != 0x2B4C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C64u; }
        if (ctx->pc != 0x2B4C64u) { return; }
    }
    ctx->pc = 0x2B4C64u;
label_2b4c64:
    // 0x2b4c64: 0x0  nop
    ctx->pc = 0x2b4c64u;
    // NOP
    // 0x2b4c68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b4c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b4c6c: 0x2a820100  slti        $v0, $s4, 0x100
    ctx->pc = 0x2b4c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2b4c70: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2B4C70u;
    {
        const bool branch_taken_0x2b4c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C70u;
            // 0x2b4c74: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c70) {
            ctx->pc = 0x2B4B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4b90;
        }
    }
    ctx->pc = 0x2B4C78u;
    // 0x2b4c78: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2B4C78u;
    SET_GPR_U32(ctx, 31, 0x2B4C80u);
    ctx->pc = 0x2B4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C78u;
            // 0x2b4c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C80u; }
        if (ctx->pc != 0x2B4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C80u; }
        if (ctx->pc != 0x2B4C80u) { return; }
    }
    ctx->pc = 0x2B4C80u;
label_2b4c80:
    // 0x2b4c80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b4c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4c84: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x2b4c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2b4c88: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2b4c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4c8c: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x2b4c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2b4c90: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b4c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4c94: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x2b4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b4c98: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b4c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4c9c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2b4c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b4ca0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b4ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4ca4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2b4ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b4ca8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b4ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4cac: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2b4cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b4cb0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2b4cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4cb4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b4cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4cb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b4cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4CBCu;
            // 0x2b4cc0: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4CC4u;
}
