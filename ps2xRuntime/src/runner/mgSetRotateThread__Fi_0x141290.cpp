#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetRotateThread__Fi
// Address: 0x141290 - 0x141298
void mgSetRotateThread__Fi_0x141290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetRotateThread__Fi_0x141290");
#endif

    ctx->pc = 0x141290u;

    // 0x141290: 0x3e00008  jr          $ra
    ctx->pc = 0x141290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141290u;
            // 0x141294: 0xaf84801c  sw          $a0, -0x7FE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141298u;
}
