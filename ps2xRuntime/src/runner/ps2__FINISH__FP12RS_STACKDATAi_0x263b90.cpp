#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FINISH__FP12RS_STACKDATAi
// Address: 0x263b90 - 0x263b98
void ps2__FINISH__FP12RS_STACKDATAi_0x263b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FINISH__FP12RS_STACKDATAi_0x263b90");
#endif

    ctx->pc = 0x263b90u;

    // 0x263b90: 0x8098828  j           func_2620A0
    ctx->pc = 0x263B90u;
    ctx->pc = 0x2620A0u;
    if (runtime->hasFunction(0x2620A0u)) {
        auto targetFn = runtime->lookupFunction(0x2620A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EdEventFinish__Fv_0x2620a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x263B98u;
}
