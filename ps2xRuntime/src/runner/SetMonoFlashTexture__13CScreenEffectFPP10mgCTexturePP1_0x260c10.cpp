#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMonoFlashTexture__13CScreenEffectFPP10mgCTexturePP1
// Address: 0x260c10 - 0x260c5c
void SetMonoFlashTexture__13CScreenEffectFPP10mgCTexturePP1_0x260c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMonoFlashTexture__13CScreenEffectFPP10mgCTexturePP1_0x260c10");
#endif

    ctx->pc = 0x260c10u;

    // 0x260c10: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x260c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x260c14: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x260C14u;
    {
        const bool branch_taken_0x260c14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c14) {
            ctx->pc = 0x260C54u;
            goto label_260c54;
        }
    }
    ctx->pc = 0x260C1Cu;
    // 0x260c1c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x260c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x260c20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260C20u;
    {
        const bool branch_taken_0x260c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260c20) {
            ctx->pc = 0x260C30u;
            goto label_260c30;
        }
    }
    ctx->pc = 0x260C28u;
    // 0x260c28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x260C28u;
    {
        const bool branch_taken_0x260c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c28) {
            ctx->pc = 0x260C54u;
            goto label_260c54;
        }
    }
    ctx->pc = 0x260C30u;
label_260c30:
    // 0x260c30: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x260c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x260c34: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x260c34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x260c38: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x260c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x260c3c: 0xac670050  sw          $a3, 0x50($v1)
    ctx->pc = 0x260c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 7));
    // 0x260c40: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x260c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x260c44: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x260c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x260c48: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x260c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x260c4c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x260c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x260c50: 0xac650050  sw          $a1, 0x50($v1)
    ctx->pc = 0x260c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
label_260c54:
    // 0x260c54: 0x3e00008  jr          $ra
    ctx->pc = 0x260C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260C5Cu;
}
