#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MOTION__FP12RS_STACKDATAi
// Address: 0x2637b0 - 0x263938
void ps2__LOAD_MOTION__FP12RS_STACKDATAi_0x2637b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MOTION__FP12RS_STACKDATAi_0x2637b0");
#endif

    switch (ctx->pc) {
        case 0x2637ecu: goto label_2637ec;
        case 0x263810u: goto label_263810;
        case 0x263878u: goto label_263878;
        case 0x263888u: goto label_263888;
        case 0x263898u: goto label_263898;
        case 0x2638a4u: goto label_2638a4;
        case 0x2638b4u: goto label_2638b4;
        case 0x2638c4u: goto label_2638c4;
        case 0x2638d4u: goto label_2638d4;
        case 0x2638e0u: goto label_2638e0;
        case 0x2638fcu: goto label_2638fc;
        case 0x26391cu: goto label_26391c;
        default: break;
    }

    ctx->pc = 0x2637b0u;

    // 0x2637b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2637b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2637b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2637b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2637b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2637b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2637bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2637bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2637c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2637c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2637c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2637c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2637c8: 0x10a20038  beq         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2637C8u;
    {
        const bool branch_taken_0x2637c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2637CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2637C8u;
            // 0x2637cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637c8) {
            ctx->pc = 0x2638ACu;
            goto label_2638ac;
        }
    }
    ctx->pc = 0x2637D0u;
    // 0x2637d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2637d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2637d4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2637D4u;
    {
        const bool branch_taken_0x2637d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2637d4) {
            ctx->pc = 0x2637E4u;
            goto label_2637e4;
        }
    }
    ctx->pc = 0x2637DCu;
    // 0x2637dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2637DCu;
    {
        const bool branch_taken_0x2637dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2637DCu;
            // 0x2637e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637dc) {
            ctx->pc = 0x2638E8u;
            goto label_2638e8;
        }
    }
    ctx->pc = 0x2637E4u;
label_2637e4:
    // 0x2637e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2637E4u;
    SET_GPR_U32(ctx, 31, 0x2637ECu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2637ECu; }
        if (ctx->pc != 0x2637ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2637ECu; }
        if (ctx->pc != 0x2637ECu) { return; }
    }
    ctx->pc = 0x2637ECu;
label_2637ec:
    // 0x2637ec: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2637ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2637f0: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x2637f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x2637f4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2637F4u;
    {
        const bool branch_taken_0x2637f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2637F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2637F4u;
            // 0x2637f8: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637f4) {
            ctx->pc = 0x263804u;
            goto label_263804;
        }
    }
    ctx->pc = 0x2637FCu;
    // 0x2637fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2637FCu;
    {
        const bool branch_taken_0x2637fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2637FCu;
            // 0x263800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637fc) {
            ctx->pc = 0x263860u;
            goto label_263860;
        }
    }
    ctx->pc = 0x263804u;
label_263804:
    // 0x263804: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x263804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x263808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x263808u;
    {
        const bool branch_taken_0x263808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263808u;
            // 0x26380c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263808) {
            ctx->pc = 0x263838u;
            goto label_263838;
        }
    }
    ctx->pc = 0x263810u;
label_263810:
    // 0x263810: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x263810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x263814: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x263814u;
    {
        const bool branch_taken_0x263814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263814) {
            ctx->pc = 0x263844u;
            goto label_263844;
        }
    }
    ctx->pc = 0x26381Cu;
    // 0x26381c: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26381cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x263820: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263820u;
    {
        const bool branch_taken_0x263820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x263820) {
            ctx->pc = 0x263830u;
            goto label_263830;
        }
    }
    ctx->pc = 0x263828u;
    // 0x263828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263828u;
    {
        const bool branch_taken_0x263828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263828u;
            // 0x26382c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263828) {
            ctx->pc = 0x263838u;
            goto label_263838;
        }
    }
    ctx->pc = 0x263830u;
