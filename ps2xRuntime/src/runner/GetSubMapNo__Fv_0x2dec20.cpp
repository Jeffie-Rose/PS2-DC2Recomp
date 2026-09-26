#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSubMapNo__Fv
// Address: 0x2dec20 - 0x2dec28
void GetSubMapNo__Fv_0x2dec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSubMapNo__Fv_0x2dec20");
#endif

    ctx->pc = 0x2dec20u;

    // 0x2dec20: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC20u;
            // 0x2dec24: 0x8f829eb0  lw          $v0, -0x6150($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942384)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEC28u;
}
