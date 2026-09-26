#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MapViewLoop__Fv
// Address: 0x1a2100 - 0x1a2108
void MapViewLoop__Fv_0x1a2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MapViewLoop__Fv_0x1a2100");
#endif

    ctx->pc = 0x1a2100u;

    // 0x1a2100: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2100u;
            // 0x1a2104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2108u;
}
