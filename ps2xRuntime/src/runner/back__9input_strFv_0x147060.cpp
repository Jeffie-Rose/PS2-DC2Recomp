#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: back__9input_strFv
// Address: 0x147060 - 0x14707c
void back__9input_strFv_0x147060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("back__9input_strFv_0x147060");
#endif

    ctx->pc = 0x147060u;

    // 0x147060: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x147060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x147064: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147064u;
    {
        const bool branch_taken_0x147064 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x147064) {
            ctx->pc = 0x147074u;
            goto label_147074;
        }
    }
    ctx->pc = 0x14706Cu;
    // 0x14706c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x147070: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x147070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_147074:
    // 0x147074: 0x3e00008  jr          $ra
    ctx->pc = 0x147074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14707Cu;
}
