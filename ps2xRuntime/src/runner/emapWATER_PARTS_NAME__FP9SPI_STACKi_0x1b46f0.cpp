#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapWATER_PARTS_NAME__FP9SPI_STACKi
// Address: 0x1b46f0 - 0x1b480c
void emapWATER_PARTS_NAME__FP9SPI_STACKi_0x1b46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapWATER_PARTS_NAME__FP9SPI_STACKi_0x1b46f0");
#endif

    switch (ctx->pc) {
        case 0x1b46f0u: goto label_1b46f0;
        case 0x1b46f4u: goto label_1b46f4;
        case 0x1b46f8u: goto label_1b46f8;
        case 0x1b46fcu: goto label_1b46fc;
        case 0x1b4700u: goto label_1b4700;
        case 0x1b4704u: goto label_1b4704;
        case 0x1b4708u: goto label_1b4708;
        case 0x1b470cu: goto label_1b470c;
        case 0x1b4710u: goto label_1b4710;
        case 0x1b4714u: goto label_1b4714;
        case 0x1b4718u: goto label_1b4718;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4720u: goto label_1b4720;
        case 0x1b4724u: goto label_1b4724;
        case 0x1b4728u: goto label_1b4728;
        case 0x1b472cu: goto label_1b472c;
        case 0x1b4730u: goto label_1b4730;
        case 0x1b4734u: goto label_1b4734;
        case 0x1b4738u: goto label_1b4738;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4740u: goto label_1b4740;
        case 0x1b4744u: goto label_1b4744;
        case 0x1b4748u: goto label_1b4748;
        case 0x1b474cu: goto label_1b474c;
        case 0x1b4750u: goto label_1b4750;
        case 0x1b4754u: goto label_1b4754;
        case 0x1b4758u: goto label_1b4758;
        case 0x1b475cu: goto label_1b475c;
        case 0x1b4760u: goto label_1b4760;
        case 0x1b4764u: goto label_1b4764;
        case 0x1b4768u: goto label_1b4768;
        case 0x1b476cu: goto label_1b476c;
        case 0x1b4770u: goto label_1b4770;
        case 0x1b4774u: goto label_1b4774;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b477cu: goto label_1b477c;
        case 0x1b4780u: goto label_1b4780;
        case 0x1b4784u: goto label_1b4784;
        case 0x1b4788u: goto label_1b4788;
        case 0x1b478cu: goto label_1b478c;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b4794u: goto label_1b4794;
        case 0x1b4798u: goto label_1b4798;
        case 0x1b479cu: goto label_1b479c;
        case 0x1b47a0u: goto label_1b47a0;
        case 0x1b47a4u: goto label_1b47a4;
        case 0x1b47a8u: goto label_1b47a8;
        case 0x1b47acu: goto label_1b47ac;
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b4u: goto label_1b47b4;
        case 0x1b47b8u: goto label_1b47b8;
        case 0x1b47bcu: goto label_1b47bc;
        case 0x1b47c0u: goto label_1b47c0;
        case 0x1b47c4u: goto label_1b47c4;
        case 0x1b47c8u: goto label_1b47c8;
        case 0x1b47ccu: goto label_1b47cc;
        case 0x1b47d0u: goto label_1b47d0;
        case 0x1b47d4u: goto label_1b47d4;
        case 0x1b47d8u: goto label_1b47d8;
        case 0x1b47dcu: goto label_1b47dc;
        case 0x1b47e0u: goto label_1b47e0;
        case 0x1b47e4u: goto label_1b47e4;
        case 0x1b47e8u: goto label_1b47e8;
        case 0x1b47ecu: goto label_1b47ec;
        case 0x1b47f0u: goto label_1b47f0;
        case 0x1b47f4u: goto label_1b47f4;
        case 0x1b47f8u: goto label_1b47f8;
        case 0x1b47fcu: goto label_1b47fc;
        case 0x1b4800u: goto label_1b4800;
        case 0x1b4804u: goto label_1b4804;
        case 0x1b4808u: goto label_1b4808;
        default: break;
    }

    ctx->pc = 0x1b46f0u;

