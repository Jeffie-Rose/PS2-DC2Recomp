#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateOptionForm__11CMenuOptionFv
// Address: 0x2c24a0 - 0x2c27e4
void UpdateOptionForm__11CMenuOptionFv_0x2c24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateOptionForm__11CMenuOptionFv_0x2c24a0");
#endif

    switch (ctx->pc) {
        case 0x2c24e4u: goto label_2c24e4;
        case 0x2c24fcu: goto label_2c24fc;
        case 0x2c2510u: goto label_2c2510;
        case 0x2c2528u: goto label_2c2528;
        case 0x2c253cu: goto label_2c253c;
        case 0x2c2554u: goto label_2c2554;
        case 0x2c2568u: goto label_2c2568;
        case 0x2c2580u: goto label_2c2580;
        case 0x2c2598u: goto label_2c2598;
        case 0x2c25b0u: goto label_2c25b0;
        case 0x2c25c4u: goto label_2c25c4;
        case 0x2c25ccu: goto label_2c25cc;
        case 0x2c25e8u: goto label_2c25e8;
        case 0x2c260cu: goto label_2c260c;
        case 0x2c2624u: goto label_2c2624;
        case 0x2c2638u: goto label_2c2638;
        case 0x2c2650u: goto label_2c2650;
        case 0x2c2664u: goto label_2c2664;
        case 0x2c2688u: goto label_2c2688;
        case 0x2c269cu: goto label_2c269c;
        case 0x2c26b4u: goto label_2c26b4;
        case 0x2c26c8u: goto label_2c26c8;
        case 0x2c26e0u: goto label_2c26e0;
        case 0x2c26f4u: goto label_2c26f4;
        case 0x2c270cu: goto label_2c270c;
        case 0x2c2720u: goto label_2c2720;
        case 0x2c2738u: goto label_2c2738;
        case 0x2c274cu: goto label_2c274c;
        case 0x2c2764u: goto label_2c2764;
        case 0x2c2780u: goto label_2c2780;
        case 0x2c2798u: goto label_2c2798;
        case 0x2c27acu: goto label_2c27ac;
        case 0x2c27c4u: goto label_2c27c4;
        default: break;
    }

    ctx->pc = 0x2c24a0u;

    // 0x2c24a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c24a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c24a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c24a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c24a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c24ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c24b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c24b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c24b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c24b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c24bc: 0x8f839ca8  lw          $v1, -0x6358($gp)
    ctx->pc = 0x2c24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
    // 0x2c24c0: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2C24C0u;
    {
        const bool branch_taken_0x2c24c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24C0u;
            // 0x2c24c4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24c0) {
            ctx->pc = 0x2C27C4u;
            goto label_2c27c4;
        }
    }
    ctx->pc = 0x2C24C8u;
    // 0x2c24c8: 0x269002f4  addiu       $s0, $s4, 0x2F4
    ctx->pc = 0x2c24c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 756));
    // 0x2c24cc: 0x120000bd  beqz        $s0, . + 4 + (0xBD << 2)
    ctx->pc = 0x2C24CCu;
    {
        const bool branch_taken_0x2c24cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24CCu;
            // 0x2c24d0: 0x26910164  addiu       $s1, $s4, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24cc) {
            ctx->pc = 0x2C27C4u;
            goto label_2c27c4;
        }
    }
    ctx->pc = 0x2C24D4u;
    // 0x2c24d4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C24D4u;
    {
        const bool branch_taken_0x2c24d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24D4u;
            // 0x2c24d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24d4) {
            ctx->pc = 0x2C24FCu;
            goto label_2c24fc;
        }
    }
    ctx->pc = 0x2C24DCu;
    // 0x2c24dc: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C24DCu;
    SET_GPR_U32(ctx, 31, 0x2C24E4u);
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24E4u; }
        if (ctx->pc != 0x2C24E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24E4u; }
        if (ctx->pc != 0x2C24E4u) { return; }
    }
    ctx->pc = 0x2C24E4u;
label_2c24e4:
    // 0x2c24e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c24e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c24ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c24f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c24f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c24f4: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C24F4u;
    SET_GPR_U32(ctx, 31, 0x2C24FCu);
    ctx->pc = 0x2C24F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24F4u;
            // 0x2c24f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24FCu; }
        if (ctx->pc != 0x2C24FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24FCu; }
        if (ctx->pc != 0x2C24FCu) { return; }
    }
    ctx->pc = 0x2C24FCu;
