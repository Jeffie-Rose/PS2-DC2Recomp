#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LRCheck__13CMenuItemInfoFi
// Address: 0x24d520 - 0x24d890
void LRCheck__13CMenuItemInfoFi_0x24d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LRCheck__13CMenuItemInfoFi_0x24d520");
#endif

    switch (ctx->pc) {
        case 0x24d520u: goto label_24d520;
        case 0x24d524u: goto label_24d524;
        case 0x24d528u: goto label_24d528;
        case 0x24d52cu: goto label_24d52c;
        case 0x24d530u: goto label_24d530;
        case 0x24d534u: goto label_24d534;
        case 0x24d538u: goto label_24d538;
        case 0x24d53cu: goto label_24d53c;
        case 0x24d540u: goto label_24d540;
        case 0x24d544u: goto label_24d544;
        case 0x24d548u: goto label_24d548;
        case 0x24d54cu: goto label_24d54c;
        case 0x24d550u: goto label_24d550;
        case 0x24d554u: goto label_24d554;
        case 0x24d558u: goto label_24d558;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d560u: goto label_24d560;
        case 0x24d564u: goto label_24d564;
        case 0x24d568u: goto label_24d568;
        case 0x24d56cu: goto label_24d56c;
        case 0x24d570u: goto label_24d570;
        case 0x24d574u: goto label_24d574;
        case 0x24d578u: goto label_24d578;
        case 0x24d57cu: goto label_24d57c;
        case 0x24d580u: goto label_24d580;
        case 0x24d584u: goto label_24d584;
        case 0x24d588u: goto label_24d588;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d590u: goto label_24d590;
        case 0x24d594u: goto label_24d594;
        case 0x24d598u: goto label_24d598;
        case 0x24d59cu: goto label_24d59c;
        case 0x24d5a0u: goto label_24d5a0;
        case 0x24d5a4u: goto label_24d5a4;
        case 0x24d5a8u: goto label_24d5a8;
        case 0x24d5acu: goto label_24d5ac;
        case 0x24d5b0u: goto label_24d5b0;
        case 0x24d5b4u: goto label_24d5b4;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5bcu: goto label_24d5bc;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5c4u: goto label_24d5c4;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5ccu: goto label_24d5cc;
        case 0x24d5d0u: goto label_24d5d0;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5dcu: goto label_24d5dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d5e4u: goto label_24d5e4;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5ecu: goto label_24d5ec;
        case 0x24d5f0u: goto label_24d5f0;
        case 0x24d5f4u: goto label_24d5f4;
        case 0x24d5f8u: goto label_24d5f8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d600u: goto label_24d600;
        case 0x24d604u: goto label_24d604;
        case 0x24d608u: goto label_24d608;
        case 0x24d60cu: goto label_24d60c;
        case 0x24d610u: goto label_24d610;
        case 0x24d614u: goto label_24d614;
        case 0x24d618u: goto label_24d618;
        case 0x24d61cu: goto label_24d61c;
        case 0x24d620u: goto label_24d620;
        case 0x24d624u: goto label_24d624;
        case 0x24d628u: goto label_24d628;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d630u: goto label_24d630;
        case 0x24d634u: goto label_24d634;
        case 0x24d638u: goto label_24d638;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d640u: goto label_24d640;
        case 0x24d644u: goto label_24d644;
        case 0x24d648u: goto label_24d648;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d650u: goto label_24d650;
        case 0x24d654u: goto label_24d654;
        case 0x24d658u: goto label_24d658;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d660u: goto label_24d660;
        case 0x24d664u: goto label_24d664;
        case 0x24d668u: goto label_24d668;
        case 0x24d66cu: goto label_24d66c;
        case 0x24d670u: goto label_24d670;
        case 0x24d674u: goto label_24d674;
        case 0x24d678u: goto label_24d678;
        case 0x24d67cu: goto label_24d67c;
        case 0x24d680u: goto label_24d680;
        case 0x24d684u: goto label_24d684;
        case 0x24d688u: goto label_24d688;
        case 0x24d68cu: goto label_24d68c;
        case 0x24d690u: goto label_24d690;
        case 0x24d694u: goto label_24d694;
        case 0x24d698u: goto label_24d698;
        case 0x24d69cu: goto label_24d69c;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6a4u: goto label_24d6a4;
        case 0x24d6a8u: goto label_24d6a8;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d6b4u: goto label_24d6b4;
        case 0x24d6b8u: goto label_24d6b8;
        case 0x24d6bcu: goto label_24d6bc;
        case 0x24d6c0u: goto label_24d6c0;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6d0u: goto label_24d6d0;
        case 0x24d6d4u: goto label_24d6d4;
        case 0x24d6d8u: goto label_24d6d8;
        case 0x24d6dcu: goto label_24d6dc;
        case 0x24d6e0u: goto label_24d6e0;
        case 0x24d6e4u: goto label_24d6e4;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d6ecu: goto label_24d6ec;
        case 0x24d6f0u: goto label_24d6f0;
        case 0x24d6f4u: goto label_24d6f4;
        case 0x24d6f8u: goto label_24d6f8;
        case 0x24d6fcu: goto label_24d6fc;
        case 0x24d700u: goto label_24d700;
        case 0x24d704u: goto label_24d704;
        case 0x24d708u: goto label_24d708;
        case 0x24d70cu: goto label_24d70c;
        case 0x24d710u: goto label_24d710;
        case 0x24d714u: goto label_24d714;
        case 0x24d718u: goto label_24d718;
        case 0x24d71cu: goto label_24d71c;
        case 0x24d720u: goto label_24d720;
        case 0x24d724u: goto label_24d724;
        case 0x24d728u: goto label_24d728;
        case 0x24d72cu: goto label_24d72c;
        case 0x24d730u: goto label_24d730;
        case 0x24d734u: goto label_24d734;
        case 0x24d738u: goto label_24d738;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d740u: goto label_24d740;
        case 0x24d744u: goto label_24d744;
        case 0x24d748u: goto label_24d748;
        case 0x24d74cu: goto label_24d74c;
        case 0x24d750u: goto label_24d750;
        case 0x24d754u: goto label_24d754;
        case 0x24d758u: goto label_24d758;
        case 0x24d75cu: goto label_24d75c;
        case 0x24d760u: goto label_24d760;
        case 0x24d764u: goto label_24d764;
        case 0x24d768u: goto label_24d768;
        case 0x24d76cu: goto label_24d76c;
        case 0x24d770u: goto label_24d770;
        case 0x24d774u: goto label_24d774;
        case 0x24d778u: goto label_24d778;
        case 0x24d77cu: goto label_24d77c;
        case 0x24d780u: goto label_24d780;
        case 0x24d784u: goto label_24d784;
        case 0x24d788u: goto label_24d788;
        case 0x24d78cu: goto label_24d78c;
        case 0x24d790u: goto label_24d790;
        case 0x24d794u: goto label_24d794;
        case 0x24d798u: goto label_24d798;
        case 0x24d79cu: goto label_24d79c;
        case 0x24d7a0u: goto label_24d7a0;
        case 0x24d7a4u: goto label_24d7a4;
        case 0x24d7a8u: goto label_24d7a8;
        case 0x24d7acu: goto label_24d7ac;
        case 0x24d7b0u: goto label_24d7b0;
        case 0x24d7b4u: goto label_24d7b4;
        case 0x24d7b8u: goto label_24d7b8;
        case 0x24d7bcu: goto label_24d7bc;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d7c4u: goto label_24d7c4;
        case 0x24d7c8u: goto label_24d7c8;
        case 0x24d7ccu: goto label_24d7cc;
        case 0x24d7d0u: goto label_24d7d0;
        case 0x24d7d4u: goto label_24d7d4;
        case 0x24d7d8u: goto label_24d7d8;
        case 0x24d7dcu: goto label_24d7dc;
        case 0x24d7e0u: goto label_24d7e0;
        case 0x24d7e4u: goto label_24d7e4;
        case 0x24d7e8u: goto label_24d7e8;
        case 0x24d7ecu: goto label_24d7ec;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d7f8u: goto label_24d7f8;
        case 0x24d7fcu: goto label_24d7fc;
        case 0x24d800u: goto label_24d800;
        case 0x24d804u: goto label_24d804;
        case 0x24d808u: goto label_24d808;
        case 0x24d80cu: goto label_24d80c;
        case 0x24d810u: goto label_24d810;
        case 0x24d814u: goto label_24d814;
        case 0x24d818u: goto label_24d818;
        case 0x24d81cu: goto label_24d81c;
        case 0x24d820u: goto label_24d820;
        case 0x24d824u: goto label_24d824;
        case 0x24d828u: goto label_24d828;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d830u: goto label_24d830;
        case 0x24d834u: goto label_24d834;
        case 0x24d838u: goto label_24d838;
        case 0x24d83cu: goto label_24d83c;
        case 0x24d840u: goto label_24d840;
        case 0x24d844u: goto label_24d844;
        case 0x24d848u: goto label_24d848;
        case 0x24d84cu: goto label_24d84c;
        case 0x24d850u: goto label_24d850;
        case 0x24d854u: goto label_24d854;
        case 0x24d858u: goto label_24d858;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d860u: goto label_24d860;
        case 0x24d864u: goto label_24d864;
        case 0x24d868u: goto label_24d868;
        case 0x24d86cu: goto label_24d86c;
        case 0x24d870u: goto label_24d870;
        case 0x24d874u: goto label_24d874;
        case 0x24d878u: goto label_24d878;
        case 0x24d87cu: goto label_24d87c;
        case 0x24d880u: goto label_24d880;
        case 0x24d884u: goto label_24d884;
        case 0x24d888u: goto label_24d888;
        case 0x24d88cu: goto label_24d88c;
        default: break;
    }

    ctx->pc = 0x24d520u;

