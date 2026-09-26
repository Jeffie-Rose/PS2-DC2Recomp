#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DebugKeyLock__8CGamePadFi
// Address: 0x14b1e0 - 0x14b1e8
void DebugKeyLock__8CGamePadFi_0x14b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DebugKeyLock__8CGamePadFi_0x14b1e0");
#endif

    ctx->pc = 0x14b1e0u;

    // 0x14b1e0: 0x8052c74  j           func_14B1D0
    ctx->pc = 0x14B1E0u;
    ctx->pc = 0x14B1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1E0u;
            // 0x14b1e4: 0xac850464  sw          $a1, 0x464($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1D0u;
    if (runtime->hasFunction(0x14B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        KeyLock2__8CGamePadFi_0x14b1d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14B1E8u;
}
