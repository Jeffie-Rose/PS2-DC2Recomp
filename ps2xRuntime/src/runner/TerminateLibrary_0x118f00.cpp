#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TerminateLibrary
// Address: 0x118f00 - 0x118f08
void TerminateLibrary_0x118f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TerminateLibrary_0x118f00");
#endif

    ctx->pc = 0x118f00u;

    // 0x118f00: 0x8046184  j           func_118610
    ctx->pc = 0x118F00u;
    ctx->pc = 0x118610u;
    if (runtime->hasFunction(0x118610u)) {
        auto targetFn = runtime->lookupFunction(0x118610u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitTLB_0x118610(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x118F08u;
}
