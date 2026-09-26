#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_PALLET_ANIM__FP12RS_STACKDATAi
// Address: 0x1e1070 - 0x1e1084
void ps2__RESET_PALLET_ANIM__FP12RS_STACKDATAi_0x1e1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_PALLET_ANIM__FP12RS_STACKDATAi_0x1e1070");
#endif

    ctx->pc = 0x1e1070u;

    // 0x1e1070: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1078: 0xa4600686  sh          $zero, 0x686($v1)
    ctx->pc = 0x1e1078u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1670), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e107c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E107Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E107Cu;
            // 0x1e1080: 0xa4600684  sh          $zero, 0x684($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1668), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1084u;
}
