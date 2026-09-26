#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_ROTATION2__FP12RS_STACKDATAi
// Address: 0x271850 - 0x271a00
void ps2__OBJS_ROTATION2__FP12RS_STACKDATAi_0x271850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_ROTATION2__FP12RS_STACKDATAi_0x271850");
#endif

    switch (ctx->pc) {
        case 0x27188cu: goto label_27188c;
        case 0x2718b0u: goto label_2718b0;
        case 0x271918u: goto label_271918;
        case 0x271928u: goto label_271928;
        case 0x271938u: goto label_271938;
        case 0x271948u: goto label_271948;
        case 0x271954u: goto label_271954;
        case 0x271964u: goto label_271964;
        case 0x271974u: goto label_271974;
        case 0x271984u: goto label_271984;
        case 0x271994u: goto label_271994;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719e0u: goto label_2719e0;
        default: break;
    }

    ctx->pc = 0x271850u;

    // 0x271850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x271854: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x271854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x271858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x271858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27185c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271864: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271868: 0x10a2003c  beq         $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x271868u;
    {
        const bool branch_taken_0x271868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271868u;
            // 0x27186c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271868) {
            ctx->pc = 0x27195Cu;
            goto label_27195c;
        }
    }
    ctx->pc = 0x271870u;
    // 0x271870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271874: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271874u;
    {
        const bool branch_taken_0x271874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x271874) {
            ctx->pc = 0x271884u;
            goto label_271884;
        }
    }
    ctx->pc = 0x27187Cu;
    // 0x27187c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x27187Cu;
    {
        const bool branch_taken_0x27187c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27187Cu;
            // 0x271880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27187c) {
            ctx->pc = 0x2719A8u;
            goto label_2719a8;
        }
    }
    ctx->pc = 0x271884u;
label_271884:
    // 0x271884: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271884u;
    SET_GPR_U32(ctx, 31, 0x27188Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27188Cu; }
        if (ctx->pc != 0x27188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27188Cu; }
        if (ctx->pc != 0x27188Cu) { return; }
    }
    ctx->pc = 0x27188Cu;
label_27188c:
    // 0x27188c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27188cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x271890: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x271890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x271894: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271894u;
    {
        const bool branch_taken_0x271894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271894u;
            // 0x271898: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271894) {
            ctx->pc = 0x2718A4u;
            goto label_2718a4;
        }
    }
    ctx->pc = 0x27189Cu;
    // 0x27189c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27189Cu;
    {
        const bool branch_taken_0x27189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27189Cu;
            // 0x2718a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27189c) {
            ctx->pc = 0x271900u;
            goto label_271900;
        }
    }
    ctx->pc = 0x2718A4u;
label_2718a4:
    // 0x2718a4: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x2718a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x2718a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2718A8u;
    {
        const bool branch_taken_0x2718a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2718A8u;
            // 0x2718ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718a8) {
            ctx->pc = 0x2718D8u;
            goto label_2718d8;
        }
    }
    ctx->pc = 0x2718B0u;
label_2718b0:
    // 0x2718b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2718b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2718b4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2718B4u;
    {
        const bool branch_taken_0x2718b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2718b4) {
            ctx->pc = 0x2718E4u;
            goto label_2718e4;
        }
    }
    ctx->pc = 0x2718BCu;
    // 0x2718bc: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2718bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2718c0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2718C0u;
    {
        const bool branch_taken_0x2718c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2718c0) {
            ctx->pc = 0x2718D0u;
            goto label_2718d0;
        }
    }
    ctx->pc = 0x2718C8u;
    // 0x2718c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2718C8u;
    {
        const bool branch_taken_0x2718c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2718C8u;
            // 0x2718cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718c8) {
            ctx->pc = 0x2718D8u;
            goto label_2718d8;
        }
    }
    ctx->pc = 0x2718D0u;
label_2718d0:
    // 0x2718d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2718D0u;
    {
        const bool branch_taken_0x2718d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2718D0u;
            // 0x2718d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718d0) {
            ctx->pc = 0x271900u;
            goto label_271900;
        }
    }
    ctx->pc = 0x2718D8u;
