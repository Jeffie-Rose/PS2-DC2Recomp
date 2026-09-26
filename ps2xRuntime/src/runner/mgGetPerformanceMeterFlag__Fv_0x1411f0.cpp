#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetPerformanceMeterFlag__Fv
// Address: 0x1411f0 - 0x1411f8
void mgGetPerformanceMeterFlag__Fv_0x1411f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetPerformanceMeterFlag__Fv_0x1411f0");
#endif

    ctx->pc = 0x1411f0u;

    // 0x1411f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1411F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1411F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411F0u;
            // 0x1411f4: 0x8f828840  lw          $v0, -0x77C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1411F8u;
}
