#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LEAVE_MONICA_ITEM_CHECK__FP12RS_STACKDATAi
// Address: 0x27dae0 - 0x27db00
void ps2__LEAVE_MONICA_ITEM_CHECK__FP12RS_STACKDATAi_0x27dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LEAVE_MONICA_ITEM_CHECK__FP12RS_STACKDATAi_0x27dae0");
#endif

    switch (ctx->pc) {
        case 0x27daf0u: goto label_27daf0;
        default: break;
    }

    ctx->pc = 0x27dae0u;

    // 0x27dae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27dae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27dae8: 0xc068650  jal         func_1A1940
    ctx->pc = 0x27DAE8u;
    SET_GPR_U32(ctx, 31, 0x27DAF0u);
    ctx->pc = 0x1A1940u;
    if (runtime->hasFunction(0x1A1940u)) {
        auto targetFn = runtime->lookupFunction(0x1A1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAF0u; }
        if (ctx->pc != 0x27DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeaveMonicaItemCheck__Fv_0x1a1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAF0u; }
        if (ctx->pc != 0x27DAF0u) { return; }
    }
    ctx->pc = 0x27DAF0u;
label_27daf0:
    // 0x27daf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27daf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27daf8: 0x3e00008  jr          $ra
    ctx->pc = 0x27DAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DAF8u;
            // 0x27dafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27DB00u;
}
