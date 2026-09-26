#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HidePhoto__Fv
// Address: 0x30e6a0 - 0x30e6a8
void HidePhoto__Fv_0x30e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HidePhoto__Fv_0x30e6a0");
#endif

    ctx->pc = 0x30e6a0u;

    // 0x30e6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E6A0u;
            // 0x30e6a4: 0xaf80a234  sw          $zero, -0x5DCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E6A8u;
}