label_263830:
    // 0x263830: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x263830u;
    {
        const bool branch_taken_0x263830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263830u;
            // 0x263834: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263830) {
            ctx->pc = 0x263860u;
            goto label_263860;
        }
    }
    ctx->pc = 0x263838u;
label_263838:
    // 0x263838: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x263838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26383c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26383Cu;
    {
        const bool branch_taken_0x26383c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26383c) {
            ctx->pc = 0x263810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263810;
        }
    }
    ctx->pc = 0x263844u;
label_263844:
    // 0x263844: 0x0  nop
    ctx->pc = 0x263844u;
    // NOP
    // 0x263848: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263848u;
    {
        const bool branch_taken_0x263848 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263848u;
            // 0x26384c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263848) {
            ctx->pc = 0x263858u;
            goto label_263858;
        }
    }
    ctx->pc = 0x263850u;
    // 0x263850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263850u;
    {
        const bool branch_taken_0x263850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263850) {
            ctx->pc = 0x263860u;
            goto label_263860;
        }
    }
    ctx->pc = 0x263858u;
label_263858:
    // 0x263858: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x263858u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26385c: 0x0  nop
    ctx->pc = 0x26385cu;
    // NOP
label_263860:
    // 0x263860: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263860u;
    {
        const bool branch_taken_0x263860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x263864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263860u;
            // 0x263864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263860) {
            ctx->pc = 0x263870u;
            goto label_263870;
        }
    }
    ctx->pc = 0x263868u;
    // 0x263868: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x263868u;
    {
        const bool branch_taken_0x263868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263868u;
            // 0x26386c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263868) {
            ctx->pc = 0x26391Cu;
            goto label_26391c;
        }
    }
    ctx->pc = 0x263870u;
label_263870:
    // 0x263870: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x263870u;
    SET_GPR_U32(ctx, 31, 0x263878u);
    ctx->pc = 0x263874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263870u;
            // 0x263874: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263878u; }
        if (ctx->pc != 0x263878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263878u; }
        if (ctx->pc != 0x263878u) { return; }
    }
    ctx->pc = 0x263878u;
label_263878:
    // 0x263878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26387c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26387cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263880: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x263880u;
    SET_GPR_U32(ctx, 31, 0x263888u);
    ctx->pc = 0x263884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263880u;
            // 0x263884: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263888u; }
        if (ctx->pc != 0x263888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263888u; }
        if (ctx->pc != 0x263888u) { return; }
    }
    ctx->pc = 0x263888u;
label_263888:
    // 0x263888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26388c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26388cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263890: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x263890u;
    SET_GPR_U32(ctx, 31, 0x263898u);
    ctx->pc = 0x263894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263890u;
            // 0x263894: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263898u; }
        if (ctx->pc != 0x263898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263898u; }
        if (ctx->pc != 0x263898u) { return; }
    }
    ctx->pc = 0x263898u;
label_263898:
    // 0x263898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26389c: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26389Cu;
    SET_GPR_U32(ctx, 31, 0x2638A4u);
    ctx->pc = 0x2638A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26389Cu;
            // 0x2638a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638A4u; }
        if (ctx->pc != 0x2638A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638A4u; }
        if (ctx->pc != 0x2638A4u) { return; }
    }
    ctx->pc = 0x2638A4u;
label_2638a4:
    // 0x2638a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2638A4u;
    {
        const bool branch_taken_0x2638a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2638A4u;
            // 0x2638a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638a4) {
            ctx->pc = 0x2638F0u;
            goto label_2638f0;
        }
    }
    ctx->pc = 0x2638ACu;
label_2638ac:
    // 0x2638ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2638ACu;
    SET_GPR_U32(ctx, 31, 0x2638B4u);
    ctx->pc = 0x2638B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638ACu;
            // 0x2638b0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638B4u; }
        if (ctx->pc != 0x2638B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638B4u; }
        if (ctx->pc != 0x2638B4u) { return; }
    }
    ctx->pc = 0x2638B4u;
