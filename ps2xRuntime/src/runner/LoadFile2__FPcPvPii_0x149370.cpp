#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFile2__FPcPvPii
// Address: 0x149370 - 0x149744
void LoadFile2__FPcPvPii_0x149370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFile2__FPcPvPii_0x149370");
#endif

    switch (ctx->pc) {
        case 0x149370u: goto label_149370;
        case 0x149374u: goto label_149374;
        case 0x149378u: goto label_149378;
        case 0x14937cu: goto label_14937c;
        case 0x149380u: goto label_149380;
        case 0x149384u: goto label_149384;
        case 0x149388u: goto label_149388;
        case 0x14938cu: goto label_14938c;
        case 0x149390u: goto label_149390;
        case 0x149394u: goto label_149394;
        case 0x149398u: goto label_149398;
        case 0x14939cu: goto label_14939c;
        case 0x1493a0u: goto label_1493a0;
        case 0x1493a4u: goto label_1493a4;
        case 0x1493a8u: goto label_1493a8;
        case 0x1493acu: goto label_1493ac;
        case 0x1493b0u: goto label_1493b0;
        case 0x1493b4u: goto label_1493b4;
        case 0x1493b8u: goto label_1493b8;
        case 0x1493bcu: goto label_1493bc;
        case 0x1493c0u: goto label_1493c0;
        case 0x1493c4u: goto label_1493c4;
        case 0x1493c8u: goto label_1493c8;
        case 0x1493ccu: goto label_1493cc;
        case 0x1493d0u: goto label_1493d0;
        case 0x1493d4u: goto label_1493d4;
        case 0x1493d8u: goto label_1493d8;
        case 0x1493dcu: goto label_1493dc;
        case 0x1493e0u: goto label_1493e0;
        case 0x1493e4u: goto label_1493e4;
        case 0x1493e8u: goto label_1493e8;
        case 0x1493ecu: goto label_1493ec;
        case 0x1493f0u: goto label_1493f0;
        case 0x1493f4u: goto label_1493f4;
        case 0x1493f8u: goto label_1493f8;
        case 0x1493fcu: goto label_1493fc;
        case 0x149400u: goto label_149400;
        case 0x149404u: goto label_149404;
        case 0x149408u: goto label_149408;
        case 0x14940cu: goto label_14940c;
        case 0x149410u: goto label_149410;
        case 0x149414u: goto label_149414;
        case 0x149418u: goto label_149418;
        case 0x14941cu: goto label_14941c;
        case 0x149420u: goto label_149420;
        case 0x149424u: goto label_149424;
        case 0x149428u: goto label_149428;
        case 0x14942cu: goto label_14942c;
        case 0x149430u: goto label_149430;
        case 0x149434u: goto label_149434;
        case 0x149438u: goto label_149438;
        case 0x14943cu: goto label_14943c;
        case 0x149440u: goto label_149440;
        case 0x149444u: goto label_149444;
        case 0x149448u: goto label_149448;
        case 0x14944cu: goto label_14944c;
        case 0x149450u: goto label_149450;
        case 0x149454u: goto label_149454;
        case 0x149458u: goto label_149458;
        case 0x14945cu: goto label_14945c;
        case 0x149460u: goto label_149460;
        case 0x149464u: goto label_149464;
        case 0x149468u: goto label_149468;
        case 0x14946cu: goto label_14946c;
        case 0x149470u: goto label_149470;
        case 0x149474u: goto label_149474;
        case 0x149478u: goto label_149478;
        case 0x14947cu: goto label_14947c;
        case 0x149480u: goto label_149480;
        case 0x149484u: goto label_149484;
        case 0x149488u: goto label_149488;
        case 0x14948cu: goto label_14948c;
        case 0x149490u: goto label_149490;
        case 0x149494u: goto label_149494;
        case 0x149498u: goto label_149498;
        case 0x14949cu: goto label_14949c;
        case 0x1494a0u: goto label_1494a0;
        case 0x1494a4u: goto label_1494a4;
        case 0x1494a8u: goto label_1494a8;
        case 0x1494acu: goto label_1494ac;
        case 0x1494b0u: goto label_1494b0;
        case 0x1494b4u: goto label_1494b4;
        case 0x1494b8u: goto label_1494b8;
        case 0x1494bcu: goto label_1494bc;
        case 0x1494c0u: goto label_1494c0;
        case 0x1494c4u: goto label_1494c4;
        case 0x1494c8u: goto label_1494c8;
        case 0x1494ccu: goto label_1494cc;
        case 0x1494d0u: goto label_1494d0;
        case 0x1494d4u: goto label_1494d4;
        case 0x1494d8u: goto label_1494d8;
        case 0x1494dcu: goto label_1494dc;
        case 0x1494e0u: goto label_1494e0;
        case 0x1494e4u: goto label_1494e4;
        case 0x1494e8u: goto label_1494e8;
        case 0x1494ecu: goto label_1494ec;
        case 0x1494f0u: goto label_1494f0;
        case 0x1494f4u: goto label_1494f4;
        case 0x1494f8u: goto label_1494f8;
        case 0x1494fcu: goto label_1494fc;
        case 0x149500u: goto label_149500;
        case 0x149504u: goto label_149504;
        case 0x149508u: goto label_149508;
        case 0x14950cu: goto label_14950c;
        case 0x149510u: goto label_149510;
        case 0x149514u: goto label_149514;
        case 0x149518u: goto label_149518;
        case 0x14951cu: goto label_14951c;
        case 0x149520u: goto label_149520;
        case 0x149524u: goto label_149524;
        case 0x149528u: goto label_149528;
        case 0x14952cu: goto label_14952c;
        case 0x149530u: goto label_149530;
        case 0x149534u: goto label_149534;
        case 0x149538u: goto label_149538;
        case 0x14953cu: goto label_14953c;
        case 0x149540u: goto label_149540;
        case 0x149544u: goto label_149544;
        case 0x149548u: goto label_149548;
        case 0x14954cu: goto label_14954c;
        case 0x149550u: goto label_149550;
        case 0x149554u: goto label_149554;
        case 0x149558u: goto label_149558;
        case 0x14955cu: goto label_14955c;
        case 0x149560u: goto label_149560;
        case 0x149564u: goto label_149564;
        case 0x149568u: goto label_149568;
        case 0x14956cu: goto label_14956c;
        case 0x149570u: goto label_149570;
        case 0x149574u: goto label_149574;
        case 0x149578u: goto label_149578;
        case 0x14957cu: goto label_14957c;
        case 0x149580u: goto label_149580;
        case 0x149584u: goto label_149584;
        case 0x149588u: goto label_149588;
        case 0x14958cu: goto label_14958c;
        case 0x149590u: goto label_149590;
        case 0x149594u: goto label_149594;
        case 0x149598u: goto label_149598;
        case 0x14959cu: goto label_14959c;
        case 0x1495a0u: goto label_1495a0;
        case 0x1495a4u: goto label_1495a4;
        case 0x1495a8u: goto label_1495a8;
        case 0x1495acu: goto label_1495ac;
        case 0x1495b0u: goto label_1495b0;
        case 0x1495b4u: goto label_1495b4;
        case 0x1495b8u: goto label_1495b8;
        case 0x1495bcu: goto label_1495bc;
        case 0x1495c0u: goto label_1495c0;
        case 0x1495c4u: goto label_1495c4;
        case 0x1495c8u: goto label_1495c8;
        case 0x1495ccu: goto label_1495cc;
        case 0x1495d0u: goto label_1495d0;
        case 0x1495d4u: goto label_1495d4;
        case 0x1495d8u: goto label_1495d8;
        case 0x1495dcu: goto label_1495dc;
        case 0x1495e0u: goto label_1495e0;
        case 0x1495e4u: goto label_1495e4;
        case 0x1495e8u: goto label_1495e8;
        case 0x1495ecu: goto label_1495ec;
        case 0x1495f0u: goto label_1495f0;
        case 0x1495f4u: goto label_1495f4;
        case 0x1495f8u: goto label_1495f8;
        case 0x1495fcu: goto label_1495fc;
        case 0x149600u: goto label_149600;
        case 0x149604u: goto label_149604;
        case 0x149608u: goto label_149608;
        case 0x14960cu: goto label_14960c;
        case 0x149610u: goto label_149610;
        case 0x149614u: goto label_149614;
        case 0x149618u: goto label_149618;
        case 0x14961cu: goto label_14961c;
        case 0x149620u: goto label_149620;
        case 0x149624u: goto label_149624;
        case 0x149628u: goto label_149628;
        case 0x14962cu: goto label_14962c;
        case 0x149630u: goto label_149630;
        case 0x149634u: goto label_149634;
        case 0x149638u: goto label_149638;
        case 0x14963cu: goto label_14963c;
        case 0x149640u: goto label_149640;
        case 0x149644u: goto label_149644;
        case 0x149648u: goto label_149648;
        case 0x14964cu: goto label_14964c;
        case 0x149650u: goto label_149650;
        case 0x149654u: goto label_149654;
        case 0x149658u: goto label_149658;
        case 0x14965cu: goto label_14965c;
        case 0x149660u: goto label_149660;
        case 0x149664u: goto label_149664;
        case 0x149668u: goto label_149668;
        case 0x14966cu: goto label_14966c;
        case 0x149670u: goto label_149670;
        case 0x149674u: goto label_149674;
        case 0x149678u: goto label_149678;
        case 0x14967cu: goto label_14967c;
        case 0x149680u: goto label_149680;
        case 0x149684u: goto label_149684;
        case 0x149688u: goto label_149688;
        case 0x14968cu: goto label_14968c;
        case 0x149690u: goto label_149690;
        case 0x149694u: goto label_149694;
        case 0x149698u: goto label_149698;
        case 0x14969cu: goto label_14969c;
        case 0x1496a0u: goto label_1496a0;
        case 0x1496a4u: goto label_1496a4;
        case 0x1496a8u: goto label_1496a8;
        case 0x1496acu: goto label_1496ac;
        case 0x1496b0u: goto label_1496b0;
        case 0x1496b4u: goto label_1496b4;
        case 0x1496b8u: goto label_1496b8;
        case 0x1496bcu: goto label_1496bc;
        case 0x1496c0u: goto label_1496c0;
        case 0x1496c4u: goto label_1496c4;
        case 0x1496c8u: goto label_1496c8;
        case 0x1496ccu: goto label_1496cc;
        case 0x1496d0u: goto label_1496d0;
        case 0x1496d4u: goto label_1496d4;
        case 0x1496d8u: goto label_1496d8;
        case 0x1496dcu: goto label_1496dc;
        case 0x1496e0u: goto label_1496e0;
        case 0x1496e4u: goto label_1496e4;
        case 0x1496e8u: goto label_1496e8;
        case 0x1496ecu: goto label_1496ec;
        case 0x1496f0u: goto label_1496f0;
        case 0x1496f4u: goto label_1496f4;
        case 0x1496f8u: goto label_1496f8;
        case 0x1496fcu: goto label_1496fc;
        case 0x149700u: goto label_149700;
        case 0x149704u: goto label_149704;
        case 0x149708u: goto label_149708;
        case 0x14970cu: goto label_14970c;
        case 0x149710u: goto label_149710;
        case 0x149714u: goto label_149714;
        case 0x149718u: goto label_149718;
        case 0x14971cu: goto label_14971c;
        case 0x149720u: goto label_149720;
        case 0x149724u: goto label_149724;
        case 0x149728u: goto label_149728;
        case 0x14972cu: goto label_14972c;
        case 0x149730u: goto label_149730;
        case 0x149734u: goto label_149734;
        case 0x149738u: goto label_149738;
        case 0x14973cu: goto label_14973c;
        case 0x149740u: goto label_149740;
        default: break;
    }

    ctx->pc = 0x149370u;

