#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackString__FP12RS_STACKDATA
// Address: 0x1e06e0 - 0x1e06e8
void GetStackString__FP12RS_STACKDATA_0x1e06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackString__FP12RS_STACKDATA_0x1e06e0");
#endif

    ctx->pc = 0x1e06e0u;

    // 0x1e06e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E06E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E06E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06E0u;
            // 0x1e06e4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E06E8u;
}
