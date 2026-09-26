#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CSceneSkyFv
// Address: 0x282d90 - 0x282d98
void Initialize__9CSceneSkyFv_0x282d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CSceneSkyFv_0x282d90");
#endif

    ctx->pc = 0x282d90u;

    // 0x282d90: 0x80a0ab0  j           func_282AC0
    ctx->pc = 0x282D90u;
    ctx->pc = 0x282D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D90u;
            // 0x282d94: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x282D98u;
}
