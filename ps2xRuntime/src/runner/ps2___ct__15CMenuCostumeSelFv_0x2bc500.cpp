#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15CMenuCostumeSelFv
// Address: 0x2bc500 - 0x2bc6ec
void ps2___ct__15CMenuCostumeSelFv_0x2bc500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15CMenuCostumeSelFv_0x2bc500");
#endif

    switch (ctx->pc) {
        case 0x2bc500u: goto label_2bc500;
        case 0x2bc504u: goto label_2bc504;
        case 0x2bc508u: goto label_2bc508;
        case 0x2bc50cu: goto label_2bc50c;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc514u: goto label_2bc514;
        case 0x2bc518u: goto label_2bc518;
        case 0x2bc51cu: goto label_2bc51c;
        case 0x2bc520u: goto label_2bc520;
        case 0x2bc524u: goto label_2bc524;
        case 0x2bc528u: goto label_2bc528;
        case 0x2bc52cu: goto label_2bc52c;
        case 0x2bc530u: goto label_2bc530;
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc538u: goto label_2bc538;
        case 0x2bc53cu: goto label_2bc53c;
        case 0x2bc540u: goto label_2bc540;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc548u: goto label_2bc548;
        case 0x2bc54cu: goto label_2bc54c;
        case 0x2bc550u: goto label_2bc550;
        case 0x2bc554u: goto label_2bc554;
        case 0x2bc558u: goto label_2bc558;
        case 0x2bc55cu: goto label_2bc55c;
        case 0x2bc560u: goto label_2bc560;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc568u: goto label_2bc568;
        case 0x2bc56cu: goto label_2bc56c;
        case 0x2bc570u: goto label_2bc570;
        case 0x2bc574u: goto label_2bc574;
        case 0x2bc578u: goto label_2bc578;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc584u: goto label_2bc584;
        case 0x2bc588u: goto label_2bc588;
        case 0x2bc58cu: goto label_2bc58c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc594u: goto label_2bc594;
        case 0x2bc598u: goto label_2bc598;
        case 0x2bc59cu: goto label_2bc59c;
        case 0x2bc5a0u: goto label_2bc5a0;
        case 0x2bc5a4u: goto label_2bc5a4;
        case 0x2bc5a8u: goto label_2bc5a8;
        case 0x2bc5acu: goto label_2bc5ac;
        case 0x2bc5b0u: goto label_2bc5b0;
        case 0x2bc5b4u: goto label_2bc5b4;
        case 0x2bc5b8u: goto label_2bc5b8;
        case 0x2bc5bcu: goto label_2bc5bc;
        case 0x2bc5c0u: goto label_2bc5c0;
        case 0x2bc5c4u: goto label_2bc5c4;
        case 0x2bc5c8u: goto label_2bc5c8;
        case 0x2bc5ccu: goto label_2bc5cc;
        case 0x2bc5d0u: goto label_2bc5d0;
        case 0x2bc5d4u: goto label_2bc5d4;
        case 0x2bc5d8u: goto label_2bc5d8;
        case 0x2bc5dcu: goto label_2bc5dc;
        case 0x2bc5e0u: goto label_2bc5e0;
        case 0x2bc5e4u: goto label_2bc5e4;
        case 0x2bc5e8u: goto label_2bc5e8;
        case 0x2bc5ecu: goto label_2bc5ec;
        case 0x2bc5f0u: goto label_2bc5f0;
        case 0x2bc5f4u: goto label_2bc5f4;
        case 0x2bc5f8u: goto label_2bc5f8;
        case 0x2bc5fcu: goto label_2bc5fc;
        case 0x2bc600u: goto label_2bc600;
        case 0x2bc604u: goto label_2bc604;
        case 0x2bc608u: goto label_2bc608;
        case 0x2bc60cu: goto label_2bc60c;
        case 0x2bc610u: goto label_2bc610;
        case 0x2bc614u: goto label_2bc614;
        case 0x2bc618u: goto label_2bc618;
        case 0x2bc61cu: goto label_2bc61c;
        case 0x2bc620u: goto label_2bc620;
        case 0x2bc624u: goto label_2bc624;
        case 0x2bc628u: goto label_2bc628;
        case 0x2bc62cu: goto label_2bc62c;
        case 0x2bc630u: goto label_2bc630;
        case 0x2bc634u: goto label_2bc634;
        case 0x2bc638u: goto label_2bc638;
        case 0x2bc63cu: goto label_2bc63c;
        case 0x2bc640u: goto label_2bc640;
        case 0x2bc644u: goto label_2bc644;
        case 0x2bc648u: goto label_2bc648;
        case 0x2bc64cu: goto label_2bc64c;
        case 0x2bc650u: goto label_2bc650;
        case 0x2bc654u: goto label_2bc654;
        case 0x2bc658u: goto label_2bc658;
        case 0x2bc65cu: goto label_2bc65c;
        case 0x2bc660u: goto label_2bc660;
        case 0x2bc664u: goto label_2bc664;
        case 0x2bc668u: goto label_2bc668;
        case 0x2bc66cu: goto label_2bc66c;
        case 0x2bc670u: goto label_2bc670;
        case 0x2bc674u: goto label_2bc674;
        case 0x2bc678u: goto label_2bc678;
        case 0x2bc67cu: goto label_2bc67c;
        case 0x2bc680u: goto label_2bc680;
        case 0x2bc684u: goto label_2bc684;
        case 0x2bc688u: goto label_2bc688;
        case 0x2bc68cu: goto label_2bc68c;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc694u: goto label_2bc694;
        case 0x2bc698u: goto label_2bc698;
        case 0x2bc69cu: goto label_2bc69c;
        case 0x2bc6a0u: goto label_2bc6a0;
        case 0x2bc6a4u: goto label_2bc6a4;
        case 0x2bc6a8u: goto label_2bc6a8;
        case 0x2bc6acu: goto label_2bc6ac;
        case 0x2bc6b0u: goto label_2bc6b0;
        case 0x2bc6b4u: goto label_2bc6b4;
        case 0x2bc6b8u: goto label_2bc6b8;
        case 0x2bc6bcu: goto label_2bc6bc;
        case 0x2bc6c0u: goto label_2bc6c0;
        case 0x2bc6c4u: goto label_2bc6c4;
        case 0x2bc6c8u: goto label_2bc6c8;
        case 0x2bc6ccu: goto label_2bc6cc;
        case 0x2bc6d0u: goto label_2bc6d0;
        case 0x2bc6d4u: goto label_2bc6d4;
        case 0x2bc6d8u: goto label_2bc6d8;
        case 0x2bc6dcu: goto label_2bc6dc;
        case 0x2bc6e0u: goto label_2bc6e0;
        case 0x2bc6e4u: goto label_2bc6e4;
        case 0x2bc6e8u: goto label_2bc6e8;
        default: break;
    }

    ctx->pc = 0x2bc500u;

