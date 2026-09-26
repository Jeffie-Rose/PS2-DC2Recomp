#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DCTitleStep__Fi
// Address: 0x2a3010 - 0x2a3018
void DCTitleStep__Fi_0x2a3010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DCTitleStep__Fi_0x2a3010");
#endif

    ctx->pc = 0x2a3010u;

    // 0x2a3010: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3010u;
            // 0x2a3014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3018u;
}
