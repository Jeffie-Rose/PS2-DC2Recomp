#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuShopKey__Fv
// Address: 0x294c30 - 0x294c38
void MenuShopKey__Fv_0x294c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuShopKey__Fv_0x294c30");
#endif

    ctx->pc = 0x294c30u;

    // 0x294c30: 0x80a494c  j           func_292530
    ctx->pc = 0x294C30u;
    ctx->pc = 0x294C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C30u;
            // 0x294c34: 0x8f849890  lw          $a0, -0x6770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292530u;
    if (runtime->hasFunction(0x292530u)) {
        auto targetFn = runtime->lookupFunction(0x292530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__9CShopMenuFv_0x292530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x294C38u;
}
