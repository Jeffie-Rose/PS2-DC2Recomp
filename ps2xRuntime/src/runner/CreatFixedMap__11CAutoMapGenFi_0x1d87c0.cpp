#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatFixedMap__11CAutoMapGenFi
// Address: 0x1d87c0 - 0x1d89bc
void CreatFixedMap__11CAutoMapGenFi_0x1d87c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatFixedMap__11CAutoMapGenFi_0x1d87c0");
#endif

    switch (ctx->pc) {
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d8878u: goto label_1d8878;
        case 0x1d8884u: goto label_1d8884;
        default: break;
    }

    ctx->pc = 0x1d87c0u;

    // 0x1d87c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1d87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d87c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d87c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87c8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d87cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d87ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87d0: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x1d87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x1d87d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1d87d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d87d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d87dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D87DCu;
    {
        const bool branch_taken_0x1d87dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D87E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87DCu;
            // 0x1d87e0: 0x654821  addu        $t1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87dc) {
            ctx->pc = 0x1D8818u;
            goto label_1d8818;
        }
    }
    ctx->pc = 0x1D87E4u;
label_1d87e4:
    // 0x1d87e4: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x1d87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d87e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d87ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d87f0: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1d87f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d87f4: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x1d87f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x1d87f8: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x1d87f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d87fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d8800: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x1d8800u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d8804: 0xa060000a  sb          $zero, 0xA($v1)
    ctx->pc = 0x1d8804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8808: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x1d8808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d880c: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x1d880cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d8810: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x1d8810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x1d8814: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d8814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1d8818:
    // 0x1d8818: 0x848501b8  lh          $a1, 0x1B8($a0)
    ctx->pc = 0x1d8818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d881c: 0x848301ba  lh          $v1, 0x1BA($a0)
    ctx->pc = 0x1d881cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 442)));
    // 0x1d8820: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d8820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d8824: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1d8824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d8828: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D8828u;
    {
        const bool branch_taken_0x1d8828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8828) {
            ctx->pc = 0x1D87E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d87e4;
        }
    }
    ctx->pc = 0x1D8830u;
    // 0x1d8830: 0xac8001d4  sw          $zero, 0x1D4($a0)
    ctx->pc = 0x1d8830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
    // 0x1d8834: 0xac8001e8  sw          $zero, 0x1E8($a0)
    ctx->pc = 0x1d8834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 0));
    // 0x1d8838: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x1d8838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x1d883c: 0xac800210  sw          $zero, 0x210($a0)
    ctx->pc = 0x1d883cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 0));
    // 0x1d8840: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x1d8840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x1d8844: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x1d8844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x1d8848: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x1d8848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x1d884c: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x1d884cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
    // 0x1d8850: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d8854: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x1d8854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1d8858: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x1d8858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d885c: 0x8d290014  lw          $t1, 0x14($t1)
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1d8860: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D8860u;
    {
        const bool branch_taken_0x1d8860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8860u;
            // 0x1d8864: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8860) {
            ctx->pc = 0x1D89A8u;
            goto label_1d89a8;
        }
    }
    ctx->pc = 0x1D8868u;
    // 0x1d8868: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d886c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8870: 0x24639080  addiu       $v1, $v1, -0x6F80
    ctx->pc = 0x1d8870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938752));
    // 0x1d8874: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1d8874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1d8878:
    // 0x1d8878: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1D8878u;
    {
        const bool branch_taken_0x1d8878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8878u;
            // 0x1d887c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8878) {
            ctx->pc = 0x1D8998u;
            goto label_1d8998;
        }
    }
    ctx->pc = 0x1D8880u;
    // 0x1d8880: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1d8880u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8884:
    // 0x1d8884: 0x0  nop
    ctx->pc = 0x1d8884u;
    // NOP
    // 0x1d8888: 0x85390000  lh          $t9, 0x0($t1)
    ctx->pc = 0x1d8888u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d888c: 0x85260002  lh          $a2, 0x2($t1)
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1d8890: 0x1325003d  beq         $t9, $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D8890u;
    {
        const bool branch_taken_0x1d8890 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D8894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8890u;
            // 0x1d8894: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8890) {
            ctx->pc = 0x1D8988u;
            goto label_1d8988;
        }
    }
    ctx->pc = 0x1D8898u;
    // 0x1d8898: 0x848f01b8  lh          $t7, 0x1B8($a0)
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d889c: 0x196840  sll         $t5, $t9, 1
    ctx->pc = 0x1d889cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x1d88a0: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x1d88a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
    // 0x1d88a4: 0x8c8e01cc  lw          $t6, 0x1CC($a0)
    ctx->pc = 0x1d88a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d88a8: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x1d88ac: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x1d88acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1d88b0: 0x14fc018  mult        $t8, $t2, $t7
    ctx->pc = 0x1d88b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1d88b4: 0x1878c0  sll         $t7, $t8, 3
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x1d88b8: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x1d88bc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d88bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d88c0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d88c4: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1d88c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1d88c8: 0xa5d90004  sh          $t9, 0x4($t6)
    ctx->pc = 0x1d88c8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 25));
    // 0x1d88cc: 0x848f01b8  lh          $t7, 0x1B8($a0)
    ctx->pc = 0x1d88ccu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d88d0: 0x8c8e01cc  lw          $t6, 0x1CC($a0)
    ctx->pc = 0x1d88d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d88d4: 0x714fc018  mult1       $t8, $t2, $t7
    ctx->pc = 0x1d88d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1d88d8: 0x1878c0  sll         $t7, $t8, 3
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x1d88dc: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x1d88dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x1d88e0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d88e4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1d88e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d88e8: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1d88e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1d88ec: 0xa5c60006  sh          $a2, 0x6($t6)
    ctx->pc = 0x1d88ecu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d88f0: 0x848e01b8  lh          $t6, 0x1B8($a0)
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d88f4: 0x8c8601cc  lw          $a2, 0x1CC($a0)
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d88f8: 0x85b80004  lh          $t8, 0x4($t5)
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1d88fc: 0x14e7818  mult        $t7, $t2, $t6
    ctx->pc = 0x1d88fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d8900: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1d8904: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x1d8904u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d8908: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d890c: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x1d890cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x1d8910: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d8914: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x1d8914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x1d8918: 0x91af0006  lbu         $t7, 0x6($t5)
    ctx->pc = 0x1d8918u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x1d891c: 0x8c8601cc  lw          $a2, 0x1CC($a0)
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d8920: 0x848d01b8  lh          $t5, 0x1B8($a0)
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d8924: 0x714d7018  mult1       $t6, $t2, $t5
    ctx->pc = 0x1d8924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d8928: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x1d892c: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d8930: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1d8934: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x1d8934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1d8938: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d893c: 0xa0cf000b  sb          $t7, 0xB($a2)
    ctx->pc = 0x1d893cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d8940: 0x848d01b8  lh          $t5, 0x1B8($a0)
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d8944: 0x8c8601cc  lw          $a2, 0x1CC($a0)
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d8948: 0x14d7018  mult        $t6, $t2, $t5
    ctx->pc = 0x1d8948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d894c: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x1d894cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x1d8950: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x1d8950u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d8954: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1d8958: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x1d8958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1d895c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d8960: 0xa0c0000a  sb          $zero, 0xA($a2)
    ctx->pc = 0x1d8960u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8964: 0x848d01b8  lh          $t5, 0x1B8($a0)
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d8968: 0x8c8601cc  lw          $a2, 0x1CC($a0)
    ctx->pc = 0x1d8968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d896c: 0x714d7018  mult1       $t6, $t2, $t5
    ctx->pc = 0x1d896cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d8970: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x1d8974: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x1d8974u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d8978: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1d897c: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x1d897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1d8980: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1d8980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d8984: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x1d8984u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
