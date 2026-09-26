#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAnalyzeData__9CEditDataFii
// Address: 0x2aa0a0 - 0x2aa0ac
void GetAnalyzeData__9CEditDataFii_0x2aa0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAnalyzeData__9CEditDataFii_0x2aa0a0");
#endif

    ctx->pc = 0x2aa0a0u;

    // 0x2aa0a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aa0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0a4: 0x80aa238  j           func_2A88E0
    ctx->pc = 0x2AA0A4u;
    ctx->pc = 0x2AA0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA0A4u;
            // 0x2aa0a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88E0u;
    if (runtime->hasFunction(0x2A88E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A88E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetAnalyzeDataSrc__Fii_0x2a88e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2AA0ACu;
}
