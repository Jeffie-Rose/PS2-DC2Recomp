#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetUserVuProg__FPP1i
// Address: 0x145f00 - 0x145f0c
void mgSetUserVuProg__FPP1i_0x145f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetUserVuProg__FPP1i_0x145f00");
#endif

    ctx->pc = 0x145f00u;

    // 0x145f00: 0xaf84888c  sw          $a0, -0x7774($gp)
    ctx->pc = 0x145f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936716), GPR_U32(ctx, 4));
    // 0x145f04: 0x3e00008  jr          $ra
    ctx->pc = 0x145F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F04u;
            // 0x145f08: 0xaf858890  sw          $a1, -0x7770($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145F0Cu;
}
