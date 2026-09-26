#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnd__9CCharaPasFv
// Address: 0x256f30 - 0x256f44
void CheckEnd__9CCharaPasFv_0x256f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnd__9CCharaPasFv_0x256f30");
#endif

    ctx->pc = 0x256f30u;

    // 0x256f30: 0x8c8204a4  lw          $v0, 0x4A4($a0)
    ctx->pc = 0x256f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1188)));
    // 0x256f34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256f38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x256f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x256f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x256F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F3Cu;
            // 0x256f40: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256F44u;
}
