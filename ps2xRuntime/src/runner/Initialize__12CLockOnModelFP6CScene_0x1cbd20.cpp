#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CLockOnModelFP6CScene
// Address: 0x1cbd20 - 0x1cbd2c
void Initialize__12CLockOnModelFP6CScene_0x1cbd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CLockOnModelFP6CScene_0x1cbd20");
#endif

    ctx->pc = 0x1cbd20u;

    // 0x1cbd20: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1cbd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1cbd24: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD24u;
            // 0x1cbd28: 0xac80008c  sw          $zero, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBD2Cu;
}
