#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneSky__6CSceneFi
// Address: 0x283440 - 0x28347c
void GetSceneSky__6CSceneFi_0x283440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneSky__6CSceneFi_0x283440");
#endif

    ctx->pc = 0x283440u;

    // 0x283440: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283440u;
    {
        const bool branch_taken_0x283440 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x283444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283440u;
            // 0x283444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283440) {
            ctx->pc = 0x28345Cu;
            goto label_28345c;
        }
    }
    ctx->pc = 0x283448u;
    // 0x283448: 0x8c8228c4  lw          $v0, 0x28C4($a0)
    ctx->pc = 0x283448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10436)));
    // 0x28344c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28344cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283450: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283450u;
    {
        const bool branch_taken_0x283450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283450u;
            // 0x283454: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283450) {
            ctx->pc = 0x283464u;
            goto label_283464;
        }
    }
    ctx->pc = 0x283458u;
    // 0x283458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28345c:
    // 0x28345c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28345Cu;
    {
        const bool branch_taken_0x28345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28345c) {
            ctx->pc = 0x283474u;
            goto label_283474;
        }
    }
    ctx->pc = 0x283464u;
label_283464:
    // 0x283464: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x283464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x283468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28346c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283470: 0x244228c8  addiu       $v0, $v0, 0x28C8
    ctx->pc = 0x283470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
label_283474:
    // 0x283474: 0x3e00008  jr          $ra
    ctx->pc = 0x283474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28347Cu;
}
