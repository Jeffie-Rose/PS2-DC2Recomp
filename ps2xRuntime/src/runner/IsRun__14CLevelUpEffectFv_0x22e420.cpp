#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsRun__14CLevelUpEffectFv
// Address: 0x22e420 - 0x22e428
void IsRun__14CLevelUpEffectFv_0x22e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsRun__14CLevelUpEffectFv_0x22e420");
#endif

    ctx->pc = 0x22e420u;

    // 0x22e420: 0x3e00008  jr          $ra
    ctx->pc = 0x22E420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E420u;
            // 0x22e424: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E428u;
}
