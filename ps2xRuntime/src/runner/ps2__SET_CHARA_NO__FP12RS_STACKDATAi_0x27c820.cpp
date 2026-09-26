#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_NO__FP12RS_STACKDATAi
// Address: 0x27c820 - 0x27c864
void ps2__SET_CHARA_NO__FP12RS_STACKDATAi_0x27c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_NO__FP12RS_STACKDATAi_0x27c820");
#endif

    switch (ctx->pc) {
        case 0x27c834u: goto label_27c834;
        case 0x27c840u: goto label_27c840;
        case 0x27c850u: goto label_27c850;
        default: break;
    }

    ctx->pc = 0x27c820u;

    // 0x27c820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27c82c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27C82Cu;
    SET_GPR_U32(ctx, 31, 0x27C834u);
    ctx->pc = 0x27C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C82Cu;
            // 0x27c830: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C834u; }
        if (ctx->pc != 0x27C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C834u; }
        if (ctx->pc != 0x27C834u) { return; }
    }
    ctx->pc = 0x27C834u;
label_27c834:
    // 0x27c834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c838: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27C838u;
    SET_GPR_U32(ctx, 31, 0x27C840u);
    ctx->pc = 0x27C83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C838u;
            // 0x27c83c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C840u; }
        if (ctx->pc != 0x27C840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C840u; }
        if (ctx->pc != 0x27C840u) { return; }
    }
    ctx->pc = 0x27C840u;
label_27c840:
    // 0x27c840: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27c844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c848: 0xc0a0ec0  jal         func_283B00
    ctx->pc = 0x27C848u;
    SET_GPR_U32(ctx, 31, 0x27C850u);
    ctx->pc = 0x27C84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C848u;
            // 0x27c84c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B00u;
    if (runtime->hasFunction(0x283B00u)) {
        auto targetFn = runtime->lookupFunction(0x283B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C850u; }
        if (ctx->pc != 0x27C850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaNo__6CSceneFii_0x283b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C850u; }
        if (ctx->pc != 0x27C850u) { return; }
    }
    ctx->pc = 0x27C850u;
label_27c850:
    // 0x27c850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c85c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C85Cu;
            // 0x27c860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C864u;
}
