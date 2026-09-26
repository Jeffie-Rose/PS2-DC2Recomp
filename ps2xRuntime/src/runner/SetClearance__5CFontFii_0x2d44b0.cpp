#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetClearance__5CFontFii
// Address: 0x2d44b0 - 0x2d44bc
void SetClearance__5CFontFii_0x2d44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetClearance__5CFontFii_0x2d44b0");
#endif

    ctx->pc = 0x2d44b0u;

    // 0x2d44b0: 0xac85009c  sw          $a1, 0x9C($a0)
    ctx->pc = 0x2d44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
    // 0x2d44b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D44B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D44B4u;
            // 0x2d44b8: 0xac8600a0  sw          $a2, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D44BCu;
}
