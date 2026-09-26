#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Search__14CFuncPointMngrFPc
// Address: 0x29d8f0 - 0x29d998
void Search__14CFuncPointMngrFPc_0x29d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search__14CFuncPointMngrFPc_0x29d8f0");
#endif

    switch (ctx->pc) {
        case 0x29d918u: goto label_29d918;
        case 0x29d920u: goto label_29d920;
        case 0x29d928u: goto label_29d928;
        case 0x29d930u: goto label_29d930;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d954u: goto label_29d954;
        case 0x29d968u: goto label_29d968;
        default: break;
    }

    ctx->pc = 0x29d8f0u;

    // 0x29d8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29d8f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29d8f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d8fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d900: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29d900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d908: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29d908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d910: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29d910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d918:
    // 0x29d918: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29D918u;
    SET_GPR_U32(ctx, 31, 0x29D920u);
    ctx->pc = 0x29D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D918u;
            // 0x29d91c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D920u; }
        if (ctx->pc != 0x29D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D920u; }
        if (ctx->pc != 0x29D920u) { return; }
    }
    ctx->pc = 0x29D920u;
label_29d920:
    // 0x29d920: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29D920u;
    SET_GPR_U32(ctx, 31, 0x29D928u);
    ctx->pc = 0x29D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D920u;
            // 0x29d924: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D928u; }
        if (ctx->pc != 0x29D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D928u; }
        if (ctx->pc != 0x29D928u) { return; }
    }
    ctx->pc = 0x29D928u;
label_29d928:
    // 0x29d928: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D928u;
    {
        const bool branch_taken_0x29d928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D928u;
            // 0x29d92c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d928) {
            ctx->pc = 0x29D95Cu;
            goto label_29d95c;
        }
    }
    ctx->pc = 0x29D930u;
label_29d930:
    // 0x29d930: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29d934: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x29D934u;
    SET_GPR_U32(ctx, 31, 0x29D93Cu);
    ctx->pc = 0x29D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D934u;
            // 0x29d938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D93Cu; }
        if (ctx->pc != 0x29D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D93Cu; }
        if (ctx->pc != 0x29D93Cu) { return; }
    }
    ctx->pc = 0x29D93Cu;
label_29d93c:
    // 0x29d93c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D93Cu;
    {
        const bool branch_taken_0x29d93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D93Cu;
            // 0x29d940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d93c) {
            ctx->pc = 0x29D94Cu;
            goto label_29d94c;
        }
    }
    ctx->pc = 0x29D944u;
    // 0x29d944: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29D944u;
    {
        const bool branch_taken_0x29d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D944u;
            // 0x29d948: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d944) {
            ctx->pc = 0x29D97Cu;
            goto label_29d97c;
        }
    }
    ctx->pc = 0x29D94Cu;
label_29d94c:
    // 0x29d94c: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29D94Cu;
    SET_GPR_U32(ctx, 31, 0x29D954u);
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D954u; }
        if (ctx->pc != 0x29D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D954u; }
        if (ctx->pc != 0x29D954u) { return; }
    }
    ctx->pc = 0x29D954u;
label_29d954:
    // 0x29d954: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29D954u;
    {
        const bool branch_taken_0x29d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D954u;
            // 0x29d958: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d954) {
            ctx->pc = 0x29D930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d930;
        }
    }
    ctx->pc = 0x29D95Cu;
label_29d95c:
    // 0x29d95c: 0x0  nop
    ctx->pc = 0x29d95cu;
    // NOP
    // 0x29d960: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29D960u;
    SET_GPR_U32(ctx, 31, 0x29D968u);
    ctx->pc = 0x29D964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D960u;
            // 0x29d964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D968u; }
        if (ctx->pc != 0x29D968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D968u; }
        if (ctx->pc != 0x29D968u) { return; }
    }
    ctx->pc = 0x29D968u;
label_29d968:
    // 0x29d968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29d968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29d96c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x29d96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d970: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x29D970u;
    {
        const bool branch_taken_0x29d970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D970u;
            // 0x29d974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d970) {
            ctx->pc = 0x29D918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d918;
        }
    }
    ctx->pc = 0x29D978u;
    // 0x29d978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d97c:
    // 0x29d97c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29d97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d990: 0x3e00008  jr          $ra
    ctx->pc = 0x29D990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D990u;
            // 0x29d994: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D998u;
}
