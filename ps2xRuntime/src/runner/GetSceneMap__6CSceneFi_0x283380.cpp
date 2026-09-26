#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneMap__6CSceneFi
// Address: 0x283380 - 0x2833bc
void GetSceneMap__6CSceneFi_0x283380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneMap__6CSceneFi_0x283380");
#endif

    ctx->pc = 0x283380u;

    // 0x283380: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283380u;
    {
        const bool branch_taken_0x283380 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x283384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283380u;
            // 0x283384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283380) {
            ctx->pc = 0x28339Cu;
            goto label_28339c;
        }
    }
    ctx->pc = 0x283388u;
    // 0x283388: 0x8c8227e0  lw          $v0, 0x27E0($a0)
    ctx->pc = 0x283388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10208)));
    // 0x28338c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28338cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283390: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283390u;
    {
        const bool branch_taken_0x283390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283390u;
            // 0x283394: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283390) {
            ctx->pc = 0x2833A4u;
            goto label_2833a4;
        }
    }
    ctx->pc = 0x283398u;
    // 0x283398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28339c:
    // 0x28339c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28339Cu;
    {
        const bool branch_taken_0x28339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28339c) {
            ctx->pc = 0x2833B4u;
            goto label_2833b4;
        }
    }
    ctx->pc = 0x2833A4u;
label_2833a4:
    // 0x2833a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2833a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2833a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2833a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2833ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2833acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2833b0: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x2833b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_2833b4:
    // 0x2833b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2833B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2833BCu;
}
