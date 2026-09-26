#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGameDataPt__Fv
// Address: 0x1945f0 - 0x1945fc
void GetGameDataPt__Fv_0x1945f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGameDataPt__Fv_0x1945f0");
#endif

    ctx->pc = 0x1945f0u;

    // 0x1945f0: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x1945f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1945F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1945F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945F4u;
            // 0x1945f8: 0x24429570  addiu       $v0, $v0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1945FCu;
}
