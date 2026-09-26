#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__18CMemoryCardManagerFP9mgCMemory
// Address: 0x2f1690 - 0x2f1838
void Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690");
#endif

    switch (ctx->pc) {
        case 0x2f16b8u: goto label_2f16b8;
        case 0x2f16c8u: goto label_2f16c8;
        case 0x2f16d8u: goto label_2f16d8;
        case 0x2f16fcu: goto label_2f16fc;
        case 0x2f170cu: goto label_2f170c;
        case 0x2f1718u: goto label_2f1718;
        case 0x2f1720u: goto label_2f1720;
        case 0x2f1748u: goto label_2f1748;
        case 0x2f1758u: goto label_2f1758;
        case 0x2f1768u: goto label_2f1768;
        case 0x2f1780u: goto label_2f1780;
        case 0x2f1788u: goto label_2f1788;
        case 0x2f1790u: goto label_2f1790;
        case 0x2f17a0u: goto label_2f17a0;
        case 0x2f17ecu: goto label_2f17ec;
        case 0x2f17fcu: goto label_2f17fc;
        case 0x2f1804u: goto label_2f1804;
        case 0x2f1818u: goto label_2f1818;
        default: break;
    }

    ctx->pc = 0x2f1690u;

    // 0x2f1690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f1694: 0x24061100  addiu       $a2, $zero, 0x1100
    ctx->pc = 0x2f1694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x2f1698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f169c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f16a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f16a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f16a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f16a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f16a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f16acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16b0: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F16B0u;
    SET_GPR_U32(ctx, 31, 0x2F16B8u);
    ctx->pc = 0x2F16B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16B0u;
            // 0x2f16b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16B8u; }
        if (ctx->pc != 0x2F16B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16B8u; }
        if (ctx->pc != 0x2F16B8u) { return; }
    }
    ctx->pc = 0x2F16B8u;
label_2f16b8:
    // 0x2f16b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f16bc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2f16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f16c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F16C0u;
    SET_GPR_U32(ctx, 31, 0x2F16C8u);
    ctx->pc = 0x2F16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16C0u;
            // 0x2f16c4: 0x24a517e0  addiu       $a1, $a1, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16C8u; }
        if (ctx->pc != 0x2F16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16C8u; }
        if (ctx->pc != 0x2F16C8u) { return; }
    }
    ctx->pc = 0x2F16C8u;
label_2f16c8:
    // 0x2f16c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f16c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f16cc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2f16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2f16d0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F16D0u;
    SET_GPR_U32(ctx, 31, 0x2F16D8u);
    ctx->pc = 0x2F16D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16D0u;
            // 0x2f16d4: 0x24a517f8  addiu       $a1, $a1, 0x17F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16D8u; }
        if (ctx->pc != 0x2F16D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16D8u; }
        if (ctx->pc != 0x2F16D8u) { return; }
    }
    ctx->pc = 0x2F16D8u;
label_2f16d8:
    // 0x2f16d8: 0xae0004c8  sw          $zero, 0x4C8($s0)
    ctx->pc = 0x2f16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 0));
    // 0x2f16dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f16e0: 0xae0004cc  sw          $zero, 0x4CC($s0)
    ctx->pc = 0x2f16e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 0));
    // 0x2f16e4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2f16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2f16e8: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F16E8u;
    {
        const bool branch_taken_0x2f16e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16E8u;
            // 0x2f16ec: 0xae0008ec  sw          $zero, 0x8EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16e8) {
            ctx->pc = 0x2F1780u;
            goto label_2f1780;
        }
    }
    ctx->pc = 0x2F16F0u;
    // 0x2f16f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f16f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16f4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F16F4u;
    SET_GPR_U32(ctx, 31, 0x2F16FCu);
    ctx->pc = 0x2F16F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F16F4u;
            // 0x2f16f8: 0x2405659e  addiu       $a1, $zero, 0x659E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26014));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16FCu; }
        if (ctx->pc != 0x2F16FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16FCu; }
        if (ctx->pc != 0x2F16FCu) { return; }
    }
    ctx->pc = 0x2F16FCu;
label_2f16fc:
    // 0x2f16fc: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2f16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2f1700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f1700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1704: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2F1704u;
    SET_GPR_U32(ctx, 31, 0x2F170Cu);
    ctx->pc = 0x2F1708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1704u;
            // 0x2f1708: 0x346459c0  ori         $a0, $v1, 0x59C0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22976);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F170Cu; }
        if (ctx->pc != 0x2F170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F170Cu; }
        if (ctx->pc != 0x2F170Cu) { return; }
    }
    ctx->pc = 0x2F170Cu;
label_2f170c:
    // 0x2f170c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F170Cu;
    {
        const bool branch_taken_0x2f170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F170Cu;
            // 0x2f1710: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f170c) {
            ctx->pc = 0x2F1768u;
            goto label_2f1768;
        }
    }
    ctx->pc = 0x2F1714u;
    // 0x2f1714: 0x26321ca4  addiu       $s2, $s1, 0x1CA4
    ctx->pc = 0x2f1714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7332));
