#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsLightingEditMode__Fv
// Address: 0x1a8430 - 0x1a8438
void IsLightingEditMode__Fv_0x1a8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsLightingEditMode__Fv_0x1a8430");
#endif

    ctx->pc = 0x1a8430u;

    // 0x1a8430: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8430u;
            // 0x1a8434: 0x8f828c38  lw          $v0, -0x73C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8438u;
}
