#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CLevelUpEffectFv
// Address: 0x22e230 - 0x22e240
void Initialize__14CLevelUpEffectFv_0x22e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CLevelUpEffectFv_0x22e230");
#endif

    ctx->pc = 0x22e230u;

    // 0x22e230: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22e230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e234: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x22e234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x22e238: 0x3e00008  jr          $ra
    ctx->pc = 0x22E238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E238u;
            // 0x22e23c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E240u;
}
