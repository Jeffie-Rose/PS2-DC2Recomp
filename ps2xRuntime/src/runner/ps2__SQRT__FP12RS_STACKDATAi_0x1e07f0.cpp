#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SQRT__FP12RS_STACKDATAi
// Address: 0x1e07f0 - 0x1e083c
void ps2__SQRT__FP12RS_STACKDATAi_0x1e07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SQRT__FP12RS_STACKDATAi_0x1e07f0");
#endif

    switch (ctx->pc) {
        case 0x1e0804u: goto label_1e0804;
        case 0x1e080cu: goto label_1e080c;
        case 0x1e0814u: goto label_1e0814;
        case 0x1e081cu: goto label_1e081c;
        case 0x1e0828u: goto label_1e0828;
        default: break;
    }

    ctx->pc = 0x1e07f0u;

    // 0x1e07f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e07f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e07f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e07f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e07fc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E07FCu;
    SET_GPR_U32(ctx, 31, 0x1E0804u);
    ctx->pc = 0x1E0800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07FCu;
            // 0x1e0800: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0804u; }
        if (ctx->pc != 0x1E0804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0804u; }
        if (ctx->pc != 0x1E0804u) { return; }
    }
    ctx->pc = 0x1E0804u;
label_1e0804:
    // 0x1e0804: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E0804u;
    SET_GPR_U32(ctx, 31, 0x1E080Cu);
    ctx->pc = 0x1E0808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0804u;
            // 0x1e0808: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E080Cu; }
        if (ctx->pc != 0x1E080Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E080Cu; }
        if (ctx->pc != 0x1E080Cu) { return; }
    }
    ctx->pc = 0x1E080Cu;
label_1e080c:
    // 0x1e080c: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x1E080Cu;
    SET_GPR_U32(ctx, 31, 0x1E0814u);
    ctx->pc = 0x1E0810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E080Cu;
            // 0x1e0810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0814u; }
        if (ctx->pc != 0x1E0814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0814u; }
        if (ctx->pc != 0x1E0814u) { return; }
    }
    ctx->pc = 0x1E0814u;
label_1e0814:
    // 0x1e0814: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1E0814u;
    SET_GPR_U32(ctx, 31, 0x1E081Cu);
    ctx->pc = 0x1E0818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0814u;
            // 0x1e0818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E081Cu; }
        if (ctx->pc != 0x1E081Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E081Cu; }
        if (ctx->pc != 0x1E081Cu) { return; }
    }
    ctx->pc = 0x1E081Cu;
label_1e081c:
    // 0x1e081c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0820: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E0820u;
    SET_GPR_U32(ctx, 31, 0x1E0828u);
    ctx->pc = 0x1E0824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0820u;
            // 0x1e0824: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0828u; }
        if (ctx->pc != 0x1E0828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0828u; }
        if (ctx->pc != 0x1E0828u) { return; }
    }
    ctx->pc = 0x1E0828u;
label_1e0828:
    // 0x1e0828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e082c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0834: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0834u;
            // 0x1e0838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E083Cu;
}
