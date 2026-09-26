#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ModelReadStart__13CMenuItemInfoFiii
// Address: 0x24c450 - 0x24c884
void ModelReadStart__13CMenuItemInfoFiii_0x24c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelReadStart__13CMenuItemInfoFiii_0x24c450");
#endif

    switch (ctx->pc) {
        case 0x24c450u: goto label_24c450;
        case 0x24c454u: goto label_24c454;
        case 0x24c458u: goto label_24c458;
        case 0x24c45cu: goto label_24c45c;
        case 0x24c460u: goto label_24c460;
        case 0x24c464u: goto label_24c464;
        case 0x24c468u: goto label_24c468;
        case 0x24c46cu: goto label_24c46c;
        case 0x24c470u: goto label_24c470;
        case 0x24c474u: goto label_24c474;
        case 0x24c478u: goto label_24c478;
        case 0x24c47cu: goto label_24c47c;
        case 0x24c480u: goto label_24c480;
        case 0x24c484u: goto label_24c484;
        case 0x24c488u: goto label_24c488;
        case 0x24c48cu: goto label_24c48c;
        case 0x24c490u: goto label_24c490;
        case 0x24c494u: goto label_24c494;
        case 0x24c498u: goto label_24c498;
        case 0x24c49cu: goto label_24c49c;
        case 0x24c4a0u: goto label_24c4a0;
        case 0x24c4a4u: goto label_24c4a4;
        case 0x24c4a8u: goto label_24c4a8;
        case 0x24c4acu: goto label_24c4ac;
        case 0x24c4b0u: goto label_24c4b0;
        case 0x24c4b4u: goto label_24c4b4;
        case 0x24c4b8u: goto label_24c4b8;
        case 0x24c4bcu: goto label_24c4bc;
        case 0x24c4c0u: goto label_24c4c0;
        case 0x24c4c4u: goto label_24c4c4;
        case 0x24c4c8u: goto label_24c4c8;
        case 0x24c4ccu: goto label_24c4cc;
        case 0x24c4d0u: goto label_24c4d0;
        case 0x24c4d4u: goto label_24c4d4;
        case 0x24c4d8u: goto label_24c4d8;
        case 0x24c4dcu: goto label_24c4dc;
        case 0x24c4e0u: goto label_24c4e0;
        case 0x24c4e4u: goto label_24c4e4;
        case 0x24c4e8u: goto label_24c4e8;
        case 0x24c4ecu: goto label_24c4ec;
        case 0x24c4f0u: goto label_24c4f0;
        case 0x24c4f4u: goto label_24c4f4;
        case 0x24c4f8u: goto label_24c4f8;
        case 0x24c4fcu: goto label_24c4fc;
        case 0x24c500u: goto label_24c500;
        case 0x24c504u: goto label_24c504;
        case 0x24c508u: goto label_24c508;
        case 0x24c50cu: goto label_24c50c;
        case 0x24c510u: goto label_24c510;
        case 0x24c514u: goto label_24c514;
        case 0x24c518u: goto label_24c518;
        case 0x24c51cu: goto label_24c51c;
        case 0x24c520u: goto label_24c520;
        case 0x24c524u: goto label_24c524;
        case 0x24c528u: goto label_24c528;
        case 0x24c52cu: goto label_24c52c;
        case 0x24c530u: goto label_24c530;
        case 0x24c534u: goto label_24c534;
        case 0x24c538u: goto label_24c538;
        case 0x24c53cu: goto label_24c53c;
        case 0x24c540u: goto label_24c540;
        case 0x24c544u: goto label_24c544;
        case 0x24c548u: goto label_24c548;
        case 0x24c54cu: goto label_24c54c;
        case 0x24c550u: goto label_24c550;
        case 0x24c554u: goto label_24c554;
        case 0x24c558u: goto label_24c558;
        case 0x24c55cu: goto label_24c55c;
        case 0x24c560u: goto label_24c560;
        case 0x24c564u: goto label_24c564;
        case 0x24c568u: goto label_24c568;
        case 0x24c56cu: goto label_24c56c;
        case 0x24c570u: goto label_24c570;
        case 0x24c574u: goto label_24c574;
        case 0x24c578u: goto label_24c578;
        case 0x24c57cu: goto label_24c57c;
        case 0x24c580u: goto label_24c580;
        case 0x24c584u: goto label_24c584;
        case 0x24c588u: goto label_24c588;
        case 0x24c58cu: goto label_24c58c;
        case 0x24c590u: goto label_24c590;
        case 0x24c594u: goto label_24c594;
        case 0x24c598u: goto label_24c598;
        case 0x24c59cu: goto label_24c59c;
        case 0x24c5a0u: goto label_24c5a0;
        case 0x24c5a4u: goto label_24c5a4;
        case 0x24c5a8u: goto label_24c5a8;
        case 0x24c5acu: goto label_24c5ac;
        case 0x24c5b0u: goto label_24c5b0;
        case 0x24c5b4u: goto label_24c5b4;
        case 0x24c5b8u: goto label_24c5b8;
        case 0x24c5bcu: goto label_24c5bc;
        case 0x24c5c0u: goto label_24c5c0;
        case 0x24c5c4u: goto label_24c5c4;
        case 0x24c5c8u: goto label_24c5c8;
        case 0x24c5ccu: goto label_24c5cc;
        case 0x24c5d0u: goto label_24c5d0;
        case 0x24c5d4u: goto label_24c5d4;
        case 0x24c5d8u: goto label_24c5d8;
        case 0x24c5dcu: goto label_24c5dc;
        case 0x24c5e0u: goto label_24c5e0;
        case 0x24c5e4u: goto label_24c5e4;
        case 0x24c5e8u: goto label_24c5e8;
        case 0x24c5ecu: goto label_24c5ec;
        case 0x24c5f0u: goto label_24c5f0;
        case 0x24c5f4u: goto label_24c5f4;
        case 0x24c5f8u: goto label_24c5f8;
        case 0x24c5fcu: goto label_24c5fc;
        case 0x24c600u: goto label_24c600;
        case 0x24c604u: goto label_24c604;
        case 0x24c608u: goto label_24c608;
        case 0x24c60cu: goto label_24c60c;
        case 0x24c610u: goto label_24c610;
        case 0x24c614u: goto label_24c614;
        case 0x24c618u: goto label_24c618;
        case 0x24c61cu: goto label_24c61c;
        case 0x24c620u: goto label_24c620;
        case 0x24c624u: goto label_24c624;
        case 0x24c628u: goto label_24c628;
        case 0x24c62cu: goto label_24c62c;
        case 0x24c630u: goto label_24c630;
        case 0x24c634u: goto label_24c634;
        case 0x24c638u: goto label_24c638;
        case 0x24c63cu: goto label_24c63c;
        case 0x24c640u: goto label_24c640;
        case 0x24c644u: goto label_24c644;
        case 0x24c648u: goto label_24c648;
        case 0x24c64cu: goto label_24c64c;
        case 0x24c650u: goto label_24c650;
        case 0x24c654u: goto label_24c654;
        case 0x24c658u: goto label_24c658;
        case 0x24c65cu: goto label_24c65c;
        case 0x24c660u: goto label_24c660;
        case 0x24c664u: goto label_24c664;
        case 0x24c668u: goto label_24c668;
        case 0x24c66cu: goto label_24c66c;
        case 0x24c670u: goto label_24c670;
        case 0x24c674u: goto label_24c674;
        case 0x24c678u: goto label_24c678;
        case 0x24c67cu: goto label_24c67c;
        case 0x24c680u: goto label_24c680;
        case 0x24c684u: goto label_24c684;
        case 0x24c688u: goto label_24c688;
        case 0x24c68cu: goto label_24c68c;
        case 0x24c690u: goto label_24c690;
        case 0x24c694u: goto label_24c694;
        case 0x24c698u: goto label_24c698;
        case 0x24c69cu: goto label_24c69c;
        case 0x24c6a0u: goto label_24c6a0;
        case 0x24c6a4u: goto label_24c6a4;
        case 0x24c6a8u: goto label_24c6a8;
        case 0x24c6acu: goto label_24c6ac;
        case 0x24c6b0u: goto label_24c6b0;
        case 0x24c6b4u: goto label_24c6b4;
        case 0x24c6b8u: goto label_24c6b8;
        case 0x24c6bcu: goto label_24c6bc;
        case 0x24c6c0u: goto label_24c6c0;
        case 0x24c6c4u: goto label_24c6c4;
        case 0x24c6c8u: goto label_24c6c8;
        case 0x24c6ccu: goto label_24c6cc;
        case 0x24c6d0u: goto label_24c6d0;
        case 0x24c6d4u: goto label_24c6d4;
        case 0x24c6d8u: goto label_24c6d8;
        case 0x24c6dcu: goto label_24c6dc;
        case 0x24c6e0u: goto label_24c6e0;
        case 0x24c6e4u: goto label_24c6e4;
        case 0x24c6e8u: goto label_24c6e8;
        case 0x24c6ecu: goto label_24c6ec;
        case 0x24c6f0u: goto label_24c6f0;
        case 0x24c6f4u: goto label_24c6f4;
        case 0x24c6f8u: goto label_24c6f8;
        case 0x24c6fcu: goto label_24c6fc;
        case 0x24c700u: goto label_24c700;
        case 0x24c704u: goto label_24c704;
        case 0x24c708u: goto label_24c708;
        case 0x24c70cu: goto label_24c70c;
        case 0x24c710u: goto label_24c710;
        case 0x24c714u: goto label_24c714;
        case 0x24c718u: goto label_24c718;
        case 0x24c71cu: goto label_24c71c;
        case 0x24c720u: goto label_24c720;
        case 0x24c724u: goto label_24c724;
        case 0x24c728u: goto label_24c728;
        case 0x24c72cu: goto label_24c72c;
        case 0x24c730u: goto label_24c730;
        case 0x24c734u: goto label_24c734;
        case 0x24c738u: goto label_24c738;
        case 0x24c73cu: goto label_24c73c;
        case 0x24c740u: goto label_24c740;
        case 0x24c744u: goto label_24c744;
        case 0x24c748u: goto label_24c748;
        case 0x24c74cu: goto label_24c74c;
        case 0x24c750u: goto label_24c750;
        case 0x24c754u: goto label_24c754;
        case 0x24c758u: goto label_24c758;
        case 0x24c75cu: goto label_24c75c;
        case 0x24c760u: goto label_24c760;
        case 0x24c764u: goto label_24c764;
        case 0x24c768u: goto label_24c768;
        case 0x24c76cu: goto label_24c76c;
        case 0x24c770u: goto label_24c770;
        case 0x24c774u: goto label_24c774;
        case 0x24c778u: goto label_24c778;
        case 0x24c77cu: goto label_24c77c;
        case 0x24c780u: goto label_24c780;
        case 0x24c784u: goto label_24c784;
        case 0x24c788u: goto label_24c788;
        case 0x24c78cu: goto label_24c78c;
        case 0x24c790u: goto label_24c790;
        case 0x24c794u: goto label_24c794;
        case 0x24c798u: goto label_24c798;
        case 0x24c79cu: goto label_24c79c;
        case 0x24c7a0u: goto label_24c7a0;
        case 0x24c7a4u: goto label_24c7a4;
        case 0x24c7a8u: goto label_24c7a8;
        case 0x24c7acu: goto label_24c7ac;
        case 0x24c7b0u: goto label_24c7b0;
        case 0x24c7b4u: goto label_24c7b4;
        case 0x24c7b8u: goto label_24c7b8;
        case 0x24c7bcu: goto label_24c7bc;
        case 0x24c7c0u: goto label_24c7c0;
        case 0x24c7c4u: goto label_24c7c4;
        case 0x24c7c8u: goto label_24c7c8;
        case 0x24c7ccu: goto label_24c7cc;
        case 0x24c7d0u: goto label_24c7d0;
        case 0x24c7d4u: goto label_24c7d4;
        case 0x24c7d8u: goto label_24c7d8;
        case 0x24c7dcu: goto label_24c7dc;
        case 0x24c7e0u: goto label_24c7e0;
        case 0x24c7e4u: goto label_24c7e4;
        case 0x24c7e8u: goto label_24c7e8;
        case 0x24c7ecu: goto label_24c7ec;
        case 0x24c7f0u: goto label_24c7f0;
        case 0x24c7f4u: goto label_24c7f4;
        case 0x24c7f8u: goto label_24c7f8;
        case 0x24c7fcu: goto label_24c7fc;
        case 0x24c800u: goto label_24c800;
        case 0x24c804u: goto label_24c804;
        case 0x24c808u: goto label_24c808;
        case 0x24c80cu: goto label_24c80c;
        case 0x24c810u: goto label_24c810;
        case 0x24c814u: goto label_24c814;
        case 0x24c818u: goto label_24c818;
        case 0x24c81cu: goto label_24c81c;
        case 0x24c820u: goto label_24c820;
        case 0x24c824u: goto label_24c824;
        case 0x24c828u: goto label_24c828;
        case 0x24c82cu: goto label_24c82c;
        case 0x24c830u: goto label_24c830;
        case 0x24c834u: goto label_24c834;
        case 0x24c838u: goto label_24c838;
        case 0x24c83cu: goto label_24c83c;
        case 0x24c840u: goto label_24c840;
        case 0x24c844u: goto label_24c844;
        case 0x24c848u: goto label_24c848;
        case 0x24c84cu: goto label_24c84c;
        case 0x24c850u: goto label_24c850;
        case 0x24c854u: goto label_24c854;
        case 0x24c858u: goto label_24c858;
        case 0x24c85cu: goto label_24c85c;
        case 0x24c860u: goto label_24c860;
        case 0x24c864u: goto label_24c864;
        case 0x24c868u: goto label_24c868;
        case 0x24c86cu: goto label_24c86c;
        case 0x24c870u: goto label_24c870;
        case 0x24c874u: goto label_24c874;
        case 0x24c878u: goto label_24c878;
        case 0x24c87cu: goto label_24c87c;
        case 0x24c880u: goto label_24c880;
        default: break;
    }

    ctx->pc = 0x24c450u;

