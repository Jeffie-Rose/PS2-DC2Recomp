#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck
// Address: 0x29dfd0 - 0x29e058
void UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0");
#endif

    switch (ctx->pc) {
        case 0x29dff4u: goto label_29dff4;
        case 0x29e000u: goto label_29e000;
        case 0x29e008u: goto label_29e008;
        case 0x29e014u: goto label_29e014;
        case 0x29e028u: goto label_29e028;
        case 0x29e038u: goto label_29e038;
        default: break;
    }

    ctx->pc = 0x29dfd0u;

    // 0x29dfd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29dfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29dfd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29dfd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29dfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29dfdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29dfe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29dfe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29dfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29dfe8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29dfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfec: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29DFECu;
    SET_GPR_U32(ctx, 31, 0x29DFF4u);
    ctx->pc = 0x29DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DFECu;
            // 0x29dff0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DFF4u; }
        if (ctx->pc != 0x29DFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DFF4u; }
        if (ctx->pc != 0x29DFF4u) { return; }
    }
    ctx->pc = 0x29DFF4u;
label_29dff4:
    // 0x29dff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dff8: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DFF8u;
    SET_GPR_U32(ctx, 31, 0x29E000u);
    ctx->pc = 0x29DFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DFF8u;
            // 0x29dffc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E000u; }
        if (ctx->pc != 0x29E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E000u; }
        if (ctx->pc != 0x29E000u) { return; }
    }
    ctx->pc = 0x29E000u;
label_29e000:
    // 0x29e000: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29E000u;
    {
        const bool branch_taken_0x29e000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E000u;
            // 0x29e004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e000) {
            ctx->pc = 0x29E030u;
            goto label_29e030;
        }
    }
    ctx->pc = 0x29E008u;
label_29e008:
    // 0x29e008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e00c: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x29E00Cu;
    SET_GPR_U32(ctx, 31, 0x29E014u);
    ctx->pc = 0x29E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E00Cu;
            // 0x29e010: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E014u; }
        if (ctx->pc != 0x29E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E014u; }
        if (ctx->pc != 0x29E014u) { return; }
    }
    ctx->pc = 0x29E014u;
label_29e014:
    // 0x29e014: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29E014u;
    {
        const bool branch_taken_0x29e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E014u;
            // 0x29e018: 0xae0201b0  sw          $v0, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e014) {
            ctx->pc = 0x29E020u;
            goto label_29e020;
        }
    }
    ctx->pc = 0x29E01Cu;
    // 0x29e01c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e020:
    // 0x29e020: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29E020u;
    SET_GPR_U32(ctx, 31, 0x29E028u);
    ctx->pc = 0x29E024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E020u;
            // 0x29e024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E028u; }
        if (ctx->pc != 0x29E028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E028u; }
        if (ctx->pc != 0x29E028u) { return; }
    }
    ctx->pc = 0x29E028u;
label_29e028:
    // 0x29e028: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29E028u;
    {
        const bool branch_taken_0x29e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E028u;
            // 0x29e02c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e028) {
            ctx->pc = 0x29E008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e008;
        }
    }
    ctx->pc = 0x29E030u;
label_29e030:
    // 0x29e030: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29E030u;
    SET_GPR_U32(ctx, 31, 0x29E038u);
    ctx->pc = 0x29E034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E030u;
            // 0x29e034: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E038u; }
        if (ctx->pc != 0x29E038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E038u; }
        if (ctx->pc != 0x29E038u) { return; }
    }
    ctx->pc = 0x29E038u;
label_29e038:
    // 0x29e038: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29e038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e03c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e040: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e044: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e04c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e050: 0x3e00008  jr          $ra
    ctx->pc = 0x29E050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E050u;
            // 0x29e054: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E058u;
}
