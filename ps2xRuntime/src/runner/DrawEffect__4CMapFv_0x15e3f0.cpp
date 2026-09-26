#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffect__4CMapFv
// Address: 0x15e3f0 - 0x15e5d0
void DrawEffect__4CMapFv_0x15e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffect__4CMapFv_0x15e3f0");
#endif

    switch (ctx->pc) {
        case 0x15e3f0u: goto label_15e3f0;
        case 0x15e3f4u: goto label_15e3f4;
        case 0x15e3f8u: goto label_15e3f8;
        case 0x15e3fcu: goto label_15e3fc;
        case 0x15e400u: goto label_15e400;
        case 0x15e404u: goto label_15e404;
        case 0x15e408u: goto label_15e408;
        case 0x15e40cu: goto label_15e40c;
        case 0x15e410u: goto label_15e410;
        case 0x15e414u: goto label_15e414;
        case 0x15e418u: goto label_15e418;
        case 0x15e41cu: goto label_15e41c;
        case 0x15e420u: goto label_15e420;
        case 0x15e424u: goto label_15e424;
        case 0x15e428u: goto label_15e428;
        case 0x15e42cu: goto label_15e42c;
        case 0x15e430u: goto label_15e430;
        case 0x15e434u: goto label_15e434;
        case 0x15e438u: goto label_15e438;
        case 0x15e43cu: goto label_15e43c;
        case 0x15e440u: goto label_15e440;
        case 0x15e444u: goto label_15e444;
        case 0x15e448u: goto label_15e448;
        case 0x15e44cu: goto label_15e44c;
        case 0x15e450u: goto label_15e450;
        case 0x15e454u: goto label_15e454;
        case 0x15e458u: goto label_15e458;
        case 0x15e45cu: goto label_15e45c;
        case 0x15e460u: goto label_15e460;
        case 0x15e464u: goto label_15e464;
        case 0x15e468u: goto label_15e468;
        case 0x15e46cu: goto label_15e46c;
        case 0x15e470u: goto label_15e470;
        case 0x15e474u: goto label_15e474;
        case 0x15e478u: goto label_15e478;
        case 0x15e47cu: goto label_15e47c;
        case 0x15e480u: goto label_15e480;
        case 0x15e484u: goto label_15e484;
        case 0x15e488u: goto label_15e488;
        case 0x15e48cu: goto label_15e48c;
        case 0x15e490u: goto label_15e490;
        case 0x15e494u: goto label_15e494;
        case 0x15e498u: goto label_15e498;
        case 0x15e49cu: goto label_15e49c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4a8u: goto label_15e4a8;
        case 0x15e4acu: goto label_15e4ac;
        case 0x15e4b0u: goto label_15e4b0;
        case 0x15e4b4u: goto label_15e4b4;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4c0u: goto label_15e4c0;
        case 0x15e4c4u: goto label_15e4c4;
        case 0x15e4c8u: goto label_15e4c8;
        case 0x15e4ccu: goto label_15e4cc;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4d4u: goto label_15e4d4;
        case 0x15e4d8u: goto label_15e4d8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e0u: goto label_15e4e0;
        case 0x15e4e4u: goto label_15e4e4;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e4ecu: goto label_15e4ec;
        case 0x15e4f0u: goto label_15e4f0;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e4f8u: goto label_15e4f8;
        case 0x15e4fcu: goto label_15e4fc;
        case 0x15e500u: goto label_15e500;
        case 0x15e504u: goto label_15e504;
        case 0x15e508u: goto label_15e508;
        case 0x15e50cu: goto label_15e50c;
        case 0x15e510u: goto label_15e510;
        case 0x15e514u: goto label_15e514;
        case 0x15e518u: goto label_15e518;
        case 0x15e51cu: goto label_15e51c;
        case 0x15e520u: goto label_15e520;
        case 0x15e524u: goto label_15e524;
        case 0x15e528u: goto label_15e528;
        case 0x15e52cu: goto label_15e52c;
        case 0x15e530u: goto label_15e530;
        case 0x15e534u: goto label_15e534;
        case 0x15e538u: goto label_15e538;
        case 0x15e53cu: goto label_15e53c;
        case 0x15e540u: goto label_15e540;
        case 0x15e544u: goto label_15e544;
        case 0x15e548u: goto label_15e548;
        case 0x15e54cu: goto label_15e54c;
        case 0x15e550u: goto label_15e550;
        case 0x15e554u: goto label_15e554;
        case 0x15e558u: goto label_15e558;
        case 0x15e55cu: goto label_15e55c;
        case 0x15e560u: goto label_15e560;
        case 0x15e564u: goto label_15e564;
        case 0x15e568u: goto label_15e568;
        case 0x15e56cu: goto label_15e56c;
        case 0x15e570u: goto label_15e570;
        case 0x15e574u: goto label_15e574;
        case 0x15e578u: goto label_15e578;
        case 0x15e57cu: goto label_15e57c;
        case 0x15e580u: goto label_15e580;
        case 0x15e584u: goto label_15e584;
        case 0x15e588u: goto label_15e588;
        case 0x15e58cu: goto label_15e58c;
        case 0x15e590u: goto label_15e590;
        case 0x15e594u: goto label_15e594;
        case 0x15e598u: goto label_15e598;
        case 0x15e59cu: goto label_15e59c;
        case 0x15e5a0u: goto label_15e5a0;
        case 0x15e5a4u: goto label_15e5a4;
        case 0x15e5a8u: goto label_15e5a8;
        case 0x15e5acu: goto label_15e5ac;
        case 0x15e5b0u: goto label_15e5b0;
        case 0x15e5b4u: goto label_15e5b4;
        case 0x15e5b8u: goto label_15e5b8;
        case 0x15e5bcu: goto label_15e5bc;
        case 0x15e5c0u: goto label_15e5c0;
        case 0x15e5c4u: goto label_15e5c4;
        case 0x15e5c8u: goto label_15e5c8;
        case 0x15e5ccu: goto label_15e5cc;
        default: break;
    }

    ctx->pc = 0x15e3f0u;

