#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUndoData__Fv
// Address: 0x2d9710 - 0x2d971c
void GetUndoData__Fv_0x2d9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUndoData__Fv_0x2d9710");
#endif

    ctx->pc = 0x2d9710u;

    // 0x2d9710: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2d9710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2d9714: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9714u;
            // 0x2d9718: 0x244288b0  addiu       $v0, $v0, -0x7750 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D971Cu;
}
