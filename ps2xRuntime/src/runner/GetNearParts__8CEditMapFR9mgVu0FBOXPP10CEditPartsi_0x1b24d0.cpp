#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNearParts__8CEditMapFR9mgVu0FBOXPP10CEditPartsi
// Address: 0x1b24d0 - 0x1b2664
void GetNearParts__8CEditMapFR9mgVu0FBOXPP10CEditPartsi_0x1b24d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNearParts__8CEditMapFR9mgVu0FBOXPP10CEditPartsi_0x1b24d0");
#endif

    switch (ctx->pc) {
        case 0x1b24d0u: goto label_1b24d0;
        case 0x1b24d4u: goto label_1b24d4;
        case 0x1b24d8u: goto label_1b24d8;
        case 0x1b24dcu: goto label_1b24dc;
        case 0x1b24e0u: goto label_1b24e0;
        case 0x1b24e4u: goto label_1b24e4;
        case 0x1b24e8u: goto label_1b24e8;
        case 0x1b24ecu: goto label_1b24ec;
        case 0x1b24f0u: goto label_1b24f0;
        case 0x1b24f4u: goto label_1b24f4;
        case 0x1b24f8u: goto label_1b24f8;
        case 0x1b24fcu: goto label_1b24fc;
        case 0x1b2500u: goto label_1b2500;
        case 0x1b2504u: goto label_1b2504;
        case 0x1b2508u: goto label_1b2508;
        case 0x1b250cu: goto label_1b250c;
        case 0x1b2510u: goto label_1b2510;
        case 0x1b2514u: goto label_1b2514;
        case 0x1b2518u: goto label_1b2518;
        case 0x1b251cu: goto label_1b251c;
        case 0x1b2520u: goto label_1b2520;
        case 0x1b2524u: goto label_1b2524;
        case 0x1b2528u: goto label_1b2528;
        case 0x1b252cu: goto label_1b252c;
        case 0x1b2530u: goto label_1b2530;
        case 0x1b2534u: goto label_1b2534;
        case 0x1b2538u: goto label_1b2538;
        case 0x1b253cu: goto label_1b253c;
        case 0x1b2540u: goto label_1b2540;
        case 0x1b2544u: goto label_1b2544;
        case 0x1b2548u: goto label_1b2548;
        case 0x1b254cu: goto label_1b254c;
        case 0x1b2550u: goto label_1b2550;
        case 0x1b2554u: goto label_1b2554;
        case 0x1b2558u: goto label_1b2558;
        case 0x1b255cu: goto label_1b255c;
        case 0x1b2560u: goto label_1b2560;
        case 0x1b2564u: goto label_1b2564;
        case 0x1b2568u: goto label_1b2568;
        case 0x1b256cu: goto label_1b256c;
        case 0x1b2570u: goto label_1b2570;
        case 0x1b2574u: goto label_1b2574;
        case 0x1b2578u: goto label_1b2578;
        case 0x1b257cu: goto label_1b257c;
        case 0x1b2580u: goto label_1b2580;
        case 0x1b2584u: goto label_1b2584;
        case 0x1b2588u: goto label_1b2588;
        case 0x1b258cu: goto label_1b258c;
        case 0x1b2590u: goto label_1b2590;
        case 0x1b2594u: goto label_1b2594;
        case 0x1b2598u: goto label_1b2598;
        case 0x1b259cu: goto label_1b259c;
        case 0x1b25a0u: goto label_1b25a0;
        case 0x1b25a4u: goto label_1b25a4;
        case 0x1b25a8u: goto label_1b25a8;
        case 0x1b25acu: goto label_1b25ac;
        case 0x1b25b0u: goto label_1b25b0;
        case 0x1b25b4u: goto label_1b25b4;
        case 0x1b25b8u: goto label_1b25b8;
        case 0x1b25bcu: goto label_1b25bc;
        case 0x1b25c0u: goto label_1b25c0;
        case 0x1b25c4u: goto label_1b25c4;
        case 0x1b25c8u: goto label_1b25c8;
        case 0x1b25ccu: goto label_1b25cc;
        case 0x1b25d0u: goto label_1b25d0;
        case 0x1b25d4u: goto label_1b25d4;
        case 0x1b25d8u: goto label_1b25d8;
        case 0x1b25dcu: goto label_1b25dc;
        case 0x1b25e0u: goto label_1b25e0;
        case 0x1b25e4u: goto label_1b25e4;
        case 0x1b25e8u: goto label_1b25e8;
        case 0x1b25ecu: goto label_1b25ec;
        case 0x1b25f0u: goto label_1b25f0;
        case 0x1b25f4u: goto label_1b25f4;
        case 0x1b25f8u: goto label_1b25f8;
        case 0x1b25fcu: goto label_1b25fc;
        case 0x1b2600u: goto label_1b2600;
        case 0x1b2604u: goto label_1b2604;
        case 0x1b2608u: goto label_1b2608;
        case 0x1b260cu: goto label_1b260c;
        case 0x1b2610u: goto label_1b2610;
        case 0x1b2614u: goto label_1b2614;
        case 0x1b2618u: goto label_1b2618;
        case 0x1b261cu: goto label_1b261c;
        case 0x1b2620u: goto label_1b2620;
        case 0x1b2624u: goto label_1b2624;
        case 0x1b2628u: goto label_1b2628;
        case 0x1b262cu: goto label_1b262c;
        case 0x1b2630u: goto label_1b2630;
        case 0x1b2634u: goto label_1b2634;
        case 0x1b2638u: goto label_1b2638;
        case 0x1b263cu: goto label_1b263c;
        case 0x1b2640u: goto label_1b2640;
        case 0x1b2644u: goto label_1b2644;
        case 0x1b2648u: goto label_1b2648;
        case 0x1b264cu: goto label_1b264c;
        case 0x1b2650u: goto label_1b2650;
        case 0x1b2654u: goto label_1b2654;
        case 0x1b2658u: goto label_1b2658;
        case 0x1b265cu: goto label_1b265c;
        case 0x1b2660u: goto label_1b2660;
        default: break;
    }

    ctx->pc = 0x1b24d0u;

