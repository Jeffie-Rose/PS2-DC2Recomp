#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _localeconv_r
// Address: 0x126288 - 0x126294
void _localeconv_r_0x126288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_localeconv_r_0x126288");
#endif

    ctx->pc = 0x126288u;

    // 0x126288: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x126288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12628c: 0x3e00008  jr          $ra
    ctx->pc = 0x12628Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12628Cu;
            // 0x126290: 0x24422070  addiu       $v0, $v0, 0x2070 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126294u;
}
