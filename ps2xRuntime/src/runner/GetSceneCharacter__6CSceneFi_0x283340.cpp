#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneCharacter__6CSceneFi
// Address: 0x283340 - 0x283374
void GetSceneCharacter__6CSceneFi_0x283340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneCharacter__6CSceneFi_0x283340");
#endif

    ctx->pc = 0x283340u;

    // 0x283340: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283340u;
    {
        const bool branch_taken_0x283340 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x283344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283340u;
            // 0x283344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283340) {
            ctx->pc = 0x28335Cu;
            goto label_28335c;
        }
    }
    ctx->pc = 0x283348u;
    // 0x283348: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x283348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x28334c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28334cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283350: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283350u;
    {
        const bool branch_taken_0x283350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283350u;
            // 0x283354: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283350) {
            ctx->pc = 0x283364u;
            goto label_283364;
        }
    }
    ctx->pc = 0x283358u;
    // 0x283358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28335c:
    // 0x28335c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28335Cu;
    {
        const bool branch_taken_0x28335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28335c) {
            ctx->pc = 0x28336Cu;
            goto label_28336c;
        }
    }
    ctx->pc = 0x283364u;
label_283364:
    // 0x283364: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x283364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283368: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x283368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_28336c:
    // 0x28336c: 0x3e00008  jr          $ra
    ctx->pc = 0x28336Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283374u;
}
