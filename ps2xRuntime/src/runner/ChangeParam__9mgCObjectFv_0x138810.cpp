#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeParam__9mgCObjectFv
// Address: 0x138810 - 0x13881c
void ChangeParam__9mgCObjectFv_0x138810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeParam__9mgCObjectFv_0x138810");
#endif

    ctx->pc = 0x138810u;

    // 0x138810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138814: 0x3e00008  jr          $ra
    ctx->pc = 0x138814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138814u;
            // 0x138818: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13881Cu;
}
