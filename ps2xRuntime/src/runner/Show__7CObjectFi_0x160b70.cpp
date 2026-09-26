#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Show__7CObjectFi
// Address: 0x160b70 - 0x160b78
void Show__7CObjectFi_0x160b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Show__7CObjectFi_0x160b70");
#endif

    ctx->pc = 0x160b70u;

    // 0x160b70: 0x3e00008  jr          $ra
    ctx->pc = 0x160B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B70u;
            // 0x160b74: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B78u;
}