label_2638b4:
    // 0x2638b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2638b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2638b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638bc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2638BCu;
    SET_GPR_U32(ctx, 31, 0x2638C4u);
    ctx->pc = 0x2638C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638BCu;
            // 0x2638c0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638C4u; }
        if (ctx->pc != 0x2638C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638C4u; }
        if (ctx->pc != 0x2638C4u) { return; }
    }
    ctx->pc = 0x2638C4u;
label_2638c4:
    // 0x2638c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2638c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2638c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638cc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2638CCu;
    SET_GPR_U32(ctx, 31, 0x2638D4u);
    ctx->pc = 0x2638D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638CCu;
            // 0x2638d0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638D4u; }
        if (ctx->pc != 0x2638D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638D4u; }
        if (ctx->pc != 0x2638D4u) { return; }
    }
    ctx->pc = 0x2638D4u;
label_2638d4:
    // 0x2638d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2638d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2638D8u;
    SET_GPR_U32(ctx, 31, 0x2638E0u);
    ctx->pc = 0x2638DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638D8u;
            // 0x2638dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638E0u; }
        if (ctx->pc != 0x2638E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638E0u; }
        if (ctx->pc != 0x2638E0u) { return; }
    }
    ctx->pc = 0x2638E0u;
label_2638e0:
    // 0x2638e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2638E0u;
    {
        const bool branch_taken_0x2638e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2638E0u;
            // 0x2638e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638e0) {
            ctx->pc = 0x2638F0u;
            goto label_2638f0;
        }
    }
    ctx->pc = 0x2638E8u;
label_2638e8:
    // 0x2638e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2638E8u;
    {
        const bool branch_taken_0x2638e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2638E8u;
            // 0x2638ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638e8) {
            ctx->pc = 0x263920u;
            goto label_263920;
        }
    }
    ctx->pc = 0x2638F0u;
label_2638f0:
    // 0x2638f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2638f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638f4: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x2638F4u;
    SET_GPR_U32(ctx, 31, 0x2638FCu);
    ctx->pc = 0x2638F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2638F4u;
            // 0x2638f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638FCu; }
        if (ctx->pc != 0x2638FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638FCu; }
        if (ctx->pc != 0x2638FCu) { return; }
    }
    ctx->pc = 0x2638FCu;
label_2638fc:
    // 0x2638fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2638FCu;
    {
        const bool branch_taken_0x2638fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2638FCu;
            // 0x263900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638fc) {
            ctx->pc = 0x26390Cu;
            goto label_26390c;
        }
    }
    ctx->pc = 0x263904u;
    // 0x263904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263904u;
    {
        const bool branch_taken_0x263904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263904u;
            // 0x263908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263904) {
            ctx->pc = 0x26391Cu;
            goto label_26391c;
        }
    }
    ctx->pc = 0x26390Cu;
label_26390c:
    // 0x26390c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26390cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263910: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263914: 0xc098da4  jal         func_263690
    ctx->pc = 0x263914u;
    SET_GPR_U32(ctx, 31, 0x26391Cu);
    ctx->pc = 0x263918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263914u;
            // 0x263918: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x263690u;
    if (runtime->hasFunction(0x263690u)) {
        auto targetFn = runtime->lookupFunction(0x263690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26391Cu; }
        if (ctx->pc != 0x26391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_MOTION_sub__FiPciPUi_0x263690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26391Cu; }
        if (ctx->pc != 0x26391Cu) { return; }
    }
    ctx->pc = 0x26391Cu;
label_26391c:
    // 0x26391c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_263920:
    // 0x263920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x263920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26392c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26392cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263930: 0x3e00008  jr          $ra
    ctx->pc = 0x263930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263930u;
            // 0x263934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263938u;
}
