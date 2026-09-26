#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearEditStepCnt__Fv
// Address: 0x2d91b0 - 0x2d91c0
void ClearEditStepCnt__Fv_0x2d91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearEditStepCnt__Fv_0x2d91b0");
#endif

    ctx->pc = 0x2d91b0u;

    // 0x2d91b0: 0xaf809e40  sw          $zero, -0x61C0($gp)
    ctx->pc = 0x2d91b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942272), GPR_U32(ctx, 0));
    // 0x2d91b4: 0xaf809e3c  sw          $zero, -0x61C4($gp)
    ctx->pc = 0x2d91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 0));
    // 0x2d91b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D91B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D91BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D91B8u;
            // 0x2d91bc: 0xaf809e44  sw          $zero, -0x61BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D91C0u;
}
