#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMainScene__Fv
// Address: 0x190870 - 0x19087c
void GetMainScene__Fv_0x190870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMainScene__Fv_0x190870");
#endif

    ctx->pc = 0x190870u;

    // 0x190870: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x190870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x190874: 0x3e00008  jr          $ra
    ctx->pc = 0x190874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190874u;
            // 0x190878: 0x24428260  addiu       $v0, $v0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19087Cu;
}
