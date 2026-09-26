#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFish__9CAquariumFiP13CGameDataUsed
// Address: 0x2133c0 - 0x213704
void LoadFish__9CAquariumFiP13CGameDataUsed_0x2133c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFish__9CAquariumFiP13CGameDataUsed_0x2133c0");
#endif

    switch (ctx->pc) {
        case 0x2133c0u: goto label_2133c0;
        case 0x2133c4u: goto label_2133c4;
        case 0x2133c8u: goto label_2133c8;
        case 0x2133ccu: goto label_2133cc;
        case 0x2133d0u: goto label_2133d0;
        case 0x2133d4u: goto label_2133d4;
        case 0x2133d8u: goto label_2133d8;
        case 0x2133dcu: goto label_2133dc;
        case 0x2133e0u: goto label_2133e0;
        case 0x2133e4u: goto label_2133e4;
        case 0x2133e8u: goto label_2133e8;
        case 0x2133ecu: goto label_2133ec;
        case 0x2133f0u: goto label_2133f0;
        case 0x2133f4u: goto label_2133f4;
        case 0x2133f8u: goto label_2133f8;
        case 0x2133fcu: goto label_2133fc;
        case 0x213400u: goto label_213400;
        case 0x213404u: goto label_213404;
        case 0x213408u: goto label_213408;
        case 0x21340cu: goto label_21340c;
        case 0x213410u: goto label_213410;
        case 0x213414u: goto label_213414;
        case 0x213418u: goto label_213418;
        case 0x21341cu: goto label_21341c;
        case 0x213420u: goto label_213420;
        case 0x213424u: goto label_213424;
        case 0x213428u: goto label_213428;
        case 0x21342cu: goto label_21342c;
        case 0x213430u: goto label_213430;
        case 0x213434u: goto label_213434;
        case 0x213438u: goto label_213438;
        case 0x21343cu: goto label_21343c;
        case 0x213440u: goto label_213440;
        case 0x213444u: goto label_213444;
        case 0x213448u: goto label_213448;
        case 0x21344cu: goto label_21344c;
        case 0x213450u: goto label_213450;
        case 0x213454u: goto label_213454;
        case 0x213458u: goto label_213458;
        case 0x21345cu: goto label_21345c;
        case 0x213460u: goto label_213460;
        case 0x213464u: goto label_213464;
        case 0x213468u: goto label_213468;
        case 0x21346cu: goto label_21346c;
        case 0x213470u: goto label_213470;
        case 0x213474u: goto label_213474;
        case 0x213478u: goto label_213478;
        case 0x21347cu: goto label_21347c;
        case 0x213480u: goto label_213480;
        case 0x213484u: goto label_213484;
        case 0x213488u: goto label_213488;
        case 0x21348cu: goto label_21348c;
        case 0x213490u: goto label_213490;
        case 0x213494u: goto label_213494;
        case 0x213498u: goto label_213498;
        case 0x21349cu: goto label_21349c;
        case 0x2134a0u: goto label_2134a0;
        case 0x2134a4u: goto label_2134a4;
        case 0x2134a8u: goto label_2134a8;
        case 0x2134acu: goto label_2134ac;
        case 0x2134b0u: goto label_2134b0;
        case 0x2134b4u: goto label_2134b4;
        case 0x2134b8u: goto label_2134b8;
        case 0x2134bcu: goto label_2134bc;
        case 0x2134c0u: goto label_2134c0;
        case 0x2134c4u: goto label_2134c4;
        case 0x2134c8u: goto label_2134c8;
        case 0x2134ccu: goto label_2134cc;
        case 0x2134d0u: goto label_2134d0;
        case 0x2134d4u: goto label_2134d4;
        case 0x2134d8u: goto label_2134d8;
        case 0x2134dcu: goto label_2134dc;
        case 0x2134e0u: goto label_2134e0;
        case 0x2134e4u: goto label_2134e4;
        case 0x2134e8u: goto label_2134e8;
        case 0x2134ecu: goto label_2134ec;
        case 0x2134f0u: goto label_2134f0;
        case 0x2134f4u: goto label_2134f4;
        case 0x2134f8u: goto label_2134f8;
        case 0x2134fcu: goto label_2134fc;
        case 0x213500u: goto label_213500;
        case 0x213504u: goto label_213504;
        case 0x213508u: goto label_213508;
        case 0x21350cu: goto label_21350c;
        case 0x213510u: goto label_213510;
        case 0x213514u: goto label_213514;
        case 0x213518u: goto label_213518;
        case 0x21351cu: goto label_21351c;
        case 0x213520u: goto label_213520;
        case 0x213524u: goto label_213524;
        case 0x213528u: goto label_213528;
        case 0x21352cu: goto label_21352c;
        case 0x213530u: goto label_213530;
        case 0x213534u: goto label_213534;
        case 0x213538u: goto label_213538;
        case 0x21353cu: goto label_21353c;
        case 0x213540u: goto label_213540;
        case 0x213544u: goto label_213544;
        case 0x213548u: goto label_213548;
        case 0x21354cu: goto label_21354c;
        case 0x213550u: goto label_213550;
        case 0x213554u: goto label_213554;
        case 0x213558u: goto label_213558;
        case 0x21355cu: goto label_21355c;
        case 0x213560u: goto label_213560;
        case 0x213564u: goto label_213564;
        case 0x213568u: goto label_213568;
        case 0x21356cu: goto label_21356c;
        case 0x213570u: goto label_213570;
        case 0x213574u: goto label_213574;
        case 0x213578u: goto label_213578;
        case 0x21357cu: goto label_21357c;
        case 0x213580u: goto label_213580;
        case 0x213584u: goto label_213584;
        case 0x213588u: goto label_213588;
        case 0x21358cu: goto label_21358c;
        case 0x213590u: goto label_213590;
        case 0x213594u: goto label_213594;
        case 0x213598u: goto label_213598;
        case 0x21359cu: goto label_21359c;
        case 0x2135a0u: goto label_2135a0;
        case 0x2135a4u: goto label_2135a4;
        case 0x2135a8u: goto label_2135a8;
        case 0x2135acu: goto label_2135ac;
        case 0x2135b0u: goto label_2135b0;
        case 0x2135b4u: goto label_2135b4;
        case 0x2135b8u: goto label_2135b8;
        case 0x2135bcu: goto label_2135bc;
        case 0x2135c0u: goto label_2135c0;
        case 0x2135c4u: goto label_2135c4;
        case 0x2135c8u: goto label_2135c8;
        case 0x2135ccu: goto label_2135cc;
        case 0x2135d0u: goto label_2135d0;
        case 0x2135d4u: goto label_2135d4;
        case 0x2135d8u: goto label_2135d8;
        case 0x2135dcu: goto label_2135dc;
        case 0x2135e0u: goto label_2135e0;
        case 0x2135e4u: goto label_2135e4;
        case 0x2135e8u: goto label_2135e8;
        case 0x2135ecu: goto label_2135ec;
        case 0x2135f0u: goto label_2135f0;
        case 0x2135f4u: goto label_2135f4;
        case 0x2135f8u: goto label_2135f8;
        case 0x2135fcu: goto label_2135fc;
        case 0x213600u: goto label_213600;
        case 0x213604u: goto label_213604;
        case 0x213608u: goto label_213608;
        case 0x21360cu: goto label_21360c;
        case 0x213610u: goto label_213610;
        case 0x213614u: goto label_213614;
        case 0x213618u: goto label_213618;
        case 0x21361cu: goto label_21361c;
        case 0x213620u: goto label_213620;
        case 0x213624u: goto label_213624;
        case 0x213628u: goto label_213628;
        case 0x21362cu: goto label_21362c;
        case 0x213630u: goto label_213630;
        case 0x213634u: goto label_213634;
        case 0x213638u: goto label_213638;
        case 0x21363cu: goto label_21363c;
        case 0x213640u: goto label_213640;
        case 0x213644u: goto label_213644;
        case 0x213648u: goto label_213648;
        case 0x21364cu: goto label_21364c;
        case 0x213650u: goto label_213650;
        case 0x213654u: goto label_213654;
        case 0x213658u: goto label_213658;
        case 0x21365cu: goto label_21365c;
        case 0x213660u: goto label_213660;
        case 0x213664u: goto label_213664;
        case 0x213668u: goto label_213668;
        case 0x21366cu: goto label_21366c;
        case 0x213670u: goto label_213670;
        case 0x213674u: goto label_213674;
        case 0x213678u: goto label_213678;
        case 0x21367cu: goto label_21367c;
        case 0x213680u: goto label_213680;
        case 0x213684u: goto label_213684;
        case 0x213688u: goto label_213688;
        case 0x21368cu: goto label_21368c;
        case 0x213690u: goto label_213690;
        case 0x213694u: goto label_213694;
        case 0x213698u: goto label_213698;
        case 0x21369cu: goto label_21369c;
        case 0x2136a0u: goto label_2136a0;
        case 0x2136a4u: goto label_2136a4;
        case 0x2136a8u: goto label_2136a8;
        case 0x2136acu: goto label_2136ac;
        case 0x2136b0u: goto label_2136b0;
        case 0x2136b4u: goto label_2136b4;
        case 0x2136b8u: goto label_2136b8;
        case 0x2136bcu: goto label_2136bc;
        case 0x2136c0u: goto label_2136c0;
        case 0x2136c4u: goto label_2136c4;
        case 0x2136c8u: goto label_2136c8;
        case 0x2136ccu: goto label_2136cc;
        case 0x2136d0u: goto label_2136d0;
        case 0x2136d4u: goto label_2136d4;
        case 0x2136d8u: goto label_2136d8;
        case 0x2136dcu: goto label_2136dc;
        case 0x2136e0u: goto label_2136e0;
        case 0x2136e4u: goto label_2136e4;
        case 0x2136e8u: goto label_2136e8;
        case 0x2136ecu: goto label_2136ec;
        case 0x2136f0u: goto label_2136f0;
        case 0x2136f4u: goto label_2136f4;
        case 0x2136f8u: goto label_2136f8;
        case 0x2136fcu: goto label_2136fc;
        case 0x213700u: goto label_213700;
        default: break;
    }

    ctx->pc = 0x2133c0u;

