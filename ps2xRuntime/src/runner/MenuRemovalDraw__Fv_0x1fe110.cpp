#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuRemovalDraw__Fv
// Address: 0x1fe110 - 0x1fe118
void MenuRemovalDraw__Fv_0x1fe110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuRemovalDraw__Fv_0x1fe110");
#endif

    ctx->pc = 0x1fe110u;

    // 0x1fe110: 0x808ad0c  j           func_22B430
    ctx->pc = 0x1FE110u;
    ctx->pc = 0x1FE114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE110u;
            // 0x1fe114: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE118u;
}
