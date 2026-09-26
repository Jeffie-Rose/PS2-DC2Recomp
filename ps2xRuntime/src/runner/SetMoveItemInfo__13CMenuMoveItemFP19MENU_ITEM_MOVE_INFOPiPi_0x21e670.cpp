#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi
// Address: 0x21e670 - 0x21e7f0
void SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi_0x21e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi_0x21e670");
#endif

    switch (ctx->pc) {
        case 0x21e6a4u: goto label_21e6a4;
        case 0x21e6d0u: goto label_21e6d0;
        case 0x21e700u: goto label_21e700;
        case 0x21e70cu: goto label_21e70c;
        case 0x21e734u: goto label_21e734;
        case 0x21e744u: goto label_21e744;
        case 0x21e76cu: goto label_21e76c;
        case 0x21e794u: goto label_21e794;
        case 0x21e7a4u: goto label_21e7a4;
        default: break;
    }

    ctx->pc = 0x21e670u;

    // 0x21e670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21e674: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21e678: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21e67c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e680: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21e680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e684: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e688: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21e688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e690: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21e690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e694: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x21E694u;
    {
        const bool branch_taken_0x21e694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E694u;
            // 0x21e698: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e694) {
            ctx->pc = 0x21E7D0u;
            goto label_21e7d0;
        }
    }
    ctx->pc = 0x21E69Cu;
    // 0x21e69c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e6a4:
    // 0x21e6a4: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x21e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x21e6a8: 0x2470000c  addiu       $s0, $v1, 0xC
    ctx->pc = 0x21e6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x21e6ac: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x21e6acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21e6b0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x21E6B0u;
    {
        const bool branch_taken_0x21e6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e6b0) {
            ctx->pc = 0x21E7BCu;
            goto label_21e7bc;
        }
    }
    ctx->pc = 0x21E6B8u;
    // 0x21e6b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21e6bc: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x21e6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x21e6c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21e6c4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21e6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21e6c8: 0xc049c18  jal         func_127060
    ctx->pc = 0x21E6C8u;
    SET_GPR_U32(ctx, 31, 0x21E6D0u);
    ctx->pc = 0x21E6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6C8u;
            // 0x21e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6D0u; }
        if (ctx->pc != 0x21E6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6D0u; }
        if (ctx->pc != 0x21E6D0u) { return; }
    }
    ctx->pc = 0x21E6D0u;
label_21e6d0:
    // 0x21e6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e6d4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x21e6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x21e6d8: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x21e6d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x21e6dc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E6DCu;
    {
        const bool branch_taken_0x21e6dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21e6dc) {
            ctx->pc = 0x21E6E8u;
            goto label_21e6e8;
        }
    }
    ctx->pc = 0x21E6E4u;
    // 0x21e6e4: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x21e6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_21e6e8:
    // 0x21e6e8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x21e6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x21e6ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e6f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E6F0u;
    {
        const bool branch_taken_0x21e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6F0u;
            // 0x21e6f4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6f0) {
            ctx->pc = 0x21E70Cu;
            goto label_21e70c;
        }
    }
    ctx->pc = 0x21E6F8u;
    // 0x21e6f8: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x21E6F8u;
    SET_GPR_U32(ctx, 31, 0x21E700u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E700u; }
        if (ctx->pc != 0x21E700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E700u; }
        if (ctx->pc != 0x21E700u) { return; }
    }
    ctx->pc = 0x21E700u;
label_21e700:
    // 0x21e700: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x21e700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21e704: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x21E704u;
    SET_GPR_U32(ctx, 31, 0x21E70Cu);
    ctx->pc = 0x21E708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E704u;
            // 0x21e708: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E70Cu; }
        if (ctx->pc != 0x21E70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E70Cu; }
        if (ctx->pc != 0x21E70Cu) { return; }
    }
    ctx->pc = 0x21E70Cu;
label_21e70c:
    // 0x21e70c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x21e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e718: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21e718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e71c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21e71cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21e720: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x21e720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x21e724: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x21e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21e728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21e72c: 0xc08a264  jal         func_228990
    ctx->pc = 0x21E72Cu;
    SET_GPR_U32(ctx, 31, 0x21E734u);
    ctx->pc = 0x21E730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E72Cu;
            // 0x21e730: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E734u; }
        if (ctx->pc != 0x21E734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E734u; }
        if (ctx->pc != 0x21E734u) { return; }
    }
    ctx->pc = 0x21E734u;