label_2718d8:
    // 0x2718d8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2718d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2718dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2718DCu;
    {
        const bool branch_taken_0x2718dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2718dc) {
            ctx->pc = 0x2718B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2718b0;
        }
    }
    ctx->pc = 0x2718E4u;
label_2718e4:
    // 0x2718e4: 0x0  nop
    ctx->pc = 0x2718e4u;
    // NOP
    // 0x2718e8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2718E8u;
    {
        const bool branch_taken_0x2718e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2718ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2718E8u;
            // 0x2718ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718e8) {
            ctx->pc = 0x2718F8u;
            goto label_2718f8;
        }
    }
    ctx->pc = 0x2718F0u;
    // 0x2718f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2718F0u;
    {
        const bool branch_taken_0x2718f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2718f0) {
            ctx->pc = 0x271900u;
            goto label_271900;
        }
    }
    ctx->pc = 0x2718F8u;
label_2718f8:
    // 0x2718f8: 0x8cd30004  lw          $s3, 0x4($a2)
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2718fc: 0x0  nop
    ctx->pc = 0x2718fcu;
    // NOP
label_271900:
    // 0x271900: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x271900u;
    {
        const bool branch_taken_0x271900 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x271904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271900u;
            // 0x271904: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271900) {
            ctx->pc = 0x271910u;
            goto label_271910;
        }
    }
    ctx->pc = 0x271908u;
    // 0x271908: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x271908u;
    {
        const bool branch_taken_0x271908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271908u;
            // 0x27190c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271908) {
            ctx->pc = 0x2719E4u;
            goto label_2719e4;
        }
    }
    ctx->pc = 0x271910u;
label_271910:
    // 0x271910: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271910u;
    SET_GPR_U32(ctx, 31, 0x271918u);
    ctx->pc = 0x271914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271910u;
            // 0x271914: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271918u; }
        if (ctx->pc != 0x271918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271918u; }
        if (ctx->pc != 0x271918u) { return; }
    }
    ctx->pc = 0x271918u;
label_271918:
    // 0x271918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27191c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271920: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x271920u;
    SET_GPR_U32(ctx, 31, 0x271928u);
    ctx->pc = 0x271924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271920u;
            // 0x271924: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271928u; }
        if (ctx->pc != 0x271928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271928u; }
        if (ctx->pc != 0x271928u) { return; }
    }
    ctx->pc = 0x271928u;
label_271928:
    // 0x271928: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x27192c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271930: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271930u;
    SET_GPR_U32(ctx, 31, 0x271938u);
    ctx->pc = 0x271934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271930u;
            // 0x271934: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271938u; }
        if (ctx->pc != 0x271938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271938u; }
        if (ctx->pc != 0x271938u) { return; }
    }
    ctx->pc = 0x271938u;
label_271938:
    // 0x271938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27193c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271940: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271940u;
    SET_GPR_U32(ctx, 31, 0x271948u);
    ctx->pc = 0x271944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271940u;
            // 0x271944: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271948u; }
        if (ctx->pc != 0x271948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271948u; }
        if (ctx->pc != 0x271948u) { return; }
    }
    ctx->pc = 0x271948u;
label_271948:
    // 0x271948: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27194c: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x27194Cu;
    SET_GPR_U32(ctx, 31, 0x271954u);
    ctx->pc = 0x271950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27194Cu;
            // 0x271950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271954u; }
        if (ctx->pc != 0x271954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271954u; }
        if (ctx->pc != 0x271954u) { return; }
    }
    ctx->pc = 0x271954u;
label_271954:
    // 0x271954: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x271954u;
    {
        const bool branch_taken_0x271954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271954u;
            // 0x271958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271954) {
            ctx->pc = 0x2719B4u;
            goto label_2719b4;
        }
    }
    ctx->pc = 0x27195Cu;
label_27195c:
    // 0x27195c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27195Cu;
    SET_GPR_U32(ctx, 31, 0x271964u);
    ctx->pc = 0x271960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27195Cu;
            // 0x271960: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271964u; }
        if (ctx->pc != 0x271964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271964u; }
        if (ctx->pc != 0x271964u) { return; }
    }
    ctx->pc = 0x271964u;
