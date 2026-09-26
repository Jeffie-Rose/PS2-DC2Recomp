#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PitchBend__8sndTrackFii
// Address: 0x18c460 - 0x18c470
void PitchBend__8sndTrackFii_0x18c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PitchBend__8sndTrackFii_0x18c460");
#endif

    ctx->pc = 0x18c460u;

    // 0x18c460: 0xa0860004  sb          $a2, 0x4($a0)
    ctx->pc = 0x18c460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x18c464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c468: 0x3e00008  jr          $ra
    ctx->pc = 0x18C468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C468u;
            // 0x18c46c: 0xa0850005  sb          $a1, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C470u;
}