label_1b24d0:
    // 0x1b24d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1b24d4:
    // 0x1b24d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b24d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b24d8:
    // 0x1b24d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b24d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b24dc:
    // 0x1b24dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b24dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b24e0:
    // 0x1b24e0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1b24e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b24e4:
    // 0x1b24e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b24e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b24e8:
    // 0x1b24e8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b24e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b24ec:
    // 0x1b24ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b24ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b24f0:
    // 0x1b24f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b24f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b24f4:
    // 0x1b24f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b24f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b24f8:
    // 0x1b24f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b24f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b24fc:
    // 0x1b24fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b24fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b2500:
    // 0x1b2500: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b2500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2504:
    // 0x1b2504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b2508:
    // 0x1b2508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b250c:
    // 0x1b250c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b2510:
    // 0x1b2510: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b2510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2514:
    // 0x1b2514: 0x8c920d44  lw          $s2, 0xD44($a0)
    ctx->pc = 0x1b2514u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
label_1b2518:
    // 0x1b2518: 0x10000041  b           . + 4 + (0x41 << 2)
label_1b251c:
    if (ctx->pc == 0x1B251Cu) {
        ctx->pc = 0x1B251Cu;
            // 0x1b251c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2520u;
        goto label_1b2520;
    }
    ctx->pc = 0x1B2518u;
    {
        const bool branch_taken_0x1b2518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2518u;
            // 0x1b251c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2518) {
            ctx->pc = 0x1B2620u;
            goto label_1b2620;
        }
    }
    ctx->pc = 0x1B2520u;
label_1b2520:
    // 0x1b2520: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_1b2524:
    // 0x1b2524: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b2524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1b2528:
    // 0x1b2528: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b252c:
    // 0x1b252c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1b2530:
    if (ctx->pc == 0x1B2530u) {
        ctx->pc = 0x1B2534u;
        goto label_1b2534;
    }
    ctx->pc = 0x1B252Cu;
    {
        const bool branch_taken_0x1b252c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b252c) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B2534u;
label_1b2534:
    // 0x1b2534: 0x8e430310  lw          $v1, 0x310($s2)
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
label_1b2538:
    // 0x1b2538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b253c:
    // 0x1b253c: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_1b2540:
    if (ctx->pc == 0x1B2540u) {
        ctx->pc = 0x1B2544u;
        goto label_1b2544;
    }
    ctx->pc = 0x1B253Cu;
    {
        const bool branch_taken_0x1b253c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b253c) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B2544u;
