#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dngGetDebugInfo__Fv
// Address: 0x1baa30 - 0x1baa3c
void dngGetDebugInfo__Fv_0x1baa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dngGetDebugInfo__Fv_0x1baa30");
#endif

    ctx->pc = 0x1baa30u;

    // 0x1baa30: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1baa34: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA34u;
            // 0x1baa38: 0x2442f1f0  addiu       $v0, $v0, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAA3Cu;
}
