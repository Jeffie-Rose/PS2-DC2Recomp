#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_EVENT_DATA__FP12RS_STACKDATAi
// Address: 0x26ae30 - 0x26af44
void ps2__SET_EVENT_DATA__FP12RS_STACKDATAi_0x26ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_EVENT_DATA__FP12RS_STACKDATAi_0x26ae30");
#endif

    switch (ctx->pc) {
        case 0x26ae60u: goto label_26ae60;
        case 0x26ae8cu: goto label_26ae8c;
        case 0x26ae9cu: goto label_26ae9c;
        case 0x26aeacu: goto label_26aeac;
        case 0x26aebcu: goto label_26aebc;
        case 0x26aeccu: goto label_26aecc;
        case 0x26aedcu: goto label_26aedc;
        case 0x26aeecu: goto label_26aeec;
        case 0x26aefcu: goto label_26aefc;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af1cu: goto label_26af1c;
        default: break;
    }

    ctx->pc = 0x26ae30u;

    // 0x26ae30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ae34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ae38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ae3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ae40: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26ae44: 0x24502e90  addiu       $s0, $v0, 0x2E90
    ctx->pc = 0x26ae44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
    // 0x26ae48: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AE48u;
    {
        const bool branch_taken_0x26ae48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE48u;
            // 0x26ae4c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae48) {
            ctx->pc = 0x26AE58u;
            goto label_26ae58;
        }
    }
    ctx->pc = 0x26AE50u;
    // 0x26ae50: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26AE50u;
    {
        const bool branch_taken_0x26ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE50u;
            // 0x26ae54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae50) {
            ctx->pc = 0x26AF30u;
            goto label_26af30;
        }
    }
    ctx->pc = 0x26AE58u;
label_26ae58:
    // 0x26ae58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AE58u;
    SET_GPR_U32(ctx, 31, 0x26AE60u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE60u; }
        if (ctx->pc != 0x26AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE60u; }
        if (ctx->pc != 0x26AE60u) { return; }
    }
    ctx->pc = 0x26AE60u;
label_26ae60:
    // 0x26ae60: 0x2c41000f  sltiu       $at, $v0, 0xF
    ctx->pc = 0x26ae60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x26ae64: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x26AE64u;
    {
        const bool branch_taken_0x26ae64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE64u;
            // 0x26ae68: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae64) {
            ctx->pc = 0x26AF24u;
            goto label_26af24;
        }
    }
    ctx->pc = 0x26AE6Cu;
    // 0x26ae6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26ae70: 0x2463c930  addiu       $v1, $v1, -0x36D0
    ctx->pc = 0x26ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
    // 0x26ae74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ae78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ae7c: 0x400008  jr          $v0
    ctx->pc = 0x26AE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE84u: goto label_26ae84;
            case 0x26AE94u: goto label_26ae94;
            case 0x26AEA4u: goto label_26aea4;
            case 0x26AEB4u: goto label_26aeb4;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AED4u: goto label_26aed4;
            case 0x26AEE4u: goto label_26aee4;
            case 0x26AEF4u: goto label_26aef4;
            case 0x26AF04u: goto label_26af04;
            case 0x26AF14u: goto label_26af14;
            case 0x26AF24u: goto label_26af24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AE84u;
label_26ae84:
    // 0x26ae84: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AE84u;
    SET_GPR_U32(ctx, 31, 0x26AE8Cu);
    ctx->pc = 0x26AE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE84u;
            // 0x26ae88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE8Cu; }
        if (ctx->pc != 0x26AE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE8Cu; }
        if (ctx->pc != 0x26AE8Cu) { return; }
    }
    ctx->pc = 0x26AE8Cu;
label_26ae8c:
    // 0x26ae8c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x26AE8Cu;
    {
        const bool branch_taken_0x26ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE8Cu;
            // 0x26ae90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae8c) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AE94u;
label_26ae94:
    // 0x26ae94: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AE94u;
    SET_GPR_U32(ctx, 31, 0x26AE9Cu);
    ctx->pc = 0x26AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE94u;
            // 0x26ae98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE9Cu; }
        if (ctx->pc != 0x26AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE9Cu; }
        if (ctx->pc != 0x26AE9Cu) { return; }
    }
    ctx->pc = 0x26AE9Cu;
label_26ae9c:
    // 0x26ae9c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26AE9Cu;
    {
        const bool branch_taken_0x26ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE9Cu;
            // 0x26aea0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae9c) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AEA4u;
label_26aea4:
    // 0x26aea4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AEA4u;
    SET_GPR_U32(ctx, 31, 0x26AEACu);
    ctx->pc = 0x26AEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEA4u;
            // 0x26aea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEACu; }
        if (ctx->pc != 0x26AEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEACu; }
        if (ctx->pc != 0x26AEACu) { return; }
    }
    ctx->pc = 0x26AEACu;
