#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLODBlend__9CMapPartsFv
// Address: 0x1621b0 - 0x1621b8
void GetLODBlend__9CMapPartsFv_0x1621b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLODBlend__9CMapPartsFv_0x1621b0");
#endif

    ctx->pc = 0x1621b0u;

    // 0x1621b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1621B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1621B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621B0u;
            // 0x1621b4: 0x8c8201d4  lw          $v0, 0x1D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1621B8u;
}
