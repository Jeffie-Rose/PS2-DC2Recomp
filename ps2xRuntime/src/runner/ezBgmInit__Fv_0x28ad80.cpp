#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ezBgmInit__Fv
// Address: 0x28ad80 - 0x28ae14
void ezBgmInit__Fv_0x28ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ezBgmInit__Fv_0x28ad80");
#endif

    switch (ctx->pc) {
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adc4u: goto label_28adc4;
        case 0x28add4u: goto label_28add4;
        default: break;
    }

    ctx->pc = 0x28ad80u;

    // 0x28ad80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ad84: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x28ad88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ad88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ad8c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x28AD8Cu;
    SET_GPR_U32(ctx, 31, 0x28AD94u);
    ctx->pc = 0x28AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD8Cu;
            // 0x28ad90: 0x2484d630  addiu       $a0, $a0, -0x29D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD94u; }
        if (ctx->pc != 0x28AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD94u; }
        if (ctx->pc != 0x28AD94u) { return; }
    }
    ctx->pc = 0x28AD94u;
label_28ad94:
    // 0x28ad94: 0xc044a90  jal         func_112A40
    ctx->pc = 0x28AD94u;
    SET_GPR_U32(ctx, 31, 0x28AD9Cu);
    ctx->pc = 0x28AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD94u;
            // 0x28ad98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (runtime->hasFunction(0x112A40u)) {
        auto targetFn = runtime->lookupFunction(0x112A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD9Cu; }
        if (ctx->pc != 0x28AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x112a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD9Cu; }
        if (ctx->pc != 0x28AD9Cu) { return; }
    }
    ctx->pc = 0x28AD9Cu;
label_28ad9c:
    // 0x28ad9c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x28ada0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28ada4: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x28ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x28ada8: 0x34452345  ori         $a1, $v0, 0x2345
    ctx->pc = 0x28ada8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9029);
    // 0x28adac: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x28ADACu;
    SET_GPR_U32(ctx, 31, 0x28ADB4u);
    ctx->pc = 0x28ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADACu;
            // 0x28adb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (runtime->hasFunction(0x1130B0u)) {
        auto targetFn = runtime->lookupFunction(0x1130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADB4u; }
        if (ctx->pc != 0x28ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADB4u; }
        if (ctx->pc != 0x28ADB4u) { return; }
    }
    ctx->pc = 0x28ADB4u;
label_28adb4:
    // 0x28adb4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ADB4u;
    {
        const bool branch_taken_0x28adb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADB4u;
            // 0x28adb8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adb4) {
            ctx->pc = 0x28ADCCu;
            goto label_28adcc;
        }
    }
    ctx->pc = 0x28ADBCu;
    // 0x28adbc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x28ADBCu;
    SET_GPR_U32(ctx, 31, 0x28ADC4u);
    ctx->pc = 0x28ADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADBCu;
            // 0x28adc0: 0x2484d650  addiu       $a0, $a0, -0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADC4u; }
        if (ctx->pc != 0x28ADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADC4u; }
        if (ctx->pc != 0x28ADC4u) { return; }
    }
    ctx->pc = 0x28ADC4u;
label_28adc4:
    // 0x28adc4: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x28ADC4u;
    {
        const bool branch_taken_0x28adc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28adc4) {
            ctx->pc = 0x28ADC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28adc4;
        }
    }
    ctx->pc = 0x28ADCCu;
label_28adcc:
    // 0x28adcc: 0x0  nop
    ctx->pc = 0x28adccu;
    // NOP
    // 0x28add0: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x28add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_28add4:
    // 0x28add4: 0x0  nop
    ctx->pc = 0x28add4u;
    // NOP
    // 0x28add8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28add8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28addc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ade0: 0x0  nop
    ctx->pc = 0x28ade0u;
    // NOP
    // 0x28ade4: 0x0  nop
    ctx->pc = 0x28ade4u;
    // NOP
    // 0x28ade8: 0x0  nop
    ctx->pc = 0x28ade8u;
    // NOP
    // 0x28adec: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28ADECu;
    {
        const bool branch_taken_0x28adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28adec) {
            ctx->pc = 0x28ADD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28add4;
        }
    }
    ctx->pc = 0x28ADF4u;
    // 0x28adf4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x28adf8: 0x8c2252a4  lw          $v0, 0x52A4($at)
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21156)));
    // 0x28adfc: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28ADFCu;
    {
        const bool branch_taken_0x28adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28adfc) {
            ctx->pc = 0x28AD9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ad9c;
        }
    }
    ctx->pc = 0x28AE04u;
    // 0x28ae04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ae0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE0Cu;
            // 0x28ae10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AE14u;
}