label_24c450:
    // 0x24c450: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24c454:
    // 0x24c454: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c458:
    // 0x24c458: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_24c45c:
    // 0x24c45c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24c460:
    // 0x24c460: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24c464:
    // 0x24c464: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24c468:
    // 0x24c468: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24c468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24c46c:
    // 0x24c46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24c470:
    // 0x24c470: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24c470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c474:
    // 0x24c474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24c474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24c478:
    // 0x24c478: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24c478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c47c:
    // 0x24c47c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24c480:
    // 0x24c480: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x24c480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24c484:
    // 0x24c484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24c488:
    // 0x24c488: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x24c488u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
label_24c48c:
    // 0x24c48c: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x24c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_24c490:
    // 0x24c490: 0x2631dbf0  addiu       $s1, $s1, -0x2410
    ctx->pc = 0x24c490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958064));
label_24c494:
    // 0x24c494: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c498:
    // 0x24c498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c49c:
    // 0x24c49c: 0xac20dc0c  sw          $zero, -0x23F4($at)
    ctx->pc = 0x24c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
label_24c4a0:
    // 0x24c4a0: 0xc04e780  jal         func_139E00
label_24c4a4:
    if (ctx->pc == 0x24C4A4u) {
        ctx->pc = 0x24C4A4u;
            // 0x24c4a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C4A8u;
        goto label_24c4a8;
    }
    ctx->pc = 0x24C4A0u;
    SET_GPR_U32(ctx, 31, 0x24C4A8u);
    ctx->pc = 0x24C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4A0u;
            // 0x24c4a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4A8u; }
        if (ctx->pc != 0x24C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4A8u; }
        if (ctx->pc != 0x24C4A8u) { return; }
    }
    ctx->pc = 0x24C4A8u;
