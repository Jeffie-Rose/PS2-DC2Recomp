#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__5CBPotFv
// Address: 0x2cc3f0 - 0x2cc5a4
void Step__5CBPotFv_0x2cc3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__5CBPotFv_0x2cc3f0");
#endif

    switch (ctx->pc) {
        case 0x2cc3f0u: goto label_2cc3f0;
        case 0x2cc3f4u: goto label_2cc3f4;
        case 0x2cc3f8u: goto label_2cc3f8;
        case 0x2cc3fcu: goto label_2cc3fc;
        case 0x2cc400u: goto label_2cc400;
        case 0x2cc404u: goto label_2cc404;
        case 0x2cc408u: goto label_2cc408;
        case 0x2cc40cu: goto label_2cc40c;
        case 0x2cc410u: goto label_2cc410;
        case 0x2cc414u: goto label_2cc414;
        case 0x2cc418u: goto label_2cc418;
        case 0x2cc41cu: goto label_2cc41c;
        case 0x2cc420u: goto label_2cc420;
        case 0x2cc424u: goto label_2cc424;
        case 0x2cc428u: goto label_2cc428;
        case 0x2cc42cu: goto label_2cc42c;
        case 0x2cc430u: goto label_2cc430;
        case 0x2cc434u: goto label_2cc434;
        case 0x2cc438u: goto label_2cc438;
        case 0x2cc43cu: goto label_2cc43c;
        case 0x2cc440u: goto label_2cc440;
        case 0x2cc444u: goto label_2cc444;
        case 0x2cc448u: goto label_2cc448;
        case 0x2cc44cu: goto label_2cc44c;
        case 0x2cc450u: goto label_2cc450;
        case 0x2cc454u: goto label_2cc454;
        case 0x2cc458u: goto label_2cc458;
        case 0x2cc45cu: goto label_2cc45c;
        case 0x2cc460u: goto label_2cc460;
        case 0x2cc464u: goto label_2cc464;
        case 0x2cc468u: goto label_2cc468;
        case 0x2cc46cu: goto label_2cc46c;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc474u: goto label_2cc474;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc47cu: goto label_2cc47c;
        case 0x2cc480u: goto label_2cc480;
        case 0x2cc484u: goto label_2cc484;
        case 0x2cc488u: goto label_2cc488;
        case 0x2cc48cu: goto label_2cc48c;
        case 0x2cc490u: goto label_2cc490;
        case 0x2cc494u: goto label_2cc494;
        case 0x2cc498u: goto label_2cc498;
        case 0x2cc49cu: goto label_2cc49c;
        case 0x2cc4a0u: goto label_2cc4a0;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4a8u: goto label_2cc4a8;
        case 0x2cc4acu: goto label_2cc4ac;
        case 0x2cc4b0u: goto label_2cc4b0;
        case 0x2cc4b4u: goto label_2cc4b4;
        case 0x2cc4b8u: goto label_2cc4b8;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4c0u: goto label_2cc4c0;
        case 0x2cc4c4u: goto label_2cc4c4;
        case 0x2cc4c8u: goto label_2cc4c8;
        case 0x2cc4ccu: goto label_2cc4cc;
        case 0x2cc4d0u: goto label_2cc4d0;
        case 0x2cc4d4u: goto label_2cc4d4;
        case 0x2cc4d8u: goto label_2cc4d8;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4e0u: goto label_2cc4e0;
        case 0x2cc4e4u: goto label_2cc4e4;
        case 0x2cc4e8u: goto label_2cc4e8;
        case 0x2cc4ecu: goto label_2cc4ec;
        case 0x2cc4f0u: goto label_2cc4f0;
        case 0x2cc4f4u: goto label_2cc4f4;
        case 0x2cc4f8u: goto label_2cc4f8;
        case 0x2cc4fcu: goto label_2cc4fc;
        case 0x2cc500u: goto label_2cc500;
        case 0x2cc504u: goto label_2cc504;
        case 0x2cc508u: goto label_2cc508;
        case 0x2cc50cu: goto label_2cc50c;
        case 0x2cc510u: goto label_2cc510;
        case 0x2cc514u: goto label_2cc514;
        case 0x2cc518u: goto label_2cc518;
        case 0x2cc51cu: goto label_2cc51c;
        case 0x2cc520u: goto label_2cc520;
        case 0x2cc524u: goto label_2cc524;
        case 0x2cc528u: goto label_2cc528;
        case 0x2cc52cu: goto label_2cc52c;
        case 0x2cc530u: goto label_2cc530;
        case 0x2cc534u: goto label_2cc534;
        case 0x2cc538u: goto label_2cc538;
        case 0x2cc53cu: goto label_2cc53c;
        case 0x2cc540u: goto label_2cc540;
        case 0x2cc544u: goto label_2cc544;
        case 0x2cc548u: goto label_2cc548;
        case 0x2cc54cu: goto label_2cc54c;
        case 0x2cc550u: goto label_2cc550;
        case 0x2cc554u: goto label_2cc554;
        case 0x2cc558u: goto label_2cc558;
        case 0x2cc55cu: goto label_2cc55c;
        case 0x2cc560u: goto label_2cc560;
        case 0x2cc564u: goto label_2cc564;
        case 0x2cc568u: goto label_2cc568;
        case 0x2cc56cu: goto label_2cc56c;
        case 0x2cc570u: goto label_2cc570;
        case 0x2cc574u: goto label_2cc574;
        case 0x2cc578u: goto label_2cc578;
        case 0x2cc57cu: goto label_2cc57c;
        case 0x2cc580u: goto label_2cc580;
        case 0x2cc584u: goto label_2cc584;
        case 0x2cc588u: goto label_2cc588;
        case 0x2cc58cu: goto label_2cc58c;
        case 0x2cc590u: goto label_2cc590;
        case 0x2cc594u: goto label_2cc594;
        case 0x2cc598u: goto label_2cc598;
        case 0x2cc59cu: goto label_2cc59c;
        case 0x2cc5a0u: goto label_2cc5a0;
        default: break;
    }

    ctx->pc = 0x2cc3f0u;

