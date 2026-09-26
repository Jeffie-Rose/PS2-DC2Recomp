#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_PR_RETURN__FP12RS_STACKDATAi
// Address: 0x26fbc0 - 0x26fbe4
void ps2__CMRS_PR_RETURN__FP12RS_STACKDATAi_0x26fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_PR_RETURN__FP12RS_STACKDATAi_0x26fbc0");
#endif

    switch (ctx->pc) {
        case 0x26fbd4u: goto label_26fbd4;
        default: break;
    }

    ctx->pc = 0x26fbc0u;

    // 0x26fbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fbc4: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26fbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fbcc: 0xc09682c  jal         func_25A0B0
    ctx->pc = 0x26FBCCu;
    SET_GPR_U32(ctx, 31, 0x26FBD4u);
    ctx->pc = 0x26FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBCCu;
            // 0x26fbd0: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A0B0u;
    if (runtime->hasFunction(0x25A0B0u)) {
        auto targetFn = runtime->lookupFunction(0x25A0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBD4u; }
        if (ctx->pc != 0x26FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PRReturn__12CSceneCmrSeqFv_0x25a0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBD4u; }
        if (ctx->pc != 0x26FBD4u) { return; }
    }
    ctx->pc = 0x26FBD4u;
label_26fbd4:
    // 0x26fbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x26FBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBDCu;
            // 0x26fbe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FBE4u;
}