label_149370:
    // 0x149370: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x149370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_149374:
    // 0x149374: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x149374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_149378:
    // 0x149378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14937c:
    // 0x14937c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_149380:
    // 0x149380: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x149380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149384:
    // 0x149384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_149388:
    // 0x149388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14938c:
    // 0x14938c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14938cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_149390:
    // 0x149390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_149394:
    // 0x149394: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x149394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_149398:
    // 0x149398: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_14939c:
    if (ctx->pc == 0x14939Cu) {
        ctx->pc = 0x14939Cu;
            // 0x14939c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1493A0u;
        goto label_1493a0;
    }
    ctx->pc = 0x149398u;
    {
        const bool branch_taken_0x149398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149398u;
            // 0x14939c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149398) {
            ctx->pc = 0x1493A4u;
            goto label_1493a4;
        }
    }
    ctx->pc = 0x1493A0u;
label_1493a0:
    // 0x1493a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1493a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1493a4:
    // 0x1493a4: 0xc0526c0  jal         func_149B00
label_1493a8:
    if (ctx->pc == 0x1493A8u) {
        ctx->pc = 0x1493A8u;
            // 0x1493a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1493ACu;
        goto label_1493ac;
    }
    ctx->pc = 0x1493A4u;
    SET_GPR_U32(ctx, 31, 0x1493ACu);
    ctx->pc = 0x1493A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493A4u;
            // 0x1493a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B00u;
    if (runtime->hasFunction(0x149B00u)) {
        auto targetFn = runtime->lookupFunction(0x149B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493ACu; }
        if (ctx->pc != 0x1493ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFileCache__FPc_0x149b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493ACu; }
        if (ctx->pc != 0x1493ACu) { return; }
    }
    ctx->pc = 0x1493ACu;
label_1493ac:
    // 0x1493ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1493acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1493b0:
    // 0x1493b0: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_1493b4:
    if (ctx->pc == 0x1493B4u) {
        ctx->pc = 0x1493B4u;
            // 0x1493b4: 0x3c06003d  lui         $a2, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1493B8u;
        goto label_1493b8;
    }
    ctx->pc = 0x1493B0u;
    {
        const bool branch_taken_0x1493b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1493B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493B0u;
            // 0x1493b4: 0x3c06003d  lui         $a2, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493b0) {
            ctx->pc = 0x149400u;
            goto label_149400;
        }
    }
    ctx->pc = 0x1493B8u;
