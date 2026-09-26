#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _cleanup_r
// Address: 0x125798 - 0x1257a4
void _cleanup_r_0x125798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_r_0x125798");
#endif

    ctx->pc = 0x125798u;

    // 0x125798: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x125798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x12579c: 0x8049852  j           func_126148
    ctx->pc = 0x12579Cu;
    ctx->pc = 0x1257A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12579Cu;
            // 0x1257a0: 0x24a554e8  addiu       $a1, $a1, 0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126148u;
    if (runtime->hasFunction(0x126148u)) {
        auto targetFn = runtime->lookupFunction(0x126148u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _fwalk_0x126148(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1257A4u;
}
