#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_CAMERA__FP12RS_STACKDATAi
// Address: 0x265440 - 0x265894
void ps2__RESET_CAMERA__FP12RS_STACKDATAi_0x265440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_CAMERA__FP12RS_STACKDATAi_0x265440");
#endif

    switch (ctx->pc) {
        case 0x265440u: goto label_265440;
        case 0x265444u: goto label_265444;
        case 0x265448u: goto label_265448;
        case 0x26544cu: goto label_26544c;
        case 0x265450u: goto label_265450;
        case 0x265454u: goto label_265454;
        case 0x265458u: goto label_265458;
        case 0x26545cu: goto label_26545c;
        case 0x265460u: goto label_265460;
        case 0x265464u: goto label_265464;
        case 0x265468u: goto label_265468;
        case 0x26546cu: goto label_26546c;
        case 0x265470u: goto label_265470;
        case 0x265474u: goto label_265474;
        case 0x265478u: goto label_265478;
        case 0x26547cu: goto label_26547c;
        case 0x265480u: goto label_265480;
        case 0x265484u: goto label_265484;
        case 0x265488u: goto label_265488;
        case 0x26548cu: goto label_26548c;
        case 0x265490u: goto label_265490;
        case 0x265494u: goto label_265494;
        case 0x265498u: goto label_265498;
        case 0x26549cu: goto label_26549c;
        case 0x2654a0u: goto label_2654a0;
        case 0x2654a4u: goto label_2654a4;
        case 0x2654a8u: goto label_2654a8;
        case 0x2654acu: goto label_2654ac;
        case 0x2654b0u: goto label_2654b0;
        case 0x2654b4u: goto label_2654b4;
        case 0x2654b8u: goto label_2654b8;
        case 0x2654bcu: goto label_2654bc;
        case 0x2654c0u: goto label_2654c0;
        case 0x2654c4u: goto label_2654c4;
        case 0x2654c8u: goto label_2654c8;
        case 0x2654ccu: goto label_2654cc;
        case 0x2654d0u: goto label_2654d0;
        case 0x2654d4u: goto label_2654d4;
        case 0x2654d8u: goto label_2654d8;
        case 0x2654dcu: goto label_2654dc;
        case 0x2654e0u: goto label_2654e0;
        case 0x2654e4u: goto label_2654e4;
        case 0x2654e8u: goto label_2654e8;
        case 0x2654ecu: goto label_2654ec;
        case 0x2654f0u: goto label_2654f0;
        case 0x2654f4u: goto label_2654f4;
        case 0x2654f8u: goto label_2654f8;
        case 0x2654fcu: goto label_2654fc;
        case 0x265500u: goto label_265500;
        case 0x265504u: goto label_265504;
        case 0x265508u: goto label_265508;
        case 0x26550cu: goto label_26550c;
        case 0x265510u: goto label_265510;
        case 0x265514u: goto label_265514;
        case 0x265518u: goto label_265518;
        case 0x26551cu: goto label_26551c;
        case 0x265520u: goto label_265520;
        case 0x265524u: goto label_265524;
        case 0x265528u: goto label_265528;
        case 0x26552cu: goto label_26552c;
        case 0x265530u: goto label_265530;
        case 0x265534u: goto label_265534;
        case 0x265538u: goto label_265538;
        case 0x26553cu: goto label_26553c;
        case 0x265540u: goto label_265540;
        case 0x265544u: goto label_265544;
        case 0x265548u: goto label_265548;
        case 0x26554cu: goto label_26554c;
        case 0x265550u: goto label_265550;
        case 0x265554u: goto label_265554;
        case 0x265558u: goto label_265558;
        case 0x26555cu: goto label_26555c;
        case 0x265560u: goto label_265560;
        case 0x265564u: goto label_265564;
        case 0x265568u: goto label_265568;
        case 0x26556cu: goto label_26556c;
        case 0x265570u: goto label_265570;
        case 0x265574u: goto label_265574;
        case 0x265578u: goto label_265578;
        case 0x26557cu: goto label_26557c;
        case 0x265580u: goto label_265580;
        case 0x265584u: goto label_265584;
        case 0x265588u: goto label_265588;
        case 0x26558cu: goto label_26558c;
        case 0x265590u: goto label_265590;
        case 0x265594u: goto label_265594;
        case 0x265598u: goto label_265598;
        case 0x26559cu: goto label_26559c;
        case 0x2655a0u: goto label_2655a0;
        case 0x2655a4u: goto label_2655a4;
        case 0x2655a8u: goto label_2655a8;
        case 0x2655acu: goto label_2655ac;
        case 0x2655b0u: goto label_2655b0;
        case 0x2655b4u: goto label_2655b4;
        case 0x2655b8u: goto label_2655b8;
        case 0x2655bcu: goto label_2655bc;
        case 0x2655c0u: goto label_2655c0;
        case 0x2655c4u: goto label_2655c4;
        case 0x2655c8u: goto label_2655c8;
        case 0x2655ccu: goto label_2655cc;
        case 0x2655d0u: goto label_2655d0;
        case 0x2655d4u: goto label_2655d4;
        case 0x2655d8u: goto label_2655d8;
        case 0x2655dcu: goto label_2655dc;
        case 0x2655e0u: goto label_2655e0;
        case 0x2655e4u: goto label_2655e4;
        case 0x2655e8u: goto label_2655e8;
        case 0x2655ecu: goto label_2655ec;
        case 0x2655f0u: goto label_2655f0;
        case 0x2655f4u: goto label_2655f4;
        case 0x2655f8u: goto label_2655f8;
        case 0x2655fcu: goto label_2655fc;
        case 0x265600u: goto label_265600;
        case 0x265604u: goto label_265604;
        case 0x265608u: goto label_265608;
        case 0x26560cu: goto label_26560c;
        case 0x265610u: goto label_265610;
        case 0x265614u: goto label_265614;
        case 0x265618u: goto label_265618;
        case 0x26561cu: goto label_26561c;
        case 0x265620u: goto label_265620;
        case 0x265624u: goto label_265624;
        case 0x265628u: goto label_265628;
        case 0x26562cu: goto label_26562c;
        case 0x265630u: goto label_265630;
        case 0x265634u: goto label_265634;
        case 0x265638u: goto label_265638;
        case 0x26563cu: goto label_26563c;
        case 0x265640u: goto label_265640;
        case 0x265644u: goto label_265644;
        case 0x265648u: goto label_265648;
        case 0x26564cu: goto label_26564c;
        case 0x265650u: goto label_265650;
        case 0x265654u: goto label_265654;
        case 0x265658u: goto label_265658;
        case 0x26565cu: goto label_26565c;
        case 0x265660u: goto label_265660;
        case 0x265664u: goto label_265664;
        case 0x265668u: goto label_265668;
        case 0x26566cu: goto label_26566c;
        case 0x265670u: goto label_265670;
        case 0x265674u: goto label_265674;
        case 0x265678u: goto label_265678;
        case 0x26567cu: goto label_26567c;
        case 0x265680u: goto label_265680;
        case 0x265684u: goto label_265684;
        case 0x265688u: goto label_265688;
        case 0x26568cu: goto label_26568c;
        case 0x265690u: goto label_265690;
        case 0x265694u: goto label_265694;
        case 0x265698u: goto label_265698;
        case 0x26569cu: goto label_26569c;
        case 0x2656a0u: goto label_2656a0;
        case 0x2656a4u: goto label_2656a4;
        case 0x2656a8u: goto label_2656a8;
        case 0x2656acu: goto label_2656ac;
        case 0x2656b0u: goto label_2656b0;
        case 0x2656b4u: goto label_2656b4;
        case 0x2656b8u: goto label_2656b8;
        case 0x2656bcu: goto label_2656bc;
        case 0x2656c0u: goto label_2656c0;
        case 0x2656c4u: goto label_2656c4;
        case 0x2656c8u: goto label_2656c8;
        case 0x2656ccu: goto label_2656cc;
        case 0x2656d0u: goto label_2656d0;
        case 0x2656d4u: goto label_2656d4;
        case 0x2656d8u: goto label_2656d8;
        case 0x2656dcu: goto label_2656dc;
        case 0x2656e0u: goto label_2656e0;
        case 0x2656e4u: goto label_2656e4;
        case 0x2656e8u: goto label_2656e8;
        case 0x2656ecu: goto label_2656ec;
        case 0x2656f0u: goto label_2656f0;
        case 0x2656f4u: goto label_2656f4;
        case 0x2656f8u: goto label_2656f8;
        case 0x2656fcu: goto label_2656fc;
        case 0x265700u: goto label_265700;
        case 0x265704u: goto label_265704;
        case 0x265708u: goto label_265708;
        case 0x26570cu: goto label_26570c;
        case 0x265710u: goto label_265710;
        case 0x265714u: goto label_265714;
        case 0x265718u: goto label_265718;
        case 0x26571cu: goto label_26571c;
        case 0x265720u: goto label_265720;
        case 0x265724u: goto label_265724;
        case 0x265728u: goto label_265728;
        case 0x26572cu: goto label_26572c;
        case 0x265730u: goto label_265730;
        case 0x265734u: goto label_265734;
        case 0x265738u: goto label_265738;
        case 0x26573cu: goto label_26573c;
        case 0x265740u: goto label_265740;
        case 0x265744u: goto label_265744;
        case 0x265748u: goto label_265748;
        case 0x26574cu: goto label_26574c;
        case 0x265750u: goto label_265750;
        case 0x265754u: goto label_265754;
        case 0x265758u: goto label_265758;
        case 0x26575cu: goto label_26575c;
        case 0x265760u: goto label_265760;
        case 0x265764u: goto label_265764;
        case 0x265768u: goto label_265768;
        case 0x26576cu: goto label_26576c;
        case 0x265770u: goto label_265770;
        case 0x265774u: goto label_265774;
        case 0x265778u: goto label_265778;
        case 0x26577cu: goto label_26577c;
        case 0x265780u: goto label_265780;
        case 0x265784u: goto label_265784;
        case 0x265788u: goto label_265788;
        case 0x26578cu: goto label_26578c;
        case 0x265790u: goto label_265790;
        case 0x265794u: goto label_265794;
        case 0x265798u: goto label_265798;
        case 0x26579cu: goto label_26579c;
        case 0x2657a0u: goto label_2657a0;
        case 0x2657a4u: goto label_2657a4;
        case 0x2657a8u: goto label_2657a8;
        case 0x2657acu: goto label_2657ac;
        case 0x2657b0u: goto label_2657b0;
        case 0x2657b4u: goto label_2657b4;
        case 0x2657b8u: goto label_2657b8;
        case 0x2657bcu: goto label_2657bc;
        case 0x2657c0u: goto label_2657c0;
        case 0x2657c4u: goto label_2657c4;
        case 0x2657c8u: goto label_2657c8;
        case 0x2657ccu: goto label_2657cc;
        case 0x2657d0u: goto label_2657d0;
        case 0x2657d4u: goto label_2657d4;
        case 0x2657d8u: goto label_2657d8;
        case 0x2657dcu: goto label_2657dc;
        case 0x2657e0u: goto label_2657e0;
        case 0x2657e4u: goto label_2657e4;
        case 0x2657e8u: goto label_2657e8;
        case 0x2657ecu: goto label_2657ec;
        case 0x2657f0u: goto label_2657f0;
        case 0x2657f4u: goto label_2657f4;
        case 0x2657f8u: goto label_2657f8;
        case 0x2657fcu: goto label_2657fc;
        case 0x265800u: goto label_265800;
        case 0x265804u: goto label_265804;
        case 0x265808u: goto label_265808;
        case 0x26580cu: goto label_26580c;
        case 0x265810u: goto label_265810;
        case 0x265814u: goto label_265814;
        case 0x265818u: goto label_265818;
        case 0x26581cu: goto label_26581c;
        case 0x265820u: goto label_265820;
        case 0x265824u: goto label_265824;
        case 0x265828u: goto label_265828;
        case 0x26582cu: goto label_26582c;
        case 0x265830u: goto label_265830;
        case 0x265834u: goto label_265834;
        case 0x265838u: goto label_265838;
        case 0x26583cu: goto label_26583c;
        case 0x265840u: goto label_265840;
        case 0x265844u: goto label_265844;
        case 0x265848u: goto label_265848;
        case 0x26584cu: goto label_26584c;
        case 0x265850u: goto label_265850;
        case 0x265854u: goto label_265854;
        case 0x265858u: goto label_265858;
        case 0x26585cu: goto label_26585c;
        case 0x265860u: goto label_265860;
        case 0x265864u: goto label_265864;
        case 0x265868u: goto label_265868;
        case 0x26586cu: goto label_26586c;
        case 0x265870u: goto label_265870;
        case 0x265874u: goto label_265874;
        case 0x265878u: goto label_265878;
        case 0x26587cu: goto label_26587c;
        case 0x265880u: goto label_265880;
        case 0x265884u: goto label_265884;
        case 0x265888u: goto label_265888;
        case 0x26588cu: goto label_26588c;
        case 0x265890u: goto label_265890;
        default: break;
    }

    ctx->pc = 0x265440u;

