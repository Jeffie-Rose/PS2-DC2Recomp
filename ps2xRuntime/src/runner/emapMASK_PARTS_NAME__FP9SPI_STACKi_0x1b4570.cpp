#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapMASK_PARTS_NAME__FP9SPI_STACKi
// Address: 0x1b4570 - 0x1b46e4
void emapMASK_PARTS_NAME__FP9SPI_STACKi_0x1b4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapMASK_PARTS_NAME__FP9SPI_STACKi_0x1b4570");
#endif

    switch (ctx->pc) {
        case 0x1b4570u: goto label_1b4570;
        case 0x1b4574u: goto label_1b4574;
        case 0x1b4578u: goto label_1b4578;
        case 0x1b457cu: goto label_1b457c;
        case 0x1b4580u: goto label_1b4580;
        case 0x1b4584u: goto label_1b4584;
        case 0x1b4588u: goto label_1b4588;
        case 0x1b458cu: goto label_1b458c;
        case 0x1b4590u: goto label_1b4590;
        case 0x1b4594u: goto label_1b4594;
        case 0x1b4598u: goto label_1b4598;
        case 0x1b459cu: goto label_1b459c;
        case 0x1b45a0u: goto label_1b45a0;
        case 0x1b45a4u: goto label_1b45a4;
        case 0x1b45a8u: goto label_1b45a8;
        case 0x1b45acu: goto label_1b45ac;
        case 0x1b45b0u: goto label_1b45b0;
        case 0x1b45b4u: goto label_1b45b4;
        case 0x1b45b8u: goto label_1b45b8;
        case 0x1b45bcu: goto label_1b45bc;
        case 0x1b45c0u: goto label_1b45c0;
        case 0x1b45c4u: goto label_1b45c4;
        case 0x1b45c8u: goto label_1b45c8;
        case 0x1b45ccu: goto label_1b45cc;
        case 0x1b45d0u: goto label_1b45d0;
        case 0x1b45d4u: goto label_1b45d4;
        case 0x1b45d8u: goto label_1b45d8;
        case 0x1b45dcu: goto label_1b45dc;
        case 0x1b45e0u: goto label_1b45e0;
        case 0x1b45e4u: goto label_1b45e4;
        case 0x1b45e8u: goto label_1b45e8;
        case 0x1b45ecu: goto label_1b45ec;
        case 0x1b45f0u: goto label_1b45f0;
        case 0x1b45f4u: goto label_1b45f4;
        case 0x1b45f8u: goto label_1b45f8;
        case 0x1b45fcu: goto label_1b45fc;
        case 0x1b4600u: goto label_1b4600;
        case 0x1b4604u: goto label_1b4604;
        case 0x1b4608u: goto label_1b4608;
        case 0x1b460cu: goto label_1b460c;
        case 0x1b4610u: goto label_1b4610;
        case 0x1b4614u: goto label_1b4614;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b461cu: goto label_1b461c;
        case 0x1b4620u: goto label_1b4620;
        case 0x1b4624u: goto label_1b4624;
        case 0x1b4628u: goto label_1b4628;
        case 0x1b462cu: goto label_1b462c;
        case 0x1b4630u: goto label_1b4630;
        case 0x1b4634u: goto label_1b4634;
        case 0x1b4638u: goto label_1b4638;
        case 0x1b463cu: goto label_1b463c;
        case 0x1b4640u: goto label_1b4640;
        case 0x1b4644u: goto label_1b4644;
        case 0x1b4648u: goto label_1b4648;
        case 0x1b464cu: goto label_1b464c;
        case 0x1b4650u: goto label_1b4650;
        case 0x1b4654u: goto label_1b4654;
        case 0x1b4658u: goto label_1b4658;
        case 0x1b465cu: goto label_1b465c;
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4664u: goto label_1b4664;
        case 0x1b4668u: goto label_1b4668;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b4670u: goto label_1b4670;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4678u: goto label_1b4678;
        case 0x1b467cu: goto label_1b467c;
        case 0x1b4680u: goto label_1b4680;
        case 0x1b4684u: goto label_1b4684;
        case 0x1b4688u: goto label_1b4688;
        case 0x1b468cu: goto label_1b468c;
        case 0x1b4690u: goto label_1b4690;
        case 0x1b4694u: goto label_1b4694;
        case 0x1b4698u: goto label_1b4698;
        case 0x1b469cu: goto label_1b469c;
        case 0x1b46a0u: goto label_1b46a0;
        case 0x1b46a4u: goto label_1b46a4;
        case 0x1b46a8u: goto label_1b46a8;
        case 0x1b46acu: goto label_1b46ac;
        case 0x1b46b0u: goto label_1b46b0;
        case 0x1b46b4u: goto label_1b46b4;
        case 0x1b46b8u: goto label_1b46b8;
        case 0x1b46bcu: goto label_1b46bc;
        case 0x1b46c0u: goto label_1b46c0;
        case 0x1b46c4u: goto label_1b46c4;
        case 0x1b46c8u: goto label_1b46c8;
        case 0x1b46ccu: goto label_1b46cc;
        case 0x1b46d0u: goto label_1b46d0;
        case 0x1b46d4u: goto label_1b46d4;
        case 0x1b46d8u: goto label_1b46d8;
        case 0x1b46dcu: goto label_1b46dc;
        case 0x1b46e0u: goto label_1b46e0;
        default: break;
    }

    ctx->pc = 0x1b4570u;

