#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeCheckMenu__14CBaseMenuClassFv
// Address: 0x23a2a0 - 0x23a2ac
void FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0");
#endif

    ctx->pc = 0x23a2a0u;

    // 0x23a2a0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x23a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x23a2a4: 0x805f65c  j           func_17D970
    ctx->pc = 0x23A2A4u;
    ctx->pc = 0x23A2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2A4u;
            // 0x23a2a8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23A2ACu;
}