label_265440:
    // 0x265440: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x265440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_265444:
    // 0x265444: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x265444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_265448:
    // 0x265448: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x265448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_26544c:
    // 0x26544c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_265450:
    // 0x265450: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x265450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_265454:
    // 0x265454: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x265454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_265458:
    // 0x265458: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x265458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26545c:
    // 0x26545c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x26545cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_265460:
    // 0x265460: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x265460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_265464:
    // 0x265464: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x265464u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_265468:
    // 0x265468: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x265468u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_26546c:
    // 0x26546c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x26546cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_265470:
    // 0x265470: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x265470u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_265474:
    // 0x265474: 0xc097e18  jal         func_25F860
label_265478:
    if (ctx->pc == 0x265478u) {
        ctx->pc = 0x265478u;
            // 0x265478: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x26547Cu;
        goto label_26547c;
    }
    ctx->pc = 0x265474u;
    SET_GPR_U32(ctx, 31, 0x26547Cu);
    ctx->pc = 0x265478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265474u;
            // 0x265478: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26547Cu; }
        if (ctx->pc != 0x26547Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26547Cu; }
        if (ctx->pc != 0x26547Cu) { return; }
    }
    ctx->pc = 0x26547Cu;
label_26547c:
    // 0x26547c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26547cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_265480:
    // 0x265480: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x265480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_265484:
    // 0x265484: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x265484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265488:
    // 0x265488: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_26548c:
    if (ctx->pc == 0x26548Cu) {
        ctx->pc = 0x26548Cu;
            // 0x26548c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x265490u;
        goto label_265490;
    }
    ctx->pc = 0x265488u;
    {
        const bool branch_taken_0x265488 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265488u;
            // 0x26548c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265488) {
            ctx->pc = 0x2654A0u;
            goto label_2654a0;
        }
    }
    ctx->pc = 0x265490u;