label_24c4a8:
    // 0x24c4a8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_24c4ac:
    if (ctx->pc == 0x24C4ACu) {
        ctx->pc = 0x24C4ACu;
            // 0x24c4ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C4B0u;
        goto label_24c4b0;
    }
    ctx->pc = 0x24C4A8u;
    {
        const bool branch_taken_0x24c4a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4A8u;
            // 0x24c4ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4a8) {
            ctx->pc = 0x24C4B8u;
            goto label_24c4b8;
        }
    }
    ctx->pc = 0x24C4B0u;
label_24c4b0:
    // 0x24c4b0: 0xc0930f4  jal         func_24C3D0
label_24c4b4:
    if (ctx->pc == 0x24C4B4u) {
        ctx->pc = 0x24C4B8u;
        goto label_24c4b8;
    }
    ctx->pc = 0x24C4B0u;
    SET_GPR_U32(ctx, 31, 0x24C4B8u);
    ctx->pc = 0x24C3D0u;
    if (runtime->hasFunction(0x24C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x24C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4B8u; }
        if (ctx->pc != 0x24C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadItemNo__13CMenuItemInfoFv_0x24c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4B8u; }
        if (ctx->pc != 0x24C4B8u) { return; }
    }
    ctx->pc = 0x24C4B8u;
label_24c4b8:
    // 0x24c4b8: 0x8f849584  lw          $a0, -0x6A7C($gp)
    ctx->pc = 0x24c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
label_24c4bc:
    // 0x24c4bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24c4c0:
    // 0x24c4c0: 0xa7828364  sh          $v0, -0x7C9C($gp)
    ctx->pc = 0x24c4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935396), (uint16_t)GPR_U32(ctx, 2));
label_24c4c4:
    // 0x24c4c4: 0xa3809764  sb          $zero, -0x689C($gp)
    ctx->pc = 0x24c4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940516), (uint8_t)GPR_U32(ctx, 0));
label_24c4c8:
    // 0x24c4c8: 0xc08b614  jal         func_22D850
label_24c4cc:
    if (ctx->pc == 0x24C4CCu) {
        ctx->pc = 0x24C4CCu;
            // 0x24c4cc: 0xaf8095a8  sw          $zero, -0x6A58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940072), GPR_U32(ctx, 0));
        ctx->pc = 0x24C4D0u;
        goto label_24c4d0;
    }
    ctx->pc = 0x24C4C8u;
    SET_GPR_U32(ctx, 31, 0x24C4D0u);
    ctx->pc = 0x24C4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4C8u;
            // 0x24c4cc: 0xaf8095a8  sw          $zero, -0x6A58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4D0u; }
        if (ctx->pc != 0x24C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CRepairManagerFv_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4D0u; }
        if (ctx->pc != 0x24C4D0u) { return; }
    }
    ctx->pc = 0x24C4D0u;
label_24c4d0:
    // 0x24c4d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24c4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24c4d4:
    // 0x24c4d4: 0xc08bcf4  jal         func_22F3D0
label_24c4d8:
    if (ctx->pc == 0x24C4D8u) {
        ctx->pc = 0x24C4D8u;
            // 0x24c4d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C4DCu;
        goto label_24c4dc;
    }
    ctx->pc = 0x24C4D4u;
    SET_GPR_U32(ctx, 31, 0x24C4DCu);
    ctx->pc = 0x24C4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4D4u;
            // 0x24c4d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F3D0u;
    if (runtime->hasFunction(0x22F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x22F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4DCu; }
        if (ctx->pc != 0x24C4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuildUpInfoChara__FP11CCharacter2f_0x22f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4DCu; }
        if (ctx->pc != 0x24C4DCu) { return; }
    }
    ctx->pc = 0x24C4DCu;
label_24c4dc:
    // 0x24c4dc: 0xc090c40  jal         func_243100
label_24c4e0:
    if (ctx->pc == 0x24C4E0u) {
        ctx->pc = 0x24C4E0u;
            // 0x24c4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C4E4u;
        goto label_24c4e4;
    }
    ctx->pc = 0x24C4DCu;
    SET_GPR_U32(ctx, 31, 0x24C4E4u);
    ctx->pc = 0x24C4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4DCu;
            // 0x24c4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4E4u; }
        if (ctx->pc != 0x24C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C4E4u; }
        if (ctx->pc != 0x24C4E4u) { return; }
    }
    ctx->pc = 0x24C4E4u;