label_2133c0:
    // 0x2133c0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2133c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_2133c4:
    // 0x2133c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2133c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2133c8:
    // 0x2133c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2133c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2133cc:
    // 0x2133cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2133ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2133d0:
    // 0x2133d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2133d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2133d4:
    // 0x2133d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2133d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2133d8:
    // 0x2133d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2133d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2133dc:
    // 0x2133dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2133dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2133e0:
    // 0x2133e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2133e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2133e4:
    // 0x2133e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2133e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2133e8:
    // 0x2133e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2133e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2133ec:
    // 0x2133ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2133ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2133f0:
    // 0x2133f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2133f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2133f4:
    // 0x2133f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2133f8:
    if (ctx->pc == 0x2133F8u) {
        ctx->pc = 0x2133F8u;
            // 0x2133f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2133FCu;
        goto label_2133fc;
    }
    ctx->pc = 0x2133F4u;
    {
        const bool branch_taken_0x2133f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2133F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2133F4u;
            // 0x2133f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133f4) {
            ctx->pc = 0x213404u;
            goto label_213404;
        }
    }
    ctx->pc = 0x2133FCu;
label_2133fc:
    // 0x2133fc: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_213400:
    if (ctx->pc == 0x213400u) {
        ctx->pc = 0x213400u;
            // 0x213400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213404u;
        goto label_213404;
    }
    ctx->pc = 0x2133FCu;
    {
        const bool branch_taken_0x2133fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2133FCu;
            // 0x213400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133fc) {
            ctx->pc = 0x2136D4u;
            goto label_2136d4;
        }
    }
    ctx->pc = 0x213404u;
