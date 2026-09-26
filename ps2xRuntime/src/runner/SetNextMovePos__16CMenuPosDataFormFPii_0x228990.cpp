#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNextMovePos__16CMenuPosDataFormFPii
// Address: 0x228990 - 0x2289a8
void SetNextMovePos__16CMenuPosDataFormFPii_0x228990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextMovePos__16CMenuPosDataFormFPii_0x228990");
#endif

    ctx->pc = 0x228990u;

    // 0x228990: 0xa0860020  sb          $a2, 0x20($a0)
    ctx->pc = 0x228990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x228994: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228998: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x228998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x22899c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x22899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2289a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2289A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2289A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2289A0u;
            // 0x2289a4: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2289A8u;
}
