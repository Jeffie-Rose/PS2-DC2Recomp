#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyLock__8CGamePadFi
// Address: 0x14b1c0 - 0x14b1c8
void KeyLock__8CGamePadFi_0x14b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyLock__8CGamePadFi_0x14b1c0");
#endif

    ctx->pc = 0x14b1c0u;

    // 0x14b1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1C0u;
            // 0x14b1c4: 0xac85045c  sw          $a1, 0x45C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B1C8u;
}
