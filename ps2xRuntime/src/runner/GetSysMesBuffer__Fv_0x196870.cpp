#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSysMesBuffer__Fv
// Address: 0x196870 - 0x19687c
void GetSysMesBuffer__Fv_0x196870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSysMesBuffer__Fv_0x196870");
#endif

    ctx->pc = 0x196870u;

    // 0x196870: 0x3c0201e8  lui         $v0, 0x1E8
    ctx->pc = 0x196870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)488 << 16));
    // 0x196874: 0x3e00008  jr          $ra
    ctx->pc = 0x196874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196874u;
            // 0x196878: 0x24421240  addiu       $v0, $v0, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19687Cu;
}
