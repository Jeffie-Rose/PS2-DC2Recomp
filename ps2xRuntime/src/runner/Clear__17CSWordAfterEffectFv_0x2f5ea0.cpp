#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__17CSWordAfterEffectFv
// Address: 0x2f5ea0 - 0x2f5eb0
void Clear__17CSWordAfterEffectFv_0x2f5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__17CSWordAfterEffectFv_0x2f5ea0");
#endif

    ctx->pc = 0x2f5ea0u;

    // 0x2f5ea0: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x2f5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x2f5ea4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f5ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5EA8u;
            // 0x2f5eac: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5EB0u;
}
