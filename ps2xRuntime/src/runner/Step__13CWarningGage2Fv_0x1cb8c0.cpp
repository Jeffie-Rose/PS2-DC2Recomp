#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CWarningGage2Fv
// Address: 0x1cb8c0 - 0x1cb8e8
void Step__13CWarningGage2Fv_0x1cb8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CWarningGage2Fv_0x1cb8c0");
#endif

    ctx->pc = 0x1cb8c0u;

    // 0x1cb8c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb8c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb8c8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1cb8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1cb8cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb8d0: 0x28630028  slti        $v1, $v1, 0x28
    ctx->pc = 0x1cb8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1cb8d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB8D4u;
    {
        const bool branch_taken_0x1cb8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb8d4) {
            ctx->pc = 0x1CB8E0u;
            goto label_1cb8e0;
        }
    }
    ctx->pc = 0x1CB8DCu;
    // 0x1cb8dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cb8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1cb8e0:
    // 0x1cb8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB8E8u;
}
