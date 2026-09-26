#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CSndStepWait__Fv
// Address: 0x18d620 - 0x18d64c
void CSndStepWait__Fv_0x18d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CSndStepWait__Fv_0x18d620");
#endif

    switch (ctx->pc) {
        case 0x18d624u: goto label_18d624;
        default: break;
    }

    ctx->pc = 0x18d620u;

    // 0x18d620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d624:
    // 0x18d624: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18d628: 0x28622710  slti        $v0, $v1, 0x2710
    ctx->pc = 0x18d628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x18d62c: 0x0  nop
    ctx->pc = 0x18d62cu;
    // NOP
    // 0x18d630: 0x0  nop
    ctx->pc = 0x18d630u;
    // NOP
    // 0x18d634: 0x0  nop
    ctx->pc = 0x18d634u;
    // NOP
    // 0x18d638: 0x0  nop
    ctx->pc = 0x18d638u;
    // NOP
    // 0x18d63c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18D63Cu;
    {
        const bool branch_taken_0x18d63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d63c) {
            ctx->pc = 0x18D624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d624;
        }
    }
    ctx->pc = 0x18D644u;
    // 0x18d644: 0x8062840  j           func_18A100
    ctx->pc = 0x18D644u;
    ctx->pc = 0x18D648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D644u;
            // 0x18d648: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A100u;
    if (runtime->hasFunction(0x18A100u)) {
        auto targetFn = runtime->lookupFunction(0x18A100u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Step__6CSoundFv_0x18a100(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18D64Cu;
}
