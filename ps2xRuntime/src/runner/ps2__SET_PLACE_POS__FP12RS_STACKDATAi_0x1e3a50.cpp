#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PLACE_POS__FP12RS_STACKDATAi
// Address: 0x1e3a50 - 0x1e3aac
void ps2__SET_PLACE_POS__FP12RS_STACKDATAi_0x1e3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PLACE_POS__FP12RS_STACKDATAi_0x1e3a50");
#endif

    switch (ctx->pc) {
        case 0x1e3a70u: goto label_1e3a70;
        case 0x1e3a84u: goto label_1e3a84;
        case 0x1e3a94u: goto label_1e3a94;
        default: break;
    }

    ctx->pc = 0x1e3a50u;

    // 0x1e3a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3a54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e3a58: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3A58u;
    {
        const bool branch_taken_0x1e3a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A58u;
            // 0x1e3a5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a58) {
            ctx->pc = 0x1E3A68u;
            goto label_1e3a68;
        }
    }
    ctx->pc = 0x1E3A60u;
    // 0x1e3a60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E3A60u;
    {
        const bool branch_taken_0x1e3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A60u;
            // 0x1e3a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a60) {
            ctx->pc = 0x1E3AA0u;
            goto label_1e3aa0;
        }
    }
    ctx->pc = 0x1E3A68u;
label_1e3a68:
    // 0x1e3a68: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3A68u;
    SET_GPR_U32(ctx, 31, 0x1E3A70u);
    ctx->pc = 0x1E3A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A68u;
            // 0x1e3a6c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A70u; }
        if (ctx->pc != 0x1E3A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A70u; }
        if (ctx->pc != 0x1E3A70u) { return; }
    }
    ctx->pc = 0x1E3A70u;
label_1e3a70:
    // 0x1e3a70: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3a74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a78: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e3a7c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3A7Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A84u);
    ctx->pc = 0x1E3A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A7Cu;
            // 0x1e3a80: 0xe4401030  swc1        $f0, 0x1030($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A84u; }
        if (ctx->pc != 0x1E3A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A84u; }
        if (ctx->pc != 0x1E3A84u) { return; }
    }
    ctx->pc = 0x1E3A84u;
label_1e3a84:
    // 0x1e3a84: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3a88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a8c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3A8Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A94u);
    ctx->pc = 0x1E3A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A8Cu;
            // 0x1e3a90: 0xe4401034  swc1        $f0, 0x1034($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A94u; }
        if (ctx->pc != 0x1E3A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A94u; }
        if (ctx->pc != 0x1E3A94u) { return; }
    }
    ctx->pc = 0x1E3A94u;
label_1e3a94:
    // 0x1e3a94: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3a9c: 0xe4601038  swc1        $f0, 0x1038($v1)
    ctx->pc = 0x1e3a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4152), bits); }
label_1e3aa0:
    // 0x1e3aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AA4u;
            // 0x1e3aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3AACu;
}
