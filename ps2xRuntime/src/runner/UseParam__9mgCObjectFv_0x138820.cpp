#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UseParam__9mgCObjectFv
// Address: 0x138820 - 0x13882c
void UseParam__9mgCObjectFv_0x138820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseParam__9mgCObjectFv_0x138820");
#endif

    ctx->pc = 0x138820u;

    // 0x138820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138824: 0x3e00008  jr          $ra
    ctx->pc = 0x138824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138824u;
            // 0x138828: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13882Cu;
}
