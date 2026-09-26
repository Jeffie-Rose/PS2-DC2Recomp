#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_USER_ID__FP12RS_STACKDATAi
// Address: 0x1e6a60 - 0x1e6ab4
void ps2__ESM_SET_USER_ID__FP12RS_STACKDATAi_0x1e6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_USER_ID__FP12RS_STACKDATAi_0x1e6a60");
#endif

    switch (ctx->pc) {
        case 0x1e6a74u: goto label_1e6a74;
        case 0x1e6a80u: goto label_1e6a80;
        case 0x1e6aa4u: goto label_1e6aa4;
        default: break;
    }

    ctx->pc = 0x1e6a60u;

    // 0x1e6a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6a6c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E6A74u);
    ctx->pc = 0x1E6A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A6Cu;
            // 0x1e6a70: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A74u; }
        if (ctx->pc != 0x1E6A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A74u; }
        if (ctx->pc != 0x1E6A74u) { return; }
    }
    ctx->pc = 0x1E6A74u;
label_1e6a74:
    // 0x1e6a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a78: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6A78u;
    SET_GPR_U32(ctx, 31, 0x1E6A80u);
    ctx->pc = 0x1E6A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A78u;
            // 0x1e6a7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A80u; }
        if (ctx->pc != 0x1E6A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A80u; }
        if (ctx->pc != 0x1E6A80u) { return; }
    }
    ctx->pc = 0x1E6A80u;
label_1e6a80:
    // 0x1e6a80: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6a84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6a88: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6a8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e6a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a90: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x1e6a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1e6a94: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6a94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6a98: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6a9c: 0xc0b8960  jal         func_2E2580
    ctx->pc = 0x1E6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E6AA4u);
    ctx->pc = 0x1E6AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A9Cu;
            // 0x1e6aa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2580u;
    if (runtime->hasFunction(0x2E2580u)) {
        auto targetFn = runtime->lookupFunction(0x2E2580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AA4u; }
        if (ctx->pc != 0x1E6AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptUserId__16CEffectScriptManFiii_0x2e2580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AA4u; }
        if (ctx->pc != 0x1E6AA4u) { return; }
    }
    ctx->pc = 0x1E6AA4u;
label_1e6aa4:
    // 0x1e6aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AACu;
            // 0x1e6ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6AB4u;
}
