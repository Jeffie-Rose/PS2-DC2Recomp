#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CLockOnModelFv
// Address: 0x1cb3e0 - 0x1cb7ac
void Draw__12CLockOnModelFv_0x1cb3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CLockOnModelFv_0x1cb3e0");
#endif

    switch (ctx->pc) {
        case 0x1cb3e0u: goto label_1cb3e0;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3e8u: goto label_1cb3e8;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f0u: goto label_1cb3f0;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb3fcu: goto label_1cb3fc;
        case 0x1cb400u: goto label_1cb400;
        case 0x1cb404u: goto label_1cb404;
        case 0x1cb408u: goto label_1cb408;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb410u: goto label_1cb410;
        case 0x1cb414u: goto label_1cb414;
        case 0x1cb418u: goto label_1cb418;
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb420u: goto label_1cb420;
        case 0x1cb424u: goto label_1cb424;
        case 0x1cb428u: goto label_1cb428;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb430u: goto label_1cb430;
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb444u: goto label_1cb444;
        case 0x1cb448u: goto label_1cb448;
        case 0x1cb44cu: goto label_1cb44c;
        case 0x1cb450u: goto label_1cb450;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb458u: goto label_1cb458;
        case 0x1cb45cu: goto label_1cb45c;
        case 0x1cb460u: goto label_1cb460;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb468u: goto label_1cb468;
        case 0x1cb46cu: goto label_1cb46c;
        case 0x1cb470u: goto label_1cb470;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb478u: goto label_1cb478;
        case 0x1cb47cu: goto label_1cb47c;
        case 0x1cb480u: goto label_1cb480;
        case 0x1cb484u: goto label_1cb484;
        case 0x1cb488u: goto label_1cb488;
        case 0x1cb48cu: goto label_1cb48c;
        case 0x1cb490u: goto label_1cb490;
        case 0x1cb494u: goto label_1cb494;
        case 0x1cb498u: goto label_1cb498;
        case 0x1cb49cu: goto label_1cb49c;
        case 0x1cb4a0u: goto label_1cb4a0;
        case 0x1cb4a4u: goto label_1cb4a4;
        case 0x1cb4a8u: goto label_1cb4a8;
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4b0u: goto label_1cb4b0;
        case 0x1cb4b4u: goto label_1cb4b4;
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4bcu: goto label_1cb4bc;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4c8u: goto label_1cb4c8;
        case 0x1cb4ccu: goto label_1cb4cc;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4d4u: goto label_1cb4d4;
        case 0x1cb4d8u: goto label_1cb4d8;
        case 0x1cb4dcu: goto label_1cb4dc;
        case 0x1cb4e0u: goto label_1cb4e0;
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb4ecu: goto label_1cb4ec;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb4f4u: goto label_1cb4f4;
        case 0x1cb4f8u: goto label_1cb4f8;
        case 0x1cb4fcu: goto label_1cb4fc;
        case 0x1cb500u: goto label_1cb500;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb508u: goto label_1cb508;
        case 0x1cb50cu: goto label_1cb50c;
        case 0x1cb510u: goto label_1cb510;
        case 0x1cb514u: goto label_1cb514;
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb51cu: goto label_1cb51c;
        case 0x1cb520u: goto label_1cb520;
        case 0x1cb524u: goto label_1cb524;
        case 0x1cb528u: goto label_1cb528;
        case 0x1cb52cu: goto label_1cb52c;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb534u: goto label_1cb534;
        case 0x1cb538u: goto label_1cb538;
        case 0x1cb53cu: goto label_1cb53c;
        case 0x1cb540u: goto label_1cb540;
        case 0x1cb544u: goto label_1cb544;
        case 0x1cb548u: goto label_1cb548;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb550u: goto label_1cb550;
        case 0x1cb554u: goto label_1cb554;
        case 0x1cb558u: goto label_1cb558;
        case 0x1cb55cu: goto label_1cb55c;
        case 0x1cb560u: goto label_1cb560;
        case 0x1cb564u: goto label_1cb564;
        case 0x1cb568u: goto label_1cb568;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb570u: goto label_1cb570;
        case 0x1cb574u: goto label_1cb574;
        case 0x1cb578u: goto label_1cb578;
        case 0x1cb57cu: goto label_1cb57c;
        case 0x1cb580u: goto label_1cb580;
        case 0x1cb584u: goto label_1cb584;
        case 0x1cb588u: goto label_1cb588;
        case 0x1cb58cu: goto label_1cb58c;
        case 0x1cb590u: goto label_1cb590;
        case 0x1cb594u: goto label_1cb594;
        case 0x1cb598u: goto label_1cb598;
        case 0x1cb59cu: goto label_1cb59c;
        case 0x1cb5a0u: goto label_1cb5a0;
        case 0x1cb5a4u: goto label_1cb5a4;
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5acu: goto label_1cb5ac;
        case 0x1cb5b0u: goto label_1cb5b0;
        case 0x1cb5b4u: goto label_1cb5b4;
        case 0x1cb5b8u: goto label_1cb5b8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5c0u: goto label_1cb5c0;
        case 0x1cb5c4u: goto label_1cb5c4;
        case 0x1cb5c8u: goto label_1cb5c8;
        case 0x1cb5ccu: goto label_1cb5cc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5d4u: goto label_1cb5d4;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5dcu: goto label_1cb5dc;
        case 0x1cb5e0u: goto label_1cb5e0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb5f4u: goto label_1cb5f4;
        case 0x1cb5f8u: goto label_1cb5f8;
        case 0x1cb5fcu: goto label_1cb5fc;
        case 0x1cb600u: goto label_1cb600;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb608u: goto label_1cb608;
        case 0x1cb60cu: goto label_1cb60c;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb614u: goto label_1cb614;
        case 0x1cb618u: goto label_1cb618;
        case 0x1cb61cu: goto label_1cb61c;
        case 0x1cb620u: goto label_1cb620;
        case 0x1cb624u: goto label_1cb624;
        case 0x1cb628u: goto label_1cb628;
        case 0x1cb62cu: goto label_1cb62c;
        case 0x1cb630u: goto label_1cb630;
        case 0x1cb634u: goto label_1cb634;
        case 0x1cb638u: goto label_1cb638;
        case 0x1cb63cu: goto label_1cb63c;
        case 0x1cb640u: goto label_1cb640;
        case 0x1cb644u: goto label_1cb644;
        case 0x1cb648u: goto label_1cb648;
        case 0x1cb64cu: goto label_1cb64c;
        case 0x1cb650u: goto label_1cb650;
        case 0x1cb654u: goto label_1cb654;
        case 0x1cb658u: goto label_1cb658;
        case 0x1cb65cu: goto label_1cb65c;
        case 0x1cb660u: goto label_1cb660;
        case 0x1cb664u: goto label_1cb664;
        case 0x1cb668u: goto label_1cb668;
        case 0x1cb66cu: goto label_1cb66c;
        case 0x1cb670u: goto label_1cb670;
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb678u: goto label_1cb678;
        case 0x1cb67cu: goto label_1cb67c;
        case 0x1cb680u: goto label_1cb680;
        case 0x1cb684u: goto label_1cb684;
        case 0x1cb688u: goto label_1cb688;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb690u: goto label_1cb690;
        case 0x1cb694u: goto label_1cb694;
        case 0x1cb698u: goto label_1cb698;
        case 0x1cb69cu: goto label_1cb69c;
        case 0x1cb6a0u: goto label_1cb6a0;
        case 0x1cb6a4u: goto label_1cb6a4;
        case 0x1cb6a8u: goto label_1cb6a8;
        case 0x1cb6acu: goto label_1cb6ac;
        case 0x1cb6b0u: goto label_1cb6b0;
        case 0x1cb6b4u: goto label_1cb6b4;
        case 0x1cb6b8u: goto label_1cb6b8;
        case 0x1cb6bcu: goto label_1cb6bc;
        case 0x1cb6c0u: goto label_1cb6c0;
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb6c8u: goto label_1cb6c8;
        case 0x1cb6ccu: goto label_1cb6cc;
        case 0x1cb6d0u: goto label_1cb6d0;
        case 0x1cb6d4u: goto label_1cb6d4;
        case 0x1cb6d8u: goto label_1cb6d8;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb6e0u: goto label_1cb6e0;
        case 0x1cb6e4u: goto label_1cb6e4;
        case 0x1cb6e8u: goto label_1cb6e8;
        case 0x1cb6ecu: goto label_1cb6ec;
        case 0x1cb6f0u: goto label_1cb6f0;
        case 0x1cb6f4u: goto label_1cb6f4;
        case 0x1cb6f8u: goto label_1cb6f8;
        case 0x1cb6fcu: goto label_1cb6fc;
        case 0x1cb700u: goto label_1cb700;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb708u: goto label_1cb708;
        case 0x1cb70cu: goto label_1cb70c;
        case 0x1cb710u: goto label_1cb710;
        case 0x1cb714u: goto label_1cb714;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb71cu: goto label_1cb71c;
        case 0x1cb720u: goto label_1cb720;
        case 0x1cb724u: goto label_1cb724;
        case 0x1cb728u: goto label_1cb728;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb730u: goto label_1cb730;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb738u: goto label_1cb738;
        case 0x1cb73cu: goto label_1cb73c;
        case 0x1cb740u: goto label_1cb740;
        case 0x1cb744u: goto label_1cb744;
        case 0x1cb748u: goto label_1cb748;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb750u: goto label_1cb750;
        case 0x1cb754u: goto label_1cb754;
        case 0x1cb758u: goto label_1cb758;
        case 0x1cb75cu: goto label_1cb75c;
        case 0x1cb760u: goto label_1cb760;
        case 0x1cb764u: goto label_1cb764;
        case 0x1cb768u: goto label_1cb768;
        case 0x1cb76cu: goto label_1cb76c;
        case 0x1cb770u: goto label_1cb770;
        case 0x1cb774u: goto label_1cb774;
        case 0x1cb778u: goto label_1cb778;
        case 0x1cb77cu: goto label_1cb77c;
        case 0x1cb780u: goto label_1cb780;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb788u: goto label_1cb788;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb790u: goto label_1cb790;
        case 0x1cb794u: goto label_1cb794;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        default: break;
    }

    ctx->pc = 0x1cb3e0u;

