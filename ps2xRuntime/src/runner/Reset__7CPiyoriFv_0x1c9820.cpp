#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Reset__7CPiyoriFv
// Address: 0x1c9820 - 0x1c982c
void Reset__7CPiyoriFv_0x1c9820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reset__7CPiyoriFv_0x1c9820");
#endif

    ctx->pc = 0x1c9820u;

    // 0x1c9820: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c9820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c9824: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9824u;
            // 0x1c9828: 0xa480001c  sh          $zero, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C982Cu;
}
