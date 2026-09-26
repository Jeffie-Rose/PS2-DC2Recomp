#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecEndPut__FP8VideoDeci
// Address: 0x29bd00 - 0x29bd08
void videoDecEndPut__FP8VideoDeci_0x29bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecEndPut__FP8VideoDeci_0x29bd00");
#endif

    ctx->pc = 0x29bd00u;

    // 0x29bd00: 0x80a67f0  j           func_299FC0
    ctx->pc = 0x29BD00u;
    ctx->pc = 0x29BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD00u;
            // 0x29bd04: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (runtime->hasFunction(0x299FC0u)) {
        auto targetFn = runtime->lookupFunction(0x299FC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufEndPut__FP5ViBufi_0x299fc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29BD08u;
}
