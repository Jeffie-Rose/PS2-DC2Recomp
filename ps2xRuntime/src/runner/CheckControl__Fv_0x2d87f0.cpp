#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckControl__Fv
// Address: 0x2d87f0 - 0x2d87f8
void CheckControl__Fv_0x2d87f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckControl__Fv_0x2d87f0");
#endif

    ctx->pc = 0x2d87f0u;

    // 0x2d87f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D87F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D87F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87F0u;
            // 0x2d87f4: 0x8f829e5c  lw          $v0, -0x61A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D87F8u;
}
