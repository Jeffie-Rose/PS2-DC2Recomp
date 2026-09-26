#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapINIT_EPARTS_END__FP9SPI_STACKi
// Address: 0x1b4aa0 - 0x1b4ab4
void emapINIT_EPARTS_END__FP9SPI_STACKi_0x1b4aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapINIT_EPARTS_END__FP9SPI_STACKi_0x1b4aa0");
#endif

    ctx->pc = 0x1b4aa0u;

    // 0x1b4aa0: 0xaf808d3c  sw          $zero, -0x72C4($gp)
    ctx->pc = 0x1b4aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 0));
    // 0x1b4aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4aa8: 0xaf808d44  sw          $zero, -0x72BC($gp)
    ctx->pc = 0x1b4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 0));
    // 0x1b4aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4AACu;
            // 0x1b4ab0: 0xaf808d4c  sw          $zero, -0x72B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4AB4u;
}