label_1b4570:
    // 0x1b4570: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b4570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1b4574:
    // 0x1b4574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b4574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b4578:
    // 0x1b4578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b457c:
    // 0x1b457c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b4580:
    // 0x1b4580: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1b4584:
    // 0x1b4584: 0xc0518f8  jal         func_1463E0
label_1b4588:
    if (ctx->pc == 0x1B4588u) {
        ctx->pc = 0x1B4588u;
            // 0x1b4588: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B458Cu;
        goto label_1b458c;
    }
    ctx->pc = 0x1B4584u;
    SET_GPR_U32(ctx, 31, 0x1B458Cu);
    ctx->pc = 0x1B4588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4584u;
            // 0x1b4588: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B458Cu; }
        if (ctx->pc != 0x1B458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B458Cu; }
        if (ctx->pc != 0x1B458Cu) { return; }
    }
    ctx->pc = 0x1B458Cu;
label_1b458c:
    // 0x1b458c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b458cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4590:
    // 0x1b4590: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
label_1b4594:
    if (ctx->pc == 0x1B4594u) {
        ctx->pc = 0x1B4594u;
            // 0x1b4594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4598u;
        goto label_1b4598;
    }
    ctx->pc = 0x1B4590u;
    {
        const bool branch_taken_0x1b4590 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B4594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4590u;
            // 0x1b4594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4590) {
            ctx->pc = 0x1B45A0u;
            goto label_1b45a0;
        }
    }
    ctx->pc = 0x1B4598u;
label_1b4598:
    // 0x1b4598: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
label_1b459c:
    if (ctx->pc == 0x1B459Cu) {
        ctx->pc = 0x1B459Cu;
            // 0x1b459c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B45A0u;
        goto label_1b45a0;
    }
    ctx->pc = 0x1B4598u;
    {
        const bool branch_taken_0x1b4598 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4598u;
            // 0x1b459c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4598) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B45A0u;
label_1b45a0:
    // 0x1b45a0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1b45a4:
    if (ctx->pc == 0x1B45A4u) {
        ctx->pc = 0x1B45A4u;
            // 0x1b45a4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1B45A8u;
        goto label_1b45a8;
    }
    ctx->pc = 0x1B45A0u;
    {
        const bool branch_taken_0x1b45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B45A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45A0u;
            // 0x1b45a4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45a0) {
            ctx->pc = 0x1B46D0u;
            goto label_1b46d0;
        }
    }
    ctx->pc = 0x1B45A8u;
