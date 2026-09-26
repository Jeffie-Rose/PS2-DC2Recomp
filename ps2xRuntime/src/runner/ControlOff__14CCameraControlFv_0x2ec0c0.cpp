#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ControlOff__14CCameraControlFv
// Address: 0x2ec0c0 - 0x2ec0c8
void ControlOff__14CCameraControlFv_0x2ec0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ControlOff__14CCameraControlFv_0x2ec0c0");
#endif

    ctx->pc = 0x2ec0c0u;

    // 0x2ec0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC0C0u;
            // 0x2ec0c4: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC0C8u;
}
