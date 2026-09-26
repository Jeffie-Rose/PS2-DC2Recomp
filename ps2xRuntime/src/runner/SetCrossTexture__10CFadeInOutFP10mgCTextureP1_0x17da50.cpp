#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCrossTexture__10CFadeInOutFP10mgCTextureP1
// Address: 0x17da50 - 0x17da6c
void SetCrossTexture__10CFadeInOutFP10mgCTextureP1_0x17da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCrossTexture__10CFadeInOutFP10mgCTextureP1_0x17da50");
#endif

    ctx->pc = 0x17da50u;

    // 0x17da50: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DA50u;
    {
        const bool branch_taken_0x17da50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da50) {
            ctx->pc = 0x17DA64u;
            goto label_17da64;
        }
    }
    ctx->pc = 0x17DA58u;
    // 0x17da58: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x17da58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x17da5c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17da60: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x17da60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
label_17da64:
    // 0x17da64: 0x3e00008  jr          $ra
    ctx->pc = 0x17DA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DA6Cu;
}
