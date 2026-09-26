#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFadeFlag__11CCharacter2Fi
// Address: 0x168480 - 0x168488
void SetFadeFlag__11CCharacter2Fi_0x168480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFadeFlag__11CCharacter2Fi_0x168480");
#endif

    ctx->pc = 0x168480u;

    // 0x168480: 0x3e00008  jr          $ra
    ctx->pc = 0x168480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168480u;
            // 0x168484: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168488u;
}
