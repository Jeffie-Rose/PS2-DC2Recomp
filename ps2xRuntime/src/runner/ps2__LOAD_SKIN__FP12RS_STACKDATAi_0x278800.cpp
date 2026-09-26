#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_SKIN__FP12RS_STACKDATAi
// Address: 0x278800 - 0x27898c
void ps2__LOAD_SKIN__FP12RS_STACKDATAi_0x278800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_SKIN__FP12RS_STACKDATAi_0x278800");
#endif

    switch (ctx->pc) {
        case 0x27882cu: goto label_27882c;
        case 0x278858u: goto label_278858;
        case 0x278864u: goto label_278864;
        case 0x278874u: goto label_278874;
        case 0x278884u: goto label_278884;
        case 0x278890u: goto label_278890;
        case 0x27889cu: goto label_27889c;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788f4u: goto label_2788f4;
        case 0x278918u: goto label_278918;
        case 0x278934u: goto label_278934;
        case 0x278954u: goto label_278954;
        default: break;
    }

    ctx->pc = 0x278800u;

    // 0x278800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x278800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x278804: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x278804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x278808: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x278808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27880c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x278810: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x278810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x278814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x278818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x278818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27881c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278820: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x278820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x278824: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278824u;
    SET_GPR_U32(ctx, 31, 0x27882Cu);
    ctx->pc = 0x278828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278824u;
            // 0x278828: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27882Cu; }
        if (ctx->pc != 0x27882Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27882Cu; }
        if (ctx->pc != 0x27882Cu) { return; }
    }
    ctx->pc = 0x27882Cu;
label_27882c:
    // 0x27882c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x278830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x278834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278838: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x278838u;
    {
        const bool branch_taken_0x278838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278838u;
            // 0x27883c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278838) {
            ctx->pc = 0x27886Cu;
            goto label_27886c;
        }
    }
    ctx->pc = 0x278840u;
    // 0x278840: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x278840u;
    {
        const bool branch_taken_0x278840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278840u;
            // 0x278844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278840) {
            ctx->pc = 0x278850u;
            goto label_278850;
        }
    }
    ctx->pc = 0x278848u;
    // 0x278848: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278848u;
    {
        const bool branch_taken_0x278848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278848u;
            // 0x27884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278848) {
            ctx->pc = 0x27887Cu;
            goto label_27887c;
        }
    }
    ctx->pc = 0x278850u;
label_278850:
    // 0x278850: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278850u;
    SET_GPR_U32(ctx, 31, 0x278858u);
    ctx->pc = 0x278854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278850u;
            // 0x278854: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278858u; }
        if (ctx->pc != 0x278858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278858u; }
        if (ctx->pc != 0x278858u) { return; }
    }
    ctx->pc = 0x278858u;
label_278858:
    // 0x278858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27885c: 0xc065750  jal         func_195D40
    ctx->pc = 0x27885Cu;
    SET_GPR_U32(ctx, 31, 0x278864u);
    ctx->pc = 0x278860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27885Cu;
            // 0x278860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278864u; }
        if (ctx->pc != 0x278864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278864u; }
        if (ctx->pc != 0x278864u) { return; }
    }
    ctx->pc = 0x278864u;
label_278864:
    // 0x278864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278864u;
    {
        const bool branch_taken_0x278864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278864u;
            // 0x278868: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278864) {
            ctx->pc = 0x278878u;
            goto label_278878;
        }
    }
    ctx->pc = 0x27886Cu;
label_27886c:
    // 0x27886c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27886Cu;
    SET_GPR_U32(ctx, 31, 0x278874u);
    ctx->pc = 0x278870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27886Cu;
            // 0x278870: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278874u; }
        if (ctx->pc != 0x278874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278874u; }
        if (ctx->pc != 0x278874u) { return; }
    }
    ctx->pc = 0x278874u;
label_278874:
    // 0x278874: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x278874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278878:
    // 0x278878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27887c:
    // 0x27887c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27887Cu;
    SET_GPR_U32(ctx, 31, 0x278884u);
    ctx->pc = 0x278880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27887Cu;
            // 0x278880: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278884u; }
        if (ctx->pc != 0x278884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278884u; }
        if (ctx->pc != 0x278884u) { return; }
    }
    ctx->pc = 0x278884u;
label_278884:
    // 0x278884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278888: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278888u;
    SET_GPR_U32(ctx, 31, 0x278890u);
    ctx->pc = 0x27888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278888u;
            // 0x27888c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278890u; }
        if (ctx->pc != 0x278890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278890u; }
        if (ctx->pc != 0x278890u) { return; }
    }
    ctx->pc = 0x278890u;
label_278890:
    // 0x278890: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x278890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278894: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x278894u;
    SET_GPR_U32(ctx, 31, 0x27889Cu);
    ctx->pc = 0x278898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278894u;
            // 0x278898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27889Cu; }
        if (ctx->pc != 0x27889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27889Cu; }
        if (ctx->pc != 0x27889Cu) { return; }
    }
    ctx->pc = 0x27889Cu;
label_27889c:
    // 0x27889c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27889Cu;
    {
        const bool branch_taken_0x27889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2788A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27889Cu;
            // 0x2788a0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27889c) {
            ctx->pc = 0x2788ACu;
            goto label_2788ac;
        }
    }
    ctx->pc = 0x2788A4u;
    // 0x2788a4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2788A4u;
    {
        const bool branch_taken_0x2788a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788A4u;
            // 0x2788a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788a4) {
            ctx->pc = 0x278964u;
            goto label_278964;
        }
    }
    ctx->pc = 0x2788ACu;