label_2c24fc:
    // 0x2c24fc: 0x26910170  addiu       $s1, $s4, 0x170
    ctx->pc = 0x2c24fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    // 0x2c2500: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2500u;
    {
        const bool branch_taken_0x2c2500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2500u;
            // 0x2c2504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2500) {
            ctx->pc = 0x2C2528u;
            goto label_2c2528;
        }
    }
    ctx->pc = 0x2C2508u;
    // 0x2c2508: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2508u;
    SET_GPR_U32(ctx, 31, 0x2C2510u);
    ctx->pc = 0x2C250Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2508u;
            // 0x2c250c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2510u; }
        if (ctx->pc != 0x2C2510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2510u; }
        if (ctx->pc != 0x2C2510u) { return; }
    }
    ctx->pc = 0x2C2510u;
label_2c2510:
    // 0x2c2510: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c2514: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2518: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c251c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2520: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2520u;
    SET_GPR_U32(ctx, 31, 0x2C2528u);
    ctx->pc = 0x2C2524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2520u;
            // 0x2c2524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2528u; }
        if (ctx->pc != 0x2C2528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2528u; }
        if (ctx->pc != 0x2C2528u) { return; }
    }
    ctx->pc = 0x2C2528u;
label_2c2528:
    // 0x2c2528: 0x2691017c  addiu       $s1, $s4, 0x17C
    ctx->pc = 0x2c2528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 380));
    // 0x2c252c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C252Cu;
    {
        const bool branch_taken_0x2c252c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C252Cu;
            // 0x2c2530: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c252c) {
            ctx->pc = 0x2C2554u;
            goto label_2c2554;
        }
    }
    ctx->pc = 0x2C2534u;
    // 0x2c2534: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2534u;
    SET_GPR_U32(ctx, 31, 0x2C253Cu);
    ctx->pc = 0x2C2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2534u;
            // 0x2c2538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C253Cu; }
        if (ctx->pc != 0x2C253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C253Cu; }
        if (ctx->pc != 0x2C253Cu) { return; }
    }
    ctx->pc = 0x2C253Cu;
label_2c253c:
    // 0x2c253c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c2540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2544: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c2548: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c254c: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C254Cu;
    SET_GPR_U32(ctx, 31, 0x2C2554u);
    ctx->pc = 0x2C2550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C254Cu;
            // 0x2c2550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2554u; }
        if (ctx->pc != 0x2C2554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2554u; }
        if (ctx->pc != 0x2C2554u) { return; }
    }
    ctx->pc = 0x2C2554u;
label_2c2554:
    // 0x2c2554: 0x26910188  addiu       $s1, $s4, 0x188
    ctx->pc = 0x2c2554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 392));
    // 0x2c2558: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2558u;
    {
        const bool branch_taken_0x2c2558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2558u;
            // 0x2c255c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2558) {
            ctx->pc = 0x2C2580u;
            goto label_2c2580;
        }
    }
    ctx->pc = 0x2C2560u;
    // 0x2c2560: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2560u;
    SET_GPR_U32(ctx, 31, 0x2C2568u);
    ctx->pc = 0x2C2564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2560u;
            // 0x2c2564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2568u; }
        if (ctx->pc != 0x2C2568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2568u; }
        if (ctx->pc != 0x2C2568u) { return; }
    }
    ctx->pc = 0x2C2568u;
label_2c2568:
    // 0x2c2568: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c256c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c256cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2570: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c2574: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2578: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2578u;
    SET_GPR_U32(ctx, 31, 0x2C2580u);
    ctx->pc = 0x2C257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2578u;
            // 0x2c257c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2580u; }
        if (ctx->pc != 0x2C2580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2580u; }
        if (ctx->pc != 0x2C2580u) { return; }
    }
    ctx->pc = 0x2C2580u;
label_2c2580:
    // 0x2c2580: 0x26910194  addiu       $s1, $s4, 0x194
    ctx->pc = 0x2c2580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 404));
    // 0x2c2584: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2584u;
    {
        const bool branch_taken_0x2c2584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2584u;
            // 0x2c2588: 0x269301a0  addiu       $s3, $s4, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2584) {
            ctx->pc = 0x2C25B4u;
            goto label_2c25b4;
        }
    }
    ctx->pc = 0x2C258Cu;
    // 0x2c258c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2590: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2590u;
    SET_GPR_U32(ctx, 31, 0x2C2598u);
    ctx->pc = 0x2C2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2590u;
            // 0x2c2594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2598u; }
        if (ctx->pc != 0x2C2598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2598u; }
        if (ctx->pc != 0x2C2598u) { return; }
    }
    ctx->pc = 0x2C2598u;
