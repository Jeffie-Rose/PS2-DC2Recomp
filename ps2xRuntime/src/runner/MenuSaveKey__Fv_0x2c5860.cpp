#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSaveKey__Fv
// Address: 0x2c5860 - 0x2c5868
void MenuSaveKey__Fv_0x2c5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSaveKey__Fv_0x2c5860");
#endif

    ctx->pc = 0x2c5860u;

    // 0x2c5860: 0x80b0c34  j           func_2C30D0
    ctx->pc = 0x2C5860u;
    ctx->pc = 0x2C5864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5860u;
            // 0x2c5864: 0x8f849cc8  lw          $a0, -0x6338($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C30D0u;
    if (runtime->hasFunction(0x2C30D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C30D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__14CSaveMenuClassFv_0x2c30d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C5868u;
}
