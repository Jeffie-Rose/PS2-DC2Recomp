#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_CREATE__FP12RS_STACKDATAi
// Address: 0x27a610 - 0x27a708
void ps2__ESM_CREATE__FP12RS_STACKDATAi_0x27a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_CREATE__FP12RS_STACKDATAi_0x27a610");
#endif

    switch (ctx->pc) {
        case 0x27a63cu: goto label_27a63c;
        case 0x27a680u: goto label_27a680;
        case 0x27a690u: goto label_27a690;
        case 0x27a6a4u: goto label_27a6a4;
        case 0x27a6b4u: goto label_27a6b4;
        case 0x27a6c8u: goto label_27a6c8;
        case 0x27a6d4u: goto label_27a6d4;
        default: break;
    }

    ctx->pc = 0x27a610u;

    // 0x27a610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a620: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a624: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A624u;
    {
        const bool branch_taken_0x27a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A624u;
            // 0x27a628: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a624) {
            ctx->pc = 0x27A634u;
            goto label_27a634;
        }
    }
    ctx->pc = 0x27A62Cu;
    // 0x27a62c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27A62Cu;
    {
        const bool branch_taken_0x27a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A62Cu;
            // 0x27a630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a62c) {
            ctx->pc = 0x27A6F4u;
            goto label_27a6f4;
        }
    }
    ctx->pc = 0x27A634u;
label_27a634:
    // 0x27a634: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27A634u;
    SET_GPR_U32(ctx, 31, 0x27A63Cu);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A63Cu; }
        if (ctx->pc != 0x27A63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A63Cu; }
        if (ctx->pc != 0x27A63Cu) { return; }
    }
    ctx->pc = 0x27A63Cu;
label_27a63c:
    // 0x27a63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a640: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a644: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27A644u;
    {
        const bool branch_taken_0x27a644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A644u;
            // 0x27a648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a644) {
            ctx->pc = 0x27A6ACu;
            goto label_27a6ac;
        }
    }
    ctx->pc = 0x27A64Cu;
    // 0x27a64c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a650: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27A650u;
    {
        const bool branch_taken_0x27a650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A650u;
            // 0x27a654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a650) {
            ctx->pc = 0x27A688u;
            goto label_27a688;
        }
    }
    ctx->pc = 0x27A658u;
    // 0x27a658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a65c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A65Cu;
    {
        const bool branch_taken_0x27a65c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a65c) {
            ctx->pc = 0x27A66Cu;
            goto label_27a66c;
        }
    }
    ctx->pc = 0x27A664u;
    // 0x27a664: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27A664u;
    {
        const bool branch_taken_0x27a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A664u;
            // 0x27a668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a664) {
            ctx->pc = 0x27A6E8u;
            goto label_27a6e8;
        }
    }
    ctx->pc = 0x27A66Cu;
label_27a66c:
    // 0x27a66c: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a674: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a678: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x27A678u;
    SET_GPR_U32(ctx, 31, 0x27A680u);
    ctx->pc = 0x27A67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A678u;
            // 0x27a67c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A680u; }
        if (ctx->pc != 0x27A680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A680u; }
        if (ctx->pc != 0x27A680u) { return; }
    }
    ctx->pc = 0x27A680u;
label_27a680:
    // 0x27a680: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27A680u;
    {
        const bool branch_taken_0x27a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A680u;
            // 0x27a684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a680) {
            ctx->pc = 0x27A6F4u;
            goto label_27a6f4;
        }
    }
    ctx->pc = 0x27A688u;
label_27a688:
    // 0x27a688: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A688u;
    SET_GPR_U32(ctx, 31, 0x27A690u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A690u; }
        if (ctx->pc != 0x27A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A690u; }
        if (ctx->pc != 0x27A690u) { return; }
    }
    ctx->pc = 0x27A690u;
label_27a690:
    // 0x27a690: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a698: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27a698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a69c: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x27A69Cu;
    SET_GPR_U32(ctx, 31, 0x27A6A4u);
    ctx->pc = 0x27A6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A69Cu;
            // 0x27a6a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6A4u; }
        if (ctx->pc != 0x27A6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6A4u; }
        if (ctx->pc != 0x27A6A4u) { return; }
    }
    ctx->pc = 0x27A6A4u;
label_27a6a4:
    // 0x27a6a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27A6A4u;
    {
        const bool branch_taken_0x27a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a6a4) {
            ctx->pc = 0x27A6F0u;
            goto label_27a6f0;
        }
    }
    ctx->pc = 0x27A6ACu;
label_27a6ac:
    // 0x27a6ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A6ACu;
    SET_GPR_U32(ctx, 31, 0x27A6B4u);
    ctx->pc = 0x27A6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6ACu;
            // 0x27a6b0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6B4u; }
        if (ctx->pc != 0x27A6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6B4u; }
        if (ctx->pc != 0x27A6B4u) { return; }
    }
    ctx->pc = 0x27A6B4u;
label_27a6b4:
    // 0x27a6b4: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27a6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6c0: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x27A6C0u;
    SET_GPR_U32(ctx, 31, 0x27A6C8u);
    ctx->pc = 0x27A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6C0u;
            // 0x27a6c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6C8u; }
        if (ctx->pc != 0x27A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6C8u; }
        if (ctx->pc != 0x27A6C8u) { return; }
    }
    ctx->pc = 0x27A6C8u;
label_27a6c8:
    // 0x27a6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6cc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A6CCu;
    SET_GPR_U32(ctx, 31, 0x27A6D4u);
    ctx->pc = 0x27A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6CCu;
            // 0x27a6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6D4u; }
        if (ctx->pc != 0x27A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6D4u; }
        if (ctx->pc != 0x27A6D4u) { return; }
    }
    ctx->pc = 0x27A6D4u;
label_27a6d4:
    // 0x27a6d4: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x27a6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27a6d8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A6D8u;
    {
        const bool branch_taken_0x27a6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6D8u;
            // 0x27a6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6d8) {
            ctx->pc = 0x27A6F0u;
            goto label_27a6f0;
        }
    }
    ctx->pc = 0x27A6E0u;
    // 0x27a6e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A6E0u;
    {
        const bool branch_taken_0x27a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6E0u;
            // 0x27a6e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6e0) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A6E8u;
label_27a6e8:
    // 0x27a6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A6E8u;
    {
        const bool branch_taken_0x27a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a6e8) {
            ctx->pc = 0x27A6F4u;
            goto label_27a6f4;
        }
    }
    ctx->pc = 0x27A6F0u;
label_27a6f0:
    // 0x27a6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a6f4:
    // 0x27a6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27a6f8:
    // 0x27a6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a700: 0x3e00008  jr          $ra
    ctx->pc = 0x27A700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A700u;
            // 0x27a704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A708u;
}
