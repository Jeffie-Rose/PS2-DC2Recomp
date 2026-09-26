#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGyoRaceClass__Fi
// Address: 0x2197f0 - 0x2197f8
void SetGyoRaceClass__Fi_0x2197f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGyoRaceClass__Fi_0x2197f0");
#endif

    ctx->pc = 0x2197f0u;

    // 0x2197f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2197F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2197F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2197F0u;
            // 0x2197f4: 0xa3849250  sb          $a0, -0x6DB0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939216), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2197F8u;
}
