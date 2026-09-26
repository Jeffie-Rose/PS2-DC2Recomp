#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLocalPos__10CEditPartsFPf
// Address: 0x1b5990 - 0x1b5998
void GetLocalPos__10CEditPartsFPf_0x1b5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLocalPos__10CEditPartsFPf_0x1b5990");
#endif

    ctx->pc = 0x1b5990u;

    // 0x1b5990: 0x804d898  j           func_136260
    ctx->pc = 0x1B5990u;
    ctx->pc = 0x136260u;
    if (runtime->hasFunction(0x136260u)) {
        auto targetFn = runtime->lookupFunction(0x136260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPosition__9mgCObjectFPf_0x136260(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5998u;
}
