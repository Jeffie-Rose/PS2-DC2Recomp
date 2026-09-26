#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFishingWeapon__FP13CGameDataUsed
// Address: 0x196e70 - 0x196e80
void CheckFishingWeapon__FP13CGameDataUsed_0x196e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFishingWeapon__FP13CGameDataUsed_0x196e70");
#endif

    ctx->pc = 0x196e70u;

    // 0x196e70: 0x8f828b7c  lw          $v0, -0x7484($gp)
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937468)));
    // 0x196e74: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x196e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x196e78: 0x3e00008  jr          $ra
    ctx->pc = 0x196E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E78u;
            // 0x196e7c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196E80u;
}