label_2c2598:
    // 0x2c2598: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c2598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c259c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c259cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c25a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c25a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c25a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c25a8: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C25A8u;
    SET_GPR_U32(ctx, 31, 0x2C25B0u);
    ctx->pc = 0x2C25ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25A8u;
            // 0x2c25ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25B0u; }
        if (ctx->pc != 0x2C25B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25B0u; }
        if (ctx->pc != 0x2C25B0u) { return; }
    }
    ctx->pc = 0x2C25B0u;
label_2c25b0:
    // 0x2c25b0: 0x269301a0  addiu       $s3, $s4, 0x1A0
    ctx->pc = 0x2c25b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
label_2c25b4:
    // 0x2c25b4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C25B4u;
    {
        const bool branch_taken_0x2c25b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25B4u;
            // 0x2c25b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25b4) {
            ctx->pc = 0x2C25F8u;
            goto label_2c25f8;
        }
    }
    ctx->pc = 0x2C25BCu;
    // 0x2c25bc: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C25BCu;
    SET_GPR_U32(ctx, 31, 0x2C25C4u);
    ctx->pc = 0x2C25C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25BCu;
            // 0x2c25c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25C4u; }
        if (ctx->pc != 0x2C25C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25C4u; }
        if (ctx->pc != 0x2C25C4u) { return; }
    }
    ctx->pc = 0x2C25C4u;
label_2c25c4:
    // 0x2c25c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c25c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c25c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c25cc:
    // 0x2c25cc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2c25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c25d0: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C25D0u;
    {
        const bool branch_taken_0x2c25d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2c25d0) {
            ctx->pc = 0x2C25E8u;
            goto label_2c25e8;
        }
    }
    ctx->pc = 0x2C25D8u;
    // 0x2c25d8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2c25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2c25dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c25dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c25e0: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C25E0u;
    SET_GPR_U32(ctx, 31, 0x2C25E8u);
    ctx->pc = 0x2C25E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25E0u;
            // 0x2c25e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25E8u; }
        if (ctx->pc != 0x2C25E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25E8u; }
        if (ctx->pc != 0x2C25E8u) { return; }
    }
    ctx->pc = 0x2C25E8u;
label_2c25e8:
    // 0x2c25e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c25e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c25ec: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x2c25ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c25f0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C25F0u;
    {
        const bool branch_taken_0x2c25f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25F0u;
            // 0x2c25f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25f0) {
            ctx->pc = 0x2C25CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c25cc;
        }
    }
    ctx->pc = 0x2C25F8u;
label_2c25f8:
    // 0x2c25f8: 0x269101ac  addiu       $s1, $s4, 0x1AC
    ctx->pc = 0x2c25f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 428));
    // 0x2c25fc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C25FCu;
    {
        const bool branch_taken_0x2c25fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25FCu;
            // 0x2c2600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25fc) {
            ctx->pc = 0x2C2624u;
            goto label_2c2624;
        }
    }
    ctx->pc = 0x2C2604u;
    // 0x2c2604: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2604u;
    SET_GPR_U32(ctx, 31, 0x2C260Cu);
    ctx->pc = 0x2C2608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2604u;
            // 0x2c2608: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C260Cu; }
        if (ctx->pc != 0x2C260Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C260Cu; }
        if (ctx->pc != 0x2C260Cu) { return; }
    }
    ctx->pc = 0x2C260Cu;
label_2c260c:
    // 0x2c260c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2c260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c2610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2614: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c2618: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c261c: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C261Cu;
    SET_GPR_U32(ctx, 31, 0x2C2624u);
    ctx->pc = 0x2C2620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C261Cu;
            // 0x2c2620: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2624u; }
        if (ctx->pc != 0x2C2624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2624u; }
        if (ctx->pc != 0x2C2624u) { return; }
    }
    ctx->pc = 0x2C2624u;
