#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFishingGamePreEquip__FP13CGameDataUsed
// Address: 0x196e10 - 0x196e18
void SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10");
#endif

    ctx->pc = 0x196e10u;

    // 0x196e10: 0x3e00008  jr          $ra
    ctx->pc = 0x196E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E10u;
            // 0x196e14: 0xaf848b7c  sw          $a0, -0x7484($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937468), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196E18u;
}