label_2f1718:
    // 0x2f1718: 0xc065154  jal         func_194550
    ctx->pc = 0x2F1718u;
    SET_GPR_U32(ctx, 31, 0x2F1720u);
    ctx->pc = 0x2F171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1718u;
            // 0x2f171c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194550u;
    if (runtime->hasFunction(0x194550u)) {
        auto targetFn = runtime->lookupFunction(0x194550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1720u; }
        if (ctx->pc != 0x2F1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CEditDataFv_0x194550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1720u; }
        if (ctx->pc != 0x2F1720u) { return; }
    }
    ctx->pc = 0x2F1720u;
label_2f1720:
    // 0x2f1720: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f1720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f1724: 0x26525510  addiu       $s2, $s2, 0x5510
    ctx->pc = 0x2f1724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21776));
    // 0x2f1728: 0x3421c5f4  ori         $at, $at, 0xC5F4
    ctx->pc = 0x2f1728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50676);
    // 0x2f172c: 0x2211021  addu        $v0, $s1, $at
    ctx->pc = 0x2f172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2f1730: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2f1730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f1734: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F1734u;
    {
        const bool branch_taken_0x2f1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1734u;
            // 0x2f1738: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1734) {
            ctx->pc = 0x2F1718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1718;
        }
    }
    ctx->pc = 0x2F173Cu;
    // 0x2f173c: 0x3421d320  ori         $at, $at, 0xD320
    ctx->pc = 0x2f173cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54048);
    // 0x2f1740: 0xc0650ec  jal         func_1943B0
    ctx->pc = 0x2F1740u;
    SET_GPR_U32(ctx, 31, 0x2F1748u);
    ctx->pc = 0x2F1744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1740u;
            // 0x2f1744: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1943B0u;
    if (runtime->hasFunction(0x1943B0u)) {
        auto targetFn = runtime->lookupFunction(0x1943B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1748u; }
        if (ctx->pc != 0x2F1748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__16CUserDataManagerFv_0x1943b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1748u; }
        if (ctx->pc != 0x2F1748u) { return; }
    }
    ctx->pc = 0x2F1748u;
label_2f1748:
    // 0x2f1748: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f1748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f174c: 0x34212ac0  ori         $at, $at, 0x2AC0
    ctx->pc = 0x2f174cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10944);
    // 0x2f1750: 0xc0c6a8c  jal         func_31AA30
    ctx->pc = 0x2F1750u;
    SET_GPR_U32(ctx, 31, 0x2F1758u);
    ctx->pc = 0x2F1754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1750u;
            // 0x2f1754: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AA30u;
    if (runtime->hasFunction(0x31AA30u)) {
        auto targetFn = runtime->lookupFunction(0x31AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1758u; }
        if (ctx->pc != 0x2F1758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CQuestDataFv_0x31aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1758u; }
        if (ctx->pc != 0x2F1758u) { return; }
    }
    ctx->pc = 0x2F1758u;
label_2f1758:
    // 0x2f1758: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f1758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f175c: 0x34214140  ori         $at, $at, 0x4140
    ctx->pc = 0x2f175cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16704);
    // 0x2f1760: 0xc0bc4b4  jal         func_2F12D0
    ctx->pc = 0x2F1760u;
    SET_GPR_U32(ctx, 31, 0x2F1768u);
    ctx->pc = 0x2F1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1760u;
            // 0x2f1764: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F12D0u;
    if (runtime->hasFunction(0x2F12D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F12D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1768u; }
        if (ctx->pc != 0x2F1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15CMenuSystemDataFv_0x2f12d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1768u; }
        if (ctx->pc != 0x2F1768u) { return; }
    }
    ctx->pc = 0x2F1768u;
label_2f1768:
    // 0x2f1768: 0xae1108ec  sw          $s1, 0x8EC($s0)
    ctx->pc = 0x2f1768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 17));
    // 0x2f176c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f1770: 0x8e0408ec  lw          $a0, 0x8EC($s0)
    ctx->pc = 0x2f1770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f1774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1778: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F1778u;
    SET_GPR_U32(ctx, 31, 0x2F1780u);
    ctx->pc = 0x2F177Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1778u;
            // 0x2f177c: 0x344659c0  ori         $a2, $v0, 0x59C0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1780u; }
        if (ctx->pc != 0x2F1780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1780u; }
        if (ctx->pc != 0x2F1780u) { return; }
    }
    ctx->pc = 0x2F1780u;
label_2f1780:
    // 0x2f1780: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F1780u;
    SET_GPR_U32(ctx, 31, 0x2F1788u);
    ctx->pc = 0x2F1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1780u;
            // 0x2f1784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1788u; }
        if (ctx->pc != 0x2F1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1788u; }
        if (ctx->pc != 0x2F1788u) { return; }
    }
    ctx->pc = 0x2F1788u;
label_2f1788:
    // 0x2f1788: 0xc0bc610  jal         func_2F1840
    ctx->pc = 0x2F1788u;
    SET_GPR_U32(ctx, 31, 0x2F1790u);
    ctx->pc = 0x2F178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1788u;
            // 0x2f178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1840u;
    if (runtime->hasFunction(0x2F1840u)) {
        auto targetFn = runtime->lookupFunction(0x2F1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1790u; }
        if (ctx->pc != 0x2F1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveFileInfoTable__18CMemoryCardManagerFv_0x2f1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1790u; }
        if (ctx->pc != 0x2F1790u) { return; }
    }
    ctx->pc = 0x2F1790u;
