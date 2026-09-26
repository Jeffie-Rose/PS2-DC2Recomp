#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndTakePhoto__Fv
// Address: 0x30e670 - 0x30e678
void EndTakePhoto__Fv_0x30e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndTakePhoto__Fv_0x30e670");
#endif

    ctx->pc = 0x30e670u;

    // 0x30e670: 0x80c3958  j           func_30E560
    ctx->pc = 0x30E670u;
    ctx->pc = 0x30E560u;
    if (runtime->hasFunction(0x30E560u)) {
        auto targetFn = runtime->lookupFunction(0x30E560u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitTakePhoto__Fv_0x30e560(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x30E678u;
}
