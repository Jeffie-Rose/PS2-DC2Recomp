#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_POS__FP9SPI_STACKi
// Address: 0x162510 - 0x162588
void mapPIECE_POS__FP9SPI_STACKi_0x162510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_POS__FP9SPI_STACKi_0x162510");
#endif

    switch (ctx->pc) {
        case 0x162510u: goto label_162510;
        case 0x162514u: goto label_162514;
        case 0x162518u: goto label_162518;
        case 0x16251cu: goto label_16251c;
        case 0x162520u: goto label_162520;
        case 0x162524u: goto label_162524;
        case 0x162528u: goto label_162528;
        case 0x16252cu: goto label_16252c;
        case 0x162530u: goto label_162530;
        case 0x162534u: goto label_162534;
        case 0x162538u: goto label_162538;
        case 0x16253cu: goto label_16253c;
        case 0x162540u: goto label_162540;
        case 0x162544u: goto label_162544;
        case 0x162548u: goto label_162548;
        case 0x16254cu: goto label_16254c;
        case 0x162550u: goto label_162550;
        case 0x162554u: goto label_162554;
        case 0x162558u: goto label_162558;
        case 0x16255cu: goto label_16255c;
        case 0x162560u: goto label_162560;
        case 0x162564u: goto label_162564;
        case 0x162568u: goto label_162568;
        case 0x16256cu: goto label_16256c;
        case 0x162570u: goto label_162570;
        case 0x162574u: goto label_162574;
        case 0x162578u: goto label_162578;
        case 0x16257cu: goto label_16257c;
        case 0x162580u: goto label_162580;
        case 0x162584u: goto label_162584;
        default: break;
    }

    ctx->pc = 0x162510u;

label_162510:
    // 0x162510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_162514:
    // 0x162514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162518:
    // 0x162518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16251c:
    // 0x16251c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_162520:
    // 0x162520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162524:
    // 0x162524: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x162524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
label_162528:
    // 0x162528: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_16252c:
    if (ctx->pc == 0x16252Cu) {
        ctx->pc = 0x16252Cu;
            // 0x16252c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162530u;
        goto label_162530;
    }
    ctx->pc = 0x162528u;
    {
        const bool branch_taken_0x162528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162528u;
            // 0x16252c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162528) {
            ctx->pc = 0x162538u;
            goto label_162538;
        }
    }
    ctx->pc = 0x162530u;
label_162530:
    // 0x162530: 0x10000011  b           . + 4 + (0x11 << 2)
label_162534:
    if (ctx->pc == 0x162534u) {
        ctx->pc = 0x162534u;
            // 0x162534: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x162538u;
        goto label_162538;
    }
    ctx->pc = 0x162530u;
    {
        const bool branch_taken_0x162530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162530u;
            // 0x162534: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162530) {
            ctx->pc = 0x162578u;
            goto label_162578;
        }
    }
    ctx->pc = 0x162538u;
label_162538:
    // 0x162538: 0xc0588d8  jal         func_162360
label_16253c:
    if (ctx->pc == 0x16253Cu) {
        ctx->pc = 0x162540u;
        goto label_162540;
    }
    ctx->pc = 0x162538u;
    SET_GPR_U32(ctx, 31, 0x162540u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162540u; }
        if (ctx->pc != 0x162540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162540u; }
        if (ctx->pc != 0x162540u) { return; }
    }
    ctx->pc = 0x162540u;
label_162540:
    // 0x162540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162544:
    // 0x162544: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_162548:
    if (ctx->pc == 0x162548u) {
        ctx->pc = 0x162548u;
            // 0x162548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16254Cu;
        goto label_16254c;
    }
    ctx->pc = 0x162544u;
    {
        const bool branch_taken_0x162544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x162548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162544u;
            // 0x162548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162544) {
            ctx->pc = 0x162554u;
            goto label_162554;
        }
    }
    ctx->pc = 0x16254Cu;
label_16254c:
    // 0x16254c: 0x10000009  b           . + 4 + (0x9 << 2)
label_162550:
    if (ctx->pc == 0x162550u) {
        ctx->pc = 0x162550u;
            // 0x162550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162554u;
        goto label_162554;
    }
    ctx->pc = 0x16254Cu;
    {
        const bool branch_taken_0x16254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16254Cu;
            // 0x162550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16254c) {
            ctx->pc = 0x162574u;
            goto label_162574;
        }
    }
    ctx->pc = 0x162554u;
label_162554:
    // 0x162554: 0xc051928  jal         func_1464A0
label_162558:
    if (ctx->pc == 0x162558u) {
        ctx->pc = 0x162558u;
            // 0x162558: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16255Cu;
        goto label_16255c;
    }
    ctx->pc = 0x162554u;
    SET_GPR_U32(ctx, 31, 0x16255Cu);
    ctx->pc = 0x162558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162554u;
            // 0x162558: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16255Cu; }
        if (ctx->pc != 0x16255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16255Cu; }
        if (ctx->pc != 0x16255Cu) { return; }
    }
    ctx->pc = 0x16255Cu;
label_16255c:
    // 0x16255c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162560:
    // 0x162560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162564:
    // 0x162564: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x162564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_162568:
    // 0x162568: 0x320f809  jalr        $t9
label_16256c:
    if (ctx->pc == 0x16256Cu) {
        ctx->pc = 0x16256Cu;
            // 0x16256c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x162570u;
        goto label_162570;
    }
    ctx->pc = 0x162568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162570u);
        ctx->pc = 0x16256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162568u;
            // 0x16256c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162570u; }
            if (ctx->pc != 0x162570u) { return; }
        }
        }
    }
    ctx->pc = 0x162570u;
label_162570:
    // 0x162570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162574:
    // 0x162574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162578:
    // 0x162578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16257c:
    // 0x16257c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16257cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162580:
    // 0x162580: 0x3e00008  jr          $ra
label_162584:
    if (ctx->pc == 0x162584u) {
        ctx->pc = 0x162584u;
            // 0x162584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x162588u;
        goto label_fallthrough_0x162580;
    }
    ctx->pc = 0x162580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162580u;
            // 0x162584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162580:
    ctx->pc = 0x162588u;
}
