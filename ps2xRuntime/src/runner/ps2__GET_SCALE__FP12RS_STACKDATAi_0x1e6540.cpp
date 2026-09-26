#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_SCALE__FP12RS_STACKDATAi
// Address: 0x1e6540 - 0x1e658c
void ps2__GET_SCALE__FP12RS_STACKDATAi_0x1e6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_SCALE__FP12RS_STACKDATAi_0x1e6540");
#endif

    switch (ctx->pc) {
        case 0x1e6540u: goto label_1e6540;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6548u: goto label_1e6548;
        case 0x1e654cu: goto label_1e654c;
        case 0x1e6550u: goto label_1e6550;
        case 0x1e6554u: goto label_1e6554;
        case 0x1e6558u: goto label_1e6558;
        case 0x1e655cu: goto label_1e655c;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6568u: goto label_1e6568;
        case 0x1e656cu: goto label_1e656c;
        case 0x1e6570u: goto label_1e6570;
        case 0x1e6574u: goto label_1e6574;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6580u: goto label_1e6580;
        case 0x1e6584u: goto label_1e6584;
        case 0x1e6588u: goto label_1e6588;
        default: break;
    }

    ctx->pc = 0x1e6540u;

label_1e6540:
    // 0x1e6540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6544:
    // 0x1e6544: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6548:
    // 0x1e6548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e654c:
    // 0x1e654c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e6550:
    if (ctx->pc == 0x1E6550u) {
        ctx->pc = 0x1E6550u;
            // 0x1e6550: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->pc = 0x1E6554u;
        goto label_1e6554;
    }
    ctx->pc = 0x1E654Cu;
    {
        const bool branch_taken_0x1e654c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E654Cu;
            // 0x1e6550: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e654c) {
            ctx->pc = 0x1E655Cu;
            goto label_1e655c;
        }
    }
    ctx->pc = 0x1E6554u;
label_1e6554:
    // 0x1e6554: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e6558:
    if (ctx->pc == 0x1E6558u) {
        ctx->pc = 0x1E6558u;
            // 0x1e6558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E655Cu;
        goto label_1e655c;
    }
    ctx->pc = 0x1E6554u;
    {
        const bool branch_taken_0x1e6554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6554u;
            // 0x1e6558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6554) {
            ctx->pc = 0x1E6580u;
            goto label_1e6580;
        }
    }
    ctx->pc = 0x1E655Cu;
label_1e655c:
    // 0x1e655c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e6560:
    // 0x1e6560: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6564:
    // 0x1e6564: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1e6564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1e6568:
    // 0x1e6568: 0x320f809  jalr        $t9
label_1e656c:
    if (ctx->pc == 0x1E656Cu) {
        ctx->pc = 0x1E656Cu;
            // 0x1e656c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E6570u;
        goto label_1e6570;
    }
    ctx->pc = 0x1E6568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6570u);
        ctx->pc = 0x1E656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6568u;
            // 0x1e656c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6570u; }
            if (ctx->pc != 0x1E6570u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6570u;
label_1e6570:
    // 0x1e6570: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e6570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e6574:
    // 0x1e6574: 0xc0781e4  jal         func_1E0790
label_1e6578:
    if (ctx->pc == 0x1E6578u) {
        ctx->pc = 0x1E6578u;
            // 0x1e6578: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->pc = 0x1E657Cu;
        goto label_1e657c;
    }
    ctx->pc = 0x1E6574u;
    SET_GPR_U32(ctx, 31, 0x1E657Cu);
    ctx->pc = 0x1E6578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6574u;
            // 0x1e6578: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0790u;
    if (runtime->hasFunction(0x1E0790u)) {
        auto targetFn = runtime->lookupFunction(0x1E0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E657Cu; }
        if (ctx->pc != 0x1E657Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStackVector__FPfPP12RS_STACKDATA_0x1e0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E657Cu; }
        if (ctx->pc != 0x1E657Cu) { return; }
    }
    ctx->pc = 0x1E657Cu;
label_1e657c:
    // 0x1e657c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6580:
    // 0x1e6580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6584:
    // 0x1e6584: 0x3e00008  jr          $ra
label_1e6588:
    if (ctx->pc == 0x1E6588u) {
        ctx->pc = 0x1E6588u;
            // 0x1e6588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E658Cu;
        goto label_fallthrough_0x1e6584;
    }
    ctx->pc = 0x1E6584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6584u;
            // 0x1e6588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e6584:
    ctx->pc = 0x1E658Cu;
}
