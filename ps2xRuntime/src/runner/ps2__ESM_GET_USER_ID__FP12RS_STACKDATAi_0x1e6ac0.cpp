#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_GET_USER_ID__FP12RS_STACKDATAi
// Address: 0x1e6ac0 - 0x1e6b14
void ps2__ESM_GET_USER_ID__FP12RS_STACKDATAi_0x1e6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_GET_USER_ID__FP12RS_STACKDATAi_0x1e6ac0");
#endif

    switch (ctx->pc) {
        case 0x1e6ad4u: goto label_1e6ad4;
        case 0x1e6af8u: goto label_1e6af8;
        case 0x1e6b04u: goto label_1e6b04;
        default: break;
    }

    ctx->pc = 0x1e6ac0u;

    // 0x1e6ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6acc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6ACCu;
    SET_GPR_U32(ctx, 31, 0x1E6AD4u);
    ctx->pc = 0x1E6AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6ACCu;
            // 0x1e6ad0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AD4u; }
        if (ctx->pc != 0x1E6AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AD4u; }
        if (ctx->pc != 0x1E6AD4u) { return; }
    }
    ctx->pc = 0x1E6AD4u;
label_1e6ad4:
    // 0x1e6ad4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6ad8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6adc: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6ae0: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e6ae4: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x1e6ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1e6ae8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6aec: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6af0: 0xc0b8980  jal         func_2E2600
    ctx->pc = 0x1E6AF0u;
    SET_GPR_U32(ctx, 31, 0x1E6AF8u);
    ctx->pc = 0x1E6AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AF0u;
            // 0x1e6af4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2600u;
    if (runtime->hasFunction(0x2E2600u)) {
        auto targetFn = runtime->lookupFunction(0x2E2600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AF8u; }
        if (ctx->pc != 0x1E6AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScriptUserId__16CEffectScriptManFRiii_0x2e2600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AF8u; }
        if (ctx->pc != 0x1E6AF8u) { return; }
    }
    ctx->pc = 0x1E6AF8u;
label_1e6af8:
    // 0x1e6af8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1e6af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e6afc: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E6AFCu;
    SET_GPR_U32(ctx, 31, 0x1E6B04u);
    ctx->pc = 0x1E6B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AFCu;
            // 0x1e6b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B04u; }
        if (ctx->pc != 0x1E6B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B04u; }
        if (ctx->pc != 0x1E6B04u) { return; }
    }
    ctx->pc = 0x1E6B04u;
label_1e6b04:
    // 0x1e6b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B0Cu;
            // 0x1e6b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6B14u;
}
