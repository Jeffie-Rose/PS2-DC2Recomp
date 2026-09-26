#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharaMotion__FP11CCharacter2ii
// Address: 0x2ca7f0 - 0x2ca880
void SetCharaMotion__FP11CCharacter2ii_0x2ca7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharaMotion__FP11CCharacter2ii_0x2ca7f0");
#endif

    switch (ctx->pc) {
        case 0x2ca7f0u: goto label_2ca7f0;
        case 0x2ca7f4u: goto label_2ca7f4;
        case 0x2ca7f8u: goto label_2ca7f8;
        case 0x2ca7fcu: goto label_2ca7fc;
        case 0x2ca800u: goto label_2ca800;
        case 0x2ca804u: goto label_2ca804;
        case 0x2ca808u: goto label_2ca808;
        case 0x2ca80cu: goto label_2ca80c;
        case 0x2ca810u: goto label_2ca810;
        case 0x2ca814u: goto label_2ca814;
        case 0x2ca818u: goto label_2ca818;
        case 0x2ca81cu: goto label_2ca81c;
        case 0x2ca820u: goto label_2ca820;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca828u: goto label_2ca828;
        case 0x2ca82cu: goto label_2ca82c;
        case 0x2ca830u: goto label_2ca830;
        case 0x2ca834u: goto label_2ca834;
        case 0x2ca838u: goto label_2ca838;
        case 0x2ca83cu: goto label_2ca83c;
        case 0x2ca840u: goto label_2ca840;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca848u: goto label_2ca848;
        case 0x2ca84cu: goto label_2ca84c;
        case 0x2ca850u: goto label_2ca850;
        case 0x2ca854u: goto label_2ca854;
        case 0x2ca858u: goto label_2ca858;
        case 0x2ca85cu: goto label_2ca85c;
        case 0x2ca860u: goto label_2ca860;
        case 0x2ca864u: goto label_2ca864;
        case 0x2ca868u: goto label_2ca868;
        case 0x2ca86cu: goto label_2ca86c;
        case 0x2ca870u: goto label_2ca870;
        case 0x2ca874u: goto label_2ca874;
        case 0x2ca878u: goto label_2ca878;
        case 0x2ca87cu: goto label_2ca87c;
        default: break;
    }

    ctx->pc = 0x2ca7f0u;

label_2ca7f0:
    // 0x2ca7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ca7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ca7f4:
    // 0x2ca7f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ca7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ca7f8:
    // 0x2ca7f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ca7fc:
    // 0x2ca7fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ca7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca800:
    // 0x2ca800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca804:
    // 0x2ca804: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ca804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ca808:
    // 0x2ca808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ca80c:
    // 0x2ca80c: 0xc0b29b4  jal         func_2CA6D0
label_2ca810:
    if (ctx->pc == 0x2CA810u) {
        ctx->pc = 0x2CA810u;
            // 0x2ca810: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA814u;
        goto label_2ca814;
    }
    ctx->pc = 0x2CA80Cu;
    SET_GPR_U32(ctx, 31, 0x2CA814u);
    ctx->pc = 0x2CA810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA80Cu;
            // 0x2ca810: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D0u;
    if (runtime->hasFunction(0x2CA6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA814u; }
        if (ctx->pc != 0x2CA814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionName__Fi_0x2ca6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA814u; }
        if (ctx->pc != 0x2CA814u) { return; }
    }
    ctx->pc = 0x2CA814u;
label_2ca814:
    // 0x2ca814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca818:
    // 0x2ca818: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2ca81c:
    if (ctx->pc == 0x2CA81Cu) {
        ctx->pc = 0x2CA81Cu;
            // 0x2ca81c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2CA820u;
        goto label_2ca820;
    }
    ctx->pc = 0x2CA818u;
    {
        const bool branch_taken_0x2ca818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA818u;
            // 0x2ca81c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca818) {
            ctx->pc = 0x2CA868u;
            goto label_2ca868;
        }
    }
    ctx->pc = 0x2CA820u;
