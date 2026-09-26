#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__5CFontFii
// Address: 0x2d44c0 - 0x2d44cc
void SetPos__5CFontFii_0x2d44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__5CFontFii_0x2d44c0");
#endif

    ctx->pc = 0x2d44c0u;

    // 0x2d44c0: 0xac850094  sw          $a1, 0x94($a0)
    ctx->pc = 0x2d44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 5));
    // 0x2d44c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D44C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D44C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D44C4u;
            // 0x2d44c8: 0xac860098  sw          $a2, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D44CCu;
}
