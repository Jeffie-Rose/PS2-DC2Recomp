#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuPrim__Fv
// Address: 0x232c50 - 0x232c58
void GetMenuPrim__Fv_0x232c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuPrim__Fv_0x232c50");
#endif

    ctx->pc = 0x232c50u;

    // 0x232c50: 0x3e00008  jr          $ra
    ctx->pc = 0x232C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C50u;
            // 0x232c54: 0x8f8294d8  lw          $v0, -0x6B28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939864)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232C58u;
}