label_2cc3f0:
    // 0x2cc3f0: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x2cc3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_2cc3f4:
    // 0x2cc3f4: 0x34215f80  ori         $at, $at, 0x5F80
    ctx->pc = 0x2cc3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24448);
label_2cc3f8:
    // 0x2cc3f8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2cc3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2cc3fc:
    // 0x2cc3fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cc3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cc400:
    // 0x2cc400: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cc400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2cc404:
    // 0x2cc404: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cc404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2cc408:
    // 0x2cc408: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cc408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc40c:
    // 0x2cc40c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cc40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cc410:
    // 0x2cc410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cc410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cc414:
    // 0x2cc414: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cc414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2cc418:
    // 0x2cc418: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cc418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc41c:
    // 0x2cc41c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2cc41cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2cc420:
    // 0x2cc420: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
label_2cc424:
    if (ctx->pc == 0x2CC424u) {
        ctx->pc = 0x2CC424u;
            // 0x2cc424: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC428u;
        goto label_2cc428;
    }
    ctx->pc = 0x2CC420u;
    {
        const bool branch_taken_0x2cc420 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC420u;
            // 0x2cc424: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc420) {
            ctx->pc = 0x2CC4F0u;
            goto label_2cc4f0;
        }
    }
    ctx->pc = 0x2CC428u;