label_24d520:
    // 0x24d520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_24d524:
    // 0x24d524: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24d528:
    // 0x24d528: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24d52c:
    // 0x24d52c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24d530:
    // 0x24d530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24d534:
    // 0x24d534: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24d538:
    // 0x24d538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24d53c:
    // 0x24d53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24d540:
    // 0x24d540: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x24d540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_24d544:
    // 0x24d544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24d548:
    if (ctx->pc == 0x24D548u) {
        ctx->pc = 0x24D548u;
            // 0x24d548: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D54Cu;
        goto label_24d54c;
    }
    ctx->pc = 0x24D544u;
    {
        const bool branch_taken_0x24d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D544u;
            // 0x24d548: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d544) {
            ctx->pc = 0x24D554u;
            goto label_24d554;
        }
    }
    ctx->pc = 0x24D54Cu;
label_24d54c:
    // 0x24d54c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_24d550:
    if (ctx->pc == 0x24D550u) {
        ctx->pc = 0x24D550u;
            // 0x24d550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D554u;
        goto label_24d554;
    }
    ctx->pc = 0x24D54Cu;
    {
        const bool branch_taken_0x24d54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D54Cu;
            // 0x24d550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d54c) {
            ctx->pc = 0x24D86Cu;
            goto label_24d86c;
        }
    }
    ctx->pc = 0x24D554u;
