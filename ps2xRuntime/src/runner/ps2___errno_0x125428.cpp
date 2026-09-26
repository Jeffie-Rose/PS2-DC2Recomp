#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __errno
// Address: 0x125428 - 0x125434
void ps2___errno_0x125428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___errno_0x125428");
#endif

    ctx->pc = 0x125428u;

    // 0x125428: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x125428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12542c: 0x3e00008  jr          $ra
    ctx->pc = 0x12542Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12542Cu;
            // 0x125430: 0x8c623b84  lw          $v0, 0x3B84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125434u;
}
