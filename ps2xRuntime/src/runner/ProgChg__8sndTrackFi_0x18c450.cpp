#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ProgChg__8sndTrackFi
// Address: 0x18c450 - 0x18c45c
void ProgChg__8sndTrackFi_0x18c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ProgChg__8sndTrackFi_0x18c450");
#endif

    ctx->pc = 0x18c450u;

    // 0x18c450: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x18c450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x18c454: 0x3e00008  jr          $ra
    ctx->pc = 0x18C454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C454u;
            // 0x18c458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C45Cu;
}