label_24d554:
    // 0x24d554: 0x92820160  lbu         $v0, 0x160($s4)
    ctx->pc = 0x24d554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 352)));
label_24d558:
    // 0x24d558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24d55c:
    if (ctx->pc == 0x24D55Cu) {
        ctx->pc = 0x24D55Cu;
            // 0x24d55c: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x24D560u;
        goto label_24d560;
    }
    ctx->pc = 0x24D558u;
    {
        const bool branch_taken_0x24d558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D558u;
            // 0x24d55c: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d558) {
            ctx->pc = 0x24D568u;
            goto label_24d568;
        }
    }
    ctx->pc = 0x24D560u;
label_24d560:
    // 0x24d560: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_24d564:
    if (ctx->pc == 0x24D564u) {
        ctx->pc = 0x24D564u;
            // 0x24d564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D568u;
        goto label_24d568;
    }
    ctx->pc = 0x24D560u;
    {
        const bool branch_taken_0x24d560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D560u;
            // 0x24d564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d560) {
            ctx->pc = 0x24D86Cu;
            goto label_24d86c;
        }
    }
    ctx->pc = 0x24D568u;
label_24d568:
    // 0x24d568: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_24d56c:
    if (ctx->pc == 0x24D56Cu) {
        ctx->pc = 0x24D56Cu;
            // 0x24d56c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D570u;
        goto label_24d570;
    }
    ctx->pc = 0x24D568u;
    {
        const bool branch_taken_0x24d568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D568u;
            // 0x24d56c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d568) {
            ctx->pc = 0x24D57Cu;
            goto label_24d57c;
        }
    }
    ctx->pc = 0x24D570u;
label_24d570:
    // 0x24d570: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x24d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_24d574:
    // 0x24d574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24d578:
    if (ctx->pc == 0x24D578u) {
        ctx->pc = 0x24D578u;
            // 0x24d578: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x24D57Cu;
        goto label_24d57c;
    }
    ctx->pc = 0x24D574u;
    {
        const bool branch_taken_0x24d574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D574u;
            // 0x24d578: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d574) {
            ctx->pc = 0x24D584u;
            goto label_24d584;
        }
    }
    ctx->pc = 0x24D57Cu;
label_24d57c:
    // 0x24d57c: 0x10000006  b           . + 4 + (0x6 << 2)
label_24d580:
    if (ctx->pc == 0x24D580u) {
        ctx->pc = 0x24D580u;
            // 0x24d580: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x24D584u;
        goto label_24d584;
    }
    ctx->pc = 0x24D57Cu;
    {
        const bool branch_taken_0x24d57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D57Cu;
            // 0x24d580: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d57c) {
            ctx->pc = 0x24D598u;
            goto label_24d598;
        }
    }
    ctx->pc = 0x24D584u;
label_24d584:
    // 0x24d584: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24d588:
    if (ctx->pc == 0x24D588u) {
        ctx->pc = 0x24D588u;
            // 0x24d588: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x24D58Cu;
        goto label_24d58c;
    }
    ctx->pc = 0x24D584u;
    {
        const bool branch_taken_0x24d584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D584u;
            // 0x24d588: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d584) {
            ctx->pc = 0x24D594u;
            goto label_24d594;
        }
    }
    ctx->pc = 0x24D58Cu;
label_24d58c:
    // 0x24d58c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24d590:
    if (ctx->pc == 0x24D590u) {
        ctx->pc = 0x24D594u;
        goto label_24d594;
    }
    ctx->pc = 0x24D58Cu;
    {
        const bool branch_taken_0x24d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d58c) {
            ctx->pc = 0x24D598u;
            goto label_24d598;
        }
    }
    ctx->pc = 0x24D594u;
label_24d594:
    // 0x24d594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24d598:
    // 0x24d598: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_24d59c:
    if (ctx->pc == 0x24D59Cu) {
        ctx->pc = 0x24D59Cu;
            // 0x24d59c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x24D5A0u;
        goto label_24d5a0;
    }
    ctx->pc = 0x24D598u;
    {
        const bool branch_taken_0x24d598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D598u;
            // 0x24d59c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d598) {
            ctx->pc = 0x24D5A8u;
            goto label_24d5a8;
        }
    }
    ctx->pc = 0x24D5A0u;
label_24d5a0:
    // 0x24d5a0: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_24d5a4:
    if (ctx->pc == 0x24D5A4u) {
        ctx->pc = 0x24D5A4u;
            // 0x24d5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A8u;
        goto label_24d5a8;
    }
    ctx->pc = 0x24D5A0u;
    {
        const bool branch_taken_0x24d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D5A0u;
            // 0x24d5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5a0) {
            ctx->pc = 0x24D86Cu;
            goto label_24d86c;
        }
    }
    ctx->pc = 0x24D5A8u;
label_24d5a8:
    // 0x24d5a8: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
label_24d5ac:
    if (ctx->pc == 0x24D5ACu) {
        ctx->pc = 0x24D5B0u;
        goto label_24d5b0;
    }
    ctx->pc = 0x24D5A8u;
    {
        const bool branch_taken_0x24d5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d5a8) {
            ctx->pc = 0x24D5DCu;
            goto label_24d5dc;
        }
    }
    ctx->pc = 0x24D5B0u;