label_24c4e4:
    // 0x24c4e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c4e8:
    // 0x24c4e8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_24c4ec:
    if (ctx->pc == 0x24C4ECu) {
        ctx->pc = 0x24C4ECu;
            // 0x24c4ec: 0x2e610006  sltiu       $at, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->pc = 0x24C4F0u;
        goto label_24c4f0;
    }
    ctx->pc = 0x24C4E8u;
    {
        const bool branch_taken_0x24c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24C4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4E8u;
            // 0x24c4ec: 0x2e610006  sltiu       $at, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4e8) {
            ctx->pc = 0x24C504u;
            goto label_24c504;
        }
    }
    ctx->pc = 0x24C4F0u;
label_24c4f0:
    // 0x24c4f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24c4f4:
    // 0x24c4f4: 0x12620002  beq         $s3, $v0, . + 4 + (0x2 << 2)
label_24c4f8:
    if (ctx->pc == 0x24C4F8u) {
        ctx->pc = 0x24C4F8u;
            // 0x24c4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24C4FCu;
        goto label_24c4fc;
    }
    ctx->pc = 0x24C4F4u;
    {
        const bool branch_taken_0x24c4f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C4F4u;
            // 0x24c4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4f4) {
            ctx->pc = 0x24C500u;
            goto label_24c500;
        }
    }
    ctx->pc = 0x24C4FCu;
label_24c4fc:
    // 0x24c4fc: 0xa2820130  sb          $v0, 0x130($s4)
    ctx->pc = 0x24c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 304), (uint8_t)GPR_U32(ctx, 2));
label_24c500:
    // 0x24c500: 0x2e610006  sltiu       $at, $s3, 0x6
    ctx->pc = 0x24c500u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_24c504:
    // 0x24c504: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
label_24c508:
    if (ctx->pc == 0x24C508u) {
        ctx->pc = 0x24C508u;
            // 0x24c508: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x24C50Cu;
        goto label_24c50c;
    }
    ctx->pc = 0x24C504u;
    {
        const bool branch_taken_0x24c504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C504u;
            // 0x24c508: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c504) {
            ctx->pc = 0x24C784u;
            goto label_24c784;
        }
    }
    ctx->pc = 0x24C50Cu;
label_24c50c:
    // 0x24c50c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x24c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_24c510:
    // 0x24c510: 0x2463ba60  addiu       $v1, $v1, -0x45A0
    ctx->pc = 0x24c510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949472));
label_24c514:
    // 0x24c514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c518:
    // 0x24c518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c51c:
    // 0x24c51c: 0x400008  jr          $v0
label_24c520:
    if (ctx->pc == 0x24C520u) {
        ctx->pc = 0x24C524u;
        goto label_24c524;
    }
    ctx->pc = 0x24C51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24C524u: goto label_24c524;
            case 0x24C598u: goto label_24c598;
            case 0x24C6D0u: goto label_24c6d0;
            case 0x24C73Cu: goto label_24c73c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24C524u;
label_24c524:
    // 0x24c524: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
label_24c528:
    if (ctx->pc == 0x24C528u) {
        ctx->pc = 0x24C528u;
            // 0x24c528: 0x86950114  lh          $s5, 0x114($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
        ctx->pc = 0x24C52Cu;
        goto label_24c52c;
    }
    ctx->pc = 0x24C524u;
    {
        const bool branch_taken_0x24c524 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C524u;
            // 0x24c528: 0x86950114  lh          $s5, 0x114($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c524) {
            ctx->pc = 0x24C530u;
            goto label_24c530;
        }
    }
    ctx->pc = 0x24C52Cu;
label_24c52c:
    // 0x24c52c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24c52cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c530:
    // 0x24c530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c534:
    // 0x24c534: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
label_24c538:
    if (ctx->pc == 0x24C538u) {
        ctx->pc = 0x24C538u;
            // 0x24c538: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24C53Cu;
        goto label_24c53c;
    }
    ctx->pc = 0x24C534u;
    {
        const bool branch_taken_0x24c534 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C534u;
            // 0x24c538: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c534) {
            ctx->pc = 0x24C540u;
            goto label_24c540;
        }
    }
    ctx->pc = 0x24C53Cu;
label_24c53c:
    // 0x24c53c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24c53cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c540:
    // 0x24c540: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x24c540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24c544:
    // 0x24c544: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_24c548:
    if (ctx->pc == 0x24C548u) {
        ctx->pc = 0x24C54Cu;
        goto label_24c54c;
    }
    ctx->pc = 0x24C544u;
    {
        const bool branch_taken_0x24c544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c544) {
            ctx->pc = 0x24C578u;
            goto label_24c578;
        }
    }
    ctx->pc = 0x24C54Cu;
label_24c54c:
    // 0x24c54c: 0x83839b74  lb          $v1, -0x648C($gp)
    ctx->pc = 0x24c54cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_24c550:
    // 0x24c550: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24c554:
    // 0x24c554: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_24c558:
    if (ctx->pc == 0x24C558u) {
        ctx->pc = 0x24C55Cu;
        goto label_24c55c;
    }
    ctx->pc = 0x24C554u;
    {
        const bool branch_taken_0x24c554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c554) {
            ctx->pc = 0x24C578u;
            goto label_24c578;
        }
    }
    ctx->pc = 0x24C55Cu;
label_24c55c:
    // 0x24c55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c560:
    // 0x24c560: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24c564:
    // 0x24c564: 0xa3829764  sb          $v0, -0x689C($gp)
    ctx->pc = 0x24c564u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940516), (uint8_t)GPR_U32(ctx, 2));
label_24c568:
    // 0x24c568: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24c568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24c56c:
    // 0x24c56c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x24c56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_24c570:
    // 0x24c570: 0x320f809  jalr        $t9
label_24c574:
    if (ctx->pc == 0x24C574u) {
        ctx->pc = 0x24C574u;
            // 0x24c574: 0x24a5e330  addiu       $a1, $a1, -0x1CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
        ctx->pc = 0x24C578u;
        goto label_24c578;
    }
    ctx->pc = 0x24C570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24C578u);
        ctx->pc = 0x24C574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C570u;
            // 0x24c574: 0x24a5e330  addiu       $a1, $a1, -0x1CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C578u; }
            if (ctx->pc != 0x24C578u) { return; }
        }
        }
    }
    ctx->pc = 0x24C578u;
label_24c578:
    // 0x24c578: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24c578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_24c57c:
    // 0x24c57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c580:
    // 0x24c580: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24c580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24c584:
    // 0x24c584: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24c584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c588:
    // 0x24c588: 0xc0ae434  jal         func_2B90D0