label_1b46f0:
    // 0x1b46f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b46f4:
    // 0x1b46f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b46f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b46f8:
    // 0x1b46f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b46fc:
    // 0x1b46fc: 0xc05191c  jal         func_146470
label_1b4700:
    if (ctx->pc == 0x1B4700u) {
        ctx->pc = 0x1B4700u;
            // 0x1b4700: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B4704u;
        goto label_1b4704;
    }
    ctx->pc = 0x1B46FCu;
    SET_GPR_U32(ctx, 31, 0x1B4704u);
    ctx->pc = 0x1B4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46FCu;
            // 0x1b4700: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4704u; }
        if (ctx->pc != 0x1B4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4704u; }
        if (ctx->pc != 0x1B4704u) { return; }
    }
    ctx->pc = 0x1B4704u;
label_1b4704:
    // 0x1b4704: 0x8f848d18  lw          $a0, -0x72E8($gp)
    ctx->pc = 0x1b4704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4708:
    // 0x1b4708: 0xc05732c  jal         func_15CCB0
label_1b470c:
    if (ctx->pc == 0x1B470Cu) {
        ctx->pc = 0x1B470Cu;
            // 0x1b470c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4710u;
        goto label_1b4710;
    }
    ctx->pc = 0x1B4708u;
    SET_GPR_U32(ctx, 31, 0x1B4710u);
    ctx->pc = 0x1B470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4708u;
            // 0x1b470c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CCB0u;
    if (runtime->hasFunction(0x15CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4710u; }
        if (ctx->pc != 0x1B4710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMDS__4CMapFPc_0x15ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4710u; }
        if (ctx->pc != 0x1B4710u) { return; }
    }
    ctx->pc = 0x1B4710u;
label_1b4710:
    // 0x1b4710: 0x8f848d20  lw          $a0, -0x72E0($gp)
    ctx->pc = 0x1b4710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1b4714:
    // 0x1b4714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4718:
    // 0x1b4718: 0xc04e748  jal         func_139D20
label_1b471c:
    if (ctx->pc == 0x1B471Cu) {
        ctx->pc = 0x1B471Cu;
            // 0x1b471c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1B4720u;
        goto label_1b4720;
    }
    ctx->pc = 0x1B4718u;
    SET_GPR_U32(ctx, 31, 0x1B4720u);
    ctx->pc = 0x1B471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4718u;
            // 0x1b471c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4720u; }
        if (ctx->pc != 0x1B4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4720u; }
        if (ctx->pc != 0x1B4720u) { return; }
    }
    ctx->pc = 0x1B4720u;
label_1b4720:
    // 0x1b4720: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1b4720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1b4724:
    // 0x1b4724: 0xc04e638  jal         func_1398E0
label_1b4728:
    if (ctx->pc == 0x1B4728u) {
        ctx->pc = 0x1B4728u;
            // 0x1b4728: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B472Cu;
        goto label_1b472c;
    }
    ctx->pc = 0x1B4724u;
    SET_GPR_U32(ctx, 31, 0x1B472Cu);
    ctx->pc = 0x1B4728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4724u;
            // 0x1b4728: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B472Cu; }
        if (ctx->pc != 0x1B472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B472Cu; }
        if (ctx->pc != 0x1B472Cu) { return; }
    }
    ctx->pc = 0x1B472Cu;
label_1b472c:
    // 0x1b472c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b4730:
    if (ctx->pc == 0x1B4730u) {
        ctx->pc = 0x1B4730u;
            // 0x1b4730: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4734u;
        goto label_1b4734;
    }
    ctx->pc = 0x1B472Cu;
    {
        const bool branch_taken_0x1b472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B472Cu;
            // 0x1b4730: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b472c) {
            ctx->pc = 0x1B47A4u;
            goto label_1b47a4;
        }
    }
    ctx->pc = 0x1B4734u;
