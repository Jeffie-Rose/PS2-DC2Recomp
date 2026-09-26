#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dpsub
// Address: 0x287f90 - 0x287ff4
void dpsub_0x287f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x287f90");
#endif

    switch (ctx->pc) {
        case 0x287fb0u: goto label_287fb0;
        case 0x287fc0u: goto label_287fc0;
        case 0x287fdcu: goto label_287fdc;
        case 0x287fe4u: goto label_287fe4;
        default: break;
    }

    ctx->pc = 0x287f90u;

    // 0x287f90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x287f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x287f94: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x287f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x287f98: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x287f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x287f9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x287f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x287fa0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x287fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x287fa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x287fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x287fa8: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x287FA8u;
    SET_GPR_U32(ctx, 31, 0x287FB0u);
    ctx->pc = 0x287FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FA8u;
            // 0x287fac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FB0u; }
        if (ctx->pc != 0x287FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FB0u; }
        if (ctx->pc != 0x287FB0u) { return; }
    }
    ctx->pc = 0x287FB0u;
label_287fb0:
    // 0x287fb0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x287fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x287fb4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x287fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x287fb8: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x287FB8u;
    SET_GPR_U32(ctx, 31, 0x287FC0u);
    ctx->pc = 0x287FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FB8u;
            // 0x287fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FC0u; }
        if (ctx->pc != 0x287FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FC0u; }
        if (ctx->pc != 0x287FC0u) { return; }
    }
    ctx->pc = 0x287FC0u;
label_287fc0:
    // 0x287fc0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x287fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x287fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fc8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x287fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x287fcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fd0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x287fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x287fd4: 0xc0a1f3e  jal         func_287CF8
    ctx->pc = 0x287FD4u;
    SET_GPR_U32(ctx, 31, 0x287FDCu);
    ctx->pc = 0x287FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FD4u;
            // 0x287fd8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287CF8u;
    if (runtime->hasFunction(0x287CF8u)) {
        auto targetFn = runtime->lookupFunction(0x287CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FDCu; }
        if (ctx->pc != 0x287FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x287cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FDCu; }
        if (ctx->pc != 0x287FDCu) { return; }
    }
    ctx->pc = 0x287FDCu;
label_287fdc:
    // 0x287fdc: 0xc0a1eca  jal         func_287B28
    ctx->pc = 0x287FDCu;
    SET_GPR_U32(ctx, 31, 0x287FE4u);
    ctx->pc = 0x287FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FDCu;
            // 0x287fe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287B28u;
    if (runtime->hasFunction(0x287B28u)) {
        auto targetFn = runtime->lookupFunction(0x287B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FE4u; }
        if (ctx->pc != 0x287FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x287b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FE4u; }
        if (ctx->pc != 0x287FE4u) { return; }
    }
    ctx->pc = 0x287FE4u;
label_287fe4:
    // 0x287fe4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x287fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287fe8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x287fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287fec: 0x3e00008  jr          $ra
    ctx->pc = 0x287FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287FECu;
            // 0x287ff0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287FF4u;
}
