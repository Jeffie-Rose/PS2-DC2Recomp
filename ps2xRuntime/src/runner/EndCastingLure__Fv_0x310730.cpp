#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndCastingLure__Fv
// Address: 0x310730 - 0x310740
void EndCastingLure__Fv_0x310730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndCastingLure__Fv_0x310730");
#endif

    ctx->pc = 0x310730u;

    // 0x310730: 0xaf80a250  sw          $zero, -0x5DB0($gp)
    ctx->pc = 0x310730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943312), GPR_U32(ctx, 0));
    // 0x310734: 0xaf80a254  sw          $zero, -0x5DAC($gp)
    ctx->pc = 0x310734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943316), GPR_U32(ctx, 0));
    // 0x310738: 0x3e00008  jr          $ra
    ctx->pc = 0x310738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310738u;
            // 0x31073c: 0xaf80a258  sw          $zero, -0x5DA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310740u;
}