label_1b4734:
    // 0x1b4734: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b4738:
    // 0x1b4738: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1b4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1b473c:
    // 0x1b473c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b4740:
    // 0x1b4740: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b4740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4744:
    // 0x1b4744: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4748:
    // 0x1b4748: 0x320f809  jalr        $t9
label_1b474c:
    if (ctx->pc == 0x1B474Cu) {
        ctx->pc = 0x1B474Cu;
            // 0x1b474c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4750u;
        goto label_1b4750;
    }
    ctx->pc = 0x1B4748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4750u);
        ctx->pc = 0x1B474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4748u;
            // 0x1b474c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4750u; }
            if (ctx->pc != 0x1B4750u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4750u;
label_1b4750:
    // 0x1b4750: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b4754:
    // 0x1b4754: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1b4754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1b4758:
    // 0x1b4758: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b4758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b475c:
    // 0x1b475c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b475cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4760:
    // 0x1b4760: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4764:
    // 0x1b4764: 0x320f809  jalr        $t9
label_1b4768:
    if (ctx->pc == 0x1B4768u) {
        ctx->pc = 0x1B4768u;
            // 0x1b4768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B476Cu;
        goto label_1b476c;
    }
    ctx->pc = 0x1B4764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B476Cu);
        ctx->pc = 0x1B4768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4764u;
            // 0x1b4768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B476Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B476Cu; }
            if (ctx->pc != 0x1B476Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B476Cu;
label_1b476c:
    // 0x1b476c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b4770:
    // 0x1b4770: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1b4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1b4774:
    // 0x1b4774: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b4774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b4778:
    // 0x1b4778: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b477c:
    // 0x1b477c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b477cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4780:
    // 0x1b4780: 0x320f809  jalr        $t9
label_1b4784:
    if (ctx->pc == 0x1B4784u) {
        ctx->pc = 0x1B4784u;
            // 0x1b4784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4788u;
        goto label_1b4788;
    }
    ctx->pc = 0x1B4780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4788u);
        ctx->pc = 0x1B4784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4780u;
            // 0x1b4784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4788u; }
            if (ctx->pc != 0x1B4788u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4788u;
label_1b4788:
    // 0x1b4788: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b478c:
    // 0x1b478c: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x1b478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
label_1b4790:
    // 0x1b4790: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b4790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b4794:
    // 0x1b4794: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b4794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4798:
    // 0x1b4798: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b479c:
    // 0x1b479c: 0x320f809  jalr        $t9
label_1b47a0:
    if (ctx->pc == 0x1B47A0u) {
        ctx->pc = 0x1B47A0u;
            // 0x1b47a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B47A4u;
        goto label_1b47a4;
    }
    ctx->pc = 0x1B479Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B47A4u);
        ctx->pc = 0x1B47A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B479Cu;
            // 0x1b47a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B47A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B47A4u; }
            if (ctx->pc != 0x1B47A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B47A4u;
label_1b47a4:
    // 0x1b47a4: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b47a8:
    // 0x1b47a8: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_1b47ac:
    if (ctx->pc == 0x1B47ACu) {
        ctx->pc = 0x1B47ACu;
            // 0x1b47ac: 0xac510ff0  sw          $s1, 0xFF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4080), GPR_U32(ctx, 17));
        ctx->pc = 0x1B47B0u;
        goto label_1b47b0;
    }
    ctx->pc = 0x1B47A8u;
    {
        const bool branch_taken_0x1b47a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47A8u;
            // 0x1b47ac: 0xac510ff0  sw          $s1, 0xFF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4080), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a8) {
            ctx->pc = 0x1B47F4u;
            goto label_1b47f4;
        }
    }
    ctx->pc = 0x1B47B0u;