label_213404:
    // 0x213404: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x213404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_213408:
    // 0x213408: 0xc0846fc  jal         func_211BF0
label_21340c:
    if (ctx->pc == 0x21340Cu) {
        ctx->pc = 0x21340Cu;
            // 0x21340c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x213410u;
        goto label_213410;
    }
    ctx->pc = 0x213408u;
    SET_GPR_U32(ctx, 31, 0x213410u);
    ctx->pc = 0x21340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213408u;
            // 0x21340c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211BF0u;
    if (runtime->hasFunction(0x211BF0u)) {
        auto targetFn = runtime->lookupFunction(0x211BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213410u; }
        if (ctx->pc != 0x213410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishPath__FiPc_0x211bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213410u; }
        if (ctx->pc != 0x213410u) { return; }
    }
    ctx->pc = 0x213410u;
label_213410:
    // 0x213410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_213414:
    if (ctx->pc == 0x213414u) {
        ctx->pc = 0x213414u;
            // 0x213414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213418u;
        goto label_213418;
    }
    ctx->pc = 0x213410u;
    {
        const bool branch_taken_0x213410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213410u;
            // 0x213414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213410) {
            ctx->pc = 0x213420u;
            goto label_213420;
        }
    }
    ctx->pc = 0x213418u;
label_213418:
    // 0x213418: 0x100000af  b           . + 4 + (0xAF << 2)
label_21341c:
    if (ctx->pc == 0x21341Cu) {
        ctx->pc = 0x21341Cu;
            // 0x21341c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x213420u;
        goto label_213420;
    }
    ctx->pc = 0x213418u;
    {
        const bool branch_taken_0x213418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21341Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213418u;
            // 0x21341c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213418) {
            ctx->pc = 0x2136D8u;
            goto label_2136d8;
        }
    }
    ctx->pc = 0x213420u;
label_213420:
    // 0x213420: 0x8f83920c  lw          $v1, -0x6DF4($gp)
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_213424:
    // 0x213424: 0x96420048  lhu         $v0, 0x48($s2)
    ctx->pc = 0x213424u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 72)));
label_213428:
    // 0x213428: 0x94760000  lhu         $s6, 0x0($v1)
    ctx->pc = 0x213428u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21342c:
    // 0x21342c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_213430:
    // 0x213430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_213434:
    if (ctx->pc == 0x213434u) {
        ctx->pc = 0x213434u;
            // 0x213434: 0x265e0010  addiu       $fp, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x213438u;
        goto label_213438;
    }
    ctx->pc = 0x213430u;
    {
        const bool branch_taken_0x213430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213430u;
            // 0x213434: 0x265e0010  addiu       $fp, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213430) {
            ctx->pc = 0x213448u;
            goto label_213448;
        }
    }
    ctx->pc = 0x213438u;
label_213438:
    // 0x213438: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x213438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_21343c:
    // 0x21343c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x21343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_213440:
    // 0x213440: 0xc04a3dc  jal         func_128F70
