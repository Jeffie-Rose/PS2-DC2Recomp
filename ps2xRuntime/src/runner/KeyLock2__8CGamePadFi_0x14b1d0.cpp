#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyLock2__8CGamePadFi
// Address: 0x14b1d0 - 0x14b1d8
void KeyLock2__8CGamePadFi_0x14b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyLock2__8CGamePadFi_0x14b1d0");
#endif

    ctx->pc = 0x14b1d0u;

    // 0x14b1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1D0u;
            // 0x14b1d4: 0xac850460  sw          $a1, 0x460($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B1D8u;
}
