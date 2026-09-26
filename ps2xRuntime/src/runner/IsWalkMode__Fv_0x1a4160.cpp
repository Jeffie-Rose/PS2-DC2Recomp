#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsWalkMode__Fv
// Address: 0x1a4160 - 0x1a4170
void IsWalkMode__Fv_0x1a4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsWalkMode__Fv_0x1a4160");
#endif

    ctx->pc = 0x1a4160u;

    // 0x1a4160: 0x8f828bc0  lw          $v0, -0x7440($gp)
    ctx->pc = 0x1a4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
    // 0x1a4164: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1a4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1a4168: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4168u;
            // 0x1a416c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4170u;
}
