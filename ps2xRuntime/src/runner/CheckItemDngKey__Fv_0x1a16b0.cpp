#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemDngKey__Fv
// Address: 0x1a16b0 - 0x1a17bc
void CheckItemDngKey__Fv_0x1a16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemDngKey__Fv_0x1a16b0");
#endif

    switch (ctx->pc) {
        case 0x1a16ccu: goto label_1a16cc;
        case 0x1a16e0u: goto label_1a16e0;
        case 0x1a16ecu: goto label_1a16ec;
        case 0x1a16fcu: goto label_1a16fc;
        case 0x1a1714u: goto label_1a1714;
        case 0x1a1734u: goto label_1a1734;
        case 0x1a175cu: goto label_1a175c;
        case 0x1a178cu: goto label_1a178c;
        case 0x1a17a0u: goto label_1a17a0;
        default: break;
    }

    ctx->pc = 0x1a16b0u;

    // 0x1a16b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a16b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a16b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a16bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a16bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a16c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a16c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a16c4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A16C4u;
    SET_GPR_U32(ctx, 31, 0x1A16CCu);
    ctx->pc = 0x1A16C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16C4u;
            // 0x1a16c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16CCu; }
        if (ctx->pc != 0x1A16CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16CCu; }
        if (ctx->pc != 0x1A16CCu) { return; }
    }
    ctx->pc = 0x1A16CCu;
label_1a16cc:
    // 0x1a16cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a16ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16d0: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A16D0u;
    {
        const bool branch_taken_0x1a16d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16D0u;
            // 0x1a16d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16d0) {
            ctx->pc = 0x1A17A0u;
            goto label_1a17a0;
        }
    }
    ctx->pc = 0x1A16D8u;
    // 0x1a16d8: 0xc066d14  jal         func_19B450
    ctx->pc = 0x1A16D8u;
    SET_GPR_U32(ctx, 31, 0x1A16E0u);
    ctx->pc = 0x1A16DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16D8u;
            // 0x1a16dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16E0u; }
        if (ctx->pc != 0x1A16E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16E0u; }
        if (ctx->pc != 0x1A16E0u) { return; }
    }
    ctx->pc = 0x1A16E0u;
label_1a16e0:
    // 0x1a16e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a16e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16e4: 0xc068644  jal         func_1A1910
    ctx->pc = 0x1A16E4u;
    SET_GPR_U32(ctx, 31, 0x1A16ECu);
    ctx->pc = 0x1A16E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16E4u;
            // 0x1a16e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16ECu; }
        if (ctx->pc != 0x1A16ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16ECu; }
        if (ctx->pc != 0x1A16ECu) { return; }
    }
    ctx->pc = 0x1A16ECu;
label_1a16ec:
    // 0x1a16ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a16ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16f0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1a16f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a16f4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1A16F4u;
    {
        const bool branch_taken_0x1a16f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16F4u;
            // 0x1a16f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16f4) {
            ctx->pc = 0x1A1728u;
            goto label_1a1728;
        }
    }
    ctx->pc = 0x1A16FCu;
label_1a16fc:
    // 0x1a16fc: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x1a16fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1700: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1a1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1a1704: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1704u;
    {
        const bool branch_taken_0x1a1704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1704u;
            // 0x1a1708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1704) {
            ctx->pc = 0x1A1714u;
            goto label_1a1714;
        }
    }
    ctx->pc = 0x1A170Cu;
    // 0x1a170c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A170Cu;
    SET_GPR_U32(ctx, 31, 0x1A1714u);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1714u; }
        if (ctx->pc != 0x1A1714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1714u; }
        if (ctx->pc != 0x1A1714u) { return; }
    }
    ctx->pc = 0x1A1714u;
label_1a1714:
    // 0x1a1714: 0x0  nop
    ctx->pc = 0x1a1714u;
    // NOP
    // 0x1a1718: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a171c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1a171cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a1720: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A1720u;
    {
        const bool branch_taken_0x1a1720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1720u;
            // 0x1a1724: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1720) {
            ctx->pc = 0x1A16FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a16fc;
        }
    }
    ctx->pc = 0x1A1728u;