label_1493b8:
    // 0x1493b8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1493bc:
    if (ctx->pc == 0x1493BCu) {
        ctx->pc = 0x1493C0u;
        goto label_1493c0;
    }
    ctx->pc = 0x1493B8u;
    {
        const bool branch_taken_0x1493b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1493b8) {
            ctx->pc = 0x1493DCu;
            goto label_1493dc;
        }
    }
    ctx->pc = 0x1493C0u;
label_1493c0:
    // 0x1493c0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1493c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1493c4:
    // 0x1493c4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1493c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1493c8:
    // 0x1493c8: 0xc049c18  jal         func_127060
label_1493cc:
    if (ctx->pc == 0x1493CCu) {
        ctx->pc = 0x1493CCu;
            // 0x1493cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1493D0u;
        goto label_1493d0;
    }
    ctx->pc = 0x1493C8u;
    SET_GPR_U32(ctx, 31, 0x1493D0u);
    ctx->pc = 0x1493CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493C8u;
            // 0x1493cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493D0u; }
        if (ctx->pc != 0x1493D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493D0u; }
        if (ctx->pc != 0x1493D0u) { return; }
    }
    ctx->pc = 0x1493D0u;
label_1493d0:
    // 0x1493d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1493d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1493d4:
    // 0x1493d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1493d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1493d8:
    // 0x1493d8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1493d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1493dc:
    // 0x1493dc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1493e0:
    if (ctx->pc == 0x1493E0u) {
        ctx->pc = 0x1493E0u;
            // 0x1493e0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1493E4u;
        goto label_1493e4;
    }
    ctx->pc = 0x1493DCu;
    {
        const bool branch_taken_0x1493dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1493E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493DCu;
            // 0x1493e0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493dc) {
            ctx->pc = 0x1493ECu;
            goto label_1493ec;
        }
    }
    ctx->pc = 0x1493E4u;
label_1493e4:
    // 0x1493e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1493e8:
    // 0x1493e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1493e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1493ec:
    // 0x1493ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1493ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1493f0:
    // 0x1493f0: 0xc04a0d2  jal         func_128348
label_1493f4:
    if (ctx->pc == 0x1493F4u) {
        ctx->pc = 0x1493F4u;
            // 0x1493f4: 0x24842810  addiu       $a0, $a0, 0x2810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10256));
        ctx->pc = 0x1493F8u;
        goto label_1493f8;
    }
    ctx->pc = 0x1493F0u;
    SET_GPR_U32(ctx, 31, 0x1493F8u);
    ctx->pc = 0x1493F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493F0u;
            // 0x1493f4: 0x24842810  addiu       $a0, $a0, 0x2810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493F8u; }
        if (ctx->pc != 0x1493F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493F8u; }
        if (ctx->pc != 0x1493F8u) { return; }
    }
    ctx->pc = 0x1493F8u;
label_1493f8:
    // 0x1493f8: 0x100000ca  b           . + 4 + (0xCA << 2)
label_1493fc:
    if (ctx->pc == 0x1493FCu) {
        ctx->pc = 0x1493FCu;
            // 0x1493fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x149400u;
        goto label_149400;
    }
    ctx->pc = 0x1493F8u;
    {
        const bool branch_taken_0x1493f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1493FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493F8u;
            // 0x1493fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493f8) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149400u;
label_149400:
    // 0x149400: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_149404:
    // 0x149404: 0x24c6ab90  addiu       $a2, $a2, -0x5470
    ctx->pc = 0x149404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945680));
label_149408:
    // 0x149408: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x149408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14940c:
    // 0x14940c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x14940cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_149410:
    // 0x149410: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x149410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_149414:
    // 0x149414: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x149414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_149418:
    // 0x149418: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x149418u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_14941c:
    // 0x14941c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x14941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_149420:
    // 0x149420: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x149420u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_149424:
    // 0x149424: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_149428:
    if (ctx->pc == 0x149428u) {
        ctx->pc = 0x149428u;
            // 0x149428: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x14942Cu;
        goto label_14942c;
    }
    ctx->pc = 0x149424u;
    {
        const bool branch_taken_0x149424 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x149428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149424u;
            // 0x149428: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149424) {
            ctx->pc = 0x14940Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14940c;
        }
    }
    ctx->pc = 0x14942Cu;
label_14942c:
    // 0x14942c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_149430:
    // 0x149430: 0xc052490  jal         func_149240
label_149434:
    if (ctx->pc == 0x149434u) {
        ctx->pc = 0x149434u;
            // 0x149434: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x149438u;
        goto label_149438;
    }
    ctx->pc = 0x149430u;
    SET_GPR_U32(ctx, 31, 0x149438u);
    ctx->pc = 0x149434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149430u;
            // 0x149434: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149240u;
    if (runtime->hasFunction(0x149240u)) {
        auto targetFn = runtime->lookupFunction(0x149240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149438u; }
        if (ctx->pc != 0x149438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFullPath__FPcPc_0x149240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149438u; }
        if (ctx->pc != 0x149438u) { return; }
    }
    ctx->pc = 0x149438u;
label_149438:
    // 0x149438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x149438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14943c:
    // 0x14943c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_149440:
    // 0x149440: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_149444:
    if (ctx->pc == 0x149444u) {
        ctx->pc = 0x149444u;
            // 0x149444: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x149448u;
        goto label_149448;
    }
    ctx->pc = 0x149440u;
    {
        const bool branch_taken_0x149440 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x149444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149440u;
            // 0x149444: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149440) {
            ctx->pc = 0x149450u;
            goto label_149450;
        }
    }
    ctx->pc = 0x149448u;
label_149448:
    // 0x149448: 0x8f938028  lw          $s3, -0x7FD8($gp)
    ctx->pc = 0x149448u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
label_14944c:
    // 0x14944c: 0x0  nop
    ctx->pc = 0x14944cu;
    // NOP
label_149450:
    // 0x149450: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
label_149454:
    if (ctx->pc == 0x149454u) {
        ctx->pc = 0x149454u;
            // 0x149454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x149458u;
        goto label_149458;
    }
    ctx->pc = 0x149450u;
    {
        const bool branch_taken_0x149450 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x149454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149450u;
            // 0x149454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149450) {
            ctx->pc = 0x149498u;
            goto label_149498;
        }
    }
    ctx->pc = 0x149458u;
label_149458:
    // 0x149458: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_14945c:
    // 0x14945c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_149460:
    // 0x149460: 0xc04a0d2  jal         func_128348
label_149464:
    if (ctx->pc == 0x149464u) {
        ctx->pc = 0x149464u;
            // 0x149464: 0x24842820  addiu       $a0, $a0, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
        ctx->pc = 0x149468u;
        goto label_149468;
    }
    ctx->pc = 0x149460u;
    SET_GPR_U32(ctx, 31, 0x149468u);
    ctx->pc = 0x149464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149460u;
            // 0x149464: 0x24842820  addiu       $a0, $a0, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149468u; }
        if (ctx->pc != 0x149468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149468u; }
        if (ctx->pc != 0x149468u) { return; }
    }
    ctx->pc = 0x149468u;
label_149468:
    // 0x149468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x149468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14946c:
    // 0x14946c: 0xc0a2500  jal         func_289400
