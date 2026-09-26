#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FollowOff__15mgCCameraFollowFv
// Address: 0x1319b0 - 0x1319b8
void FollowOff__15mgCCameraFollowFv_0x1319b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FollowOff__15mgCCameraFollowFv_0x1319b0");
#endif

    ctx->pc = 0x1319b0u;

    // 0x1319b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1319B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319B0u;
            // 0x1319b4: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1319B8u;
}