label_24c58c:
    if (ctx->pc == 0x24C58Cu) {
        ctx->pc = 0x24C58Cu;
            // 0x24c58c: 0x24c6ca80  addiu       $a2, $a2, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
        ctx->pc = 0x24C590u;
        goto label_24c590;
    }
    ctx->pc = 0x24C588u;
    SET_GPR_U32(ctx, 31, 0x24C590u);
    ctx->pc = 0x24C58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C588u;
            // 0x24c58c: 0x24c6ca80  addiu       $a2, $a2, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C590u; }
        if (ctx->pc != 0x24C590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C590u; }
        if (ctx->pc != 0x24C590u) { return; }
    }
    ctx->pc = 0x24C590u;
label_24c590:
    // 0x24c590: 0x1000007d  b           . + 4 + (0x7D << 2)
label_24c594:
    if (ctx->pc == 0x24C594u) {
        ctx->pc = 0x24C594u;
            // 0x24c594: 0x8e91002c  lw          $s1, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->pc = 0x24C598u;
        goto label_24c598;
    }
    ctx->pc = 0x24C590u;
    {
        const bool branch_taken_0x24c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C590u;
            // 0x24c594: 0x8e91002c  lw          $s1, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c590) {
            ctx->pc = 0x24C788u;
            goto label_24c788;
        }
    }
    ctx->pc = 0x24C598u;
label_24c598:
    // 0x24c598: 0xc04e640  jal         func_139900
label_24c59c:
    if (ctx->pc == 0x24C59Cu) {
        ctx->pc = 0x24C59Cu;
            // 0x24c59c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x24C5A0u;
        goto label_24c5a0;
    }
    ctx->pc = 0x24C598u;
    SET_GPR_U32(ctx, 31, 0x24C5A0u);
    ctx->pc = 0x24C59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C598u;
            // 0x24c59c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C5A0u; }
        if (ctx->pc != 0x24C5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C5A0u; }
        if (ctx->pc != 0x24C5A0u) { return; }
    }
    ctx->pc = 0x24C5A0u;
label_24c5a0:
    // 0x24c5a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c5a4:
    // 0x24c5a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24c5a8:
    // 0x24c5a8: 0x8c23dbb8  lw          $v1, -0x2448($at)
    ctx->pc = 0x24c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958008)));
label_24c5ac:
    // 0x24c5ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c5b0:
    // 0x24c5b0: 0x8c25dbb4  lw          $a1, -0x244C($at)
    ctx->pc = 0x24c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958004)));
label_24c5b4:
    // 0x24c5b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c5b8:
    // 0x24c5b8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x24c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24c5bc:
    // 0x24c5bc: 0x8c22dbb0  lw          $v0, -0x2450($at)
    ctx->pc = 0x24c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958000)));
label_24c5c0:
    // 0x24c5c0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x24c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_24c5c4:
    // 0x24c5c4: 0xc04e79c  jal         func_139E70
label_24c5c8:
    if (ctx->pc == 0x24C5C8u) {
        ctx->pc = 0x24C5C8u;
            // 0x24c5c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x24C5CCu;
        goto label_24c5cc;
    }
    ctx->pc = 0x24C5C4u;
    SET_GPR_U32(ctx, 31, 0x24C5CCu);
    ctx->pc = 0x24C5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C5C4u;
            // 0x24c5c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C5CCu; }
        if (ctx->pc != 0x24C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C5CCu; }
        if (ctx->pc != 0x24C5CCu) { return; }
    }
    ctx->pc = 0x24C5CCu;
label_24c5cc:
    // 0x24c5cc: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24c5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24c5d0:
    // 0x24c5d0: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24c5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_24c5d4:
    // 0x24c5d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24c5d8:
    // 0x24c5d8: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x24c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_24c5dc:
    // 0x24c5dc: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x24c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
label_24c5e0:
    // 0x24c5e0: 0xc0ac028  jal         func_2B00A0
label_24c5e4:
    if (ctx->pc == 0x24C5E4u) {
        ctx->pc = 0x24C5E4u;
            // 0x24c5e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C5E8u;
        goto label_24c5e8;
    }
    ctx->pc = 0x24C5E0u;
    SET_GPR_U32(ctx, 31, 0x24C5E8u);
    ctx->pc = 0x24C5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C5E0u;
            // 0x24c5e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C5E8u; }
        if (ctx->pc != 0x24C5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C5E8u; }
        if (ctx->pc != 0x24C5E8u) { return; }
    }
    ctx->pc = 0x24C5E8u;
label_24c5e8:
    // 0x24c5e8: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x24c5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_24c5ec:
    // 0x24c5ec: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x24c5ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24c5f0:
    // 0x24c5f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c5f4:
    // 0x24c5f4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24c5f8:
    // 0x24c5f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_24c5fc:
    // 0x24c5fc: 0x2484cac0  addiu       $a0, $a0, -0x3540
    ctx->pc = 0x24c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
label_24c600:
    // 0x24c600: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x24c600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
label_24c604:
    // 0x24c604: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24c604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24c608:
    // 0x24c608: 0xc04e79c  jal         func_139E70
label_24c60c:
    if (ctx->pc == 0x24C60Cu) {
        ctx->pc = 0x24C60Cu;
            // 0x24c60c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x24C610u;
        goto label_24c610;
    }
    ctx->pc = 0x24C608u;
    SET_GPR_U32(ctx, 31, 0x24C610u);
    ctx->pc = 0x24C60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C608u;
            // 0x24c60c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C610u; }
        if (ctx->pc != 0x24C610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C610u; }
        if (ctx->pc != 0x24C610u) { return; }
    }
    ctx->pc = 0x24C610u;
label_24c610:
    // 0x24c610: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24c614:
    // 0x24c614: 0xc04e748  jal         func_139D20
label_24c618:
    if (ctx->pc == 0x24C618u) {
        ctx->pc = 0x24C618u;
            // 0x24c618: 0x24055000  addiu       $a1, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->pc = 0x24C61Cu;
        goto label_24c61c;
    }
    ctx->pc = 0x24C614u;
    SET_GPR_U32(ctx, 31, 0x24C61Cu);
    ctx->pc = 0x24C618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C614u;
            // 0x24c618: 0x24055000  addiu       $a1, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C61Cu; }
        if (ctx->pc != 0x24C61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C61Cu; }
        if (ctx->pc != 0x24C61Cu) { return; }
    }
    ctx->pc = 0x24C61Cu;
label_24c61c:
    // 0x24c61c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x24c61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c620:
    // 0x24c620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c624:
    // 0x24c624: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x24c624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_24c628:
    // 0x24c628: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_24c62c:
    // 0x24c62c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x24c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_24c630:
    // 0x24c630: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x24c630u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_24c634:
    // 0x24c634: 0xc04e79c  jal         func_139E70
