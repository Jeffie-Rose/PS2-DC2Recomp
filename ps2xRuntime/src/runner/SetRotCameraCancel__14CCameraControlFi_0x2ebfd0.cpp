#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotCameraCancel__14CCameraControlFi
// Address: 0x2ebfd0 - 0x2ebfd8
void SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotCameraCancel__14CCameraControlFi_0x2ebfd0");
#endif

    ctx->pc = 0x2ebfd0u;

    // 0x2ebfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFD0u;
            // 0x2ebfd4: 0xac8500c4  sw          $a1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBFD8u;
}
