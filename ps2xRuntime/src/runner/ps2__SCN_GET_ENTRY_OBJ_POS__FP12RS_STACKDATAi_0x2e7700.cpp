#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_ENTRY_OBJ_POS__FP12RS_STACKDATAi
// Address: 0x2e7700 - 0x2e77cc
void ps2__SCN_GET_ENTRY_OBJ_POS__FP12RS_STACKDATAi_0x2e7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_ENTRY_OBJ_POS__FP12RS_STACKDATAi_0x2e7700");
#endif

    switch (ctx->pc) {
        case 0x2e772cu: goto label_2e772c;
        case 0x2e773cu: goto label_2e773c;
        case 0x2e7768u: goto label_2e7768;
        case 0x2e7784u: goto label_2e7784;
        case 0x2e7794u: goto label_2e7794;
        case 0x2e77a4u: goto label_2e77a4;
        case 0x2e77b0u: goto label_2e77b0;
        default: break;
    }

    ctx->pc = 0x2e7700u;

    // 0x2e7700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e7704: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e7708: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e770c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7714: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7714u;
    {
        const bool branch_taken_0x2e7714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7714u;
            // 0x2e7718: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7714) {
            ctx->pc = 0x2E7724u;
            goto label_2e7724;
        }
    }
    ctx->pc = 0x2E771Cu;
    // 0x2e771c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E771Cu;
    {
        const bool branch_taken_0x2e771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E771Cu;
            // 0x2e7720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e771c) {
            ctx->pc = 0x2E77B4u;
            goto label_2e77b4;
        }
    }
    ctx->pc = 0x2E7724u;
label_2e7724:
    // 0x2e7724: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7724u;
    SET_GPR_U32(ctx, 31, 0x2E772Cu);
    ctx->pc = 0x2E7728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7724u;
            // 0x2e7728: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E772Cu; }
        if (ctx->pc != 0x2E772Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E772Cu; }
        if (ctx->pc != 0x2E772Cu) { return; }
    }
    ctx->pc = 0x2E772Cu;
label_2e772c:
    // 0x2e772c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7734: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7734u;
    SET_GPR_U32(ctx, 31, 0x2E773Cu);
    ctx->pc = 0x2E7738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7734u;
            // 0x2e7738: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E773Cu; }
        if (ctx->pc != 0x2E773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E773Cu; }
        if (ctx->pc != 0x2E773Cu) { return; }
    }
    ctx->pc = 0x2E773Cu;
label_2e773c:
    // 0x2e773c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e773cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7740: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7740u;
    {
        const bool branch_taken_0x2e7740 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2E7744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7740u;
            // 0x2e7744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7740) {
            ctx->pc = 0x2E7754u;
            goto label_2e7754;
        }
    }
    ctx->pc = 0x2E7748u;
    // 0x2e7748: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x2e7748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e774c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E774Cu;
    {
        const bool branch_taken_0x2e774c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e774c) {
            ctx->pc = 0x2E775Cu;
            goto label_2e775c;
        }
    }
    ctx->pc = 0x2E7754u;
label_2e7754:
    // 0x2e7754: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7754u;
    {
        const bool branch_taken_0x2e7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7754u;
            // 0x2e7758: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7754) {
            ctx->pc = 0x2E77B8u;
            goto label_2e77b8;
        }
    }
    ctx->pc = 0x2E775Cu;
label_2e775c:
    // 0x2e775c: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7760: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E7760u;
    SET_GPR_U32(ctx, 31, 0x2E7768u);
    ctx->pc = 0x2E7764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7760u;
            // 0x2e7764: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7768u; }
        if (ctx->pc != 0x2E7768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7768u; }
        if (ctx->pc != 0x2E7768u) { return; }
    }
    ctx->pc = 0x2E7768u;
label_2e7768:
    // 0x2e7768: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7768u;
    {
        const bool branch_taken_0x2e7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7768u;
            // 0x2e776c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7768) {
            ctx->pc = 0x2E7778u;
            goto label_2e7778;
        }
    }
    ctx->pc = 0x2E7770u;
    // 0x2e7770: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7770u;
    {
        const bool branch_taken_0x2e7770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7770u;
            // 0x2e7774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7770) {
            ctx->pc = 0x2E77B4u;
            goto label_2e77b4;
        }
    }
    ctx->pc = 0x2E7778u;
label_2e7778:
    // 0x2e7778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e777c: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x2E777Cu;
    SET_GPR_U32(ctx, 31, 0x2E7784u);
    ctx->pc = 0x2E7780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E777Cu;
            // 0x2e7780: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7784u; }
        if (ctx->pc != 0x2E7784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7784u; }
        if (ctx->pc != 0x2E7784u) { return; }
    }
    ctx->pc = 0x2E7784u;
label_2e7784:
    // 0x2e7784: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x2e7784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e778c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E778Cu;
    SET_GPR_U32(ctx, 31, 0x2E7794u);
    ctx->pc = 0x2E7790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E778Cu;
            // 0x2e7790: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7794u; }
        if (ctx->pc != 0x2E7794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7794u; }
        if (ctx->pc != 0x2E7794u) { return; }
    }
    ctx->pc = 0x2E7794u;
label_2e7794:
    // 0x2e7794: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2e7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e779c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E779Cu;
    SET_GPR_U32(ctx, 31, 0x2E77A4u);
    ctx->pc = 0x2E77A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E779Cu;
            // 0x2e77a0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77A4u; }
        if (ctx->pc != 0x2E77A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77A4u; }
        if (ctx->pc != 0x2E77A4u) { return; }
    }
    ctx->pc = 0x2E77A4u;
label_2e77a4:
    // 0x2e77a4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x2e77a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e77a8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E77A8u;
    SET_GPR_U32(ctx, 31, 0x2E77B0u);
    ctx->pc = 0x2E77ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E77A8u;
            // 0x2e77ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77B0u; }
        if (ctx->pc != 0x2E77B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77B0u; }
        if (ctx->pc != 0x2E77B0u) { return; }
    }
    ctx->pc = 0x2E77B0u;
label_2e77b0:
    // 0x2e77b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e77b4:
    // 0x2e77b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e77b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e77b8:
    // 0x2e77b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e77b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e77bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e77bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e77c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e77c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e77c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E77C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E77C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E77C4u;
            // 0x2e77c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E77CCu;
}
