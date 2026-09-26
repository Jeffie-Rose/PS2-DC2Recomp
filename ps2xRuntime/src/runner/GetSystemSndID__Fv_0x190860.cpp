#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSystemSndID__Fv
// Address: 0x190860 - 0x190868
void GetSystemSndID__Fv_0x190860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSystemSndID__Fv_0x190860");
#endif

    ctx->pc = 0x190860u;

    // 0x190860: 0x3e00008  jr          $ra
    ctx->pc = 0x190860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190860u;
            // 0x190864: 0x8f828ac4  lw          $v0, -0x753C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190868u;
}
