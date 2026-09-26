#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadHdBd__6CSoundFiiiii
// Address: 0x18a390 - 0x18a398
void LoadHdBd__6CSoundFiiiii_0x18a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadHdBd__6CSoundFiiiii_0x18a390");
#endif

    ctx->pc = 0x18a390u;

    // 0x18a390: 0x80628e8  j           func_18A3A0
    ctx->pc = 0x18A390u;
    ctx->pc = 0x18A3A0u;
    if (runtime->hasFunction(0x18A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x18A3A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        LoadHdBd2__6CSoundFiiiii_0x18a3a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18A398u;
}
