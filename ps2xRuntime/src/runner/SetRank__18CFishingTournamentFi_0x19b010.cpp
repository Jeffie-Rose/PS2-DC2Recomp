#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRank__18CFishingTournamentFi
// Address: 0x19b010 - 0x19b034
void SetRank__18CFishingTournamentFi_0x19b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRank__18CFishingTournamentFi_0x19b010");
#endif

    ctx->pc = 0x19b010u;

    // 0x19b010: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B010u;
    {
        const bool branch_taken_0x19b010 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B010u;
            // 0x19b014: 0x28a10065  slti        $at, $a1, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b010) {
            ctx->pc = 0x19B020u;
            goto label_19b020;
        }
    }
    ctx->pc = 0x19B018u;
    // 0x19b018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b01c: 0x28a10065  slti        $at, $a1, 0x65
    ctx->pc = 0x19b01cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
label_19b020:
    // 0x19b020: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B020u;
    {
        const bool branch_taken_0x19b020 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b020) {
            ctx->pc = 0x19B02Cu;
            goto label_19b02c;
        }
    }
    ctx->pc = 0x19B028u;
    // 0x19b028: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x19b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_19b02c:
    // 0x19b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B02Cu;
            // 0x19b030: 0xa4850004  sh          $a1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B034u;
}
