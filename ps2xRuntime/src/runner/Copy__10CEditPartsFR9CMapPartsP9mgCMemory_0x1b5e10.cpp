#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__10CEditPartsFR9CMapPartsP9mgCMemory
// Address: 0x1b5e10 - 0x1b5e18
void Copy__10CEditPartsFR9CMapPartsP9mgCMemory_0x1b5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__10CEditPartsFR9CMapPartsP9mgCMemory_0x1b5e10");
#endif

    ctx->pc = 0x1b5e10u;

    // 0x1b5e10: 0x8059ea8  j           func_167AA0
    ctx->pc = 0x1B5E10u;
    ctx->pc = 0x167AA0u;
    if (runtime->hasFunction(0x167AA0u)) {
        auto targetFn = runtime->lookupFunction(0x167AA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Copy__9CMapPartsFR9CMapPartsP9mgCMemory_0x167aa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5E18u;
}
