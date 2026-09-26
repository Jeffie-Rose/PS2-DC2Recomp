#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_USERID__FP12RS_STACKDATAi
// Address: 0x1e0a20 - 0x1e0a44
void ps2__GET_USERID__FP12RS_STACKDATAi_0x1e0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_USERID__FP12RS_STACKDATAi_0x1e0a20");
#endif

    switch (ctx->pc) {
        case 0x1e0a34u: goto label_1e0a34;
        default: break;
    }

    ctx->pc = 0x1e0a20u;

    // 0x1e0a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0a28: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0a2c: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E0A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A34u);
    ctx->pc = 0x1E0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A2Cu;
            // 0x1e0a30: 0x8c450670  lw          $a1, 0x670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
        if (ctx->pc != 0x1E0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A34u; }
        if (ctx->pc != 0x1E0A34u) { return; }
    }
    ctx->pc = 0x1E0A34u;
label_1e0a34:
    // 0x1e0a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A3Cu;
            // 0x1e0a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0A44u;
}