label_2bc500:
    // 0x2bc500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bc504:
    // 0x2bc504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bc508:
    // 0x2bc508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bc50c:
    // 0x2bc50c: 0xc08dc2c  jal         func_2370B0
label_2bc510:
    if (ctx->pc == 0x2BC510u) {
        ctx->pc = 0x2BC510u;
            // 0x2bc510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC514u;
        goto label_2bc514;
    }
    ctx->pc = 0x2BC50Cu;
    SET_GPR_U32(ctx, 31, 0x2BC514u);
    ctx->pc = 0x2BC510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC50Cu;
            // 0x2bc510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC514u; }
        if (ctx->pc != 0x2BC514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC514u; }
        if (ctx->pc != 0x2BC514u) { return; }
    }
    ctx->pc = 0x2BC514u;
label_2bc514:
    // 0x2bc514: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2bc514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2bc518:
    // 0x2bc518: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2bc518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2bc51c:
    // 0x2bc51c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bc51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc520:
    // 0x2bc520: 0x24636270  addiu       $v1, $v1, 0x6270
    ctx->pc = 0x2bc520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
label_2bc524:
    // 0x2bc524: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bc524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2bc528:
    // 0x2bc528: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x2bc528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_2bc52c:
    // 0x2bc52c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2bc530:
    // 0x2bc530: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bc530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bc534:
    // 0x2bc534: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2bc534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2bc538:
    // 0x2bc538: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2bc538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2bc53c:
    // 0x2bc53c: 0xc04c6a4  jal         func_131A90
label_2bc540:
    if (ctx->pc == 0x2BC540u) {
        ctx->pc = 0x2BC540u;
            // 0x2bc540: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x2BC544u;
        goto label_2bc544;
    }
    ctx->pc = 0x2BC53Cu;
    SET_GPR_U32(ctx, 31, 0x2BC544u);
    ctx->pc = 0x2BC540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC53Cu;
            // 0x2bc540: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A90u;
    if (runtime->hasFunction(0x131A90u)) {
        auto targetFn = runtime->lookupFunction(0x131A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC544u; }
        if (ctx->pc != 0x2BC544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCCameraFollowFffff_0x131a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC544u; }
        if (ctx->pc != 0x2BC544u) { return; }
    }
    ctx->pc = 0x2BC544u;
