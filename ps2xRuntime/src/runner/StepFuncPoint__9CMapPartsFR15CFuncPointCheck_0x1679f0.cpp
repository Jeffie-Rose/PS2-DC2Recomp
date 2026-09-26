#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepFuncPoint__9CMapPartsFR15CFuncPointCheck
// Address: 0x1679f0 - 0x167a54
void StepFuncPoint__9CMapPartsFR15CFuncPointCheck_0x1679f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepFuncPoint__9CMapPartsFR15CFuncPointCheck_0x1679f0");
#endif

    switch (ctx->pc) {
        case 0x167a04u: goto label_167a04;
        case 0x167a14u: goto label_167a14;
        case 0x167a24u: goto label_167a24;
        case 0x167a34u: goto label_167a34;
        case 0x167a44u: goto label_167a44;
        default: break;
    }

    ctx->pc = 0x1679f0u;

    // 0x1679f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1679f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1679f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1679f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1679f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1679fc: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1679FCu;
    SET_GPR_U32(ctx, 31, 0x167A04u);
    ctx->pc = 0x167A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1679FCu;
            // 0x167a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A04u; }
        if (ctx->pc != 0x167A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A04u; }
        if (ctx->pc != 0x167A04u) { return; }
    }
    ctx->pc = 0x167A04u;
label_167a04:
    // 0x167a04: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x167a08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x167a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167a0c: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x167A0Cu;
    SET_GPR_U32(ctx, 31, 0x167A14u);
    ctx->pc = 0x167A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A0Cu;
            // 0x167a10: 0x260602fc  addiu       $a2, $s0, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A14u; }
        if (ctx->pc != 0x167A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A14u; }
        if (ctx->pc != 0x167A14u) { return; }
    }
    ctx->pc = 0x167A14u;
label_167a14:
    // 0x167a14: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x167a18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x167a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167a1c: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x167A1Cu;
    SET_GPR_U32(ctx, 31, 0x167A24u);
    ctx->pc = 0x167A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A1Cu;
            // 0x167a20: 0x260602fc  addiu       $a2, $s0, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A24u; }
        if (ctx->pc != 0x167A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A24u; }
        if (ctx->pc != 0x167A24u) { return; }
    }
    ctx->pc = 0x167A24u;
label_167a24:
    // 0x167a24: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x167a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x167a28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a2c: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x167A2Cu;
    SET_GPR_U32(ctx, 31, 0x167A34u);
    ctx->pc = 0x167A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A2Cu;
            // 0x167a30: 0x260602fc  addiu       $a2, $s0, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A34u; }
        if (ctx->pc != 0x167A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A34u; }
        if (ctx->pc != 0x167A34u) { return; }
    }
    ctx->pc = 0x167A34u;
label_167a34:
    // 0x167a34: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x167a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x167a38: 0x260602fc  addiu       $a2, $s0, 0x2FC
    ctx->pc = 0x167a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
    // 0x167a3c: 0xc0a77f0  jal         func_29DFC0
    ctx->pc = 0x167A3Cu;
    SET_GPR_U32(ctx, 31, 0x167A44u);
    ctx->pc = 0x167A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A3Cu;
            // 0x167a40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFC0u;
    if (runtime->hasFunction(0x29DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A44u; }
        if (ctx->pc != 0x167A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A44u; }
        if (ctx->pc != 0x167A44u) { return; }
    }
    ctx->pc = 0x167A44u;
label_167a44:
    // 0x167a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x167A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167A4Cu;
            // 0x167a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167A54u;
}