label_1b45a8:
    // 0x1b45a8: 0xc05191c  jal         func_146470
label_1b45ac:
    if (ctx->pc == 0x1B45ACu) {
        ctx->pc = 0x1B45B0u;
        goto label_1b45b0;
    }
    ctx->pc = 0x1B45A8u;
    SET_GPR_U32(ctx, 31, 0x1B45B0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45B0u; }
        if (ctx->pc != 0x1B45B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45B0u; }
        if (ctx->pc != 0x1B45B0u) { return; }
    }
    ctx->pc = 0x1B45B0u;
label_1b45b0:
    // 0x1b45b0: 0x8f848d20  lw          $a0, -0x72E0($gp)
    ctx->pc = 0x1b45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1b45b4:
    // 0x1b45b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b45b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b45b8:
    // 0x1b45b8: 0xc04e748  jal         func_139D20
label_1b45bc:
    if (ctx->pc == 0x1B45BCu) {
        ctx->pc = 0x1B45BCu;
            // 0x1b45bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1B45C0u;
        goto label_1b45c0;
    }
    ctx->pc = 0x1B45B8u;
    SET_GPR_U32(ctx, 31, 0x1B45C0u);
    ctx->pc = 0x1B45BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45B8u;
            // 0x1b45bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45C0u; }
        if (ctx->pc != 0x1B45C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45C0u; }
        if (ctx->pc != 0x1B45C0u) { return; }
    }
    ctx->pc = 0x1B45C0u;
label_1b45c0:
    // 0x1b45c0: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1b45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1b45c4:
    // 0x1b45c4: 0xc04e638  jal         func_1398E0
label_1b45c8:
    if (ctx->pc == 0x1B45C8u) {
        ctx->pc = 0x1B45C8u;
            // 0x1b45c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B45CCu;
        goto label_1b45cc;
    }
    ctx->pc = 0x1B45C4u;
    SET_GPR_U32(ctx, 31, 0x1B45CCu);
    ctx->pc = 0x1B45C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45C4u;
            // 0x1b45c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45CCu; }
        if (ctx->pc != 0x1B45CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B45CCu; }
        if (ctx->pc != 0x1B45CCu) { return; }
    }
    ctx->pc = 0x1B45CCu;
label_1b45cc:
    // 0x1b45cc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b45d0:
    if (ctx->pc == 0x1B45D0u) {
        ctx->pc = 0x1B45D0u;
            // 0x1b45d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B45D4u;
        goto label_1b45d4;
    }
    ctx->pc = 0x1B45CCu;
    {
        const bool branch_taken_0x1b45cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B45D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45CCu;
            // 0x1b45d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45cc) {
            ctx->pc = 0x1B4644u;
            goto label_1b4644;
        }
    }
    ctx->pc = 0x1B45D4u;
label_1b45d4:
    // 0x1b45d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b45d8:
    // 0x1b45d8: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1b45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1b45dc:
    // 0x1b45dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b45e0:
    // 0x1b45e0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b45e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b45e4:
    // 0x1b45e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b45e8:
    // 0x1b45e8: 0x320f809  jalr        $t9
