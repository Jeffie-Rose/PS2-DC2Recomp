#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightingInfo__4CMapFi
// Address: 0x161760 - 0x161768
void GetLightingInfo__4CMapFi_0x161760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightingInfo__4CMapFi_0x161760");
#endif

    ctx->pc = 0x161760u;

    // 0x161760: 0x8059410  j           func_165040
    ctx->pc = 0x161760u;
    ctx->pc = 0x165040u;
    if (runtime->hasFunction(0x165040u)) {
        auto targetFn = runtime->lookupFunction(0x165040u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetLightingInfo__8CMapInfoFi_0x165040(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x161768u;
}
