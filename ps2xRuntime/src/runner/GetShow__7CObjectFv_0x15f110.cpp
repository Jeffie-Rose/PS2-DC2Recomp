#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetShow__7CObjectFv
// Address: 0x15f110 - 0x15f118
void GetShow__7CObjectFv_0x15f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShow__7CObjectFv_0x15f110");
#endif

    ctx->pc = 0x15f110u;

    // 0x15f110: 0x3e00008  jr          $ra
    ctx->pc = 0x15F110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F110u;
            // 0x15f114: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F118u;
}
