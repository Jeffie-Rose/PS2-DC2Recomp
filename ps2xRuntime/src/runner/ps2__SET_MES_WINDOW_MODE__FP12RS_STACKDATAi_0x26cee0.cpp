#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_WINDOW_MODE__FP12RS_STACKDATAi
// Address: 0x26cee0 - 0x26cf40
void ps2__SET_MES_WINDOW_MODE__FP12RS_STACKDATAi_0x26cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_WINDOW_MODE__FP12RS_STACKDATAi_0x26cee0");
#endif

    switch (ctx->pc) {
        case 0x26cef8u: goto label_26cef8;
        case 0x26cf00u: goto label_26cf00;
        case 0x26cf1cu: goto label_26cf1c;
        case 0x26cf28u: goto label_26cf28;
        default: break;
    }

    ctx->pc = 0x26cee0u;

    // 0x26cee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ceec: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ceecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cef0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CEF0u;
    SET_GPR_U32(ctx, 31, 0x26CEF8u);
    ctx->pc = 0x26CEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEF0u;
            // 0x26cef4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEF8u; }
        if (ctx->pc != 0x26CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEF8u; }
        if (ctx->pc != 0x26CEF8u) { return; }
    }
    ctx->pc = 0x26CEF8u;
label_26cef8:
    // 0x26cef8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CEF8u;
    SET_GPR_U32(ctx, 31, 0x26CF00u);
    ctx->pc = 0x26CEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEF8u;
            // 0x26cefc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF00u; }
        if (ctx->pc != 0x26CF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF00u; }
        if (ctx->pc != 0x26CF00u) { return; }
    }
    ctx->pc = 0x26CF00u;
label_26cf00:
    // 0x26cf00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf04: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CF04u;
    {
        const bool branch_taken_0x26cf04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF04u;
            // 0x26cf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf04) {
            ctx->pc = 0x26CF14u;
            goto label_26cf14;
        }
    }
    ctx->pc = 0x26CF0Cu;
    // 0x26cf0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26CF0Cu;
    {
        const bool branch_taken_0x26cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF0Cu;
            // 0x26cf10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf0c) {
            ctx->pc = 0x26CF2Cu;
            goto label_26cf2c;
        }
    }
    ctx->pc = 0x26CF14u;
label_26cf14:
    // 0x26cf14: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CF14u;
    SET_GPR_U32(ctx, 31, 0x26CF1Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF1Cu; }
        if (ctx->pc != 0x26CF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF1Cu; }
        if (ctx->pc != 0x26CF1Cu) { return; }
    }
    ctx->pc = 0x26CF1Cu;
label_26cf1c:
    // 0x26cf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf20: 0xc054cdc  jal         func_153370
    ctx->pc = 0x26CF20u;
    SET_GPR_U32(ctx, 31, 0x26CF28u);
    ctx->pc = 0x26CF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF20u;
            // 0x26cf24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF28u; }
        if (ctx->pc != 0x26CF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF28u; }
        if (ctx->pc != 0x26CF28u) { return; }
    }
    ctx->pc = 0x26CF28u;
label_26cf28:
    // 0x26cf28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cf2c:
    // 0x26cf2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cf30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cf34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x26CF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF38u;
            // 0x26cf3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CF40u;
}