label_15e3f0:
    // 0x15e3f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15e3f4:
    // 0x15e3f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15e3f8:
    // 0x15e3f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e3fc:
    // 0x15e3fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e400:
    // 0x15e400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e404:
    // 0x15e404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e408:
    // 0x15e408: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e40c:
    // 0x15e40c: 0xc05834c  jal         func_160D30
label_15e410:
    if (ctx->pc == 0x15E410u) {
        ctx->pc = 0x15E410u;
            // 0x15e410: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15E414u;
        goto label_15e414;
    }
    ctx->pc = 0x15E40Cu;
    SET_GPR_U32(ctx, 31, 0x15E414u);
    ctx->pc = 0x15E410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E40Cu;
            // 0x15e410: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E414u; }
        if (ctx->pc != 0x15E414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E414u; }
        if (ctx->pc != 0x15E414u) { return; }
    }
    ctx->pc = 0x15E414u;
label_15e414:
    // 0x15e414: 0xc05f4e4  jal         func_17D390
label_15e418:
    if (ctx->pc == 0x15E418u) {
        ctx->pc = 0x15E418u;
            // 0x15e418: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->pc = 0x15E41Cu;
        goto label_15e41c;
    }
    ctx->pc = 0x15E414u;
    SET_GPR_U32(ctx, 31, 0x15E41Cu);
    ctx->pc = 0x15E418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E414u;
            // 0x15e418: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D390u;
    if (runtime->hasFunction(0x17D390u)) {
        auto targetFn = runtime->lookupFunction(0x17D390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E41Cu; }
        if (ctx->pc != 0x15E41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePacket__11CEffectListFv_0x17d390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E41Cu; }
        if (ctx->pc != 0x15E41Cu) { return; }
    }
    ctx->pc = 0x15E41Cu;
label_15e41c:
    // 0x15e41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e420:
    // 0x15e420: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x15e420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_15e424:
    // 0x15e424: 0xc0575cc  jal         func_15D730
label_15e428:
    if (ctx->pc == 0x15E428u) {
        ctx->pc = 0x15E428u;
            // 0x15e428: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x15E42Cu;
        goto label_15e42c;
    }
    ctx->pc = 0x15E424u;
    SET_GPR_U32(ctx, 31, 0x15E42Cu);
    ctx->pc = 0x15E428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E424u;
            // 0x15e428: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E42Cu; }
        if (ctx->pc != 0x15E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E42Cu; }
        if (ctx->pc != 0x15E42Cu) { return; }
    }
    ctx->pc = 0x15E42Cu;
