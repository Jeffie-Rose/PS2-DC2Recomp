#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_TARGET_ID__FP12RS_STACKDATAi
// Address: 0x1e69a0 - 0x1e69f4
void ps2__ESM_SET_TARGET_ID__FP12RS_STACKDATAi_0x1e69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_TARGET_ID__FP12RS_STACKDATAi_0x1e69a0");
#endif

    switch (ctx->pc) {
        case 0x1e69b4u: goto label_1e69b4;
        case 0x1e69c0u: goto label_1e69c0;
        case 0x1e69e4u: goto label_1e69e4;
        default: break;
    }

    ctx->pc = 0x1e69a0u;

    // 0x1e69a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e69a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e69a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e69a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e69ac: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E69ACu;
    SET_GPR_U32(ctx, 31, 0x1E69B4u);
    ctx->pc = 0x1E69B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69ACu;
            // 0x1e69b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69B4u; }
        if (ctx->pc != 0x1E69B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69B4u; }
        if (ctx->pc != 0x1E69B4u) { return; }
    }
    ctx->pc = 0x1E69B4u;
label_1e69b4:
    // 0x1e69b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e69b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69b8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E69B8u;
    SET_GPR_U32(ctx, 31, 0x1E69C0u);
    ctx->pc = 0x1E69BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69B8u;
            // 0x1e69bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69C0u; }
        if (ctx->pc != 0x1E69C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69C0u; }
        if (ctx->pc != 0x1E69C0u) { return; }
    }
    ctx->pc = 0x1E69C0u;
label_1e69c0:
    // 0x1e69c0: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e69c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e69c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e69c8: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e69cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e69ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69d0: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x1e69d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1e69d4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e69d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e69d8: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e69dc: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x1E69DCu;
    SET_GPR_U32(ctx, 31, 0x1E69E4u);
    ctx->pc = 0x1E69E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69DCu;
            // 0x1e69e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69E4u; }
        if (ctx->pc != 0x1E69E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69E4u; }
        if (ctx->pc != 0x1E69E4u) { return; }
    }
    ctx->pc = 0x1E69E4u;
label_1e69e4:
    // 0x1e69e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e69e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e69e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e69e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e69ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E69ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E69F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69ECu;
            // 0x1e69f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E69F4u;
}
