#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSeAllStop__Fi
// Address: 0x18d7c0 - 0x18d88c
void sndSeAllStop__Fi_0x18d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSeAllStop__Fi_0x18d7c0");
#endif

    switch (ctx->pc) {
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d804u: goto label_18d804;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d814u: goto label_18d814;
        case 0x18d830u: goto label_18d830;
        case 0x18d838u: goto label_18d838;
        case 0x18d840u: goto label_18d840;
        case 0x18d850u: goto label_18d850;
        case 0x18d858u: goto label_18d858;
        case 0x18d860u: goto label_18d860;
        case 0x18d868u: goto label_18d868;
        case 0x18d870u: goto label_18d870;
        case 0x18d878u: goto label_18d878;
        default: break;
    }

    ctx->pc = 0x18d7c0u;

    // 0x18d7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d7cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7d0: 0x621001d  bgez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D7D0u;
    {
        const bool branch_taken_0x18d7d0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18D7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7D0u;
            // 0x18d7d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7d0) {
            ctx->pc = 0x18D848u;
            goto label_18d848;
        }
    }
    ctx->pc = 0x18D7D8u;
    // 0x18d7d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d7dc:
    // 0x18d7dc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18D7DCu;
    {
        const bool branch_taken_0x18d7dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7DCu;
            // 0x18d7e0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7dc) {
            ctx->pc = 0x18D814u;
            goto label_18d814;
        }
    }
    ctx->pc = 0x18D7E4u;
    // 0x18d7e4: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18D7E4u;
    {
        const bool branch_taken_0x18d7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7E4u;
            // 0x18d7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7e4) {
            ctx->pc = 0x18D814u;
            goto label_18d814;
        }
    }
    ctx->pc = 0x18D7ECu;
    // 0x18d7ec: 0xc06405c  jal         func_190170
    ctx->pc = 0x18D7ECu;
    SET_GPR_U32(ctx, 31, 0x18D7F4u);
    ctx->pc = 0x190170u;
    if (runtime->hasFunction(0x190170u)) {
        auto targetFn = runtime->lookupFunction(0x190170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F4u; }
        if (ctx->pc != 0x18D7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopSeSeq__Fi_0x190170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F4u; }
        if (ctx->pc != 0x18D7F4u) { return; }
    }
    ctx->pc = 0x18D7F4u;
label_18d7f4:
    // 0x18d7f4: 0xc0633b8  jal         func_18CEE0
    ctx->pc = 0x18D7F4u;
    SET_GPR_U32(ctx, 31, 0x18D7FCu);
    ctx->pc = 0x18D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7F4u;
            // 0x18d7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CEE0u;
    if (runtime->hasFunction(0x18CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7FCu; }
        if (ctx->pc != 0x18D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitSeSeq__Fi_0x18cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7FCu; }
        if (ctx->pc != 0x18D7FCu) { return; }
    }
    ctx->pc = 0x18D7FCu;
label_18d7fc:
    // 0x18d7fc: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D7FCu;
    SET_GPR_U32(ctx, 31, 0x18D804u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D804u; }
        if (ctx->pc != 0x18D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D804u; }
        if (ctx->pc != 0x18D804u) { return; }
    }
    ctx->pc = 0x18D804u;
label_18d804:
    // 0x18d804: 0xc0635d4  jal         func_18D750
    ctx->pc = 0x18D804u;
    SET_GPR_U32(ctx, 31, 0x18D80Cu);
    ctx->pc = 0x18D808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D804u;
            // 0x18d808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D750u;
    if (runtime->hasFunction(0x18D750u)) {
        auto targetFn = runtime->lookupFunction(0x18D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D80Cu; }
        if (ctx->pc != 0x18D80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeAllStop_Sub__Fi_0x18d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D80Cu; }
        if (ctx->pc != 0x18D80Cu) { return; }
    }
    ctx->pc = 0x18D80Cu;
label_18d80c:
    // 0x18d80c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D80Cu;
    SET_GPR_U32(ctx, 31, 0x18D814u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D814u; }
        if (ctx->pc != 0x18D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D814u; }
        if (ctx->pc != 0x18D814u) { return; }
    }
    ctx->pc = 0x18D814u;
label_18d814:
    // 0x18d814: 0x0  nop
    ctx->pc = 0x18d814u;
    // NOP
    // 0x18d818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18d818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18d81c: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x18d81cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x18d820: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18D820u;
    {
        const bool branch_taken_0x18d820 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d820) {
            ctx->pc = 0x18D7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d7dc;
        }
    }
    ctx->pc = 0x18D828u;
    // 0x18d828: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D828u;
    SET_GPR_U32(ctx, 31, 0x18D830u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D830u; }
        if (ctx->pc != 0x18D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D830u; }
        if (ctx->pc != 0x18D830u) { return; }
    }
    ctx->pc = 0x18D830u;
