#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _getRef0
// Address: 0x108568 - 0x108984
void _getRef0_0x108568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getRef0_0x108568");
#endif

    ctx->pc = 0x108568u;

    // 0x108568: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x108568u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10856c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10856cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x108570: 0x270206bc  addiu       $v0, $t8, 0x6BC
    ctx->pc = 0x108570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1724));
    // 0x108574: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x108574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x108578: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x108578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10857c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x108580: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x108580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x108584: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x108584u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108588: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x108588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10858c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108590: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x108590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x108594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x108594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108598: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x108598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x10859c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1085a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1085a4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1085a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1085a8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1085a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1085ac: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1085acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1085b0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1085b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1085b4: 0x8f04081c  lw          $a0, 0x81C($t8)
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2076)));
    // 0x1085b8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x1085b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1085bc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1085bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1085c0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1085c4: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x1085c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1085c8: 0x8f020810  lw          $v0, 0x810($t8)
    ctx->pc = 0x1085c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x1085cc: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x1085ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x1085d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1085d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1085d4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1085d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x1085d8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1085d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1085dc: 0x165043  sra         $t2, $s6, 1
    ctx->pc = 0x1085dcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1085e0: 0x8fb200b8  lw          $s2, 0xB8($sp)
    ctx->pc = 0x1085e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1085e4: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x1085e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1085e8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1085e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1085ec: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x1085ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1085f0: 0x24420590  addiu       $v0, $v0, 0x590
    ctx->pc = 0x1085f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
    // 0x1085f4: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1085f8: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x1085f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1085fc: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x1085fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x108600: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x108604: 0x437821  addu        $t7, $v0, $v1
    ctx->pc = 0x108604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108608: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x108608u;
    {
        const bool branch_taken_0x108608 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x10860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108608u;
            // 0x10860c: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108608) {
            ctx->pc = 0x108620u;
            goto label_108620;
        }
    }
    ctx->pc = 0x108610u;
    // 0x108610: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x108614: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x108618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108618u;
    {
        const bool branch_taken_0x108618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108618u;
            // 0x10861c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108618) {
            ctx->pc = 0x108628u;
            goto label_108628;
        }
    }
    ctx->pc = 0x108620u;
label_108620:
    // 0x108620: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x108620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x108624: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x108624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_108628:
    // 0x108628: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x108628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x10862c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x10862cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108630: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x108630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x108634: 0x8a103  sra         $s4, $t0, 4
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 4));
    // 0x108638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x108638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10863c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x108640: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x108640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x108644: 0x6a903  sra         $s5, $a2, 4
    ctx->pc = 0x108644u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 4));
    // 0x108648: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x108648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10864c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x10864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x108650: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x108650u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x108654: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x108658: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x108658u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
    // 0x10865c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x10865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x108660: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x108660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x108664: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x108668: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x108668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10866c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x108670: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x108670u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x108674: 0x32590001  andi        $t9, $s2, 0x1
    ctx->pc = 0x108674u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x108678: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x108678u;
    {
        const bool branch_taken_0x108678 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x10867Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108678u;
            // 0x10867c: 0x32d30001  andi        $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108678) {
            ctx->pc = 0x1086B8u;
            goto label_1086b8;
        }
    }
    ctx->pc = 0x108680u;
    // 0x108680: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x108680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x108684: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x108684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x108688: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x108688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x10868c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x10868Cu;
    {
        const bool branch_taken_0x10868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10868c) {
            ctx->pc = 0x108690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10868Cu;
            // 0x108690: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1086ECu;
            goto label_1086ec;
        }
    }
    ctx->pc = 0x108694u;
    // 0x108694: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x108694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x108698: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x10869c: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x10869cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1086a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1086a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1086a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1086a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1086a8: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1086ac: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x1086acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x1086b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1086B0u;
    {
        const bool branch_taken_0x1086b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086B0u;
            // 0x1086b4: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086b0) {
            ctx->pc = 0x1086F0u;
            goto label_1086f0;
        }
    }
    ctx->pc = 0x1086B8u;
