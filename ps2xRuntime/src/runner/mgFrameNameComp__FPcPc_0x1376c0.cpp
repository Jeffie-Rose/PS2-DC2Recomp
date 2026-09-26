#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgFrameNameComp__FPcPc
// Address: 0x1376c0 - 0x1376c8
void mgFrameNameComp__FPcPc_0x1376c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgFrameNameComp__FPcPc_0x1376c0");
#endif

    ctx->pc = 0x1376c0u;

    // 0x1376c0: 0x804dd70  j           func_1375C0
    ctx->pc = 0x1376C0u;
    ctx->pc = 0x1375C0u;
    if (runtime->hasFunction(0x1375C0u)) {
        auto targetFn = runtime->lookupFunction(0x1375C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        StrCmp__FPcPc_0x1375c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1376C8u;
}