label_15e42c:
    // 0x15e42c: 0x83828910  lb          $v0, -0x76F0($gp)
    ctx->pc = 0x15e42cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_15e430:
    // 0x15e430: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_15e434:
    if (ctx->pc == 0x15E434u) {
        ctx->pc = 0x15E434u;
            // 0x15e434: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15E438u;
        goto label_15e438;
    }
    ctx->pc = 0x15E430u;
    {
        const bool branch_taken_0x15e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E430u;
            // 0x15e434: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e430) {
            ctx->pc = 0x15E450u;
            goto label_15e450;
        }
    }
    ctx->pc = 0x15E438u;
label_15e438:
    // 0x15e438: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x15e438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_15e43c:
    // 0x15e43c: 0xc04d6d8  jal         func_135B60
label_15e440:
    if (ctx->pc == 0x15E440u) {
        ctx->pc = 0x15E440u;
            // 0x15e440: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->pc = 0x15E444u;
        goto label_15e444;
    }
    ctx->pc = 0x15E43Cu;
    SET_GPR_U32(ctx, 31, 0x15E444u);
    ctx->pc = 0x15E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E43Cu;
            // 0x15e440: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E444u; }
        if (ctx->pc != 0x15E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E444u; }
        if (ctx->pc != 0x15E444u) { return; }
    }
    ctx->pc = 0x15E444u;
label_15e444:
    // 0x15e444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e448:
    // 0x15e448: 0xa3828910  sb          $v0, -0x76F0($gp)
    ctx->pc = 0x15e448u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936848), (uint8_t)GPR_U32(ctx, 2));
label_15e44c:
    // 0x15e44c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15e450:
    // 0x15e450: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
label_15e454:
    // 0x15e454: 0xac220128  sw          $v0, 0x128($at)
    ctx->pc = 0x15e454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 296), GPR_U32(ctx, 2));
label_15e458:
    // 0x15e458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e45c:
    // 0x15e45c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e460:
    // 0x15e460: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x15e460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
label_15e464:
    // 0x15e464: 0xac220140  sw          $v0, 0x140($at)
    ctx->pc = 0x15e464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 320), GPR_U32(ctx, 2));
label_15e468:
    // 0x15e468: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x15e468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
label_15e46c:
    // 0x15e46c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x15e46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
label_15e470:
    // 0x15e470: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_15e474:
    // 0x15e474: 0xac250158  sw          $a1, 0x158($at)
    ctx->pc = 0x15e474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 344), GPR_U32(ctx, 5));
label_15e478:
    // 0x15e478: 0x3442eb85  ori         $v0, $v0, 0xEB85
    ctx->pc = 0x15e478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60293);
label_15e47c:
    // 0x15e47c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x15e47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
label_15e480:
    // 0x15e480: 0xc0a761c  jal         func_29D870
label_15e484:
    if (ctx->pc == 0x15E484u) {
        ctx->pc = 0x15E484u;
            // 0x15e484: 0xac22019c  sw          $v0, 0x19C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 412), GPR_U32(ctx, 2));
        ctx->pc = 0x15E488u;
        goto label_15e488;
    }
    ctx->pc = 0x15E480u;
    SET_GPR_U32(ctx, 31, 0x15E488u);
    ctx->pc = 0x15E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E480u;
            // 0x15e484: 0xac22019c  sw          $v0, 0x19C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E488u; }
        if (ctx->pc != 0x15E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E488u; }
        if (ctx->pc != 0x15E488u) { return; }
    }
    ctx->pc = 0x15E488u;
label_15e488:
    // 0x15e488: 0xc0a762c  jal         func_29D8B0
label_15e48c:
    if (ctx->pc == 0x15E48Cu) {
        ctx->pc = 0x15E48Cu;
            // 0x15e48c: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->pc = 0x15E490u;
        goto label_15e490;
    }
    ctx->pc = 0x15E488u;
    SET_GPR_U32(ctx, 31, 0x15E490u);
    ctx->pc = 0x15E48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E488u;
            // 0x15e48c: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E490u; }
        if (ctx->pc != 0x15E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E490u; }
        if (ctx->pc != 0x15E490u) { return; }
    }
    ctx->pc = 0x15E490u;
