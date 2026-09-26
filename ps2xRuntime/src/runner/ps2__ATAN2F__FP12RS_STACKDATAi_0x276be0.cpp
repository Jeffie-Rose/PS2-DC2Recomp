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
// Address: 0x276be0 - 0x276c2c
void ps2__ATAN2F__FP12RS_STACKDATAi_0x276be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ATAN2F__FP12RS_STACKDATAi_0x276be0");
#endif

    switch (ctx->pc) {
        case 0x276bf4u: goto label_276bf4;
        case 0x276c04u: goto label_276c04;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c18u: goto label_276c18;
        default: break;
    }

    ctx->pc = 0x276be0u;

    // 0x276be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276bec: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276BECu;
    SET_GPR_U32(ctx, 31, 0x276BF4u);
    ctx->pc = 0x276BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BECu;
            // 0x276bf0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BF4u; }
        if (ctx->pc != 0x276BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BF4u; }
        if (ctx->pc != 0x276BF4u) { return; }
    }
    ctx->pc = 0x276BF4u;
label_276bf4:
    // 0x276bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bf8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x276bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x276bfc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276BFCu;
    SET_GPR_U32(ctx, 31, 0x276C04u);
    ctx->pc = 0x276C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BFCu;
            // 0x276c00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C04u; }
        if (ctx->pc != 0x276C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C04u; }
        if (ctx->pc != 0x276C04u) { return; }
    }
    ctx->pc = 0x276C04u;
label_276c04:
    // 0x276c04: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x276C04u;
    SET_GPR_U32(ctx, 31, 0x276C0Cu);
    ctx->pc = 0x276C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C04u;
            // 0x276c08: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C0Cu; }
        if (ctx->pc != 0x276C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C0Cu; }
        if (ctx->pc != 0x276C0Cu) { return; }
    }
    ctx->pc = 0x276C0Cu;
label_276c0c:
    // 0x276c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c10: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276C10u;
    SET_GPR_U32(ctx, 31, 0x276C18u);
    ctx->pc = 0x276C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C10u;
            // 0x276c14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C18u; }
        if (ctx->pc != 0x276C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C18u; }
        if (ctx->pc != 0x276C18u) { return; }
    }
    ctx->pc = 0x276C18u;
label_276c18:
    // 0x276c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276c24: 0x3e00008  jr          $ra
    ctx->pc = 0x276C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276C24u;
            // 0x276c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276C2Cu;
}
