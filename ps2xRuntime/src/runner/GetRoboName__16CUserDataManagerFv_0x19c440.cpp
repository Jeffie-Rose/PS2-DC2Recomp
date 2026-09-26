#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboName__16CUserDataManagerFv
// Address: 0x19c440 - 0x19c448
void GetRoboName__16CUserDataManagerFv_0x19c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboName__16CUserDataManagerFv_0x19c440");
#endif

    ctx->pc = 0x19c440u;

    // 0x19c440: 0x3e00008  jr          $ra
    ctx->pc = 0x19C440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C440u;
            // 0x19c444: 0x24824662  addiu       $v0, $a0, 0x4662 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 18018));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C448u;
}