label_24d5b0:
    // 0x24d5b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x24d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24d5b4:
    // 0x24d5b4: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_24d5b8:
    if (ctx->pc == 0x24D5B8u) {
        ctx->pc = 0x24D5BCu;
        goto label_24d5bc;
    }
    ctx->pc = 0x24D5B4u;
    {
        const bool branch_taken_0x24d5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d5b4) {
            ctx->pc = 0x24D5DCu;
            goto label_24d5dc;
        }
    }
    ctx->pc = 0x24D5BCu;
label_24d5bc:
    // 0x24d5bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x24d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24d5c0:
    // 0x24d5c0: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_24d5c4:
    if (ctx->pc == 0x24D5C4u) {
        ctx->pc = 0x24D5C8u;
        goto label_24d5c8;
    }
    ctx->pc = 0x24D5C0u;
    {
        const bool branch_taken_0x24d5c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d5c0) {
            ctx->pc = 0x24D5DCu;
            goto label_24d5dc;
        }
    }
    ctx->pc = 0x24D5C8u;
label_24d5c8:
    // 0x24d5c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24d5cc:
    // 0x24d5cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_24d5d0:
    if (ctx->pc == 0x24D5D0u) {
        ctx->pc = 0x24D5D4u;
        goto label_24d5d4;
    }
    ctx->pc = 0x24D5CCu;
    {
        const bool branch_taken_0x24d5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d5cc) {
            ctx->pc = 0x24D5DCu;
            goto label_24d5dc;
        }
    }
    ctx->pc = 0x24D5D4u;
label_24d5d4:
    // 0x24d5d4: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_24d5d8:
    if (ctx->pc == 0x24D5D8u) {
        ctx->pc = 0x24D5D8u;
            // 0x24d5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D5DCu;
        goto label_24d5dc;
    }
    ctx->pc = 0x24D5D4u;
    {
        const bool branch_taken_0x24d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D5D4u;
            // 0x24d5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5d4) {
            ctx->pc = 0x24D86Cu;
            goto label_24d86c;
        }
    }
    ctx->pc = 0x24D5DCu;
label_24d5dc:
    // 0x24d5dc: 0x3c1501ed  lui         $s5, 0x1ED
    ctx->pc = 0x24d5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)493 << 16));
label_24d5e0:
    // 0x24d5e0: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x24d5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
label_24d5e4:
    // 0x24d5e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24d5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d5e8:
    // 0x24d5e8: 0x26b5db90  addiu       $s5, $s5, -0x2470
    ctx->pc = 0x24d5e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957968));
label_24d5ec:
    // 0x24d5ec: 0x2631dbf0  addiu       $s1, $s1, -0x2410
    ctx->pc = 0x24d5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958064));
label_24d5f0:
    // 0x24d5f0: 0xc090c40  jal         func_243100
label_24d5f4:
    if (ctx->pc == 0x24D5F4u) {
        ctx->pc = 0x24D5F4u;
            // 0x24d5f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D5F8u;
        goto label_24d5f8;
    }
    ctx->pc = 0x24D5F0u;
    SET_GPR_U32(ctx, 31, 0x24D5F8u);
    ctx->pc = 0x24D5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D5F0u;
            // 0x24d5f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D5F8u; }
        if (ctx->pc != 0x24D5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D5F8u; }
        if (ctx->pc != 0x24D5F8u) { return; }
    }
    ctx->pc = 0x24D5F8u;
label_24d5f8:
    // 0x24d5f8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x24d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_24d5fc:
    // 0x24d5fc: 0xc066e94  jal         func_19BA50
label_24d600:
    if (ctx->pc == 0x24D600u) {
        ctx->pc = 0x24D600u;
            // 0x24d600: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D604u;
        goto label_24d604;
    }
    ctx->pc = 0x24D5FCu;
    SET_GPR_U32(ctx, 31, 0x24D604u);
    ctx->pc = 0x24D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D5FCu;
            // 0x24d600: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D604u; }
        if (ctx->pc != 0x24D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D604u; }
        if (ctx->pc != 0x24D604u) { return; }
    }
    ctx->pc = 0x24D604u;
label_24d604:
    // 0x24d604: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24d604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24d608:
    // 0x24d608: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_24d60c:
    if (ctx->pc == 0x24D60Cu) {
        ctx->pc = 0x24D60Cu;
            // 0x24d60c: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x24D610u;
        goto label_24d610;
    }
    ctx->pc = 0x24D608u;
    {
        const bool branch_taken_0x24d608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D608u;
            // 0x24d60c: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d608) {
            ctx->pc = 0x24D628u;
            goto label_24d628;
        }
    }
    ctx->pc = 0x24D610u;
label_24d610:
    // 0x24d610: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d614:
    // 0x24d614: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x24d614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_24d618:
    // 0x24d618: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x24d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_24d61c:
    // 0x24d61c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d620:
    // 0x24d620: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x24d620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_24d624:
    // 0x24d624: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x24d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24d628:
    // 0x24d628: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_24d62c:
    if (ctx->pc == 0x24D62Cu) {
        ctx->pc = 0x24D62Cu;
            // 0x24d62c: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x24D630u;
        goto label_24d630;
    }
    ctx->pc = 0x24D628u;
    {
        const bool branch_taken_0x24d628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D628u;
            // 0x24d62c: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d628) {
            ctx->pc = 0x24D658u;
            goto label_24d658;
        }
    }
    ctx->pc = 0x24D630u;
label_24d630:
    // 0x24d630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d634:
    // 0x24d634: 0x12650007  beq         $s3, $a1, . + 4 + (0x7 << 2)
