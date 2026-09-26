#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stop__5CRainFv
// Address: 0x2822d0 - 0x2822d8
void Stop__5CRainFv_0x2822d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stop__5CRainFv_0x2822d0");
#endif

    ctx->pc = 0x2822d0u;

    // 0x2822d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2822D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2822D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2822D0u;
            // 0x2822d4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2822D8u;
}