label_2ca820:
    // 0x2ca820: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_2ca824:
    if (ctx->pc == 0x2CA824u) {
        ctx->pc = 0x2CA824u;
            // 0x2ca824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA828u;
        goto label_2ca828;
    }
    ctx->pc = 0x2CA820u;
    {
        const bool branch_taken_0x2ca820 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CA824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA820u;
            // 0x2ca824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca820) {
            ctx->pc = 0x2CA848u;
            goto label_2ca848;
        }
    }
    ctx->pc = 0x2CA828u;
label_2ca828:
    // 0x2ca828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca82c:
    // 0x2ca82c: 0xc05d2b4  jal         func_174AD0
label_2ca830:
    if (ctx->pc == 0x2CA830u) {
        ctx->pc = 0x2CA830u;
            // 0x2ca830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA834u;
        goto label_2ca834;
    }
    ctx->pc = 0x2CA82Cu;
    SET_GPR_U32(ctx, 31, 0x2CA834u);
    ctx->pc = 0x2CA830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA82Cu;
            // 0x2ca830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA834u; }
        if (ctx->pc != 0x2CA834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA834u; }
        if (ctx->pc != 0x2CA834u) { return; }
    }
    ctx->pc = 0x2CA834u;
label_2ca834:
    // 0x2ca834: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ca838:
    if (ctx->pc == 0x2CA838u) {
        ctx->pc = 0x2CA838u;
            // 0x2ca838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA83Cu;
        goto label_2ca83c;
    }
    ctx->pc = 0x2CA834u;
    {
        const bool branch_taken_0x2ca834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA834u;
            // 0x2ca838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca834) {
            ctx->pc = 0x2CA848u;
            goto label_2ca848;
        }
    }
    ctx->pc = 0x2CA83Cu;
label_2ca83c:
    // 0x2ca83c: 0xc0b29b4  jal         func_2CA6D0
label_2ca840:
    if (ctx->pc == 0x2CA840u) {
        ctx->pc = 0x2CA844u;
        goto label_2ca844;
    }
    ctx->pc = 0x2CA83Cu;
    SET_GPR_U32(ctx, 31, 0x2CA844u);
    ctx->pc = 0x2CA6D0u;
    if (runtime->hasFunction(0x2CA6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA844u; }
        if (ctx->pc != 0x2CA844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionName__Fi_0x2ca6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA844u; }
        if (ctx->pc != 0x2CA844u) { return; }
    }
    ctx->pc = 0x2CA844u;
label_2ca844:
    // 0x2ca844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca848:
    // 0x2ca848: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2ca84c:
    if (ctx->pc == 0x2CA84Cu) {
        ctx->pc = 0x2CA850u;
        goto label_2ca850;
    }
    ctx->pc = 0x2CA848u;
    {
        const bool branch_taken_0x2ca848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca848) {
            ctx->pc = 0x2CA868u;
            goto label_2ca868;
        }
    }
    ctx->pc = 0x2CA850u;
label_2ca850:
    // 0x2ca850: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ca850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ca854:
    // 0x2ca854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca858:
    // 0x2ca858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ca858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca85c:
    // 0x2ca85c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ca85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ca860:
    // 0x2ca860: 0x320f809  jalr        $t9
label_2ca864:
    if (ctx->pc == 0x2CA864u) {
        ctx->pc = 0x2CA864u;
            // 0x2ca864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA868u;
        goto label_2ca868;
    }
    ctx->pc = 0x2CA860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA868u);
        ctx->pc = 0x2CA864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA860u;
            // 0x2ca864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA868u; }
            if (ctx->pc != 0x2CA868u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA868u;
label_2ca868:
    // 0x2ca868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ca868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ca86c:
    // 0x2ca86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca870:
    // 0x2ca870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca874:
    // 0x2ca874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca878:
    // 0x2ca878: 0x3e00008  jr          $ra
label_2ca87c:
    if (ctx->pc == 0x2CA87Cu) {
        ctx->pc = 0x2CA87Cu;
            // 0x2ca87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CA880u;
        goto label_fallthrough_0x2ca878;
    }
    ctx->pc = 0x2CA878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA878u;
            // 0x2ca87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ca878:
    ctx->pc = 0x2CA880u;
}
