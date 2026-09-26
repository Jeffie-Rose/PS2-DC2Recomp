#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNextMode__Fi
// Address: 0x2fc740 - 0x2fc748
void SetNextMode__Fi_0x2fc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextMode__Fi_0x2fc740");
#endif

    ctx->pc = 0x2fc740u;

    // 0x2fc740: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC740u;
            // 0x2fc744: 0xaf849fe4  sw          $a0, -0x601C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC748u;
}
