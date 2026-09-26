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
// Address: 0x276b90 - 0x276bdc
void ps2__SQRT__FP12RS_STACKDATAi_0x276b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SQRT__FP12RS_STACKDATAi_0x276b90");
#endif

    switch (ctx->pc) {
        case 0x276ba4u: goto label_276ba4;
        case 0x276bacu: goto label_276bac;
        case 0x276bb4u: goto label_276bb4;
        case 0x276bbcu: goto label_276bbc;
        case 0x276bc8u: goto label_276bc8;
        default: break;
    }

    ctx->pc = 0x276b90u;

    // 0x276b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276b9c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276B9Cu;
    SET_GPR_U32(ctx, 31, 0x276BA4u);
    ctx->pc = 0x276BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B9Cu;
            // 0x276ba0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BA4u; }
        if (ctx->pc != 0x276BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BA4u; }
        if (ctx->pc != 0x276BA4u) { return; }
    }
    ctx->pc = 0x276BA4u;
label_276ba4:
    // 0x276ba4: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x276BA4u;
    SET_GPR_U32(ctx, 31, 0x276BACu);
    ctx->pc = 0x276BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BA4u;
            // 0x276ba8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BACu; }
        if (ctx->pc != 0x276BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BACu; }
        if (ctx->pc != 0x276BACu) { return; }
    }
    ctx->pc = 0x276BACu;
label_276bac:
    // 0x276bac: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x276BACu;
    SET_GPR_U32(ctx, 31, 0x276BB4u);
    ctx->pc = 0x276BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BACu;
            // 0x276bb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BB4u; }
        if (ctx->pc != 0x276BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BB4u; }
        if (ctx->pc != 0x276BB4u) { return; }
    }
    ctx->pc = 0x276BB4u;
label_276bb4:
    // 0x276bb4: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x276BB4u;
    SET_GPR_U32(ctx, 31, 0x276BBCu);
    ctx->pc = 0x276BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BB4u;
            // 0x276bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BBCu; }
        if (ctx->pc != 0x276BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BBCu; }
        if (ctx->pc != 0x276BBCu) { return; }
    }
    ctx->pc = 0x276BBCu;
label_276bbc:
    // 0x276bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bc0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276BC0u;
    SET_GPR_U32(ctx, 31, 0x276BC8u);
    ctx->pc = 0x276BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BC0u;
            // 0x276bc4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BC8u; }
        if (ctx->pc != 0x276BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BC8u; }
        if (ctx->pc != 0x276BC8u) { return; }
    }
    ctx->pc = 0x276BC8u;
label_276bc8:
    // 0x276bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x276BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276BD4u;
            // 0x276bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276BDCu;
}
