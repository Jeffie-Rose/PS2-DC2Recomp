#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgGetItemOverReset__Fv
// Address: 0x303fa0 - 0x303fa8
void sgGetItemOverReset__Fv_0x303fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgGetItemOverReset__Fv_0x303fa0");
#endif

    ctx->pc = 0x303fa0u;

    // 0x303fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x303FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303FA0u;
            // 0x303fa4: 0xaf80a10c  sw          $zero, -0x5EF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303FA8u;
}
