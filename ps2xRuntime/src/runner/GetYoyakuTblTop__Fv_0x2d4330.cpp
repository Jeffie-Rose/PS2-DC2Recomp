#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetYoyakuTblTop__Fv
// Address: 0x2d4330 - 0x2d4340
void GetYoyakuTblTop__Fv_0x2d4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetYoyakuTblTop__Fv_0x2d4330");
#endif

    ctx->pc = 0x2d4330u;

    // 0x2d4330: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d4330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d4334: 0x24425880  addiu       $v0, $v0, 0x5880
    ctx->pc = 0x2d4334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
    // 0x2d4338: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4338u;
            // 0x2d433c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4340u;
}
