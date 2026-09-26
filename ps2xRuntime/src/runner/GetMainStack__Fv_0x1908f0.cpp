#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMainStack__Fv
// Address: 0x1908f0 - 0x1908fc
void GetMainStack__Fv_0x1908f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMainStack__Fv_0x1908f0");
#endif

    ctx->pc = 0x1908f0u;

    // 0x1908f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1908f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1908F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1908F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1908F4u;
            // 0x1908f8: 0x24428230  addiu       $v0, $v0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1908FCu;
}
