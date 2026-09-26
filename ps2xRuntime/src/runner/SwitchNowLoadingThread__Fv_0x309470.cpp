#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SwitchNowLoadingThread__Fv
// Address: 0x309470 - 0x309478
void SwitchNowLoadingThread__Fv_0x309470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SwitchNowLoadingThread__Fv_0x309470");
#endif

    ctx->pc = 0x309470u;

    // 0x309470: 0x8043fe4  j           func_10FF90
    ctx->pc = 0x309470u;
    ctx->pc = 0x309474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309470u;
            // 0x309474: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x309478u;
}