label_2f1790:
    // 0x2f1790: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f1790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f1794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1798: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F1798u;
    SET_GPR_U32(ctx, 31, 0x2F17A0u);
    ctx->pc = 0x2F179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1798u;
            // 0x2f179c: 0x24a51808  addiu       $a1, $a1, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17A0u; }
        if (ctx->pc != 0x2F17A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17A0u; }
        if (ctx->pc != 0x2F17A0u) { return; }
    }
    ctx->pc = 0x2F17A0u;
label_2f17a0:
    // 0x2f17a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f17a4: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x2f17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2f17a8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2f17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2f17ac: 0x260404ec  addiu       $a0, $s0, 0x4EC
    ctx->pc = 0x2f17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1260));
    // 0x2f17b0: 0xae03090c  sw          $v1, 0x90C($s0)
    ctx->pc = 0x2f17b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2316), GPR_U32(ctx, 3));
    // 0x2f17b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f17b8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2f17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2f17bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f17bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17c0: 0xae0004c4  sw          $zero, 0x4C4($s0)
    ctx->pc = 0x2f17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 0));
    // 0x2f17c4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2f17c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f17c8: 0xae0008f4  sw          $zero, 0x8F4($s0)
    ctx->pc = 0x2f17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2292), GPR_U32(ctx, 0));
    // 0x2f17cc: 0xae0208f8  sw          $v0, 0x8F8($s0)
    ctx->pc = 0x2f17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2296), GPR_U32(ctx, 2));
    // 0x2f17d0: 0xae0208fc  sw          $v0, 0x8FC($s0)
    ctx->pc = 0x2f17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2300), GPR_U32(ctx, 2));
    // 0x2f17d4: 0xae000908  sw          $zero, 0x908($s0)
    ctx->pc = 0x2f17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2312), GPR_U32(ctx, 0));
    // 0x2f17d8: 0xae000918  sw          $zero, 0x918($s0)
    ctx->pc = 0x2f17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 0));
    // 0x2f17dc: 0xae000910  sw          $zero, 0x910($s0)
    ctx->pc = 0x2f17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2320), GPR_U32(ctx, 0));
    // 0x2f17e0: 0xae000914  sw          $zero, 0x914($s0)
    ctx->pc = 0x2f17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x2f17e4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F17E4u;
    SET_GPR_U32(ctx, 31, 0x2F17ECu);
    ctx->pc = 0x2F17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17E4u;
            // 0x2f17e8: 0xae00091c  sw          $zero, 0x91C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17ECu; }
        if (ctx->pc != 0x2F17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17ECu; }
        if (ctx->pc != 0x2F17ECu) { return; }
    }
    ctx->pc = 0x2F17ECu;
label_2f17ec:
    // 0x2f17ec: 0x26040d5c  addiu       $a0, $s0, 0xD5C
    ctx->pc = 0x2f17ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3420));
    // 0x2f17f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f17f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17f4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F17F4u;
    SET_GPR_U32(ctx, 31, 0x2F17FCu);
    ctx->pc = 0x2F17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17F4u;
            // 0x2f17f8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17FCu; }
        if (ctx->pc != 0x2F17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17FCu; }
        if (ctx->pc != 0x2F17FCu) { return; }
    }
    ctx->pc = 0x2F17FCu;
label_2f17fc:
    // 0x2f17fc: 0xc0bc7b4  jal         func_2F1ED0
    ctx->pc = 0x2F17FCu;
    SET_GPR_U32(ctx, 31, 0x2F1804u);
    ctx->pc = 0x2F1800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17FCu;
            // 0x2f1800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1ED0u;
    if (runtime->hasFunction(0x2F1ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1804u; }
        if (ctx->pc != 0x2F1804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1804u; }
        if (ctx->pc != 0x2F1804u) { return; }
    }
    ctx->pc = 0x2F1804u;
label_2f1804:
    // 0x2f1804: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x2f1804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x2f1808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f180c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2f180cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2f1810: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F1810u;
    SET_GPR_U32(ctx, 31, 0x2F1818u);
    ctx->pc = 0x2F1814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1810u;
            // 0x2f1814: 0xae0010e0  sw          $zero, 0x10E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1818u; }
        if (ctx->pc != 0x2F1818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1818u; }
        if (ctx->pc != 0x2F1818u) { return; }
    }
    ctx->pc = 0x2F1818u;
label_2f1818:
    // 0x2f1818: 0xae000d5c  sw          $zero, 0xD5C($s0)
    ctx->pc = 0x2f1818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3420), GPR_U32(ctx, 0));
    // 0x2f181c: 0xae000d7c  sw          $zero, 0xD7C($s0)
    ctx->pc = 0x2f181cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3452), GPR_U32(ctx, 0));
    // 0x2f1820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f182c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1830: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1830u;
            // 0x2f1834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1838u;
}
