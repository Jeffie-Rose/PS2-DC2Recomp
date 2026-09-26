#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi
// Address: 0x1751c0 - 0x1751c8
void LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0");
#endif

    ctx->pc = 0x1751c0u;

    // 0x1751c0: 0x805df90  j           func_177E40
    ctx->pc = 0x1751C0u;
    ctx->pc = 0x177E40u;
    if (runtime->hasFunction(0x177E40u)) {
        auto targetFn = runtime->lookupFunction(0x177E40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ScanInfoSkinFile__FP11CCharacter2PUiPcPcP9mgCMemoryi_0x177e40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1751C8u;
}
