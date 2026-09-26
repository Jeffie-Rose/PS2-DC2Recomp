#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LockCharaCtrl__Fv
// Address: 0x1a9b60 - 0x1a9b70
void LockCharaCtrl__Fv_0x1a9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LockCharaCtrl__Fv_0x1a9b60");
#endif

    ctx->pc = 0x1a9b60u;

    // 0x1a9b60: 0x8f838c9c  lw          $v1, -0x7364($gp)
    ctx->pc = 0x1a9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x1a9b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a9b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B68u;
            // 0x1a9b6c: 0xaf838c9c  sw          $v1, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9B70u;
}