label_265490:
    // 0x265490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265494:
    // 0x265494: 0xc097e28  jal         func_25F8A0
label_265498:
    if (ctx->pc == 0x265498u) {
        ctx->pc = 0x265498u;
            // 0x265498: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26549Cu;
        goto label_26549c;
    }
    ctx->pc = 0x265494u;
    SET_GPR_U32(ctx, 31, 0x26549Cu);
    ctx->pc = 0x265498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265494u;
            // 0x265498: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26549Cu; }
        if (ctx->pc != 0x26549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26549Cu; }
        if (ctx->pc != 0x26549Cu) { return; }
    }
    ctx->pc = 0x26549Cu;
label_26549c:
    // 0x26549c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26549cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2654a0:
    // 0x2654a0: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2654a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2654a4:
    // 0x2654a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2654a8:
    if (ctx->pc == 0x2654A8u) {
        ctx->pc = 0x2654A8u;
            // 0x2654a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2654ACu;
        goto label_2654ac;
    }
    ctx->pc = 0x2654A4u;
    {
        const bool branch_taken_0x2654a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2654A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654A4u;
            // 0x2654a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654a4) {
            ctx->pc = 0x2654B8u;
            goto label_2654b8;
        }
    }
    ctx->pc = 0x2654ACu;
label_2654ac:
    // 0x2654ac: 0xc097e28  jal         func_25F8A0
label_2654b0:
    if (ctx->pc == 0x2654B0u) {
        ctx->pc = 0x2654B4u;
        goto label_2654b4;
    }
    ctx->pc = 0x2654ACu;
    SET_GPR_U32(ctx, 31, 0x2654B4u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654B4u; }
        if (ctx->pc != 0x2654B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654B4u; }
        if (ctx->pc != 0x2654B4u) { return; }
    }
    ctx->pc = 0x2654B4u;
label_2654b4:
    // 0x2654b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2654b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2654b8:
    // 0x2654b8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_2654bc:
    if (ctx->pc == 0x2654BCu) {
        ctx->pc = 0x2654BCu;
            // 0x2654bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2654C0u;
        goto label_2654c0;
    }
    ctx->pc = 0x2654B8u;
    {
        const bool branch_taken_0x2654b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2654BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654B8u;
            // 0x2654bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654b8) {
            ctx->pc = 0x2654D0u;
            goto label_2654d0;
        }
    }
    ctx->pc = 0x2654C0u;
label_2654c0:
    // 0x2654c0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2654c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2654c4:
    // 0x2654c4: 0xc0a0e30  jal         func_2838C0
label_2654c8:
    if (ctx->pc == 0x2654C8u) {
        ctx->pc = 0x2654C8u;
            // 0x2654c8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x2654CCu;
        goto label_2654cc;
    }
    ctx->pc = 0x2654C4u;
    SET_GPR_U32(ctx, 31, 0x2654CCu);
    ctx->pc = 0x2654C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2654C4u;
            // 0x2654c8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654CCu; }
        if (ctx->pc != 0x2654CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654CCu; }
        if (ctx->pc != 0x2654CCu) { return; }
    }
    ctx->pc = 0x2654CCu;
label_2654cc:
    // 0x2654cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2654ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2654d0:
    // 0x2654d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2654d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2654d4:
    // 0x2654d4: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_2654d8:
    if (ctx->pc == 0x2654D8u) {
        ctx->pc = 0x2654DCu;
        goto label_2654dc;
    }
    ctx->pc = 0x2654D4u;
    {
        const bool branch_taken_0x2654d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2654d4) {
            ctx->pc = 0x2654ECu;
            goto label_2654ec;
        }
    }
    ctx->pc = 0x2654DCu;
label_2654dc:
    // 0x2654dc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2654dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2654e0:
    // 0x2654e0: 0xc0a0e30  jal         func_2838C0
label_2654e4:
    if (ctx->pc == 0x2654E4u) {
        ctx->pc = 0x2654E4u;
            // 0x2654e4: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->pc = 0x2654E8u;
        goto label_2654e8;
    }
    ctx->pc = 0x2654E0u;
    SET_GPR_U32(ctx, 31, 0x2654E8u);
    ctx->pc = 0x2654E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2654E0u;
            // 0x2654e4: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654E8u; }
        if (ctx->pc != 0x2654E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2654E8u; }
        if (ctx->pc != 0x2654E8u) { return; }
    }
    ctx->pc = 0x2654E8u;
label_2654e8:
    // 0x2654e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2654e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2654ec:
    // 0x2654ec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2654f0:
    if (ctx->pc == 0x2654F0u) {
        ctx->pc = 0x2654F0u;
            // 0x2654f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2654F4u;
        goto label_2654f4;
    }
    ctx->pc = 0x2654ECu;
    {
        const bool branch_taken_0x2654ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2654F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654ECu;
            // 0x2654f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654ec) {
            ctx->pc = 0x2654FCu;
            goto label_2654fc;
        }
    }
    ctx->pc = 0x2654F4u;
label_2654f4:
    // 0x2654f4: 0x100000db  b           . + 4 + (0xDB << 2)
label_2654f8:
    if (ctx->pc == 0x2654F8u) {
        ctx->pc = 0x2654F8u;
            // 0x2654f8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2654FCu;
        goto label_2654fc;
    }
    ctx->pc = 0x2654F4u;
    {
        const bool branch_taken_0x2654f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2654F4u;
            // 0x2654f8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654f4) {
            ctx->pc = 0x265864u;
            goto label_265864;
        }
    }
    ctx->pc = 0x2654FCu;
label_2654fc:
    // 0x2654fc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2654fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_265500:
    // 0x265500: 0xc0a0e30  jal         func_2838C0
label_265504:
    if (ctx->pc == 0x265504u) {
        ctx->pc = 0x265504u;
            // 0x265504: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->pc = 0x265508u;
        goto label_265508;
    }
    ctx->pc = 0x265500u;
    SET_GPR_U32(ctx, 31, 0x265508u);
    ctx->pc = 0x265504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265500u;
            // 0x265504: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265508u; }
        if (ctx->pc != 0x265508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265508u; }
        if (ctx->pc != 0x265508u) { return; }
    }
    ctx->pc = 0x265508u;
label_265508:
    // 0x265508: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x265508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26550c:
    // 0x26550c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_265510:
    if (ctx->pc == 0x265510u) {
        ctx->pc = 0x265510u;
            // 0x265510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265514u;
        goto label_265514;
    }
    ctx->pc = 0x26550Cu;
    {
        const bool branch_taken_0x26550c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x265510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26550Cu;
            // 0x265510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26550c) {
            ctx->pc = 0x26551Cu;
            goto label_26551c;
        }
    }
    ctx->pc = 0x265514u;
