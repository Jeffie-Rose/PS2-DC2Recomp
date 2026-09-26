#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseCancel__Fv
// Address: 0x309d00 - 0x309d08
void PauseCancel__Fv_0x309d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseCancel__Fv_0x309d00");
#endif

    ctx->pc = 0x309d00u;

    // 0x309d00: 0x3e00008  jr          $ra
    ctx->pc = 0x309D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309D00u;
            // 0x309d04: 0xaf80a1a8  sw          $zero, -0x5E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309D08u;
}