label_1cb3e0:
    // 0x1cb3e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1cb3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1cb3e4:
    // 0x1cb3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cb3e8:
    // 0x1cb3e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cb3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1cb3ec:
    // 0x1cb3ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cb3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cb3f0:
    // 0x1cb3f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cb3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3f4:
    // 0x1cb3f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cb3f8:
    // 0x1cb3f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1cb3f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1cb3fc:
    // 0x1cb3fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cb3fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cb400:
    // 0x1cb400: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1cb404:
    // 0x1cb404: 0xc0a0ed8  jal         func_283B60
label_1cb408:
    if (ctx->pc == 0x1CB408u) {
        ctx->pc = 0x1CB408u;
            // 0x1cb408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB40Cu;
        goto label_1cb40c;
    }
    ctx->pc = 0x1CB404u;
    SET_GPR_U32(ctx, 31, 0x1CB40Cu);
    ctx->pc = 0x1CB408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB404u;
            // 0x1cb408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB40Cu; }
        if (ctx->pc != 0x1CB40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB40Cu; }
        if (ctx->pc != 0x1CB40Cu) { return; }
    }
    ctx->pc = 0x1CB40Cu;
label_1cb40c:
    // 0x1cb40c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb410:
    // 0x1cb410: 0x120000de  beqz        $s0, . + 4 + (0xDE << 2)
label_1cb414:
    if (ctx->pc == 0x1CB414u) {
        ctx->pc = 0x1CB418u;
        goto label_1cb418;
    }
    ctx->pc = 0x1CB410u;
    {
        const bool branch_taken_0x1cb410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb410) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB418u;
label_1cb418:
    // 0x1cb418: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x1cb418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_1cb41c:
    // 0x1cb41c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cb420:
    // 0x1cb420: 0x86050770  lh          $a1, 0x770($s0)
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
label_1cb424:
    // 0x1cb424: 0x10a300d9  beq         $a1, $v1, . + 4 + (0xD9 << 2)
