#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreLoadVillagerEnd__6CSceneFv
// Address: 0x2c9630 - 0x2c9638
void PreLoadVillagerEnd__6CSceneFv_0x2c9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreLoadVillagerEnd__6CSceneFv_0x2c9630");
#endif

    ctx->pc = 0x2c9630u;

    // 0x2c9630: 0x8052658  j           func_149960
    ctx->pc = 0x2C9630u;
    ctx->pc = 0x149960u;
    if (runtime->hasFunction(0x149960u)) {
        auto targetFn = runtime->lookupFunction(0x149960u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DeleteFileCache__Fv_0x149960(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C9638u;
}