label_213444:
    if (ctx->pc == 0x213444u) {
        ctx->pc = 0x213444u;
            // 0x213444: 0x24a59f70  addiu       $a1, $a1, -0x6090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942576));
        ctx->pc = 0x213448u;
        goto label_213448;
    }
    ctx->pc = 0x213440u;
    SET_GPR_U32(ctx, 31, 0x213448u);
    ctx->pc = 0x213444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213440u;
            // 0x213444: 0x24a59f70  addiu       $a1, $a1, -0x6090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213448u; }
        if (ctx->pc != 0x213448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213448u; }
        if (ctx->pc != 0x213448u) { return; }
    }
    ctx->pc = 0x213448u;
label_213448:
    // 0x213448: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x213448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21344c:
    // 0x21344c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x21344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_213450:
    // 0x213450: 0x27a601cc  addiu       $a2, $sp, 0x1CC
    ctx->pc = 0x213450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_213454:
    // 0x213454: 0xc0524dc  jal         func_149370
label_213458:
    if (ctx->pc == 0x213458u) {
        ctx->pc = 0x213458u;
            // 0x213458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21345Cu;
        goto label_21345c;
    }
    ctx->pc = 0x213454u;
    SET_GPR_U32(ctx, 31, 0x21345Cu);
    ctx->pc = 0x213458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213454u;
            // 0x213458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21345Cu; }
        if (ctx->pc != 0x21345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21345Cu; }
        if (ctx->pc != 0x21345Cu) { return; }
    }
    ctx->pc = 0x21345Cu;
label_21345c:
    // 0x21345c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_213460:
    if (ctx->pc == 0x213460u) {
        ctx->pc = 0x213460u;
            // 0x213460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213464u;
        goto label_213464;
    }
    ctx->pc = 0x21345Cu;
    {
        const bool branch_taken_0x21345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21345Cu;
            // 0x213460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21345c) {
            ctx->pc = 0x2136D4u;
            goto label_2136d4;
        }
    }
    ctx->pc = 0x213464u;
label_213464:
    // 0x213464: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x213464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_213468:
    // 0x213468: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_21346c:
    // 0x21346c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_213470:
    // 0x213470: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x213470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_213474:
    // 0x213474: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x213474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_213478:
    // 0x213478: 0xac4001b8  sw          $zero, 0x1B8($v0)
    ctx->pc = 0x213478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 0));
label_21347c:
    // 0x21347c: 0x24510194  addiu       $s1, $v0, 0x194
    ctx->pc = 0x21347cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 404));
label_213480:
    // 0x213480: 0xac4001b0  sw          $zero, 0x1B0($v0)
    ctx->pc = 0x213480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 0));
label_213484:
    // 0x213484: 0xc04e748  jal         func_139D20
label_213488:
    if (ctx->pc == 0x213488u) {
        ctx->pc = 0x213488u;
            // 0x213488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21348Cu;
        goto label_21348c;
    }
    ctx->pc = 0x213484u;
    SET_GPR_U32(ctx, 31, 0x21348Cu);
    ctx->pc = 0x213488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213484u;
            // 0x213488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21348Cu; }
        if (ctx->pc != 0x21348Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21348Cu; }
        if (ctx->pc != 0x21348Cu) { return; }
    }
    ctx->pc = 0x21348Cu;
label_21348c:
    // 0x21348c: 0x24040940  addiu       $a0, $zero, 0x940
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2368));
label_213490:
    // 0x213490: 0xc04e638  jal         func_1398E0
label_213494:
    if (ctx->pc == 0x213494u) {
        ctx->pc = 0x213494u;
            // 0x213494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213498u;
        goto label_213498;
    }
    ctx->pc = 0x213490u;
    SET_GPR_U32(ctx, 31, 0x213498u);
    ctx->pc = 0x213494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213490u;
            // 0x213494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213498u; }
        if (ctx->pc != 0x213498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213498u; }
        if (ctx->pc != 0x213498u) { return; }
    }
    ctx->pc = 0x213498u;
label_213498:
    // 0x213498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21349c:
    if (ctx->pc == 0x21349Cu) {
        ctx->pc = 0x21349Cu;
            // 0x21349c: 0x13a880  sll         $s5, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x2134A0u;
        goto label_2134a0;
    }
    ctx->pc = 0x213498u;
    {
        const bool branch_taken_0x213498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213498u;
            // 0x21349c: 0x13a880  sll         $s5, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213498) {
            ctx->pc = 0x2134ACu;
            goto label_2134ac;
        }
    }
    ctx->pc = 0x2134A0u;
label_2134a0:
    // 0x2134a0: 0xc0834d8  jal         func_20D360
