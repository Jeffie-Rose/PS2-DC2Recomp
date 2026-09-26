#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveSetNum__13CGameDataUsedFv
// Address: 0x197360 - 0x197368
void GetActiveSetNum__13CGameDataUsedFv_0x197360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveSetNum__13CGameDataUsedFv_0x197360");
#endif

    ctx->pc = 0x197360u;

    // 0x197360: 0x8065d80  j           func_197600
    ctx->pc = 0x197360u;
    ctx->pc = 0x197600u;
    if (runtime->hasFunction(0x197600u)) {
        auto targetFn = runtime->lookupFunction(0x197600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        IsActiveSet__13CGameDataUsedFv_0x197600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x197368u;
}
