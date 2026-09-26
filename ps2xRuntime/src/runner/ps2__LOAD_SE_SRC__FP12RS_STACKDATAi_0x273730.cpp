#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_SE_SRC__FP12RS_STACKDATAi
// Address: 0x273730 - 0x273780
void ps2__LOAD_SE_SRC__FP12RS_STACKDATAi_0x273730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_SE_SRC__FP12RS_STACKDATAi_0x273730");
#endif

    switch (ctx->pc) {
        case 0x273740u: goto label_273740;
        case 0x273750u: goto label_273750;
        case 0x273770u: goto label_273770;
        default: break;
    }

    ctx->pc = 0x273730u;

    // 0x273730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273738: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273738u;
    SET_GPR_U32(ctx, 31, 0x273740u);
    ctx->pc = 0x27373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273738u;
            // 0x27373c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273740u; }
        if (ctx->pc != 0x273740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273740u; }
        if (ctx->pc != 0x273740u) { return; }
    }
    ctx->pc = 0x273740u;
label_273740:
    // 0x273740: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273748: 0xc0a9ad4  jal         func_2A6B50
    ctx->pc = 0x273748u;
    SET_GPR_U32(ctx, 31, 0x273750u);
    ctx->pc = 0x27374Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273748u;
            // 0x27374c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B50u;
    if (runtime->hasFunction(0x2A6B50u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273750u; }
        if (ctx->pc != 0x273750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeSrc__6CSceneFi_0x2a6b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273750u; }
        if (ctx->pc != 0x273750u) { return; }
    }
    ctx->pc = 0x273750u;
label_273750:
    // 0x273750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273750u;
    {
        const bool branch_taken_0x273750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273750u;
            // 0x273754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273750) {
            ctx->pc = 0x273760u;
            goto label_273760;
        }
    }
    ctx->pc = 0x273758u;
    // 0x273758: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x273758u;
    {
        const bool branch_taken_0x273758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273758u;
            // 0x27375c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273758) {
            ctx->pc = 0x273774u;
            goto label_273774;
        }
    }
    ctx->pc = 0x273760u;
label_273760:
    // 0x273760: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273764: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x273764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x273768: 0xc0a9c14  jal         func_2A7050
    ctx->pc = 0x273768u;
    SET_GPR_U32(ctx, 31, 0x273770u);
    ctx->pc = 0x27376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273768u;
            // 0x27376c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7050u;
    if (runtime->hasFunction(0x2A7050u)) {
        auto targetFn = runtime->lookupFunction(0x2A7050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273770u; }
        if (ctx->pc != 0x273770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeSrc__6CSceneFiP1_0x2a7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273770u; }
        if (ctx->pc != 0x273770u) { return; }
    }
    ctx->pc = 0x273770u;
label_273770:
    // 0x273770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273774:
    // 0x273774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273778: 0x3e00008  jr          $ra
    ctx->pc = 0x273778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273778u;
            // 0x27377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273780u;
}