label_265514:
    // 0x265514: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_265518:
    if (ctx->pc == 0x265518u) {
        ctx->pc = 0x265518u;
            // 0x265518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26551Cu;
        goto label_26551c;
    }
    ctx->pc = 0x265514u;
    {
        const bool branch_taken_0x265514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265514u;
            // 0x265518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265514) {
            ctx->pc = 0x265860u;
            goto label_265860;
        }
    }
    ctx->pc = 0x26551Cu;
label_26551c:
    // 0x26551c: 0xc04c69c  jal         func_131A70
label_265520:
    if (ctx->pc == 0x265520u) {
        ctx->pc = 0x265520u;
            // 0x265520: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x265524u;
        goto label_265524;
    }
    ctx->pc = 0x26551Cu;
    SET_GPR_U32(ctx, 31, 0x265524u);
    ctx->pc = 0x265520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26551Cu;
            // 0x265520: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A70u;
    if (runtime->hasFunction(0x131A70u)) {
        auto targetFn = runtime->lookupFunction(0x131A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265524u; }
        if (ctx->pc != 0x265524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollow__15mgCCameraFollowFPf_0x131a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265524u; }
        if (ctx->pc != 0x265524u) { return; }
    }
    ctx->pc = 0x265524u;
label_265524:
    // 0x265524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x265524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_265528:
    // 0x265528: 0xc04c6a0  jal         func_131A80
label_26552c:
    if (ctx->pc == 0x26552Cu) {
        ctx->pc = 0x26552Cu;
            // 0x26552c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x265530u;
        goto label_265530;
    }
    ctx->pc = 0x265528u;
    SET_GPR_U32(ctx, 31, 0x265530u);
    ctx->pc = 0x26552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265528u;
            // 0x26552c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A80u;
    if (runtime->hasFunction(0x131A80u)) {
        auto targetFn = runtime->lookupFunction(0x131A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265530u; }
        if (ctx->pc != 0x265530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowOffset__15mgCCameraFollowFPf_0x131a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265530u; }
        if (ctx->pc != 0x265530u) { return; }
    }
    ctx->pc = 0x265530u;
label_265530:
    // 0x265530: 0x16400075  bnez        $s2, . + 4 + (0x75 << 2)
label_265534:
    if (ctx->pc == 0x265534u) {
        ctx->pc = 0x265534u;
            // 0x265534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x265538u;
        goto label_265538;
    }
    ctx->pc = 0x265530u;
    {
        const bool branch_taken_0x265530 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x265534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265530u;
            // 0x265534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265530) {
            ctx->pc = 0x265708u;
            goto label_265708;
        }
    }
    ctx->pc = 0x265538u;
label_265538:
    // 0x265538: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_26553c:
    // 0x26553c: 0xc0a0ed8  jal         func_283B60
label_265540:
    if (ctx->pc == 0x265540u) {
        ctx->pc = 0x265540u;
            // 0x265540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265544u;
        goto label_265544;
    }
    ctx->pc = 0x26553Cu;
    SET_GPR_U32(ctx, 31, 0x265544u);
    ctx->pc = 0x265540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26553Cu;
            // 0x265540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265544u; }
        if (ctx->pc != 0x265544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265544u; }
        if (ctx->pc != 0x265544u) { return; }
    }
    ctx->pc = 0x265544u;
label_265544:
    // 0x265544: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_265548:
    if (ctx->pc == 0x265548u) {
        ctx->pc = 0x26554Cu;
        goto label_26554c;
    }
    ctx->pc = 0x265544u;
    {
        const bool branch_taken_0x265544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265544) {
            ctx->pc = 0x265554u;
            goto label_265554;
        }
    }
    ctx->pc = 0x26554Cu;
label_26554c:
    // 0x26554c: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_265550:
    if (ctx->pc == 0x265550u) {
        ctx->pc = 0x265550u;
            // 0x265550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265554u;
        goto label_265554;
    }
    ctx->pc = 0x26554Cu;
    {
        const bool branch_taken_0x26554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26554Cu;
            // 0x265550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26554c) {
            ctx->pc = 0x265860u;
            goto label_265860;
        }
    }
    ctx->pc = 0x265554u;
label_265554:
    // 0x265554: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x265554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_265558:
    // 0x265558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x265558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26555c:
    // 0x26555c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_265560:
    // 0x265560: 0x320f809  jalr        $t9
label_265564:
    if (ctx->pc == 0x265564u) {
        ctx->pc = 0x265564u;
            // 0x265564: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x265568u;
        goto label_265568;
    }
    ctx->pc = 0x265560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x265568u);
        ctx->pc = 0x265564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265560u;
            // 0x265564: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x265568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x265568u; }
            if (ctx->pc != 0x265568u) { return; }
        }
        }
    }
    ctx->pc = 0x265568u;
label_265568:
    // 0x265568: 0xc0975f8  jal         func_25D7E0
label_26556c:
    if (ctx->pc == 0x26556Cu) {
        ctx->pc = 0x26556Cu;
            // 0x26556c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265570u;
        goto label_265570;
    }
    ctx->pc = 0x265568u;
    SET_GPR_U32(ctx, 31, 0x265570u);
    ctx->pc = 0x26556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265568u;
            // 0x26556c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D7E0u;
    if (runtime->hasFunction(0x25D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x25D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265570u; }
        if (ctx->pc != 0x265570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCamWorldCoord__FP9mgCCamera_0x25d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265570u; }
        if (ctx->pc != 0x265570u) { return; }
    }
    ctx->pc = 0x265570u;
label_265570:
    // 0x265570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265574:
    // 0x265574: 0xc04c574  jal         func_1315D0
label_265578:
    if (ctx->pc == 0x265578u) {
        ctx->pc = 0x265578u;
            // 0x265578: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x26557Cu;
        goto label_26557c;
    }
    ctx->pc = 0x265574u;
    SET_GPR_U32(ctx, 31, 0x26557Cu);
    ctx->pc = 0x265578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265574u;
            // 0x265578: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26557Cu; }
        if (ctx->pc != 0x26557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26557Cu; }
        if (ctx->pc != 0x26557Cu) { return; }
    }
    ctx->pc = 0x26557Cu;
label_26557c:
    // 0x26557c: 0x27b30098  addiu       $s3, $sp, 0x98
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_265580:
    // 0x265580: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_265584:
    // 0x265584: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x265584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_265588:
    // 0x265588: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x265588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26558c:
    // 0x26558c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x26558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265590:
    // 0x265590: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x265590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265594:
    // 0x265594: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x265594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265598:
    // 0x265598: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x265598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26559c:
    // 0x26559c: 0x46042d81  sub.s       $f22, $f5, $f4
    ctx->pc = 0x26559cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2655a0:
    // 0x2655a0: 0x46000e01  sub.s       $f24, $f1, $f0
    ctx->pc = 0x2655a0u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2655a4:
    // 0x2655a4: 0x4616b01a  mula.s      $f22, $f22
    ctx->pc = 0x2655a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_2655a8:
    // 0x2655a8: 0x46021dc1  sub.s       $f23, $f3, $f2
    ctx->pc = 0x2655a8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2655ac:
    // 0x2655ac: 0xc047cc0  jal         func_11F300
