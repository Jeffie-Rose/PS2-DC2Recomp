#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ATAN2F__FP12RS_STACKDATAi
// Address: 0x2e3860 - 0x2e38bc
void ps2__ATAN2F__FP12RS_STACKDATAi_0x2e3860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ATAN2F__FP12RS_STACKDATAi_0x2e3860");
#endif

    switch (ctx->pc) {
        case 0x2e3884u: goto label_2e3884;
        case 0x2e3894u: goto label_2e3894;
        case 0x2e389cu: goto label_2e389c;
        case 0x2e38a8u: goto label_2e38a8;
        default: break;
    }

    ctx->pc = 0x2e3860u;

    // 0x2e3860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3864: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e386c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E386Cu;
    {
        const bool branch_taken_0x2e386c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E386Cu;
            // 0x2e3870: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e386c) {
            ctx->pc = 0x2E387Cu;
            goto label_2e387c;
        }
    }
    ctx->pc = 0x2E3874u;
    // 0x2e3874: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E3874u;
    {
        const bool branch_taken_0x2e3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3874u;
            // 0x2e3878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3874) {
            ctx->pc = 0x2E38ACu;
            goto label_2e38ac;
        }
    }
    ctx->pc = 0x2E387Cu;
label_2e387c:
    // 0x2e387c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E387Cu;
    SET_GPR_U32(ctx, 31, 0x2E3884u);
    ctx->pc = 0x2E3880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E387Cu;
            // 0x2e3880: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3884u; }
        if (ctx->pc != 0x2E3884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3884u; }
        if (ctx->pc != 0x2E3884u) { return; }
    }
    ctx->pc = 0x2E3884u;
label_2e3884:
    // 0x2e3884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3888: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e3888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e388c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E388Cu;
    SET_GPR_U32(ctx, 31, 0x2E3894u);
    ctx->pc = 0x2E3890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E388Cu;
            // 0x2e3890: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3894u; }
        if (ctx->pc != 0x2E3894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3894u; }
        if (ctx->pc != 0x2E3894u) { return; }
    }
    ctx->pc = 0x2E3894u;
label_2e3894:
    // 0x2e3894: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2E3894u;
    SET_GPR_U32(ctx, 31, 0x2E389Cu);
    ctx->pc = 0x2E3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3894u;
            // 0x2e3898: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E389Cu; }
        if (ctx->pc != 0x2E389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E389Cu; }
        if (ctx->pc != 0x2E389Cu) { return; }
    }
    ctx->pc = 0x2E389Cu;
label_2e389c:
    // 0x2e389c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e38a0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E38A0u;
    SET_GPR_U32(ctx, 31, 0x2E38A8u);
    ctx->pc = 0x2E38A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38A0u;
            // 0x2e38a4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38A8u; }
        if (ctx->pc != 0x2E38A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38A8u; }
        if (ctx->pc != 0x2E38A8u) { return; }
    }
    ctx->pc = 0x2E38A8u;
label_2e38a8:
    // 0x2e38a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e38ac:
    // 0x2e38ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e38acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e38b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e38b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e38b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E38B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E38B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38B4u;
            // 0x2e38b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E38BCu;
}
