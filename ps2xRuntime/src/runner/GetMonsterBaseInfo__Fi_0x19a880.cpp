#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterBaseInfo__Fi
// Address: 0x19a880 - 0x19a888
void GetMonsterBaseInfo__Fi_0x19a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterBaseInfo__Fi_0x19a880");
#endif

    ctx->pc = 0x19a880u;

    // 0x19a880: 0x8076b80  j           func_1DAE00
    ctx->pc = 0x19A880u;
    ctx->pc = 0x1DAE00u;
    if (runtime->hasFunction(0x1DAE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DAE00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetMonsterTable__Fi_0x1dae00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19A888u;
}
