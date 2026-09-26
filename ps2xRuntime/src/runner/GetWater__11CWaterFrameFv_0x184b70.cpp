#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWater__11CWaterFrameFv
// Address: 0x184b70 - 0x184b78
void GetWater__11CWaterFrameFv_0x184b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWater__11CWaterFrameFv_0x184b70");
#endif

    ctx->pc = 0x184b70u;

    // 0x184b70: 0x3e00008  jr          $ra
    ctx->pc = 0x184B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B70u;
            // 0x184b74: 0x8c8200f8  lw          $v0, 0xF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184B78u;
}
