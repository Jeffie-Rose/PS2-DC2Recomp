#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsStarted__6CMovieFv
// Address: 0x298f70 - 0x298f78
void IsStarted__6CMovieFv_0x298f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsStarted__6CMovieFv_0x298f70");
#endif

    ctx->pc = 0x298f70u;

    // 0x298f70: 0x3e00008  jr          $ra
    ctx->pc = 0x298F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298F70u;
            // 0x298f74: 0x938298fc  lbu         $v0, -0x6704($gp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940924)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298F78u;
}
