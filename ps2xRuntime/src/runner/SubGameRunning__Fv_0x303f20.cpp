#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubGameRunning__Fv
// Address: 0x303f20 - 0x303f2c
void SubGameRunning__Fv_0x303f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubGameRunning__Fv_0x303f20");
#endif

    ctx->pc = 0x303f20u;

    // 0x303f20: 0x8f82a104  lw          $v0, -0x5EFC($gp)
    ctx->pc = 0x303f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x303f24: 0x3e00008  jr          $ra
    ctx->pc = 0x303F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F24u;
            // 0x303f28: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303F2Cu;
}