label_1d8988:
    // 0x1d8988: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1d898c: 0x167302a  slt         $a2, $t3, $a3
    ctx->pc = 0x1d898cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d8990: 0x14c0ffbc  bnez        $a2, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1D8990u;
    {
        const bool branch_taken_0x1d8990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8990u;
            // 0x1d8994: 0x258c001c  addiu       $t4, $t4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8990) {
            ctx->pc = 0x1D8884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8884;
        }
    }
    ctx->pc = 0x1D8998u;
label_1d8998:
    // 0x1d8998: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d8998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d899c: 0x148302a  slt         $a2, $t2, $t0
    ctx->pc = 0x1d899cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d89a0: 0x14c0ffb5  bnez        $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1D89A0u;
    {
        const bool branch_taken_0x1d89a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D89A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89A0u;
            // 0x1d89a4: 0x7082a  slt         $at, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89a0) {
            ctx->pc = 0x1D8878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8878;
        }
    }
    ctx->pc = 0x1D89A8u;
label_1d89a8:
    // 0x1d89a8: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x1d89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x1d89ac: 0xac8001dc  sw          $zero, 0x1DC($a0)
    ctx->pc = 0x1d89acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 0));
    // 0x1d89b0: 0xac8701e0  sw          $a3, 0x1E0($a0)
    ctx->pc = 0x1d89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 7));
    // 0x1d89b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89B4u;
            // 0x1d89b8: 0xac8801e4  sw          $t0, 0x1E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D89BCu;
}
