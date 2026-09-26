#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CMenuItemUseFv
// Address: 0x21f580 - 0x21f590
void Initialize__12CMenuItemUseFv_0x21f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CMenuItemUseFv_0x21f580");
#endif

    ctx->pc = 0x21f580u;

    // 0x21f580: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21f580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21f584: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x21f584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21f588: 0x3e00008  jr          $ra
    ctx->pc = 0x21F588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F588u;
            // 0x21f58c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F590u;
}
