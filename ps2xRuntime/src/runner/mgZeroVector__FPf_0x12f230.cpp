#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgZeroVector__FPf
// Address: 0x12f230 - 0x12f238
void mgZeroVector__FPf_0x12f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgZeroVector__FPf_0x12f230");
#endif

    ctx->pc = 0x12f230u;

    // 0x12f230: 0x3e00008  jr          $ra
    ctx->pc = 0x12F230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F230u;
            // 0x12f234: 0x7c800000  sq          $zero, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F238u;
}