label_149470:
    if (ctx->pc == 0x149470u) {
        ctx->pc = 0x149470u;
            // 0x149470: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x149474u;
        goto label_149474;
    }
    ctx->pc = 0x14946Cu;
    SET_GPR_U32(ctx, 31, 0x149474u);
    ctx->pc = 0x149470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14946Cu;
            // 0x149470: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289400u;
    if (runtime->hasFunction(0x289400u)) {
        auto targetFn = runtime->lookupFunction(0x289400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149474u; }
        if (ctx->pc != 0x149474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileSocket__FPcPUi_0x289400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149474u; }
        if (ctx->pc != 0x149474u) { return; }
    }
    ctx->pc = 0x149474u;
label_149474:
    // 0x149474: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_149478:
    if (ctx->pc == 0x149478u) {
        ctx->pc = 0x14947Cu;
        goto label_14947c;
    }
    ctx->pc = 0x149474u;
    {
        const bool branch_taken_0x149474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x149474) {
            ctx->pc = 0x149480u;
            goto label_149480;
        }
    }
    ctx->pc = 0x14947Cu;
label_14947c:
    // 0x14947c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14947cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_149480:
    // 0x149480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_149484:
    if (ctx->pc == 0x149484u) {
        ctx->pc = 0x149484u;
            // 0x149484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x149488u;
        goto label_149488;
    }
    ctx->pc = 0x149480u;
    {
        const bool branch_taken_0x149480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149480u;
            // 0x149484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149480) {
            ctx->pc = 0x149490u;
            goto label_149490;
        }
    }
    ctx->pc = 0x149488u;
label_149488:
    // 0x149488: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_14948c:
    if (ctx->pc == 0x14948Cu) {
        ctx->pc = 0x14948Cu;
            // 0x14948c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149490u;
        goto label_149490;
    }
    ctx->pc = 0x149488u;
    {
        const bool branch_taken_0x149488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149488u;
            // 0x14948c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149488) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149490u;
label_149490:
    // 0x149490: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_149494:
    if (ctx->pc == 0x149494u) {
        ctx->pc = 0x149494u;
            // 0x149494: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x149498u;
        goto label_149498;
    }
    ctx->pc = 0x149490u;
    {
        const bool branch_taken_0x149490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149490u;
            // 0x149494: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149490) {
            ctx->pc = 0x149728u;
            goto label_149728;
        }
    }
    ctx->pc = 0x149498u;
label_149498:
    // 0x149498: 0x16620014  bne         $s3, $v0, . + 4 + (0x14 << 2)
label_14949c:
    if (ctx->pc == 0x14949Cu) {
        ctx->pc = 0x14949Cu;
            // 0x14949c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1494A0u;
        goto label_1494a0;
    }
    ctx->pc = 0x149498u;
    {
        const bool branch_taken_0x149498 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x14949Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149498u;
            // 0x14949c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149498) {
            ctx->pc = 0x1494ECu;
            goto label_1494ec;
        }
    }
    ctx->pc = 0x1494A0u;
label_1494a0:
    // 0x1494a0: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1494a4:
    if (ctx->pc == 0x1494A4u) {
        ctx->pc = 0x1494A4u;
            // 0x1494a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1494A8u;
        goto label_1494a8;
    }
    ctx->pc = 0x1494A0u;
    {
        const bool branch_taken_0x1494a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1494A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494A0u;
            // 0x1494a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494a0) {
            ctx->pc = 0x1494D8u;
            goto label_1494d8;
        }
    }
    ctx->pc = 0x1494A8u;
label_1494a8:
    // 0x1494a8: 0xc052214  jal         func_148850
label_1494ac:
    if (ctx->pc == 0x1494ACu) {
        ctx->pc = 0x1494ACu;
            // 0x1494ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1494B0u;
        goto label_1494b0;
    }
    ctx->pc = 0x1494A8u;
    SET_GPR_U32(ctx, 31, 0x1494B0u);
    ctx->pc = 0x1494ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1494A8u;
            // 0x1494ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (runtime->hasFunction(0x148850u)) {
        auto targetFn = runtime->lookupFunction(0x148850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494B0u; }
        if (ctx->pc != 0x1494B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFile__FPc_0x148850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494B0u; }
        if (ctx->pc != 0x1494B0u) { return; }
    }
    ctx->pc = 0x1494B0u;
label_1494b0:
    // 0x1494b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1494b4:
    if (ctx->pc == 0x1494B4u) {
        ctx->pc = 0x1494B8u;
        goto label_1494b8;
    }
    ctx->pc = 0x1494B0u;
    {
        const bool branch_taken_0x1494b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1494b0) {
            ctx->pc = 0x1494C0u;
            goto label_1494c0;
        }
    }
    ctx->pc = 0x1494B8u;
label_1494b8:
    // 0x1494b8: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1494bc:
    if (ctx->pc == 0x1494BCu) {
        ctx->pc = 0x1494BCu;
            // 0x1494bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1494C0u;
        goto label_1494c0;
    }
    ctx->pc = 0x1494B8u;
    {
        const bool branch_taken_0x1494b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494B8u;
            // 0x1494bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494b8) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x1494C0u;
label_1494c0:
    // 0x1494c0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1494c4:
    if (ctx->pc == 0x1494C4u) {
        ctx->pc = 0x1494C8u;
        goto label_1494c8;
    }
    ctx->pc = 0x1494C0u;
    {
        const bool branch_taken_0x1494c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494c0) {
            ctx->pc = 0x1494D0u;
            goto label_1494d0;
        }
    }
    ctx->pc = 0x1494C8u;
label_1494c8:
    // 0x1494c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1494c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1494cc:
    // 0x1494cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1494ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1494d0:
    // 0x1494d0: 0x10000094  b           . + 4 + (0x94 << 2)
label_1494d4:
    if (ctx->pc == 0x1494D4u) {
        ctx->pc = 0x1494D4u;
            // 0x1494d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1494D8u;
        goto label_1494d8;
    }
    ctx->pc = 0x1494D0u;
    {
        const bool branch_taken_0x1494d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494D0u;
            // 0x1494d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494d0) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x1494D8u;
label_1494d8:
    // 0x1494d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1494d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1494dc:
    // 0x1494dc: 0xc0525d4  jal         func_149750
label_1494e0:
    if (ctx->pc == 0x1494E0u) {
        ctx->pc = 0x1494E0u;
            // 0x1494e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1494E4u;
        goto label_1494e4;
    }
    ctx->pc = 0x1494DCu;
    SET_GPR_U32(ctx, 31, 0x1494E4u);
    ctx->pc = 0x1494E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1494DCu;
            // 0x1494e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149750u;
    if (runtime->hasFunction(0x149750u)) {
        auto targetFn = runtime->lookupFunction(0x149750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494E4u; }
        if (ctx->pc != 0x1494E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CDRead__FPcPUiPi_0x149750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494E4u; }
        if (ctx->pc != 0x1494E4u) { return; }
    }
    ctx->pc = 0x1494E4u;
label_1494e4:
    // 0x1494e4: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1494e8:
    if (ctx->pc == 0x1494E8u) {
        ctx->pc = 0x1494ECu;
        goto label_1494ec;
    }
    ctx->pc = 0x1494E4u;
    {
        const bool branch_taken_0x1494e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494e4) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x1494ECu;
label_1494ec:
    // 0x1494ec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1494f0:
    // 0x1494f0: 0xc04a0d2  jal         func_128348
label_1494f4:
    if (ctx->pc == 0x1494F4u) {
        ctx->pc = 0x1494F4u;
            // 0x1494f4: 0x24842820  addiu       $a0, $a0, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
        ctx->pc = 0x1494F8u;
        goto label_1494f8;
    }
    ctx->pc = 0x1494F0u;
    SET_GPR_U32(ctx, 31, 0x1494F8u);
    ctx->pc = 0x1494F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1494F0u;
            // 0x1494f4: 0x24842820  addiu       $a0, $a0, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494F8u; }
        if (ctx->pc != 0x1494F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494F8u; }
        if (ctx->pc != 0x1494F8u) { return; }
    }
    ctx->pc = 0x1494F8u;
