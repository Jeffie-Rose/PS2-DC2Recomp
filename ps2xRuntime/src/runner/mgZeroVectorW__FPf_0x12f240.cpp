#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgZeroVectorW__FPf
// Address: 0x12f240 - 0x12f248
void mgZeroVectorW__FPf_0x12f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgZeroVectorW__FPf_0x12f240");
#endif

    ctx->pc = 0x12f240u;

    // 0x12f240: 0x3e00008  jr          $ra
    ctx->pc = 0x12F240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F240u;
            // 0x12f244: 0xf8800000  sqc2        $vf0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F248u;
}
