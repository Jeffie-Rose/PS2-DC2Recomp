#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetShowHari__Fi
// Address: 0x310270 - 0x310278
void SetShowHari__Fi_0x310270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetShowHari__Fi_0x310270");
#endif

    ctx->pc = 0x310270u;

    // 0x310270: 0x3e00008  jr          $ra
    ctx->pc = 0x310270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310270u;
            // 0x310274: 0xaf84a264  sw          $a0, -0x5D9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310278u;
}
