#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMes__Fi
// Address: 0x26c6d0 - 0x26c6d8
void GetMes__Fi_0x26c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMes__Fi_0x26c6d0");
#endif

    ctx->pc = 0x26c6d0u;

    // 0x26c6d0: 0x80956bc  j           func_255AF0
    ctx->pc = 0x26C6D0u;
    ctx->pc = 0x255AF0u;
    if (runtime->hasFunction(0x255AF0u)) {
        auto targetFn = runtime->lookupFunction(0x255AF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetEventMessage__Fi_0x255af0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26C6D8u;
}
