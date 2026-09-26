#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MT_TEST__FP12RS_STACKDATAi
// Address: 0x2767a0 - 0x2767a8
void ps2__MT_TEST__FP12RS_STACKDATAi_0x2767a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MT_TEST__FP12RS_STACKDATAi_0x2767a0");
#endif

    ctx->pc = 0x2767a0u;

    // 0x2767a0: 0x80b7b00  j           func_2DEC00
    ctx->pc = 0x2767A0u;
    ctx->pc = 0x2DEC00u;
    if (runtime->hasFunction(0x2DEC00u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mt_test__FP12RS_STACKDATAi_0x2dec00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2767A8u;
}