label_2134a4:
    if (ctx->pc == 0x2134A4u) {
        ctx->pc = 0x2134A4u;
            // 0x2134a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2134A8u;
        goto label_2134a8;
    }
    ctx->pc = 0x2134A0u;
    SET_GPR_U32(ctx, 31, 0x2134A8u);
    ctx->pc = 0x2134A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2134A0u;
            // 0x2134a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D360u;
    if (runtime->hasFunction(0x20D360u)) {
        auto targetFn = runtime->lookupFunction(0x20D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134A8u; }
        if (ctx->pc != 0x2134A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CAquaFishFv_0x20d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134A8u; }
        if (ctx->pc != 0x2134A8u) { return; }
    }
    ctx->pc = 0x2134A8u;
label_2134a8:
    // 0x2134a8: 0x13a880  sll         $s5, $s3, 2
    ctx->pc = 0x2134a8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2134ac:
    // 0x2134ac: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x2134acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_2134b0:
    // 0x2134b0: 0xac6202b4  sw          $v0, 0x2B4($v1)
    ctx->pc = 0x2134b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 2));
label_2134b4:
    // 0x2134b4: 0x8c7002b4  lw          $s0, 0x2B4($v1)
    ctx->pc = 0x2134b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_2134b8:
    // 0x2134b8: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
label_2134bc:
    if (ctx->pc == 0x2134BCu) {
        ctx->pc = 0x2134BCu;
            // 0x2134bc: 0x247702b4  addiu       $s7, $v1, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 692));
        ctx->pc = 0x2134C0u;
        goto label_2134c0;
    }
    ctx->pc = 0x2134B8u;
    {
        const bool branch_taken_0x2134b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2134B8u;
            // 0x2134bc: 0x247702b4  addiu       $s7, $v1, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134b8) {
            ctx->pc = 0x2136D0u;
            goto label_2136d0;
        }
    }
    ctx->pc = 0x2134C0u;
label_2134c0:
    // 0x2134c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2134c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2134c4:
    // 0x2134c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2134c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2134c8:
    // 0x2134c8: 0x320f809  jalr        $t9
label_2134cc:
    if (ctx->pc == 0x2134CCu) {
        ctx->pc = 0x2134CCu;
            // 0x2134cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2134D0u;
        goto label_2134d0;
    }
    ctx->pc = 0x2134C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2134D0u);
        ctx->pc = 0x2134CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2134C8u;
            // 0x2134cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2134D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2134D0u; }
            if (ctx->pc != 0x2134D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2134D0u;
label_2134d0:
    // 0x2134d0: 0xa61306a0  sh          $s3, 0x6A0($s0)
    ctx->pc = 0x2134d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1696), (uint16_t)GPR_U32(ctx, 19));
label_2134d4:
    // 0x2134d4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2134d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2134d8:
    // 0x2134d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2134d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2134dc:
    // 0x2134dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2134dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2134e0:
    // 0x2134e0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2134e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2134e4:
    // 0x2134e4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2134e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2134e8:
    // 0x2134e8: 0x844a02cc  lh          $t2, 0x2CC($v0)
    ctx->pc = 0x2134e8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 716)));
label_2134ec:
    // 0x2134ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2134ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2134f0:
    // 0x2134f0: 0x24c69f88  addiu       $a2, $a2, -0x6078
    ctx->pc = 0x2134f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942600));
label_2134f4:
    // 0x2134f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2134f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2134f8:
    // 0x2134f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2134f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2134fc:
    // 0x2134fc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2134fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_213500:
    // 0x213500: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x213500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_213504:
    // 0x213504: 0x320f809  jalr        $t9
label_213508:
    if (ctx->pc == 0x213508u) {
        ctx->pc = 0x213508u;
            // 0x213508: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21350Cu;
        goto label_21350c;
    }
    ctx->pc = 0x213504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21350Cu);
        ctx->pc = 0x213508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213504u;
            // 0x213508: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21350Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21350Cu; }
            if (ctx->pc != 0x21350Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21350Cu;
label_21350c:
    // 0x21350c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x21350cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_213510:
    // 0x213510: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x213510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_213514:
    // 0x213514: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x213514u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_213518:
    // 0x213518: 0xc084754  jal         func_211D50
label_21351c:
    if (ctx->pc == 0x21351Cu) {
        ctx->pc = 0x21351Cu;
            // 0x21351c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x213520u;
        goto label_213520;
    }
    ctx->pc = 0x213518u;
    SET_GPR_U32(ctx, 31, 0x213520u);
    ctx->pc = 0x21351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213518u;
            // 0x21351c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211D50u;
    if (runtime->hasFunction(0x211D50u)) {
        auto targetFn = runtime->lookupFunction(0x211D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213520u; }
        if (ctx->pc != 0x213520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishIMGReplace__FP1P11CCharacter2iP14BREEDFISH_USED_0x211d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213520u; }
        if (ctx->pc != 0x213520u) { return; }
    }
    ctx->pc = 0x213520u;
label_213520:
    // 0x213520: 0x3c024278  lui         $v0, 0x4278
    ctx->pc = 0x213520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
label_213524:
    // 0x213524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213528:
    // 0x213528: 0xc0941c0  jal         func_250700
label_21352c:
    if (ctx->pc == 0x21352Cu) {
        ctx->pc = 0x213530u;
        goto label_213530;
    }
    ctx->pc = 0x213528u;
    SET_GPR_U32(ctx, 31, 0x213530u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213530u; }
        if (ctx->pc != 0x213530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213530u; }
        if (ctx->pc != 0x213530u) { return; }
    }
    ctx->pc = 0x213530u;
