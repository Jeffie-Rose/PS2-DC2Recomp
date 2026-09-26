#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNowMapNo__6CSceneFi
// Address: 0x284b60 - 0x284b78
void SetNowMapNo__6CSceneFi_0x284b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNowMapNo__6CSceneFi_0x284b60");
#endif

    ctx->pc = 0x284b60u;

    // 0x284b60: 0x8c832e60  lw          $v1, 0x2E60($a0)
    ctx->pc = 0x284b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11872)));
    // 0x284b64: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284B64u;
    {
        const bool branch_taken_0x284b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x284b64) {
            ctx->pc = 0x284B70u;
            goto label_284b70;
        }
    }
    ctx->pc = 0x284B6Cu;
    // 0x284b6c: 0xac832e68  sw          $v1, 0x2E68($a0)
    ctx->pc = 0x284b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11880), GPR_U32(ctx, 3));
label_284b70:
    // 0x284b70: 0x3e00008  jr          $ra
    ctx->pc = 0x284B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B70u;
            // 0x284b74: 0xac852e60  sw          $a1, 0x2E60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284B78u;
}