label_2788ac:
    // 0x2788ac: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2788acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2788b0: 0xc0a1240  jal         func_284900
    ctx->pc = 0x2788B0u;
    SET_GPR_U32(ctx, 31, 0x2788B8u);
    ctx->pc = 0x2788B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2788B0u;
            // 0x2788b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788B8u; }
        if (ctx->pc != 0x2788B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788B8u; }
        if (ctx->pc != 0x2788B8u) { return; }
    }
    ctx->pc = 0x2788B8u;
label_2788b8:
    // 0x2788b8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2788b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2788bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2788BCu;
    {
        const bool branch_taken_0x2788bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788BCu;
            // 0x2788c0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788bc) {
            ctx->pc = 0x2788CCu;
            goto label_2788cc;
        }
    }
    ctx->pc = 0x2788C4u;
    // 0x2788c4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2788C4u;
    {
        const bool branch_taken_0x2788c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788C4u;
            // 0x2788c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788c4) {
            ctx->pc = 0x278964u;
            goto label_278964;
        }
    }
    ctx->pc = 0x2788CCu;
label_2788cc:
    // 0x2788cc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2788ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2788d0: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2788D0u;
    SET_GPR_U32(ctx, 31, 0x2788D8u);
    ctx->pc = 0x2788D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2788D0u;
            // 0x2788d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788D8u; }
        if (ctx->pc != 0x2788D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788D8u; }
        if (ctx->pc != 0x2788D8u) { return; }
    }
    ctx->pc = 0x2788D8u;
label_2788d8:
    // 0x2788d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2788D8u;
    {
        const bool branch_taken_0x2788d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2788DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788D8u;
            // 0x2788dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788d8) {
            ctx->pc = 0x2788E8u;
            goto label_2788e8;
        }
    }
    ctx->pc = 0x2788E0u;
    // 0x2788e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2788E0u;
    {
        const bool branch_taken_0x2788e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788E0u;
            // 0x2788e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788e0) {
            ctx->pc = 0x278964u;
            goto label_278964;
        }
    }
    ctx->pc = 0x2788E8u;
label_2788e8:
    // 0x2788e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2788e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788ec: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x2788ECu;
    SET_GPR_U32(ctx, 31, 0x2788F4u);
    ctx->pc = 0x2788F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2788ECu;
            // 0x2788f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788F4u; }
        if (ctx->pc != 0x2788F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788F4u; }
        if (ctx->pc != 0x2788F4u) { return; }
    }
    ctx->pc = 0x2788F4u;
label_2788f4:
    // 0x2788f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2788F4u;
    {
        const bool branch_taken_0x2788f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2788F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788F4u;
            // 0x2788f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788f4) {
            ctx->pc = 0x278904u;
            goto label_278904;
        }
    }
    ctx->pc = 0x2788FCu;
    // 0x2788fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2788FCu;
    {
        const bool branch_taken_0x2788fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788FCu;
            // 0x278900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788fc) {
            ctx->pc = 0x278964u;
            goto label_278964;
        }
    }
    ctx->pc = 0x278904u;
label_278904:
    // 0x278904: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x278908: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x278908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27890c: 0x24a5c6d8  addiu       $a1, $a1, -0x3928
    ctx->pc = 0x27890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952664));
    // 0x278910: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x278910u;
    SET_GPR_U32(ctx, 31, 0x278918u);
    ctx->pc = 0x278914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278910u;
            // 0x278914: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278918u; }
        if (ctx->pc != 0x278918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278918u; }
        if (ctx->pc != 0x278918u) { return; }
    }
    ctx->pc = 0x278918u;
label_278918:
    // 0x278918: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x278918u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x27891c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x27891cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x278920: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278920u;
    {
        const bool branch_taken_0x278920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278920u;
            // 0x278924: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278920) {
            ctx->pc = 0x278934u;
            goto label_278934;
        }
    }
    ctx->pc = 0x278928u;
    // 0x278928: 0x26a401d8  addiu       $a0, $s5, 0x1D8
    ctx->pc = 0x278928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 472));
    // 0x27892c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x27892Cu;
    SET_GPR_U32(ctx, 31, 0x278934u);
    ctx->pc = 0x278930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27892Cu;
            // 0x278930: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278934u; }
        if (ctx->pc != 0x278934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278934u; }
        if (ctx->pc != 0x278934u) { return; }
    }
    ctx->pc = 0x278934u;
label_278934:
    // 0x278934: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x278934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x278938: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27893c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27893cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278940: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x278940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278944: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x278944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278948: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x278948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27894c: 0xc05d470  jal         func_1751C0
    ctx->pc = 0x27894Cu;
    SET_GPR_U32(ctx, 31, 0x278954u);
    ctx->pc = 0x278950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27894Cu;
            // 0x278950: 0x24e7c708  addiu       $a3, $a3, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278954u; }
        if (ctx->pc != 0x278954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278954u; }
        if (ctx->pc != 0x278954u) { return; }
    }
    ctx->pc = 0x278954u;
label_278954:
    // 0x278954: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x278954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x278958: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x278958u;
    {
        const bool branch_taken_0x278958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278958u;
            // 0x27895c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278958) {
            ctx->pc = 0x278964u;
            goto label_278964;
        }
    }
    ctx->pc = 0x278960u;
    // 0x278960: 0xa2a001d8  sb          $zero, 0x1D8($s5)
    ctx->pc = 0x278960u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 472), (uint8_t)GPR_U32(ctx, 0));
label_278964:
    // 0x278964: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x278964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x278968: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x278968u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27896c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27896cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278970: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x278970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x278974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x278978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27897c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27897cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278984: 0x3e00008  jr          $ra
    ctx->pc = 0x278984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278984u;
            // 0x278988: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27898Cu;
}
