#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSystemMesBuffer__Fv
// Address: 0x196860 - 0x19686c
void GetSystemMesBuffer__Fv_0x196860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSystemMesBuffer__Fv_0x196860");
#endif

    ctx->pc = 0x196860u;

    // 0x196860: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x196864: 0x3e00008  jr          $ra
    ctx->pc = 0x196864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196864u;
            // 0x196868: 0x24424240  addiu       $v0, $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19686Cu;
}
