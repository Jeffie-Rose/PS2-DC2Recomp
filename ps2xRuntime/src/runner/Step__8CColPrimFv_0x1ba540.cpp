#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CColPrimFv
// Address: 0x1ba540 - 0x1ba67c
void Step__8CColPrimFv_0x1ba540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CColPrimFv_0x1ba540");
#endif

    switch (ctx->pc) {
        case 0x1ba598u: goto label_1ba598;
        case 0x1ba5b0u: goto label_1ba5b0;
        case 0x1ba5c0u: goto label_1ba5c0;
        case 0x1ba5e4u: goto label_1ba5e4;
        case 0x1ba5f8u: goto label_1ba5f8;
        case 0x1ba610u: goto label_1ba610;
        default: break;
    }

    ctx->pc = 0x1ba540u;

    // 0x1ba540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ba544: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ba544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ba548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ba548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ba54c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ba54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ba550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ba554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba55c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA560u;
    {
        const bool branch_taken_0x1ba560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA560u;
            // 0x1ba564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba560) {
            ctx->pc = 0x1BA570u;
            goto label_1ba570;
        }
    }
    ctx->pc = 0x1BA568u;
    // 0x1ba568: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BA568u;
    {
        const bool branch_taken_0x1ba568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA568u;
            // 0x1ba56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba568) {
            ctx->pc = 0x1BA65Cu;
            goto label_1ba65c;
        }
    }
    ctx->pc = 0x1BA570u;
label_1ba570:
    // 0x1ba570: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ba570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ba574: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ba574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ba578: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA578u;
    {
        const bool branch_taken_0x1ba578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba578) {
            ctx->pc = 0x1BA624u;
            goto label_1ba624;
        }
    }
    ctx->pc = 0x1BA580u;
    // 0x1ba580: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ba580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ba584: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA584u;
    {
        const bool branch_taken_0x1ba584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA584u;
            // 0x1ba588: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba584) {
            ctx->pc = 0x1BA5DCu;
            goto label_1ba5dc;
        }
    }
    ctx->pc = 0x1BA58Cu;
    // 0x1ba58c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba590: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ba590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba594: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ba594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba598:
    // 0x1ba598: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1ba598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ba59c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1ba59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1ba5a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA5A0u;
    {
        const bool branch_taken_0x1ba5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5A0u;
            // 0x1ba5a4: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5a0) {
            ctx->pc = 0x1BA5B0u;
            goto label_1ba5b0;
        }
    }
    ctx->pc = 0x1BA5A8u;
    // 0x1ba5a8: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1BA5A8u;
    SET_GPR_U32(ctx, 31, 0x1BA5B0u);
    ctx->pc = 0x1BA5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5A8u;
            // 0x1ba5ac: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5B0u; }
        if (ctx->pc != 0x1BA5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5B0u; }
        if (ctx->pc != 0x1BA5B0u) { return; }
    }
    ctx->pc = 0x1BA5B0u;
label_1ba5b0:
    // 0x1ba5b0: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1ba5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1ba5b4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1ba5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ba5b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA5B8u;
    SET_GPR_U32(ctx, 31, 0x1BA5C0u);
    ctx->pc = 0x1BA5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5B8u;
            // 0x1ba5bc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5C0u; }
        if (ctx->pc != 0x1BA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5C0u; }
        if (ctx->pc != 0x1BA5C0u) { return; }
    }
    ctx->pc = 0x1BA5C0u;
label_1ba5c0:
    // 0x1ba5c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ba5c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ba5c8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ba5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba5cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BA5CCu;
    {
        const bool branch_taken_0x1ba5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5CCu;
            // 0x1ba5d0: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5cc) {
            ctx->pc = 0x1BA598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba598;
        }
    }
    ctx->pc = 0x1BA5D4u;
    // 0x1ba5d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA5D4u;
    {
        const bool branch_taken_0x1ba5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5d4) {
            ctx->pc = 0x1BA624u;
            goto label_1ba624;
        }
    }
    ctx->pc = 0x1BA5DCu;
label_1ba5dc:
    // 0x1ba5dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ba5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ba5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5e4:
    // 0x1ba5e4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ba5e8: 0x24540040  addiu       $s4, $v0, 0x40
    ctx->pc = 0x1ba5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ba5ec: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ba5f0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA5F0u;
    SET_GPR_U32(ctx, 31, 0x1BA5F8u);
    ctx->pc = 0x1BA5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5F0u;
            // 0x1ba5f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5F8u; }
        if (ctx->pc != 0x1BA5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5F8u; }
        if (ctx->pc != 0x1BA5F8u) { return; }
    }
    ctx->pc = 0x1BA5F8u;
label_1ba5f8:
    // 0x1ba5f8: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1ba5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1ba5fc: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1ba5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1ba600: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA600u;
    {
        const bool branch_taken_0x1ba600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA600u;
            // 0x1ba604: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba600) {
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA608u;
    // 0x1ba608: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1BA608u;
    SET_GPR_U32(ctx, 31, 0x1BA610u);
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA610u; }
        if (ctx->pc != 0x1BA610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA610u; }
        if (ctx->pc != 0x1BA610u) { return; }
    }
    ctx->pc = 0x1BA610u;
label_1ba610:
    // 0x1ba610: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ba614: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ba614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba618: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ba618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ba61c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1BA61Cu;
    {
        const bool branch_taken_0x1ba61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA61Cu;
            // 0x1ba620: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba61c) {
            ctx->pc = 0x1BA5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba5e4;
        }
    }
    ctx->pc = 0x1BA624u;
label_1ba624:
    // 0x1ba624: 0x0  nop
    ctx->pc = 0x1ba624u;
    // NOP
    // 0x1ba628: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ba628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ba62c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba634: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ba634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ba638: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ba63c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA63Cu;
    {
        const bool branch_taken_0x1ba63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA63Cu;
            // 0x1ba640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba63c) {
            ctx->pc = 0x1BA65Cu;
            goto label_1ba65c;
        }
    }
    ctx->pc = 0x1BA644u;
    // 0x1ba644: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ba648: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ba648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ba64c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA64Cu;
    {
        const bool branch_taken_0x1ba64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba64c) {
            ctx->pc = 0x1BA658u;
            goto label_1ba658;
        }
    }
    ctx->pc = 0x1BA654u;
    // 0x1ba654: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ba654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1ba658:
    // 0x1ba658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba65c:
    // 0x1ba65c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ba65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ba660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba674: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA674u;
            // 0x1ba678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA67Cu;
}
