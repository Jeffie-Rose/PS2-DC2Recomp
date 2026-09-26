#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartRaster__13CScreenEffectFfffi
// Address: 0x260930 - 0x260938
void StartRaster__13CScreenEffectFfffi_0x260930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartRaster__13CScreenEffectFfffi_0x260930");
#endif

    ctx->pc = 0x260930u;

    // 0x260930: 0x8097fd4  j           func_25FF50
    ctx->pc = 0x260930u;
    ctx->pc = 0x25FF50u;
    if (runtime->hasFunction(0x25FF50u)) {
        auto targetFn = runtime->lookupFunction(0x25FF50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        StartRaster__7CRasterFfffi_0x25ff50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x260938u;
}
