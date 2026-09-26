#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndLadder__Fv
// Address: 0x1a6ab0 - 0x1a6ab8
void EndLadder__Fv_0x1a6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndLadder__Fv_0x1a6ab0");
#endif

    ctx->pc = 0x1a6ab0u;

    // 0x1a6ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AB0u;
            // 0x1a6ab4: 0xaf808b98  sw          $zero, -0x7468($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6AB8u;
}
