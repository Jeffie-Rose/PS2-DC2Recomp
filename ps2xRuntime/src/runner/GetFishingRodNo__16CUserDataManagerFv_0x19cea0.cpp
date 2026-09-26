#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishingRodNo__16CUserDataManagerFv
// Address: 0x19cea0 - 0x19cea8
void GetFishingRodNo__16CUserDataManagerFv_0x19cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishingRodNo__16CUserDataManagerFv_0x19cea0");
#endif

    ctx->pc = 0x19cea0u;

    // 0x19cea0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEA0u;
            // 0x19cea4: 0x848240ba  lh          $v0, 0x40BA($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16570)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CEA8u;
}
