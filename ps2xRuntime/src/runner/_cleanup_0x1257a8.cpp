#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _cleanup
// Address: 0x1257a8 - 0x1257b4
void _cleanup_0x1257a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_0x1257a8");
#endif

    ctx->pc = 0x1257a8u;

    // 0x1257a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1257ac: 0x80495e6  j           func_125798
    ctx->pc = 0x1257ACu;
    ctx->pc = 0x1257B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1257ACu;
            // 0x1257b0: 0x8c443b84  lw          $a0, 0x3B84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125798u;
    if (runtime->hasFunction(0x125798u)) {
        auto targetFn = runtime->lookupFunction(0x125798u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _cleanup_r_0x125798(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1257B4u;
}
