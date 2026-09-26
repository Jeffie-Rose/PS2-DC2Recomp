#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _strtol_r
// Address: 0x12a700 - 0x12a938
void _strtol_r_0x12a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_strtol_r_0x12a700");
#endif

    switch (ctx->pc) {
        case 0x12a750u: goto label_12a750;
        case 0x12a808u: goto label_12a808;
        case 0x12a824u: goto label_12a824;
        case 0x12a838u: goto label_12a838;
        case 0x12a878u: goto label_12a878;
        default: break;
    }

    ctx->pc = 0x12a700u;

    // 0x12a700: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12a704: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12a708: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x12a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12a70c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12a710: 0x24451f01  addiu       $a1, $v0, 0x1F01
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7937));
    // 0x12a714: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x12a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x12a718: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x12a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x12a71c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12a71cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a720: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x12a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x12a724: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12a724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a728: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x12a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12a72c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x12a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x12a730: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x12a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x12a734: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x12a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x12a738: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x12a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x12a73c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12a740: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12a740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12a744: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12a748: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x12a748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12a74c: 0x0  nop
    ctx->pc = 0x12a74cu;
    // NOP
label_12a750:
    // 0x12a750: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a750u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a754: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12a758: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x12a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12a75c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x12a75cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a760: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12a760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12a764: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A764u;
    {
        const bool branch_taken_0x12a764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a764) {
            ctx->pc = 0x12A750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a750;
        }
    }
    ctx->pc = 0x12A76Cu;
    // 0x12a76c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12a770: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A770u;
    {
        const bool branch_taken_0x12a770 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A770u;
            // 0x12a774: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a770) {
            ctx->pc = 0x12A784u;
            goto label_12a784;
        }
    }
    ctx->pc = 0x12A778u;
    // 0x12a778: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a778u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a77c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A77Cu;
    {
        const bool branch_taken_0x12a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A77Cu;
            // 0x12a780: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a77c) {
            ctx->pc = 0x12A790u;
            goto label_12a790;
        }
    }
    ctx->pc = 0x12A784u;
label_12a784:
    // 0x12a784: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A784u;
    {
        const bool branch_taken_0x12a784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a784) {
            ctx->pc = 0x12A794u;
            goto label_12a794;
        }
    }
    ctx->pc = 0x12A78Cu;
    // 0x12a78c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a78cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_12a790:
    // 0x12a790: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12a794:
    // 0x12a794: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A794u;
    {
        const bool branch_taken_0x12a794 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A794u;
            // 0x12a798: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a794) {
            ctx->pc = 0x12A7A4u;
            goto label_12a7a4;
        }
    }
    ctx->pc = 0x12A79Cu;
    // 0x12a79c: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12A79Cu;
    {
        const bool branch_taken_0x12a79c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a79c) {
            ctx->pc = 0x12A7D0u;
            goto label_12a7d0;
        }
    }
    ctx->pc = 0x12A7A4u;
label_12a7a4:
    // 0x12a7a4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12a7a8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A7A8u;
    {
        const bool branch_taken_0x12a7a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7A8u;
            // 0x12a7ac: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7a8) {
            ctx->pc = 0x12A7D0u;
            goto label_12a7d0;
        }
    }
    ctx->pc = 0x12A7B0u;
    // 0x12a7b0: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x12a7b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a7b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A7B4u;
    {
        const bool branch_taken_0x12a7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7B4u;
            // 0x12a7b8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7b4) {
            ctx->pc = 0x12A7C4u;
            goto label_12a7c4;
        }
    }
    ctx->pc = 0x12A7BCu;
    // 0x12a7bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A7BCu;
    {
        const bool branch_taken_0x12a7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a7bc) {
            ctx->pc = 0x12A7D0u;
            goto label_12a7d0;
        }
    }
    ctx->pc = 0x12A7C4u;
label_12a7c4:
    // 0x12a7c4: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x12a7c4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x12a7c8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12a7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a7cc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x12a7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_12a7d0:
    // 0x12a7d0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A7D0u;
    {
        const bool branch_taken_0x12a7d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7D0u;
            // 0x12a7d4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7d0) {
            ctx->pc = 0x12A7E4u;
            goto label_12a7e4;
        }
    }
    ctx->pc = 0x12A7D8u;
    // 0x12a7d8: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x12a7d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12a7dc: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x12a7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x12a7e0: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x12a7e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_12a7e4:
    // 0x12a7e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12a7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a7e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12a7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12a7ec: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x12a7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a7f0: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x12a7f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x12a7f4: 0x5ea00b  movn        $s4, $v0, $fp
    ctx->pc = 0x12a7f4u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
    // 0x12a7f8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x12a7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a7fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a800: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x12A800u;
    SET_GPR_U32(ctx, 31, 0x12A808u);
    ctx->pc = 0x12A804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A800u;
            // 0x12a804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A808u; }
        if (ctx->pc != 0x12A808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A808u; }
        if (ctx->pc != 0x12A808u) { return; }
    }
    ctx->pc = 0x12A808u;
label_12a808:
    // 0x12a808: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x12a808u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a80c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a814: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x12a814u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a818: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x12a818u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12a81c: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x12A81Cu;
    SET_GPR_U32(ctx, 31, 0x12A824u);
    ctx->pc = 0x12A820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A81Cu;
            // 0x12a820: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A824u; }
        if (ctx->pc != 0x12A824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A824u; }
        if (ctx->pc != 0x12A824u) { return; }
    }
    ctx->pc = 0x12A824u;