label_15e490:
    // 0x15e490: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_15e494:
    if (ctx->pc == 0x15E494u) {
        ctx->pc = 0x15E494u;
            // 0x15e494: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E498u;
        goto label_15e498;
    }
    ctx->pc = 0x15E490u;
    {
        const bool branch_taken_0x15e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E490u;
            // 0x15e494: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e490) {
            ctx->pc = 0x15E4F0u;
            goto label_15e4f0;
        }
    }
    ctx->pc = 0x15E498u;
label_15e498:
    // 0x15e498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e49c:
    // 0x15e49c: 0xc0a71b0  jal         func_29C6C0
label_15e4a0:
    if (ctx->pc == 0x15E4A0u) {
        ctx->pc = 0x15E4A0u;
            // 0x15e4a0: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x15E4A4u;
        goto label_15e4a4;
    }
    ctx->pc = 0x15E49Cu;
    SET_GPR_U32(ctx, 31, 0x15E4A4u);
    ctx->pc = 0x15E4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E49Cu;
            // 0x15e4a0: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A4u; }
        if (ctx->pc != 0x15E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A4u; }
        if (ctx->pc != 0x15E4A4u) { return; }
    }
    ctx->pc = 0x15E4A4u;
label_15e4a4:
    // 0x15e4a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_15e4a8:
    if (ctx->pc == 0x15E4A8u) {
        ctx->pc = 0x15E4ACu;
        goto label_15e4ac;
    }
    ctx->pc = 0x15E4A4u;
    {
        const bool branch_taken_0x15e4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4a4) {
            ctx->pc = 0x15E4E0u;
            goto label_15e4e0;
        }
    }
    ctx->pc = 0x15E4ACu;
label_15e4ac:
    // 0x15e4ac: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_15e4b0:
    // 0x15e4b0: 0xc05f4b8  jal         func_17D2E0
label_15e4b4:
    if (ctx->pc == 0x15E4B4u) {
        ctx->pc = 0x15E4B4u;
            // 0x15e4b4: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->pc = 0x15E4B8u;
        goto label_15e4b8;
    }
    ctx->pc = 0x15E4B0u;
    SET_GPR_U32(ctx, 31, 0x15E4B8u);
    ctx->pc = 0x15E4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4B0u;
            // 0x15e4b4: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D2E0u;
    if (runtime->hasFunction(0x17D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x17D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4B8u; }
        if (ctx->pc != 0x15E4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffectVisual__11CEffectListFi_0x17d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4B8u; }
        if (ctx->pc != 0x15E4B8u) { return; }
    }
    ctx->pc = 0x15E4B8u;
label_15e4b8:
    // 0x15e4b8: 0x8e190070  lw          $t9, 0x70($s0)
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_15e4bc:
    // 0x15e4bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e4c0:
    // 0x15e4c0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_15e4c4:
    // 0x15e4c4: 0x320f809  jalr        $t9
label_15e4c8:
    if (ctx->pc == 0x15E4C8u) {
        ctx->pc = 0x15E4C8u;
            // 0x15e4c8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x15E4CCu;
        goto label_15e4cc;
    }
    ctx->pc = 0x15E4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E4CCu);
        ctx->pc = 0x15E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4C4u;
            // 0x15e4c8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E4CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E4CCu; }
            if (ctx->pc != 0x15E4CCu) { return; }
        }
        }
    }
    ctx->pc = 0x15E4CCu;
label_15e4cc:
    // 0x15e4cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_15e4d0:
    // 0x15e4d0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15e4d4:
    // 0x15e4d4: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_15e4d8:
    // 0x15e4d8: 0xc050bf4  jal         func_142FD0
label_15e4dc:
    if (ctx->pc == 0x15E4DCu) {
        ctx->pc = 0x15E4DCu;
            // 0x15e4dc: 0xae020164  sw          $v0, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
        ctx->pc = 0x15E4E0u;
        goto label_15e4e0;
    }
    ctx->pc = 0x15E4D8u;
    SET_GPR_U32(ctx, 31, 0x15E4E0u);
    ctx->pc = 0x15E4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4D8u;
            // 0x15e4dc: 0xae020164  sw          $v0, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4E0u; }
        if (ctx->pc != 0x15E4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4E0u; }
        if (ctx->pc != 0x15E4E0u) { return; }
    }
    ctx->pc = 0x15E4E0u;
