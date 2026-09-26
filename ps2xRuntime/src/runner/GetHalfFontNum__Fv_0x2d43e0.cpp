#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHalfFontNum__Fv
// Address: 0x2d43e0 - 0x2d43f0
void GetHalfFontNum__Fv_0x2d43e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHalfFontNum__Fv_0x2d43e0");
#endif

    ctx->pc = 0x2d43e0u;

    // 0x2d43e0: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d43e4: 0x24425880  addiu       $v0, $v0, 0x5880
    ctx->pc = 0x2d43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
    // 0x2d43e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D43E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43E8u;
            // 0x2d43ec: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D43F0u;
}
