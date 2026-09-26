#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CEditPartsInfoFv
// Address: 0x1b5550 - 0x1b5630
void Initialize__14CEditPartsInfoFv_0x1b5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CEditPartsInfoFv_0x1b5550");
#endif

    switch (ctx->pc) {
        case 0x1b5550u: goto label_1b5550;
        case 0x1b5554u: goto label_1b5554;
        case 0x1b5558u: goto label_1b5558;
        case 0x1b555cu: goto label_1b555c;
        case 0x1b5560u: goto label_1b5560;
        case 0x1b5564u: goto label_1b5564;
        case 0x1b5568u: goto label_1b5568;
        case 0x1b556cu: goto label_1b556c;
        case 0x1b5570u: goto label_1b5570;
        case 0x1b5574u: goto label_1b5574;
        case 0x1b5578u: goto label_1b5578;
        case 0x1b557cu: goto label_1b557c;
        case 0x1b5580u: goto label_1b5580;
        case 0x1b5584u: goto label_1b5584;
        case 0x1b5588u: goto label_1b5588;
        case 0x1b558cu: goto label_1b558c;
        case 0x1b5590u: goto label_1b5590;
        case 0x1b5594u: goto label_1b5594;
        case 0x1b5598u: goto label_1b5598;
        case 0x1b559cu: goto label_1b559c;
        case 0x1b55a0u: goto label_1b55a0;
        case 0x1b55a4u: goto label_1b55a4;
        case 0x1b55a8u: goto label_1b55a8;
        case 0x1b55acu: goto label_1b55ac;
        case 0x1b55b0u: goto label_1b55b0;
        case 0x1b55b4u: goto label_1b55b4;
        case 0x1b55b8u: goto label_1b55b8;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55c0u: goto label_1b55c0;
        case 0x1b55c4u: goto label_1b55c4;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d0u: goto label_1b55d0;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55d8u: goto label_1b55d8;
        case 0x1b55dcu: goto label_1b55dc;
        case 0x1b55e0u: goto label_1b55e0;
        case 0x1b55e4u: goto label_1b55e4;
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55ecu: goto label_1b55ec;
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b55f4u: goto label_1b55f4;
        case 0x1b55f8u: goto label_1b55f8;
        case 0x1b55fcu: goto label_1b55fc;
        case 0x1b5600u: goto label_1b5600;
        case 0x1b5604u: goto label_1b5604;
        case 0x1b5608u: goto label_1b5608;
        case 0x1b560cu: goto label_1b560c;
        case 0x1b5610u: goto label_1b5610;
        case 0x1b5614u: goto label_1b5614;
        case 0x1b5618u: goto label_1b5618;
        case 0x1b561cu: goto label_1b561c;
        case 0x1b5620u: goto label_1b5620;
        case 0x1b5624u: goto label_1b5624;
        case 0x1b5628u: goto label_1b5628;
        case 0x1b562cu: goto label_1b562c;
        default: break;
    }

    ctx->pc = 0x1b5550u;

label_1b5550:
    // 0x1b5550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5554:
    // 0x1b5554: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x1b5554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
label_1b5558:
    // 0x1b5558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b555c:
    // 0x1b555c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5560:
    // 0x1b5560: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b5560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b5564:
    // 0x1b5564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5568:
    // 0x1b5568: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b5568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1b556c:
    // 0x1b556c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1b556cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_1b5570:
    // 0x1b5570: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1b5570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_1b5574:
    // 0x1b5574: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1b5574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_1b5578:
    // 0x1b5578: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1b5578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_1b557c:
    // 0x1b557c: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1b557cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_1b5580:
    // 0x1b5580: 0xac800250  sw          $zero, 0x250($a0)
    ctx->pc = 0x1b5580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
label_1b5584:
    // 0x1b5584: 0x8e1900f0  lw          $t9, 0xF0($s0)
    ctx->pc = 0x1b5584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b5588:
    // 0x1b5588: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1b5588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1b558c:
    // 0x1b558c: 0x320f809  jalr        $t9
