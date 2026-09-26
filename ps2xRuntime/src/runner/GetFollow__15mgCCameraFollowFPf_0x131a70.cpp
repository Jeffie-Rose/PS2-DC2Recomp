#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFollow__15mgCCameraFollowFPf
// Address: 0x131a70 - 0x131a7c
void GetFollow__15mgCCameraFollowFPf_0x131a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFollow__15mgCCameraFollowFPf_0x131a70");
#endif

    ctx->pc = 0x131a70u;

    // 0x131a70: 0x78830070  lq          $v1, 0x70($a0)
    ctx->pc = 0x131a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x131a74: 0x3e00008  jr          $ra
    ctx->pc = 0x131A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A74u;
            // 0x131a78: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A7Cu;
}