label_2bc544:
    // 0x2bc544: 0xc04e640  jal         func_139900
label_2bc548:
    if (ctx->pc == 0x2BC548u) {
        ctx->pc = 0x2BC548u;
            // 0x2bc548: 0x26040228  addiu       $a0, $s0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
        ctx->pc = 0x2BC54Cu;
        goto label_2bc54c;
    }
    ctx->pc = 0x2BC544u;
    SET_GPR_U32(ctx, 31, 0x2BC54Cu);
    ctx->pc = 0x2BC548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC544u;
            // 0x2bc548: 0x26040228  addiu       $a0, $s0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC54Cu; }
        if (ctx->pc != 0x2BC54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC54Cu; }
        if (ctx->pc != 0x2BC54Cu) { return; }
    }
    ctx->pc = 0x2BC54Cu;
label_2bc54c:
    // 0x2bc54c: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x2bc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_2bc550:
    // 0x2bc550: 0xa7809c24  sh          $zero, -0x63DC($gp)
    ctx->pc = 0x2bc550u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 0));
label_2bc554:
    // 0x2bc554: 0xc065af8  jal         func_196BE0
label_2bc558:
    if (ctx->pc == 0x2BC558u) {
        ctx->pc = 0x2BC558u;
            // 0x2bc558: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
        ctx->pc = 0x2BC55Cu;
        goto label_2bc55c;
    }
    ctx->pc = 0x2BC554u;
    SET_GPR_U32(ctx, 31, 0x2BC55Cu);
    ctx->pc = 0x2BC558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC554u;
            // 0x2bc558: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC55Cu; }
        if (ctx->pc != 0x2BC55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC55Cu; }
        if (ctx->pc != 0x2BC55Cu) { return; }
    }
    ctx->pc = 0x2BC55Cu;
label_2bc55c:
    // 0x2bc55c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc560:
    // 0x2bc560: 0xc066d24  jal         func_19B490
label_2bc564:
    if (ctx->pc == 0x2BC564u) {
        ctx->pc = 0x2BC564u;
            // 0x2bc564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC568u;
        goto label_2bc568;
    }
    ctx->pc = 0x2BC560u;
    SET_GPR_U32(ctx, 31, 0x2BC568u);
    ctx->pc = 0x2BC564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC560u;
            // 0x2bc564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC568u; }
        if (ctx->pc != 0x2BC568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC568u; }
        if (ctx->pc != 0x2BC568u) { return; }
    }
    ctx->pc = 0x2BC568u;
label_2bc568:
    // 0x2bc568: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x2bc568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_2bc56c:
    // 0x2bc56c: 0x3c0b4170  lui         $t3, 0x4170
    ctx->pc = 0x2bc56cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16752 << 16));
label_2bc570:
    // 0x2bc570: 0xa60001de  sh          $zero, 0x1DE($s0)
    ctx->pc = 0x2bc570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 478), (uint16_t)GPR_U32(ctx, 0));
label_2bc574:
    // 0x2bc574: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2bc574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2bc578:
    // 0x2bc578: 0xa60001e0  sh          $zero, 0x1E0($s0)
    ctx->pc = 0x2bc578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 480), (uint16_t)GPR_U32(ctx, 0));
label_2bc57c:
    // 0x2bc57c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x2bc57cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2bc580:
    // 0x2bc580: 0xa60001e2  sh          $zero, 0x1E2($s0)
    ctx->pc = 0x2bc580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 482), (uint16_t)GPR_U32(ctx, 0));
label_2bc584:
    // 0x2bc584: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bc584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2bc588:
    // 0x2bc588: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x2bc588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_2bc58c:
    // 0x2bc58c: 0x3c0ac160  lui         $t2, 0xC160
    ctx->pc = 0x2bc58cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49504 << 16));
label_2bc590:
    // 0x2bc590: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x2bc590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
label_2bc594:
    // 0x2bc594: 0x3c094080  lui         $t1, 0x4080
    ctx->pc = 0x2bc594u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16512 << 16));
label_2bc598:
    // 0x2bc598: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x2bc598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
