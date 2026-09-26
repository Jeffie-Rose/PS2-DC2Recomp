#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowPlaceRiver__Fv
// Address: 0x2d9c70 - 0x2d9c7c
void NowPlaceRiver__Fv_0x2d9c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowPlaceRiver__Fv_0x2d9c70");
#endif

    ctx->pc = 0x2d9c70u;

    // 0x2d9c70: 0x8f829e40  lw          $v0, -0x61C0($gp)
    ctx->pc = 0x2d9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942272)));
    // 0x2d9c74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C74u;
            // 0x2d9c78: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9C7Cu;
}
