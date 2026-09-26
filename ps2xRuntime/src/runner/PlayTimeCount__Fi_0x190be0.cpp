#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayTimeCount__Fi
// Address: 0x190be0 - 0x190be8
void PlayTimeCount__Fi_0x190be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayTimeCount__Fi_0x190be0");
#endif

    ctx->pc = 0x190be0u;

    // 0x190be0: 0x3e00008  jr          $ra
    ctx->pc = 0x190BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190BE0u;
            // 0x190be4: 0xaf848afc  sw          $a0, -0x7504($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190BE8u;
}
