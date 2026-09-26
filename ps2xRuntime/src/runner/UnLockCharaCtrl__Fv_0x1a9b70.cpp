#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UnLockCharaCtrl__Fv
// Address: 0x1a9b70 - 0x1a9b94
void UnLockCharaCtrl__Fv_0x1a9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnLockCharaCtrl__Fv_0x1a9b70");
#endif

    ctx->pc = 0x1a9b70u;

    // 0x1a9b70: 0x8f838c9c  lw          $v1, -0x7364($gp)
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x1a9b74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9b78: 0xaf838c9c  sw          $v1, -0x7364($gp)
    ctx->pc = 0x1a9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 3));
    // 0x1a9b7c: 0x8f838c9c  lw          $v1, -0x7364($gp)
    ctx->pc = 0x1a9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
    // 0x1a9b80: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9B80u;
    {
        const bool branch_taken_0x1a9b80 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a9b80) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9B88u;
    // 0x1a9b88: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1a9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1a9b8c:
    // 0x1a9b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9B94u;
}
