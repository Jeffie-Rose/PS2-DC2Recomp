#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNowSubMapNo__6CSceneFi
// Address: 0x284b80 - 0x284b98
void SetNowSubMapNo__6CSceneFi_0x284b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNowSubMapNo__6CSceneFi_0x284b80");
#endif

    ctx->pc = 0x284b80u;

    // 0x284b80: 0x8c832e64  lw          $v1, 0x2E64($a0)
    ctx->pc = 0x284b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11876)));
    // 0x284b84: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284B84u;
    {
        const bool branch_taken_0x284b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x284b84) {
            ctx->pc = 0x284B90u;
            goto label_284b90;
        }
    }
    ctx->pc = 0x284B8Cu;
    // 0x284b8c: 0xac832e6c  sw          $v1, 0x2E6C($a0)
    ctx->pc = 0x284b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11884), GPR_U32(ctx, 3));
label_284b90:
    // 0x284b90: 0x3e00008  jr          $ra
    ctx->pc = 0x284B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B90u;
            // 0x284b94: 0xac852e64  sw          $a1, 0x2E64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11876), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284B98u;
}
