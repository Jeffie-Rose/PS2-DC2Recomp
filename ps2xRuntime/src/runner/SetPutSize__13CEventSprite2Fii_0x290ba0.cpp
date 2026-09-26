#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPutSize__13CEventSprite2Fii
// Address: 0x290ba0 - 0x290bac
void SetPutSize__13CEventSprite2Fii_0x290ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPutSize__13CEventSprite2Fii_0x290ba0");
#endif

    ctx->pc = 0x290ba0u;

    // 0x290ba0: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x290ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x290ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x290BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BA4u;
            // 0x290ba8: 0xac860058  sw          $a2, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290BACu;
}
