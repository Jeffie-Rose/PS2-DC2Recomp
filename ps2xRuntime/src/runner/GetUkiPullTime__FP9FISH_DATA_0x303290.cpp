#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUkiPullTime__FP9FISH_DATA
// Address: 0x303290 - 0x303298
void GetUkiPullTime__FP9FISH_DATA_0x303290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUkiPullTime__FP9FISH_DATA_0x303290");
#endif

    ctx->pc = 0x303290u;

    // 0x303290: 0x3e00008  jr          $ra
    ctx->pc = 0x303290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303290u;
            // 0x303294: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303298u;
}
