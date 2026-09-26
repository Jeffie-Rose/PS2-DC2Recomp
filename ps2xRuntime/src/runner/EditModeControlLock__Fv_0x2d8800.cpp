#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditModeControlLock__Fv
// Address: 0x2d8800 - 0x2d8810
void EditModeControlLock__Fv_0x2d8800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditModeControlLock__Fv_0x2d8800");
#endif

    ctx->pc = 0x2d8800u;

    // 0x2d8800: 0x8f839e5c  lw          $v1, -0x61A4($gp)
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942300)));
    // 0x2d8804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8808: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8808u;
            // 0x2d880c: 0xaf839e5c  sw          $v1, -0x61A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8810u;
}
