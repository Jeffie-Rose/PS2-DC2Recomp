#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texBUG_PATCH__FP9SPI_STACKi
// Address: 0x13e380 - 0x13e390
void texBUG_PATCH__FP9SPI_STACKi_0x13e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texBUG_PATCH__FP9SPI_STACKi_0x13e380");
#endif

    ctx->pc = 0x13e380u;

    // 0x13e380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e384: 0xaf82874c  sw          $v0, -0x78B4($gp)
    ctx->pc = 0x13e384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 2));
    // 0x13e388: 0x3e00008  jr          $ra
    ctx->pc = 0x13E388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E390u;
}