label_1494f8:
    // 0x1494f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1494f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1494fc:
    // 0x1494fc: 0x16620060  bne         $s3, $v0, . + 4 + (0x60 << 2)
label_149500:
    if (ctx->pc == 0x149500u) {
        ctx->pc = 0x149500u;
            // 0x149500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x149504u;
        goto label_149504;
    }
    ctx->pc = 0x1494FCu;
    {
        const bool branch_taken_0x1494fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x149500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494FCu;
            // 0x149500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494fc) {
            ctx->pc = 0x149680u;
            goto label_149680;
        }
    }
    ctx->pc = 0x149504u;
label_149504:
    // 0x149504: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_149508:
    // 0x149508: 0xc045782  jal         func_115E08
label_14950c:
    if (ctx->pc == 0x14950Cu) {
        ctx->pc = 0x14950Cu;
            // 0x14950c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x149510u;
        goto label_149510;
    }
    ctx->pc = 0x149508u;
    SET_GPR_U32(ctx, 31, 0x149510u);
    ctx->pc = 0x14950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149508u;
            // 0x14950c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E08u;
    if (runtime->hasFunction(0x115E08u)) {
        auto targetFn = runtime->lookupFunction(0x115E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149510u; }
        if (ctx->pc != 0x149510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGetstat_0x115e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149510u; }
        if (ctx->pc != 0x149510u) { return; }
    }
    ctx->pc = 0x149510u;
label_149510:
    // 0x149510: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x149510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_149514:
    // 0x149514: 0x6610006  bgez        $s3, . + 4 + (0x6 << 2)
label_149518:
    if (ctx->pc == 0x149518u) {
        ctx->pc = 0x14951Cu;
        goto label_14951c;
    }
    ctx->pc = 0x149514u;
    {
        const bool branch_taken_0x149514 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x149514) {
            ctx->pc = 0x149530u;
            goto label_149530;
        }
    }
    ctx->pc = 0x14951Cu;
label_14951c:
    // 0x14951c: 0x8f8288a8  lw          $v0, -0x7758($gp)
    ctx->pc = 0x14951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_149520:
    // 0x149520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_149524:
    if (ctx->pc == 0x149524u) {
        ctx->pc = 0x149524u;
            // 0x149524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149528u;
        goto label_149528;
    }
    ctx->pc = 0x149520u;
    {
        const bool branch_taken_0x149520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149520u;
            // 0x149524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149520) {
            ctx->pc = 0x149530u;
            goto label_149530;
        }
    }
    ctx->pc = 0x149528u;
label_149528:
    // 0x149528: 0x40f809  jalr        $v0
label_14952c:
    if (ctx->pc == 0x14952Cu) {
        ctx->pc = 0x149530u;
        goto label_149530;
    }
    ctx->pc = 0x149528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149530u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x149530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x149530u; }
            if (ctx->pc != 0x149530u) { return; }
        }
        }
    }
    ctx->pc = 0x149530u;
label_149530:
    // 0x149530: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_149534:
    if (ctx->pc == 0x149534u) {
        ctx->pc = 0x149534u;
            // 0x149534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x149538u;
        goto label_149538;
    }
    ctx->pc = 0x149530u;
    {
        const bool branch_taken_0x149530 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x149534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149530u;
            // 0x149534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149530) {
            ctx->pc = 0x14954Cu;
            goto label_14954c;
        }
    }
    ctx->pc = 0x149538u;
label_149538:
    // 0x149538: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
label_14953c:
    if (ctx->pc == 0x14953Cu) {
        ctx->pc = 0x149540u;
        goto label_149540;
    }
    ctx->pc = 0x149538u;
    {
        const bool branch_taken_0x149538 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x149538) {
            ctx->pc = 0x149548u;
            goto label_149548;
        }
    }
    ctx->pc = 0x149540u;
label_149540:
    // 0x149540: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x149540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_149544:
    // 0x149544: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x149544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_149548:
    // 0x149548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14954c:
    // 0x14954c: 0x16050004  bne         $s0, $a1, . + 4 + (0x4 << 2)
label_149550:
    if (ctx->pc == 0x149550u) {
        ctx->pc = 0x149550u;
            // 0x149550: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x149554u;
        goto label_149554;
    }
    ctx->pc = 0x14954Cu;
    {
        const bool branch_taken_0x14954c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x149550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14954Cu;
            // 0x149550: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14954c) {
            ctx->pc = 0x149560u;
            goto label_149560;
        }
    }
    ctx->pc = 0x149554u;
label_149554:
    // 0x149554: 0x260102a  slt         $v0, $s3, $zero
    ctx->pc = 0x149554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_149558:
    // 0x149558: 0x10000072  b           . + 4 + (0x72 << 2)
label_14955c:
    if (ctx->pc == 0x14955Cu) {
        ctx->pc = 0x14955Cu;
            // 0x14955c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x149560u;
        goto label_149560;
    }
    ctx->pc = 0x149558u;
    {
        const bool branch_taken_0x149558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149558u;
            // 0x14955c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149558) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149560u;
label_149560:
    // 0x149560: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
label_149564:
    if (ctx->pc == 0x149564u) {
        ctx->pc = 0x149564u;
            // 0x149564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x149568u;
        goto label_149568;
    }
    ctx->pc = 0x149560u;
    {
        const bool branch_taken_0x149560 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x149564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149560u;
            // 0x149564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149560) {
            ctx->pc = 0x1495A4u;
            goto label_1495a4;
        }
    }
    ctx->pc = 0x149568u;
label_149568:
    // 0x149568: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14956c:
    // 0x14956c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x14956cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_149570:
    // 0x149570: 0xc0450a6  jal         func_114298
label_149574:
    if (ctx->pc == 0x149574u) {
        ctx->pc = 0x149574u;
            // 0x149574: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->pc = 0x149578u;
        goto label_149578;
    }
    ctx->pc = 0x149570u;
    SET_GPR_U32(ctx, 31, 0x149578u);
    ctx->pc = 0x149574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149570u;
            // 0x149574: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149578u; }
        if (ctx->pc != 0x149578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149578u; }
        if (ctx->pc != 0x149578u) { return; }
    }
    ctx->pc = 0x149578u;
label_149578:
    // 0x149578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14957c:
    // 0x14957c: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