label_2655b0:
    if (ctx->pc == 0x2655B0u) {
        ctx->pc = 0x2655B0u;
            // 0x2655b0: 0x4618c31c  madd.s      $f12, $f24, $f24 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[24]));
        ctx->pc = 0x2655B4u;
        goto label_2655b4;
    }
    ctx->pc = 0x2655ACu;
    SET_GPR_U32(ctx, 31, 0x2655B4u);
    ctx->pc = 0x2655B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2655ACu;
            // 0x2655b0: 0x4618c31c  madd.s      $f12, $f24, $f24 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[24]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2655B4u; }
        if (ctx->pc != 0x2655B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2655B4u; }
        if (ctx->pc != 0x2655B4u) { return; }
    }
    ctx->pc = 0x2655B4u;
label_2655b4:
    // 0x2655b4: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2655b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2655b8:
    // 0x2655b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2655bc:
    if (ctx->pc == 0x2655BCu) {
        ctx->pc = 0x2655BCu;
            // 0x2655bc: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2655C0u;
        goto label_2655c0;
    }
    ctx->pc = 0x2655B8u;
    {
        const bool branch_taken_0x2655b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2655B8u;
            // 0x2655bc: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655b8) {
            ctx->pc = 0x2655C8u;
            goto label_2655c8;
        }
    }
    ctx->pc = 0x2655C0u;
label_2655c0:
    // 0x2655c0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2655c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2655c4:
    // 0x2655c4: 0x4600bd41  sub.s       $f21, $f23, $f0
    ctx->pc = 0x2655c4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_2655c8:
    // 0x2655c8: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x2655c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2655cc:
    // 0x2655cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2655d0:
    if (ctx->pc == 0x2655D0u) {
        ctx->pc = 0x2655D0u;
            // 0x2655d0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x2655D4u;
        goto label_2655d4;
    }
    ctx->pc = 0x2655CCu;
    {
        const bool branch_taken_0x2655cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2655CCu;
            // 0x2655d0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655cc) {
            ctx->pc = 0x2655E0u;
            goto label_2655e0;
        }
    }
    ctx->pc = 0x2655D4u;
label_2655d4:
    // 0x2655d4: 0xc047c76  jal         func_11F1D8
label_2655d8:
    if (ctx->pc == 0x2655D8u) {
        ctx->pc = 0x2655D8u;
            // 0x2655d8: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x2655DCu;
        goto label_2655dc;
    }
    ctx->pc = 0x2655D4u;
    SET_GPR_U32(ctx, 31, 0x2655DCu);
    ctx->pc = 0x2655D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2655D4u;
            // 0x2655d8: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2655DCu; }
        if (ctx->pc != 0x2655DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2655DCu; }
        if (ctx->pc != 0x2655DCu) { return; }
    }
    ctx->pc = 0x2655DCu;
label_2655dc:
    // 0x2655dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2655dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2655e0:
    // 0x2655e0: 0xc6570000  lwc1        $f23, 0x0($s2)
    ctx->pc = 0x2655e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2655e4:
    // 0x2655e4: 0xc6780000  lwc1        $f24, 0x0($s3)
    ctx->pc = 0x2655e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2655e8:
    // 0x2655e8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2655e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2655ec:
    // 0x2655ec: 0xc04c668  jal         func_1319A0
label_2655f0:
    if (ctx->pc == 0x2655F0u) {
        ctx->pc = 0x2655F0u;
            // 0x2655f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2655F4u;
        goto label_2655f4;
    }
    ctx->pc = 0x2655ECu;
    SET_GPR_U32(ctx, 31, 0x2655F4u);
    ctx->pc = 0x2655F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2655ECu;
            // 0x2655f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2655F4u; }
        if (ctx->pc != 0x2655F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2655F4u; }
        if (ctx->pc != 0x2655F4u) { return; }
    }
    ctx->pc = 0x2655F4u;
label_2655f4:
    // 0x2655f4: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x2655f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2655f8:
    // 0x2655f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2655f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2655fc:
    // 0x2655fc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2655fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_265600:
    // 0x265600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265604:
    // 0x265604: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x265604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_265608:
    // 0x265608: 0x320f809  jalr        $t9
label_26560c:
    if (ctx->pc == 0x26560Cu) {
        ctx->pc = 0x26560Cu;
            // 0x26560c: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x265610u;
        goto label_265610;
    }
    ctx->pc = 0x265608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x265610u);
        ctx->pc = 0x26560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265608u;
            // 0x26560c: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x265610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x265610u; }
            if (ctx->pc != 0x265610u) { return; }
        }
        }
    }
    ctx->pc = 0x265610u;
label_265610:
    // 0x265610: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x265610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_265614:
    // 0x265614: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x265614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_265618:
    // 0x265618: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x265618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_26561c:
    // 0x26561c: 0xc04c698  jal         func_131A60
label_265620:
    if (ctx->pc == 0x265620u) {
        ctx->pc = 0x265620u;
            // 0x265620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265624u;
        goto label_265624;
    }
    ctx->pc = 0x26561Cu;
    SET_GPR_U32(ctx, 31, 0x265624u);
    ctx->pc = 0x265620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26561Cu;
            // 0x265620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265624u; }
        if (ctx->pc != 0x265624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265624u; }
        if (ctx->pc != 0x265624u) { return; }
    }
    ctx->pc = 0x265624u;
label_265624:
    // 0x265624: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x265624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_265628:
    // 0x265628: 0xc04c680  jal         func_131A00
label_26562c:
    if (ctx->pc == 0x26562Cu) {
        ctx->pc = 0x26562Cu;
            // 0x26562c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265630u;
        goto label_265630;
    }
    ctx->pc = 0x265628u;
    SET_GPR_U32(ctx, 31, 0x265630u);
    ctx->pc = 0x26562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265628u;
            // 0x26562c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265630u; }
        if (ctx->pc != 0x265630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265630u; }
        if (ctx->pc != 0x265630u) { return; }
    }
    ctx->pc = 0x265630u;
label_265630:
    // 0x265630: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x265630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_265634:
    // 0x265634: 0xc0bb20c  jal         func_2EC830
label_265638:
    if (ctx->pc == 0x265638u) {
        ctx->pc = 0x265638u;
            // 0x265638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26563Cu;
        goto label_26563c;
    }
    ctx->pc = 0x265634u;
    SET_GPR_U32(ctx, 31, 0x26563Cu);
    ctx->pc = 0x265638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265634u;
            // 0x265638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26563Cu; }
        if (ctx->pc != 0x26563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26563Cu; }
        if (ctx->pc != 0x26563Cu) { return; }
    }
    ctx->pc = 0x26563Cu;
label_26563c:
    // 0x26563c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265640:
    // 0x265640: 0xc04c674  jal         func_1319D0
label_265644:
    if (ctx->pc == 0x265644u) {
        ctx->pc = 0x265644u;
            // 0x265644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x265648u;
        goto label_265648;
    }
    ctx->pc = 0x265640u;
    SET_GPR_U32(ctx, 31, 0x265648u);
    ctx->pc = 0x265644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265640u;
            // 0x265644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319D0u;
    if (runtime->hasFunction(0x1319D0u)) {
        auto targetFn = runtime->lookupFunction(0x1319D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265648u; }
        if (ctx->pc != 0x265648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngleSoon__15mgCCameraFollowFf_0x1319d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265648u; }
        if (ctx->pc != 0x265648u) { return; }
    }
    ctx->pc = 0x265648u;
