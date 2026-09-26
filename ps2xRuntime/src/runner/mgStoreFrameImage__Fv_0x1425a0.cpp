#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgStoreFrameImage__Fv
// Address: 0x1425a0 - 0x1425a8
void mgStoreFrameImage__Fv_0x1425a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgStoreFrameImage__Fv_0x1425a0");
#endif

    ctx->pc = 0x1425a0u;

    // 0x1425a0: 0x80517d4  j           func_145F50
    ctx->pc = 0x1425A0u;
    ctx->pc = 0x1425A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1425A0u;
            // 0x1425a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F50u;
    if (runtime->hasFunction(0x145F50u)) {
        auto targetFn = runtime->lookupFunction(0x145F50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        StoreImage__Fi_0x145f50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1425A8u;
}