label_15e4e0:
    // 0x15e4e0: 0xc0a762c  jal         func_29D8B0
label_15e4e4:
    if (ctx->pc == 0x15E4E4u) {
        ctx->pc = 0x15E4E4u;
            // 0x15e4e4: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->pc = 0x15E4E8u;
        goto label_15e4e8;
    }
    ctx->pc = 0x15E4E0u;
    SET_GPR_U32(ctx, 31, 0x15E4E8u);
    ctx->pc = 0x15E4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4E0u;
            // 0x15e4e4: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4E8u; }
        if (ctx->pc != 0x15E4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4E8u; }
        if (ctx->pc != 0x15E4E8u) { return; }
    }
    ctx->pc = 0x15E4E8u;
label_15e4e8:
    // 0x15e4e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_15e4ec:
    if (ctx->pc == 0x15E4ECu) {
        ctx->pc = 0x15E4ECu;
            // 0x15e4ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E4F0u;
        goto label_15e4f0;
    }
    ctx->pc = 0x15E4E8u;
    {
        const bool branch_taken_0x15e4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4E8u;
            // 0x15e4ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e8) {
            ctx->pc = 0x15E498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e498;
        }
    }
    ctx->pc = 0x15E4F0u;
label_15e4f0:
    // 0x15e4f0: 0xc0a7638  jal         func_29D8E0
label_15e4f4:
    if (ctx->pc == 0x15E4F4u) {
        ctx->pc = 0x15E4F4u;
            // 0x15e4f4: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->pc = 0x15E4F8u;
        goto label_15e4f8;
    }
    ctx->pc = 0x15E4F0u;
    SET_GPR_U32(ctx, 31, 0x15E4F8u);
    ctx->pc = 0x15E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4F0u;
            // 0x15e4f4: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4F8u; }
        if (ctx->pc != 0x15E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4F8u; }
        if (ctx->pc != 0x15E4F8u) { return; }
    }
    ctx->pc = 0x15E4F8u;
label_15e4f8:
    // 0x15e4f8: 0x8e320364  lw          $s2, 0x364($s1)
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_15e4fc:
    // 0x15e4fc: 0x10000028  b           . + 4 + (0x28 << 2)
label_15e500:
    if (ctx->pc == 0x15E500u) {
        ctx->pc = 0x15E500u;
            // 0x15e500: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E504u;
        goto label_15e504;
    }
    ctx->pc = 0x15E4FCu;
    {
        const bool branch_taken_0x15e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4FCu;
            // 0x15e500: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4fc) {
            ctx->pc = 0x15E5A0u;
            goto label_15e5a0;
        }
    }
    ctx->pc = 0x15E504u;
label_15e504:
    // 0x15e504: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15e508:
    // 0x15e508: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e50c:
    // 0x15e50c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_15e510:
    // 0x15e510: 0x320f809  jalr        $t9
label_15e514:
    if (ctx->pc == 0x15E514u) {
        ctx->pc = 0x15E514u;
            // 0x15e514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E518u;
        goto label_15e518;
    }
    ctx->pc = 0x15E510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E518u);
        ctx->pc = 0x15E514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E510u;
            // 0x15e514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E518u; }
            if (ctx->pc != 0x15E518u) { return; }
        }
        }
    }
    ctx->pc = 0x15E518u;
label_15e518:
    // 0x15e518: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_15e51c:
    if (ctx->pc == 0x15E51Cu) {
        ctx->pc = 0x15E51Cu;
            // 0x15e51c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->pc = 0x15E520u;
        goto label_15e520;
    }
    ctx->pc = 0x15E518u;
    {
        const bool branch_taken_0x15e518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E518u;
            // 0x15e51c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e518) {
            ctx->pc = 0x15E598u;
            goto label_15e598;
        }
    }
    ctx->pc = 0x15E520u;
label_15e520:
    // 0x15e520: 0xc0a761c  jal         func_29D870
