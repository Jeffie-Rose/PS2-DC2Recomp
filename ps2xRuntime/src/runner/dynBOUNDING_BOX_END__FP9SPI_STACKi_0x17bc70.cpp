#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynBOUNDING_BOX_END__FP9SPI_STACKi
// Address: 0x17bc70 - 0x17bc78
void dynBOUNDING_BOX_END__FP9SPI_STACKi_0x17bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynBOUNDING_BOX_END__FP9SPI_STACKi_0x17bc70");
#endif

    ctx->pc = 0x17bc70u;

    // 0x17bc70: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC70u;
            // 0x17bc74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BC78u;
}
