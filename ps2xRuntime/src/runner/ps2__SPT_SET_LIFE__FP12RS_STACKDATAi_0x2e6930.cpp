#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_LIFE__FP12RS_STACKDATAi
// Address: 0x2e6930 - 0x2e6938
void ps2__SPT_SET_LIFE__FP12RS_STACKDATAi_0x2e6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_LIFE__FP12RS_STACKDATAi_0x2e6930");
#endif

    ctx->pc = 0x2e6930u;

    // 0x2e6930: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6930u;
            // 0x2e6934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6938u;
}