label_1cb428:
    if (ctx->pc == 0x1CB428u) {
        ctx->pc = 0x1CB42Cu;
        goto label_1cb42c;
    }
    ctx->pc = 0x1CB424u;
    {
        const bool branch_taken_0x1cb424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb424) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB42Cu;
label_1cb42c:
    // 0x1cb42c: 0xc0a0ed8  jal         func_283B60
label_1cb430:
    if (ctx->pc == 0x1CB430u) {
        ctx->pc = 0x1CB430u;
            // 0x1cb430: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x1CB434u;
        goto label_1cb434;
    }
    ctx->pc = 0x1CB42Cu;
    SET_GPR_U32(ctx, 31, 0x1CB434u);
    ctx->pc = 0x1CB430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB42Cu;
            // 0x1cb430: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB434u; }
        if (ctx->pc != 0x1CB434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB434u; }
        if (ctx->pc != 0x1CB434u) { return; }
    }
    ctx->pc = 0x1CB434u;
label_1cb434:
    // 0x1cb434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb438:
    // 0x1cb438: 0x122000d4  beqz        $s1, . + 4 + (0xD4 << 2)
label_1cb43c:
    if (ctx->pc == 0x1CB43Cu) {
        ctx->pc = 0x1CB440u;
        goto label_1cb440;
    }
    ctx->pc = 0x1CB438u;
    {
        const bool branch_taken_0x1cb438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb438) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB440u;
label_1cb440:
    // 0x1cb440: 0xc62112f4  lwc1        $f1, 0x12F4($s1)
    ctx->pc = 0x1cb440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb444:
    // 0x1cb444: 0xc62012fc  lwc1        $f0, 0x12FC($s1)
    ctx->pc = 0x1cb444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb448:
    // 0x1cb448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb44c:
    // 0x1cb44c: 0x0  nop
    ctx->pc = 0x1cb44cu;
    // NOP
label_1cb450:
    // 0x1cb450: 0x450000ce  bc1f        . + 4 + (0xCE << 2)
label_1cb454:
    if (ctx->pc == 0x1CB454u) {
        ctx->pc = 0x1CB454u;
            // 0x1cb454: 0xc6350110  lwc1        $f21, 0x110($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x1CB458u;
        goto label_1cb458;
    }
    ctx->pc = 0x1CB450u;
    {
        const bool branch_taken_0x1cb450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB450u;
            // 0x1cb454: 0xc6350110  lwc1        $f21, 0x110($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb450) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB458u;
label_1cb458:
    // 0x1cb458: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x1cb458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb45c:
    // 0x1cb45c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb460:
    // 0x1cb460: 0x0  nop
    ctx->pc = 0x1cb460u;
    // NOP
label_1cb464:
    // 0x1cb464: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cb464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb468:
    // 0x1cb468: 0x0  nop
    ctx->pc = 0x1cb468u;
    // NOP
label_1cb46c:
    // 0x1cb46c: 0x450100c7  bc1t        . + 4 + (0xC7 << 2)
label_1cb470:
    if (ctx->pc == 0x1CB470u) {
        ctx->pc = 0x1CB470u;
            // 0x1cb470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB474u;
        goto label_1cb474;
    }
    ctx->pc = 0x1CB46Cu;
    {
        const bool branch_taken_0x1cb46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB46Cu;
            // 0x1cb470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb46c) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB474u;
label_1cb474:
    // 0x1cb474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb478:
    // 0x1cb478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb47c:
    // 0x1cb47c: 0xc05d420  jal         func_175080
label_1cb480:
    if (ctx->pc == 0x1CB480u) {
        ctx->pc = 0x1CB480u;
            // 0x1cb480: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1CB484u;
        goto label_1cb484;
    }
    ctx->pc = 0x1CB47Cu;
    SET_GPR_U32(ctx, 31, 0x1CB484u);
    ctx->pc = 0x1CB480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB47Cu;
            // 0x1cb480: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB484u; }
        if (ctx->pc != 0x1CB484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB484u; }
        if (ctx->pc != 0x1CB484u) { return; }
    }
    ctx->pc = 0x1CB484u;
label_1cb484:
    // 0x1cb484: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_1cb488:
    if (ctx->pc == 0x1CB488u) {
        ctx->pc = 0x1CB48Cu;
        goto label_1cb48c;
    }
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB48Cu;
label_1cb48c:
    // 0x1cb48c: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x1cb48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cb490:
    // 0x1cb490: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1cb494:
    // 0x1cb494: 0xc041c5c  jal         func_107170
label_1cb498:
    if (ctx->pc == 0x1CB498u) {
        ctx->pc = 0x1CB498u;
            // 0x1cb498: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1CB49Cu;
        goto label_1cb49c;
    }
    ctx->pc = 0x1CB494u;
    SET_GPR_U32(ctx, 31, 0x1CB49Cu);
    ctx->pc = 0x1CB498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB494u;
            // 0x1cb498: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB49Cu; }
        if (ctx->pc != 0x1CB49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB49Cu; }
        if (ctx->pc != 0x1CB49Cu) { return; }
    }
    ctx->pc = 0x1CB49Cu;
label_1cb49c:
    // 0x1cb49c: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x1cb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
label_1cb4a0:
    // 0x1cb4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb4a4:
    // 0x1cb4a4: 0x0  nop
    ctx->pc = 0x1cb4a4u;
    // NOP
label_1cb4a8:
    // 0x1cb4a8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1cb4a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb4ac:
    // 0x1cb4ac: 0x0  nop
    ctx->pc = 0x1cb4acu;
    // NOP
label_1cb4b0:
    // 0x1cb4b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1cb4b4:
    if (ctx->pc == 0x1CB4B4u) {
        ctx->pc = 0x1CB4B8u;
        goto label_1cb4b8;
    }
    ctx->pc = 0x1CB4B0u;
    {
        const bool branch_taken_0x1cb4b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb4b0) {
            ctx->pc = 0x1CB4BCu;
            goto label_1cb4bc;
        }
    }
    ctx->pc = 0x1CB4B8u;
