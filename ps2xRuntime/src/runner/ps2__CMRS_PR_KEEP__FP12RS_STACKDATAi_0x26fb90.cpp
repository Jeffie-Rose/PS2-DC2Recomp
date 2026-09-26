#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_PR_KEEP__FP12RS_STACKDATAi
// Address: 0x26fb90 - 0x26fbb4
void ps2__CMRS_PR_KEEP__FP12RS_STACKDATAi_0x26fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_PR_KEEP__FP12RS_STACKDATAi_0x26fb90");
#endif

    switch (ctx->pc) {
        case 0x26fba4u: goto label_26fba4;
        default: break;
    }

    ctx->pc = 0x26fb90u;

    // 0x26fb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fb94: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26fb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fb9c: 0xc096820  jal         func_25A080
    ctx->pc = 0x26FB9Cu;
    SET_GPR_U32(ctx, 31, 0x26FBA4u);
    ctx->pc = 0x26FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB9Cu;
            // 0x26fba0: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A080u;
    if (runtime->hasFunction(0x25A080u)) {
        auto targetFn = runtime->lookupFunction(0x25A080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBA4u; }
        if (ctx->pc != 0x26FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PRKeep__12CSceneCmrSeqFv_0x25a080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBA4u; }
        if (ctx->pc != 0x26FBA4u) { return; }
    }
    ctx->pc = 0x26FBA4u;
label_26fba4:
    // 0x26fba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fbac: 0x3e00008  jr          $ra
    ctx->pc = 0x26FBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBACu;
            // 0x26fbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FBB4u;
}
