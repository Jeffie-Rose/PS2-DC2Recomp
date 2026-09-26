#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetChara__Fi
// Address: 0x26b1d0 - 0x26b1d8
void GetChara__Fi_0x26b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetChara__Fi_0x26b1d0");
#endif

    ctx->pc = 0x26b1d0u;

    // 0x26b1d0: 0x80956d4  j           func_255B50
    ctx->pc = 0x26B1D0u;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26B1D8u;
}
