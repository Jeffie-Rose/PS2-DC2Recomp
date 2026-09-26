#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetVSyncCount__Fv
// Address: 0x141310 - 0x141318
void mgGetVSyncCount__Fv_0x141310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    Ps2EeWaitScope __g652EeWaitScope;
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetVSyncCount__Fv_0x141310");
#endif

    ctx->pc = 0x141310u;

    // 0x141310: 0x3e00008  jr          $ra
    ctx->pc = 0x141310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141310u;
            // 0x141314: 0x8f828850  lw          $v0, -0x77B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141318u;
}
