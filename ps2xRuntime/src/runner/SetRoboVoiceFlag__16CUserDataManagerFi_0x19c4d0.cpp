#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRoboVoiceFlag__16CUserDataManagerFi
// Address: 0x19c4d0 - 0x19c4d8
void SetRoboVoiceFlag__16CUserDataManagerFi_0x19c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRoboVoiceFlag__16CUserDataManagerFi_0x19c4d0");
#endif

    ctx->pc = 0x19c4d0u;

    // 0x19c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4D0u;
            // 0x19c4d4: 0xa085467d  sb          $a1, 0x467D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 18045), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C4D8u;
}