label_24c638:
    if (ctx->pc == 0x24C638u) {
        ctx->pc = 0x24C638u;
            // 0x24c638: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x24C63Cu;
        goto label_24c63c;
    }
    ctx->pc = 0x24C634u;
    SET_GPR_U32(ctx, 31, 0x24C63Cu);
    ctx->pc = 0x24C638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C634u;
            // 0x24c638: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C63Cu; }
        if (ctx->pc != 0x24C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C63Cu; }
        if (ctx->pc != 0x24C63Cu) { return; }
    }
    ctx->pc = 0x24C63Cu;
label_24c63c:
    // 0x24c63c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24c640:
    // 0x24c640: 0x86850116  lh          $a1, 0x116($s4)
    ctx->pc = 0x24c640u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 278)));
label_24c644:
    // 0x24c644: 0x8c27ca80  lw          $a3, -0x3580($at)
    ctx->pc = 0x24c644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_24c648:
    // 0x24c648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c64c:
    // 0x24c64c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x24c64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c650:
    // 0x24c650: 0xc0ae838  jal         func_2BA0E0
label_24c654:
    if (ctx->pc == 0x24C654u) {
        ctx->pc = 0x24C654u;
            // 0x24c654: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24C658u;
        goto label_24c658;
    }
    ctx->pc = 0x24C650u;
    SET_GPR_U32(ctx, 31, 0x24C658u);
    ctx->pc = 0x24C654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C650u;
            // 0x24c654: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA0E0u;
    if (runtime->hasFunction(0x2BA0E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BA0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C658u; }
        if (ctx->pc != 0x24C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemChrLoad__FP9mgCMemoryiiP17MENU_BGREAD_INFO2i_0x2ba0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C658u; }
        if (ctx->pc != 0x24C658u) { return; }
    }
    ctx->pc = 0x24C658u;
label_24c658:
    // 0x24c658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c65c:
    // 0x24c65c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_24c660:
    if (ctx->pc == 0x24C660u) {
        ctx->pc = 0x24C660u;
            // 0x24c660: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24C664u;
        goto label_24c664;
    }
    ctx->pc = 0x24C65Cu;
    {
        const bool branch_taken_0x24c65c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x24C660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C65Cu;
            // 0x24c660: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c65c) {
            ctx->pc = 0x24C68Cu;
            goto label_24c68c;
        }
    }
    ctx->pc = 0x24C664u;
label_24c664:
    // 0x24c664: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x24c664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24c668:
    // 0x24c668: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x24c668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_24c66c:
    // 0x24c66c: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_24c670:
    // 0x24c670: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_24c674:
    // 0x24c674: 0xc0abf08  jal         func_2AFC20
label_24c678:
    if (ctx->pc == 0x24C678u) {
        ctx->pc = 0x24C678u;
            // 0x24c678: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x24C67Cu;
        goto label_24c67c;
    }
    ctx->pc = 0x24C674u;
    SET_GPR_U32(ctx, 31, 0x24C67Cu);
    ctx->pc = 0x24C678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C674u;
            // 0x24c678: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC20u;
    if (runtime->hasFunction(0x2AFC20u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C67Cu; }
        if (ctx->pc != 0x24C67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2_0x2afc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C67Cu; }
        if (ctx->pc != 0x24C67Cu) { return; }
    }
    ctx->pc = 0x24C67Cu;
label_24c67c:
    // 0x24c67c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24c67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24c680:
    // 0x24c680: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x24c680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_24c684:
    // 0x24c684: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_24c688:
    if (ctx->pc == 0x24C688u) {
        ctx->pc = 0x24C688u;
            // 0x24c688: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x24C68Cu;
        goto label_24c68c;
    }
    ctx->pc = 0x24C684u;
    {
        const bool branch_taken_0x24c684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C684u;
            // 0x24c688: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c684) {
            ctx->pc = 0x24C668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C68Cu;
label_24c68c:
    // 0x24c68c: 0x0  nop
    ctx->pc = 0x24c68cu;
    // NOP
label_24c690:
    // 0x24c690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c694:
    // 0x24c694: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24c694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c698:
    // 0x24c698: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x24c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_24c69c:
    // 0x24c69c: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x24c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
label_24c6a0:
    // 0x24c6a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_24c6a4:
    // 0x24c6a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c6a8:
    // 0x24c6a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24c6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24c6ac:
    // 0x24c6ac: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x24c6acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_24c6b0:
    // 0x24c6b0: 0x320f809  jalr        $t9
label_24c6b4:
    if (ctx->pc == 0x24C6B4u) {
        ctx->pc = 0x24C6B4u;
            // 0x24c6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C6B8u;
        goto label_24c6b8;
    }
    ctx->pc = 0x24C6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24C6B8u);
        ctx->pc = 0x24C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C6B0u;
            // 0x24c6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C6B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C6B8u; }
            if (ctx->pc != 0x24C6B8u) { return; }
        }
        }
    }
    ctx->pc = 0x24C6B8u;
label_24c6b8:
    // 0x24c6b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24c6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24c6bc:
    // 0x24c6bc: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x24c6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_24c6c0:
    // 0x24c6c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_24c6c4:
    if (ctx->pc == 0x24C6C4u) {
        ctx->pc = 0x24C6C4u;
            // 0x24c6c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x24C6C8u;
        goto label_24c6c8;
    }
    ctx->pc = 0x24C6C0u;
    {
        const bool branch_taken_0x24c6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C6C0u;
            // 0x24c6c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6c0) {
            ctx->pc = 0x24C698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c698;
        }
    }
    ctx->pc = 0x24C6C8u;
label_24c6c8:
    // 0x24c6c8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_24c6cc:
    if (ctx->pc == 0x24C6CCu) {
        ctx->pc = 0x24C6D0u;
        goto label_24c6d0;
    }
    ctx->pc = 0x24C6C8u;
    {
        const bool branch_taken_0x24c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6c8) {
            ctx->pc = 0x24C784u;
            goto label_24c784;
        }
    }
    ctx->pc = 0x24C6D0u;
label_24c6d0:
    // 0x24c6d0: 0x83839b72  lb          $v1, -0x648E($gp)
    ctx->pc = 0x24c6d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_24c6d4:
    // 0x24c6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c6d8:
    // 0x24c6d8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_24c6dc:
    if (ctx->pc == 0x24C6DCu) {
        ctx->pc = 0x24C6DCu;
            // 0x24c6dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C6E0u;
        goto label_24c6e0;
    }
    ctx->pc = 0x24C6D8u;
    {
        const bool branch_taken_0x24c6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C6D8u;
            // 0x24c6dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6d8) {
            ctx->pc = 0x24C720u;
            goto label_24c720;
        }
    }
    ctx->pc = 0x24C6E0u;
label_24c6e0:
    // 0x24c6e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24c6e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c6e4:
    // 0x24c6e4: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x24c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_24c6e8:
    // 0x24c6e8: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x24c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