label_1b47b0:
    // 0x1b47b0: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b47b4:
    // 0x1b47b4: 0x8c440ff0  lw          $a0, 0xFF0($v0)
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4080)));
label_1b47b8:
    // 0x1b47b8: 0xc05a148  jal         func_168520
label_1b47bc:
    if (ctx->pc == 0x1B47BCu) {
        ctx->pc = 0x1B47BCu;
            // 0x1b47bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B47C0u;
        goto label_1b47c0;
    }
    ctx->pc = 0x1B47B8u;
    SET_GPR_U32(ctx, 31, 0x1B47C0u);
    ctx->pc = 0x1B47BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47B8u;
            // 0x1b47bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C0u; }
        if (ctx->pc != 0x1B47C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMds__9CMapPieceFP8CMdsInfo_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C0u; }
        if (ctx->pc != 0x1B47C0u) { return; }
    }
    ctx->pc = 0x1B47C0u;
label_1b47c0:
    // 0x1b47c0: 0xc04d6d8  jal         func_135B60
label_1b47c4:
    if (ctx->pc == 0x1B47C4u) {
        ctx->pc = 0x1B47C4u;
            // 0x1b47c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B47C8u;
        goto label_1b47c8;
    }
    ctx->pc = 0x1B47C0u;
    SET_GPR_U32(ctx, 31, 0x1B47C8u);
    ctx->pc = 0x1B47C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47C0u;
            // 0x1b47c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C8u; }
        if (ctx->pc != 0x1B47C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C8u; }
        if (ctx->pc != 0x1B47C8u) { return; }
    }
    ctx->pc = 0x1B47C8u;
label_1b47c8:
    // 0x1b47c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b47cc:
    // 0x1b47cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b47ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b47d0:
    // 0x1b47d0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1b47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1b47d4:
    // 0x1b47d4: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b47d8:
    // 0x1b47d8: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1b47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_1b47dc:
    // 0x1b47dc: 0x8c420ff0  lw          $v0, 0xFF0($v0)
    ctx->pc = 0x1b47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4080)));
label_1b47e0:
    // 0x1b47e0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1b47e4:
    // 0x1b47e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b47e8:
    if (ctx->pc == 0x1B47E8u) {
        ctx->pc = 0x1B47E8u;
            // 0x1b47e8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B47ECu;
        goto label_1b47ec;
    }
    ctx->pc = 0x1B47E4u;
    {
        const bool branch_taken_0x1b47e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47E4u;
            // 0x1b47e8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47e4) {
            ctx->pc = 0x1B47F4u;
            goto label_1b47f4;
        }
    }
    ctx->pc = 0x1B47ECu;
label_1b47ec:
    // 0x1b47ec: 0xc04de54  jal         func_137950
label_1b47f0:
    if (ctx->pc == 0x1B47F0u) {
        ctx->pc = 0x1B47F0u;
            // 0x1b47f0: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1B47F4u;
        goto label_1b47f4;
    }
    ctx->pc = 0x1B47ECu;
    SET_GPR_U32(ctx, 31, 0x1B47F4u);
    ctx->pc = 0x1B47F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47ECu;
            // 0x1b47f0: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47F4u; }
        if (ctx->pc != 0x1B47F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47F4u; }
        if (ctx->pc != 0x1B47F4u) { return; }
    }
    ctx->pc = 0x1B47F4u;
label_1b47f4:
    // 0x1b47f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b47f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b47f8:
    // 0x1b47f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b47fc:
    // 0x1b47fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b47fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4800:
    // 0x1b4800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4804:
    // 0x1b4804: 0x3e00008  jr          $ra
label_1b4808:
    if (ctx->pc == 0x1B4808u) {
        ctx->pc = 0x1B4808u;
            // 0x1b4808: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1B480Cu;
        goto label_fallthrough_0x1b4804;
    }
    ctx->pc = 0x1B4804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4804u;
            // 0x1b4808: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b4804:
    ctx->pc = 0x1B480Cu;
}
