#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FinishForMC__18CMemoryCardManagerFv
// Address: 0x2f19a0 - 0x2f19a8
void FinishForMC__18CMemoryCardManagerFv_0x2f19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FinishForMC__18CMemoryCardManagerFv_0x2f19a0");
#endif

    ctx->pc = 0x2f19a0u;

    // 0x2f19a0: 0x8048958  j           func_122560
    ctx->pc = 0x2F19A0u;
    ctx->pc = 0x122560u;
    if (runtime->hasFunction(0x122560u)) {
        auto targetFn = runtime->lookupFunction(0x122560u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceMcEnd_0x122560(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F19A8u;
}