label_18d830:
    // 0x18d830: 0xc063588  jal         func_18D620
    ctx->pc = 0x18D830u;
    SET_GPR_U32(ctx, 31, 0x18D838u);
    ctx->pc = 0x18D620u;
    if (runtime->hasFunction(0x18D620u)) {
        auto targetFn = runtime->lookupFunction(0x18D620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D838u; }
        if (ctx->pc != 0x18D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CSndStepWait__Fv_0x18d620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D838u; }
        if (ctx->pc != 0x18D838u) { return; }
    }
    ctx->pc = 0x18D838u;
label_18d838:
    // 0x18d838: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D838u;
    SET_GPR_U32(ctx, 31, 0x18D840u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D840u; }
        if (ctx->pc != 0x18D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D840u; }
        if (ctx->pc != 0x18D840u) { return; }
    }
    ctx->pc = 0x18D840u;
label_18d840:
    // 0x18d840: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18D840u;
    {
        const bool branch_taken_0x18d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D840u;
            // 0x18d844: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d840) {
            ctx->pc = 0x18D87Cu;
            goto label_18d87c;
        }
    }
    ctx->pc = 0x18D848u;
label_18d848:
    // 0x18d848: 0xc06405c  jal         func_190170
    ctx->pc = 0x18D848u;
    SET_GPR_U32(ctx, 31, 0x18D850u);
    ctx->pc = 0x190170u;
    if (runtime->hasFunction(0x190170u)) {
        auto targetFn = runtime->lookupFunction(0x190170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D850u; }
        if (ctx->pc != 0x18D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopSeSeq__Fi_0x190170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D850u; }
        if (ctx->pc != 0x18D850u) { return; }
    }
    ctx->pc = 0x18D850u;
label_18d850:
    // 0x18d850: 0xc0633b8  jal         func_18CEE0
    ctx->pc = 0x18D850u;
    SET_GPR_U32(ctx, 31, 0x18D858u);
    ctx->pc = 0x18D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D850u;
            // 0x18d854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CEE0u;
    if (runtime->hasFunction(0x18CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D858u; }
        if (ctx->pc != 0x18D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitSeSeq__Fi_0x18cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D858u; }
        if (ctx->pc != 0x18D858u) { return; }
    }
    ctx->pc = 0x18D858u;
label_18d858:
    // 0x18d858: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D858u;
    SET_GPR_U32(ctx, 31, 0x18D860u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D860u; }
        if (ctx->pc != 0x18D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D860u; }
        if (ctx->pc != 0x18D860u) { return; }
    }
    ctx->pc = 0x18D860u;
label_18d860:
    // 0x18d860: 0xc0635d4  jal         func_18D750
    ctx->pc = 0x18D860u;
    SET_GPR_U32(ctx, 31, 0x18D868u);
    ctx->pc = 0x18D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D860u;
            // 0x18d864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D750u;
    if (runtime->hasFunction(0x18D750u)) {
        auto targetFn = runtime->lookupFunction(0x18D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D868u; }
        if (ctx->pc != 0x18D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeAllStop_Sub__Fi_0x18d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D868u; }
        if (ctx->pc != 0x18D868u) { return; }
    }
    ctx->pc = 0x18D868u;
label_18d868:
    // 0x18d868: 0xc063578  jal         func_18D5E0
    ctx->pc = 0x18D868u;
    SET_GPR_U32(ctx, 31, 0x18D870u);
    ctx->pc = 0x18D5E0u;
    if (runtime->hasFunction(0x18D5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D870u; }
        if (ctx->pc != 0x18D870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CSndStep__Fv_0x18d5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D870u; }
        if (ctx->pc != 0x18D870u) { return; }
    }
    ctx->pc = 0x18D870u;
label_18d870:
    // 0x18d870: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D870u;
    SET_GPR_U32(ctx, 31, 0x18D878u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D878u; }
        if (ctx->pc != 0x18D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D878u; }
        if (ctx->pc != 0x18D878u) { return; }
    }
    ctx->pc = 0x18D878u;
label_18d878:
    // 0x18d878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d87c:
    // 0x18d87c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d884: 0x3e00008  jr          $ra
    ctx->pc = 0x18D884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D884u;
            // 0x18d888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D88Cu;
}
