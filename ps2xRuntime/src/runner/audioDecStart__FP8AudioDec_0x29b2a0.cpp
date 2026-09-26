#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecStart__FP8AudioDec
// Address: 0x29b2a0 - 0x29b2a8
void audioDecStart__FP8AudioDec_0x29b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecStart__FP8AudioDec_0x29b2a0");
#endif

    ctx->pc = 0x29b2a0u;

    // 0x29b2a0: 0x80a6c8c  j           func_29B230
    ctx->pc = 0x29B2A0u;
    ctx->pc = 0x29B230u;
    if (runtime->hasFunction(0x29B230u)) {
        auto targetFn = runtime->lookupFunction(0x29B230u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        audioDecResume__FP8AudioDec_0x29b230(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29B2A8u;
}