label_2bc59c:
    // 0x2bc59c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2bc59cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2bc5a0:
    // 0x2bc5a0: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x2bc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
label_2bc5a4:
    // 0x2bc5a4: 0x260601f4  addiu       $a2, $s0, 0x1F4
    ctx->pc = 0x2bc5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
label_2bc5a8:
    // 0x2bc5a8: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x2bc5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
label_2bc5ac:
    // 0x2bc5ac: 0x260501e4  addiu       $a1, $s0, 0x1E4
    ctx->pc = 0x2bc5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
label_2bc5b0:
    // 0x2bc5b0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2bc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_2bc5b4:
    // 0x2bc5b4: 0x26030204  addiu       $v1, $s0, 0x204
    ctx->pc = 0x2bc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
label_2bc5b8:
    // 0x2bc5b8: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2bc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_2bc5bc:
    // 0x2bc5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bc5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc5c0:
    // 0x2bc5c0: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x2bc5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
label_2bc5c4:
    // 0x2bc5c4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bc5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bc5c8:
    // 0x2bc5c8: 0xa6000258  sh          $zero, 0x258($s0)
    ctx->pc = 0x2bc5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 0));
label_2bc5cc:
    // 0x2bc5cc: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x2bc5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
label_2bc5d0:
    // 0x2bc5d0: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x2bc5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_2bc5d4:
    // 0x2bc5d4: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x2bc5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_2bc5d8:
    // 0x2bc5d8: 0xae0b0260  sw          $t3, 0x260($s0)
    ctx->pc = 0x2bc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 11));
label_2bc5dc:
    // 0x2bc5dc: 0xae0a0264  sw          $t2, 0x264($s0)
    ctx->pc = 0x2bc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 10));
label_2bc5e0:
    // 0x2bc5e0: 0xae090268  sw          $t1, 0x268($s0)
    ctx->pc = 0x2bc5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 9));
label_2bc5e4:
    // 0x2bc5e4: 0xae08026c  sw          $t0, 0x26C($s0)
    ctx->pc = 0x2bc5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 8));
label_2bc5e8:
    // 0x2bc5e8: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x2bc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_2bc5ec:
    // 0x2bc5ec: 0xae070274  sw          $a3, 0x274($s0)
    ctx->pc = 0x2bc5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 7));
label_2bc5f0:
    // 0x2bc5f0: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x2bc5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_2bc5f4:
    // 0x2bc5f4: 0xae08027c  sw          $t0, 0x27C($s0)
    ctx->pc = 0x2bc5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 8));
label_2bc5f8:
    // 0x2bc5f8: 0xa60001e4  sh          $zero, 0x1E4($s0)
    ctx->pc = 0x2bc5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 484), (uint16_t)GPR_U32(ctx, 0));
label_2bc5fc:
    // 0x2bc5fc: 0xa60001f4  sh          $zero, 0x1F4($s0)
    ctx->pc = 0x2bc5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 500), (uint16_t)GPR_U32(ctx, 0));
label_2bc600:
    // 0x2bc600: 0xa6000204  sh          $zero, 0x204($s0)
    ctx->pc = 0x2bc600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 516), (uint16_t)GPR_U32(ctx, 0));
label_2bc604:
    // 0x2bc604: 0xa60001e6  sh          $zero, 0x1E6($s0)
    ctx->pc = 0x2bc604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 486), (uint16_t)GPR_U32(ctx, 0));
label_2bc608:
    // 0x2bc608: 0xa60001f6  sh          $zero, 0x1F6($s0)
    ctx->pc = 0x2bc608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 502), (uint16_t)GPR_U32(ctx, 0));
label_2bc60c:
    // 0x2bc60c: 0xa6000206  sh          $zero, 0x206($s0)
    ctx->pc = 0x2bc60cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 518), (uint16_t)GPR_U32(ctx, 0));
label_2bc610:
    // 0x2bc610: 0xa60001e8  sh          $zero, 0x1E8($s0)
    ctx->pc = 0x2bc610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 0));
label_2bc614:
    // 0x2bc614: 0xa60001f8  sh          $zero, 0x1F8($s0)
    ctx->pc = 0x2bc614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 504), (uint16_t)GPR_U32(ctx, 0));
label_2bc618:
    // 0x2bc618: 0xa6000208  sh          $zero, 0x208($s0)
    ctx->pc = 0x2bc618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 0));
