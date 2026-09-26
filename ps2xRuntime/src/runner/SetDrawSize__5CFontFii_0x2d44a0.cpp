#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDrawSize__5CFontFii
// Address: 0x2d44a0 - 0x2d44ac
void SetDrawSize__5CFontFii_0x2d44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDrawSize__5CFontFii_0x2d44a0");
#endif

    ctx->pc = 0x2d44a0u;

    // 0x2d44a0: 0xac8500a4  sw          $a1, 0xA4($a0)
    ctx->pc = 0x2d44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 5));
    // 0x2d44a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D44A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D44A4u;
            // 0x2d44a8: 0xac8600a8  sw          $a2, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D44ACu;
}
