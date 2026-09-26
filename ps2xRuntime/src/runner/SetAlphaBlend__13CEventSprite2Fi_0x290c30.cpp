#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAlphaBlend__13CEventSprite2Fi
// Address: 0x290c30 - 0x290c38
void SetAlphaBlend__13CEventSprite2Fi_0x290c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAlphaBlend__13CEventSprite2Fi_0x290c30");
#endif

    ctx->pc = 0x290c30u;

    // 0x290c30: 0x3e00008  jr          $ra
    ctx->pc = 0x290C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C30u;
            // 0x290c34: 0xac85002c  sw          $a1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290C38u;
}