label_15e524:
    if (ctx->pc == 0x15E524u) {
        ctx->pc = 0x15E524u;
            // 0x15e524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15E528u;
        goto label_15e528;
    }
    ctx->pc = 0x15E520u;
    SET_GPR_U32(ctx, 31, 0x15E528u);
    ctx->pc = 0x15E524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E520u;
            // 0x15e524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E528u; }
        if (ctx->pc != 0x15E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E528u; }
        if (ctx->pc != 0x15E528u) { return; }
    }
    ctx->pc = 0x15E528u;
label_15e528:
    // 0x15e528: 0xc0a762c  jal         func_29D8B0
label_15e52c:
    if (ctx->pc == 0x15E52Cu) {
        ctx->pc = 0x15E52Cu;
            // 0x15e52c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->pc = 0x15E530u;
        goto label_15e530;
    }
    ctx->pc = 0x15E528u;
    SET_GPR_U32(ctx, 31, 0x15E530u);
    ctx->pc = 0x15E52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E528u;
            // 0x15e52c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E530u; }
        if (ctx->pc != 0x15E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E530u; }
        if (ctx->pc != 0x15E530u) { return; }
    }
    ctx->pc = 0x15E530u;
label_15e530:
    // 0x15e530: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_15e534:
    if (ctx->pc == 0x15E534u) {
        ctx->pc = 0x15E534u;
            // 0x15e534: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E538u;
        goto label_15e538;
    }
    ctx->pc = 0x15E530u;
    {
        const bool branch_taken_0x15e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E530u;
            // 0x15e534: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e530) {
            ctx->pc = 0x15E598u;
            goto label_15e598;
        }
    }
    ctx->pc = 0x15E538u;
label_15e538:
    // 0x15e538: 0x8e8201b0  lw          $v0, 0x1B0($s4)
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_15e53c:
    // 0x15e53c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_15e540:
    if (ctx->pc == 0x15E540u) {
        ctx->pc = 0x15E540u;
            // 0x15e540: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x15E544u;
        goto label_15e544;
    }
    ctx->pc = 0x15E53Cu;
    {
        const bool branch_taken_0x15e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E53Cu;
            // 0x15e540: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e53c) {
            ctx->pc = 0x15E588u;
            goto label_15e588;
        }
    }
    ctx->pc = 0x15E544u;
label_15e544:
    // 0x15e544: 0xc04db0c  jal         func_136C30
label_15e548:
    if (ctx->pc == 0x15E548u) {
        ctx->pc = 0x15E548u;
            // 0x15e548: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->pc = 0x15E54Cu;
        goto label_15e54c;
    }
    ctx->pc = 0x15E544u;
    SET_GPR_U32(ctx, 31, 0x15E54Cu);
    ctx->pc = 0x15E548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E544u;
            // 0x15e548: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E54Cu; }
        if (ctx->pc != 0x15E54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E54Cu; }
        if (ctx->pc != 0x15E54Cu) { return; }
    }
    ctx->pc = 0x15E54Cu;
label_15e54c:
    // 0x15e54c: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x15e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_15e550:
    // 0x15e550: 0xc05f4b8  jal         func_17D2E0
label_15e554:
    if (ctx->pc == 0x15E554u) {
        ctx->pc = 0x15E554u;
            // 0x15e554: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->pc = 0x15E558u;
        goto label_15e558;
    }
    ctx->pc = 0x15E550u;
    SET_GPR_U32(ctx, 31, 0x15E558u);
    ctx->pc = 0x15E554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E550u;
            // 0x15e554: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D2E0u;
    if (runtime->hasFunction(0x17D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x17D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E558u; }
        if (ctx->pc != 0x15E558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffectVisual__11CEffectListFi_0x17d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E558u; }
        if (ctx->pc != 0x15E558u) { return; }
    }
    ctx->pc = 0x15E558u;
label_15e558:
    // 0x15e558: 0x8e990070  lw          $t9, 0x70($s4)
    ctx->pc = 0x15e558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_15e55c:
    // 0x15e55c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e560:
    // 0x15e560: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_15e564:
    // 0x15e564: 0x320f809  jalr        $t9
