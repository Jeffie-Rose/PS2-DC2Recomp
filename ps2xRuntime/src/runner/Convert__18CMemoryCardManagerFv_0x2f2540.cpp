#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Convert__18CMemoryCardManagerFv
// Address: 0x2f2540 - 0x2f2548
void Convert__18CMemoryCardManagerFv_0x2f2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Convert__18CMemoryCardManagerFv_0x2f2540");
#endif

    ctx->pc = 0x2f2540u;

    // 0x2f2540: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2540u;
            // 0x2f2544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2548u;
}
