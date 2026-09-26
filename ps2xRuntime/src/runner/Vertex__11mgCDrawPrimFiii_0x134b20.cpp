#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Vertex__11mgCDrawPrimFiii
// Address: 0x134b20 - 0x134b2c
void Vertex__11mgCDrawPrimFiii_0x134b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vertex__11mgCDrawPrimFiii_0x134b20");
#endif

    ctx->pc = 0x134b20u;

    // 0x134b20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x134b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x134b24: 0x804d2ec  j           func_134BB0
    ctx->pc = 0x134B24u;
    ctx->pc = 0x134B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134B24u;
            // 0x134b28: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x134B2Cu;
}
