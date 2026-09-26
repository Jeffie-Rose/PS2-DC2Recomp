#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditModeControlUnLock__Fv
// Address: 0x2d8810 - 0x2d8834
void EditModeControlUnLock__Fv_0x2d8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditModeControlUnLock__Fv_0x2d8810");
#endif

    ctx->pc = 0x2d8810u;

    // 0x2d8810: 0x8f839e5c  lw          $v1, -0x61A4($gp)
    ctx->pc = 0x2d8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942300)));
    // 0x2d8814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8818: 0xaf839e5c  sw          $v1, -0x61A4($gp)
    ctx->pc = 0x2d8818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942300), GPR_U32(ctx, 3));
    // 0x2d881c: 0x8f839e5c  lw          $v1, -0x61A4($gp)
    ctx->pc = 0x2d881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942300)));
    // 0x2d8820: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8820u;
    {
        const bool branch_taken_0x2d8820 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d8820) {
            ctx->pc = 0x2D882Cu;
            goto label_2d882c;
        }
    }
    ctx->pc = 0x2D8828u;
    // 0x2d8828: 0xaf809e5c  sw          $zero, -0x61A4($gp)
    ctx->pc = 0x2d8828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942300), GPR_U32(ctx, 0));
label_2d882c:
    // 0x2d882c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D882Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8834u;
}
