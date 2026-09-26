#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CEditMapFv
// Address: 0x1b4090 - 0x1b40a0
void Step__8CEditMapFv_0x1b4090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CEditMapFv_0x1b4090");
#endif

    ctx->pc = 0x1b4090u;

    // 0x1b4090: 0x8c820f68  lw          $v0, 0xF68($a0)
    ctx->pc = 0x1b4090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3944)));
    // 0x1b4094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4098: 0x8057fbc  j           func_15FEF0
    ctx->pc = 0x1B4098u;
    ctx->pc = 0x1B409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4098u;
            // 0x1b409c: 0xac820f68  sw          $v0, 0xF68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FEF0u;
    if (runtime->hasFunction(0x15FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x15FEF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Step__4CMapFv_0x15fef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B40A0u;
}
