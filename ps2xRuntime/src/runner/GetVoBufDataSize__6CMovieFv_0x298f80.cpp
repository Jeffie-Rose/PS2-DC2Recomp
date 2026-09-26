#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVoBufDataSize__6CMovieFv
// Address: 0x298f80 - 0x298f88
void GetVoBufDataSize__6CMovieFv_0x298f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVoBufDataSize__6CMovieFv_0x298f80");
#endif

    ctx->pc = 0x298f80u;

    // 0x298f80: 0x3e00008  jr          $ra
    ctx->pc = 0x298F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298F80u;
            // 0x298f84: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298F88u;
}