label_12a824:
    // 0x12a824: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x12a828: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12a828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a82c: 0x24701f01  addiu       $s0, $v1, 0x1F01
    ctx->pc = 0x12a82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7937));
    // 0x12a830: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12A830u;
    {
        const bool branch_taken_0x12a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A830u;
            // 0x12a834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a830) {
            ctx->pc = 0x12A884u;
            goto label_12a884;
        }
    }
    ctx->pc = 0x12A838u;
label_12a838:
    // 0x12a838: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x12a838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12a83c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12A83Cu;
    {
        const bool branch_taken_0x12a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a83c) {
            ctx->pc = 0x12A8B8u;
            goto label_12a8b8;
        }
    }
    ctx->pc = 0x12A844u;
    // 0x12a844: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A844u;
    {
        const bool branch_taken_0x12a844 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x12A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A844u;
            // 0x12a848: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a844) {
            ctx->pc = 0x12A868u;
            goto label_12a868;
        }
    }
    ctx->pc = 0x12A84Cu;
    // 0x12a84c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12A84Cu;
    {
        const bool branch_taken_0x12a84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a84c) {
            ctx->pc = 0x12A850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A84Cu;
            // 0x12a850: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A87Cu;
            goto label_12a87c;
        }
    }
    ctx->pc = 0x12A854u;
    // 0x12a854: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A854u;
    {
        const bool branch_taken_0x12a854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x12A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A854u;
            // 0x12a858: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a854) {
            ctx->pc = 0x12A870u;
            goto label_12a870;
        }
    }
    ctx->pc = 0x12A85Cu;
    // 0x12a85c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x12a85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12a860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A860u;
    {
        const bool branch_taken_0x12a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a860) {
            ctx->pc = 0x12A870u;
            goto label_12a870;
        }
    }
    ctx->pc = 0x12A868u;
label_12a868:
    // 0x12a868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A868u;
    {
        const bool branch_taken_0x12a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A868u;
            // 0x12a86c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a868) {
            ctx->pc = 0x12A87Cu;
            goto label_12a87c;
        }
    }
    ctx->pc = 0x12A870u;
label_12a870:
    // 0x12a870: 0xc0a1bee  jal         func_286FB8
    ctx->pc = 0x12A870u;
    SET_GPR_U32(ctx, 31, 0x12A878u);
    ctx->pc = 0x12A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A870u;
            // 0x12a874: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB8u;
    if (runtime->hasFunction(0x286FB8u)) {
        auto targetFn = runtime->lookupFunction(0x286FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A878u; }
        if (ctx->pc != 0x12A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x286fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A878u; }
        if (ctx->pc != 0x12A878u) { return; }
    }
    ctx->pc = 0x12A878u;
label_12a878:
    // 0x12a878: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x12a878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_12a87c:
    // 0x12a87c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12a87cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a880: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12a880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12a884:
    // 0x12a884: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x12a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x12a888: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x12a888u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a88c: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x12a88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x12a890: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A890u;
    {
        const bool branch_taken_0x12a890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A890u;
            // 0x12a894: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a890) {
            ctx->pc = 0x12A8A0u;
            goto label_12a8a0;
        }
    }
    ctx->pc = 0x12A898u;
    // 0x12a898: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x12A898u;
    {
        const bool branch_taken_0x12a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A898u;
            // 0x12a89c: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a898) {
            ctx->pc = 0x12A838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a838;
        }
    }
    ctx->pc = 0x12A8A0u;
label_12a8a0:
    // 0x12a8a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A8A0u;
    {
        const bool branch_taken_0x12a8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8A0u;
            // 0x12a8a4: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8a0) {
            ctx->pc = 0x12A8B8u;
            goto label_12a8b8;
        }
    }
    ctx->pc = 0x12A8A8u;
    // 0x12a8a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x12a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12a8ac: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x12a8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x12a8b0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x12A8B0u;
    {
        const bool branch_taken_0x12a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8B0u;
            // 0x12a8b4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8b0) {
            ctx->pc = 0x12A838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a838;
        }
    }
    ctx->pc = 0x12A8B8u;
label_12a8b8:
    // 0x12a8b8: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x12A8B8u;
    {
        const bool branch_taken_0x12a8b8 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x12A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8B8u;
            // 0x12a8bc: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8b8) {
            ctx->pc = 0x12A8E4u;
            goto label_12a8e4;
        }
    }
    ctx->pc = 0x12A8C0u;
    // 0x12a8c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12a8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a8c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12a8c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a8cc: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x12a8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x12a8d0: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x12a8d0u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
    // 0x12a8d4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x12a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12a8d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a8dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A8DCu;
    {
        const bool branch_taken_0x12a8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8DCu;
            // 0x12a8e0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8dc) {
            ctx->pc = 0x12A8E8u;
            goto label_12a8e8;
        }
    }
    ctx->pc = 0x12A8E4u;
label_12a8e4:
    // 0x12a8e4: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x12a8e4u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_12a8e8:
    // 0x12a8e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a8ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A8ECu;
    {
        const bool branch_taken_0x12a8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8ECu;
            // 0x12a8f0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8ec) {
            ctx->pc = 0x12A904u;
            goto label_12a904;
        }
    }
    ctx->pc = 0x12A8F4u;
    // 0x12a8f4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x12a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12a8f8: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x12a8f8u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x12a8fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a900: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12a900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12a904:
    // 0x12a904: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12a904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a908: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a90c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x12a90cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a910: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x12a910u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a914: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x12a914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a918: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x12a918u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a91c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12a91cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a920: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x12a920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a924: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12a924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a928: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x12a928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a92c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12a92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a930: 0x3e00008  jr          $ra
    ctx->pc = 0x12A930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A930u;
            // 0x12a934: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A938u;
}
