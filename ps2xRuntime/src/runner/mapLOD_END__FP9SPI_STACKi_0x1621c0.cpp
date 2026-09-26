#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLOD_END__FP9SPI_STACKi
// Address: 0x1621c0 - 0x1621d4
void mapLOD_END__FP9SPI_STACKi_0x1621c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLOD_END__FP9SPI_STACKi_0x1621c0");
#endif

    ctx->pc = 0x1621c0u;

    // 0x1621c0: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
    // 0x1621c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1621c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1621cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1621CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1621D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621CCu;
            // 0x1621d0: 0xaf838930  sw          $v1, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1621D4u;
}
