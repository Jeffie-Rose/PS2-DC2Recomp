#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_QUEST_ETC__FP12RS_STACKDATAi
// Address: 0x26ad80 - 0x26ade8
void ps2__GET_QUEST_ETC__FP12RS_STACKDATAi_0x26ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_QUEST_ETC__FP12RS_STACKDATAi_0x26ad80");
#endif

    switch (ctx->pc) {
        case 0x26ad98u: goto label_26ad98;
        case 0x26ada8u: goto label_26ada8;
        case 0x26adc0u: goto label_26adc0;
        case 0x26adccu: goto label_26adcc;
        default: break;
    }

    ctx->pc = 0x26ad80u;

    // 0x26ad80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ad84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ad88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ad8c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ad8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ad90: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AD90u;
    SET_GPR_U32(ctx, 31, 0x26AD98u);
    ctx->pc = 0x26AD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD90u;
            // 0x26ad94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD98u; }
        if (ctx->pc != 0x26AD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD98u; }
        if (ctx->pc != 0x26AD98u) { return; }
    }
    ctx->pc = 0x26AD98u;
label_26ad98:
    // 0x26ad98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ad9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ada0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ADA0u;
    SET_GPR_U32(ctx, 31, 0x26ADA8u);
    ctx->pc = 0x26ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADA0u;
            // 0x26ada4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADA8u; }
        if (ctx->pc != 0x26ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADA8u; }
        if (ctx->pc != 0x26ADA8u) { return; }
    }
    ctx->pc = 0x26ADA8u;
label_26ada8:
    // 0x26ada8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ADA8u;
    {
        const bool branch_taken_0x26ada8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADA8u;
            // 0x26adac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ada8) {
            ctx->pc = 0x26ADB8u;
            goto label_26adb8;
        }
    }
    ctx->pc = 0x26ADB0u;
    // 0x26adb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26ADB0u;
    {
        const bool branch_taken_0x26adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADB0u;
            // 0x26adb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adb0) {
            ctx->pc = 0x26ADD4u;
            goto label_26add4;
        }
    }
    ctx->pc = 0x26ADB8u;
label_26adb8:
    // 0x26adb8: 0xc0c6adc  jal         func_31AB70
    ctx->pc = 0x26ADB8u;
    SET_GPR_U32(ctx, 31, 0x26ADC0u);
    ctx->pc = 0x31AB70u;
    if (runtime->hasFunction(0x31AB70u)) {
        auto targetFn = runtime->lookupFunction(0x31AB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADC0u; }
        if (ctx->pc != 0x26ADC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestRequestStatus__Fi_0x31ab70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADC0u; }
        if (ctx->pc != 0x26ADC0u) { return; }
    }
    ctx->pc = 0x26ADC0u;
label_26adc0:
    // 0x26adc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26adc4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26ADC4u;
    SET_GPR_U32(ctx, 31, 0x26ADCCu);
    ctx->pc = 0x26ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADC4u;
            // 0x26adc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADCCu; }
        if (ctx->pc != 0x26ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADCCu; }
        if (ctx->pc != 0x26ADCCu) { return; }
    }
    ctx->pc = 0x26ADCCu;
label_26adcc:
    // 0x26adcc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x26ADCCu;
    {
        const bool branch_taken_0x26adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADCCu;
            // 0x26add0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adcc) {
            ctx->pc = 0x26ADD4u;
            goto label_26add4;
        }
    }
    ctx->pc = 0x26ADD4u;
label_26add4:
    // 0x26add4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26add4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26add8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26add8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26addc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26addcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ade0: 0x3e00008  jr          $ra
    ctx->pc = 0x26ADE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADE0u;
            // 0x26ade4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ADE8u;
}
