#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSpriteType__13CEventSprite2Fi
// Address: 0x290b70 - 0x290b78
void SetSpriteType__13CEventSprite2Fi_0x290b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSpriteType__13CEventSprite2Fi_0x290b70");
#endif

    ctx->pc = 0x290b70u;

    // 0x290b70: 0x3e00008  jr          $ra
    ctx->pc = 0x290B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290B70u;
            // 0x290b74: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290B78u;
}