label_1cb4b8:
    // 0x1cb4b8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1cb4b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1cb4bc:
    // 0x1cb4bc: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x1cb4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb4c0:
    // 0x1cb4c0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cb4c4:
    // 0x1cb4c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cb4c8:
    // 0x1cb4c8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1cb4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1cb4cc:
    // 0x1cb4cc: 0xe64000a4  swc1        $f0, 0xA4($s2)
    ctx->pc = 0x1cb4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
label_1cb4d0:
    // 0x1cb4d0: 0x8e231150  lw          $v1, 0x1150($s1)
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4432)));
label_1cb4d4:
    // 0x1cb4d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cb4d8:
    // 0x1cb4d8: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x1cb4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_1cb4dc:
    // 0x1cb4dc: 0x8f858da0  lw          $a1, -0x7260($gp)
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cb4e0:
    // 0x1cb4e0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1cb4e4:
    // 0x1cb4e4: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1cb4e8:
    // 0x1cb4e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1cb4ec:
    if (ctx->pc == 0x1CB4ECu) {
        ctx->pc = 0x1CB4ECu;
            // 0x1cb4ec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CB4F0u;
        goto label_1cb4f0;
    }
    ctx->pc = 0x1CB4E8u;
    {
        const bool branch_taken_0x1cb4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB4E8u;
            // 0x1cb4ec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4e8) {
            ctx->pc = 0x1CB500u;
            goto label_1cb500;
        }
    }
    ctx->pc = 0x1CB4F0u;
label_1cb4f0:
    // 0x1cb4f0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cb4f4:
    // 0x1cb4f4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1cb4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1cb4f8:
    // 0x1cb4f8: 0x84244d98  lh          $a0, 0x4D98($at)
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
label_1cb4fc:
    // 0x1cb4fc: 0x0  nop
    ctx->pc = 0x1cb4fcu;
    // NOP
label_1cb500:
    // 0x1cb500: 0x86221156  lh          $v0, 0x1156($s1)
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4438)));
label_1cb504:
    // 0x1cb504: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_1cb508:
    if (ctx->pc == 0x1CB508u) {
        ctx->pc = 0x1CB508u;
            // 0x1cb508: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CB50Cu;
        goto label_1cb50c;
    }
    ctx->pc = 0x1CB504u;
    {
        const bool branch_taken_0x1cb504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CB508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB504u;
            // 0x1cb508: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb504) {
            ctx->pc = 0x1CB524u;
            goto label_1cb524;
        }
    }
    ctx->pc = 0x1CB50Cu;
label_1cb50c:
    // 0x1cb50c: 0x8e22134c  lw          $v0, 0x134C($s1)
    ctx->pc = 0x1cb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4940)));
label_1cb510:
    // 0x1cb510: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_1cb514:
    if (ctx->pc == 0x1CB514u) {
        ctx->pc = 0x1CB518u;
        goto label_1cb518;
    }
    ctx->pc = 0x1CB510u;
    {
        const bool branch_taken_0x1cb510 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1cb510) {
            ctx->pc = 0x1CB51Cu;
            goto label_1cb51c;
        }
    }
    ctx->pc = 0x1CB518u;
label_1cb518:
    // 0x1cb518: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_1cb51c:
    // 0x1cb51c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cb520:
    if (ctx->pc == 0x1CB520u) {
        ctx->pc = 0x1CB520u;
            // 0x1cb520: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x1CB524u;
        goto label_1cb524;
    }
    ctx->pc = 0x1CB51Cu;
    {
        const bool branch_taken_0x1cb51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB51Cu;
            // 0x1cb520: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb51c) {
            ctx->pc = 0x1CB528u;
            goto label_1cb528;
        }
    }
    ctx->pc = 0x1CB524u;
label_1cb524:
    // 0x1cb524: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x1cb524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
label_1cb528:
    // 0x1cb528: 0x86020772  lh          $v0, 0x772($s0)
    ctx->pc = 0x1cb528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1906)));
label_1cb52c:
    // 0x1cb52c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1cb530:
    if (ctx->pc == 0x1CB530u) {
        ctx->pc = 0x1CB530u;
            // 0x1cb530: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1CB534u;
        goto label_1cb534;
    }
    ctx->pc = 0x1CB52Cu;
    {
        const bool branch_taken_0x1cb52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB52Cu;
            // 0x1cb530: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb52c) {
            ctx->pc = 0x1CB598u;
            goto label_1cb598;
        }
    }
    ctx->pc = 0x1CB534u;
label_1cb534:
    // 0x1cb534: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1cb534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1cb538:
    // 0x1cb538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cb538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb53c:
    // 0x1cb53c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb540:
    // 0x1cb540: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb544:
    // 0x1cb544: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cb544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1cb548:
    // 0x1cb548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb54c:
    // 0x1cb54c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1cb54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb550:
    // 0x1cb550: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cb550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1cb554:
    // 0x1cb554: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cb558:
    // 0x1cb558: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1cb558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cb55c:
    // 0x1cb55c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1cb55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1cb560:
    // 0x1cb560: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb564:
    // 0x1cb564: 0xc64d0088  lwc1        $f13, 0x88($s2)
    ctx->pc = 0x1cb564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cb568:
    // 0x1cb568: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1cb56c:
    // 0x1cb56c: 0x320f809  jalr        $t9
