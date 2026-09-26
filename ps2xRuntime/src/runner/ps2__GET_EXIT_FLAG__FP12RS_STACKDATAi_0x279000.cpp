#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EXIT_FLAG__FP12RS_STACKDATAi
// Address: 0x279000 - 0x279024
void ps2__GET_EXIT_FLAG__FP12RS_STACKDATAi_0x279000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EXIT_FLAG__FP12RS_STACKDATAi_0x279000");
#endif

    switch (ctx->pc) {
        case 0x279014u: goto label_279014;
        default: break;
    }

    ctx->pc = 0x279000u;

    // 0x279000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279008: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x279008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27900c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27900Cu;
    SET_GPR_U32(ctx, 31, 0x279014u);
    ctx->pc = 0x279010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27900Cu;
            // 0x279010: 0x8c452f64  lw          $a1, 0x2F64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279014u; }
        if (ctx->pc != 0x279014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279014u; }
        if (ctx->pc != 0x279014u) { return; }
    }
    ctx->pc = 0x279014u;
label_279014:
    // 0x279014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27901c: 0x3e00008  jr          $ra
    ctx->pc = 0x27901Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27901Cu;
            // 0x279020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279024u;
}
