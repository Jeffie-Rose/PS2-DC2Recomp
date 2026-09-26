#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateAnimeDataEX__FP14tagMOTION_TYPEP9mgCMemoryP16MOTION_FILE_INFO
// Address: 0x14d850 - 0x14da70
void CreateAnimeDataEX__FP14tagMOTION_TYPEP9mgCMemoryP16MOTION_FILE_INFO_0x14d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateAnimeDataEX__FP14tagMOTION_TYPEP9mgCMemoryP16MOTION_FILE_INFO_0x14d850");
#endif

    switch (ctx->pc) {
        case 0x14d8a4u: goto label_14d8a4;
        case 0x14d8b8u: goto label_14d8b8;
        case 0x14d8d0u: goto label_14d8d0;
        case 0x14d8dcu: goto label_14d8dc;
        case 0x14d920u: goto label_14d920;
        case 0x14d958u: goto label_14d958;
        case 0x14d998u: goto label_14d998;
        case 0x14d9a4u: goto label_14d9a4;
        case 0x14d9e8u: goto label_14d9e8;
        case 0x14da20u: goto label_14da20;
        default: break;
    }

    ctx->pc = 0x14d850u;

    // 0x14d850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14d854: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14d858: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d85c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d860: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x14d860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d864: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d86c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d878: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d87c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14D87Cu;
    {
        const bool branch_taken_0x14d87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D87Cu;
            // 0x14d880: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d87c) {
            ctx->pc = 0x14D8B8u;
            goto label_14d8b8;
        }
    }
    ctx->pc = 0x14D884u;
    // 0x14d884: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d888: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D888u;
    {
        const bool branch_taken_0x14d888 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D888u;
            // 0x14d88c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d888) {
            ctx->pc = 0x14D898u;
            goto label_14d898;
        }
    }
    ctx->pc = 0x14D890u;
    // 0x14d890: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x14d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14d894: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x14d894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_14d898:
    // 0x14d898: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x14d898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d89c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D89Cu;
    SET_GPR_U32(ctx, 31, 0x14D8A4u);
    ctx->pc = 0x14D8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D89Cu;
            // 0x14d8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D8A4u; }
        if (ctx->pc != 0x14D8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D8A4u; }
        if (ctx->pc != 0x14D8A4u) { return; }
    }
    ctx->pc = 0x14D8A4u;
label_14d8a4:
    // 0x14d8a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14d8a8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14d8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d8ac: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x14d8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d8b0: 0xc049c18  jal         func_127060
    ctx->pc = 0x14D8B0u;
    SET_GPR_U32(ctx, 31, 0x14D8B8u);
    ctx->pc = 0x14D8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8B0u;
            // 0x14d8b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D8B8u; }
        if (ctx->pc != 0x14D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D8B8u; }
        if (ctx->pc != 0x14D8B8u) { return; }
    }
    ctx->pc = 0x14D8B8u;
label_14d8b8:
    // 0x14d8b8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14d8bc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14D8BCu;
    {
        const bool branch_taken_0x14d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8bc) {
            ctx->pc = 0x14D980u;
            goto label_14d980;
        }
    }
    ctx->pc = 0x14D8C4u;
    // 0x14d8c4: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x14d8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14d8c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x14d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x14d8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d8d0:
    // 0x14d8d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d8d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D8D4u;
    SET_GPR_U32(ctx, 31, 0x14D8DCu);
    ctx->pc = 0x14D8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8D4u;
            // 0x14d8d8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D8DCu; }
        if (ctx->pc != 0x14D8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D8DCu; }
        if (ctx->pc != 0x14D8DCu) { return; }
    }
    ctx->pc = 0x14D8DCu;
label_14d8dc:
    // 0x14d8dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14d8e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14d8e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14d8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14d8f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14d8f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14d8f8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14d8fc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x14d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x14d900: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14d904: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x14d904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x14d908: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x14d908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14d90c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d910: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d914: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d918: 0xc05350c  jal         func_14D430
    ctx->pc = 0x14D918u;
    SET_GPR_U32(ctx, 31, 0x14D920u);
    ctx->pc = 0x14D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D918u;
            // 0x14d91c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D430u;
    if (runtime->hasFunction(0x14D430u)) {
        auto targetFn = runtime->lookupFunction(0x14D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D920u; }
        if (ctx->pc != 0x14D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetKeyFrame__FP8Mot_ListP20FRAME_VECTOR_EX_DATAP9mgCMemory_0x14d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D920u; }
        if (ctx->pc != 0x14D920u) { return; }
    }
    ctx->pc = 0x14D920u;
label_14d920:
    // 0x14d920: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14d924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D924u;
    {
        const bool branch_taken_0x14d924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d924) {
            ctx->pc = 0x14D934u;
            goto label_14d934;
        }
    }
    ctx->pc = 0x14D92Cu;
    // 0x14d92c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D92Cu;
    {
        const bool branch_taken_0x14d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D92Cu;
            // 0x14d930: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d92c) {
            ctx->pc = 0x14D93Cu;
            goto label_14d93c;
        }
    }
    ctx->pc = 0x14D934u;
