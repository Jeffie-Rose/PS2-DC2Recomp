#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_GetBattleAreaScene__Fv
// Address: 0x232aa0 - 0x232ad0
void menu_GetBattleAreaScene__Fv_0x232aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_GetBattleAreaScene__Fv_0x232aa0");
#endif

    switch (ctx->pc) {
        case 0x232ab0u: goto label_232ab0;
        default: break;
    }

    ctx->pc = 0x232aa0u;

    // 0x232aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232aa8: 0xc06421c  jal         func_190870
    ctx->pc = 0x232AA8u;
    SET_GPR_U32(ctx, 31, 0x232AB0u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232AB0u; }
        if (ctx->pc != 0x232AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232AB0u; }
        if (ctx->pc != 0x232AB0u) { return; }
    }
    ctx->pc = 0x232AB0u;
label_232ab0:
    // 0x232ab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232AB0u;
    {
        const bool branch_taken_0x232ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ab0) {
            ctx->pc = 0x232AC0u;
            goto label_232ac0;
        }
    }
    ctx->pc = 0x232AB8u;
    // 0x232ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232AB8u;
    {
        const bool branch_taken_0x232ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AB8u;
            // 0x232abc: 0x24422f90  addiu       $v0, $v0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ab8) {
            ctx->pc = 0x232AC4u;
            goto label_232ac4;
        }
    }
    ctx->pc = 0x232AC0u;
label_232ac0:
    // 0x232ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232ac4:
    // 0x232ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x232AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AC8u;
            // 0x232acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232AD0u;
}