label_213530:
    // 0x213530: 0x3c0341f8  lui         $v1, 0x41F8
    ctx->pc = 0x213530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16888 << 16));
label_213534:
    // 0x213534: 0x3c0241d8  lui         $v0, 0x41D8
    ctx->pc = 0x213534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16856 << 16));
label_213538:
    // 0x213538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21353c:
    // 0x21353c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21353cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213540:
    // 0x213540: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x213540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_213544:
    // 0x213544: 0xc0941c0  jal         func_250700
label_213548:
    if (ctx->pc == 0x213548u) {
        ctx->pc = 0x213548u;
            // 0x213548: 0xe7a001a0  swc1        $f0, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->pc = 0x21354Cu;
        goto label_21354c;
    }
    ctx->pc = 0x213544u;
    SET_GPR_U32(ctx, 31, 0x21354Cu);
    ctx->pc = 0x213548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213544u;
            // 0x213548: 0xe7a001a0  swc1        $f0, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21354Cu; }
        if (ctx->pc != 0x21354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21354Cu; }
        if (ctx->pc != 0x21354Cu) { return; }
    }
    ctx->pc = 0x21354Cu;
label_21354c:
    // 0x21354c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x21354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_213550:
    // 0x213550: 0x27b101a4  addiu       $s1, $sp, 0x1A4
    ctx->pc = 0x213550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_213554:
    // 0x213554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213558:
    // 0x213558: 0x0  nop
    ctx->pc = 0x213558u;
    // NOP
label_21355c:
    // 0x21355c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21355cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_213560:
    // 0x213560: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x213560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_213564:
    // 0x213564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213568:
    // 0x213568: 0xc0941c0  jal         func_250700
label_21356c:
    if (ctx->pc == 0x21356Cu) {
        ctx->pc = 0x21356Cu;
            // 0x21356c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x213570u;
        goto label_213570;
    }
    ctx->pc = 0x213568u;
    SET_GPR_U32(ctx, 31, 0x213570u);
    ctx->pc = 0x21356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213568u;
            // 0x21356c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213570u; }
        if (ctx->pc != 0x213570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213570u; }
        if (ctx->pc != 0x213570u) { return; }
    }
    ctx->pc = 0x213570u;
label_213570:
    // 0x213570: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x213570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_213574:
    // 0x213574: 0x27b301a8  addiu       $s3, $sp, 0x1A8
    ctx->pc = 0x213574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_213578:
    // 0x213578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21357c:
    // 0x21357c: 0x0  nop
    ctx->pc = 0x21357cu;
    // NOP
label_213580:
    // 0x213580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x213580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_213584:
    // 0x213584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213588:
    // 0x213588: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
label_21358c:
    if (ctx->pc == 0x21358Cu) {
        ctx->pc = 0x21358Cu;
            // 0x21358c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x213590u;
        goto label_213590;
    }
    ctx->pc = 0x213588u;
    {
        const bool branch_taken_0x213588 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x21358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213588u;
            // 0x21358c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213588) {
            ctx->pc = 0x2135B4u;
            goto label_2135b4;
        }
    }
    ctx->pc = 0x213590u;
label_213590:
    // 0x213590: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_213594:
    // 0x213594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x213594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213598:
    // 0x213598: 0xc0941c0  jal         func_250700
label_21359c:
    if (ctx->pc == 0x21359Cu) {
        ctx->pc = 0x2135A0u;
        goto label_2135a0;
    }
    ctx->pc = 0x213598u;
    SET_GPR_U32(ctx, 31, 0x2135A0u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135A0u; }
        if (ctx->pc != 0x2135A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135A0u; }
        if (ctx->pc != 0x2135A0u) { return; }
    }
    ctx->pc = 0x2135A0u;
label_2135a0:
    // 0x2135a0: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_2135a4:
    // 0x2135a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2135a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2135a8:
    // 0x2135a8: 0x0  nop
    ctx->pc = 0x2135a8u;
    // NOP
label_2135ac:
    // 0x2135ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2135acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2135b0:
    // 0x2135b0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2135b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2135b4:
    // 0x2135b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2135b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2135b8:
    // 0x2135b8: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
label_2135bc:
    if (ctx->pc == 0x2135BCu) {
        ctx->pc = 0x2135BCu;
            // 0x2135bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2135C0u;
        goto label_2135c0;
    }
    ctx->pc = 0x2135B8u;
    {
        const bool branch_taken_0x2135b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2135BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2135B8u;
            // 0x2135bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135b8) {
            ctx->pc = 0x2135E8u;
            goto label_2135e8;
        }
    }
    ctx->pc = 0x2135C0u;