label_1b2544:
    // 0x1b2544: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_1b2548:
    // 0x1b2548: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1b254c:
    if (ctx->pc == 0x1B254Cu) {
        ctx->pc = 0x1B2550u;
        goto label_1b2550;
    }
    ctx->pc = 0x1B2548u;
    {
        const bool branch_taken_0x1b2548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2548) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B2550u;
label_1b2550:
    // 0x1b2550: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b2550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b2554:
    // 0x1b2554: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1b2558:
    // 0x1b2558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b255c:
    // 0x1b255c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b2560:
    // 0x1b2560: 0x320f809  jalr        $t9
label_1b2564:
    if (ctx->pc == 0x1B2564u) {
        ctx->pc = 0x1B2564u;
            // 0x1b2564: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1B2568u;
        goto label_1b2568;
    }
    ctx->pc = 0x1B2560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2568u);
        ctx->pc = 0x1B2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2560u;
            // 0x1b2564: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2568u; }
            if (ctx->pc != 0x1B2568u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2568u;
label_1b2568:
    // 0x1b2568: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b256c:
    // 0x1b256c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b2570:
    // 0x1b2570: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b2570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b2574:
    // 0x1b2574: 0x320f809  jalr        $t9
label_1b2578:
    if (ctx->pc == 0x1B2578u) {
        ctx->pc = 0x1B2578u;
            // 0x1b2578: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1B257Cu;
        goto label_1b257c;
    }
    ctx->pc = 0x1B2574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B257Cu);
        ctx->pc = 0x1B2578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2574u;
            // 0x1b2578: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B257Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B257Cu; }
            if (ctx->pc != 0x1B257Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B257Cu;
label_1b257c:
    // 0x1b257c: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x1b257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2580:
    // 0x1b2580: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b2584:
    // 0x1b2584: 0xc04c154  jal         func_130550
label_1b2588:
    if (ctx->pc == 0x1B2588u) {
        ctx->pc = 0x1B2588u;
            // 0x1b2588: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1B258Cu;
        goto label_1b258c;
    }
    ctx->pc = 0x1B2584u;
    SET_GPR_U32(ctx, 31, 0x1B258Cu);
    ctx->pc = 0x1B2588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2584u;
            // 0x1b2588: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B258Cu; }
        if (ctx->pc != 0x1B258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B258Cu; }
        if (ctx->pc != 0x1B258Cu) { return; }
    }
    ctx->pc = 0x1B258Cu;
label_1b258c:
    // 0x1b258c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1b2590:
    // 0x1b2590: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b2590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b2594:
    // 0x1b2594: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1b2594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b2598:
    // 0x1b2598: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b2598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b259c:
    // 0x1b259c: 0xc04c278  jal         func_1309E0
label_1b25a0:
    if (ctx->pc == 0x1B25A0u) {
        ctx->pc = 0x1B25A0u;
            // 0x1b25a0: 0x26680010  addiu       $t0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x1B25A4u;
        goto label_1b25a4;
    }
    ctx->pc = 0x1B259Cu;
    SET_GPR_U32(ctx, 31, 0x1B25A4u);
    ctx->pc = 0x1B25A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B259Cu;
            // 0x1b25a0: 0x26680010  addiu       $t0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25A4u; }
        if (ctx->pc != 0x1B25A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25A4u; }
        if (ctx->pc != 0x1B25A4u) { return; }
    }
    ctx->pc = 0x1B25A4u;
label_1b25a4:
    // 0x1b25a4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x1b25a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b25a8:
    // 0x1b25a8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b25a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b25ac:
    // 0x1b25ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b25acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b25b0:
    // 0x1b25b0: 0x0  nop
    ctx->pc = 0x1b25b0u;
    // NOP
label_1b25b4:
    // 0x1b25b4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b25b8:
    if (ctx->pc == 0x1B25B8u) {
        ctx->pc = 0x1B25BCu;
        goto label_1b25bc;
    }
    ctx->pc = 0x1B25B4u;
    {
        const bool branch_taken_0x1b25b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b25b4) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B25BCu;