label_2c2624:
    // 0x2c2624: 0x269101b8  addiu       $s1, $s4, 0x1B8
    ctx->pc = 0x2c2624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 440));
    // 0x2c2628: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2628u;
    {
        const bool branch_taken_0x2c2628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2628u;
            // 0x2c262c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2628) {
            ctx->pc = 0x2C2650u;
            goto label_2c2650;
        }
    }
    ctx->pc = 0x2C2630u;
    // 0x2c2630: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2630u;
    SET_GPR_U32(ctx, 31, 0x2C2638u);
    ctx->pc = 0x2C2634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2630u;
            // 0x2c2634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2638u; }
        if (ctx->pc != 0x2C2638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2638u; }
        if (ctx->pc != 0x2C2638u) { return; }
    }
    ctx->pc = 0x2C2638u;
label_2c2638:
    // 0x2c2638: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c263c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c263cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2640: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c2644: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2648: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2648u;
    SET_GPR_U32(ctx, 31, 0x2C2650u);
    ctx->pc = 0x2C264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2648u;
            // 0x2c264c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2650u; }
        if (ctx->pc != 0x2C2650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2650u; }
        if (ctx->pc != 0x2C2650u) { return; }
    }
    ctx->pc = 0x2C2650u;
label_2c2650:
    // 0x2c2650: 0x269101c4  addiu       $s1, $s4, 0x1C4
    ctx->pc = 0x2c2650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 452));
    // 0x2c2654: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2654u;
    {
        const bool branch_taken_0x2c2654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2654u;
            // 0x2c2658: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2654) {
            ctx->pc = 0x2C2688u;
            goto label_2c2688;
        }
    }
    ctx->pc = 0x2C265Cu;
    // 0x2c265c: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C265Cu;
    SET_GPR_U32(ctx, 31, 0x2C2664u);
    ctx->pc = 0x2C2660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C265Cu;
            // 0x2c2660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2664u; }
        if (ctx->pc != 0x2C2664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2664u; }
        if (ctx->pc != 0x2C2664u) { return; }
    }
    ctx->pc = 0x2C2664u;
label_2c2664:
    // 0x2c2664: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2c2664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c2668: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2668u;
    {
        const bool branch_taken_0x2c2668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2668) {
            ctx->pc = 0x2C2688u;
            goto label_2c2688;
        }
    }
    ctx->pc = 0x2C2670u;
    // 0x2c2670: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2c2670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c2674: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2678: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c267c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c267cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2680: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2680u;
    SET_GPR_U32(ctx, 31, 0x2C2688u);
    ctx->pc = 0x2C2684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2680u;
            // 0x2c2684: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2688u; }
        if (ctx->pc != 0x2C2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2688u; }
        if (ctx->pc != 0x2C2688u) { return; }
    }
    ctx->pc = 0x2C2688u;
label_2c2688:
    // 0x2c2688: 0x269101d0  addiu       $s1, $s4, 0x1D0
    ctx->pc = 0x2c2688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x2c268c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C268Cu;
    {
        const bool branch_taken_0x2c268c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C268Cu;
            // 0x2c2690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c268c) {
            ctx->pc = 0x2C26B4u;
            goto label_2c26b4;
        }
    }
    ctx->pc = 0x2C2694u;
    // 0x2c2694: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2694u;
    SET_GPR_U32(ctx, 31, 0x2C269Cu);
    ctx->pc = 0x2C2698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2694u;
            // 0x2c2698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C269Cu; }
        if (ctx->pc != 0x2C269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C269Cu; }
        if (ctx->pc != 0x2C269Cu) { return; }
    }
    ctx->pc = 0x2C269Cu;
label_2c269c:
    // 0x2c269c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2c269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c26a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c26a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c26a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c26ac: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C26ACu;
    SET_GPR_U32(ctx, 31, 0x2C26B4u);
    ctx->pc = 0x2C26B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26ACu;
            // 0x2c26b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26B4u; }
        if (ctx->pc != 0x2C26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26B4u; }
        if (ctx->pc != 0x2C26B4u) { return; }
    }
    ctx->pc = 0x2C26B4u;
