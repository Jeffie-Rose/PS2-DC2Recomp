#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__9CPullItemFv
// Address: 0x1b9590 - 0x1b95a0
void Clear__9CPullItemFv_0x1b9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9CPullItemFv_0x1b9590");
#endif

    ctx->pc = 0x1b9590u;

    // 0x1b9590: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9594: 0xa0830074  sb          $v1, 0x74($a0)
    ctx->pc = 0x1b9594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9598: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9598u;
            // 0x1b959c: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B95A0u;
}
