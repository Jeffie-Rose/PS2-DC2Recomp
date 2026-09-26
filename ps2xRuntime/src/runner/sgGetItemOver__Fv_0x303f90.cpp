#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgGetItemOver__Fv
// Address: 0x303f90 - 0x303f98
void sgGetItemOver__Fv_0x303f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgGetItemOver__Fv_0x303f90");
#endif

    ctx->pc = 0x303f90u;

    // 0x303f90: 0x3e00008  jr          $ra
    ctx->pc = 0x303F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F90u;
            // 0x303f94: 0x8f82a10c  lw          $v0, -0x5EF4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942988)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303F98u;
}
