#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__5CFontFiiii
// Address: 0x2d44d0 - 0x2d44e4
void SetColor__5CFontFiiii_0x2d44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__5CFontFiiii_0x2d44d0");
#endif

    ctx->pc = 0x2d44d0u;

    // 0x2d44d0: 0xa0850088  sb          $a1, 0x88($a0)
    ctx->pc = 0x2d44d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d44d4: 0xa0860089  sb          $a2, 0x89($a0)
    ctx->pc = 0x2d44d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 137), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d44d8: 0xa087008a  sb          $a3, 0x8A($a0)
    ctx->pc = 0x2d44d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d44dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D44DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D44DCu;
            // 0x2d44e0: 0xa088008b  sb          $t0, 0x8B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D44E4u;
}