label_15e568:
    if (ctx->pc == 0x15E568u) {
        ctx->pc = 0x15E568u;
            // 0x15e568: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x15E56Cu;
        goto label_15e56c;
    }
    ctx->pc = 0x15E564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E56Cu);
        ctx->pc = 0x15E568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E564u;
            // 0x15e568: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E56Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E56Cu; }
            if (ctx->pc != 0x15E56Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15E56Cu;
label_15e56c:
    // 0x15e56c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_15e570:
    // 0x15e570: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x15e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_15e574:
    // 0x15e574: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x15e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_15e578:
    // 0x15e578: 0xc050bf4  jal         func_142FD0
label_15e57c:
    if (ctx->pc == 0x15E57Cu) {
        ctx->pc = 0x15E57Cu;
            // 0x15e57c: 0xae820164  sw          $v0, 0x164($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 356), GPR_U32(ctx, 2));
        ctx->pc = 0x15E580u;
        goto label_15e580;
    }
    ctx->pc = 0x15E578u;
    SET_GPR_U32(ctx, 31, 0x15E580u);
    ctx->pc = 0x15E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E578u;
            // 0x15e57c: 0xae820164  sw          $v0, 0x164($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E580u; }
        if (ctx->pc != 0x15E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E580u; }
        if (ctx->pc != 0x15E580u) { return; }
    }
    ctx->pc = 0x15E580u;
label_15e580:
    // 0x15e580: 0xc04db18  jal         func_136C60
label_15e584:
    if (ctx->pc == 0x15E584u) {
        ctx->pc = 0x15E584u;
            // 0x15e584: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x15E588u;
        goto label_15e588;
    }
    ctx->pc = 0x15E580u;
    SET_GPR_U32(ctx, 31, 0x15E588u);
    ctx->pc = 0x15E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E580u;
            // 0x15e584: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E588u; }
        if (ctx->pc != 0x15E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E588u; }
        if (ctx->pc != 0x15E588u) { return; }
    }
    ctx->pc = 0x15E588u;
label_15e588:
    // 0x15e588: 0xc0a762c  jal         func_29D8B0
label_15e58c:
    if (ctx->pc == 0x15E58Cu) {
        ctx->pc = 0x15E58Cu;
            // 0x15e58c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->pc = 0x15E590u;
        goto label_15e590;
    }
    ctx->pc = 0x15E588u;
    SET_GPR_U32(ctx, 31, 0x15E590u);
    ctx->pc = 0x15E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E588u;
            // 0x15e58c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E590u; }
        if (ctx->pc != 0x15E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E590u; }
        if (ctx->pc != 0x15E590u) { return; }
    }
    ctx->pc = 0x15E590u;
label_15e590:
    // 0x15e590: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_15e594:
    if (ctx->pc == 0x15E594u) {
        ctx->pc = 0x15E594u;
            // 0x15e594: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E598u;
        goto label_15e598;
    }
    ctx->pc = 0x15E590u;
    {
        const bool branch_taken_0x15e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E590u;
            // 0x15e594: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e590) {
            ctx->pc = 0x15E538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e538;
        }
    }
    ctx->pc = 0x15E598u;
label_15e598:
    // 0x15e598: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15e59c:
    // 0x15e59c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15e5a0:
    // 0x15e5a0: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x15e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
label_15e5a4:
    // 0x15e5a4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15e5a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15e5a8:
    // 0x15e5a8: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_15e5ac:
    if (ctx->pc == 0x15E5ACu) {
        ctx->pc = 0x15E5B0u;
        goto label_15e5b0;
    }
    ctx->pc = 0x15E5A8u;
    {
        const bool branch_taken_0x15e5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e5a8) {
            ctx->pc = 0x15E504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e504;
        }
    }
    ctx->pc = 0x15E5B0u;
label_15e5b0:
    // 0x15e5b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15e5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15e5b4:
    // 0x15e5b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e5b8:
    // 0x15e5b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e5b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e5bc:
    // 0x15e5bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e5c0:
    // 0x15e5c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e5c4:
    // 0x15e5c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e5c8:
    // 0x15e5c8: 0x3e00008  jr          $ra
label_15e5cc:
    if (ctx->pc == 0x15E5CCu) {
        ctx->pc = 0x15E5CCu;
            // 0x15e5cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15E5D0u;
        goto label_fallthrough_0x15e5c8;
    }
    ctx->pc = 0x15E5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5C8u;
            // 0x15e5cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15e5c8:
    ctx->pc = 0x15E5D0u;
}
