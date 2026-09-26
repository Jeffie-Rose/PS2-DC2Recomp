#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowSubGameInfo__Fv
// Address: 0x303f40 - 0x303f4c
void GetNowSubGameInfo__Fv_0x303f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowSubGameInfo__Fv_0x303f40");
#endif

    ctx->pc = 0x303f40u;

    // 0x303f40: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x303f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x303f44: 0x3e00008  jr          $ra
    ctx->pc = 0x303F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F44u;
            // 0x303f48: 0x24429e30  addiu       $v0, $v0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303F4Cu;
}
