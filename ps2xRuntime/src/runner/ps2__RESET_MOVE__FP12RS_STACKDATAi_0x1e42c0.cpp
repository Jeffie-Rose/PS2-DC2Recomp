#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_MOVE__FP12RS_STACKDATAi
// Address: 0x1e42c0 - 0x1e42d0
void ps2__RESET_MOVE__FP12RS_STACKDATAi_0x1e42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_MOVE__FP12RS_STACKDATAi_0x1e42c0");
#endif

    ctx->pc = 0x1e42c0u;

    // 0x1e42c0: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e42c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e42c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E42C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42C8u;
            // 0x1e42cc: 0xac601480  sw          $zero, 0x1480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E42D0u;
}