label_2cc428:
    // 0x2cc428: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2cc428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc42c:
    // 0x2cc42c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2cc430:
    // 0x2cc430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cc434:
    // 0x2cc434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cc434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cc438:
    // 0x2cc438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc43c:
    // 0x2cc43c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2cc43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2cc440:
    // 0x2cc440: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2cc440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc444:
    // 0x2cc444: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cc448:
    // 0x2cc448: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2cc448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2cc44c:
    // 0x2cc44c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2cc44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc450:
    // 0x2cc450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc454:
    // 0x2cc454: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2cc454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2cc458:
    // 0x2cc458: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2cc458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc45c:
    // 0x2cc45c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cc460:
    // 0x2cc460: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2cc460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2cc464:
    // 0x2cc464: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2cc464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc468:
    // 0x2cc468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc46c:
    // 0x2cc46c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2cc46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2cc470:
    // 0x2cc470: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2cc470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc474:
    // 0x2cc474: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cc478:
    // 0x2cc478: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2cc478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2cc47c:
    // 0x2cc47c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2cc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_2cc480:
    // 0x2cc480: 0xc06421c  jal         func_190870
label_2cc484:
    if (ctx->pc == 0x2CC484u) {
        ctx->pc = 0x2CC484u;
            // 0x2cc484: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x2CC488u;
        goto label_2cc488;
    }
    ctx->pc = 0x2CC480u;
    SET_GPR_U32(ctx, 31, 0x2CC488u);
    ctx->pc = 0x2CC484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC480u;
            // 0x2cc484: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC488u; }
        if (ctx->pc != 0x2CC488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC488u; }
        if (ctx->pc != 0x2CC488u) { return; }
    }
    ctx->pc = 0x2CC488u;
label_2cc488:
    // 0x2cc488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc48c:
    // 0x2cc48c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2cc48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2cc490:
    // 0x2cc490: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2cc490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cc494:
    // 0x2cc494: 0xc0b1ed4  jal         func_2C7B50
label_2cc498:
    if (ctx->pc == 0x2CC498u) {
        ctx->pc = 0x2CC498u;
            // 0x2cc498: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2CC49Cu;
        goto label_2cc49c;
    }
    ctx->pc = 0x2CC494u;
    SET_GPR_U32(ctx, 31, 0x2CC49Cu);
    ctx->pc = 0x2CC498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC494u;
            // 0x2cc498: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC49Cu; }
        if (ctx->pc != 0x2CC49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC49Cu; }
        if (ctx->pc != 0x2CC49Cu) { return; }
    }
    ctx->pc = 0x2CC49Cu;
label_2cc49c:
    // 0x2cc49c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cc49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cc4a0:
    // 0x2cc4a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4a4:
    // 0x2cc4a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cc4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4a8:
    // 0x2cc4a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cc4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4ac:
    // 0x2cc4ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2cc4b0:
    // 0x2cc4b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2cc4b4:
    if (ctx->pc == 0x2CC4B4u) {
        ctx->pc = 0x2CC4B4u;
            // 0x2cc4b4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2CC4B8u;
        goto label_2cc4b8;
    }
    ctx->pc = 0x2CC4B0u;
    {
        const bool branch_taken_0x2cc4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4B0u;
            // 0x2cc4b4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4b0) {
            ctx->pc = 0x2CC4D4u;
            goto label_2cc4d4;
        }
    }
    ctx->pc = 0x2CC4B8u;
label_2cc4b8:
    // 0x2cc4b8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2cc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2cc4bc:
    // 0x2cc4bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2cc4c0:
    // 0x2cc4c0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2cc4c4:
    // 0x2cc4c4: 0xc0b2f98  jal         func_2CBE60
label_2cc4c8:
    if (ctx->pc == 0x2CC4C8u) {
        ctx->pc = 0x2CC4C8u;
            // 0x2cc4c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4CCu;
        goto label_2cc4cc;
    }
    ctx->pc = 0x2CC4C4u;
    SET_GPR_U32(ctx, 31, 0x2CC4CCu);
    ctx->pc = 0x2CC4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4C4u;
            // 0x2cc4c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE60u;
    if (runtime->hasFunction(0x2CBE60u)) {
        auto targetFn = runtime->lookupFunction(0x2CBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4CCu; }
        if (ctx->pc != 0x2CC4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CFragmentFP6CCPolyi_0x2cbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC4CCu; }
        if (ctx->pc != 0x2CC4CCu) { return; }
    }
    ctx->pc = 0x2CC4CCu;