label_265648:
    // 0x265648: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x265648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_26564c:
    // 0x26564c: 0xc0a0e30  jal         func_2838C0
label_265650:
    if (ctx->pc == 0x265650u) {
        ctx->pc = 0x265650u;
            // 0x265650: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->pc = 0x265654u;
        goto label_265654;
    }
    ctx->pc = 0x26564Cu;
    SET_GPR_U32(ctx, 31, 0x265654u);
    ctx->pc = 0x265650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26564Cu;
            // 0x265650: 0x8c852e58  lw          $a1, 0x2E58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265654u; }
        if (ctx->pc != 0x265654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265654u; }
        if (ctx->pc != 0x265654u) { return; }
    }
    ctx->pc = 0x265654u;
label_265654:
    // 0x265654: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x265654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_265658:
    // 0x265658: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x265658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_26565c:
    // 0x26565c: 0xc0a0e30  jal         func_2838C0
label_265660:
    if (ctx->pc == 0x265660u) {
        ctx->pc = 0x265660u;
            // 0x265660: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265664u;
        goto label_265664;
    }
    ctx->pc = 0x26565Cu;
    SET_GPR_U32(ctx, 31, 0x265664u);
    ctx->pc = 0x265660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26565Cu;
            // 0x265660: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265664u; }
        if (ctx->pc != 0x265664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265664u; }
        if (ctx->pc != 0x265664u) { return; }
    }
    ctx->pc = 0x265664u;
label_265664:
    // 0x265664: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265668:
    // 0x265668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26566c:
    // 0x26566c: 0xc073854  jal         func_1CE150
label_265670:
    if (ctx->pc == 0x265670u) {
        ctx->pc = 0x265670u;
            // 0x265670: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265674u;
        goto label_265674;
    }
    ctx->pc = 0x26566Cu;
    SET_GPR_U32(ctx, 31, 0x265674u);
    ctx->pc = 0x265670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26566Cu;
            // 0x265670: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE150u;
    if (runtime->hasFunction(0x1CE150u)) {
        auto targetFn = runtime->lookupFunction(0x1CE150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265674u; }
        if (ctx->pc != 0x265674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgCCameraFRC9mgCCamera_0x1ce150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265674u; }
        if (ctx->pc != 0x265674u) { return; }
    }
    ctx->pc = 0x265674u;
label_265674:
    // 0x265674: 0xc6230070  lwc1        $f3, 0x70($s1)
    ctx->pc = 0x265674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265678:
    // 0x265678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26567c:
    // 0x26567c: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x26567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265680:
    // 0x265680: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x265680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265684:
    // 0x265684: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x265684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265688:
    // 0x265688: 0xe6030070  swc1        $f3, 0x70($s0)
    ctx->pc = 0x265688u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_26568c:
    // 0x26568c: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x26568cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_265690:
    // 0x265690: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x265690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_265694:
    // 0x265694: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x265694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_265698:
    // 0x265698: 0xc6230080  lwc1        $f3, 0x80($s1)
    ctx->pc = 0x265698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26569c:
    // 0x26569c: 0xc6220084  lwc1        $f2, 0x84($s1)
    ctx->pc = 0x26569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2656a0:
    // 0x2656a0: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x2656a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2656a4:
    // 0x2656a4: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x2656a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2656a8:
    // 0x2656a8: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x2656a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_2656ac:
    // 0x2656ac: 0xe6020084  swc1        $f2, 0x84($s0)
    ctx->pc = 0x2656acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2656b0:
    // 0x2656b0: 0xe6010088  swc1        $f1, 0x88($s0)
    ctx->pc = 0x2656b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_2656b4:
    // 0x2656b4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2656b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_2656b8:
    // 0x2656b8: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x2656b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2656bc:
    // 0x2656bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2656bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_2656c0:
    // 0x2656c0: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x2656c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2656c4:
    // 0x2656c4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2656c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_2656c8:
    // 0x2656c8: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x2656c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2656cc:
    // 0x2656cc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2656ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_2656d0:
    // 0x2656d0: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2656d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2656d4:
    // 0x2656d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2656d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_2656d8:
    // 0x2656d8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x2656d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_2656dc:
    // 0x2656dc: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x2656dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_2656e0:
    // 0x2656e0: 0xc62300b0  lwc1        $f3, 0xB0($s1)
    ctx->pc = 0x2656e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2656e4:
    // 0x2656e4: 0xc62200b4  lwc1        $f2, 0xB4($s1)
    ctx->pc = 0x2656e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2656e8:
    // 0x2656e8: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x2656e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2656ec:
    // 0x2656ec: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x2656ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2656f0:
    // 0x2656f0: 0xe60300b0  swc1        $f3, 0xB0($s0)
    ctx->pc = 0x2656f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_2656f4:
    // 0x2656f4: 0xe60200b4  swc1        $f2, 0xB4($s0)
    ctx->pc = 0x2656f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_2656f8:
    // 0x2656f8: 0xe60100b8  swc1        $f1, 0xB8($s0)
    ctx->pc = 0x2656f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_2656fc:
    // 0x2656fc: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x2656fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_265700:
    // 0x265700: 0x10000057  b           . + 4 + (0x57 << 2)
label_265704:
    if (ctx->pc == 0x265704u) {
        ctx->pc = 0x265704u;
            // 0x265704: 0xaf8097f4  sw          $zero, -0x680C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
        ctx->pc = 0x265708u;
        goto label_265708;
    }
    ctx->pc = 0x265700u;
    {
        const bool branch_taken_0x265700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265700u;
            // 0x265704: 0xaf8097f4  sw          $zero, -0x680C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265700) {
            ctx->pc = 0x265860u;
            goto label_265860;
        }
    }
    ctx->pc = 0x265708u;
label_265708:
    // 0x265708: 0x16420055  bne         $s2, $v0, . + 4 + (0x55 << 2)
label_26570c:
    if (ctx->pc == 0x26570Cu) {
        ctx->pc = 0x26570Cu;
            // 0x26570c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265710u;
        goto label_265710;
    }
    ctx->pc = 0x265708u;
    {
        const bool branch_taken_0x265708 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x26570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265708u;
            // 0x26570c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265708) {
            ctx->pc = 0x265860u;
            goto label_265860;
        }
    }
    ctx->pc = 0x265710u;
label_265710:
    // 0x265710: 0xc04c66c  jal         func_1319B0
label_265714:
    if (ctx->pc == 0x265714u) {
        ctx->pc = 0x265714u;
            // 0x265714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265718u;
        goto label_265718;
    }
    ctx->pc = 0x265710u;
    SET_GPR_U32(ctx, 31, 0x265718u);
    ctx->pc = 0x265714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265710u;
            // 0x265714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265718u; }
        if (ctx->pc != 0x265718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265718u; }
        if (ctx->pc != 0x265718u) { return; }
    }
    ctx->pc = 0x265718u;
label_265718:
    // 0x265718: 0xc04c684  jal         func_131A10
label_26571c:
    if (ctx->pc == 0x26571Cu) {
        ctx->pc = 0x26571Cu;
            // 0x26571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265720u;
        goto label_265720;
    }
    ctx->pc = 0x265718u;
    SET_GPR_U32(ctx, 31, 0x265720u);
    ctx->pc = 0x26571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265718u;
            // 0x26571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265720u; }
        if (ctx->pc != 0x265720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265720u; }
        if (ctx->pc != 0x265720u) { return; }
    }
    ctx->pc = 0x265720u;
