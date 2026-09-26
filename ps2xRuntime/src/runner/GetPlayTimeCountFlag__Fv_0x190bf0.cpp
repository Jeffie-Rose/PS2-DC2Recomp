#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlayTimeCountFlag__Fv
// Address: 0x190bf0 - 0x190bf8
void GetPlayTimeCountFlag__Fv_0x190bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlayTimeCountFlag__Fv_0x190bf0");
#endif

    ctx->pc = 0x190bf0u;

    // 0x190bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x190BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190BF0u;
            // 0x190bf4: 0x8f828afc  lw          $v0, -0x7504($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937340)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190BF8u;
}
