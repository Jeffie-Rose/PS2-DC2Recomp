#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetRecord__18CFishingTournamentFv
// Address: 0x19af40 - 0x19af50
void ResetRecord__18CFishingTournamentFv_0x19af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetRecord__18CFishingTournamentFv_0x19af40");
#endif

    ctx->pc = 0x19af40u;

    // 0x19af40: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x19af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x19af44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af48: 0x8049c86  j           func_127218
    ctx->pc = 0x19AF48u;
    ctx->pc = 0x19AF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF48u;
            // 0x19af4c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19AF50u;
}
