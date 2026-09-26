#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFollowOffset__15mgCCameraFollowFPf
// Address: 0x131a80 - 0x131a8c
void GetFollowOffset__15mgCCameraFollowFPf_0x131a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFollowOffset__15mgCCameraFollowFPf_0x131a80");
#endif

    ctx->pc = 0x131a80u;

    // 0x131a80: 0x78830080  lq          $v1, 0x80($a0)
    ctx->pc = 0x131a80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x131a84: 0x3e00008  jr          $ra
    ctx->pc = 0x131A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A84u;
            // 0x131a88: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A8Cu;
}