label_1b5590:
    if (ctx->pc == 0x1B5590u) {
        ctx->pc = 0x1B5590u;
            // 0x1b5590: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x1B5594u;
        goto label_1b5594;
    }
    ctx->pc = 0x1B558Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5594u);
        ctx->pc = 0x1B5590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B558Cu;
            // 0x1b5590: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5594u; }
            if (ctx->pc != 0x1B5594u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5594u;
label_1b5594:
    // 0x1b5594: 0x8e190140  lw          $t9, 0x140($s0)
    ctx->pc = 0x1b5594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_1b5598:
    // 0x1b5598: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1b559c:
    // 0x1b559c: 0x320f809  jalr        $t9
label_1b55a0:
    if (ctx->pc == 0x1B55A0u) {
        ctx->pc = 0x1B55A0u;
            // 0x1b55a0: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x1B55A4u;
        goto label_1b55a4;
    }
    ctx->pc = 0x1B559Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B55A4u);
        ctx->pc = 0x1B55A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B559Cu;
            // 0x1b55a0: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B55A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B55A4u; }
            if (ctx->pc != 0x1B55A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B55A4u;
label_1b55a4:
    // 0x1b55a4: 0x8e190190  lw          $t9, 0x190($s0)
    ctx->pc = 0x1b55a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_1b55a8:
    // 0x1b55a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1b55ac:
    // 0x1b55ac: 0x320f809  jalr        $t9
label_1b55b0:
    if (ctx->pc == 0x1B55B0u) {
        ctx->pc = 0x1B55B0u;
            // 0x1b55b0: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->pc = 0x1B55B4u;
        goto label_1b55b4;
    }
    ctx->pc = 0x1B55ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B55B4u);
        ctx->pc = 0x1B55B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55ACu;
            // 0x1b55b0: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B55B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B55B4u; }
            if (ctx->pc != 0x1B55B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B55B4u;
label_1b55b4:
    // 0x1b55b4: 0x8e1901e0  lw          $t9, 0x1E0($s0)
    ctx->pc = 0x1b55b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_1b55b8:
    // 0x1b55b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1b55b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1b55bc:
    // 0x1b55bc: 0x320f809  jalr        $t9
label_1b55c0:
    if (ctx->pc == 0x1B55C0u) {
        ctx->pc = 0x1B55C0u;
            // 0x1b55c0: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->pc = 0x1B55C4u;
        goto label_1b55c4;
    }
    ctx->pc = 0x1B55BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B55C4u);
        ctx->pc = 0x1B55C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B55BCu;
            // 0x1b55c0: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B55C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B55C4u; }
            if (ctx->pc != 0x1B55C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B55C4u;
label_1b55c4:
    // 0x1b55c4: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x1b55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
label_1b55c8:
    // 0x1b55c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b55cc:
    // 0x1b55cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1b55d0:
    // 0x1b55d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1b55d4:
    // 0x1b55d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1b55d8:
    // 0x1b55d8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1b55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1b55dc:
    // 0x1b55dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b55e0:
    // 0x1b55e0: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1b55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_1b55e4:
    // 0x1b55e4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1b55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_1b55e8:
    // 0x1b55e8: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1b55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_1b55ec:
    // 0x1b55ec: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1b55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_1b55f0:
    // 0x1b55f0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1b55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_1b55f4:
    // 0x1b55f4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1b55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_1b55f8:
    // 0x1b55f8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1b55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1b55fc:
    // 0x1b55fc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1b55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1b5600:
    // 0x1b5600: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b5600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1b5604:
    // 0x1b5604: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b5604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1b5608:
    // 0x1b5608: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b5608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b560c:
    // 0x1b560c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1b560cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1b5610:
    // 0x1b5610: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1b5610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1b5614:
    // 0x1b5614: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1b5614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1b5618:
    // 0x1b5618: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1b5618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1b561c:
    // 0x1b561c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1b561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1b5620:
    // 0x1b5620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5624:
    // 0x1b5624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5628:
    // 0x1b5628: 0x3e00008  jr          $ra
label_1b562c:
    if (ctx->pc == 0x1B562Cu) {
        ctx->pc = 0x1B562Cu;
            // 0x1b562c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B5630u;
        goto label_fallthrough_0x1b5628;
    }
    ctx->pc = 0x1B5628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5628u;
            // 0x1b562c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b5628:
    ctx->pc = 0x1B5630u;
}
