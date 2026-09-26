#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSepiaTexture__13CScreenEffectFP10mgCTextureP1
// Address: 0x260950 - 0x26096c
void SetSepiaTexture__13CScreenEffectFP10mgCTextureP1_0x260950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSepiaTexture__13CScreenEffectFP10mgCTextureP1_0x260950");
#endif

    ctx->pc = 0x260950u;

    // 0x260950: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260950u;
    {
        const bool branch_taken_0x260950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x260950) {
            ctx->pc = 0x260964u;
            goto label_260964;
        }
    }
    ctx->pc = 0x260958u;
    // 0x260958: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x260958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x26095c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x26095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x260960: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x260960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
label_260964:
    // 0x260964: 0x3e00008  jr          $ra
    ctx->pc = 0x260964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26096Cu;
}