label_24d638:
    if (ctx->pc == 0x24D638u) {
        ctx->pc = 0x24D638u;
            // 0x24d638: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x24D63Cu;
        goto label_24d63c;
    }
    ctx->pc = 0x24D634u;
    {
        const bool branch_taken_0x24d634 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x24D638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D634u;
            // 0x24d638: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d634) {
            ctx->pc = 0x24D654u;
            goto label_24d654;
        }
    }
    ctx->pc = 0x24D63Cu;
label_24d63c:
    // 0x24d63c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d640:
    // 0x24d640: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x24d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_24d644:
    // 0x24d644: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d648:
    // 0x24d648: 0xac6500b0  sw          $a1, 0xB0($v1)
    ctx->pc = 0x24d648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 5));
label_24d64c:
    // 0x24d64c: 0xac640070  sw          $a0, 0x70($v1)
    ctx->pc = 0x24d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
label_24d650:
    // 0x24d650: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x24d650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
label_24d654:
    // 0x24d654: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x24d654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_24d658:
    // 0x24d658: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_24d65c:
    if (ctx->pc == 0x24D65Cu) {
        ctx->pc = 0x24D65Cu;
            // 0x24d65c: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x24D660u;
        goto label_24d660;
    }
    ctx->pc = 0x24D658u;
    {
        const bool branch_taken_0x24d658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D658u;
            // 0x24d65c: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d658) {
            ctx->pc = 0x24D680u;
            goto label_24d680;
        }
    }
    ctx->pc = 0x24D660u;
label_24d660:
    // 0x24d660: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d664:
    // 0x24d664: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x24d664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_24d668:
    // 0x24d668: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d66c:
    // 0x24d66c: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x24d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
label_24d670:
    // 0x24d670: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24d674:
    // 0x24d674: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24d674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24d678:
    // 0x24d678: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x24d678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
label_24d67c:
    // 0x24d67c: 0xaca300b0  sw          $v1, 0xB0($a1)
    ctx->pc = 0x24d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 3));
label_24d680:
    // 0x24d680: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_24d684:
    // 0x24d684: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24d688:
    if (ctx->pc == 0x24D688u) {
        ctx->pc = 0x24D688u;
            // 0x24d688: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->pc = 0x24D68Cu;
        goto label_24d68c;
    }
    ctx->pc = 0x24D684u;
    {
        const bool branch_taken_0x24d684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D684u;
            // 0x24d688: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d684) {
            ctx->pc = 0x24D6B8u;
            goto label_24d6b8;
        }
    }
    ctx->pc = 0x24D68Cu;
label_24d68c:
    // 0x24d68c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24d68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d690:
    // 0x24d690: 0x16650008  bne         $s3, $a1, . + 4 + (0x8 << 2)
label_24d694:
    if (ctx->pc == 0x24D694u) {
        ctx->pc = 0x24D694u;
            // 0x24d694: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x24D698u;
        goto label_24d698;
    }
    ctx->pc = 0x24D690u;
    {
        const bool branch_taken_0x24d690 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        ctx->pc = 0x24D694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D690u;
            // 0x24d694: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d690) {
            ctx->pc = 0x24D6B4u;
            goto label_24d6b4;
        }
    }
    ctx->pc = 0x24D698u;
label_24d698:
    // 0x24d698: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x24d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24d69c:
    // 0x24d69c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x24d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_24d6a0:
    // 0x24d6a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d6a4:
    // 0x24d6a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24d6a8:
    // 0x24d6a8: 0xac640070  sw          $a0, 0x70($v1)
    ctx->pc = 0x24d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
label_24d6ac:
    // 0x24d6ac: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x24d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_24d6b0:
    // 0x24d6b0: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x24d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_24d6b4:
    // 0x24d6b4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x24d6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24d6b8:
    // 0x24d6b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x24d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24d6bc:
    // 0x24d6bc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_24d6c0:
    if (ctx->pc == 0x24D6C0u) {
        ctx->pc = 0x24D6C0u;
            // 0x24d6c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D6C4u;
        goto label_24d6c4;
    }
    ctx->pc = 0x24D6BCu;
    {
        const bool branch_taken_0x24d6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D6BCu;
            // 0x24d6c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6bc) {
            ctx->pc = 0x24D6F8u;
            goto label_24d6f8;
        }
    }
    ctx->pc = 0x24D6C4u;
label_24d6c4:
    // 0x24d6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d6c8:
    // 0x24d6c8: 0x86830110  lh          $v1, 0x110($s4)
    ctx->pc = 0x24d6c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d6cc:
    // 0x24d6cc: 0x0  nop
    ctx->pc = 0x24d6ccu;
    // NOP
label_24d6d0:
    // 0x24d6d0: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x24d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_24d6d4:
    // 0x24d6d4: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x24d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_24d6d8:
    // 0x24d6d8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24d6dc:
    if (ctx->pc == 0x24D6DCu) {
        ctx->pc = 0x24D6E0u;
        goto label_24d6e0;
    }
    ctx->pc = 0x24D6D8u;
    {
        const bool branch_taken_0x24d6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d6d8) {
            ctx->pc = 0x24D6E4u;
            goto label_24d6e4;
        }
    }
    ctx->pc = 0x24D6E0u;
label_24d6e0:
    // 0x24d6e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24d6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24d6e4:
    // 0x24d6e4: 0x0  nop
    ctx->pc = 0x24d6e4u;
    // NOP
