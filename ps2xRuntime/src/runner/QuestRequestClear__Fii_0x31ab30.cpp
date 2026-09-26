#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QuestRequestClear__Fii
// Address: 0x31ab30 - 0x31ab68
void QuestRequestClear__Fii_0x31ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuestRequestClear__Fii_0x31ab30");
#endif

    switch (ctx->pc) {
        case 0x31ab44u: goto label_31ab44;
        case 0x31ab58u: goto label_31ab58;
        default: break;
    }

    ctx->pc = 0x31ab30u;

    // 0x31ab30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ab34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ab38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ab3c: 0xc0c69ec  jal         func_31A7B0
    ctx->pc = 0x31AB3Cu;
    SET_GPR_U32(ctx, 31, 0x31AB44u);
    ctx->pc = 0x31AB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB3Cu;
            // 0x31ab40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A7B0u;
    if (runtime->hasFunction(0x31A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x31A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB44u; }
        if (ctx->pc != 0x31AB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestData__Fv_0x31a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB44u; }
        if (ctx->pc != 0x31AB44u) { return; }
    }
    ctx->pc = 0x31AB44u;
label_31ab44:
    // 0x31ab44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31ab44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AB48u;
    {
        const bool branch_taken_0x31ab48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB48u;
            // 0x31ab4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab48) {
            ctx->pc = 0x31AB58u;
            goto label_31ab58;
        }
    }
    ctx->pc = 0x31AB50u;
    // 0x31ab50: 0xc0c6a9c  jal         func_31AA70
    ctx->pc = 0x31AB50u;
    SET_GPR_U32(ctx, 31, 0x31AB58u);
    ctx->pc = 0x31AA70u;
    if (runtime->hasFunction(0x31AA70u)) {
        auto targetFn = runtime->lookupFunction(0x31AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB58u; }
        if (ctx->pc != 0x31AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        QuestClear__10CQuestDataFi_0x31aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB58u; }
        if (ctx->pc != 0x31AB58u) { return; }
    }
    ctx->pc = 0x31AB58u;
label_31ab58:
    // 0x31ab58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ab58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ab5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ab5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB60u;
            // 0x31ab64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AB68u;
}
