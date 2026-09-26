#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMode__17CHealingEffectManFi
// Address: 0x1c18f0 - 0x1c18f8
void SetMode__17CHealingEffectManFi_0x1c18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMode__17CHealingEffectManFi_0x1c18f0");
#endif

    ctx->pc = 0x1c18f0u;

    // 0x1c18f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C18F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C18F0u;
            // 0x1c18f4: 0xa4850314  sh          $a1, 0x314($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 788), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C18F8u;
}