label_149580:
    if (ctx->pc == 0x149580u) {
        ctx->pc = 0x149580u;
            // 0x149580: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149584u;
        goto label_149584;
    }
    ctx->pc = 0x14957Cu;
    {
        const bool branch_taken_0x14957c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x149580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14957Cu;
            // 0x149580: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14957c) {
            ctx->pc = 0x14959Cu;
            goto label_14959c;
        }
    }
    ctx->pc = 0x149584u;
label_149584:
    // 0x149584: 0x8f8288a8  lw          $v0, -0x7758($gp)
    ctx->pc = 0x149584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_149588:
    // 0x149588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14958c:
    if (ctx->pc == 0x14958Cu) {
        ctx->pc = 0x14958Cu;
            // 0x14958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149590u;
        goto label_149590;
    }
    ctx->pc = 0x149588u;
    {
        const bool branch_taken_0x149588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149588u;
            // 0x14958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149588) {
            ctx->pc = 0x149598u;
            goto label_149598;
        }
    }
    ctx->pc = 0x149590u;
label_149590:
    // 0x149590: 0x40f809  jalr        $v0
label_149594:
    if (ctx->pc == 0x149594u) {
        ctx->pc = 0x149598u;
        goto label_149598;
    }
    ctx->pc = 0x149590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149598u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x149598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x149598u; }
            if (ctx->pc != 0x149598u) { return; }
        }
        }
    }
    ctx->pc = 0x149598u;
label_149598:
    // 0x149598: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14959c:
    // 0x14959c: 0x10000061  b           . + 4 + (0x61 << 2)
label_1495a0:
    if (ctx->pc == 0x1495A0u) {
        ctx->pc = 0x1495A4u;
        goto label_1495a4;
    }
    ctx->pc = 0x14959Cu;
    {
        const bool branch_taken_0x14959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14959c) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x1495A4u;
label_1495a4:
    // 0x1495a4: 0xc0450a6  jal         func_114298
label_1495a8:
    if (ctx->pc == 0x1495A8u) {
        ctx->pc = 0x1495A8u;
            // 0x1495a8: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->pc = 0x1495ACu;
        goto label_1495ac;
    }
    ctx->pc = 0x1495A4u;
    SET_GPR_U32(ctx, 31, 0x1495ACu);
    ctx->pc = 0x1495A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495A4u;
            // 0x1495a8: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495ACu; }
        if (ctx->pc != 0x1495ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495ACu; }
        if (ctx->pc != 0x1495ACu) { return; }
    }
    ctx->pc = 0x1495ACu;
label_1495ac:
    // 0x1495ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1495acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1495b0:
    // 0x1495b0: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
label_1495b4:
    if (ctx->pc == 0x1495B4u) {
        ctx->pc = 0x1495B4u;
            // 0x1495b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1495B8u;
        goto label_1495b8;
    }
    ctx->pc = 0x1495B0u;
    {
        const bool branch_taken_0x1495b0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1495B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495B0u;
            // 0x1495b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495b0) {
            ctx->pc = 0x1495D4u;
            goto label_1495d4;
        }
    }
    ctx->pc = 0x1495B8u;
label_1495b8:
    // 0x1495b8: 0x8f8288a8  lw          $v0, -0x7758($gp)
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_1495bc:
    // 0x1495bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1495c0:
    if (ctx->pc == 0x1495C0u) {
        ctx->pc = 0x1495C0u;
            // 0x1495c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1495C4u;
        goto label_1495c4;
    }
    ctx->pc = 0x1495BCu;
    {
        const bool branch_taken_0x1495bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495BCu;
            // 0x1495c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495bc) {
            ctx->pc = 0x1495CCu;
            goto label_1495cc;
        }
    }
    ctx->pc = 0x1495C4u;
label_1495c4:
    // 0x1495c4: 0x40f809  jalr        $v0
label_1495c8:
    if (ctx->pc == 0x1495C8u) {
        ctx->pc = 0x1495CCu;
        goto label_1495cc;
    }
    ctx->pc = 0x1495C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1495CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1495CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1495CCu; }
            if (ctx->pc != 0x1495CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1495CCu;
label_1495cc:
    // 0x1495cc: 0x10000055  b           . + 4 + (0x55 << 2)
label_1495d0:
    if (ctx->pc == 0x1495D0u) {
        ctx->pc = 0x1495D0u;
            // 0x1495d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1495D4u;
        goto label_1495d4;
    }
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495CCu;
            // 0x1495d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x1495D4u;
label_1495d4:
    // 0x1495d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1495d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1495d8:
    // 0x1495d8: 0xc0451a8  jal         func_1146A0
label_1495dc:
    if (ctx->pc == 0x1495DCu) {
        ctx->pc = 0x1495DCu;
            // 0x1495dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1495E0u;
        goto label_1495e0;
    }
    ctx->pc = 0x1495D8u;
    SET_GPR_U32(ctx, 31, 0x1495E0u);
    ctx->pc = 0x1495DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495D8u;
            // 0x1495dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495E0u; }
        if (ctx->pc != 0x1495E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495E0u; }
        if (ctx->pc != 0x1495E0u) { return; }
    }
    ctx->pc = 0x1495E0u;
label_1495e0:
    // 0x1495e0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1495e4:
    if (ctx->pc == 0x1495E4u) {
        ctx->pc = 0x1495E4u;
            // 0x1495e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1495E8u;
        goto label_1495e8;
    }
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495E0u;
            // 0x1495e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x1495ECu;
            goto label_1495ec;
        }
    }
    ctx->pc = 0x1495E8u;
label_1495e8:
    // 0x1495e8: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x1495e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_1495ec:
    // 0x1495ec: 0x6810007  bgez        $s4, . + 4 + (0x7 << 2)
label_1495f0:
    if (ctx->pc == 0x1495F0u) {
        ctx->pc = 0x1495F0u;
            // 0x1495f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1495F4u;
        goto label_1495f4;
    }
    ctx->pc = 0x1495ECu;
    {
        const bool branch_taken_0x1495ec = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1495F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495ECu;
            // 0x1495f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495ec) {
            ctx->pc = 0x14960Cu;
            goto label_14960c;
        }
    }
    ctx->pc = 0x1495F4u;
label_1495f4:
    // 0x1495f4: 0x8f8288a8  lw          $v0, -0x7758($gp)
    ctx->pc = 0x1495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_1495f8:
    // 0x1495f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1495fc:
    if (ctx->pc == 0x1495FCu) {
        ctx->pc = 0x1495FCu;
            // 0x1495fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149600u;
        goto label_149600;
    }
    ctx->pc = 0x1495F8u;
    {
        const bool branch_taken_0x1495f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495F8u;
            // 0x1495fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495f8) {
            ctx->pc = 0x149608u;
            goto label_149608;
        }
    }
    ctx->pc = 0x149600u;
label_149600:
    // 0x149600: 0x40f809  jalr        $v0
label_149604:
    if (ctx->pc == 0x149604u) {
        ctx->pc = 0x149608u;
        goto label_149608;
    }
    ctx->pc = 0x149600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149608u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x149608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x149608u; }
            if (ctx->pc != 0x149608u) { return; }
        }
        }
    }
    ctx->pc = 0x149608u;
