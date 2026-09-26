#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FollowOn__15mgCCameraFollowFv
// Address: 0x1319a0 - 0x1319ac
void FollowOn__15mgCCameraFollowFv_0x1319a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FollowOn__15mgCCameraFollowFv_0x1319a0");
#endif

    ctx->pc = 0x1319a0u;

    // 0x1319a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1319a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1319a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1319A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319A4u;
            // 0x1319a8: 0xac8300a0  sw          $v1, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1319ACu;
}
