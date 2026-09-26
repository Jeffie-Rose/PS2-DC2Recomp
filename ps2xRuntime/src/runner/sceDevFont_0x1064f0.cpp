#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFont
// Address: 0x1064f0 - 0x10662c
void sceDevFont_0x1064f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFont_0x1064f0");
#endif

    switch (ctx->pc) {
        case 0x106534u: goto label_106534;
        case 0x106548u: goto label_106548;
        case 0x106560u: goto label_106560;
        case 0x1065b8u: goto label_1065b8;
        case 0x1065fcu: goto label_1065fc;
        default: break;
    }

    ctx->pc = 0x1064f0u;

    // 0x1064f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1064f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1064f4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1064f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1064f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1064f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064fc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1064fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x106500: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x106500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x106504: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x106504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106508: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x106508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10650c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x10650cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106510: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x106510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106514: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x106514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x106518: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x106518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10651c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10651cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106520: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x106520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x106524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106528: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x106528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10652c: 0xc04198c  jal         func_106630
    ctx->pc = 0x10652Cu;
    SET_GPR_U32(ctx, 31, 0x106534u);
    ctx->pc = 0x106530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10652Cu;
            // 0x106530: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106534u; }
        if (ctx->pc != 0x106534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106534u; }
        if (ctx->pc != 0x106534u) { return; }
    }
    ctx->pc = 0x106534u;
label_106534:
    // 0x106534: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10653c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10653cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106540: 0xc0419aa  jal         func_1066A8
    ctx->pc = 0x106540u;
    SET_GPR_U32(ctx, 31, 0x106548u);
    ctx->pc = 0x106544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106540u;
            // 0x106544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066A8u;
    if (runtime->hasFunction(0x1066A8u)) {
        auto targetFn = runtime->lookupFunction(0x1066A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106548u; }
        if (ctx->pc != 0x106548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x1066a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106548u; }
        if (ctx->pc != 0x106548u) { return; }
    }
    ctx->pc = 0x106548u;
label_106548:
    // 0x106548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10654c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x10654cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106550: 0x2455fffc  addiu       $s5, $v0, -0x4
    ctx->pc = 0x106550u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x106554: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x106554u;
    {
        const bool branch_taken_0x106554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x106558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106554u;
            // 0x106558: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106554) {
            ctx->pc = 0x1065CCu;
            goto label_1065cc;
        }
    }
    ctx->pc = 0x10655Cu;
    // 0x10655c: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x10655cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
label_106560:
    // 0x106560: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x106560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x106564: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106564u;
    {
        const bool branch_taken_0x106564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x106568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106564u;
            // 0x106568: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106564) {
            ctx->pc = 0x106574u;
            goto label_106574;
        }
    }
    ctx->pc = 0x10656Cu;
    // 0x10656c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x10656cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106570: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x106570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_106574:
    // 0x106574: 0x2683f548  addiu       $v1, $s4, -0xAB8
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964552));
    // 0x106578: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x106578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10657c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x10657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x106580: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x106580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x106584: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x106584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x106588: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x106588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x10658c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10658cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106590: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x106590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x106594: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x106594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x106598: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x106598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10659c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x10659cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1065a0: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x1065a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x1065a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1065a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065a8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1065a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1065ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1065acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1065b0: 0xc041786  jal         func_105E18
    ctx->pc = 0x1065B0u;
    SET_GPR_U32(ctx, 31, 0x1065B8u);
    ctx->pc = 0x1065B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1065B0u;
            // 0x1065b4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105E18u;
    if (runtime->hasFunction(0x105E18u)) {
        auto targetFn = runtime->lookupFunction(0x105E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065B8u; }
        if (ctx->pc != 0x1065B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontRefDirectImage_0x105e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065B8u; }
        if (ctx->pc != 0x1065B8u) { return; }
    }
    ctx->pc = 0x1065B8u;
label_1065b8:
    // 0x1065b8: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x1065b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1065bc: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1065bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1065c0: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1065C0u;
    {
        const bool branch_taken_0x1065c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1065C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1065C0u;
            // 0x1065c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065c0) {
            ctx->pc = 0x106560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106560;
        }
    }
    ctx->pc = 0x1065C8u;
    // 0x1065c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1065c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1065cc:
    // 0x1065cc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1065ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1065d0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1065d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1065d4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1065d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065dc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1065dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1065e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1065e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065e4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1065e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1065e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1065e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1065ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1065f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1065f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f4: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x1065F4u;
    SET_GPR_U32(ctx, 31, 0x1065FCu);
    ctx->pc = 0x1065F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1065F4u;
            // 0x1065f8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (runtime->hasFunction(0x1067B8u)) {
        auto targetFn = runtime->lookupFunction(0x1067B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065FCu; }
        if (ctx->pc != 0x1065FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x1067b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065FCu; }
        if (ctx->pc != 0x1065FCu) { return; }
    }
    ctx->pc = 0x1065FCu;
label_1065fc:
    // 0x1065fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106600: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x106600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106604: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x106604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106608: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x106608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x10660c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10660cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106610: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106614: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106618: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x106618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10661c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10661cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106620: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106624: 0x3e00008  jr          $ra
    ctx->pc = 0x106624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106624u;
            // 0x106628: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10662Cu;
}