label_149608:
    // 0x149608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14960c:
    // 0x14960c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
label_149610:
    if (ctx->pc == 0x149610u) {
        ctx->pc = 0x149610u;
            // 0x149610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149614u;
        goto label_149614;
    }
    ctx->pc = 0x14960Cu;
    {
        const bool branch_taken_0x14960c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x149610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14960Cu;
            // 0x149610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14960c) {
            ctx->pc = 0x149670u;
            goto label_149670;
        }
    }
    ctx->pc = 0x149614u;
label_149614:
    // 0x149614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x149614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_149618:
    // 0x149618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14961c:
    // 0x14961c: 0xc0451a8  jal         func_1146A0
label_149620:
    if (ctx->pc == 0x149620u) {
        ctx->pc = 0x149620u;
            // 0x149620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149624u;
        goto label_149624;
    }
    ctx->pc = 0x14961Cu;
    SET_GPR_U32(ctx, 31, 0x149624u);
    ctx->pc = 0x149620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14961Cu;
            // 0x149620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149624u; }
        if (ctx->pc != 0x149624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149624u; }
        if (ctx->pc != 0x149624u) { return; }
    }
    ctx->pc = 0x149624u;
label_149624:
    // 0x149624: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_149628:
    if (ctx->pc == 0x149628u) {
        ctx->pc = 0x149628u;
            // 0x149628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14962Cu;
        goto label_14962c;
    }
    ctx->pc = 0x149624u;
    {
        const bool branch_taken_0x149624 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149624u;
            // 0x149628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149624) {
            ctx->pc = 0x149644u;
            goto label_149644;
        }
    }
    ctx->pc = 0x14962Cu;
label_14962c:
    // 0x14962c: 0x8f8388a8  lw          $v1, -0x7758($gp)
    ctx->pc = 0x14962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_149630:
    // 0x149630: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_149634:
    if (ctx->pc == 0x149634u) {
        ctx->pc = 0x149634u;
            // 0x149634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149638u;
        goto label_149638;
    }
    ctx->pc = 0x149630u;
    {
        const bool branch_taken_0x149630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149630u;
            // 0x149634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149630) {
            ctx->pc = 0x149640u;
            goto label_149640;
        }
    }
    ctx->pc = 0x149638u;
label_149638:
    // 0x149638: 0x60f809  jalr        $v1
label_14963c:
    if (ctx->pc == 0x14963Cu) {
        ctx->pc = 0x149640u;
        goto label_149640;
    }
    ctx->pc = 0x149638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x149640u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x149640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x149640u; }
            if (ctx->pc != 0x149640u) { return; }
        }
        }
    }
    ctx->pc = 0x149640u;
label_149640:
    // 0x149640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x149640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_149644:
    // 0x149644: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x149644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_149648:
    // 0x149648: 0xc045236  jal         func_1148D8
label_14964c:
    if (ctx->pc == 0x14964Cu) {
        ctx->pc = 0x14964Cu;
            // 0x14964c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149650u;
        goto label_149650;
    }
    ctx->pc = 0x149648u;
    SET_GPR_U32(ctx, 31, 0x149650u);
    ctx->pc = 0x14964Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149648u;
            // 0x14964c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149650u; }
        if (ctx->pc != 0x149650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149650u; }
        if (ctx->pc != 0x149650u) { return; }
    }
    ctx->pc = 0x149650u;
label_149650:
    // 0x149650: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_149654:
    if (ctx->pc == 0x149654u) {
        ctx->pc = 0x149658u;
        goto label_149658;
    }
    ctx->pc = 0x149650u;
    {
        const bool branch_taken_0x149650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x149650) {
            ctx->pc = 0x14966Cu;
            goto label_14966c;
        }
    }
    ctx->pc = 0x149658u;
label_149658:
    // 0x149658: 0x8f8388a8  lw          $v1, -0x7758($gp)
    ctx->pc = 0x149658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
label_14965c:
    // 0x14965c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_149660:
    if (ctx->pc == 0x149660u) {
        ctx->pc = 0x149660u;
            // 0x149660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149664u;
        goto label_149664;
    }
    ctx->pc = 0x14965Cu;
    {
        const bool branch_taken_0x14965c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14965Cu;
            // 0x149660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14965c) {
            ctx->pc = 0x14966Cu;
            goto label_14966c;
        }
    }
    ctx->pc = 0x149664u;
label_149664:
    // 0x149664: 0x60f809  jalr        $v1
label_149668:
    if (ctx->pc == 0x149668u) {
        ctx->pc = 0x14966Cu;
        goto label_14966c;
    }
    ctx->pc = 0x149664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14966Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x14966Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14966Cu; }
            if (ctx->pc != 0x14966Cu) { return; }
        }
        }
    }
    ctx->pc = 0x14966Cu;
label_14966c:
    // 0x14966c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_149670:
    // 0x149670: 0xc045148  jal         func_114520
label_149674:
    if (ctx->pc == 0x149674u) {
        ctx->pc = 0x149678u;
        goto label_149678;
    }
    ctx->pc = 0x149670u;
    SET_GPR_U32(ctx, 31, 0x149678u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149678u; }
        if (ctx->pc != 0x149678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149678u; }
        if (ctx->pc != 0x149678u) { return; }
    }
    ctx->pc = 0x149678u;
label_149678:
    // 0x149678: 0x1000002a  b           . + 4 + (0x2A << 2)
label_14967c:
    if (ctx->pc == 0x14967Cu) {
        ctx->pc = 0x14967Cu;
            // 0x14967c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x149680u;
        goto label_149680;
    }
    ctx->pc = 0x149678u;
    {
        const bool branch_taken_0x149678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149678u;
            // 0x14967c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149678) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149680u;
label_149680:
    // 0x149680: 0xc0450a6  jal         func_114298
label_149684:
    if (ctx->pc == 0x149684u) {
        ctx->pc = 0x149684u;
            // 0x149684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x149688u;
        goto label_149688;
    }
    ctx->pc = 0x149680u;
    SET_GPR_U32(ctx, 31, 0x149688u);
    ctx->pc = 0x149684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149680u;
            // 0x149684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149688u; }
        if (ctx->pc != 0x149688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149688u; }
        if (ctx->pc != 0x149688u) { return; }
    }
    ctx->pc = 0x149688u;
label_149688:
    // 0x149688: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x149688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14968c:
    // 0x14968c: 0x6810007  bgez        $s4, . + 4 + (0x7 << 2)
label_149690:
    if (ctx->pc == 0x149690u) {
        ctx->pc = 0x149690u;
            // 0x149690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149694u;
        goto label_149694;
    }
    ctx->pc = 0x14968Cu;
    {
        const bool branch_taken_0x14968c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x149690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14968Cu;
            // 0x149690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14968c) {
            ctx->pc = 0x1496ACu;
            goto label_1496ac;
        }
    }
    ctx->pc = 0x149694u;
label_149694:
    // 0x149694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_149698:
    // 0x149698: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_14969c:
    if (ctx->pc == 0x14969Cu) {
        ctx->pc = 0x14969Cu;
            // 0x14969c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1496A0u;
        goto label_1496a0;
    }
    ctx->pc = 0x149698u;
    {
        const bool branch_taken_0x149698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149698u;
            // 0x14969c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149698) {
            ctx->pc = 0x1496A4u;
            goto label_1496a4;
        }
    }
    ctx->pc = 0x1496A0u;