label_1a1728:
    // 0x1a1728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a172c: 0xc066d58  jal         func_19B560
    ctx->pc = 0x1A172Cu;
    SET_GPR_U32(ctx, 31, 0x1A1734u);
    ctx->pc = 0x1A1730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A172Cu;
            // 0x1a1730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B560u;
    if (runtime->hasFunction(0x19B560u)) {
        auto targetFn = runtime->lookupFunction(0x19B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1734u; }
        if (ctx->pc != 0x1A1734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHp__16CUserDataManagerFi_0x19b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1734u; }
        if (ctx->pc != 0x1A1734u) { return; }
    }
    ctx->pc = 0x1A1734u;
label_1a1734:
    // 0x1a1734: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a1738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a173c: 0x0  nop
    ctx->pc = 0x1a173cu;
    // NOP
    // 0x1a1740: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a1740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1744: 0x0  nop
    ctx->pc = 0x1a1744u;
    // NOP
    // 0x1a1748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1748u;
    {
        const bool branch_taken_0x1a1748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A174Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1748u;
            // 0x1a174c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1748) {
            ctx->pc = 0x1A1754u;
            goto label_1a1754;
        }
    }
    ctx->pc = 0x1A1750u;
    // 0x1a1750: 0xe6013f4c  swc1        $f1, 0x3F4C($s0)
    ctx->pc = 0x1a1750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16204), bits); }
label_1a1754:
    // 0x1a1754: 0xc066d58  jal         func_19B560
    ctx->pc = 0x1A1754u;
    SET_GPR_U32(ctx, 31, 0x1A175Cu);
    ctx->pc = 0x1A1758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1754u;
            // 0x1a1758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B560u;
    if (runtime->hasFunction(0x19B560u)) {
        auto targetFn = runtime->lookupFunction(0x19B560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A175Cu; }
        if (ctx->pc != 0x1A175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHp__16CUserDataManagerFi_0x19b560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A175Cu; }
        if (ctx->pc != 0x1A175Cu) { return; }
    }
    ctx->pc = 0x1A175Cu;
label_1a175c:
    // 0x1a175c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1760: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a1760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1764: 0x0  nop
    ctx->pc = 0x1a1764u;
    // NOP
    // 0x1a1768: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a1768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a176c: 0x0  nop
    ctx->pc = 0x1a176cu;
    // NOP
    // 0x1a1770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1770u;
    {
        const bool branch_taken_0x1a1770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1770u;
            // 0x1a1774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1770) {
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A1778u;
    // 0x1a1778: 0xe60142d8  swc1        $f1, 0x42D8($s0)
    ctx->pc = 0x1a1778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 17112), bits); }
label_1a177c:
    // 0x1a177c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1784: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x1A1784u;
    SET_GPR_U32(ctx, 31, 0x1A178Cu);
    ctx->pc = 0x1A1788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1784u;
            // 0x1a1788: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A178Cu; }
        if (ctx->pc != 0x1A178Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A178Cu; }
        if (ctx->pc != 0x1A178Cu) { return; }
    }
    ctx->pc = 0x1A178Cu;
label_1a178c:
    // 0x1a178c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1794: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a1794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1798: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x1A1798u;
    SET_GPR_U32(ctx, 31, 0x1A17A0u);
    ctx->pc = 0x1A179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1798u;
            // 0x1a179c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17A0u; }
        if (ctx->pc != 0x1A17A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17A0u; }
        if (ctx->pc != 0x1A17A0u) { return; }
    }
    ctx->pc = 0x1A17A0u;
label_1a17a0:
    // 0x1a17a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a17a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a17a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a17a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a17a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a17a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a17ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a17acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a17b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a17b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a17b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A17B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A17B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17B4u;
            // 0x1a17b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A17BCu;
}
