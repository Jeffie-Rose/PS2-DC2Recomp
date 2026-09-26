#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Iam__4CMapFv
// Address: 0x15c510 - 0x15c518
void Iam__4CMapFv_0x15c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Iam__4CMapFv_0x15c510");
#endif

    ctx->pc = 0x15c510u;

    // 0x15c510: 0x3e00008  jr          $ra
    ctx->pc = 0x15C510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C510u;
            // 0x15c514: 0x8f82802c  lw          $v0, -0x7FD4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C518u;
}
