#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFishingMode__Fi
// Address: 0x30f9b0 - 0x30f9b8
void SetFishingMode__Fi_0x30f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFishingMode__Fi_0x30f9b0");
#endif

    ctx->pc = 0x30f9b0u;

    // 0x30f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9B0u;
            // 0x30f9b4: 0xaf84a26c  sw          $a0, -0x5D94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F9B8u;
}