label_1cb570:
    if (ctx->pc == 0x1CB570u) {
        ctx->pc = 0x1CB570u;
            // 0x1cb570: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CB574u;
        goto label_1cb574;
    }
    ctx->pc = 0x1CB56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CB574u);
        ctx->pc = 0x1CB570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB56Cu;
            // 0x1cb570: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB574u; }
            if (ctx->pc != 0x1CB574u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB574u;
label_1cb574:
    // 0x1cb574: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb578:
    // 0x1cb578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cb578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb57c:
    // 0x1cb57c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1cb580:
    // 0x1cb580: 0x320f809  jalr        $t9
label_1cb584:
    if (ctx->pc == 0x1CB584u) {
        ctx->pc = 0x1CB584u;
            // 0x1cb584: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1CB588u;
        goto label_1cb588;
    }
    ctx->pc = 0x1CB580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CB588u);
        ctx->pc = 0x1CB584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB580u;
            // 0x1cb584: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB588u; }
            if (ctx->pc != 0x1CB588u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB588u;
label_1cb588:
    // 0x1cb588: 0xc05a804  jal         func_16A010
label_1cb58c:
    if (ctx->pc == 0x1CB58Cu) {
        ctx->pc = 0x1CB58Cu;
            // 0x1cb58c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB590u;
        goto label_1cb590;
    }
    ctx->pc = 0x1CB588u;
    SET_GPR_U32(ctx, 31, 0x1CB590u);
    ctx->pc = 0x1CB58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB588u;
            // 0x1cb58c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB590u; }
        if (ctx->pc != 0x1CB590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__12CObjectFrameFv_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB590u; }
        if (ctx->pc != 0x1CB590u) { return; }
    }
    ctx->pc = 0x1CB590u;
label_1cb590:
    // 0x1cb590: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1cb594:
    if (ctx->pc == 0x1CB594u) {
        ctx->pc = 0x1CB594u;
            // 0x1cb594: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1CB598u;
        goto label_1cb598;
    }
    ctx->pc = 0x1CB590u;
    {
        const bool branch_taken_0x1cb590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB590u;
            // 0x1cb594: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb590) {
            ctx->pc = 0x1CB790u;
            goto label_1cb790;
        }
    }
    ctx->pc = 0x1CB598u;
label_1cb598:
    // 0x1cb598: 0xc04d0e8  jal         func_1343A0
label_1cb59c:
    if (ctx->pc == 0x1CB59Cu) {
        ctx->pc = 0x1CB5A0u;
        goto label_1cb5a0;
    }
    ctx->pc = 0x1CB598u;
    SET_GPR_U32(ctx, 31, 0x1CB5A0u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5A0u; }
        if (ctx->pc != 0x1CB5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5A0u; }
        if (ctx->pc != 0x1CB5A0u) { return; }
    }
    ctx->pc = 0x1CB5A0u;
label_1cb5a0:
    // 0x1cb5a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb5a4:
    // 0x1cb5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5a8:
    // 0x1cb5a8: 0xc04d104  jal         func_134410
label_1cb5ac:
    if (ctx->pc == 0x1CB5ACu) {
        ctx->pc = 0x1CB5ACu;
            // 0x1cb5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5B0u;
        goto label_1cb5b0;
    }
    ctx->pc = 0x1CB5A8u;
    SET_GPR_U32(ctx, 31, 0x1CB5B0u);
    ctx->pc = 0x1CB5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5A8u;
            // 0x1cb5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5B0u; }
        if (ctx->pc != 0x1CB5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5B0u; }
        if (ctx->pc != 0x1CB5B0u) { return; }
    }
    ctx->pc = 0x1CB5B0u;
label_1cb5b0:
    // 0x1cb5b0: 0xc079f5c  jal         func_1E7D70
label_1cb5b4:
    if (ctx->pc == 0x1CB5B4u) {
        ctx->pc = 0x1CB5B4u;
            // 0x1cb5b4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1CB5B8u;
        goto label_1cb5b8;
    }
    ctx->pc = 0x1CB5B0u;
    SET_GPR_U32(ctx, 31, 0x1CB5B8u);
    ctx->pc = 0x1CB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5B0u;
            // 0x1cb5b4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5B8u; }
        if (ctx->pc != 0x1CB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5B8u; }
        if (ctx->pc != 0x1CB5B8u) { return; }
    }
    ctx->pc = 0x1CB5B8u;
label_1cb5b8:
    // 0x1cb5b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb5bc:
    // 0x1cb5bc: 0xc04d44c  jal         func_135130
label_1cb5c0:
    if (ctx->pc == 0x1CB5C0u) {
        ctx->pc = 0x1CB5C0u;
            // 0x1cb5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CB5C4u;
        goto label_1cb5c4;
    }
    ctx->pc = 0x1CB5BCu;
    SET_GPR_U32(ctx, 31, 0x1CB5C4u);
    ctx->pc = 0x1CB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5BCu;
            // 0x1cb5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5C4u; }
        if (ctx->pc != 0x1CB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5C4u; }
        if (ctx->pc != 0x1CB5C4u) { return; }
    }
    ctx->pc = 0x1CB5C4u;
label_1cb5c4:
    // 0x1cb5c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb5c8:
    // 0x1cb5c8: 0xc04d128  jal         func_1344A0
label_1cb5cc:
    if (ctx->pc == 0x1CB5CCu) {
        ctx->pc = 0x1CB5CCu;
            // 0x1cb5cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1CB5D0u;
        goto label_1cb5d0;
    }
    ctx->pc = 0x1CB5C8u;
    SET_GPR_U32(ctx, 31, 0x1CB5D0u);
    ctx->pc = 0x1CB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5C8u;
            // 0x1cb5cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5D0u; }
        if (ctx->pc != 0x1CB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5D0u; }
        if (ctx->pc != 0x1CB5D0u) { return; }
    }
    ctx->pc = 0x1CB5D0u;
label_1cb5d0:
    // 0x1cb5d0: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
label_1cb5d4:
    // 0x1cb5d4: 0xc04d368  jal         func_134DA0
label_1cb5d8:
    if (ctx->pc == 0x1CB5D8u) {
        ctx->pc = 0x1CB5D8u;
            // 0x1cb5d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1CB5DCu;
        goto label_1cb5dc;
    }
    ctx->pc = 0x1CB5D4u;
    SET_GPR_U32(ctx, 31, 0x1CB5DCu);
    ctx->pc = 0x1CB5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5D4u;
            // 0x1cb5d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5DCu; }
        if (ctx->pc != 0x1CB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5DCu; }
        if (ctx->pc != 0x1CB5DCu) { return; }
    }
    ctx->pc = 0x1CB5DCu;
