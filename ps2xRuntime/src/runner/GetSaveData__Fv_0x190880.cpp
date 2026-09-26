#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSaveData__Fv
// Address: 0x190880 - 0x190888
void GetSaveData__Fv_0x190880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSaveData__Fv_0x190880");
#endif

    ctx->pc = 0x190880u;

    // 0x190880: 0x3e00008  jr          $ra
    ctx->pc = 0x190880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190880u;
            // 0x190884: 0x8f828af4  lw          $v0, -0x750C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937332)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190888u;
}
