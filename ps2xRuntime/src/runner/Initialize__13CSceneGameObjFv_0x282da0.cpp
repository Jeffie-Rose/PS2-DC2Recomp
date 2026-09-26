#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CSceneGameObjFv
// Address: 0x282da0 - 0x282da8
void Initialize__13CSceneGameObjFv_0x282da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CSceneGameObjFv_0x282da0");
#endif

    ctx->pc = 0x282da0u;

    // 0x282da0: 0x80a0ad0  j           func_282B40
    ctx->pc = 0x282DA0u;
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x282DA8u;
}
