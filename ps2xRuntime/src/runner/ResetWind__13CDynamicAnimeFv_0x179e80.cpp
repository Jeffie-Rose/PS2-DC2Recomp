#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetWind__13CDynamicAnimeFv
// Address: 0x179e80 - 0x179e88
void ResetWind__13CDynamicAnimeFv_0x179e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetWind__13CDynamicAnimeFv_0x179e80");
#endif

    ctx->pc = 0x179e80u;

    // 0x179e80: 0x3e00008  jr          $ra
    ctx->pc = 0x179E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E80u;
            // 0x179e84: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179E88u;
}
