#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeCheckDigit__FiPci
// Address: 0x2f1540 - 0x2f1660
void MakeCheckDigit__FiPci_0x2f1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeCheckDigit__FiPci_0x2f1540");
#endif

    switch (ctx->pc) {
        case 0x2f1578u: goto label_2f1578;
        case 0x2f1634u: goto label_2f1634;
        default: break;
    }

    ctx->pc = 0x2f1540u;

    // 0x2f1540: 0x14800045  bnez        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2F1540u;
    {
        const bool branch_taken_0x2f1540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1540u;
            // 0x2f1544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1540) {
            ctx->pc = 0x2F1658u;
            goto label_2f1658;
        }
    }
    ctx->pc = 0x2F1548u;
    // 0x2f1548: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1548u;
    {
        const bool branch_taken_0x2f1548 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2F154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1548u;
            // 0x2f154c: 0x61983  sra         $v1, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1548) {
            ctx->pc = 0x2F1558u;
            goto label_2f1558;
        }
    }
    ctx->pc = 0x2F1550u;
    // 0x2f1550: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x2f1550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x2f1554: 0x21983  sra         $v1, $v0, 6
    ctx->pc = 0x2f1554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 6));
label_2f1558:
    // 0x2f1558: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2f1558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f155c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f155cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1560: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F1560u;
    {
        const bool branch_taken_0x2f1560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1560u;
            // 0x2f1564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1560) {
            ctx->pc = 0x2F1658u;
            goto label_2f1658;
        }
    }
    ctx->pc = 0x2F1568u;
    // 0x2f1568: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2f1568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f156c: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F156Cu;
    {
        const bool branch_taken_0x2f156c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F156Cu;
            // 0x2f1570: 0x2478fff8  addiu       $t8, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f156c) {
            ctx->pc = 0x2F1624u;
            goto label_2f1624;
        }
    }
    ctx->pc = 0x2F1574u;
    // 0x2f1574: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x2f1574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f1578:
    // 0x2f1578: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x2f1578u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f157c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2f157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f1580: 0x90ad0040  lbu         $t5, 0x40($a1)
    ctx->pc = 0x2f1580u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2f1584: 0x98302a  slt         $a2, $a0, $t8
    ctx->pc = 0x2f1584u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x2f1588: 0x90ac0080  lbu         $t4, 0x80($a1)
    ctx->pc = 0x2f1588u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f158c: 0x90ab00c0  lbu         $t3, 0xC0($a1)
    ctx->pc = 0x2f158cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2f1590: 0x90aa0100  lbu         $t2, 0x100($a1)
    ctx->pc = 0x2f1590u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x2f1594: 0x90a90140  lbu         $t1, 0x140($a1)
    ctx->pc = 0x2f1594u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x2f1598: 0xef001a  div         $zero, $a3, $t7
    ctx->pc = 0x2f1598u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f159c: 0x90a80180  lbu         $t0, 0x180($a1)
    ctx->pc = 0x2f159cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x2f15a0: 0x0  nop
    ctx->pc = 0x2f15a0u;
    // NOP
    // 0x2f15a4: 0x7010  mfhi        $t6
    ctx->pc = 0x2f15a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x2f15a8: 0x90a701c0  lbu         $a3, 0x1C0($a1)
    ctx->pc = 0x2f15a8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x2f15ac: 0x1af001a  div         $zero, $t5, $t7
    ctx->pc = 0x2f15acu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f15b0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2f15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2f15b4: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x2f15b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x2f15b8: 0x6810  mfhi        $t5
    ctx->pc = 0x2f15b8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x2f15bc: 0x18f001a  div         $zero, $t4, $t7
    ctx->pc = 0x2f15bcu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f15c0: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2f15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2f15c4: 0x0  nop
    ctx->pc = 0x2f15c4u;
    // NOP
    // 0x2f15c8: 0x6010  mfhi        $t4
    ctx->pc = 0x2f15c8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x2f15cc: 0x16f001a  div         $zero, $t3, $t7
    ctx->pc = 0x2f15ccu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f15d0: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2f15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2f15d4: 0x0  nop
    ctx->pc = 0x2f15d4u;
    // NOP
    // 0x2f15d8: 0x5810  mfhi        $t3
    ctx->pc = 0x2f15d8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x2f15dc: 0x14f001a  div         $zero, $t2, $t7
    ctx->pc = 0x2f15dcu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f15e0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2f15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2f15e4: 0x0  nop
    ctx->pc = 0x2f15e4u;
    // NOP
    // 0x2f15e8: 0x5010  mfhi        $t2
    ctx->pc = 0x2f15e8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2f15ec: 0x12f001a  div         $zero, $t1, $t7
    ctx->pc = 0x2f15ecu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f15f0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2f15f4: 0x0  nop
    ctx->pc = 0x2f15f4u;
    // NOP
    // 0x2f15f8: 0x4810  mfhi        $t1
    ctx->pc = 0x2f15f8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2f15fc: 0x10f001a  div         $zero, $t0, $t7
    ctx->pc = 0x2f15fcu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f1600: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2f1600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2f1604: 0x0  nop
    ctx->pc = 0x2f1604u;
    // NOP
    // 0x2f1608: 0x4010  mfhi        $t0
    ctx->pc = 0x2f1608u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f160c: 0xef001a  div         $zero, $a3, $t7
    ctx->pc = 0x2f160cu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f1610: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2f1610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2f1614: 0x0  nop
    ctx->pc = 0x2f1614u;
    // NOP
    // 0x2f1618: 0x3810  mfhi        $a3
    ctx->pc = 0x2f1618u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2f161c: 0x14c0ffd6  bnez        $a2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2F161Cu;
    {
        const bool branch_taken_0x2f161c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F161Cu;
            // 0x2f1620: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f161c) {
            ctx->pc = 0x2F1578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1578;
        }
    }
    ctx->pc = 0x2F1624u;
label_2f1624:
    // 0x2f1624: 0x0  nop
    ctx->pc = 0x2f1624u;
    // NOP
    // 0x2f1628: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f1628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f162c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2F162Cu;
    {
        const bool branch_taken_0x2f162c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F162Cu;
            // 0x2f1630: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f162c) {
            ctx->pc = 0x2F1658u;
            goto label_2f1658;
        }
    }
    ctx->pc = 0x2F1634u;
label_2f1634:
    // 0x2f1634: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x2f1634u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f1638: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f1638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f163c: 0x83302a  slt         $a2, $a0, $v1
    ctx->pc = 0x2f163cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f1640: 0xe8001a  div         $zero, $a3, $t0
    ctx->pc = 0x2f1640u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f1644: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2f1644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f1648: 0x0  nop
    ctx->pc = 0x2f1648u;
    // NOP
    // 0x2f164c: 0x3810  mfhi        $a3
    ctx->pc = 0x2f164cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2f1650: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F1650u;
    {
        const bool branch_taken_0x2f1650 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1650u;
            // 0x2f1654: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1650) {
            ctx->pc = 0x2F1634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1634;
        }
    }
    ctx->pc = 0x2F1658u;
label_2f1658:
    // 0x2f1658: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1660u;
}
