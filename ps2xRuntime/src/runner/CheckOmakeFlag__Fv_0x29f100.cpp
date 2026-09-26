#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckOmakeFlag__Fv
// Address: 0x29f100 - 0x29f108
void CheckOmakeFlag__Fv_0x29f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOmakeFlag__Fv_0x29f100");
#endif

    ctx->pc = 0x29f100u;

    // 0x29f100: 0x3e00008  jr          $ra
    ctx->pc = 0x29F100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F100u;
            // 0x29f104: 0x87829a3c  lh          $v0, -0x65C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941244)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F108u;
}
