#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__7CMarkerFv
// Address: 0x290220 - 0x290228
void Init__7CMarkerFv_0x290220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7CMarkerFv_0x290220");
#endif

    ctx->pc = 0x290220u;

    // 0x290220: 0x80a4084  j           func_290210
    ctx->pc = 0x290220u;
    ctx->pc = 0x290224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290220u;
            // 0x290224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290210u;
    if (runtime->hasFunction(0x290210u)) {
        auto targetFn = runtime->lookupFunction(0x290210u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Set__7CMarkerFi_0x290210(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x290228u;
}