label_1cb5dc:
    // 0x1cb5dc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1cb5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cb5e0:
    // 0x1cb5e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb5e4:
    // 0x1cb5e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cb5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5e8:
    // 0x1cb5e8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1cb5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5ec:
    // 0x1cb5ec: 0xc04d320  jal         func_134C80
label_1cb5f0:
    if (ctx->pc == 0x1CB5F0u) {
        ctx->pc = 0x1CB5F0u;
            // 0x1cb5f0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5F4u;
        goto label_1cb5f4;
    }
    ctx->pc = 0x1CB5ECu;
    SET_GPR_U32(ctx, 31, 0x1CB5F4u);
    ctx->pc = 0x1CB5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5ECu;
            // 0x1cb5f0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F4u; }
        if (ctx->pc != 0x1CB5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F4u; }
        if (ctx->pc != 0x1CB5F4u) { return; }
    }
    ctx->pc = 0x1CB5F4u;
label_1cb5f4:
    // 0x1cb5f4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1cb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1cb5f8:
    // 0x1cb5f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1cb5fc:
    // 0x1cb5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb600:
    // 0x1cb600: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1cb604:
    // 0x1cb604: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1cb608:
    // 0x1cb608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb60c:
    // 0x1cb60c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1cb60cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1cb610:
    // 0x1cb610: 0xc0516ec  jal         func_145BB0
label_1cb614:
    if (ctx->pc == 0x1CB614u) {
        ctx->pc = 0x1CB614u;
            // 0x1cb614: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CB618u;
        goto label_1cb618;
    }
    ctx->pc = 0x1CB610u;
    SET_GPR_U32(ctx, 31, 0x1CB618u);
    ctx->pc = 0x1CB614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB610u;
            // 0x1cb614: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB618u; }
        if (ctx->pc != 0x1CB618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB618u; }
        if (ctx->pc != 0x1CB618u) { return; }
    }
    ctx->pc = 0x1CB618u;
label_1cb618:
    // 0x1cb618: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_1cb61c:
    if (ctx->pc == 0x1CB61Cu) {
        ctx->pc = 0x1CB61Cu;
            // 0x1cb61c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1CB620u;
        goto label_1cb620;
    }
    ctx->pc = 0x1CB618u;
    {
        const bool branch_taken_0x1cb618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB618u;
            // 0x1cb61c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb618) {
            ctx->pc = 0x1CB784u;
            goto label_1cb784;
        }
    }
    ctx->pc = 0x1CB620u;
label_1cb620:
    // 0x1cb620: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1cb624:
    // 0x1cb624: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1cb628:
    // 0x1cb628: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb62c:
    // 0x1cb62c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1cb630:
    // 0x1cb630: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1cb634:
    // 0x1cb634: 0x2442fee0  addiu       $v0, $v0, -0x120
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
label_1cb638:
    // 0x1cb638: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1cb638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1cb63c:
    // 0x1cb63c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb640:
    // 0x1cb640: 0x2442fee0  addiu       $v0, $v0, -0x120
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
label_1cb644:
    // 0x1cb644: 0xc04d35c  jal         func_134D70
label_1cb648:
    if (ctx->pc == 0x1CB648u) {
        ctx->pc = 0x1CB648u;
            // 0x1cb648: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CB64Cu;
        goto label_1cb64c;
    }
    ctx->pc = 0x1CB644u;
    SET_GPR_U32(ctx, 31, 0x1CB64Cu);
    ctx->pc = 0x1CB648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB644u;
            // 0x1cb648: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB64Cu; }
        if (ctx->pc != 0x1CB64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB64Cu; }
        if (ctx->pc != 0x1CB64Cu) { return; }
    }
    ctx->pc = 0x1CB64Cu;
label_1cb64c:
    // 0x1cb64c: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1cb650:
    // 0x1cb650: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1cb650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1cb654:
    // 0x1cb654: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb658:
    // 0x1cb658: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb65c:
    // 0x1cb65c: 0xc04d2ec  jal         func_134BB0
label_1cb660:
    if (ctx->pc == 0x1CB660u) {
        ctx->pc = 0x1CB660u;
            // 0x1cb660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB664u;
        goto label_1cb664;
    }
    ctx->pc = 0x1CB65Cu;
    SET_GPR_U32(ctx, 31, 0x1CB664u);
    ctx->pc = 0x1CB660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB65Cu;
            // 0x1cb660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB664u; }
        if (ctx->pc != 0x1CB664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB664u; }
        if (ctx->pc != 0x1CB664u) { return; }
    }
    ctx->pc = 0x1CB664u;
label_1cb664:
    // 0x1cb664: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb668:
    // 0x1cb668: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1cb66c:
    // 0x1cb66c: 0xc04d35c  jal         func_134D70
label_1cb670:
    if (ctx->pc == 0x1CB670u) {
        ctx->pc = 0x1CB670u;
            // 0x1cb670: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1CB674u;
        goto label_1cb674;
    }
    ctx->pc = 0x1CB66Cu;
    SET_GPR_U32(ctx, 31, 0x1CB674u);
    ctx->pc = 0x1CB670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB66Cu;
            // 0x1cb670: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB674u; }
        if (ctx->pc != 0x1CB674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB674u; }
        if (ctx->pc != 0x1CB674u) { return; }
    }
    ctx->pc = 0x1CB674u;
label_1cb674:
    // 0x1cb674: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1cb674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1cb678:
    // 0x1cb678: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb67c:
    // 0x1cb67c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb680:
    // 0x1cb680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb684:
    // 0x1cb684: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cb684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1cb688:
    // 0x1cb688: 0xc04d2ec  jal         func_134BB0
label_1cb68c:
    if (ctx->pc == 0x1CB68Cu) {
        ctx->pc = 0x1CB68Cu;
            // 0x1cb68c: 0x24460120  addiu       $a2, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->pc = 0x1CB690u;
        goto label_1cb690;
    }
    ctx->pc = 0x1CB688u;
    SET_GPR_U32(ctx, 31, 0x1CB690u);
    ctx->pc = 0x1CB68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB688u;
            // 0x1cb68c: 0x24460120  addiu       $a2, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB690u; }
        if (ctx->pc != 0x1CB690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB690u; }
        if (ctx->pc != 0x1CB690u) { return; }
    }
    ctx->pc = 0x1CB690u;