label_24d6e8:
    // 0x24d6e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24d6ec:
    // 0x24d6ec: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x24d6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24d6f0:
    // 0x24d6f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_24d6f4:
    if (ctx->pc == 0x24D6F4u) {
        ctx->pc = 0x24D6F4u;
            // 0x24d6f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x24D6F8u;
        goto label_24d6f8;
    }
    ctx->pc = 0x24D6F0u;
    {
        const bool branch_taken_0x24d6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D6F0u;
            // 0x24d6f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6f0) {
            ctx->pc = 0x24D6D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24d6d0;
        }
    }
    ctx->pc = 0x24D6F8u;
label_24d6f8:
    // 0x24d6f8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x24d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_24d6fc:
    // 0x24d6fc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_24d700:
    if (ctx->pc == 0x24D700u) {
        ctx->pc = 0x24D700u;
            // 0x24d700: 0x92082a  slt         $at, $a0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->pc = 0x24D704u;
        goto label_24d704;
    }
    ctx->pc = 0x24D6FCu;
    {
        const bool branch_taken_0x24d6fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D6FCu;
            // 0x24d700: 0x92082a  slt         $at, $a0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6fc) {
            ctx->pc = 0x24D70Cu;
            goto label_24d70c;
        }
    }
    ctx->pc = 0x24D704u;
label_24d704:
    // 0x24d704: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x24d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_24d708:
    // 0x24d708: 0x92082a  slt         $at, $a0, $s2
    ctx->pc = 0x24d708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24d70c:
    // 0x24d70c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_24d710:
    if (ctx->pc == 0x24D710u) {
        ctx->pc = 0x24D710u;
            // 0x24d710: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x24D714u;
        goto label_24d714;
    }
    ctx->pc = 0x24D70Cu;
    {
        const bool branch_taken_0x24d70c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D70Cu;
            // 0x24d710: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d70c) {
            ctx->pc = 0x24D71Cu;
            goto label_24d71c;
        }
    }
    ctx->pc = 0x24D714u;
label_24d714:
    // 0x24d714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24d714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d718:
    // 0x24d718: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24d718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24d71c:
    // 0x24d71c: 0x86820110  lh          $v0, 0x110($s4)
    ctx->pc = 0x24d71cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d720:
    // 0x24d720: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x24d720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_24d724:
    // 0x24d724: 0x8c700070  lw          $s0, 0x70($v1)
    ctx->pc = 0x24d724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_24d728:
    // 0x24d728: 0x8c7300b0  lw          $s3, 0xB0($v1)
    ctx->pc = 0x24d728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_24d72c:
    // 0x24d72c: 0x1050004e  beq         $v0, $s0, . + 4 + (0x4E << 2)
label_24d730:
    if (ctx->pc == 0x24D730u) {
        ctx->pc = 0x24D730u;
            // 0x24d730: 0x8c720090  lw          $s2, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->pc = 0x24D734u;
        goto label_24d734;
    }
    ctx->pc = 0x24D72Cu;
    {
        const bool branch_taken_0x24d72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x24D730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D72Cu;
            // 0x24d730: 0x8c720090  lw          $s2, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d72c) {
            ctx->pc = 0x24D868u;
            goto label_24d868;
        }
    }
    ctx->pc = 0x24D734u;
label_24d734:
    // 0x24d734: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24d738:
    // 0x24d738: 0xc0657b0  jal         func_195EC0
label_24d73c:
    if (ctx->pc == 0x24D73Cu) {
        ctx->pc = 0x24D73Cu;
            // 0x24d73c: 0x844400c2  lh          $a0, 0xC2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
        ctx->pc = 0x24D740u;
        goto label_24d740;
    }
    ctx->pc = 0x24D738u;
    SET_GPR_U32(ctx, 31, 0x24D740u);
    ctx->pc = 0x24D73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D738u;
            // 0x24d73c: 0x844400c2  lh          $a0, 0xC2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D740u; }
        if (ctx->pc != 0x24D740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D740u; }
        if (ctx->pc != 0x24D740u) { return; }
    }
    ctx->pc = 0x24D740u;
label_24d740:
    // 0x24d740: 0xc0657c4  jal         func_195F10
label_24d744:
    if (ctx->pc == 0x24D744u) {
        ctx->pc = 0x24D744u;
            // 0x24d744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D748u;
        goto label_24d748;
    }
    ctx->pc = 0x24D740u;
    SET_GPR_U32(ctx, 31, 0x24D748u);
    ctx->pc = 0x24D744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D740u;
            // 0x24d744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D748u; }
        if (ctx->pc != 0x24D748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D748u; }
        if (ctx->pc != 0x24D748u) { return; }
    }
    ctx->pc = 0x24D748u;
label_24d748:
    // 0x24d748: 0x86840110  lh          $a0, 0x110($s4)
    ctx->pc = 0x24d748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d74c:
    // 0x24d74c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_24d750:
    if (ctx->pc == 0x24D750u) {
        ctx->pc = 0x24D750u;
            // 0x24d750: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24D754u;
        goto label_24d754;
    }
    ctx->pc = 0x24D74Cu;
    {
        const bool branch_taken_0x24d74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D74Cu;
            // 0x24d750: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d74c) {
            ctx->pc = 0x24D764u;
            goto label_24d764;
        }
    }
    ctx->pc = 0x24D754u;
label_24d754:
    // 0x24d754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d758:
    // 0x24d758: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_24d75c:
    if (ctx->pc == 0x24D75Cu) {
        ctx->pc = 0x24D75Cu;
            // 0x24d75c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24D760u;
        goto label_24d760;
    }
    ctx->pc = 0x24D758u;
    {
        const bool branch_taken_0x24d758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D758u;
            // 0x24d75c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d758) {
            ctx->pc = 0x24D778u;
            goto label_24d778;
        }
    }
    ctx->pc = 0x24D760u;
