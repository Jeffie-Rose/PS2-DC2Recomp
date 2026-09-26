#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelEyeViewMode__Fv
// Address: 0x1a5fb0 - 0x1a5fbc
void CancelEyeViewMode__Fv_0x1a5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelEyeViewMode__Fv_0x1a5fb0");
#endif

    ctx->pc = 0x1a5fb0u;

    // 0x1a5fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FB4u;
            // 0x1a5fb8: 0xaf838bbc  sw          $v1, -0x7444($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5FBCu;
}
