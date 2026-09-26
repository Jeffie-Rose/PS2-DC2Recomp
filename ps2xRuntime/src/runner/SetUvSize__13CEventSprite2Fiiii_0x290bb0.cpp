#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetUvSize__13CEventSprite2Fiiii
// Address: 0x290bb0 - 0x290bc4
void SetUvSize__13CEventSprite2Fiiii_0x290bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetUvSize__13CEventSprite2Fiiii_0x290bb0");
#endif

    ctx->pc = 0x290bb0u;

    // 0x290bb0: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x290bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x290bb4: 0xac860060  sw          $a2, 0x60($a0)
    ctx->pc = 0x290bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
    // 0x290bb8: 0xac870064  sw          $a3, 0x64($a0)
    ctx->pc = 0x290bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 7));
    // 0x290bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x290BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BBCu;
            // 0x290bc0: 0xac880068  sw          $t0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290BC4u;
}