label_1086b8:
    // 0x1086b8: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x1086b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x1086bc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1086c0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x1086c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1086c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1086C4u;
    {
        const bool branch_taken_0x1086c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1086c4) {
            ctx->pc = 0x1086C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1086C4u;
            // 0x1086c8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1086ECu;
            goto label_1086ec;
        }
    }
    ctx->pc = 0x1086CCu;
    // 0x1086cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1086ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1086d0: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1086d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1086d4: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1086d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1086d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1086dc: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1086e0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x1086e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x1086e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1086E4u;
    {
        const bool branch_taken_0x1086e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086E4u;
            // 0x1086e8: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086e4) {
            ctx->pc = 0x1086F0u;
            goto label_1086f0;
        }
    }
    ctx->pc = 0x1086ECu;
label_1086ec:
    // 0x1086ec: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1086ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_1086f0:
    // 0x1086f0: 0x8f050810  lw          $a1, 0x810($t8)
    ctx->pc = 0x1086f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x1086f4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1086f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1086f8: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x1086f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1086fc: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x1086fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x108700: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x108700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x108704: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x108704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x108708: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x10870c: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x10870cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x108710: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
    // 0x108714: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x108714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x108718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10871c: 0x1a63004  sllv        $a2, $a2, $t5
    ctx->pc = 0x10871cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x108720: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x108720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x108724: 0x782821  addu        $a1, $v1, $t8
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x108728: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x10872c: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x10872cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
    // 0x108730: 0x8ca80590  lw          $t0, 0x590($a1)
    ctx->pc = 0x108730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1424)));
    // 0x108734: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x108734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x108738: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x108738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10873c: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
    // 0x108740: 0x1079021  addu        $s2, $t0, $a3
    ctx->pc = 0x108740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x108744: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x108744u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x108748: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10874c: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x10874cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x108750: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x108750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x108754: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x108754u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
    // 0x108758: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x108758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x10875c: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x10875cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
    // 0x108760: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x108760u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x108764: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x108764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x108768: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10876c: 0xad890014  sw          $t1, 0x14($t4)
    ctx->pc = 0x10876cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 9));
    // 0x108770: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x108770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x108774: 0xad860010  sw          $a2, 0x10($t4)
    ctx->pc = 0x108774u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 6));
    // 0x108778: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x108778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10877c: 0xad8a0018  sw          $t2, 0x18($t4)
    ctx->pc = 0x10877cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 10));
    // 0x108780: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x108780u;
    {
        const bool branch_taken_0x108780 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x108784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108780u;
            // 0x108784: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108780) {
            ctx->pc = 0x1087A4u;
            goto label_1087a4;
        }
    }
    ctx->pc = 0x108788u;
    // 0x108788: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x108788u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x10878c: 0xb2043  sra         $a0, $t3, 1
    ctx->pc = 0x10878cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 1));
    // 0x108790: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x108790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x108794: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x108794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x108798: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x108798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10879c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10879Cu;
    {
        const bool branch_taken_0x10879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10879Cu;
            // 0x1087a0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10879c) {
            ctx->pc = 0x1087B8u;
            goto label_1087b8;
        }
    }
    ctx->pc = 0x1087A4u;
label_1087a4:
    // 0x1087a4: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x1087a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1087a8: 0xb1843  sra         $v1, $t3, 1
    ctx->pc = 0x1087a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 1));
    // 0x1087ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1087acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1087b0: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x1087b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1087b4: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1087b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1087b8:
    // 0x1087b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1087b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1087bc: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x1087bcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x1087c0: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x1087c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1087c4: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x1087c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1087c8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1087c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1087cc: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x1087ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1087d0: 0x838c3  sra         $a3, $t0, 3
    ctx->pc = 0x1087d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
    // 0x1087d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1087d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1087d8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1087d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1087dc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1087dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1087e0: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1087e4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1087e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1087e8: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1087e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1087ec: 0x32d90001  andi        $t9, $s6, 0x1
    ctx->pc = 0x1087ecu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x1087f0: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x1087f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
    // 0x1087f4: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x1087F4u;
    {
        const bool branch_taken_0x1087f4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1087F4u;
            // 0x1087f8: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087f4) {
            ctx->pc = 0x108834u;
            goto label_108834;
        }
    }
    ctx->pc = 0x1087FCu;
    // 0x1087fc: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x1087fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x108800: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x108800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x108804: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x108804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x108808: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x108808u;
    {
        const bool branch_taken_0x108808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108808) {
            ctx->pc = 0x10880Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108808u;
            // 0x10880c: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108868u;
            goto label_108868;
        }
    }
    ctx->pc = 0x108810u;
    // 0x108810: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x108810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108814: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x108814u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x108818: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x108818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x10881c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108820: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108824: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x108824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x108828: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x108828u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x10882c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10882Cu;
    {
        const bool branch_taken_0x10882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10882Cu;
            // 0x108830: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10882c) {
            ctx->pc = 0x10886Cu;
            goto label_10886c;
        }
    }
    ctx->pc = 0x108834u;