label_271964:
    // 0x271964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271968: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x271968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27196c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27196Cu;
    SET_GPR_U32(ctx, 31, 0x271974u);
    ctx->pc = 0x271970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27196Cu;
            // 0x271970: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271974u; }
        if (ctx->pc != 0x271974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271974u; }
        if (ctx->pc != 0x271974u) { return; }
    }
    ctx->pc = 0x271974u;
label_271974:
    // 0x271974: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x271974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x271978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27197c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27197Cu;
    SET_GPR_U32(ctx, 31, 0x271984u);
    ctx->pc = 0x271980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27197Cu;
            // 0x271980: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271984u; }
        if (ctx->pc != 0x271984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271984u; }
        if (ctx->pc != 0x271984u) { return; }
    }
    ctx->pc = 0x271984u;
label_271984:
    // 0x271984: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27198c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27198Cu;
    SET_GPR_U32(ctx, 31, 0x271994u);
    ctx->pc = 0x271990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27198Cu;
            // 0x271990: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271994u; }
        if (ctx->pc != 0x271994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271994u; }
        if (ctx->pc != 0x271994u) { return; }
    }
    ctx->pc = 0x271994u;
label_271994:
    // 0x271994: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271998: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x271998u;
    SET_GPR_U32(ctx, 31, 0x2719A0u);
    ctx->pc = 0x27199Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271998u;
            // 0x27199c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719A0u; }
        if (ctx->pc != 0x2719A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719A0u; }
        if (ctx->pc != 0x2719A0u) { return; }
    }
    ctx->pc = 0x2719A0u;
label_2719a0:
    // 0x2719a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2719A0u;
    {
        const bool branch_taken_0x2719a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2719a0) {
            ctx->pc = 0x2719B0u;
            goto label_2719b0;
        }
    }
    ctx->pc = 0x2719A8u;
label_2719a8:
    // 0x2719a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2719A8u;
    {
        const bool branch_taken_0x2719a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719A8u;
            // 0x2719ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719a8) {
            ctx->pc = 0x2719E8u;
            goto label_2719e8;
        }
    }
    ctx->pc = 0x2719B0u;
label_2719b0:
    // 0x2719b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2719b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2719b4:
    // 0x2719b4: 0xc098a44  jal         func_262910
    ctx->pc = 0x2719B4u;
    SET_GPR_U32(ctx, 31, 0x2719BCu);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719BCu; }
        if (ctx->pc != 0x2719BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719BCu; }
        if (ctx->pc != 0x2719BCu) { return; }
    }
    ctx->pc = 0x2719BCu;
label_2719bc:
    // 0x2719bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2719BCu;
    {
        const bool branch_taken_0x2719bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2719C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719BCu;
            // 0x2719c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719bc) {
            ctx->pc = 0x2719CCu;
            goto label_2719cc;
        }
    }
    ctx->pc = 0x2719C4u;
    // 0x2719c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2719C4u;
    {
        const bool branch_taken_0x2719c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719C4u;
            // 0x2719c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719c4) {
            ctx->pc = 0x2719E4u;
            goto label_2719e4;
        }
    }
    ctx->pc = 0x2719CCu;
label_2719cc:
    // 0x2719cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2719ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719d4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2719d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2719d8: 0xc097380  jal         func_25CE00
    ctx->pc = 0x2719D8u;
    SET_GPR_U32(ctx, 31, 0x2719E0u);
    ctx->pc = 0x2719DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2719D8u;
            // 0x2719dc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CE00u;
    if (runtime->hasFunction(0x25CE00u)) {
        auto targetFn = runtime->lookupFunction(0x25CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719E0u; }
        if (ctx->pc != 0x2719E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotation2__12CSceneObjSeqFPfiif_0x25ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719E0u; }
        if (ctx->pc != 0x2719E0u) { return; }
    }
    ctx->pc = 0x2719E0u;
label_2719e0:
    // 0x2719e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2719e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2719e4:
    // 0x2719e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2719e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2719e8:
    // 0x2719e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2719e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2719ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2719ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2719f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2719f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2719f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2719f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2719f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2719F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2719FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719F8u;
            // 0x2719fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271A00u;
}