label_24d760:
    // 0x24d760: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d764:
    // 0x24d764: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
label_24d768:
    if (ctx->pc == 0x24D768u) {
        ctx->pc = 0x24D768u;
            // 0x24d768: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24D76Cu;
        goto label_24d76c;
    }
    ctx->pc = 0x24D764u;
    {
        const bool branch_taken_0x24d764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24D768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D764u;
            // 0x24d768: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d764) {
            ctx->pc = 0x24D868u;
            goto label_24d868;
        }
    }
    ctx->pc = 0x24D76Cu;
label_24d76c:
    // 0x24d76c: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
label_24d770:
    if (ctx->pc == 0x24D770u) {
        ctx->pc = 0x24D774u;
        goto label_24d774;
    }
    ctx->pc = 0x24D76Cu;
    {
        const bool branch_taken_0x24d76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d76c) {
            ctx->pc = 0x24D868u;
            goto label_24d868;
        }
    }
    ctx->pc = 0x24D774u;
label_24d774:
    // 0x24d774: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d778:
    // 0x24d778: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_24d77c:
    if (ctx->pc == 0x24D77Cu) {
        ctx->pc = 0x24D77Cu;
            // 0x24d77c: 0x3c0601f1  lui         $a2, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24D780u;
        goto label_24d780;
    }
    ctx->pc = 0x24D778u;
    {
        const bool branch_taken_0x24d778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D778u;
            // 0x24d77c: 0x3c0601f1  lui         $a2, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d778) {
            ctx->pc = 0x24D78Cu;
            goto label_24d78c;
        }
    }
    ctx->pc = 0x24D780u;
label_24d780:
    // 0x24d780: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24d784:
    // 0x24d784: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_24d788:
    if (ctx->pc == 0x24D788u) {
        ctx->pc = 0x24D78Cu;
        goto label_24d78c;
    }
    ctx->pc = 0x24D784u;
    {
        const bool branch_taken_0x24d784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d784) {
            ctx->pc = 0x24D868u;
            goto label_24d868;
        }
    }
    ctx->pc = 0x24D78Cu;
label_24d78c:
    // 0x24d78c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24d78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24d790:
    // 0x24d790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d794:
    // 0x24d794: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x24d794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
label_24d798:
    // 0x24d798: 0xc0ac028  jal         func_2B00A0
label_24d79c:
    if (ctx->pc == 0x24D79Cu) {
        ctx->pc = 0x24D79Cu;
            // 0x24d79c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D7A0u;
        goto label_24d7a0;
    }
    ctx->pc = 0x24D798u;
    SET_GPR_U32(ctx, 31, 0x24D7A0u);
    ctx->pc = 0x24D79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D798u;
            // 0x24d79c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D7A0u; }
        if (ctx->pc != 0x24D7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D7A0u; }
        if (ctx->pc != 0x24D7A0u) { return; }
    }
    ctx->pc = 0x24D7A0u;
label_24d7a0:
    // 0x24d7a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d7a4:
    // 0x24d7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24d7a8:
    // 0x24d7a8: 0xa3839b72  sb          $v1, -0x648E($gp)
    ctx->pc = 0x24d7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 3));
label_24d7ac:
    // 0x24d7ac: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x24d7acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_24d7b0:
    // 0x24d7b0: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x24d7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_24d7b4:
    // 0x24d7b4: 0xa6900110  sh          $s0, 0x110($s4)
    ctx->pc = 0x24d7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 272), (uint16_t)GPR_U32(ctx, 16));
label_24d7b8:
    // 0x24d7b8: 0x86820110  lh          $v0, 0x110($s4)
    ctx->pc = 0x24d7b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d7bc:
    // 0x24d7bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24d7c0:
    if (ctx->pc == 0x24D7C0u) {
        ctx->pc = 0x24D7C4u;
        goto label_24d7c4;
    }
    ctx->pc = 0x24D7BCu;
    {
        const bool branch_taken_0x24d7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d7bc) {
            ctx->pc = 0x24D7CCu;
            goto label_24d7cc;
        }
    }
    ctx->pc = 0x24D7C4u;
label_24d7c4:
    // 0x24d7c4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_24d7c8:
    if (ctx->pc == 0x24D7C8u) {
        ctx->pc = 0x24D7CCu;
        goto label_24d7cc;
    }
    ctx->pc = 0x24D7C4u;
    {
        const bool branch_taken_0x24d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24d7c4) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D7CCu;
label_24d7cc:
    // 0x24d7cc: 0xa6920114  sh          $s2, 0x114($s4)
    ctx->pc = 0x24d7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 276), (uint16_t)GPR_U32(ctx, 18));
label_24d7d0:
    // 0x24d7d0: 0x86850110  lh          $a1, 0x110($s4)
    ctx->pc = 0x24d7d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d7d4:
    // 0x24d7d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24d7d8:
    // 0x24d7d8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_24d7dc:
    if (ctx->pc == 0x24D7DCu) {
        ctx->pc = 0x24D7DCu;
            // 0x24d7dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24D7E0u;
        goto label_24d7e0;
    }
    ctx->pc = 0x24D7D8u;
    {
        const bool branch_taken_0x24d7d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D7D8u;
            // 0x24d7dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7d8) {
            ctx->pc = 0x24D7F4u;
            goto label_24d7f4;
        }
    }
    ctx->pc = 0x24D7E0u;
