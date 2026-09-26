#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFuncNo__18CMemoryCardManagerFv
// Address: 0x2f1d20 - 0x2f1d28
void GetFuncNo__18CMemoryCardManagerFv_0x2f1d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFuncNo__18CMemoryCardManagerFv_0x2f1d20");
#endif

    ctx->pc = 0x2f1d20u;

    // 0x2f1d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D20u;
            // 0x2f1d24: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1D28u;
}
