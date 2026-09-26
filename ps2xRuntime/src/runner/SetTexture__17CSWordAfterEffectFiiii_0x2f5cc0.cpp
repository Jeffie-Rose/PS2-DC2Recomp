#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexture__17CSWordAfterEffectFiiii
// Address: 0x2f5cc0 - 0x2f5cd4
void SetTexture__17CSWordAfterEffectFiiii_0x2f5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexture__17CSWordAfterEffectFiiii_0x2f5cc0");
#endif

    ctx->pc = 0x2f5cc0u;

    // 0x2f5cc0: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x2f5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x2f5cc4: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x2f5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x2f5cc8: 0xac870070  sw          $a3, 0x70($a0)
    ctx->pc = 0x2f5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 7));
    // 0x2f5ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5CCCu;
            // 0x2f5cd0: 0xac880074  sw          $t0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5CD4u;
}
