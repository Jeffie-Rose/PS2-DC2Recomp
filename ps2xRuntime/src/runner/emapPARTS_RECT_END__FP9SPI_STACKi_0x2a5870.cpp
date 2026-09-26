#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPARTS_RECT_END__FP9SPI_STACKi
// Address: 0x2a5870 - 0x2a587c
void emapPARTS_RECT_END__FP9SPI_STACKi_0x2a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPARTS_RECT_END__FP9SPI_STACKi_0x2a5870");
#endif

    ctx->pc = 0x2a5870u;

    // 0x2a5870: 0xaf809a6c  sw          $zero, -0x6594($gp)
    ctx->pc = 0x2a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941292), GPR_U32(ctx, 0));
    // 0x2a5874: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5874u;
            // 0x2a5878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A587Cu;
}