label_2135c0:
    // 0x2135c0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2135c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2135c4:
    // 0x2135c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2135c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2135c8:
    // 0x2135c8: 0xc0941c0  jal         func_250700
label_2135cc:
    if (ctx->pc == 0x2135CCu) {
        ctx->pc = 0x2135D0u;
        goto label_2135d0;
    }
    ctx->pc = 0x2135C8u;
    SET_GPR_U32(ctx, 31, 0x2135D0u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135D0u; }
        if (ctx->pc != 0x2135D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135D0u; }
        if (ctx->pc != 0x2135D0u) { return; }
    }
    ctx->pc = 0x2135D0u;
label_2135d0:
    // 0x2135d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2135d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2135d4:
    // 0x2135d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2135d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2135d8:
    // 0x2135d8: 0x0  nop
    ctx->pc = 0x2135d8u;
    // NOP
label_2135dc:
    // 0x2135dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2135dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2135e0:
    // 0x2135e0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2135e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2135e4:
    // 0x2135e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2135e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2135e8:
    // 0x2135e8: 0xc083540  jal         func_20D500
label_2135ec:
    if (ctx->pc == 0x2135ECu) {
        ctx->pc = 0x2135ECu;
            // 0x2135ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2135F0u;
        goto label_2135f0;
    }
    ctx->pc = 0x2135E8u;
    SET_GPR_U32(ctx, 31, 0x2135F0u);
    ctx->pc = 0x2135ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135E8u;
            // 0x2135ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D500u;
    if (runtime->hasFunction(0x20D500u)) {
        auto targetFn = runtime->lookupFunction(0x20D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135F0u; }
        if (ctx->pc != 0x2135F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLiveParam__9CAquaFishFP13CGameDataUsed_0x20d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135F0u; }
        if (ctx->pc != 0x2135F0u) { return; }
    }
    ctx->pc = 0x2135F0u;
label_2135f0:
    // 0x2135f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2135f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2135f4:
    // 0x2135f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2135f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2135f8:
    // 0x2135f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2135f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2135fc:
    // 0x2135fc: 0xc0941c0  jal         func_250700
label_213600:
    if (ctx->pc == 0x213600u) {
        ctx->pc = 0x213600u;
            // 0x213600: 0xafa001b0  sw          $zero, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
        ctx->pc = 0x213604u;
        goto label_213604;
    }
    ctx->pc = 0x2135FCu;
    SET_GPR_U32(ctx, 31, 0x213604u);
    ctx->pc = 0x213600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135FCu;
            // 0x213600: 0xafa001b0  sw          $zero, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213604u; }
        if (ctx->pc != 0x213604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213604u; }
        if (ctx->pc != 0x213604u) { return; }
    }
    ctx->pc = 0x213604u;
label_213604:
    // 0x213604: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x213604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_213608:
    // 0x213608: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x213608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
label_21360c:
    // 0x21360c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_213610:
    // 0x213610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213614:
    // 0x213614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213618:
    // 0x213618: 0x0  nop
    ctx->pc = 0x213618u;
    // NOP
label_21361c:
    // 0x21361c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21361cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_213620:
    // 0x213620: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x213620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_213624:
    // 0x213624: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x213624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_213628:
    // 0x213628: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x213628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_21362c:
    // 0x21362c: 0x320f809  jalr        $t9
label_213630:
    if (ctx->pc == 0x213630u) {
        ctx->pc = 0x213630u;
            // 0x213630: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x213634u;
        goto label_213634;
    }
    ctx->pc = 0x21362Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x213634u);
        ctx->pc = 0x213630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21362Cu;
            // 0x213630: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x213634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x213634u; }
            if (ctx->pc != 0x213634u) { return; }
        }
        }
    }
    ctx->pc = 0x213634u;
label_213634:
    // 0x213634: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x213634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_213638:
    // 0x213638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21363c:
    // 0x21363c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x21363cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_213640:
    // 0x213640: 0x320f809  jalr        $t9
label_213644:
    if (ctx->pc == 0x213644u) {
        ctx->pc = 0x213644u;
            // 0x213644: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x213648u;
        goto label_213648;
    }
    ctx->pc = 0x213640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x213648u);
        ctx->pc = 0x213644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213640u;
            // 0x213644: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x213648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x213648u; }
            if (ctx->pc != 0x213648u) { return; }
        }
        }
    }
    ctx->pc = 0x213648u;
label_213648:
    // 0x213648: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x213648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_21364c:
    // 0x21364c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213650:
    // 0x213650: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x213650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_213654:
    // 0x213654: 0xc083560  jal         func_20D580