label_2cc4cc:
    // 0x2cc4cc: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x2cc4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_2cc4d0:
    // 0x2cc4d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cc4d4:
    // 0x2cc4d4: 0x0  nop
    ctx->pc = 0x2cc4d4u;
    // NOP
label_2cc4d8:
    // 0x2cc4d8: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2cc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2cc4dc:
    // 0x2cc4dc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2cc4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2cc4e0:
    // 0x2cc4e0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2cc4e4:
    if (ctx->pc == 0x2CC4E4u) {
        ctx->pc = 0x2CC4E8u;
        goto label_2cc4e8;
    }
    ctx->pc = 0x2CC4E0u;
    {
        const bool branch_taken_0x2cc4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4e0) {
            ctx->pc = 0x2CC4B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc4b8;
        }
    }
    ctx->pc = 0x2CC4E8u;
label_2cc4e8:
    // 0x2cc4e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2cc4ec:
    if (ctx->pc == 0x2CC4ECu) {
        ctx->pc = 0x2CC4ECu;
            // 0x2cc4ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2CC4F0u;
        goto label_2cc4f0;
    }
    ctx->pc = 0x2CC4E8u;
    {
        const bool branch_taken_0x2cc4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC4E8u;
            // 0x2cc4ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4e8) {
            ctx->pc = 0x2CC518u;
            goto label_2cc518;
        }
    }
    ctx->pc = 0x2CC4F0u;
label_2cc4f0:
    // 0x2cc4f0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_2cc4f4:
    if (ctx->pc == 0x2CC4F4u) {
        ctx->pc = 0x2CC4F8u;
        goto label_2cc4f8;
    }
    ctx->pc = 0x2CC4F0u;
    {
        const bool branch_taken_0x2cc4f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cc4f0) {
            ctx->pc = 0x2CC514u;
            goto label_2cc514;
        }
    }
    ctx->pc = 0x2CC4F8u;
label_2cc4f8:
    // 0x2cc4f8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2cc4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cc4fc:
    // 0x2cc4fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cc500:
    if (ctx->pc == 0x2CC500u) {
        ctx->pc = 0x2CC504u;
        goto label_2cc504;
    }
    ctx->pc = 0x2CC4FCu;
    {
        const bool branch_taken_0x2cc4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4fc) {
            ctx->pc = 0x2CC514u;
            goto label_2cc514;
        }
    }
    ctx->pc = 0x2CC504u;
label_2cc504:
    // 0x2cc504: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc508:
    // 0x2cc508: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2cc508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2cc50c:
    // 0x2cc50c: 0x320f809  jalr        $t9
label_2cc510:
    if (ctx->pc == 0x2CC510u) {
        ctx->pc = 0x2CC510u;
            // 0x2cc510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC514u;
        goto label_2cc514;
    }
    ctx->pc = 0x2CC50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC514u);
        ctx->pc = 0x2CC510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC50Cu;
            // 0x2cc510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC514u; }
            if (ctx->pc != 0x2CC514u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC514u;
label_2cc514:
    // 0x2cc514: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cc518:
    // 0x2cc518: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2cc51c:
    // 0x2cc51c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2cc51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cc520:
    // 0x2cc520: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x2cc520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
label_2cc524:
    // 0x2cc524: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2cc528:
    if (ctx->pc == 0x2CC528u) {
        ctx->pc = 0x2CC528u;
            // 0x2cc528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC52Cu;
        goto label_2cc52c;
    }
    ctx->pc = 0x2CC524u;
    {
        const bool branch_taken_0x2cc524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC524u;
            // 0x2cc528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc524) {
            ctx->pc = 0x2CC548u;
            goto label_2cc548;
        }
    }
    ctx->pc = 0x2CC52Cu;
