#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PutTreasureBox__19CTreasureBoxManagerFiPffiiiii
// Address: 0x28c550 - 0x28c66c
void PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550");
#endif

    switch (ctx->pc) {
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        default: break;
    }

    ctx->pc = 0x28c550u;

label_28c550:
    // 0x28c550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28c554:
    // 0x28c554: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c558:
    // 0x28c558: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_28c55c:
    // 0x28c55c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28c55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_28c560:
    // 0x28c560: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28c564:
    // 0x28c564: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28c564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28c568:
    // 0x28c568: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28c568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28c56c:
    // 0x28c56c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28c570:
    // 0x28c570: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x28c570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28c574:
    // 0x28c574: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28c578:
    // 0x28c578: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x28c578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28c57c:
    // 0x28c57c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28c580:
    // 0x28c580: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x28c580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_28c584:
    // 0x28c584: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28c584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28c588:
    // 0x28c588: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x28c588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_28c58c:
    // 0x28c58c: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
label_28c590:
    if (ctx->pc == 0x28C590u) {
        ctx->pc = 0x28C590u;
            // 0x28c590: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x28C594u;
        goto label_28c594;
    }
    ctx->pc = 0x28C58Cu;
    {
        const bool branch_taken_0x28c58c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C58Cu;
            // 0x28c590: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c58c) {
            ctx->pc = 0x28C5C4u;
            goto label_28c5c4;
        }
    }
    ctx->pc = 0x28C594u;
label_28c594:
    // 0x28c594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c598:
    // 0x28c598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28c598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c59c:
    // 0x28c59c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x28c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_28c5a0:
    // 0x28c5a0: 0x80630064  lb          $v1, 0x64($v1)
    ctx->pc = 0x28c5a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
label_28c5a4:
    // 0x28c5a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_28c5a8:
    if (ctx->pc == 0x28C5A8u) {
        ctx->pc = 0x28C5ACu;
        goto label_28c5ac;
    }
    ctx->pc = 0x28C5A4u;
    {
        const bool branch_taken_0x28c5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c5a4) {
            ctx->pc = 0x28C5B4u;
            goto label_28c5b4;
        }
    }
    ctx->pc = 0x28C5ACu;
label_28c5ac:
    // 0x28c5ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_28c5b0:
    if (ctx->pc == 0x28C5B0u) {
        ctx->pc = 0x28C5B0u;
            // 0x28c5b0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C5B4u;
        goto label_28c5b4;
    }
    ctx->pc = 0x28C5ACu;
    {
        const bool branch_taken_0x28c5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5ACu;
            // 0x28c5b0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5ac) {
            ctx->pc = 0x28C5C4u;
            goto label_28c5c4;
        }
    }
    ctx->pc = 0x28C5B4u;
label_28c5b4:
    // 0x28c5b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28c5b8:
    // 0x28c5b8: 0x28e30018  slti        $v1, $a3, 0x18
    ctx->pc = 0x28c5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
label_28c5bc:
    // 0x28c5bc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_28c5c0:
    if (ctx->pc == 0x28C5C0u) {
        ctx->pc = 0x28C5C0u;
            // 0x28c5c0: 0x25080070  addiu       $t0, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->pc = 0x28C5C4u;
        goto label_28c5c4;
    }
    ctx->pc = 0x28C5BCu;
    {
        const bool branch_taken_0x28c5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5BCu;
            // 0x28c5c0: 0x25080070  addiu       $t0, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5bc) {
            ctx->pc = 0x28C59Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c59c;
        }
    }
    ctx->pc = 0x28C5C4u;
label_28c5c4:
    // 0x28c5c4: 0x0  nop
    ctx->pc = 0x28c5c4u;
    // NOP
label_28c5c8:
    // 0x28c5c8: 0x4a0001e  bltz        $a1, . + 4 + (0x1E << 2)
label_28c5cc:
    if (ctx->pc == 0x28C5CCu) {
        ctx->pc = 0x28C5D0u;
        goto label_28c5d0;
    }
    ctx->pc = 0x28C5C8u;
    {
        const bool branch_taken_0x28c5c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28c5c8) {
            ctx->pc = 0x28C644u;
            goto label_28c644;
        }
    }
    ctx->pc = 0x28C5D0u;
