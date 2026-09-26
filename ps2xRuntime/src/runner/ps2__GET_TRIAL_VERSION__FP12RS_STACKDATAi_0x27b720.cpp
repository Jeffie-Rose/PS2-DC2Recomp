#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TRIAL_VERSION__FP12RS_STACKDATAi
// Address: 0x27b720 - 0x27b740
void ps2__GET_TRIAL_VERSION__FP12RS_STACKDATAi_0x27b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TRIAL_VERSION__FP12RS_STACKDATAi_0x27b720");
#endif

    switch (ctx->pc) {
        case 0x27b730u: goto label_27b730;
        default: break;
    }

    ctx->pc = 0x27b720u;

    // 0x27b720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b728: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27B728u;
    SET_GPR_U32(ctx, 31, 0x27B730u);
    ctx->pc = 0x27B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B728u;
            // 0x27b72c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B730u; }
        if (ctx->pc != 0x27B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B730u; }
        if (ctx->pc != 0x27B730u) { return; }
    }
    ctx->pc = 0x27B730u;
label_27b730:
    // 0x27b730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b738: 0x3e00008  jr          $ra
    ctx->pc = 0x27B738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B738u;
            // 0x27b73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B740u;
}
