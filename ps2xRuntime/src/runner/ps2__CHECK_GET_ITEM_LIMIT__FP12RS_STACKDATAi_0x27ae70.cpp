#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_GET_ITEM_LIMIT__FP12RS_STACKDATAi
// Address: 0x27ae70 - 0x27af24
void ps2__CHECK_GET_ITEM_LIMIT__FP12RS_STACKDATAi_0x27ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_GET_ITEM_LIMIT__FP12RS_STACKDATAi_0x27ae70");
#endif

    switch (ctx->pc) {
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aefcu: goto label_27aefc;
        default: break;
    }

    ctx->pc = 0x27ae70u;

    // 0x27ae70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ae74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ae78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27ae7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ae80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ae84: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27AE84u;
    {
        const bool branch_taken_0x27ae84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE84u;
            // 0x27ae88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae84) {
            ctx->pc = 0x27AEBCu;
            goto label_27aebc;
        }
    }
    ctx->pc = 0x27AE8Cu;
    // 0x27ae8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ae90: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AE90u;
    {
        const bool branch_taken_0x27ae90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ae90) {
            ctx->pc = 0x27AEA0u;
            goto label_27aea0;
        }
    }
    ctx->pc = 0x27AE98u;
    // 0x27ae98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27AE98u;
    {
        const bool branch_taken_0x27ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE98u;
            // 0x27ae9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae98) {
            ctx->pc = 0x27AF04u;
            goto label_27af04;
        }
    }
    ctx->pc = 0x27AEA0u;
label_27aea0:
    // 0x27aea0: 0xc068514  jal         func_1A1450
    ctx->pc = 0x27AEA0u;
    SET_GPR_U32(ctx, 31, 0x27AEA8u);
    ctx->pc = 0x1A1450u;
    if (runtime->hasFunction(0x1A1450u)) {
        auto targetFn = runtime->lookupFunction(0x1A1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEA8u; }
        if (ctx->pc != 0x27AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemLimmitOver__Fv_0x1a1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEA8u; }
        if (ctx->pc != 0x27AEA8u) { return; }
    }
    ctx->pc = 0x27AEA8u;
label_27aea8:
    // 0x27aea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27aea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aeac: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27AEACu;
    SET_GPR_U32(ctx, 31, 0x27AEB4u);
    ctx->pc = 0x27AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEACu;
            // 0x27aeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEB4u; }
        if (ctx->pc != 0x27AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEB4u; }
        if (ctx->pc != 0x27AEB4u) { return; }
    }
    ctx->pc = 0x27AEB4u;
label_27aeb4:
    // 0x27aeb4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27AEB4u;
    {
        const bool branch_taken_0x27aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEB4u;
            // 0x27aeb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aeb4) {
            ctx->pc = 0x27AF10u;
            goto label_27af10;
        }
    }
    ctx->pc = 0x27AEBCu;
label_27aebc:
    // 0x27aebc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AEBCu;
    SET_GPR_U32(ctx, 31, 0x27AEC4u);
    ctx->pc = 0x27AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEBCu;
            // 0x27aec0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEC4u; }
        if (ctx->pc != 0x27AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEC4u; }
        if (ctx->pc != 0x27AEC4u) { return; }
    }
    ctx->pc = 0x27AEC4u;
label_27aec4:
    // 0x27aec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27aec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aecc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AECCu;
    SET_GPR_U32(ctx, 31, 0x27AED4u);
    ctx->pc = 0x27AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AECCu;
            // 0x27aed0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AED4u; }
        if (ctx->pc != 0x27AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AED4u; }
        if (ctx->pc != 0x27AED4u) { return; }
    }
    ctx->pc = 0x27AED4u;
label_27aed4:
    // 0x27aed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aed8: 0xc068598  jal         func_1A1660
    ctx->pc = 0x27AED8u;
    SET_GPR_U32(ctx, 31, 0x27AEE0u);
    ctx->pc = 0x27AEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AED8u;
            // 0x27aedc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1660u;
    if (runtime->hasFunction(0x1A1660u)) {
        auto targetFn = runtime->lookupFunction(0x1A1660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEE0u; }
        if (ctx->pc != 0x27AEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetItemRemainNum__Fi_0x1a1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEE0u; }
        if (ctx->pc != 0x27AEE0u) { return; }
    }
    ctx->pc = 0x27AEE0u;
label_27aee0:
    // 0x27aee0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x27aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27aee4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27AEE4u;
    {
        const bool branch_taken_0x27aee4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27aee4) {
            ctx->pc = 0x27AEF0u;
            goto label_27aef0;
        }
    }
    ctx->pc = 0x27AEECu;
    // 0x27aeec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27aeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27aef0:
    // 0x27aef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aef4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27AEF4u;
    SET_GPR_U32(ctx, 31, 0x27AEFCu);
    ctx->pc = 0x27AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEF4u;
            // 0x27aef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEFCu; }
        if (ctx->pc != 0x27AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEFCu; }
        if (ctx->pc != 0x27AEFCu) { return; }
    }
    ctx->pc = 0x27AEFCu;
label_27aefc:
    // 0x27aefc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27AEFCu;
    {
        const bool branch_taken_0x27aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aefc) {
            ctx->pc = 0x27AF0Cu;
            goto label_27af0c;
        }
    }
    ctx->pc = 0x27AF04u;
label_27af04:
    // 0x27af04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27AF04u;
    {
        const bool branch_taken_0x27af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF04u;
            // 0x27af08: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af04) {
            ctx->pc = 0x27AF14u;
            goto label_27af14;
        }
    }
    ctx->pc = 0x27AF0Cu;
label_27af0c:
    // 0x27af0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27af10:
    // 0x27af10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27af10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27af14:
    // 0x27af14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27af14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27af18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27af18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27af1c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF1Cu;
            // 0x27af20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AF24u;
}