label_24d7e0:
    // 0x24d7e0: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_24d7e4:
    if (ctx->pc == 0x24D7E4u) {
        ctx->pc = 0x24D7E4u;
            // 0x24d7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D7E8u;
        goto label_24d7e8;
    }
    ctx->pc = 0x24D7E0u;
    {
        const bool branch_taken_0x24d7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x24D7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D7E0u;
            // 0x24d7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7e0) {
            ctx->pc = 0x24D7ECu;
            goto label_24d7ec;
        }
    }
    ctx->pc = 0x24D7E8u;
label_24d7e8:
    // 0x24d7e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24d7ec:
    // 0x24d7ec: 0xc090320  jal         func_240C80
label_24d7f0:
    if (ctx->pc == 0x24D7F0u) {
        ctx->pc = 0x24D7F4u;
        goto label_24d7f4;
    }
    ctx->pc = 0x24D7ECu;
    SET_GPR_U32(ctx, 31, 0x24D7F4u);
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D7F4u; }
        if (ctx->pc != 0x24D7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D7F4u; }
        if (ctx->pc != 0x24D7F4u) { return; }
    }
    ctx->pc = 0x24D7F4u;
label_24d7f4:
    // 0x24d7f4: 0x86830110  lh          $v1, 0x110($s4)
    ctx->pc = 0x24d7f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d7f8:
    // 0x24d7f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d7fc:
    // 0x24d7fc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_24d800:
    if (ctx->pc == 0x24D800u) {
        ctx->pc = 0x24D800u;
            // 0x24d800: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24D804u;
        goto label_24d804;
    }
    ctx->pc = 0x24D7FCu;
    {
        const bool branch_taken_0x24d7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D7FCu;
            // 0x24d800: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7fc) {
            ctx->pc = 0x24D824u;
            goto label_24d824;
        }
    }
    ctx->pc = 0x24D804u;
label_24d804:
    // 0x24d804: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24d808:
    // 0x24d808: 0x8c24cab4  lw          $a0, -0x354C($at)
    ctx->pc = 0x24d808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953652)));
label_24d80c:
    // 0x24d80c: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x24d80cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_24d810:
    // 0x24d810: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x24d810u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_24d814:
    // 0x24d814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24d814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24d818:
    // 0x24d818: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x24d818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_24d81c:
    // 0x24d81c: 0x320f809  jalr        $t9
label_24d820:
    if (ctx->pc == 0x24D820u) {
        ctx->pc = 0x24D820u;
            // 0x24d820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D824u;
        goto label_24d824;
    }
    ctx->pc = 0x24D81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24D824u);
        ctx->pc = 0x24D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D81Cu;
            // 0x24d820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24D824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24D824u; }
            if (ctx->pc != 0x24D824u) { return; }
        }
        }
    }
    ctx->pc = 0x24D824u;
label_24d824:
    // 0x24d824: 0xa6930014  sh          $s3, 0x14($s4)
    ctx->pc = 0x24d824u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 19));
label_24d828:
    // 0x24d828: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24d828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_24d82c:
    // 0x24d82c: 0x86880014  lh          $t0, 0x14($s4)
    ctx->pc = 0x24d82cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_24d830:
    // 0x24d830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d834:
    // 0x24d834: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24d838:
    // 0x24d838: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x24d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_24d83c:
    // 0x24d83c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d840:
    // 0x24d840: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x24d840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_24d844:
    // 0x24d844: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x24d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_24d848:
    // 0x24d848: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24d848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24d84c:
    // 0x24d84c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24d850:
    // 0x24d850: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x24d850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
label_24d854:
    // 0x24d854: 0x86850110  lh          $a1, 0x110($s4)
    ctx->pc = 0x24d854u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d858:
    // 0x24d858: 0xc093114  jal         func_24C450
label_24d85c:
    if (ctx->pc == 0x24D85Cu) {
        ctx->pc = 0x24D85Cu;
            // 0x24d85c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D860u;
        goto label_24d860;
    }
    ctx->pc = 0x24D858u;
    SET_GPR_U32(ctx, 31, 0x24D860u);
    ctx->pc = 0x24D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D858u;
            // 0x24d85c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D860u; }
        if (ctx->pc != 0x24D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D860u; }
        if (ctx->pc != 0x24D860u) { return; }
    }
    ctx->pc = 0x24D860u;
label_24d860:
    // 0x24d860: 0xc094274  jal         func_2509D0
label_24d864:
    if (ctx->pc == 0x24D864u) {
        ctx->pc = 0x24D864u;
            // 0x24d864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24D868u;
        goto label_24d868;
    }
    ctx->pc = 0x24D860u;
    SET_GPR_U32(ctx, 31, 0x24D868u);
    ctx->pc = 0x24D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D860u;
            // 0x24d864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D868u; }
        if (ctx->pc != 0x24D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D868u; }
        if (ctx->pc != 0x24D868u) { return; }
    }
    ctx->pc = 0x24D868u;
label_24d868:
    // 0x24d868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d86c:
    // 0x24d86c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24d86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24d870:
    // 0x24d870: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24d870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24d874:
    // 0x24d874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24d874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24d878:
    // 0x24d878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d87c:
    // 0x24d87c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24d880:
    // 0x24d880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24d884:
    // 0x24d884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24d888:
    // 0x24d888: 0x3e00008  jr          $ra
label_24d88c:
    if (ctx->pc == 0x24D88Cu) {
        ctx->pc = 0x24D88Cu;
            // 0x24d88c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x24D890u;
        goto label_fallthrough_0x24d888;
    }
    ctx->pc = 0x24D888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D888u;
            // 0x24d88c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24d888:
    ctx->pc = 0x24D890u;
}
