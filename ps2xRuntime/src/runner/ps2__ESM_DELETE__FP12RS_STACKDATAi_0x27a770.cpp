#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_DELETE__FP12RS_STACKDATAi
// Address: 0x27a770 - 0x27a7c8
void ps2__ESM_DELETE__FP12RS_STACKDATAi_0x27a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_DELETE__FP12RS_STACKDATAi_0x27a770");
#endif

    switch (ctx->pc) {
        case 0x27a798u: goto label_27a798;
        case 0x27a7a4u: goto label_27a7a4;
        case 0x27a7b4u: goto label_27a7b4;
        default: break;
    }

    ctx->pc = 0x27a770u;

    // 0x27a770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a77c: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A780u;
    {
        const bool branch_taken_0x27a780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A780u;
            // 0x27a784: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a780) {
            ctx->pc = 0x27A790u;
            goto label_27a790;
        }
    }
    ctx->pc = 0x27A788u;
    // 0x27a788: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A788u;
    {
        const bool branch_taken_0x27a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A788u;
            // 0x27a78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a788) {
            ctx->pc = 0x27A7B8u;
            goto label_27a7b8;
        }
    }
    ctx->pc = 0x27A790u;
label_27a790:
    // 0x27a790: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A790u;
    SET_GPR_U32(ctx, 31, 0x27A798u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A798u; }
        if (ctx->pc != 0x27A798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A798u; }
        if (ctx->pc != 0x27A798u) { return; }
    }
    ctx->pc = 0x27A798u;
label_27a798:
    // 0x27a798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a79c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A79Cu;
    SET_GPR_U32(ctx, 31, 0x27A7A4u);
    ctx->pc = 0x27A7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A79Cu;
            // 0x27a7a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A7A4u; }
        if (ctx->pc != 0x27A7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A7A4u; }
        if (ctx->pc != 0x27A7A4u) { return; }
    }
    ctx->pc = 0x27A7A4u;
label_27a7a4:
    // 0x27a7a4: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7ac: 0xc0b853c  jal         func_2E14F0
    ctx->pc = 0x27A7ACu;
    SET_GPR_U32(ctx, 31, 0x27A7B4u);
    ctx->pc = 0x27A7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7ACu;
            // 0x27a7b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E14F0u;
    if (runtime->hasFunction(0x2E14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A7B4u; }
        if (ctx->pc != 0x27A7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFii_0x2e14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A7B4u; }
        if (ctx->pc != 0x27A7B4u) { return; }
    }
    ctx->pc = 0x27A7B4u;
label_27a7b4:
    // 0x27a7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a7b8:
    // 0x27a7b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27A7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7C0u;
            // 0x27a7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A7C8u;
}
