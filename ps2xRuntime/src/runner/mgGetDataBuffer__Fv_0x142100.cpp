#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetDataBuffer__Fv
// Address: 0x142100 - 0x142120
void mgGetDataBuffer__Fv_0x142100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetDataBuffer__Fv_0x142100");
#endif

    ctx->pc = 0x142100u;

    // 0x142100: 0x8f84881c  lw          $a0, -0x77E4($gp)
    ctx->pc = 0x142100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x142104: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x142104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x142108: 0x24422430  addiu       $v0, $v0, 0x2430
    ctx->pc = 0x142108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9264));
    // 0x14210c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14210cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x142110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142114: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142118: 0x3e00008  jr          $ra
    ctx->pc = 0x142118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142118u;
            // 0x14211c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142120u;
}