label_26aeac:
    // 0x26aeac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26AEACu;
    {
        const bool branch_taken_0x26aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEACu;
            // 0x26aeb0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aeac) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AEB4u;
label_26aeb4:
    // 0x26aeb4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AEB4u;
    SET_GPR_U32(ctx, 31, 0x26AEBCu);
    ctx->pc = 0x26AEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEB4u;
            // 0x26aeb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEBCu; }
        if (ctx->pc != 0x26AEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEBCu; }
        if (ctx->pc != 0x26AEBCu) { return; }
    }
    ctx->pc = 0x26AEBCu;
label_26aebc:
    // 0x26aebc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26AEBCu;
    {
        const bool branch_taken_0x26aebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEBCu;
            // 0x26aec0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aebc) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AEC4u;
label_26aec4:
    // 0x26aec4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AEC4u;
    SET_GPR_U32(ctx, 31, 0x26AECCu);
    ctx->pc = 0x26AEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEC4u;
            // 0x26aec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AECCu; }
        if (ctx->pc != 0x26AECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AECCu; }
        if (ctx->pc != 0x26AECCu) { return; }
    }
    ctx->pc = 0x26AECCu;
label_26aecc:
    // 0x26aecc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26AECCu;
    {
        const bool branch_taken_0x26aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AECCu;
            // 0x26aed0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aecc) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AED4u;
label_26aed4:
    // 0x26aed4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AED4u;
    SET_GPR_U32(ctx, 31, 0x26AEDCu);
    ctx->pc = 0x26AED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AED4u;
            // 0x26aed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEDCu; }
        if (ctx->pc != 0x26AEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEDCu; }
        if (ctx->pc != 0x26AEDCu) { return; }
    }
    ctx->pc = 0x26AEDCu;
label_26aedc:
    // 0x26aedc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26AEDCu;
    {
        const bool branch_taken_0x26aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEDCu;
            // 0x26aee0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aedc) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AEE4u;
label_26aee4:
    // 0x26aee4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AEE4u;
    SET_GPR_U32(ctx, 31, 0x26AEECu);
    ctx->pc = 0x26AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEE4u;
            // 0x26aee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEECu; }
        if (ctx->pc != 0x26AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEECu; }
        if (ctx->pc != 0x26AEECu) { return; }
    }
    ctx->pc = 0x26AEECu;
label_26aeec:
    // 0x26aeec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26AEECu;
    {
        const bool branch_taken_0x26aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEECu;
            // 0x26aef0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aeec) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AEF4u;
label_26aef4:
    // 0x26aef4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AEF4u;
    SET_GPR_U32(ctx, 31, 0x26AEFCu);
    ctx->pc = 0x26AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEF4u;
            // 0x26aef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEFCu; }
        if (ctx->pc != 0x26AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEFCu; }
        if (ctx->pc != 0x26AEFCu) { return; }
    }
    ctx->pc = 0x26AEFCu;
label_26aefc:
    // 0x26aefc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26AEFCu;
    {
        const bool branch_taken_0x26aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEFCu;
            // 0x26af00: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aefc) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AF04u;
label_26af04:
    // 0x26af04: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AF04u;
    SET_GPR_U32(ctx, 31, 0x26AF0Cu);
    ctx->pc = 0x26AF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF04u;
            // 0x26af08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF0Cu; }
        if (ctx->pc != 0x26AF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF0Cu; }
        if (ctx->pc != 0x26AF0Cu) { return; }
    }
    ctx->pc = 0x26AF0Cu;
label_26af0c:
    // 0x26af0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26AF0Cu;
    {
        const bool branch_taken_0x26af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF0Cu;
            // 0x26af10: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af0c) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AF14u;
label_26af14:
    // 0x26af14: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AF14u;
    SET_GPR_U32(ctx, 31, 0x26AF1Cu);
    ctx->pc = 0x26AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF14u;
            // 0x26af18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF1Cu; }
        if (ctx->pc != 0x26AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AF1Cu; }
        if (ctx->pc != 0x26AF1Cu) { return; }
    }
    ctx->pc = 0x26AF1Cu;
label_26af1c:
    // 0x26af1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26AF1Cu;
    {
        const bool branch_taken_0x26af1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF1Cu;
            // 0x26af20: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af1c) {
            ctx->pc = 0x26AF2Cu;
            goto label_26af2c;
        }
    }
    ctx->pc = 0x26AF24u;
label_26af24:
    // 0x26af24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26AF24u;
    {
        const bool branch_taken_0x26af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF24u;
            // 0x26af28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af24) {
            ctx->pc = 0x26AF30u;
            goto label_26af30;
        }
    }
    ctx->pc = 0x26AF2Cu;
label_26af2c:
    // 0x26af2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26af30:
    // 0x26af30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26af30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26af34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26af34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26af38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26af38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26af3c: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF3Cu;
            // 0x26af40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AF44u;
}
