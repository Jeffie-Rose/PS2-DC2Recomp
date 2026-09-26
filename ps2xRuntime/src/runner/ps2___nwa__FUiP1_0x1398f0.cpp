#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __nwa__FUiP1
// Address: 0x1398f0 - 0x1398f8
void ps2___nwa__FUiP1_0x1398f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___nwa__FUiP1_0x1398f0");
#endif

    ctx->pc = 0x1398f0u;

    // 0x1398f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1398F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1398F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398F0u;
            // 0x1398f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1398F8u;
}
