#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ND_TEST__FP12RS_STACKDATAi
// Address: 0x1e0890 - 0x1e0898
void ps2__ND_TEST__FP12RS_STACKDATAi_0x1e0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ND_TEST__FP12RS_STACKDATAi_0x1e0890");
#endif

    ctx->pc = 0x1e0890u;

    // 0x1e0890: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0890u;
            // 0x1e0894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0898u;
}
