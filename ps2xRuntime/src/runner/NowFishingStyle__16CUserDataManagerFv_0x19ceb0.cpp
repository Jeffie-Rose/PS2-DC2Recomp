#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowFishingStyle__16CUserDataManagerFv
// Address: 0x19ceb0 - 0x19cee0
void NowFishingStyle__16CUserDataManagerFv_0x19ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowFishingStyle__16CUserDataManagerFv_0x19ceb0");
#endif

    switch (ctx->pc) {
        case 0x19cec8u: goto label_19cec8;
        default: break;
    }

    ctx->pc = 0x19ceb0u;

    // 0x19ceb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ceb4: 0x248440b8  addiu       $a0, $a0, 0x40B8
    ctx->pc = 0x19ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16568));
    // 0x19ceb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CEB8u;
    {
        const bool branch_taken_0x19ceb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEB8u;
            // 0x19cebc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceb8) {
            ctx->pc = 0x19CED0u;
            goto label_19ced0;
        }
    }
    ctx->pc = 0x19CEC0u;
    // 0x19cec0: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x19CEC0u;
    SET_GPR_U32(ctx, 31, 0x19CEC8u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEC8u; }
        if (ctx->pc != 0x19CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEC8u; }
        if (ctx->pc != 0x19CEC8u) { return; }
    }
    ctx->pc = 0x19CEC8u;
label_19cec8:
    // 0x19cec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19CEC8u;
    {
        const bool branch_taken_0x19cec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEC8u;
            // 0x19cecc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cec8) {
            ctx->pc = 0x19CED8u;
            goto label_19ced8;
        }
    }
    ctx->pc = 0x19CED0u;
label_19ced0:
    // 0x19ced0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ced0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ced4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ced8:
    // 0x19ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CED8u;
            // 0x19cedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CEE0u;
}
