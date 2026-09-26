#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_FUKIDASHI__FP12RS_STACKDATAi
// Address: 0x26ce80 - 0x26cee0
void ps2__SET_MES_FUKIDASHI__FP12RS_STACKDATAi_0x26ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_FUKIDASHI__FP12RS_STACKDATAi_0x26ce80");
#endif

    switch (ctx->pc) {
        case 0x26ce98u: goto label_26ce98;
        case 0x26cea0u: goto label_26cea0;
        case 0x26cebcu: goto label_26cebc;
        case 0x26cec8u: goto label_26cec8;
        default: break;
    }

    ctx->pc = 0x26ce80u;

    // 0x26ce80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ce84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ce88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ce8c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ce8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ce90: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CE90u;
    SET_GPR_U32(ctx, 31, 0x26CE98u);
    ctx->pc = 0x26CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE90u;
            // 0x26ce94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE98u; }
        if (ctx->pc != 0x26CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE98u; }
        if (ctx->pc != 0x26CE98u) { return; }
    }
    ctx->pc = 0x26CE98u;
label_26ce98:
    // 0x26ce98: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CE98u;
    SET_GPR_U32(ctx, 31, 0x26CEA0u);
    ctx->pc = 0x26CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE98u;
            // 0x26ce9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEA0u; }
        if (ctx->pc != 0x26CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEA0u; }
        if (ctx->pc != 0x26CEA0u) { return; }
    }
    ctx->pc = 0x26CEA0u;
label_26cea0:
    // 0x26cea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cea4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CEA4u;
    {
        const bool branch_taken_0x26cea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEA4u;
            // 0x26cea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cea4) {
            ctx->pc = 0x26CEB4u;
            goto label_26ceb4;
        }
    }
    ctx->pc = 0x26CEACu;
    // 0x26ceac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26CEACu;
    {
        const bool branch_taken_0x26ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEACu;
            // 0x26ceb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ceac) {
            ctx->pc = 0x26CECCu;
            goto label_26cecc;
        }
    }
    ctx->pc = 0x26CEB4u;
label_26ceb4:
    // 0x26ceb4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CEB4u;
    SET_GPR_U32(ctx, 31, 0x26CEBCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEBCu; }
        if (ctx->pc != 0x26CEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEBCu; }
        if (ctx->pc != 0x26CEBCu) { return; }
    }
    ctx->pc = 0x26CEBCu;
label_26cebc:
    // 0x26cebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cec0: 0xc054cdc  jal         func_153370
    ctx->pc = 0x26CEC0u;
    SET_GPR_U32(ctx, 31, 0x26CEC8u);
    ctx->pc = 0x26CEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CEC0u;
            // 0x26cec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEC8u; }
        if (ctx->pc != 0x26CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CEC8u; }
        if (ctx->pc != 0x26CEC8u) { return; }
    }
    ctx->pc = 0x26CEC8u;
label_26cec8:
    // 0x26cec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cecc:
    // 0x26cecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ceccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ced0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ced0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ced4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ced4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x26CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CED8u;
            // 0x26cedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CEE0u;
}
