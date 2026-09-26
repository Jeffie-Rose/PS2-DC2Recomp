#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TakeBombCheck__Fv
// Address: 0x3160e0 - 0x3160f4
void TakeBombCheck__Fv_0x3160e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TakeBombCheck__Fv_0x3160e0");
#endif

    ctx->pc = 0x3160e0u;

    // 0x3160e0: 0x8f82a308  lw          $v0, -0x5CF8($gp)
    ctx->pc = 0x3160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943496)));
    // 0x3160e4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x3160e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x3160e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3160e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3160ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3160ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3160F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3160ECu;
            // 0x3160f0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3160F4u;
}