label_1b45ec:
    if (ctx->pc == 0x1B45ECu) {
        ctx->pc = 0x1B45ECu;
            // 0x1b45ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B45F0u;
        goto label_1b45f0;
    }
    ctx->pc = 0x1B45E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B45F0u);
        ctx->pc = 0x1B45ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45E8u;
            // 0x1b45ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B45F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B45F0u; }
            if (ctx->pc != 0x1B45F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B45F0u;
label_1b45f0:
    // 0x1b45f0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b45f4:
    // 0x1b45f4: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1b45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1b45f8:
    // 0x1b45f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b45fc:
    // 0x1b45fc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b45fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b4600:
    // 0x1b4600: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4604:
    // 0x1b4604: 0x320f809  jalr        $t9
label_1b4608:
    if (ctx->pc == 0x1B4608u) {
        ctx->pc = 0x1B4608u;
            // 0x1b4608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B460Cu;
        goto label_1b460c;
    }
    ctx->pc = 0x1B4604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B460Cu);
        ctx->pc = 0x1B4608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4604u;
            // 0x1b4608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B460Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B460Cu; }
            if (ctx->pc != 0x1B460Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B460Cu;
label_1b460c:
    // 0x1b460c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b4610:
    // 0x1b4610: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1b4610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1b4614:
    // 0x1b4614: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b4614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b4618:
    // 0x1b4618: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b461c:
    // 0x1b461c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b461cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4620:
    // 0x1b4620: 0x320f809  jalr        $t9
label_1b4624:
    if (ctx->pc == 0x1B4624u) {
        ctx->pc = 0x1B4624u;
            // 0x1b4624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4628u;
        goto label_1b4628;
    }
    ctx->pc = 0x1B4620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4628u);
        ctx->pc = 0x1B4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4620u;
            // 0x1b4624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4628u; }
            if (ctx->pc != 0x1B4628u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4628u;
label_1b4628:
    // 0x1b4628: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b462c:
    // 0x1b462c: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
label_1b4630:
    // 0x1b4630: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b4630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b4634:
    // 0x1b4634: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b4634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b4638:
    // 0x1b4638: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b463c:
    // 0x1b463c: 0x320f809  jalr        $t9
label_1b4640:
    if (ctx->pc == 0x1B4640u) {
        ctx->pc = 0x1B4640u;
            // 0x1b4640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4644u;
        goto label_1b4644;
    }
    ctx->pc = 0x1B463Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4644u);
        ctx->pc = 0x1B4640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B463Cu;
            // 0x1b4640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4644u; }
            if (ctx->pc != 0x1B4644u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4644u;
label_1b4644:
    // 0x1b4644: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4648:
    // 0x1b4648: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b464c:
    // 0x1b464c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b4650:
    // 0x1b4650: 0xac520ff4  sw          $s2, 0xFF4($v0)
    ctx->pc = 0x1b4650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4084), GPR_U32(ctx, 18));
label_1b4654:
    // 0x1b4654: 0x8f848d18  lw          $a0, -0x72E8($gp)
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4658:
    // 0x1b4658: 0xc05732c  jal         func_15CCB0
label_1b465c:
    if (ctx->pc == 0x1B465Cu) {
        ctx->pc = 0x1B465Cu;
            // 0x1b465c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4660u;
        goto label_1b4660;
    }
    ctx->pc = 0x1B4658u;
    SET_GPR_U32(ctx, 31, 0x1B4660u);
    ctx->pc = 0x1B465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4658u;
            // 0x1b465c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CCB0u;
    if (runtime->hasFunction(0x15CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4660u; }
        if (ctx->pc != 0x1B4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMDS__4CMapFPc_0x15ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4660u; }
        if (ctx->pc != 0x1B4660u) { return; }
    }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4664:
    // 0x1b4664: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1b4668:
    if (ctx->pc == 0x1B4668u) {
        ctx->pc = 0x1B4668u;
            // 0x1b4668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B466Cu;
        goto label_1b466c;
    }
    ctx->pc = 0x1B4664u;
    {
        const bool branch_taken_0x1b4664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4664u;
            // 0x1b4668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4664) {
            ctx->pc = 0x1B46CCu;
            goto label_1b46cc;
        }
    }
    ctx->pc = 0x1B466Cu;
label_1b466c:
    // 0x1b466c: 0xc04d6d8  jal         func_135B60
label_1b4670:
    if (ctx->pc == 0x1B4670u) {
        ctx->pc = 0x1B4670u;
            // 0x1b4670: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B4674u;
        goto label_1b4674;
    }
    ctx->pc = 0x1B466Cu;
    SET_GPR_U32(ctx, 31, 0x1B4674u);
    ctx->pc = 0x1B4670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B466Cu;
            // 0x1b4670: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4674u; }
        if (ctx->pc != 0x1B4674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4674u; }
        if (ctx->pc != 0x1B4674u) { return; }
    }
    ctx->pc = 0x1B4674u;