label_2cc52c:
    // 0x2cc52c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cc52cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cc530:
    // 0x2cc530: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2cc530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2cc534:
    // 0x2cc534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cc534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cc538:
    // 0x2cc538: 0x0  nop
    ctx->pc = 0x2cc538u;
    // NOP
label_2cc53c:
    // 0x2cc53c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cc53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2cc540:
    // 0x2cc540: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2cc540u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2cc544:
    // 0x2cc544: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cc544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc548:
    // 0x2cc548: 0x10000008  b           . + 4 + (0x8 << 2)
label_2cc54c:
    if (ctx->pc == 0x2CC54Cu) {
        ctx->pc = 0x2CC54Cu;
            // 0x2cc54c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC550u;
        goto label_2cc550;
    }
    ctx->pc = 0x2CC548u;
    {
        const bool branch_taken_0x2cc548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC548u;
            // 0x2cc54c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc548) {
            ctx->pc = 0x2CC56Cu;
            goto label_2cc56c;
        }
    }
    ctx->pc = 0x2CC550u;
label_2cc550:
    // 0x2cc550: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_2cc554:
    // 0x2cc554: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2cc554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2cc558:
    // 0x2cc558: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2cc558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2cc55c:
    // 0x2cc55c: 0xc0b2f74  jal         func_2CBDD0
label_2cc560:
    if (ctx->pc == 0x2CC560u) {
        ctx->pc = 0x2CC560u;
            // 0x2cc560: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2CC564u;
        goto label_2cc564;
    }
    ctx->pc = 0x2CC55Cu;
    SET_GPR_U32(ctx, 31, 0x2CC564u);
    ctx->pc = 0x2CC560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC55Cu;
            // 0x2cc560: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDD0u;
    if (runtime->hasFunction(0x2CBDD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CBDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC564u; }
        if (ctx->pc != 0x2CC564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CFragmentFPff_0x2cbdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC564u; }
        if (ctx->pc != 0x2CC564u) { return; }
    }
    ctx->pc = 0x2CC564u;
label_2cc564:
    // 0x2cc564: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x2cc564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2cc568:
    // 0x2cc568: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cc568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cc56c:
    // 0x2cc56c: 0x0  nop
    ctx->pc = 0x2cc56cu;
    // NOP
label_2cc570:
    // 0x2cc570: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2cc570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2cc574:
    // 0x2cc574: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2cc574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2cc578:
    // 0x2cc578: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2cc57c:
    if (ctx->pc == 0x2CC57Cu) {
        ctx->pc = 0x2CC580u;
        goto label_2cc580;
    }
    ctx->pc = 0x2CC578u;
    {
        const bool branch_taken_0x2cc578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc578) {
            ctx->pc = 0x2CC550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc550;
        }
    }
    ctx->pc = 0x2CC580u;
label_2cc580:
    // 0x2cc580: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cc580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc584:
    // 0x2cc584: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cc584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cc588:
    // 0x2cc588: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cc588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cc58c:
    // 0x2cc58c: 0x3401a080  ori         $at, $zero, 0xA080
    ctx->pc = 0x2cc58cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41088);
label_2cc590:
    // 0x2cc590: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cc590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cc594:
    // 0x2cc594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cc594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc598:
    // 0x2cc598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cc598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc59c:
    // 0x2cc59c: 0x3e00008  jr          $ra
label_2cc5a0:
    if (ctx->pc == 0x2CC5A0u) {
        ctx->pc = 0x2CC5A0u;
            // 0x2cc5a0: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2CC5A4u;
        goto label_fallthrough_0x2cc59c;
    }
    ctx->pc = 0x2CC59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC59Cu;
            // 0x2cc5a0: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cc59c:
    ctx->pc = 0x2CC5A4u;
}
