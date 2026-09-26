#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__11CCharacter2FPf
// Address: 0x172de0 - 0x172de8
void SetPosition__11CCharacter2FPf_0x172de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__11CCharacter2FPf_0x172de0");
#endif

    ctx->pc = 0x172de0u;

    // 0x172de0: 0x804d864  j           func_136190
    ctx->pc = 0x172DE0u;
    ctx->pc = 0x136190u;
    if (runtime->hasFunction(0x136190u)) {
        auto targetFn = runtime->lookupFunction(0x136190u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetPosition__9mgCObjectFPf_0x136190(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172DE8u;
}
