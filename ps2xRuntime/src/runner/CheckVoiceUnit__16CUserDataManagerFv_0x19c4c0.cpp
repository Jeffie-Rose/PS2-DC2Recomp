#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckVoiceUnit__16CUserDataManagerFv
// Address: 0x19c4c0 - 0x19c4c8
void CheckVoiceUnit__16CUserDataManagerFv_0x19c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckVoiceUnit__16CUserDataManagerFv_0x19c4c0");
#endif

    ctx->pc = 0x19c4c0u;

    // 0x19c4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4C0u;
            // 0x19c4c4: 0x8082467c  lb          $v0, 0x467C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C4C8u;
}