label_1496a0:
    // 0x1496a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1496a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1496a4:
    // 0x1496a4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1496a8:
    if (ctx->pc == 0x1496A8u) {
        ctx->pc = 0x1496ACu;
        goto label_1496ac;
    }
    ctx->pc = 0x1496A4u;
    {
        const bool branch_taken_0x1496a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1496a4) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x1496ACu;
label_1496ac:
    // 0x1496ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1496acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1496b0:
    // 0x1496b0: 0xc0451a8  jal         func_1146A0
label_1496b4:
    if (ctx->pc == 0x1496B4u) {
        ctx->pc = 0x1496B4u;
            // 0x1496b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1496B8u;
        goto label_1496b8;
    }
    ctx->pc = 0x1496B0u;
    SET_GPR_U32(ctx, 31, 0x1496B8u);
    ctx->pc = 0x1496B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496B0u;
            // 0x1496b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496B8u; }
        if (ctx->pc != 0x1496B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496B8u; }
        if (ctx->pc != 0x1496B8u) { return; }
    }
    ctx->pc = 0x1496B8u;
label_1496b8:
    // 0x1496b8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1496bc:
    if (ctx->pc == 0x1496BCu) {
        ctx->pc = 0x1496BCu;
            // 0x1496bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1496C0u;
        goto label_1496c0;
    }
    ctx->pc = 0x1496B8u;
    {
        const bool branch_taken_0x1496b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496B8u;
            // 0x1496bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496b8) {
            ctx->pc = 0x1496C4u;
            goto label_1496c4;
        }
    }
    ctx->pc = 0x1496C0u;
label_1496c0:
    // 0x1496c0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1496c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_1496c4:
    // 0x1496c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1496c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1496c8:
    // 0x1496c8: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_1496cc:
    if (ctx->pc == 0x1496CCu) {
        ctx->pc = 0x1496CCu;
            // 0x1496cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1496D0u;
        goto label_1496d0;
    }
    ctx->pc = 0x1496C8u;
    {
        const bool branch_taken_0x1496c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1496CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496C8u;
            // 0x1496cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496c8) {
            ctx->pc = 0x149718u;
            goto label_149718;
        }
    }
    ctx->pc = 0x1496D0u;
label_1496d0:
    // 0x1496d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1496d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1496d4:
    // 0x1496d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1496d8:
    // 0x1496d8: 0xc0451a8  jal         func_1146A0
label_1496dc:
    if (ctx->pc == 0x1496DCu) {
        ctx->pc = 0x1496DCu;
            // 0x1496dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1496E0u;
        goto label_1496e0;
    }
    ctx->pc = 0x1496D8u;
    SET_GPR_U32(ctx, 31, 0x1496E0u);
    ctx->pc = 0x1496DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496D8u;
            // 0x1496dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496E0u; }
        if (ctx->pc != 0x1496E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496E0u; }
        if (ctx->pc != 0x1496E0u) { return; }
    }
    ctx->pc = 0x1496E0u;
label_1496e0:
    // 0x1496e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1496e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1496e4:
    // 0x1496e4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_1496e8:
    if (ctx->pc == 0x1496E8u) {
        ctx->pc = 0x1496E8u;
            // 0x1496e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1496ECu;
        goto label_1496ec;
    }
    ctx->pc = 0x1496E4u;
    {
        const bool branch_taken_0x1496e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1496E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496E4u;
            // 0x1496e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496e4) {
            ctx->pc = 0x149708u;
            goto label_149708;
        }
    }
    ctx->pc = 0x1496ECu;
label_1496ec:
    // 0x1496ec: 0xc045148  jal         func_114520
label_1496f0:
    if (ctx->pc == 0x1496F0u) {
        ctx->pc = 0x1496F0u;
            // 0x1496f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1496F4u;
        goto label_1496f4;
    }
    ctx->pc = 0x1496ECu;
    SET_GPR_U32(ctx, 31, 0x1496F4u);
    ctx->pc = 0x1496F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496ECu;
            // 0x1496f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496F4u; }
        if (ctx->pc != 0x1496F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496F4u; }
        if (ctx->pc != 0x1496F4u) { return; }
    }
    ctx->pc = 0x1496F4u;
label_1496f4:
    // 0x1496f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1496f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1496f8:
    // 0x1496f8: 0xc0450a6  jal         func_114298
label_1496fc:
    if (ctx->pc == 0x1496FCu) {
        ctx->pc = 0x1496FCu;
            // 0x1496fc: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->pc = 0x149700u;
        goto label_149700;
    }
    ctx->pc = 0x1496F8u;
    SET_GPR_U32(ctx, 31, 0x149700u);
    ctx->pc = 0x1496FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496F8u;
            // 0x1496fc: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149700u; }
        if (ctx->pc != 0x149700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149700u; }
        if (ctx->pc != 0x149700u) { return; }
    }
    ctx->pc = 0x149700u;
label_149700:
    // 0x149700: 0x10000008  b           . + 4 + (0x8 << 2)
label_149704:
    if (ctx->pc == 0x149704u) {
        ctx->pc = 0x149708u;
        goto label_149708;
    }
    ctx->pc = 0x149700u;
    {
        const bool branch_taken_0x149700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149700) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149708u;
label_149708:
    // 0x149708: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x149708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14970c:
    // 0x14970c: 0xc045236  jal         func_1148D8
label_149710:
    if (ctx->pc == 0x149710u) {
        ctx->pc = 0x149710u;
            // 0x149710: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x149714u;
        goto label_149714;
    }
    ctx->pc = 0x14970Cu;
    SET_GPR_U32(ctx, 31, 0x149714u);
    ctx->pc = 0x149710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14970Cu;
            // 0x149710: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149714u; }
        if (ctx->pc != 0x149714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149714u; }
        if (ctx->pc != 0x149714u) { return; }
    }
    ctx->pc = 0x149714u;
label_149714:
    // 0x149714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x149714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_149718:
    // 0x149718: 0xc045148  jal         func_114520
label_14971c:
    if (ctx->pc == 0x14971Cu) {
        ctx->pc = 0x149720u;
        goto label_149720;
    }
    ctx->pc = 0x149718u;
    SET_GPR_U32(ctx, 31, 0x149720u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149720u; }
        if (ctx->pc != 0x149720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149720u; }
        if (ctx->pc != 0x149720u) { return; }
    }
    ctx->pc = 0x149720u;
label_149720:
    // 0x149720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149724:
    // 0x149724: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x149724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_149728:
    // 0x149728: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14972c:
    // 0x14972c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14972cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_149730:
    // 0x149730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149734:
    // 0x149734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149738:
    // 0x149738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14973c:
    // 0x14973c: 0x3e00008  jr          $ra
label_149740:
    if (ctx->pc == 0x149740u) {
        ctx->pc = 0x149740u;
            // 0x149740: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x149744u;
        goto label_fallthrough_0x14973c;
    }
    ctx->pc = 0x14973Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14973Cu;
            // 0x149740: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14973c:
    ctx->pc = 0x149744u;
}
