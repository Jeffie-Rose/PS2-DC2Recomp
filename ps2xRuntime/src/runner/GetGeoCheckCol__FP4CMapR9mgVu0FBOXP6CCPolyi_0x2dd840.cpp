#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGeoCheckCol__FP4CMapR9mgVu0FBOXP6CCPolyi
// Address: 0x2dd840 - 0x2dd8ec
void GetGeoCheckCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGeoCheckCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd840");
#endif

    switch (ctx->pc) {
        case 0x2dd840u: goto label_2dd840;
        case 0x2dd844u: goto label_2dd844;
        case 0x2dd848u: goto label_2dd848;
        case 0x2dd84cu: goto label_2dd84c;
        case 0x2dd850u: goto label_2dd850;
        case 0x2dd854u: goto label_2dd854;
        case 0x2dd858u: goto label_2dd858;
        case 0x2dd85cu: goto label_2dd85c;
        case 0x2dd860u: goto label_2dd860;
        case 0x2dd864u: goto label_2dd864;
        case 0x2dd868u: goto label_2dd868;
        case 0x2dd86cu: goto label_2dd86c;
        case 0x2dd870u: goto label_2dd870;
        case 0x2dd874u: goto label_2dd874;
        case 0x2dd878u: goto label_2dd878;
        case 0x2dd87cu: goto label_2dd87c;
        case 0x2dd880u: goto label_2dd880;
        case 0x2dd884u: goto label_2dd884;
        case 0x2dd888u: goto label_2dd888;
        case 0x2dd88cu: goto label_2dd88c;
        case 0x2dd890u: goto label_2dd890;
        case 0x2dd894u: goto label_2dd894;
        case 0x2dd898u: goto label_2dd898;
        case 0x2dd89cu: goto label_2dd89c;
        case 0x2dd8a0u: goto label_2dd8a0;
        case 0x2dd8a4u: goto label_2dd8a4;
        case 0x2dd8a8u: goto label_2dd8a8;
        case 0x2dd8acu: goto label_2dd8ac;
        case 0x2dd8b0u: goto label_2dd8b0;
        case 0x2dd8b4u: goto label_2dd8b4;
        case 0x2dd8b8u: goto label_2dd8b8;
        case 0x2dd8bcu: goto label_2dd8bc;
        case 0x2dd8c0u: goto label_2dd8c0;
        case 0x2dd8c4u: goto label_2dd8c4;
        case 0x2dd8c8u: goto label_2dd8c8;
        case 0x2dd8ccu: goto label_2dd8cc;
        case 0x2dd8d0u: goto label_2dd8d0;
        case 0x2dd8d4u: goto label_2dd8d4;
        case 0x2dd8d8u: goto label_2dd8d8;
        case 0x2dd8dcu: goto label_2dd8dc;
        case 0x2dd8e0u: goto label_2dd8e0;
        case 0x2dd8e4u: goto label_2dd8e4;
        case 0x2dd8e8u: goto label_2dd8e8;
        default: break;
    }

    ctx->pc = 0x2dd840u;

label_2dd840:
    // 0x2dd840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2dd844:
    // 0x2dd844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dd844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2dd848:
    // 0x2dd848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dd84c:
    // 0x2dd84c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dd850:
    // 0x2dd850: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dd850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dd854:
    // 0x2dd854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dd858:
    // 0x2dd858: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dd858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dd85c:
    // 0x2dd85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd860:
    // 0x2dd860: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2dd864:
    if (ctx->pc == 0x2DD864u) {
        ctx->pc = 0x2DD864u;
            // 0x2dd864: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD868u;
        goto label_2dd868;
    }
    ctx->pc = 0x2DD860u;
    {
        const bool branch_taken_0x2dd860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD860u;
            // 0x2dd864: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd860) {
            ctx->pc = 0x2DD870u;
            goto label_2dd870;
        }
    }
    ctx->pc = 0x2DD868u;
label_2dd868:
    // 0x2dd868: 0x10000019  b           . + 4 + (0x19 << 2)
label_2dd86c:
    if (ctx->pc == 0x2DD86Cu) {
        ctx->pc = 0x2DD86Cu;
            // 0x2dd86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD870u;
        goto label_2dd870;
    }
    ctx->pc = 0x2DD868u;
    {
        const bool branch_taken_0x2dd868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD868u;
            // 0x2dd86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd868) {
            ctx->pc = 0x2DD8D0u;
            goto label_2dd8d0;
        }
    }
    ctx->pc = 0x2DD870u;
label_2dd870:
    // 0x2dd870: 0xc0b7604  jal         func_2DD810
