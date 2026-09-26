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
// Address: 0x1e0840 - 0x1e088c
void ps2__ATAN2F__FP12RS_STACKDATAi_0x1e0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ATAN2F__FP12RS_STACKDATAi_0x1e0840");
#endif

    switch (ctx->pc) {
        case 0x1e0854u: goto label_1e0854;
        case 0x1e0864u: goto label_1e0864;
        case 0x1e086cu: goto label_1e086c;
        case 0x1e0878u: goto label_1e0878;
        default: break;
    }

    ctx->pc = 0x1e0840u;

    // 0x1e0840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e084c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E084Cu;
    SET_GPR_U32(ctx, 31, 0x1E0854u);
    ctx->pc = 0x1E0850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E084Cu;
            // 0x1e0850: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0854u; }
        if (ctx->pc != 0x1E0854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0854u; }
        if (ctx->pc != 0x1E0854u) { return; }
    }
    ctx->pc = 0x1E0854u;
label_1e0854:
    // 0x1e0854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0858: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e0858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e085c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E085Cu;
    SET_GPR_U32(ctx, 31, 0x1E0864u);
    ctx->pc = 0x1E0860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E085Cu;
            // 0x1e0860: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0864u; }
        if (ctx->pc != 0x1E0864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0864u; }
        if (ctx->pc != 0x1E0864u) { return; }
    }
    ctx->pc = 0x1E0864u;
label_1e0864:
    // 0x1e0864: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x1E0864u;
    SET_GPR_U32(ctx, 31, 0x1E086Cu);
    ctx->pc = 0x1E0868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0864u;
            // 0x1e0868: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E086Cu; }
        if (ctx->pc != 0x1E086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E086Cu; }
        if (ctx->pc != 0x1E086Cu) { return; }
    }
    ctx->pc = 0x1E086Cu;
label_1e086c:
    // 0x1e086c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0870: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E0870u;
    SET_GPR_U32(ctx, 31, 0x1E0878u);
    ctx->pc = 0x1E0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0870u;
            // 0x1e0874: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0878u; }
        if (ctx->pc != 0x1E0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0878u; }
        if (ctx->pc != 0x1E0878u) { return; }
    }
    ctx->pc = 0x1E0878u;
label_1e0878:
    // 0x1e0878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e087c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0884: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0884u;
            // 0x1e0888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E088Cu;
}
