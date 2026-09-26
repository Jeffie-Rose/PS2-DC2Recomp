#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuNPCQuestViewKey__Fv
// Address: 0x295920 - 0x295928
void MenuNPCQuestViewKey__Fv_0x295920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuNPCQuestViewKey__Fv_0x295920");
#endif

    ctx->pc = 0x295920u;

    // 0x295920: 0x80a543c  j           func_2950F0
    ctx->pc = 0x295920u;
    ctx->pc = 0x295924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295920u;
            // 0x295924: 0x8f8498e0  lw          $a0, -0x6720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2950F0u;
    if (runtime->hasFunction(0x2950F0u)) {
        auto targetFn = runtime->lookupFunction(0x2950F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyStep__14CMenuQuestViewFv_0x2950f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x295928u;
}
