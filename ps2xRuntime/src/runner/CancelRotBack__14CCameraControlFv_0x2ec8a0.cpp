#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelRotBack__14CCameraControlFv
// Address: 0x2ec8a0 - 0x2ec8a8
void CancelRotBack__14CCameraControlFv_0x2ec8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelRotBack__14CCameraControlFv_0x2ec8a0");
#endif

    ctx->pc = 0x2ec8a0u;

    // 0x2ec8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8A0u;
            // 0x2ec8a4: 0xac8000c8  sw          $zero, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC8A8u;
}
