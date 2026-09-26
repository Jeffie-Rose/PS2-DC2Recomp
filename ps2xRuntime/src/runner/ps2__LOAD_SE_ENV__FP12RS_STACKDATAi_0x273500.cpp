#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_SE_ENV__FP12RS_STACKDATAi
// Address: 0x273500 - 0x273554
void ps2__LOAD_SE_ENV__FP12RS_STACKDATAi_0x273500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_SE_ENV__FP12RS_STACKDATAi_0x273500");
#endif

    switch (ctx->pc) {
        case 0x273510u: goto label_273510;
        case 0x273520u: goto label_273520;
        case 0x273540u: goto label_273540;
        default: break;
    }

    ctx->pc = 0x273500u;

    // 0x273500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273508: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273508u;
    SET_GPR_U32(ctx, 31, 0x273510u);
    ctx->pc = 0x27350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273508u;
            // 0x27350c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273510u; }
        if (ctx->pc != 0x273510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273510u; }
        if (ctx->pc != 0x273510u) { return; }
    }
    ctx->pc = 0x273510u;
label_273510:
    // 0x273510: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273518: 0xc0a9ae8  jal         func_2A6BA0
    ctx->pc = 0x273518u;
    SET_GPR_U32(ctx, 31, 0x273520u);
    ctx->pc = 0x27351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273518u;
            // 0x27351c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BA0u;
    if (runtime->hasFunction(0x2A6BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273520u; }
        if (ctx->pc != 0x273520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeEnv__6CSceneFi_0x2a6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273520u; }
        if (ctx->pc != 0x273520u) { return; }
    }
    ctx->pc = 0x273520u;
label_273520:
    // 0x273520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273520u;
    {
        const bool branch_taken_0x273520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273520u;
            // 0x273524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273520) {
            ctx->pc = 0x273530u;
            goto label_273530;
        }
    }
    ctx->pc = 0x273528u;
    // 0x273528: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x273528u;
    {
        const bool branch_taken_0x273528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273528u;
            // 0x27352c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273528) {
            ctx->pc = 0x273548u;
            goto label_273548;
        }
    }
    ctx->pc = 0x273530u;
label_273530:
    // 0x273530: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273534: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x273534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x273538: 0xc0a9c38  jal         func_2A70E0
    ctx->pc = 0x273538u;
    SET_GPR_U32(ctx, 31, 0x273540u);
    ctx->pc = 0x27353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273538u;
            // 0x27353c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A70E0u;
    if (runtime->hasFunction(0x2A70E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A70E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273540u; }
        if (ctx->pc != 0x273540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeEnv__6CSceneFiP1_0x2a70e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273540u; }
        if (ctx->pc != 0x273540u) { return; }
    }
    ctx->pc = 0x273540u;
label_273540:
    // 0x273540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273548:
    // 0x273548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27354c: 0x3e00008  jr          $ra
    ctx->pc = 0x27354Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27354Cu;
            // 0x273550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273554u;
}