label_108834:
    // 0x108834: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x108834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x108838: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x108838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10883c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x10883cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x108840: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x108840u;
    {
        const bool branch_taken_0x108840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108840) {
            ctx->pc = 0x108844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108840u;
            // 0x108844: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108868u;
            goto label_108868;
        }
    }
    ctx->pc = 0x108848u;
    // 0x108848: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x108848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10884c: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x10884cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x108850: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x108850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x108854: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108858: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x108858u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x10885c: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x10885cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x108860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108860u;
    {
        const bool branch_taken_0x108860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108860u;
            // 0x108864: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108860) {
            ctx->pc = 0x10886Cu;
            goto label_10886c;
        }
    }
    ctx->pc = 0x108868u;
label_108868:
    // 0x108868: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x108868u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
label_10886c:
    // 0x10886c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x10886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108870: 0xf42023  subu        $a0, $a3, $s4
    ctx->pc = 0x108870u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x108874: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x108874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x108878: 0x1551823  subu        $v1, $t2, $s5
    ctx->pc = 0x108878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x10887c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x10887cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
    // 0x108880: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x108880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x108884: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x108884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x108888: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x108888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10888c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x108890: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x108894: 0x8f080810  lw          $t0, 0x810($t8)
    ctx->pc = 0x108894u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x108898: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10889c: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x10889cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088a0: 0x24420450  addiu       $v0, $v0, 0x450
    ctx->pc = 0x1088a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1104));
    // 0x1088a4: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x1088a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1088a8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1088a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1088ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1088acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1088b0: 0x8a2818  mult        $a1, $a0, $t2
    ctx->pc = 0x1088b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1088b4: 0x18a6818  mult        $t5, $t4, $t2
    ctx->pc = 0x1088b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1088b8: 0x8fcb0010  lw          $t3, 0x10($fp)
    ctx->pc = 0x1088b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1088bc: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1088bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1088c0: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x1088c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1088c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1088c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1088cc: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x1088ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1088d0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1088d4: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x1088d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1088d8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1088dc: 0x3071821  addu        $v1, $t8, $a3
    ctx->pc = 0x1088dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x1088e0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1088e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1088e4: 0xac6c05b8  sw          $t4, 0x5B8($v1)
    ctx->pc = 0x1088e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 12));
    // 0x1088e8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1088e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1088ec: 0x8fac0014  lw          $t4, 0x14($sp)
    ctx->pc = 0x1088ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1088f0: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1088f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1088f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1088f8: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x1088f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x1088fc: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x1088fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x108900: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x108900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x108904: 0x16a6018  mult        $t4, $t3, $t2
    ctx->pc = 0x108904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x108908: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x10890c: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x10890cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x108910: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x108910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x108914: 0x24a50470  addiu       $a1, $a1, 0x470
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1136));
    // 0x108918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10891c: 0xade40014  sw          $a0, 0x14($t7)
    ctx->pc = 0x10891cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 4));
    // 0x108920: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x108920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x108924: 0xade30018  sw          $v1, 0x18($t7)
    ctx->pc = 0x108924u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 3));
    // 0x108928: 0x3072021  addu        $a0, $t8, $a3
    ctx->pc = 0x108928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x10892c: 0x1895821  addu        $t3, $t4, $t1
    ctx->pc = 0x10892cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x108930: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x108930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x108934: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x108934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108938: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x108938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x10893c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10893cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108944: 0xac890598  sw          $t1, 0x598($a0)
    ctx->pc = 0x108944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 9));
    // 0x108948: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x108948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10894c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10894cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108950: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x108950u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108954: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x108954u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108958: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x108958u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10895c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10895cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108960: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x108960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108964: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108968: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10896c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10896cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108970: 0xac6605c8  sw          $a2, 0x5C8($v1)
    ctx->pc = 0x108970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1480), GPR_U32(ctx, 6));
    // 0x108974: 0xaceb05a8  sw          $t3, 0x5A8($a3)
    ctx->pc = 0x108974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 11));
    // 0x108978: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x108978u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x10897c: 0x3e00008  jr          $ra
    ctx->pc = 0x10897Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10897Cu;
            // 0x108980: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108984u;
}