label_24c6ec:
    // 0x24c6ec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_24c6f0:
    // 0x24c6f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c6f4:
    // 0x24c6f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_24c6f8:
    if (ctx->pc == 0x24C6F8u) {
        ctx->pc = 0x24C6FCu;
        goto label_24c6fc;
    }
    ctx->pc = 0x24C6F4u;
    {
        const bool branch_taken_0x24c6f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6f4) {
            ctx->pc = 0x24C70Cu;
            goto label_24c70c;
        }
    }
    ctx->pc = 0x24C6FCu;
label_24c6fc:
    // 0x24c6fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24c6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24c700:
    // 0x24c700: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x24c700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_24c704:
    // 0x24c704: 0x320f809  jalr        $t9
label_24c708:
    if (ctx->pc == 0x24C708u) {
        ctx->pc = 0x24C708u;
            // 0x24c708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C70Cu;
        goto label_24c70c;
    }
    ctx->pc = 0x24C704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24C70Cu);
        ctx->pc = 0x24C708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C704u;
            // 0x24c708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C70Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C70Cu; }
            if (ctx->pc != 0x24C70Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24C70Cu;
label_24c70c:
    // 0x24c70c: 0x0  nop
    ctx->pc = 0x24c70cu;
    // NOP
label_24c710:
    // 0x24c710: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24c710u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24c714:
    // 0x24c714: 0x2aa20007  slti        $v0, $s5, 0x7
    ctx->pc = 0x24c714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
label_24c718:
    // 0x24c718: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_24c71c:
    if (ctx->pc == 0x24C71Cu) {
        ctx->pc = 0x24C71Cu;
            // 0x24c71c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x24C720u;
        goto label_24c720;
    }
    ctx->pc = 0x24C718u;
    {
        const bool branch_taken_0x24c718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C718u;
            // 0x24c71c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c718) {
            ctx->pc = 0x24C6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c6e4;
        }
    }
    ctx->pc = 0x24C720u;
label_24c720:
    // 0x24c720: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x24c720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_24c724:
    // 0x24c724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c728:
    // 0x24c728: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c72c:
    // 0x24c72c: 0xc0ae8c0  jal         func_2BA300
label_24c730:
    if (ctx->pc == 0x24C730u) {
        ctx->pc = 0x24C730u;
            // 0x24c730: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->pc = 0x24C734u;
        goto label_24c734;
    }
    ctx->pc = 0x24C72Cu;
    SET_GPR_U32(ctx, 31, 0x24C734u);
    ctx->pc = 0x24C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C72Cu;
            // 0x24c730: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (runtime->hasFunction(0x2BA300u)) {
        auto targetFn = runtime->lookupFunction(0x2BA300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C734u; }
        if (ctx->pc != 0x24C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i_0x2ba300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C734u; }
        if (ctx->pc != 0x24C734u) { return; }
    }
    ctx->pc = 0x24C734u;
label_24c734:
    // 0x24c734: 0x10000013  b           . + 4 + (0x13 << 2)
label_24c738:
    if (ctx->pc == 0x24C738u) {
        ctx->pc = 0x24C73Cu;
        goto label_24c73c;
    }
    ctx->pc = 0x24C734u;
    {
        const bool branch_taken_0x24c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c734) {
            ctx->pc = 0x24C784u;
            goto label_24c784;
        }
    }
    ctx->pc = 0x24C73Cu;
label_24c73c:
    // 0x24c73c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24c73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24c740:
    // 0x24c740: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x24c740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_24c744:
    // 0x24c744: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x24c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
label_24c748:
    // 0x24c748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c74c:
    // 0x24c74c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24c74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c750:
    // 0x24c750: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24c750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24c754:
    // 0x24c754: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24c754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24c758:
    // 0x24c758: 0x8c22ca88  lw          $v0, -0x3578($at)
    ctx->pc = 0x24c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953608)));
label_24c75c:
    // 0x24c75c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24c75cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24c760:
    // 0x24c760: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24c760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24c764:
    // 0x24c764: 0x8c22ca8c  lw          $v0, -0x3574($at)
    ctx->pc = 0x24c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953612)));
label_24c768:
    // 0x24c768: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24c768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24c76c:
    // 0x24c76c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24c76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24c770:
    // 0x24c770: 0x8c22ca90  lw          $v0, -0x3570($at)
    ctx->pc = 0x24c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953616)));
label_24c774:
    // 0x24c774: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24c774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24c778:
    // 0x24c778: 0x8686011a  lh          $a2, 0x11A($s4)
    ctx->pc = 0x24c778u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 282)));
label_24c77c:
    // 0x24c77c: 0xc0aebc4  jal         func_2BAF10
label_24c780:
    if (ctx->pc == 0x24C780u) {
        ctx->pc = 0x24C780u;
            // 0x24c780: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->pc = 0x24C784u;
        goto label_24c784;
    }
    ctx->pc = 0x24C77Cu;
    SET_GPR_U32(ctx, 31, 0x24C784u);
    ctx->pc = 0x24C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C77Cu;
            // 0x24c780: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF10u;
    if (runtime->hasFunction(0x2BAF10u)) {
        auto targetFn = runtime->lookupFunction(0x2BAF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C784u; }
        if (ctx->pc != 0x24C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii_0x2baf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C784u; }
        if (ctx->pc != 0x24C784u) { return; }
    }
    ctx->pc = 0x24C784u;
label_24c784:
    // 0x24c784: 0x8e91002c  lw          $s1, 0x2C($s4)
    ctx->pc = 0x24c784u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_24c788:
    // 0x24c788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c78c:
    // 0x24c78c: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x24c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_24c790:
    // 0x24c790: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24c790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24c794:
    // 0x24c794: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x24c794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_24c798:
    // 0x24c798: 0x8e8401a8  lw          $a0, 0x1A8($s4)
    ctx->pc = 0x24c798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_24c79c:
    // 0x24c79c: 0xc0896c8  jal         func_225B20
label_24c7a0:
    if (ctx->pc == 0x24C7A0u) {
        ctx->pc = 0x24C7A0u;
            // 0x24c7a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C7A4u;
        goto label_24c7a4;
    }
    ctx->pc = 0x24C79Cu;
    SET_GPR_U32(ctx, 31, 0x24C7A4u);
    ctx->pc = 0x24C7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C79Cu;
            // 0x24c7a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C7A4u; }
        if (ctx->pc != 0x24C7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C7A4u; }
        if (ctx->pc != 0x24C7A4u) { return; }
    }
    ctx->pc = 0x24C7A4u;
label_24c7a4:
    // 0x24c7a4: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_24c7a8:
    // 0x24c7a8: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x24c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_24c7ac:
    // 0x24c7ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24c7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c7b0:
    // 0x24c7b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c7b4:
    // 0x24c7b4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x24c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_24c7b8:
    // 0x24c7b8: 0x8e8201ac  lw          $v0, 0x1AC($s4)
    ctx->pc = 0x24c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
