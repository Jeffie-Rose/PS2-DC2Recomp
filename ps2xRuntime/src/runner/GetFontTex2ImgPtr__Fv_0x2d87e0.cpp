#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFontTex2ImgPtr__Fv
// Address: 0x2d87e0 - 0x2d87ec
void GetFontTex2ImgPtr__Fv_0x2d87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontTex2ImgPtr__Fv_0x2d87e0");
#endif

    ctx->pc = 0x2d87e0u;

    // 0x2d87e0: 0x3c0201f3  lui         $v0, 0x1F3
    ctx->pc = 0x2d87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)499 << 16));
    // 0x2d87e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D87E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D87E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87E4u;
            // 0x2d87e8: 0x244280b0  addiu       $v0, $v0, -0x7F50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D87ECu;
}