label_1cb690:
    // 0x1cb690: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb694:
    // 0x1cb694: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1cb698:
    // 0x1cb698: 0xc04d35c  jal         func_134D70
label_1cb69c:
    if (ctx->pc == 0x1CB69Cu) {
        ctx->pc = 0x1CB69Cu;
            // 0x1cb69c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x1CB6A0u;
        goto label_1cb6a0;
    }
    ctx->pc = 0x1CB698u;
    SET_GPR_U32(ctx, 31, 0x1CB6A0u);
    ctx->pc = 0x1CB69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB698u;
            // 0x1cb69c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6A0u; }
        if (ctx->pc != 0x1CB6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6A0u; }
        if (ctx->pc != 0x1CB6A0u) { return; }
    }
    ctx->pc = 0x1CB6A0u;
label_1cb6a0:
    // 0x1cb6a0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1cb6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1cb6a4:
    // 0x1cb6a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb6a8:
    // 0x1cb6a8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb6ac:
    // 0x1cb6ac: 0xc04d2ec  jal         func_134BB0
label_1cb6b0:
    if (ctx->pc == 0x1CB6B0u) {
        ctx->pc = 0x1CB6B0u;
            // 0x1cb6b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6B4u;
        goto label_1cb6b4;
    }
    ctx->pc = 0x1CB6ACu;
    SET_GPR_U32(ctx, 31, 0x1CB6B4u);
    ctx->pc = 0x1CB6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6ACu;
            // 0x1cb6b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6B4u; }
        if (ctx->pc != 0x1CB6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6B4u; }
        if (ctx->pc != 0x1CB6B4u) { return; }
    }
    ctx->pc = 0x1CB6B4u;
label_1cb6b4:
    // 0x1cb6b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb6b8:
    // 0x1cb6b8: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x1cb6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_1cb6bc:
    // 0x1cb6bc: 0xc04d35c  jal         func_134D70
label_1cb6c0:
    if (ctx->pc == 0x1CB6C0u) {
        ctx->pc = 0x1CB6C0u;
            // 0x1cb6c0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1CB6C4u;
        goto label_1cb6c4;
    }
    ctx->pc = 0x1CB6BCu;
    SET_GPR_U32(ctx, 31, 0x1CB6C4u);
    ctx->pc = 0x1CB6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6BCu;
            // 0x1cb6c0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6C4u; }
        if (ctx->pc != 0x1CB6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6C4u; }
        if (ctx->pc != 0x1CB6C4u) { return; }
    }
    ctx->pc = 0x1CB6C4u;
label_1cb6c4:
    // 0x1cb6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb6c8:
    // 0x1cb6c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb6cc:
    // 0x1cb6cc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1cb6d0:
    // 0x1cb6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6d4:
    // 0x1cb6d4: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1cb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1cb6d8:
    // 0x1cb6d8: 0xc04d2ec  jal         func_134BB0
label_1cb6dc:
    if (ctx->pc == 0x1CB6DCu) {
        ctx->pc = 0x1CB6DCu;
            // 0x1cb6dc: 0x24650120  addiu       $a1, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->pc = 0x1CB6E0u;
        goto label_1cb6e0;
    }
    ctx->pc = 0x1CB6D8u;
    SET_GPR_U32(ctx, 31, 0x1CB6E0u);
    ctx->pc = 0x1CB6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6D8u;
            // 0x1cb6dc: 0x24650120  addiu       $a1, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6E0u; }
        if (ctx->pc != 0x1CB6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6E0u; }
        if (ctx->pc != 0x1CB6E0u) { return; }
    }
    ctx->pc = 0x1CB6E0u;
label_1cb6e0:
    // 0x1cb6e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb6e4:
    // 0x1cb6e4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1cb6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1cb6e8:
    // 0x1cb6e8: 0xc04d35c  jal         func_134D70
label_1cb6ec:
    if (ctx->pc == 0x1CB6ECu) {
        ctx->pc = 0x1CB6ECu;
            // 0x1cb6ec: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x1CB6F0u;
        goto label_1cb6f0;
    }
    ctx->pc = 0x1CB6E8u;
    SET_GPR_U32(ctx, 31, 0x1CB6F0u);
    ctx->pc = 0x1CB6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6E8u;
            // 0x1cb6ec: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6F0u; }
        if (ctx->pc != 0x1CB6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6F0u; }
        if (ctx->pc != 0x1CB6F0u) { return; }
    }
    ctx->pc = 0x1CB6F0u;
label_1cb6f0:
    // 0x1cb6f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1cb6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1cb6f4:
    // 0x1cb6f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb6f8:
    // 0x1cb6f8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cb6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb6fc:
    // 0x1cb6fc: 0xc04d2ec  jal         func_134BB0
label_1cb700:
    if (ctx->pc == 0x1CB700u) {
        ctx->pc = 0x1CB700u;
            // 0x1cb700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB704u;
        goto label_1cb704;
    }
    ctx->pc = 0x1CB6FCu;
    SET_GPR_U32(ctx, 31, 0x1CB704u);
    ctx->pc = 0x1CB700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6FCu;
            // 0x1cb700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB704u; }
        if (ctx->pc != 0x1CB704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB704u; }
        if (ctx->pc != 0x1CB704u) { return; }
    }
    ctx->pc = 0x1CB704u;
label_1cb704:
    // 0x1cb704: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb708:
    // 0x1cb708: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x1cb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1cb70c:
    // 0x1cb70c: 0xc04d35c  jal         func_134D70
label_1cb710:
    if (ctx->pc == 0x1CB710u) {
        ctx->pc = 0x1CB710u;
            // 0x1cb710: 0x2406003a  addiu       $a2, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->pc = 0x1CB714u;
        goto label_1cb714;
    }
    ctx->pc = 0x1CB70Cu;
    SET_GPR_U32(ctx, 31, 0x1CB714u);
    ctx->pc = 0x1CB710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB70Cu;
            // 0x1cb710: 0x2406003a  addiu       $a2, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB714u; }
        if (ctx->pc != 0x1CB714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB714u; }
        if (ctx->pc != 0x1CB714u) { return; }
    }
    ctx->pc = 0x1CB714u;
