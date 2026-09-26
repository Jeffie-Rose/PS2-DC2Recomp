#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_SCALE__FP9SPI_STACKi
// Address: 0x162610 - 0x162688
void mapPIECE_SCALE__FP9SPI_STACKi_0x162610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_SCALE__FP9SPI_STACKi_0x162610");
#endif

    switch (ctx->pc) {
        case 0x162610u: goto label_162610;
        case 0x162614u: goto label_162614;
        case 0x162618u: goto label_162618;
        case 0x16261cu: goto label_16261c;
        case 0x162620u: goto label_162620;
        case 0x162624u: goto label_162624;
        case 0x162628u: goto label_162628;
        case 0x16262cu: goto label_16262c;
        case 0x162630u: goto label_162630;
        case 0x162634u: goto label_162634;
        case 0x162638u: goto label_162638;
        case 0x16263cu: goto label_16263c;
        case 0x162640u: goto label_162640;
        case 0x162644u: goto label_162644;
        case 0x162648u: goto label_162648;
        case 0x16264cu: goto label_16264c;
        case 0x162650u: goto label_162650;
        case 0x162654u: goto label_162654;
        case 0x162658u: goto label_162658;
        case 0x16265cu: goto label_16265c;
        case 0x162660u: goto label_162660;
        case 0x162664u: goto label_162664;
        case 0x162668u: goto label_162668;
        case 0x16266cu: goto label_16266c;
        case 0x162670u: goto label_162670;
        case 0x162674u: goto label_162674;
        case 0x162678u: goto label_162678;
        case 0x16267cu: goto label_16267c;
        case 0x162680u: goto label_162680;
        case 0x162684u: goto label_162684;
        default: break;
    }

    ctx->pc = 0x162610u;

label_162610:
    // 0x162610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_162614:
    // 0x162614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162618:
    // 0x162618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16261c:
    // 0x16261c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_162620:
    // 0x162620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162624:
    // 0x162624: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x162624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
label_162628:
    // 0x162628: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_16262c:
    if (ctx->pc == 0x16262Cu) {
        ctx->pc = 0x16262Cu;
            // 0x16262c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162630u;
        goto label_162630;
    }
    ctx->pc = 0x162628u;
    {
        const bool branch_taken_0x162628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162628u;
            // 0x16262c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162628) {
            ctx->pc = 0x162638u;
            goto label_162638;
        }
    }
    ctx->pc = 0x162630u;
label_162630:
    // 0x162630: 0x10000011  b           . + 4 + (0x11 << 2)
label_162634:
    if (ctx->pc == 0x162634u) {
        ctx->pc = 0x162634u;
            // 0x162634: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x162638u;
        goto label_162638;
    }
    ctx->pc = 0x162630u;
    {
        const bool branch_taken_0x162630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162630u;
            // 0x162634: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162630) {
            ctx->pc = 0x162678u;
            goto label_162678;
        }
    }
    ctx->pc = 0x162638u;
label_162638:
    // 0x162638: 0xc0588d8  jal         func_162360
label_16263c:
    if (ctx->pc == 0x16263Cu) {
        ctx->pc = 0x162640u;
        goto label_162640;
    }
    ctx->pc = 0x162638u;
    SET_GPR_U32(ctx, 31, 0x162640u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162640u; }
        if (ctx->pc != 0x162640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162640u; }
        if (ctx->pc != 0x162640u) { return; }
    }
    ctx->pc = 0x162640u;
label_162640:
    // 0x162640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162644:
    // 0x162644: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_162648:
    if (ctx->pc == 0x162648u) {
        ctx->pc = 0x162648u;
            // 0x162648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16264Cu;
        goto label_16264c;
    }
    ctx->pc = 0x162644u;
    {
        const bool branch_taken_0x162644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x162648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162644u;
            // 0x162648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162644) {
            ctx->pc = 0x162654u;
            goto label_162654;
        }
    }
    ctx->pc = 0x16264Cu;
label_16264c:
    // 0x16264c: 0x10000009  b           . + 4 + (0x9 << 2)
label_162650:
    if (ctx->pc == 0x162650u) {
        ctx->pc = 0x162650u;
            // 0x162650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162654u;
        goto label_162654;
    }
    ctx->pc = 0x16264Cu;
    {
        const bool branch_taken_0x16264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16264Cu;
            // 0x162650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16264c) {
            ctx->pc = 0x162674u;
            goto label_162674;
        }
    }
    ctx->pc = 0x162654u;
label_162654:
    // 0x162654: 0xc051928  jal         func_1464A0
label_162658:
    if (ctx->pc == 0x162658u) {
        ctx->pc = 0x162658u;
            // 0x162658: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16265Cu;
        goto label_16265c;
    }
    ctx->pc = 0x162654u;
    SET_GPR_U32(ctx, 31, 0x16265Cu);
    ctx->pc = 0x162658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162654u;
            // 0x162658: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16265Cu; }
        if (ctx->pc != 0x16265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16265Cu; }
        if (ctx->pc != 0x16265Cu) { return; }
    }
    ctx->pc = 0x16265Cu;
label_16265c:
    // 0x16265c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16265cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162660:
    // 0x162660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162664:
    // 0x162664: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x162664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_162668:
    // 0x162668: 0x320f809  jalr        $t9
label_16266c:
    if (ctx->pc == 0x16266Cu) {
        ctx->pc = 0x16266Cu;
            // 0x16266c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x162670u;
        goto label_162670;
    }
    ctx->pc = 0x162668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162670u);
        ctx->pc = 0x16266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162668u;
            // 0x16266c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162670u; }
            if (ctx->pc != 0x162670u) { return; }
        }
        }
    }
    ctx->pc = 0x162670u;
label_162670:
    // 0x162670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162674:
    // 0x162674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162678:
    // 0x162678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16267c:
    // 0x16267c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16267cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162680:
    // 0x162680: 0x3e00008  jr          $ra
label_162684:
    if (ctx->pc == 0x162684u) {
        ctx->pc = 0x162684u;
            // 0x162684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x162688u;
        goto label_fallthrough_0x162680;
    }
    ctx->pc = 0x162680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162680u;
            // 0x162684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162680:
    ctx->pc = 0x162688u;
}