label_265720:
    // 0x265720: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x265720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_265724:
    // 0x265724: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_265728:
    if (ctx->pc == 0x265728u) {
        ctx->pc = 0x265728u;
            // 0x265728: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x26572Cu;
        goto label_26572c;
    }
    ctx->pc = 0x265724u;
    {
        const bool branch_taken_0x265724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x265728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265724u;
            // 0x265728: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265724) {
            ctx->pc = 0x265738u;
            goto label_265738;
        }
    }
    ctx->pc = 0x26572Cu;
label_26572c:
    // 0x26572c: 0xc04c690  jal         func_131A40
label_265730:
    if (ctx->pc == 0x265730u) {
        ctx->pc = 0x265730u;
            // 0x265730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265734u;
        goto label_265734;
    }
    ctx->pc = 0x26572Cu;
    SET_GPR_U32(ctx, 31, 0x265734u);
    ctx->pc = 0x265730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26572Cu;
            // 0x265730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265734u; }
        if (ctx->pc != 0x265734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265734u; }
        if (ctx->pc != 0x265734u) { return; }
    }
    ctx->pc = 0x265734u;
label_265734:
    // 0x265734: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x265734u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_265738:
    // 0x265738: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x265738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_26573c:
    // 0x26573c: 0xc0a0ed8  jal         func_283B60
label_265740:
    if (ctx->pc == 0x265740u) {
        ctx->pc = 0x265740u;
            // 0x265740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265744u;
        goto label_265744;
    }
    ctx->pc = 0x26573Cu;
    SET_GPR_U32(ctx, 31, 0x265744u);
    ctx->pc = 0x265740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26573Cu;
            // 0x265740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265744u; }
        if (ctx->pc != 0x265744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265744u; }
        if (ctx->pc != 0x265744u) { return; }
    }
    ctx->pc = 0x265744u;
label_265744:
    // 0x265744: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265748:
    // 0x265748: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_26574c:
    if (ctx->pc == 0x26574Cu) {
        ctx->pc = 0x26574Cu;
            // 0x26574c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265750u;
        goto label_265750;
    }
    ctx->pc = 0x265748u;
    {
        const bool branch_taken_0x265748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265748u;
            // 0x26574c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265748) {
            ctx->pc = 0x265758u;
            goto label_265758;
        }
    }
    ctx->pc = 0x265750u;
label_265750:
    // 0x265750: 0x10000043  b           . + 4 + (0x43 << 2)
label_265754:
    if (ctx->pc == 0x265754u) {
        ctx->pc = 0x265758u;
        goto label_265758;
    }
    ctx->pc = 0x265750u;
    {
        const bool branch_taken_0x265750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265750) {
            ctx->pc = 0x265860u;
            goto label_265860;
        }
    }
    ctx->pc = 0x265758u;
label_265758:
    // 0x265758: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x265758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26575c:
    // 0x26575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265760:
    // 0x265760: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x265760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_265764:
    // 0x265764: 0x320f809  jalr        $t9
label_265768:
    if (ctx->pc == 0x265768u) {
        ctx->pc = 0x265768u;
            // 0x265768: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x26576Cu;
        goto label_26576c;
    }
    ctx->pc = 0x265764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26576Cu);
        ctx->pc = 0x265768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265764u;
            // 0x265768: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26576Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26576Cu; }
            if (ctx->pc != 0x26576Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26576Cu;
label_26576c:
    // 0x26576c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x26576cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_265770:
    // 0x265770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265774:
    // 0x265774: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x265774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_265778:
    // 0x265778: 0x320f809  jalr        $t9
label_26577c:
    if (ctx->pc == 0x26577Cu) {
        ctx->pc = 0x26577Cu;
            // 0x26577c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x265780u;
        goto label_265780;
    }
    ctx->pc = 0x265778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x265780u);
        ctx->pc = 0x26577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265778u;
            // 0x26577c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x265780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x265780u; }
            if (ctx->pc != 0x265780u) { return; }
        }
        }
    }
    ctx->pc = 0x265780u;
label_265780:
    // 0x265780: 0xc0975c0  jal         func_25D700
label_265784:
    if (ctx->pc == 0x265784u) {
        ctx->pc = 0x265784u;
            // 0x265784: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x265788u;
        goto label_265788;
    }
    ctx->pc = 0x265780u;
    SET_GPR_U32(ctx, 31, 0x265788u);
    ctx->pc = 0x265784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265780u;
            // 0x265784: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265788u; }
        if (ctx->pc != 0x265788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265788u; }
        if (ctx->pc != 0x265788u) { return; }
    }
    ctx->pc = 0x265788u;
label_265788:
    // 0x265788: 0xc0975c0  jal         func_25D700
label_26578c:
    if (ctx->pc == 0x26578Cu) {
        ctx->pc = 0x26578Cu;
            // 0x26578c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x265790u;
        goto label_265790;
    }
    ctx->pc = 0x265788u;
    SET_GPR_U32(ctx, 31, 0x265790u);
    ctx->pc = 0x26578Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265788u;
            // 0x26578c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265790u; }
        if (ctx->pc != 0x265790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265790u; }
        if (ctx->pc != 0x265790u) { return; }
    }
    ctx->pc = 0x265790u;
label_265790:
    // 0x265790: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x265790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265794:
    // 0x265794: 0x27b200d4  addiu       $s2, $sp, 0xD4
    ctx->pc = 0x265794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_265798:
    // 0x265798: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x265798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26579c:
    // 0x26579c: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x26579cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2657a0:
    // 0x2657a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2657a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2657a4:
    // 0x2657a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2657a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2657a8:
    // 0x2657a8: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2657a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2657ac:
    // 0x2657ac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2657acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2657b0:
    // 0x2657b0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2657b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2657b4:
    // 0x2657b4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2657b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2657b8:
    // 0x2657b8: 0xc0975d8  jal         func_25D760
label_2657bc:
    if (ctx->pc == 0x2657BCu) {
        ctx->pc = 0x2657BCu;
            // 0x2657bc: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x2657C0u;
        goto label_2657c0;
    }
    ctx->pc = 0x2657B8u;
    SET_GPR_U32(ctx, 31, 0x2657C0u);
    ctx->pc = 0x2657BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2657B8u;
            // 0x2657bc: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657C0u; }
        if (ctx->pc != 0x2657C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657C0u; }
        if (ctx->pc != 0x2657C0u) { return; }
    }
    ctx->pc = 0x2657C0u;
label_2657c0:
    // 0x2657c0: 0xc0bb030  jal         func_2EC0C0
label_2657c4:
    if (ctx->pc == 0x2657C4u) {
        ctx->pc = 0x2657C4u;
            // 0x2657c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2657C8u;
        goto label_2657c8;
    }
    ctx->pc = 0x2657C0u;
    SET_GPR_U32(ctx, 31, 0x2657C8u);
    ctx->pc = 0x2657C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2657C0u;
            // 0x2657c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657C8u; }
        if (ctx->pc != 0x2657C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657C8u; }
        if (ctx->pc != 0x2657C8u) { return; }
    }
    ctx->pc = 0x2657C8u;
