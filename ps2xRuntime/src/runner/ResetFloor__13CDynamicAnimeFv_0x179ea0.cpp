#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetFloor__13CDynamicAnimeFv
// Address: 0x179ea0 - 0x179ea8
void ResetFloor__13CDynamicAnimeFv_0x179ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetFloor__13CDynamicAnimeFv_0x179ea0");
#endif

    ctx->pc = 0x179ea0u;

    // 0x179ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x179EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179EA0u;
            // 0x179ea4: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179EA8u;
}