label_21e734:
    // 0x21e734: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21e734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21e738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e73c: 0xc089664  jal         func_225990
    ctx->pc = 0x21E73Cu;
    SET_GPR_U32(ctx, 31, 0x21E744u);
    ctx->pc = 0x21E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E73Cu;
            // 0x21e740: 0x24a5a570  addiu       $a1, $a1, -0x5A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E744u; }
        if (ctx->pc != 0x21E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E744u; }
        if (ctx->pc != 0x21E744u) { return; }
    }
    ctx->pc = 0x21E744u;
label_21e744:
    // 0x21e744: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x21e744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x21e748: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e74c: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x21e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x21e750: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x21e750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x21e754: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x21e754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x21e758: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x21e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21e75c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E75Cu;
    {
        const bool branch_taken_0x21e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E75Cu;
            // 0x21e760: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e75c) {
            ctx->pc = 0x21E770u;
            goto label_21e770;
        }
    }
    ctx->pc = 0x21E764u;
    // 0x21e764: 0xc065c94  jal         func_197250
    ctx->pc = 0x21E764u;
    SET_GPR_U32(ctx, 31, 0x21E76Cu);
    ctx->pc = 0x197250u;
    if (runtime->hasFunction(0x197250u)) {
        auto targetFn = runtime->lookupFunction(0x197250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E76Cu; }
        if (ctx->pc != 0x21E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpectolNo__13CGameDataUsedFv_0x197250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E76Cu; }
        if (ctx->pc != 0x21E76Cu) { return; }
    }
    ctx->pc = 0x21E76Cu;
label_21e76c:
    // 0x21e76c: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x21e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_21e770:
    // 0x21e770: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x21e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x21e774: 0x240201aa  addiu       $v0, $zero, 0x1AA
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x21e778: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E778u;
    {
        const bool branch_taken_0x21e778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E778u;
            // 0x21e77c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e778) {
            ctx->pc = 0x21E788u;
            goto label_21e788;
        }
    }
    ctx->pc = 0x21E780u;
    // 0x21e780: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x21e780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21e784: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x21e784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_21e788:
    // 0x21e788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e78c: 0xc089664  jal         func_225990
    ctx->pc = 0x21E78Cu;
    SET_GPR_U32(ctx, 31, 0x21E794u);
    ctx->pc = 0x21E790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E78Cu;
            // 0x21e790: 0x24a5a568  addiu       $a1, $a1, -0x5A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E794u; }
        if (ctx->pc != 0x21E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E794u; }
        if (ctx->pc != 0x21E794u) { return; }
    }
    ctx->pc = 0x21E794u;
label_21e794:
    // 0x21e794: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x21e794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x21e798: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e79c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x21E79Cu;
    SET_GPR_U32(ctx, 31, 0x21E7A4u);
    ctx->pc = 0x21E7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E79Cu;
            // 0x21e7a0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7A4u; }
        if (ctx->pc != 0x21E7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7A4u; }
        if (ctx->pc != 0x21E7A4u) { return; }
    }
    ctx->pc = 0x21E7A4u;
label_21e7a4:
    // 0x21e7a4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x21e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x21e7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e7ac: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x21e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x21e7b0: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x21e7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21e7b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21E7B4u;
    {
        const bool branch_taken_0x21e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7B4u;
            // 0x21e7b8: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7b4) {
            ctx->pc = 0x21E7CCu;
            goto label_21e7cc;
        }
    }
    ctx->pc = 0x21E7BCu;
label_21e7bc:
    // 0x21e7bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21e7c0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x21e7c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21e7c4: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x21E7C4u;
    {
        const bool branch_taken_0x21e7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7C4u;
            // 0x21e7c8: 0x24c6007c  addiu       $a2, $a2, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7c4) {
            ctx->pc = 0x21E6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e6a4;
        }
    }
    ctx->pc = 0x21E7CCu;
label_21e7cc:
    // 0x21e7cc: 0x0  nop
    ctx->pc = 0x21e7ccu;
    // NOP
label_21e7d0:
    // 0x21e7d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21e7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e7d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21e7d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e7d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e7dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7E8u;
            // 0x21e7ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E7F0u;
}
