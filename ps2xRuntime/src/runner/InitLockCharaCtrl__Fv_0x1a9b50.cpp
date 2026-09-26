#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLockCharaCtrl__Fv
// Address: 0x1a9b50 - 0x1a9b58
void InitLockCharaCtrl__Fv_0x1a9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLockCharaCtrl__Fv_0x1a9b50");
#endif

    ctx->pc = 0x1a9b50u;

    // 0x1a9b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B50u;
            // 0x1a9b54: 0xaf808c9c  sw          $zero, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9B58u;
}
