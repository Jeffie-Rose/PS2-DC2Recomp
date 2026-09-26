#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveLightNo__4CMapFv
// Address: 0x161770 - 0x161778
void GetActiveLightNo__4CMapFv_0x161770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveLightNo__4CMapFv_0x161770");
#endif

    ctx->pc = 0x161770u;

    // 0x161770: 0x80585e0  j           func_161780
    ctx->pc = 0x161770u;
    ctx->pc = 0x161780u;
    if (runtime->hasFunction(0x161780u)) {
        auto targetFn = runtime->lookupFunction(0x161780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetActiveLightNo__8CMapInfoFv_0x161780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x161778u;
}