label_2bc61c:
    // 0x2bc61c: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x2bc61cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
label_2bc620:
    // 0x2bc620: 0xa60001fa  sh          $zero, 0x1FA($s0)
    ctx->pc = 0x2bc620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 506), (uint16_t)GPR_U32(ctx, 0));
label_2bc624:
    // 0x2bc624: 0xa600020a  sh          $zero, 0x20A($s0)
    ctx->pc = 0x2bc624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 0));
label_2bc628:
    // 0x2bc628: 0xa60001ec  sh          $zero, 0x1EC($s0)
    ctx->pc = 0x2bc628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 0));
label_2bc62c:
    // 0x2bc62c: 0xa60001fc  sh          $zero, 0x1FC($s0)
    ctx->pc = 0x2bc62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 508), (uint16_t)GPR_U32(ctx, 0));
label_2bc630:
    // 0x2bc630: 0xa600020c  sh          $zero, 0x20C($s0)
    ctx->pc = 0x2bc630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 0));
label_2bc634:
    // 0x2bc634: 0xa60001ee  sh          $zero, 0x1EE($s0)
    ctx->pc = 0x2bc634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 0));
label_2bc638:
    // 0x2bc638: 0xa60001fe  sh          $zero, 0x1FE($s0)
    ctx->pc = 0x2bc638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 510), (uint16_t)GPR_U32(ctx, 0));
label_2bc63c:
    // 0x2bc63c: 0xa600020e  sh          $zero, 0x20E($s0)
    ctx->pc = 0x2bc63cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 526), (uint16_t)GPR_U32(ctx, 0));
label_2bc640:
    // 0x2bc640: 0xa60001f0  sh          $zero, 0x1F0($s0)
    ctx->pc = 0x2bc640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 496), (uint16_t)GPR_U32(ctx, 0));
label_2bc644:
    // 0x2bc644: 0xa6000200  sh          $zero, 0x200($s0)
    ctx->pc = 0x2bc644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 0));
label_2bc648:
    // 0x2bc648: 0xa6000210  sh          $zero, 0x210($s0)
    ctx->pc = 0x2bc648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 528), (uint16_t)GPR_U32(ctx, 0));
label_2bc64c:
    // 0x2bc64c: 0xa60001f2  sh          $zero, 0x1F2($s0)
    ctx->pc = 0x2bc64cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 498), (uint16_t)GPR_U32(ctx, 0));
label_2bc650:
    // 0x2bc650: 0xa6000202  sh          $zero, 0x202($s0)
    ctx->pc = 0x2bc650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 0));
label_2bc654:
    // 0x2bc654: 0xa6000212  sh          $zero, 0x212($s0)
    ctx->pc = 0x2bc654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 0));
label_2bc658:
    // 0x2bc658: 0xae060214  sw          $a2, 0x214($s0)
    ctx->pc = 0x2bc658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 6));
label_2bc65c:
    // 0x2bc65c: 0xae050218  sw          $a1, 0x218($s0)
    ctx->pc = 0x2bc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 5));
label_2bc660:
    // 0x2bc660: 0xae03021c  sw          $v1, 0x21C($s0)
    ctx->pc = 0x2bc660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 3));
label_2bc664:
    // 0x2bc664: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x2bc664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_2bc668:
    // 0x2bc668: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x2bc668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
label_2bc66c:
    // 0x2bc66c: 0xc04c680  jal         func_131A00
label_2bc670:
    if (ctx->pc == 0x2BC670u) {
        ctx->pc = 0x2BC670u;
            // 0x2bc670: 0xae000298  sw          $zero, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
        ctx->pc = 0x2BC674u;
        goto label_2bc674;
    }
    ctx->pc = 0x2BC66Cu;
    SET_GPR_U32(ctx, 31, 0x2BC674u);
    ctx->pc = 0x2BC670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC66Cu;
            // 0x2bc670: 0xae000298  sw          $zero, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC674u; }
        if (ctx->pc != 0x2BC674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC674u; }
        if (ctx->pc != 0x2BC674u) { return; }
    }
    ctx->pc = 0x2BC674u;
label_2bc674:
    // 0x2bc674: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc678:
    // 0x2bc678: 0xc04c670  jal         func_1319C0
