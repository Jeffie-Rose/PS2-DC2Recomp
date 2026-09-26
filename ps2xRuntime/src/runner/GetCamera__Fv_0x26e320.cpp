#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCamera__Fv
// Address: 0x26e320 - 0x26e328
void GetCamera__Fv_0x26e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCamera__Fv_0x26e320");
#endif

    ctx->pc = 0x26e320u;

    // 0x26e320: 0x80956c8  j           func_255B20
    ctx->pc = 0x26E320u;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26E328u;
}
