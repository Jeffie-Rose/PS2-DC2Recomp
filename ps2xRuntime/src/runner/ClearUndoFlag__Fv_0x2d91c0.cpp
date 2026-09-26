#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearUndoFlag__Fv
// Address: 0x2d91c0 - 0x2d91d8
void ClearUndoFlag__Fv_0x2d91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearUndoFlag__Fv_0x2d91c0");
#endif

    ctx->pc = 0x2d91c0u;

    // 0x2d91c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d91c4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d91c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2d91c8: 0xac2388b0  sw          $v1, -0x7750($at)
    ctx->pc = 0x2d91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936752), GPR_U32(ctx, 3));
    // 0x2d91cc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d91ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2d91d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D91D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D91D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D91D0u;
            // 0x2d91d4: 0xac2388b4  sw          $v1, -0x774C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294936756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D91D8u;
}