label_2bc67c:
    if (ctx->pc == 0x2BC67Cu) {
        ctx->pc = 0x2BC67Cu;
            // 0x2bc67c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x2BC680u;
        goto label_2bc680;
    }
    ctx->pc = 0x2BC678u;
    SET_GPR_U32(ctx, 31, 0x2BC680u);
    ctx->pc = 0x2BC67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC678u;
            // 0x2bc67c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC680u; }
        if (ctx->pc != 0x2BC680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC680u; }
        if (ctx->pc != 0x2BC680u) { return; }
    }
    ctx->pc = 0x2BC680u;
label_2bc680:
    // 0x2bc680: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2bc684:
    // 0x2bc684: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bc684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc688:
    // 0x2bc688: 0xc04c68c  jal         func_131A30
label_2bc68c:
    if (ctx->pc == 0x2BC68Cu) {
        ctx->pc = 0x2BC68Cu;
            // 0x2bc68c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x2BC690u;
        goto label_2bc690;
    }
    ctx->pc = 0x2BC688u;
    SET_GPR_U32(ctx, 31, 0x2BC690u);
    ctx->pc = 0x2BC68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC688u;
            // 0x2bc68c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC690u; }
        if (ctx->pc != 0x2BC690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC690u; }
        if (ctx->pc != 0x2BC690u) { return; }
    }
    ctx->pc = 0x2BC690u;
label_2bc690:
    // 0x2bc690: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2bc690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_2bc694:
    // 0x2bc694: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2bc698:
    // 0x2bc698: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2bc698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc69c:
    // 0x2bc69c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bc69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bc6a0:
    // 0x2bc6a0: 0xc04c564  jal         func_131590
label_2bc6a4:
    if (ctx->pc == 0x2BC6A4u) {
        ctx->pc = 0x2BC6A4u;
            // 0x2bc6a4: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x2BC6A8u;
        goto label_2bc6a8;
    }
    ctx->pc = 0x2BC6A0u;
    SET_GPR_U32(ctx, 31, 0x2BC6A8u);
    ctx->pc = 0x2BC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC6A0u;
            // 0x2bc6a4: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6A8u; }
        if (ctx->pc != 0x2BC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6A8u; }
        if (ctx->pc != 0x2BC6A8u) { return; }
    }
    ctx->pc = 0x2BC6A8u;
label_2bc6a8:
    // 0x2bc6a8: 0x8e190170  lw          $t9, 0x170($s0)
    ctx->pc = 0x2bc6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_2bc6ac:
    // 0x2bc6ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc6b0:
    // 0x2bc6b0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bc6b4:
    // 0x2bc6b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bc6b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2bc6b8:
    // 0x2bc6b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2bc6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2bc6bc:
    // 0x2bc6bc: 0x320f809  jalr        $t9
label_2bc6c0:
    if (ctx->pc == 0x2BC6C0u) {
        ctx->pc = 0x2BC6C0u;
            // 0x2bc6c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2BC6C4u;
        goto label_2bc6c4;
    }
    ctx->pc = 0x2BC6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC6C4u);
        ctx->pc = 0x2BC6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC6BCu;
            // 0x2bc6c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6C4u; }
            if (ctx->pc != 0x2BC6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC6C4u;
label_2bc6c4:
    // 0x2bc6c4: 0x8e190170  lw          $t9, 0x170($s0)
    ctx->pc = 0x2bc6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_2bc6c8:
    // 0x2bc6c8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2bc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2bc6cc:
    // 0x2bc6cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bc6ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bc6d0:
    // 0x2bc6d0: 0x320f809  jalr        $t9
label_2bc6d4:
    if (ctx->pc == 0x2BC6D4u) {
        ctx->pc = 0x2BC6D4u;
            // 0x2bc6d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BC6D8u;
        goto label_2bc6d8;
    }
    ctx->pc = 0x2BC6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC6D8u);
        ctx->pc = 0x2BC6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC6D0u;
            // 0x2bc6d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC6D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6D8u; }
            if (ctx->pc != 0x2BC6D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC6D8u;
label_2bc6d8:
    // 0x2bc6d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc6dc:
    // 0x2bc6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc6e0:
    // 0x2bc6e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc6e4:
    // 0x2bc6e4: 0x3e00008  jr          $ra
label_2bc6e8:
    if (ctx->pc == 0x2BC6E8u) {
        ctx->pc = 0x2BC6E8u;
            // 0x2bc6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BC6ECu;
        goto label_fallthrough_0x2bc6e4;
    }
    ctx->pc = 0x2BC6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC6E4u;
            // 0x2bc6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bc6e4:
    ctx->pc = 0x2BC6ECu;
}
