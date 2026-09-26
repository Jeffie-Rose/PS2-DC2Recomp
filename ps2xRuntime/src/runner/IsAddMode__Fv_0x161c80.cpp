#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsAddMode__Fv
// Address: 0x161c80 - 0x161c88
void IsAddMode__Fv_0x161c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAddMode__Fv_0x161c80");
#endif

    ctx->pc = 0x161c80u;

    // 0x161c80: 0x3e00008  jr          $ra
    ctx->pc = 0x161C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C80u;
            // 0x161c84: 0x8f82894c  lw          $v0, -0x76B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936908)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161C88u;
}