label_1b25bc:
    // 0x1b25bc: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1b25bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b25c0:
    // 0x1b25c0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1b25c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b25c4:
    // 0x1b25c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b25c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b25c8:
    // 0x1b25c8: 0x0  nop
    ctx->pc = 0x1b25c8u;
    // NOP
label_1b25cc:
    // 0x1b25cc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_1b25d0:
    if (ctx->pc == 0x1B25D0u) {
        ctx->pc = 0x1B25D4u;
        goto label_1b25d4;
    }
    ctx->pc = 0x1B25CCu;
    {
        const bool branch_taken_0x1b25cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b25cc) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B25D4u;
label_1b25d4:
    // 0x1b25d4: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x1b25d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b25d8:
    // 0x1b25d8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b25d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b25dc:
    // 0x1b25dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b25dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b25e0:
    // 0x1b25e0: 0x0  nop
    ctx->pc = 0x1b25e0u;
    // NOP
label_1b25e4:
    // 0x1b25e4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1b25e8:
    if (ctx->pc == 0x1B25E8u) {
        ctx->pc = 0x1B25ECu;
        goto label_1b25ec;
    }
    ctx->pc = 0x1B25E4u;
    {
        const bool branch_taken_0x1b25e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b25e4) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B25ECu;
label_1b25ec:
    // 0x1b25ec: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x1b25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b25f0:
    // 0x1b25f0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b25f4:
    // 0x1b25f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b25f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b25f8:
    // 0x1b25f8: 0x0  nop
    ctx->pc = 0x1b25f8u;
    // NOP
label_1b25fc:
    // 0x1b25fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b2600:
    if (ctx->pc == 0x1B2600u) {
        ctx->pc = 0x1B2600u;
            // 0x1b2600: 0x23e082a  slt         $at, $s1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->pc = 0x1B2604u;
        goto label_1b2604;
    }
    ctx->pc = 0x1B25FCu;
    {
        const bool branch_taken_0x1b25fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25FCu;
            // 0x1b2600: 0x23e082a  slt         $at, $s1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25fc) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B2604u;
label_1b2604:
    // 0x1b2604: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1b2608:
    if (ctx->pc == 0x1B2608u) {
        ctx->pc = 0x1B2608u;
            // 0x1b2608: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->pc = 0x1B260Cu;
        goto label_1b260c;
    }
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2604u;
            // 0x1b2608: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2630u;
            goto label_1b2630;
        }
    }
    ctx->pc = 0x1B260Cu;
label_1b260c:
    // 0x1b260c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b260cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b2610:
    // 0x1b2610: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1b2610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_1b2614:
    // 0x1b2614: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1b2618:
    // 0x1b2618: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b261c:
    // 0x1b261c: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1b2620:
    // 0x1b2620: 0x8ec20d40  lw          $v0, 0xD40($s6)
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3392)));
label_1b2624:
    // 0x1b2624: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b2624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b2628:
    // 0x1b2628: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_1b262c:
    if (ctx->pc == 0x1B262Cu) {
        ctx->pc = 0x1B2630u;
        goto label_1b2630;
    }
    ctx->pc = 0x1B2628u;
    {
        const bool branch_taken_0x1b2628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2628) {
            ctx->pc = 0x1B2520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2520;
        }
    }
    ctx->pc = 0x1B2630u;
label_1b2630:
    // 0x1b2630: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b2630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2634:
    // 0x1b2634: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b2634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b2638:
    // 0x1b2638: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b2638u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b263c:
    // 0x1b263c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b263cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b2640:
    // 0x1b2640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b2640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b2644:
    // 0x1b2644: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b2644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b2648:
    // 0x1b2648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b2648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b264c:
    // 0x1b264c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b264cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2650:
    // 0x1b2650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2654:
    // 0x1b2654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2658:
    // 0x1b2658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b265c:
    // 0x1b265c: 0x3e00008  jr          $ra
label_1b2660:
    if (ctx->pc == 0x1B2660u) {
        ctx->pc = 0x1B2660u;
            // 0x1b2660: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1B2664u;
        goto label_fallthrough_0x1b265c;
    }
    ctx->pc = 0x1B265Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B265Cu;
            // 0x1b2660: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b265c:
    ctx->pc = 0x1B2664u;
}