label_24c7bc:
    // 0x24c7bc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x24c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_24c7c0:
    // 0x24c7c0: 0x8e8401ac  lw          $a0, 0x1AC($s4)
    ctx->pc = 0x24c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
label_24c7c4:
    // 0x24c7c4: 0xc0896c8  jal         func_225B20
label_24c7c8:
    if (ctx->pc == 0x24C7C8u) {
        ctx->pc = 0x24C7C8u;
            // 0x24c7c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24C7CCu;
        goto label_24c7cc;
    }
    ctx->pc = 0x24C7C4u;
    SET_GPR_U32(ctx, 31, 0x24C7CCu);
    ctx->pc = 0x24C7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C7C4u;
            // 0x24c7c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C7CCu; }
        if (ctx->pc != 0x24C7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C7CCu; }
        if (ctx->pc != 0x24C7CCu) { return; }
    }
    ctx->pc = 0x24C7CCu;
label_24c7cc:
    // 0x24c7cc: 0x8e8301ac  lw          $v1, 0x1AC($s4)
    ctx->pc = 0x24c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
label_24c7d0:
    // 0x24c7d0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x24c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_24c7d4:
    // 0x24c7d4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x24c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24c7d8:
    // 0x24c7d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c7dc:
    // 0x24c7dc: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x24c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_24c7e0:
    // 0x24c7e0: 0x8e9201b0  lw          $s2, 0x1B0($s4)
    ctx->pc = 0x24c7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_24c7e4:
    // 0x24c7e4: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x24c7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
label_24c7e8:
    // 0x24c7e8: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x24c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
label_24c7ec:
    // 0x24c7ec: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x24c7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
label_24c7f0:
    // 0x24c7f0: 0xa2420058  sb          $v0, 0x58($s2)
    ctx->pc = 0x24c7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 2));
label_24c7f4:
    // 0x24c7f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c7f8:
    // 0x24c7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24c7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c7fc:
    // 0x24c7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c800:
    // 0x24c800: 0xc0896cc  jal         func_225B30
label_24c804:
    if (ctx->pc == 0x24C804u) {
        ctx->pc = 0x24C804u;
            // 0x24c804: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x24C808u;
        goto label_24c808;
    }
    ctx->pc = 0x24C800u;
    SET_GPR_U32(ctx, 31, 0x24C808u);
    ctx->pc = 0x24C804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C800u;
            // 0x24c804: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C808u; }
        if (ctx->pc != 0x24C808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C808u; }
        if (ctx->pc != 0x24C808u) { return; }
    }
    ctx->pc = 0x24C808u;
label_24c808:
    // 0x24c808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24c808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24c80c:
    // 0x24c80c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x24c80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_24c810:
    // 0x24c810: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_24c814:
    if (ctx->pc == 0x24C814u) {
        ctx->pc = 0x24C814u;
            // 0x24c814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C818u;
        goto label_24c818;
    }
    ctx->pc = 0x24C810u;
    {
        const bool branch_taken_0x24c810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C810u;
            // 0x24c814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c810) {
            ctx->pc = 0x24C7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c7f8;
        }
    }
    ctx->pc = 0x24C818u;
label_24c818:
    // 0x24c818: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24c818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_24c81c:
    // 0x24c81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c820:
    // 0x24c820: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_24c824:
    if (ctx->pc == 0x24C824u) {
        ctx->pc = 0x24C824u;
            // 0x24c824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24C828u;
        goto label_24c828;
    }
    ctx->pc = 0x24C820u;
    {
        const bool branch_taken_0x24c820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C820u;
            // 0x24c824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c820) {
            ctx->pc = 0x24C83Cu;
            goto label_24c83c;
        }
    }
    ctx->pc = 0x24C828u;
label_24c828:
    // 0x24c828: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24c828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24c82c:
    // 0x24c82c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24c830:
    // 0x24c830: 0xc08e7cc  jal         func_239F30
label_24c834:
    if (ctx->pc == 0x24C834u) {
        ctx->pc = 0x24C834u;
            // 0x24c834: 0x24a5ba50  addiu       $a1, $a1, -0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949456));
        ctx->pc = 0x24C838u;
        goto label_24c838;
    }
    ctx->pc = 0x24C830u;
    SET_GPR_U32(ctx, 31, 0x24C838u);
    ctx->pc = 0x24C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C830u;
            // 0x24c834: 0x24a5ba50  addiu       $a1, $a1, -0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C838u; }
        if (ctx->pc != 0x24C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C838u; }
        if (ctx->pc != 0x24C838u) { return; }
    }
    ctx->pc = 0x24C838u;
label_24c838:
    // 0x24c838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c83c:
    // 0x24c83c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_24c840:
    if (ctx->pc == 0x24C840u) {
        ctx->pc = 0x24C840u;
            // 0x24c840: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x24C844u;
        goto label_24c844;
    }
    ctx->pc = 0x24C83Cu;
    {
        const bool branch_taken_0x24c83c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C83Cu;
            // 0x24c840: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c83c) {
            ctx->pc = 0x24C84Cu;
            goto label_24c84c;
        }
    }
    ctx->pc = 0x24C844u;
label_24c844:
    // 0x24c844: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_24c848:
    if (ctx->pc == 0x24C848u) {
        ctx->pc = 0x24C848u;
            // 0x24c848: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C84Cu;
        goto label_24c84c;
    }
    ctx->pc = 0x24C844u;
    {
        const bool branch_taken_0x24c844 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C844u;
            // 0x24c848: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c844) {
            ctx->pc = 0x24C85Cu;
            goto label_24c85c;
        }
    }
    ctx->pc = 0x24C84Cu;
label_24c84c:
    // 0x24c84c: 0x8e8201ac  lw          $v0, 0x1AC($s4)
    ctx->pc = 0x24c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
label_24c850:
    // 0x24c850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c854:
    // 0x24c854: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24c854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_24c858:
    // 0x24c858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c85c:
    // 0x24c85c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24c85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24c860:
    // 0x24c860: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24c860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24c864:
    // 0x24c864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24c864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24c868:
    // 0x24c868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24c868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24c86c:
    // 0x24c86c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24c86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24c870:
    // 0x24c870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24c870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c874:
    // 0x24c874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c878:
    // 0x24c878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24c87c:
    // 0x24c87c: 0x3e00008  jr          $ra
label_24c880:
    if (ctx->pc == 0x24C880u) {
        ctx->pc = 0x24C880u;
            // 0x24c880: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x24C884u;
        goto label_fallthrough_0x24c87c;
    }
    ctx->pc = 0x24C87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C87Cu;
            // 0x24c880: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24c87c:
    ctx->pc = 0x24C884u;
}
