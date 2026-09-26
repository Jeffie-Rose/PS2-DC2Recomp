#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_END__FP9SPI_STACKi
// Address: 0x1d5930 - 0x1d5944
void ps2__ROOM_END__FP9SPI_STACKi_0x1d5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_END__FP9SPI_STACKi_0x1d5930");
#endif

    ctx->pc = 0x1d5930u;

    // 0x1d5930: 0x8f838e50  lw          $v1, -0x71B0($gp)
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d5934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5938: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1d593c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D593Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D593Cu;
            // 0x1d5940: 0xaf838e50  sw          $v1, -0x71B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5944u;
}
