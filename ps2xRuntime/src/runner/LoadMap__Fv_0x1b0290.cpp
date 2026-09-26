#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMap__Fv
// Address: 0x1b0290 - 0x1b0298
void LoadMap__Fv_0x1b0290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMap__Fv_0x1b0290");
#endif

    ctx->pc = 0x1b0290u;

    // 0x1b0290: 0x806c0a0  j           func_1B0280
    ctx->pc = 0x1B0290u;
    ctx->pc = 0x1B0280u;
    if (runtime->hasFunction(0x1B0280u)) {
        auto targetFn = runtime->lookupFunction(0x1B0280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        LoadComVillaager__Fv_0x1b0280(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0298u;
}
