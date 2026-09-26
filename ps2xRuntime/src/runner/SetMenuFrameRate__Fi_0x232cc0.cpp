#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuFrameRate__Fi
// Address: 0x232cc0 - 0x232cc8
void SetMenuFrameRate__Fi_0x232cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuFrameRate__Fi_0x232cc0");
#endif

    ctx->pc = 0x232cc0u;

    // 0x232cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x232CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232CC0u;
            // 0x232cc4: 0xaf848760  sw          $a0, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232CC8u;
}