label_1b4674:
    // 0x1b4674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4678:
    // 0x1b4678: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1b4678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1b467c:
    // 0x1b467c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1b467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1b4680:
    // 0x1b4680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b4684:
    // 0x1b4684: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1b4684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1b4688:
    // 0x1b4688: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1b4688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1b468c:
    // 0x1b468c: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4690:
    // 0x1b4690: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b4694:
    // 0x1b4694: 0x8c440ff4  lw          $a0, 0xFF4($v0)
    ctx->pc = 0x1b4694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
label_1b4698:
    // 0x1b4698: 0xc05a148  jal         func_168520
label_1b469c:
    if (ctx->pc == 0x1B469Cu) {
        ctx->pc = 0x1B469Cu;
            // 0x1b469c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B46A0u;
        goto label_1b46a0;
    }
    ctx->pc = 0x1B4698u;
    SET_GPR_U32(ctx, 31, 0x1B46A0u);
    ctx->pc = 0x1B469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4698u;
            // 0x1b469c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46A0u; }
        if (ctx->pc != 0x1B46A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMds__9CMapPieceFP8CMdsInfo_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46A0u; }
        if (ctx->pc != 0x1B46A0u) { return; }
    }
    ctx->pc = 0x1B46A0u;
label_1b46a0:
    // 0x1b46a0: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b46a4:
    // 0x1b46a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b46a8:
    // 0x1b46a8: 0x8c420ff4  lw          $v0, 0xFF4($v0)
    ctx->pc = 0x1b46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
label_1b46ac:
    // 0x1b46ac: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1b46acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1b46b0:
    // 0x1b46b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b46b4:
    if (ctx->pc == 0x1B46B4u) {
        ctx->pc = 0x1B46B4u;
            // 0x1b46b4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1B46B8u;
        goto label_1b46b8;
    }
    ctx->pc = 0x1B46B0u;
    {
        const bool branch_taken_0x1b46b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46B0u;
            // 0x1b46b4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46b0) {
            ctx->pc = 0x1B46C8u;
            goto label_1b46c8;
        }
    }
    ctx->pc = 0x1B46B8u;
label_1b46b8:
    // 0x1b46b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b46b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b46bc:
    // 0x1b46bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b46bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b46c0:
    // 0x1b46c0: 0xc04de54  jal         func_137950
label_1b46c4:
    if (ctx->pc == 0x1B46C4u) {
        ctx->pc = 0x1B46C4u;
            // 0x1b46c4: 0x3447002a  ori         $a3, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->pc = 0x1B46C8u;
        goto label_1b46c8;
    }
    ctx->pc = 0x1B46C0u;
    SET_GPR_U32(ctx, 31, 0x1B46C8u);
    ctx->pc = 0x1B46C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46C0u;
            // 0x1b46c4: 0x3447002a  ori         $a3, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46C8u; }
        if (ctx->pc != 0x1B46C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46C8u; }
        if (ctx->pc != 0x1B46C8u) { return; }
    }
    ctx->pc = 0x1B46C8u;
label_1b46c8:
    // 0x1b46c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b46cc:
    // 0x1b46cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b46ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b46d0:
    // 0x1b46d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b46d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b46d4:
    // 0x1b46d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b46d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b46d8:
    // 0x1b46d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b46d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b46dc:
    // 0x1b46dc: 0x3e00008  jr          $ra
label_1b46e0:
    if (ctx->pc == 0x1B46E0u) {
        ctx->pc = 0x1B46E0u;
            // 0x1b46e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1B46E4u;
        goto label_fallthrough_0x1b46dc;
    }
    ctx->pc = 0x1B46DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46DCu;
            // 0x1b46e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b46dc:
    ctx->pc = 0x1B46E4u;
}
