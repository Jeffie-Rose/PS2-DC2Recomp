#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_SE_BATTLE__FP12RS_STACKDATAi
// Address: 0x2737b0 - 0x273800
void ps2__LOAD_SE_BATTLE__FP12RS_STACKDATAi_0x2737b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_SE_BATTLE__FP12RS_STACKDATAi_0x2737b0");
#endif

    switch (ctx->pc) {
        case 0x2737c0u: goto label_2737c0;
        case 0x2737d0u: goto label_2737d0;
        case 0x2737f0u: goto label_2737f0;
        default: break;
    }

    ctx->pc = 0x2737b0u;

    // 0x2737b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2737b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2737b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2737b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2737b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2737B8u;
    SET_GPR_U32(ctx, 31, 0x2737C0u);
    ctx->pc = 0x2737BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2737B8u;
            // 0x2737bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2737C0u; }
        if (ctx->pc != 0x2737C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2737C0u; }
        if (ctx->pc != 0x2737C0u) { return; }
    }
    ctx->pc = 0x2737C0u;
label_2737c0:
    // 0x2737c0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2737c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2737c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2737c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737c8: 0xc0a9af4  jal         func_2A6BD0
    ctx->pc = 0x2737C8u;
    SET_GPR_U32(ctx, 31, 0x2737D0u);
    ctx->pc = 0x2737CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2737C8u;
            // 0x2737cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BD0u;
    if (runtime->hasFunction(0x2A6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2737D0u; }
        if (ctx->pc != 0x2737D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeBattle__6CSceneFi_0x2a6bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2737D0u; }
        if (ctx->pc != 0x2737D0u) { return; }
    }
    ctx->pc = 0x2737D0u;
label_2737d0:
    // 0x2737d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2737D0u;
    {
        const bool branch_taken_0x2737d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2737D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737D0u;
            // 0x2737d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737d0) {
            ctx->pc = 0x2737E0u;
            goto label_2737e0;
        }
    }
    ctx->pc = 0x2737D8u;
    // 0x2737d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2737D8u;
    {
        const bool branch_taken_0x2737d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737D8u;
            // 0x2737dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737d8) {
            ctx->pc = 0x2737F4u;
            goto label_2737f4;
        }
    }
    ctx->pc = 0x2737E0u;
label_2737e0:
    // 0x2737e0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2737e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2737e4: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x2737e8: 0xc0a9c5c  jal         func_2A7170
    ctx->pc = 0x2737E8u;
    SET_GPR_U32(ctx, 31, 0x2737F0u);
    ctx->pc = 0x2737ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2737E8u;
            // 0x2737ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7170u;
    if (runtime->hasFunction(0x2A7170u)) {
        auto targetFn = runtime->lookupFunction(0x2A7170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2737F0u; }
        if (ctx->pc != 0x2737F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBattle__6CSceneFiP1_0x2a7170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2737F0u; }
        if (ctx->pc != 0x2737F0u) { return; }
    }
    ctx->pc = 0x2737F0u;
label_2737f0:
    // 0x2737f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2737f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2737f4:
    // 0x2737f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2737f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2737f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2737F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2737FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737F8u;
            // 0x2737fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273800u;
}