label_1cb714:
    // 0x1cb714: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1cb714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1cb718:
    // 0x1cb718: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb71c:
    // 0x1cb71c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb720:
    // 0x1cb720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb724:
    // 0x1cb724: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cb724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1cb728:
    // 0x1cb728: 0xc04d2ec  jal         func_134BB0
label_1cb72c:
    if (ctx->pc == 0x1CB72Cu) {
        ctx->pc = 0x1CB72Cu;
            // 0x1cb72c: 0x24460120  addiu       $a2, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->pc = 0x1CB730u;
        goto label_1cb730;
    }
    ctx->pc = 0x1CB728u;
    SET_GPR_U32(ctx, 31, 0x1CB730u);
    ctx->pc = 0x1CB72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB728u;
            // 0x1cb72c: 0x24460120  addiu       $a2, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB730u; }
        if (ctx->pc != 0x1CB730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB730u; }
        if (ctx->pc != 0x1CB730u) { return; }
    }
    ctx->pc = 0x1CB730u;
label_1cb730:
    // 0x1cb730: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb734:
    // 0x1cb734: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x1cb734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1cb738:
    // 0x1cb738: 0xc04d35c  jal         func_134D70
label_1cb73c:
    if (ctx->pc == 0x1CB73Cu) {
        ctx->pc = 0x1CB73Cu;
            // 0x1cb73c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1CB740u;
        goto label_1cb740;
    }
    ctx->pc = 0x1CB738u;
    SET_GPR_U32(ctx, 31, 0x1CB740u);
    ctx->pc = 0x1CB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB738u;
            // 0x1cb73c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB740u; }
        if (ctx->pc != 0x1CB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB740u; }
        if (ctx->pc != 0x1CB740u) { return; }
    }
    ctx->pc = 0x1CB740u;
label_1cb740:
    // 0x1cb740: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1cb740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1cb744:
    // 0x1cb744: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb748:
    // 0x1cb748: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cb748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb74c:
    // 0x1cb74c: 0xc04d2ec  jal         func_134BB0
label_1cb750:
    if (ctx->pc == 0x1CB750u) {
        ctx->pc = 0x1CB750u;
            // 0x1cb750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB754u;
        goto label_1cb754;
    }
    ctx->pc = 0x1CB74Cu;
    SET_GPR_U32(ctx, 31, 0x1CB754u);
    ctx->pc = 0x1CB750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB74Cu;
            // 0x1cb750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB754u; }
        if (ctx->pc != 0x1CB754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB754u; }
        if (ctx->pc != 0x1CB754u) { return; }
    }
    ctx->pc = 0x1CB754u;
label_1cb754:
    // 0x1cb754: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb758:
    // 0x1cb758: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x1cb758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_1cb75c:
    // 0x1cb75c: 0xc04d35c  jal         func_134D70
label_1cb760:
    if (ctx->pc == 0x1CB760u) {
        ctx->pc = 0x1CB760u;
            // 0x1cb760: 0x2406003a  addiu       $a2, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->pc = 0x1CB764u;
        goto label_1cb764;
    }
    ctx->pc = 0x1CB75Cu;
    SET_GPR_U32(ctx, 31, 0x1CB764u);
    ctx->pc = 0x1CB760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB75Cu;
            // 0x1cb760: 0x2406003a  addiu       $a2, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB764u; }
        if (ctx->pc != 0x1CB764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB764u; }
        if (ctx->pc != 0x1CB764u) { return; }
    }
    ctx->pc = 0x1CB764u;
label_1cb764:
    // 0x1cb764: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb768:
    // 0x1cb768: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb76c:
    // 0x1cb76c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1cb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1cb770:
    // 0x1cb770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb774:
    // 0x1cb774: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1cb774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1cb778:
    // 0x1cb778: 0xc04d2ec  jal         func_134BB0
label_1cb77c:
    if (ctx->pc == 0x1CB77Cu) {
        ctx->pc = 0x1CB77Cu;
            // 0x1cb77c: 0x24650120  addiu       $a1, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->pc = 0x1CB780u;
        goto label_1cb780;
    }
    ctx->pc = 0x1CB778u;
    SET_GPR_U32(ctx, 31, 0x1CB780u);
    ctx->pc = 0x1CB77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB778u;
            // 0x1cb77c: 0x24650120  addiu       $a1, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB780u; }
        if (ctx->pc != 0x1CB780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB780u; }
        if (ctx->pc != 0x1CB780u) { return; }
    }
    ctx->pc = 0x1CB780u;
label_1cb780:
    // 0x1cb780: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cb780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cb784:
    // 0x1cb784: 0xc04d1a4  jal         func_134690
label_1cb788:
    if (ctx->pc == 0x1CB788u) {
        ctx->pc = 0x1CB78Cu;
        goto label_1cb78c;
    }
    ctx->pc = 0x1CB784u;
    SET_GPR_U32(ctx, 31, 0x1CB78Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB78Cu; }
        if (ctx->pc != 0x1CB78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB78Cu; }
        if (ctx->pc != 0x1CB78Cu) { return; }
    }
    ctx->pc = 0x1CB78Cu;
label_1cb78c:
    // 0x1cb78c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cb78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cb790:
    // 0x1cb790: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1cb790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1cb794:
    // 0x1cb794: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cb794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb798:
    // 0x1cb798: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cb798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cb79c:
    // 0x1cb79c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cb79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb7a0:
    // 0x1cb7a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb7a4:
    // 0x1cb7a4: 0x3e00008  jr          $ra
label_1cb7a8:
    if (ctx->pc == 0x1CB7A8u) {
        ctx->pc = 0x1CB7A8u;
            // 0x1cb7a8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1CB7ACu;
        goto label_fallthrough_0x1cb7a4;
    }
    ctx->pc = 0x1CB7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7A4u;
            // 0x1cb7a8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1cb7a4:
    ctx->pc = 0x1CB7ACu;
}
