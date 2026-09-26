#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__9mgCSpriteFiiii
// Address: 0x13b8d0 - 0x13b8e8
void SetColor__9mgCSpriteFiiii_0x13b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__9mgCSpriteFiiii_0x13b8d0");
#endif

    ctx->pc = 0x13b8d0u;

    // 0x13b8d0: 0xa0850070  sb          $a1, 0x70($a0)
    ctx->pc = 0x13b8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x13b8d4: 0xa0860071  sb          $a2, 0x71($a0)
    ctx->pc = 0x13b8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 113), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b8d8: 0xa0870072  sb          $a3, 0x72($a0)
    ctx->pc = 0x13b8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 7));
    // 0x13b8dc: 0xa0880073  sb          $t0, 0x73($a0)
    ctx->pc = 0x13b8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 8));
    // 0x13b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8E0u;
            // 0x13b8e4: 0xac800074  sw          $zero, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B8E8u;
}
