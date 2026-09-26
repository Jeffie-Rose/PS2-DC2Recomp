#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopRaster__13CScreenEffectFfffi
// Address: 0x260940 - 0x260948
void StopRaster__13CScreenEffectFfffi_0x260940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopRaster__13CScreenEffectFfffi_0x260940");
#endif

    ctx->pc = 0x260940u;

    // 0x260940: 0x8098028  j           func_2600A0
    ctx->pc = 0x260940u;
    ctx->pc = 0x2600A0u;
    if (runtime->hasFunction(0x2600A0u)) {
        auto targetFn = runtime->lookupFunction(0x2600A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        StopRaster__7CRasterFfffi_0x2600a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x260948u;
}
