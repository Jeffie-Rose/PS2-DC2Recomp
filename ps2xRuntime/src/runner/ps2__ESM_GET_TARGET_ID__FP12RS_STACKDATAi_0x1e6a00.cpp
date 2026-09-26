#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_GET_TARGET_ID__FP12RS_STACKDATAi
// Address: 0x1e6a00 - 0x1e6a54
void ps2__ESM_GET_TARGET_ID__FP12RS_STACKDATAi_0x1e6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_GET_TARGET_ID__FP12RS_STACKDATAi_0x1e6a00");
#endif

    switch (ctx->pc) {
        case 0x1e6a14u: goto label_1e6a14;
        case 0x1e6a38u: goto label_1e6a38;
        case 0x1e6a44u: goto label_1e6a44;
        default: break;
    }

    ctx->pc = 0x1e6a00u;

    // 0x1e6a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6a0c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E6A14u);
    ctx->pc = 0x1E6A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A0Cu;
            // 0x1e6a10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A14u; }
        if (ctx->pc != 0x1E6A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A14u; }
        if (ctx->pc != 0x1E6A14u) { return; }
    }
    ctx->pc = 0x1E6A14u;
label_1e6a14:
    // 0x1e6a14: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6a18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6a1c: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6a20: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1e6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e6a24: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x1e6a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1e6a28: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6a28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6a2c: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6a30: 0xc0b893c  jal         func_2E24F0
    ctx->pc = 0x1E6A30u;
    SET_GPR_U32(ctx, 31, 0x1E6A38u);
    ctx->pc = 0x1E6A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A30u;
            // 0x1e6a34: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E24F0u;
    if (runtime->hasFunction(0x2E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A38u; }
        if (ctx->pc != 0x1E6A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScriptTargetId__16CEffectScriptManFRiii_0x2e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A38u; }
        if (ctx->pc != 0x1E6A38u) { return; }
    }
    ctx->pc = 0x1E6A38u;
label_1e6a38:
    // 0x1e6a38: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e6a3c: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E6A3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6A44u);
    ctx->pc = 0x1E6A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A3Cu;
            // 0x1e6a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A44u; }
        if (ctx->pc != 0x1E6A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A44u; }
        if (ctx->pc != 0x1E6A44u) { return; }
    }
    ctx->pc = 0x1E6A44u;
label_1e6a44:
    // 0x1e6a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A4Cu;
            // 0x1e6a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6A54u;
}
