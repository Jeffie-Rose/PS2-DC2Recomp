#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEffectNums__14CEffectManagerFii
// Address: 0x182bc0 - 0x182bcc
void SetEffectNums__14CEffectManagerFii_0x182bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectNums__14CEffectManagerFii_0x182bc0");
#endif

    ctx->pc = 0x182bc0u;

    // 0x182bc0: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x182bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x182bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x182BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BC4u;
            // 0x182bc8: 0xac86002c  sw          $a2, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182BCCu;
}
