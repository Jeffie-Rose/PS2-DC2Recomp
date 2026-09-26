#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMonsterBoxKey__Fv
// Address: 0x2b8d00 - 0x2b8d08
void MenuMonsterBoxKey__Fv_0x2b8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMonsterBoxKey__Fv_0x2b8d00");
#endif

    ctx->pc = 0x2b8d00u;

    // 0x2b8d00: 0x80adcc8  j           func_2B7320
    ctx->pc = 0x2B8D00u;
    ctx->pc = 0x2B8D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D00u;
            // 0x2b8d04: 0x8f849be8  lw          $a0, -0x6418($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7320u;
    if (runtime->hasFunction(0x2B7320u)) {
        auto targetFn = runtime->lookupFunction(0x2B7320u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__14CMenuMosSelectFv_0x2b7320(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2B8D08u;
}
