#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_DELETE__FP12RS_STACKDATAi
// Address: 0x1e6720 - 0x1e6764
void ps2__ESM_DELETE__FP12RS_STACKDATAi_0x1e6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_DELETE__FP12RS_STACKDATAi_0x1e6720");
#endif

    switch (ctx->pc) {
        case 0x1e6738u: goto label_1e6738;
        case 0x1e6754u: goto label_1e6754;
        default: break;
    }

    ctx->pc = 0x1e6720u;

    // 0x1e6720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e672c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6730: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6730u;
    SET_GPR_U32(ctx, 31, 0x1E6738u);
    ctx->pc = 0x1E6734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6730u;
            // 0x1e6734: 0x8c500670  lw          $s0, 0x670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6738u; }
        if (ctx->pc != 0x1E6738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6738u; }
        if (ctx->pc != 0x1E6738u) { return; }
    }
    ctx->pc = 0x1E6738u;
label_1e6738:
    // 0x1e6738: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e6738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e673c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e673cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6744: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6744u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6748: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e674c: 0xc0b853c  jal         func_2E14F0
    ctx->pc = 0x1E674Cu;
    SET_GPR_U32(ctx, 31, 0x1E6754u);
    ctx->pc = 0x1E6750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E674Cu;
            // 0x1e6750: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E14F0u;
    if (runtime->hasFunction(0x2E14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6754u; }
        if (ctx->pc != 0x1E6754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFii_0x2e14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6754u; }
        if (ctx->pc != 0x1E6754u) { return; }
    }
    ctx->pc = 0x1E6754u;
label_1e6754:
    // 0x1e6754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e675c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E675Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E675Cu;
            // 0x1e6760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6764u;
}
