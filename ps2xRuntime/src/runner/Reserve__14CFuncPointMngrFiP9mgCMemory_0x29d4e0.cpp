#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Reserve__14CFuncPointMngrFiP9mgCMemory
// Address: 0x29d4e0 - 0x29d5c0
void Reserve__14CFuncPointMngrFiP9mgCMemory_0x29d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reserve__14CFuncPointMngrFiP9mgCMemory_0x29d4e0");
#endif

    switch (ctx->pc) {
        case 0x29d534u: goto label_29d534;
        case 0x29d54cu: goto label_29d54c;
        case 0x29d568u: goto label_29d568;
        case 0x29d580u: goto label_29d580;
        case 0x29d590u: goto label_29d590;
        default: break;
    }

    ctx->pc = 0x29d4e0u;

    // 0x29d4e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29d4e4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x29d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29d4e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29d4ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29d4f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d4f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d500: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29d500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d504: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x29d504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29d508: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29d50c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x29d510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D510u;
    {
        const bool branch_taken_0x29d510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D510u;
            // 0x29d514: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d510) {
            ctx->pc = 0x29D524u;
            goto label_29d524;
        }
    }
    ctx->pc = 0x29D518u;
    // 0x29d518: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29d518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x29d51c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29D51Cu;
    {
        const bool branch_taken_0x29d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D51Cu;
            // 0x29d520: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d51c) {
            ctx->pc = 0x29D528u;
            goto label_29d528;
        }
    }
    ctx->pc = 0x29D524u;
label_29d524:
    // 0x29d524: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29d524u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29d528:
    // 0x29d528: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x29d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x29d52c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x29D52Cu;
    SET_GPR_U32(ctx, 31, 0x29D534u);
    ctx->pc = 0x29D530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D52Cu;
            // 0x29d530: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D534u; }
        if (ctx->pc != 0x29D534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D534u; }
        if (ctx->pc != 0x29D534u) { return; }
    }
    ctx->pc = 0x29D534u;
label_29d534:
    // 0x29d534: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x29d534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29d538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d53c: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x29d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29d540: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29d540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29d544: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x29D544u;
    SET_GPR_U32(ctx, 31, 0x29D54Cu);
    ctx->pc = 0x29D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D544u;
            // 0x29d548: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D54Cu; }
        if (ctx->pc != 0x29D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D54Cu; }
        if (ctx->pc != 0x29D54Cu) { return; }
    }
    ctx->pc = 0x29D54Cu;
label_29d54c:
    // 0x29d54c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29d550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d554: 0x24a5d5c0  addiu       $a1, $a1, -0x2A40
    ctx->pc = 0x29d554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956480));
    // 0x29d558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d55c: 0x240701e0  addiu       $a3, $zero, 0x1E0
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x29d560: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x29D560u;
    SET_GPR_U32(ctx, 31, 0x29D568u);
    ctx->pc = 0x29D564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D560u;
            // 0x29d564: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D568u; }
        if (ctx->pc != 0x29D568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D568u; }
        if (ctx->pc != 0x29D568u) { return; }
    }
    ctx->pc = 0x29D568u;
label_29d568:
    // 0x29d568: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x29D568u;
    {
        const bool branch_taken_0x29d568 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D568u;
            // 0x29d56c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d568) {
            ctx->pc = 0x29D5A0u;
            goto label_29d5a0;
        }
    }
    ctx->pc = 0x29D570u;
    // 0x29d570: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x29d570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29d574: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x29D574u;
    {
        const bool branch_taken_0x29d574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D574u;
            // 0x29d578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d574) {
            ctx->pc = 0x29D5A0u;
            goto label_29d5a0;
        }
    }
    ctx->pc = 0x29D57Cu;
    // 0x29d57c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29d57cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d580:
    // 0x29d580: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x29d580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x29d584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d588: 0xc0a7514  jal         func_29D450
    ctx->pc = 0x29D588u;
    SET_GPR_U32(ctx, 31, 0x29D590u);
    ctx->pc = 0x29D58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D588u;
            // 0x29d58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D450u;
    if (runtime->hasFunction(0x29D450u)) {
        auto targetFn = runtime->lookupFunction(0x29D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D590u; }
        if (ctx->pc != 0x29D590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__14CFuncPointMngrFiP19CList_10CFuncPoint__0x29d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D590u; }
        if (ctx->pc != 0x29D590u) { return; }
    }
    ctx->pc = 0x29D590u;
label_29d590:
    // 0x29d590: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29d590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29d594: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x29d594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29d598: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D598u;
    {
        const bool branch_taken_0x29d598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D598u;
            // 0x29d59c: 0x269401e0  addiu       $s4, $s4, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d598) {
            ctx->pc = 0x29D580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d580;
        }
    }
    ctx->pc = 0x29D5A0u;
label_29d5a0:
    // 0x29d5a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29d5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29d5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D5B8u;
            // 0x29d5bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D5C0u;
}