label_2dd874:
    if (ctx->pc == 0x2DD874u) {
        ctx->pc = 0x2DD878u;
        goto label_2dd878;
    }
    ctx->pc = 0x2DD870u;
    SET_GPR_U32(ctx, 31, 0x2DD878u);
    ctx->pc = 0x2DD810u;
    if (runtime->hasFunction(0x2DD810u)) {
        auto targetFn = runtime->lookupFunction(0x2DD810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD878u; }
        if (ctx->pc != 0x2DD878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckPts__FP4CMap_0x2dd810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD878u; }
        if (ctx->pc != 0x2DD878u) { return; }
    }
    ctx->pc = 0x2DD878u;
label_2dd878:
    // 0x2dd878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd87c:
    // 0x2dd87c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2dd880:
    if (ctx->pc == 0x2DD880u) {
        ctx->pc = 0x2DD880u;
            // 0x2dd880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD884u;
        goto label_2dd884;
    }
    ctx->pc = 0x2DD87Cu;
    {
        const bool branch_taken_0x2dd87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD87Cu;
            // 0x2dd880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd87c) {
            ctx->pc = 0x2DD88Cu;
            goto label_2dd88c;
        }
    }
    ctx->pc = 0x2DD884u;
label_2dd884:
    // 0x2dd884: 0x10000013  b           . + 4 + (0x13 << 2)
label_2dd888:
    if (ctx->pc == 0x2DD888u) {
        ctx->pc = 0x2DD888u;
            // 0x2dd888: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DD88Cu;
        goto label_2dd88c;
    }
    ctx->pc = 0x2DD884u;
    {
        const bool branch_taken_0x2dd884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD884u;
            // 0x2dd888: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd884) {
            ctx->pc = 0x2DD8D4u;
            goto label_2dd8d4;
        }
    }
    ctx->pc = 0x2DD88Cu;
label_2dd88c:
    // 0x2dd88c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd890:
    // 0x2dd890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd894:
    // 0x2dd894: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2dd894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2dd898:
    // 0x2dd898: 0x320f809  jalr        $t9
label_2dd89c:
    if (ctx->pc == 0x2DD89Cu) {
        ctx->pc = 0x2DD89Cu;
            // 0x2dd89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DD8A0u;
        goto label_2dd8a0;
    }
    ctx->pc = 0x2DD898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD8A0u);
        ctx->pc = 0x2DD89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD898u;
            // 0x2dd89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD8A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8A0u; }
            if (ctx->pc != 0x2DD8A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD8A0u;
label_2dd8a0:
    // 0x2dd8a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dd8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8a4:
    // 0x2dd8a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dd8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8a8:
    // 0x2dd8a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dd8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8ac:
    // 0x2dd8ac: 0xc0599ac  jal         func_1666B0
label_2dd8b0:
    if (ctx->pc == 0x2DD8B0u) {
        ctx->pc = 0x2DD8B0u;
            // 0x2dd8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8B4u;
        goto label_2dd8b4;
    }
    ctx->pc = 0x2DD8ACu;
    SET_GPR_U32(ctx, 31, 0x2DD8B4u);
    ctx->pc = 0x2DD8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8ACu;
            // 0x2dd8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1666B0u;
    if (runtime->hasFunction(0x1666B0u)) {
        auto targetFn = runtime->lookupFunction(0x1666B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8B4u; }
        if (ctx->pc != 0x2DD8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__9CMapPartsFP6CCPolyR9mgVu0FBOXi_0x1666b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8B4u; }
        if (ctx->pc != 0x2DD8B4u) { return; }
    }
    ctx->pc = 0x2DD8B4u;
label_2dd8b4:
    // 0x2dd8b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd8b8:
    // 0x2dd8b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8bc:
    // 0x2dd8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8c0:
    // 0x2dd8c0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2dd8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2dd8c4:
    // 0x2dd8c4: 0x320f809  jalr        $t9
label_2dd8c8:
    if (ctx->pc == 0x2DD8C8u) {
        ctx->pc = 0x2DD8C8u;
            // 0x2dd8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8CCu;
        goto label_2dd8cc;
    }
    ctx->pc = 0x2DD8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD8CCu);
        ctx->pc = 0x2DD8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8C4u;
            // 0x2dd8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD8CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8CCu; }
            if (ctx->pc != 0x2DD8CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DD8CCu;
label_2dd8cc:
    // 0x2dd8cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8d0:
    // 0x2dd8d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dd8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2dd8d4:
    // 0x2dd8d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd8d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd8d8:
    // 0x2dd8d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd8dc:
    // 0x2dd8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd8e0:
    // 0x2dd8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd8e4:
    // 0x2dd8e4: 0x3e00008  jr          $ra
label_2dd8e8:
    if (ctx->pc == 0x2DD8E8u) {
        ctx->pc = 0x2DD8E8u;
            // 0x2dd8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DD8ECu;
        goto label_fallthrough_0x2dd8e4;
    }
    ctx->pc = 0x2DD8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8E4u;
            // 0x2dd8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dd8e4:
    ctx->pc = 0x2DD8ECu;
}
