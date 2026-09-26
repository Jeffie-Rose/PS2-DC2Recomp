#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexInfo__11CMenuEffectFP10mgCTexturePi
// Address: 0x22fd90 - 0x22fda8
void SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90");
#endif

    ctx->pc = 0x22fd90u;

    // 0x22fd90: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FD90u;
    {
        const bool branch_taken_0x22fd90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD90u;
            // 0x22fd94: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd90) {
            ctx->pc = 0x22FDA0u;
            goto label_22fda0;
        }
    }
    ctx->pc = 0x22FD98u;
    // 0x22fd98: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22fd9c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x22fd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_22fda0:
    // 0x22fda0: 0x3e00008  jr          $ra
    ctx->pc = 0x22FDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FDA8u;
}
