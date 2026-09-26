#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgSetMenuOpenEnableFlag__Fi
// Address: 0x303f80 - 0x303f88
void sgSetMenuOpenEnableFlag__Fi_0x303f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgSetMenuOpenEnableFlag__Fi_0x303f80");
#endif

    ctx->pc = 0x303f80u;

    // 0x303f80: 0x3e00008  jr          $ra
    ctx->pc = 0x303F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F80u;
            // 0x303f84: 0xaf84a108  sw          $a0, -0x5EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303F88u;
}
