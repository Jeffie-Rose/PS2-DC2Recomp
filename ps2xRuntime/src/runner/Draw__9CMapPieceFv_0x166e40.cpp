#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CMapPieceFv
// Address: 0x166e40 - 0x166e48
void Draw__9CMapPieceFv_0x166e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CMapPieceFv_0x166e40");
#endif

    ctx->pc = 0x166e40u;

    // 0x166e40: 0x805a1cc  j           func_168730
    ctx->pc = 0x166E40u;
    ctx->pc = 0x166E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E40u;
            // 0x166e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168730u;
    if (runtime->hasFunction(0x168730u)) {
        auto targetFn = runtime->lookupFunction(0x168730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DrawSub__9CMapPieceFi_0x168730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x166E48u;
}
