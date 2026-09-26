#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CPiyoriFv
// Address: 0x1c9810 - 0x1c9818
void Initialize__7CPiyoriFv_0x1c9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CPiyoriFv_0x1c9810");
#endif

    ctx->pc = 0x1c9810u;

    // 0x1c9810: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9810u;
            // 0x1c9814: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9818u;
}
