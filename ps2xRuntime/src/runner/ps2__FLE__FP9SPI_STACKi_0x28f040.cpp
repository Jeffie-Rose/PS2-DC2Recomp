#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FLE__FP9SPI_STACKi
// Address: 0x28f040 - 0x28f050
void ps2__FLE__FP9SPI_STACKi_0x28f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FLE__FP9SPI_STACKi_0x28f040");
#endif

    ctx->pc = 0x28f040u;

    // 0x28f040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f044: 0xaf829838  sw          $v0, -0x67C8($gp)
    ctx->pc = 0x28f044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940728), GPR_U32(ctx, 2));
    // 0x28f048: 0x3e00008  jr          $ra
    ctx->pc = 0x28F048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F048u;
            // 0x28f04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F050u;
}
