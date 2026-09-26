#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CANCEL_LOAD_VILLAGER__FP12RS_STACKDATAi
// Address: 0x27a240 - 0x27a254
void ps2__CANCEL_LOAD_VILLAGER__FP12RS_STACKDATAi_0x27a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CANCEL_LOAD_VILLAGER__FP12RS_STACKDATAi_0x27a240");
#endif

    ctx->pc = 0x27a240u;

    // 0x27a240: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x27a240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27a244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a248: 0xac62303c  sw          $v0, 0x303C($v1)
    ctx->pc = 0x27a248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12348), GPR_U32(ctx, 2));
    // 0x27a24c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A24Cu;
            // 0x27a250: 0xac623038  sw          $v0, 0x3038($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A254u;
}