label_14d934:
    // 0x14d934: 0x0  nop
    ctx->pc = 0x14d934u;
    // NOP
    // 0x14d938: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x14d938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_14d93c:
    // 0x14d93c: 0x0  nop
    ctx->pc = 0x14d93cu;
    // NOP
    // 0x14d940: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x14d940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x14d944: 0x9e820014  lwu         $v0, 0x14($s4)
    ctx->pc = 0x14d944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14d948: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14D948u;
    {
        const bool branch_taken_0x14d948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D948u;
            // 0x14d94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d948) {
            ctx->pc = 0x14D8D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d8d0;
        }
    }
    ctx->pc = 0x14D950u;
    // 0x14d950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14D950u;
    {
        const bool branch_taken_0x14d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D950u;
            // 0x14d954: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d950) {
            ctx->pc = 0x14D96Cu;
            goto label_14d96c;
        }
    }
    ctx->pc = 0x14D958u;
label_14d958:
    // 0x14d958: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x14d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x14d95c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d960: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x14d960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d964: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14d964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x14d968: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x14d968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
label_14d96c:
    // 0x14d96c: 0x0  nop
    ctx->pc = 0x14d96cu;
    // NOP
    // 0x14d970: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14d970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14d974: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14D974u;
    {
        const bool branch_taken_0x14d974 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d974) {
            ctx->pc = 0x14D958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d958;
        }
    }
    ctx->pc = 0x14D97Cu;
    // 0x14d97c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x14d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_14d980:
    // 0x14d980: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14d984: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14D984u;
    {
        const bool branch_taken_0x14d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d984) {
            ctx->pc = 0x14DA48u;
            goto label_14da48;
        }
    }
    ctx->pc = 0x14D98Cu;
    // 0x14d98c: 0x8eb2001c  lw          $s2, 0x1C($s5)
    ctx->pc = 0x14d98cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x14d990: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14d990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14d994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d998:
    // 0x14d998: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d99c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D99Cu;
    SET_GPR_U32(ctx, 31, 0x14D9A4u);
    ctx->pc = 0x14D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D99Cu;
            // 0x14d9a0: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9A4u; }
        if (ctx->pc != 0x14D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9A4u; }
        if (ctx->pc != 0x14D9A4u) { return; }
    }
    ctx->pc = 0x14D9A4u;
label_14d9a4:
    // 0x14d9a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14d9a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14d9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14d9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14d9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14d9b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14d9bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14d9c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14d9c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x14d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x14d9c8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14d9cc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x14d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x14d9d0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x14d9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14d9d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d9d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d9e0: 0xc05350c  jal         func_14D430
    ctx->pc = 0x14D9E0u;
    SET_GPR_U32(ctx, 31, 0x14D9E8u);
    ctx->pc = 0x14D9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9E0u;
            // 0x14d9e4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D430u;
    if (runtime->hasFunction(0x14D430u)) {
        auto targetFn = runtime->lookupFunction(0x14D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9E8u; }
        if (ctx->pc != 0x14D9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetKeyFrame__FP8Mot_ListP20FRAME_VECTOR_EX_DATAP9mgCMemory_0x14d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9E8u; }
        if (ctx->pc != 0x14D9E8u) { return; }
    }
    ctx->pc = 0x14D9E8u;
label_14d9e8:
    // 0x14d9e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d9ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D9ECu;
    {
        const bool branch_taken_0x14d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9ec) {
            ctx->pc = 0x14D9FCu;
            goto label_14d9fc;
        }
    }
    ctx->pc = 0x14D9F4u;
    // 0x14d9f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D9F4u;
    {
        const bool branch_taken_0x14d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9F4u;
            // 0x14d9f8: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9f4) {
            ctx->pc = 0x14DA04u;
            goto label_14da04;
        }
    }
    ctx->pc = 0x14D9FCu;
label_14d9fc:
    // 0x14d9fc: 0x0  nop
    ctx->pc = 0x14d9fcu;
    // NOP
    // 0x14da00: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x14da00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_14da04:
    // 0x14da04: 0x0  nop
    ctx->pc = 0x14da04u;
    // NOP
    // 0x14da08: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x14da08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x14da0c: 0x9e820014  lwu         $v0, 0x14($s4)
    ctx->pc = 0x14da0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14da10: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14DA10u;
    {
        const bool branch_taken_0x14da10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA10u;
            // 0x14da14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da10) {
            ctx->pc = 0x14D998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d998;
        }
    }
    ctx->pc = 0x14DA18u;
    // 0x14da18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DA18u;
    {
        const bool branch_taken_0x14da18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA18u;
            // 0x14da1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da18) {
            ctx->pc = 0x14DA34u;
            goto label_14da34;
        }
    }
    ctx->pc = 0x14DA20u;
label_14da20:
    // 0x14da20: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x14da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x14da24: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14da24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da28: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x14da28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da2c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x14da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x14da30: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x14da30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
label_14da34:
    // 0x14da34: 0x0  nop
    ctx->pc = 0x14da34u;
    // NOP
    // 0x14da38: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14da3c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14DA3Cu;
    {
        const bool branch_taken_0x14da3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14da3c) {
            ctx->pc = 0x14DA20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14da20;
        }
    }
    ctx->pc = 0x14DA44u;
    // 0x14da44: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x14da44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_14da48:
    // 0x14da48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14da48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14da4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14da50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14da50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14da54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14da54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14da58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14da58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14da5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14da5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14da60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14da60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14da64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14da64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14da68: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA68u;
            // 0x14da6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DA70u;
}
