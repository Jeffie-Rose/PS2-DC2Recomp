#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGyoRaceAquariumNo__Fi
// Address: 0x2197d0 - 0x2197d8
void SetGyoRaceAquariumNo__Fi_0x2197d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGyoRaceAquariumNo__Fi_0x2197d0");
#endif

    ctx->pc = 0x2197d0u;

    // 0x2197d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2197D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2197D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2197D0u;
            // 0x2197d4: 0xa384924c  sb          $a0, -0x6DB4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939212), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2197D8u;
}
