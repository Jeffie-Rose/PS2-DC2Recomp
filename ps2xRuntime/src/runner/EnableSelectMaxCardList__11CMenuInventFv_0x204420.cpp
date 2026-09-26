#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableSelectMaxCardList__11CMenuInventFv
// Address: 0x204420 - 0x204450
void EnableSelectMaxCardList__11CMenuInventFv_0x204420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableSelectMaxCardList__11CMenuInventFv_0x204420");
#endif

    switch (ctx->pc) {
        case 0x204430u: goto label_204430;
        default: break;
    }

    ctx->pc = 0x204420u;

    // 0x204420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204428: 0xc07fc5c  jal         func_1FF170
    ctx->pc = 0x204428u;
    SET_GPR_U32(ctx, 31, 0x204430u);
    ctx->pc = 0x20442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204428u;
            // 0x20442c: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF170u;
    if (runtime->hasFunction(0x1FF170u)) {
        auto targetFn = runtime->lookupFunction(0x1FF170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204430u; }
        if (ctx->pc != 0x204430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHatsumeiNum__15CInventUserDataFv_0x1ff170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204430u; }
        if (ctx->pc != 0x204430u) { return; }
    }
    ctx->pc = 0x204430u;
label_204430:
    // 0x204430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204434: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x204434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x204438: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x204438u;
    {
        const bool branch_taken_0x204438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204438) {
            ctx->pc = 0x204444u;
            goto label_204444;
        }
    }
    ctx->pc = 0x204440u;
    // 0x204440: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x204440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204444:
    // 0x204444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204448: 0x3e00008  jr          $ra
    ctx->pc = 0x204448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204448u;
            // 0x20444c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204450u;
}