label_2c26b4:
    // 0x2c26b4: 0x269101dc  addiu       $s1, $s4, 0x1DC
    ctx->pc = 0x2c26b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
    // 0x2c26b8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C26B8u;
    {
        const bool branch_taken_0x2c26b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26B8u;
            // 0x2c26bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26b8) {
            ctx->pc = 0x2C26E0u;
            goto label_2c26e0;
        }
    }
    ctx->pc = 0x2C26C0u;
    // 0x2c26c0: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C26C0u;
    SET_GPR_U32(ctx, 31, 0x2C26C8u);
    ctx->pc = 0x2C26C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26C0u;
            // 0x2c26c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26C8u; }
        if (ctx->pc != 0x2C26C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26C8u; }
        if (ctx->pc != 0x2C26C8u) { return; }
    }
    ctx->pc = 0x2C26C8u;
label_2c26c8:
    // 0x2c26c8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2c26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c26cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c26d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c26d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c26d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c26d8: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C26D8u;
    SET_GPR_U32(ctx, 31, 0x2C26E0u);
    ctx->pc = 0x2C26DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26D8u;
            // 0x2c26dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26E0u; }
        if (ctx->pc != 0x2C26E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26E0u; }
        if (ctx->pc != 0x2C26E0u) { return; }
    }
    ctx->pc = 0x2C26E0u;
label_2c26e0:
    // 0x2c26e0: 0x269101e8  addiu       $s1, $s4, 0x1E8
    ctx->pc = 0x2c26e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 488));
    // 0x2c26e4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C26E4u;
    {
        const bool branch_taken_0x2c26e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26E4u;
            // 0x2c26e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26e4) {
            ctx->pc = 0x2C270Cu;
            goto label_2c270c;
        }
    }
    ctx->pc = 0x2C26ECu;
    // 0x2c26ec: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C26ECu;
    SET_GPR_U32(ctx, 31, 0x2C26F4u);
    ctx->pc = 0x2C26F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26ECu;
            // 0x2c26f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26F4u; }
        if (ctx->pc != 0x2C26F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26F4u; }
        if (ctx->pc != 0x2C26F4u) { return; }
    }
    ctx->pc = 0x2C26F4u;
label_2c26f4:
    // 0x2c26f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2c26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c26f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c26fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c2700: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2704: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2704u;
    SET_GPR_U32(ctx, 31, 0x2C270Cu);
    ctx->pc = 0x2C2708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2704u;
            // 0x2c2708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C270Cu; }
        if (ctx->pc != 0x2C270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C270Cu; }
        if (ctx->pc != 0x2C270Cu) { return; }
    }
    ctx->pc = 0x2C270Cu;
label_2c270c:
    // 0x2c270c: 0x269101f4  addiu       $s1, $s4, 0x1F4
    ctx->pc = 0x2c270cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 500));
    // 0x2c2710: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2710u;
    {
        const bool branch_taken_0x2c2710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2710u;
            // 0x2c2714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2710) {
            ctx->pc = 0x2C2738u;
            goto label_2c2738;
        }
    }
    ctx->pc = 0x2C2718u;
    // 0x2c2718: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2718u;
    SET_GPR_U32(ctx, 31, 0x2C2720u);
    ctx->pc = 0x2C271Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2718u;
            // 0x2c271c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2720u; }
        if (ctx->pc != 0x2C2720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2720u; }
        if (ctx->pc != 0x2C2720u) { return; }
    }
    ctx->pc = 0x2C2720u;
label_2c2720:
    // 0x2c2720: 0x82020034  lb          $v0, 0x34($s0)
    ctx->pc = 0x2c2720u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c2724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2728: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c272c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2730: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2730u;
    SET_GPR_U32(ctx, 31, 0x2C2738u);
    ctx->pc = 0x2C2734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2730u;
            // 0x2c2734: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2738u; }
        if (ctx->pc != 0x2C2738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2738u; }
        if (ctx->pc != 0x2C2738u) { return; }
    }
    ctx->pc = 0x2C2738u;
label_2c2738:
    // 0x2c2738: 0x26910200  addiu       $s1, $s4, 0x200
    ctx->pc = 0x2c2738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x2c273c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C273Cu;
    {
        const bool branch_taken_0x2c273c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C273Cu;
            // 0x2c2740: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c273c) {
            ctx->pc = 0x2C2764u;
            goto label_2c2764;
        }
    }
    ctx->pc = 0x2C2744u;
    // 0x2c2744: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2744u;
    SET_GPR_U32(ctx, 31, 0x2C274Cu);
    ctx->pc = 0x2C2748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2744u;
            // 0x2c2748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C274Cu; }
        if (ctx->pc != 0x2C274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C274Cu; }
        if (ctx->pc != 0x2C274Cu) { return; }
    }
    ctx->pc = 0x2C274Cu;
