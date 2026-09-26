#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Resume__9mgCCameraFv
// Address: 0x131b40 - 0x131b48
void Resume__9mgCCameraFv_0x131b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Resume__9mgCCameraFv_0x131b40");
#endif

    ctx->pc = 0x131b40u;

    // 0x131b40: 0x3e00008  jr          $ra
    ctx->pc = 0x131B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B40u;
            // 0x131b44: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131B48u;
}
