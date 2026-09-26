#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetReference__8mgCFrameFP8mgCFrame
// Address: 0x136c30 - 0x136c5c
void SetReference__8mgCFrameFP8mgCFrame_0x136c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetReference__8mgCFrameFP8mgCFrame_0x136c30");
#endif

    ctx->pc = 0x136c30u;

    // 0x136c30: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x136c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x136c34: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x136C34u;
    {
        const bool branch_taken_0x136c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136c34) {
            ctx->pc = 0x136C54u;
            goto label_136c54;
        }
    }
    ctx->pc = 0x136C3Cu;
    // 0x136c3c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136C3Cu;
    {
        const bool branch_taken_0x136c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c3c) {
            ctx->pc = 0x136C54u;
            goto label_136c54;
        }
    }
    ctx->pc = 0x136C44u;
    // 0x136c44: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x136c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x136c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136c4c: 0xac8300fc  sw          $v1, 0xFC($a0)
    ctx->pc = 0x136c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
    // 0x136c50: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x136c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_136c54:
    // 0x136c54: 0x3e00008  jr          $ra
    ctx->pc = 0x136C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136C5Cu;
}
