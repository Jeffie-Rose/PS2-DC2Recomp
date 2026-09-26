#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stSetBuffer__9mgCMemoryFP1i
// Address: 0x139e70 - 0x139e80
void stSetBuffer__9mgCMemoryFP1i_0x139e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stSetBuffer__9mgCMemoryFP1i_0x139e70");
#endif

    ctx->pc = 0x139e70u;

    // 0x139e70: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x139e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x139e74: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x139e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x139e78: 0x3e00008  jr          $ra
    ctx->pc = 0x139E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E78u;
            // 0x139e7c: 0xac860028  sw          $a2, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139E80u;
}
