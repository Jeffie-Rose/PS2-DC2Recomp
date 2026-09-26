#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetWind__6CSceneFv
// Address: 0x284b40 - 0x284b48
void ResetWind__6CSceneFv_0x284b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetWind__6CSceneFv_0x284b40");
#endif

    ctx->pc = 0x284b40u;

    // 0x284b40: 0x3e00008  jr          $ra
    ctx->pc = 0x284B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B40u;
            // 0x284b44: 0xac802f78  sw          $zero, 0x2F78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284B48u;
}