label_2c274c:
    // 0x2c274c: 0x82020035  lb          $v0, 0x35($s0)
    ctx->pc = 0x2c274cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x2c2750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2754: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c2758: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c275c: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C275Cu;
    SET_GPR_U32(ctx, 31, 0x2C2764u);
    ctx->pc = 0x2C2760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C275Cu;
            // 0x2c2760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2764u; }
        if (ctx->pc != 0x2C2764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2764u; }
        if (ctx->pc != 0x2C2764u) { return; }
    }
    ctx->pc = 0x2C2764u;
label_2c2764:
    // 0x2c2764: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2c2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c2768: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2768u;
    {
        const bool branch_taken_0x2c2768 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C276Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2768u;
            // 0x2c276c: 0x2691020c  addiu       $s1, $s4, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2768) {
            ctx->pc = 0x2C27C4u;
            goto label_2c27c4;
        }
    }
    ctx->pc = 0x2C2770u;
    // 0x2c2770: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2770u;
    {
        const bool branch_taken_0x2c2770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2770u;
            // 0x2c2774: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2770) {
            ctx->pc = 0x2C2798u;
            goto label_2c2798;
        }
    }
    ctx->pc = 0x2C2778u;
    // 0x2c2778: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C2778u;
    SET_GPR_U32(ctx, 31, 0x2C2780u);
    ctx->pc = 0x2C277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2778u;
            // 0x2c277c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2780u; }
        if (ctx->pc != 0x2C2780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2780u; }
        if (ctx->pc != 0x2C2780u) { return; }
    }
    ctx->pc = 0x2C2780u;
label_2c2780:
    // 0x2c2780: 0x82020036  lb          $v0, 0x36($s0)
    ctx->pc = 0x2c2780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2c2784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2788: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c2788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c278c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c278cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2790: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C2790u;
    SET_GPR_U32(ctx, 31, 0x2C2798u);
    ctx->pc = 0x2C2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2790u;
            // 0x2c2794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2798u; }
        if (ctx->pc != 0x2C2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2798u; }
        if (ctx->pc != 0x2C2798u) { return; }
    }
    ctx->pc = 0x2C2798u;
label_2c2798:
    // 0x2c2798: 0x26910218  addiu       $s1, $s4, 0x218
    ctx->pc = 0x2c2798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 536));
    // 0x2c279c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C279Cu;
    {
        const bool branch_taken_0x2c279c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C279Cu;
            // 0x2c27a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c279c) {
            ctx->pc = 0x2C27C4u;
            goto label_2c27c4;
        }
    }
    ctx->pc = 0x2C27A4u;
    // 0x2c27a4: 0xc0b090c  jal         func_2C2430
    ctx->pc = 0x2C27A4u;
    SET_GPR_U32(ctx, 31, 0x2C27ACu);
    ctx->pc = 0x2C27A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C27A4u;
            // 0x2c27a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    if (runtime->hasFunction(0x2C2430u)) {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27ACu; }
        if (ctx->pc != 0x2C27ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27ACu; }
        if (ctx->pc != 0x2C27ACu) { return; }
    }
    ctx->pc = 0x2C27ACu;
label_2c27ac:
    // 0x2c27ac: 0x82020037  lb          $v0, 0x37($s0)
    ctx->pc = 0x2c27acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
    // 0x2c27b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c27b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c27b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c27b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c27bc: 0xc0b0920  jal         func_2C2480
    ctx->pc = 0x2C27BCu;
    SET_GPR_U32(ctx, 31, 0x2C27C4u);
    ctx->pc = 0x2C27C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C27BCu;
            // 0x2c27c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2480u;
    if (runtime->hasFunction(0x2C2480u)) {
        auto targetFn = runtime->lookupFunction(0x2C2480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27C4u; }
        if (ctx->pc != 0x2C27C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27C4u; }
        if (ctx->pc != 0x2C27C4u) { return; }
    }
    ctx->pc = 0x2C27C4u;
label_2c27c4:
    // 0x2c27c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c27c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c27c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c27c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c27cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c27ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c27d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c27d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c27d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c27d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c27d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c27d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c27dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C27DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C27E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C27DCu;
            // 0x2c27e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C27E4u;
}