label_2657c8:
    // 0x2657c8: 0xc04c668  jal         func_1319A0
label_2657cc:
    if (ctx->pc == 0x2657CCu) {
        ctx->pc = 0x2657CCu;
            // 0x2657cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2657D0u;
        goto label_2657d0;
    }
    ctx->pc = 0x2657C8u;
    SET_GPR_U32(ctx, 31, 0x2657D0u);
    ctx->pc = 0x2657CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2657C8u;
            // 0x2657cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657D0u; }
        if (ctx->pc != 0x2657D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2657D0u; }
        if (ctx->pc != 0x2657D0u) { return; }
    }
    ctx->pc = 0x2657D0u;
label_2657d0:
    // 0x2657d0: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x2657d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2657d4:
    // 0x2657d4: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x2657d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2657d8:
    // 0x2657d8: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2657d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2657dc:
    // 0x2657dc: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x2657dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2657e0:
    // 0x2657e0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2657e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2657e4:
    // 0x2657e4: 0x320f809  jalr        $t9
label_2657e8:
    if (ctx->pc == 0x2657E8u) {
        ctx->pc = 0x2657E8u;
            // 0x2657e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2657ECu;
        goto label_2657ec;
    }
    ctx->pc = 0x2657E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2657ECu);
        ctx->pc = 0x2657E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2657E4u;
            // 0x2657e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2657ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2657ECu; }
            if (ctx->pc != 0x2657ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2657ECu;
label_2657ec:
    // 0x2657ec: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2657ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2657f0:
    // 0x2657f0: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x2657f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2657f4:
    // 0x2657f4: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x2657f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2657f8:
    // 0x2657f8: 0xc04c698  jal         func_131A60
label_2657fc:
    if (ctx->pc == 0x2657FCu) {
        ctx->pc = 0x2657FCu;
            // 0x2657fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265800u;
        goto label_265800;
    }
    ctx->pc = 0x2657F8u;
    SET_GPR_U32(ctx, 31, 0x265800u);
    ctx->pc = 0x2657FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2657F8u;
            // 0x2657fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265800u; }
        if (ctx->pc != 0x265800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265800u; }
        if (ctx->pc != 0x265800u) { return; }
    }
    ctx->pc = 0x265800u;
label_265800:
    // 0x265800: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x265800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_265804:
    // 0x265804: 0xc04c680  jal         func_131A00
label_265808:
    if (ctx->pc == 0x265808u) {
        ctx->pc = 0x265808u;
            // 0x265808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26580Cu;
        goto label_26580c;
    }
    ctx->pc = 0x265804u;
    SET_GPR_U32(ctx, 31, 0x26580Cu);
    ctx->pc = 0x265808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265804u;
            // 0x265808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26580Cu; }
        if (ctx->pc != 0x26580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26580Cu; }
        if (ctx->pc != 0x26580Cu) { return; }
    }
    ctx->pc = 0x26580Cu;
label_26580c:
    // 0x26580c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26580cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_265810:
    // 0x265810: 0xc0bb20c  jal         func_2EC830
label_265814:
    if (ctx->pc == 0x265814u) {
        ctx->pc = 0x265814u;
            // 0x265814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265818u;
        goto label_265818;
    }
    ctx->pc = 0x265810u;
    SET_GPR_U32(ctx, 31, 0x265818u);
    ctx->pc = 0x265814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265810u;
            // 0x265814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265818u; }
        if (ctx->pc != 0x265818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265818u; }
        if (ctx->pc != 0x265818u) { return; }
    }
    ctx->pc = 0x265818u;
label_265818:
    // 0x265818: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x265818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26581c:
    // 0x26581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265820:
    // 0x265820: 0xc04c674  jal         func_1319D0
label_265824:
    if (ctx->pc == 0x265824u) {
        ctx->pc = 0x265824u;
            // 0x265824: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x265828u;
        goto label_265828;
    }
    ctx->pc = 0x265820u;
    SET_GPR_U32(ctx, 31, 0x265828u);
    ctx->pc = 0x265824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265820u;
            // 0x265824: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319D0u;
    if (runtime->hasFunction(0x1319D0u)) {
        auto targetFn = runtime->lookupFunction(0x1319D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265828u; }
        if (ctx->pc != 0x265828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngleSoon__15mgCCameraFollowFf_0x1319d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265828u; }
        if (ctx->pc != 0x265828u) { return; }
    }
    ctx->pc = 0x265828u;
label_265828:
    // 0x265828: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x265828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_26582c:
    // 0x26582c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265830:
    // 0x265830: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x265830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_265834:
    // 0x265834: 0x320f809  jalr        $t9
label_265838:
    if (ctx->pc == 0x265838u) {
        ctx->pc = 0x265838u;
            // 0x265838: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26583Cu;
        goto label_26583c;
    }
    ctx->pc = 0x265834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26583Cu);
        ctx->pc = 0x265838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265834u;
            // 0x265838: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26583Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26583Cu; }
            if (ctx->pc != 0x26583Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26583Cu;
label_26583c:
    // 0x26583c: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x26583cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_265840:
    // 0x265840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265844:
    // 0x265844: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x265844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_265848:
    // 0x265848: 0x320f809  jalr        $t9
label_26584c:
    if (ctx->pc == 0x26584Cu) {
        ctx->pc = 0x26584Cu;
            // 0x26584c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x265850u;
        goto label_265850;
    }
    ctx->pc = 0x265848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x265850u);
        ctx->pc = 0x26584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265848u;
            // 0x26584c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x265850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x265850u; }
            if (ctx->pc != 0x265850u) { return; }
        }
        }
    }
    ctx->pc = 0x265850u;
label_265850:
    // 0x265850: 0xc0bb00c  jal         func_2EC030
label_265854:
    if (ctx->pc == 0x265854u) {
        ctx->pc = 0x265854u;
            // 0x265854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265858u;
        goto label_265858;
    }
    ctx->pc = 0x265850u;
    SET_GPR_U32(ctx, 31, 0x265858u);
    ctx->pc = 0x265854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265850u;
            // 0x265854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265858u; }
        if (ctx->pc != 0x265858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265858u; }
        if (ctx->pc != 0x265858u) { return; }
    }
    ctx->pc = 0x265858u;
label_265858:
    // 0x265858: 0xaf8097f4  sw          $zero, -0x680C($gp)
    ctx->pc = 0x265858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
label_26585c:
    // 0x26585c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265860:
    // 0x265860: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x265860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_265864:
    // 0x265864: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x265864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_265868:
    // 0x265868: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x265868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26586c:
    // 0x26586c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x26586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_265870:
    // 0x265870: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x265870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_265874:
    // 0x265874: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x265874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_265878:
    // 0x265878: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x265878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26587c:
    // 0x26587c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x26587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_265880:
    // 0x265880: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x265880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_265884:
    // 0x265884: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x265884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_265888:
    // 0x265888: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x265888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26588c:
    // 0x26588c: 0x3e00008  jr          $ra
label_265890:
    if (ctx->pc == 0x265890u) {
        ctx->pc = 0x265890u;
            // 0x265890: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x265894u;
        goto label_fallthrough_0x26588c;
    }
    ctx->pc = 0x26588Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26588Cu;
            // 0x265890: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26588c:
    ctx->pc = 0x265894u;
}
