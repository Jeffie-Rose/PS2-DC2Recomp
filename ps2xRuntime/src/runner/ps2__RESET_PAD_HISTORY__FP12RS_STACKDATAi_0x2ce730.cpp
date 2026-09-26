#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_PAD_HISTORY__FP12RS_STACKDATAi
// Address: 0x2ce730 - 0x2ce744
void ps2__RESET_PAD_HISTORY__FP12RS_STACKDATAi_0x2ce730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_PAD_HISTORY__FP12RS_STACKDATAi_0x2ce730");
#endif

    ctx->pc = 0x2ce730u;

    // 0x2ce730: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce738: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2ce738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce73c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE73Cu;
            // 0x2ce740: 0xac600714  sw          $zero, 0x714($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE744u;
}