label_213658:
    if (ctx->pc == 0x213658u) {
        ctx->pc = 0x213658u;
            // 0x213658: 0x7e020680  sq          $v0, 0x680($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 1664), GPR_VEC(ctx, 2));
        ctx->pc = 0x21365Cu;
        goto label_21365c;
    }
    ctx->pc = 0x213654u;
    SET_GPR_U32(ctx, 31, 0x21365Cu);
    ctx->pc = 0x213658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213654u;
            // 0x213658: 0x7e020680  sq          $v0, 0x680($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 1664), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D580u;
    if (runtime->hasFunction(0x20D580u)) {
        auto targetFn = runtime->lookupFunction(0x20D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21365Cu; }
        if (ctx->pc != 0x21365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAdjustScale__9CAquaFishFv_0x20d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21365Cu; }
        if (ctx->pc != 0x21365Cu) { return; }
    }
    ctx->pc = 0x21365Cu;
label_21365c:
    // 0x21365c: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x21365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213660:
    // 0x213660: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x213660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_213664:
    // 0x213664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213668:
    // 0x213668: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x213668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_21366c:
    // 0x21366c: 0x260406c0  addiu       $a0, $s0, 0x6C0
    ctx->pc = 0x21366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_213670:
    // 0x213670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213674:
    // 0x213674: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x213674u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_213678:
    // 0x213678: 0xac6000e0  sw          $zero, 0xE0($v1)
    ctx->pc = 0x213678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
label_21367c:
    // 0x21367c: 0xac6000e4  sw          $zero, 0xE4($v1)
    ctx->pc = 0x21367cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 0));
label_213680:
    // 0x213680: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x213680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_213684:
    // 0x213684: 0xc0834d4  jal         func_20D350
label_213688:
    if (ctx->pc == 0x213688u) {
        ctx->pc = 0x213688u;
            // 0x213688: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x21368Cu;
        goto label_21368c;
    }
    ctx->pc = 0x213684u;
    SET_GPR_U32(ctx, 31, 0x21368Cu);
    ctx->pc = 0x213688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213684u;
            // 0x213688: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21368Cu; }
        if (ctx->pc != 0x21368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21368Cu; }
        if (ctx->pc != 0x21368Cu) { return; }
    }
    ctx->pc = 0x21368Cu;
label_21368c:
    // 0x21368c: 0xc0834d4  jal         func_20D350
label_213690:
    if (ctx->pc == 0x213690u) {
        ctx->pc = 0x213690u;
            // 0x213690: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->pc = 0x213694u;
        goto label_213694;
    }
    ctx->pc = 0x21368Cu;
    SET_GPR_U32(ctx, 31, 0x213694u);
    ctx->pc = 0x213690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21368Cu;
            // 0x213690: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213694u; }
        if (ctx->pc != 0x213694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213694u; }
        if (ctx->pc != 0x213694u) { return; }
    }
    ctx->pc = 0x213694u;
label_213694:
    // 0x213694: 0xc0834d4  jal         func_20D350
label_213698:
    if (ctx->pc == 0x213698u) {
        ctx->pc = 0x213698u;
            // 0x213698: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->pc = 0x21369Cu;
        goto label_21369c;
    }
    ctx->pc = 0x213694u;
    SET_GPR_U32(ctx, 31, 0x21369Cu);
    ctx->pc = 0x213698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213694u;
            // 0x213698: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21369Cu; }
        if (ctx->pc != 0x21369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21369Cu; }
        if (ctx->pc != 0x21369Cu) { return; }
    }
    ctx->pc = 0x21369Cu;
label_21369c:
    // 0x21369c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x21369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_2136a0:
    // 0x2136a0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2136a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2136a4:
    // 0x2136a4: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x2136a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_2136a8:
    // 0x2136a8: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x2136a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2136ac:
    // 0x2136ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2136acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2136b0:
    // 0x2136b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2136b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2136b4:
    // 0x2136b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2136b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2136b8:
    // 0x2136b8: 0x8f8491d4  lw          $a0, -0x6E2C($gp)
    ctx->pc = 0x2136b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
label_2136bc:
    // 0x2136bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2136bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2136c0:
    // 0x2136c0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2136c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2136c4:
    // 0x2136c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2136c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2136c8:
    // 0x2136c8: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x2136c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_2136cc:
    // 0x2136cc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2136ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2136d0:
    // 0x2136d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2136d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2136d4:
    // 0x2136d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2136d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2136d8:
    // 0x2136d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2136d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2136dc:
    // 0x2136dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2136dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2136e0:
    // 0x2136e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2136e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2136e4:
    // 0x2136e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2136e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2136e8:
    // 0x2136e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2136e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2136ec:
    // 0x2136ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2136ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2136f0:
    // 0x2136f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2136f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2136f4:
    // 0x2136f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2136f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2136f8:
    // 0x2136f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2136f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2136fc:
    // 0x2136fc: 0x3e00008  jr          $ra
label_213700:
    if (ctx->pc == 0x213700u) {
        ctx->pc = 0x213700u;
            // 0x213700: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x213704u;
        goto label_fallthrough_0x2136fc;
    }
    ctx->pc = 0x2136FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2136FCu;
            // 0x213700: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2136fc:
    ctx->pc = 0x213704u;
}