label_28c5d0:
    // 0x28c5d0: 0x28a30018  slti        $v1, $a1, 0x18
    ctx->pc = 0x28c5d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_28c5d4:
    // 0x28c5d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_28c5d8:
    if (ctx->pc == 0x28C5D8u) {
        ctx->pc = 0x28C5D8u;
            // 0x28c5d8: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x28C5DCu;
        goto label_28c5dc;
    }
    ctx->pc = 0x28C5D4u;
    {
        const bool branch_taken_0x28c5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5D4u;
            // 0x28c5d8: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5d4) {
            ctx->pc = 0x28C5E8u;
            goto label_28c5e8;
        }
    }
    ctx->pc = 0x28C5DCu;
label_28c5dc:
    // 0x28c5dc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28c5e0:
    if (ctx->pc == 0x28C5E0u) {
        ctx->pc = 0x28C5E0u;
            // 0x28c5e0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x28C5E4u;
        goto label_28c5e4;
    }
    ctx->pc = 0x28C5DCu;
    {
        const bool branch_taken_0x28c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5DCu;
            // 0x28c5e0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5dc) {
            ctx->pc = 0x28C648u;
            goto label_28c648;
        }
    }
    ctx->pc = 0x28C5E4u;
label_28c5e4:
    // 0x28c5e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x28c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28c5e8:
    // 0x28c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c5ec:
    // 0x28c5ec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28c5f0:
    // 0x28c5f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28c5f4:
    // 0x28c5f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28c5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28c5f8:
    // 0x28c5f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28c5fc:
    // 0x28c5fc: 0xa0620064  sb          $v0, 0x64($v1)
    ctx->pc = 0x28c5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 2));
label_28c600:
    // 0x28c600: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x28c600u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_28c604:
    // 0x28c604: 0x8c790010  lw          $t9, 0x10($v1)
    ctx->pc = 0x28c604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_28c608:
    // 0x28c608: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28c608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28c60c:
    // 0x28c60c: 0x320f809  jalr        $t9
label_28c610:
    if (ctx->pc == 0x28C610u) {
        ctx->pc = 0x28C610u;
            // 0x28c610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C614u;
        goto label_28c614;
    }
    ctx->pc = 0x28C60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C614u);
        ctx->pc = 0x28C610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C60Cu;
            // 0x28c610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C614u; }
            if (ctx->pc != 0x28C614u) { return; }
        }
        }
    }
    ctx->pc = 0x28C614u;
label_28c614:
    // 0x28c614: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x28c614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28c618:
    // 0x28c618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28c618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28c61c:
    // 0x28c61c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28c61cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_28c620:
    // 0x28c620: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c624:
    // 0x28c624: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_28c628:
    // 0x28c628: 0x320f809  jalr        $t9
label_28c62c:
    if (ctx->pc == 0x28C62Cu) {
        ctx->pc = 0x28C62Cu;
            // 0x28c62c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x28C630u;
        goto label_28c630;
    }
    ctx->pc = 0x28C628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C630u);
        ctx->pc = 0x28C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C628u;
            // 0x28c62c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C630u; }
            if (ctx->pc != 0x28C630u) { return; }
        }
        }
    }
    ctx->pc = 0x28C630u;
label_28c630:
    // 0x28c630: 0xaeb40058  sw          $s4, 0x58($s5)
    ctx->pc = 0x28c630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 20));
label_28c634:
    // 0x28c634: 0xa6b3005c  sh          $s3, 0x5C($s5)
    ctx->pc = 0x28c634u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 92), (uint16_t)GPR_U32(ctx, 19));
label_28c638:
    // 0x28c638: 0xa6b1005e  sh          $s1, 0x5E($s5)
    ctx->pc = 0x28c638u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 17));
label_28c63c:
    // 0x28c63c: 0xa6b20060  sh          $s2, 0x60($s5)
    ctx->pc = 0x28c63cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 18));
label_28c640:
    // 0x28c640: 0xa6b00062  sh          $s0, 0x62($s5)
    ctx->pc = 0x28c640u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 98), (uint16_t)GPR_U32(ctx, 16));
label_28c644:
    // 0x28c644: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28c644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28c648:
    // 0x28c648: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28c64c:
    // 0x28c64c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28c64cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c650:
    // 0x28c650: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28c650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c654:
    // 0x28c654: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28c654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c658:
    // 0x28c658: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28c658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c65c:
    // 0x28c65c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28c65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c660:
    // 0x28c660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28c660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c664:
    // 0x28c664: 0x3e00008  jr          $ra
label_28c668:
    if (ctx->pc == 0x28C668u) {
        ctx->pc = 0x28C668u;
            // 0x28c668: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x28C66Cu;
        goto label_fallthrough_0x28c664;
    }
    ctx->pc = 0x28C664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C664u;
            // 0x28c668: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28c664:
    ctx->pc = 0x28C66Cu;
}
