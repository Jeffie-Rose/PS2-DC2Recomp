#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainFrameLeftTopPos__Fi
// Address: 0x223ff0 - 0x223ff8
void GetMenuMainFrameLeftTopPos__Fi_0x223ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainFrameLeftTopPos__Fi_0x223ff0");
#endif

    ctx->pc = 0x223ff0u;

    // 0x223ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x223FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FF0u;
            // 0x223ff4: 0x278293d8  addiu       $v0, $gp, -0x6C28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223FF8u;
}
