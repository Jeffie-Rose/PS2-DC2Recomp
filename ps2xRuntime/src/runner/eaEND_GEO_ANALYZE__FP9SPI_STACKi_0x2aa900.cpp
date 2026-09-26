#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaEND_GEO_ANALYZE__FP9SPI_STACKi
// Address: 0x2aa900 - 0x2aa90c
void eaEND_GEO_ANALYZE__FP9SPI_STACKi_0x2aa900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaEND_GEO_ANALYZE__FP9SPI_STACKi_0x2aa900");
#endif

    ctx->pc = 0x2aa900u;

    // 0x2aa900: 0xaf809a84  sw          $zero, -0x657C($gp)
    ctx->pc = 0x2aa900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941316), GPR_U32(ctx, 0));
    // 0x2aa904: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA904u;
            // 0x2aa908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA90Cu;
}
