#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__11dbgCJISFontFv
// Address: 0x186370 - 0x186378
void Clear__11dbgCJISFontFv_0x186370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__11dbgCJISFontFv_0x186370");
#endif

    ctx->pc = 0x186370u;

    // 0x186370: 0x3e00008  jr          $ra
    ctx->pc = 0x186370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186370u;
            // 0x186374: 0xa0800088  sb          $zero, 0x88($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186378u;
}
