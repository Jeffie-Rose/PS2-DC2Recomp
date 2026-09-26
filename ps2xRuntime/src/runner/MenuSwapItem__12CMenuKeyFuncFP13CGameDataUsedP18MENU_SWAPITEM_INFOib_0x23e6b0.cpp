#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib
// Address: 0x23e6b0 - 0x23e78c
void MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0");
#endif

    switch (ctx->pc) {
        case 0x23e6f0u: goto label_23e6f0;
        case 0x23e744u: goto label_23e744;
        case 0x23e758u: goto label_23e758;
        case 0x23e76cu: goto label_23e76c;
        default: break;
    }

    ctx->pc = 0x23e6b0u;

    // 0x23e6b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23e6b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23e6b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23e6bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23e6c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e6c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23e6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e6d0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E6D0u;
    {
        const bool branch_taken_0x23e6d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E6D0u;
            // 0x23e6d4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6d0) {
            ctx->pc = 0x23E6E0u;
            goto label_23e6e0;
        }
    }
    ctx->pc = 0x23E6D8u;
    // 0x23e6d8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23E6D8u;
    {
        const bool branch_taken_0x23e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E6D8u;
            // 0x23e6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6d8) {
            ctx->pc = 0x23E770u;
            goto label_23e770;
        }
    }
    ctx->pc = 0x23E6E0u;
label_23e6e0:
    // 0x23e6e0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23e6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6e8: 0xc08ee40  jal         func_23B900
    ctx->pc = 0x23E6E8u;
    SET_GPR_U32(ctx, 31, 0x23E6F0u);
    ctx->pc = 0x23E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E6E8u;
            // 0x23e6ec: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B900u;
    if (runtime->hasFunction(0x23B900u)) {
        auto targetFn = runtime->lookupFunction(0x23B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E6F0u; }
        if (ctx->pc != 0x23E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x23b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E6F0u; }
        if (ctx->pc != 0x23E6F0u) { return; }
    }
    ctx->pc = 0x23E6F0u;
label_23e6f0:
    // 0x23e6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6f4: 0x8662012c  lh          $v0, 0x12C($s3)
    ctx->pc = 0x23e6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x23e6f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E6F8u;
    {
        const bool branch_taken_0x23e6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e6f8) {
            ctx->pc = 0x23E728u;
            goto label_23e728;
        }
    }
    ctx->pc = 0x23E700u;
    // 0x23e700: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x23e700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e708: 0xa663012c  sh          $v1, 0x12C($s3)
    ctx->pc = 0x23e708u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 300), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e70c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x23e710: 0xa663012e  sh          $v1, 0x12E($s3)
    ctx->pc = 0x23e710u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 302), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e714: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x23e714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e718: 0xa6630130  sh          $v1, 0x130($s3)
    ctx->pc = 0x23e718u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e71c: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x23e71cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x23e720: 0xa6630132  sh          $v1, 0x132($s3)
    ctx->pc = 0x23e720u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e724: 0xa662012c  sh          $v0, 0x12C($s3)
    ctx->pc = 0x23e724u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 300), (uint16_t)GPR_U32(ctx, 2));
label_23e728:
    // 0x23e728: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x23e728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x23e72c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E72Cu;
    {
        const bool branch_taken_0x23e72c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E72Cu;
            // 0x23e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e72c) {
            ctx->pc = 0x23E74Cu;
            goto label_23e74c;
        }
    }
    ctx->pc = 0x23E734u;
    // 0x23e734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e73c: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23E73Cu;
    SET_GPR_U32(ctx, 31, 0x23E744u);
    ctx->pc = 0x23E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E73Cu;
            // 0x23e740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E744u; }
        if (ctx->pc != 0x23E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E744u; }
        if (ctx->pc != 0x23E744u) { return; }
    }
    ctx->pc = 0x23E744u;
label_23e744:
    // 0x23e744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23E744u;
    {
        const bool branch_taken_0x23e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E744u;
            // 0x23e748: 0xa660012c  sh          $zero, 0x12C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 300), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e744) {
            ctx->pc = 0x23E758u;
            goto label_23e758;
        }
    }
    ctx->pc = 0x23E74Cu;
label_23e74c:
    // 0x23e74c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23e74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e750: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23E750u;
    SET_GPR_U32(ctx, 31, 0x23E758u);
    ctx->pc = 0x23E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E750u;
            // 0x23e754: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E758u; }
        if (ctx->pc != 0x23E758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E758u; }
        if (ctx->pc != 0x23E758u) { return; }
    }
    ctx->pc = 0x23E758u;
label_23e758:
    // 0x23e758: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x23e758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x23e75c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E75Cu;
    {
        const bool branch_taken_0x23e75c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E75Cu;
            // 0x23e760: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e75c) {
            ctx->pc = 0x23E770u;
            goto label_23e770;
        }
    }
    ctx->pc = 0x23E764u;
    // 0x23e764: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x23E764u;
    SET_GPR_U32(ctx, 31, 0x23E76Cu);
    ctx->pc = 0x23E768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E764u;
            // 0x23e768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E76Cu; }
        if (ctx->pc != 0x23E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E76Cu; }
        if (ctx->pc != 0x23E76Cu) { return; }
    }
    ctx->pc = 0x23E76Cu;
label_23e76c:
    // 0x23e76c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e770:
    // 0x23e770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23e770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e784: 0x3e00008  jr          $ra
    ctx->pc = 0x23E784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E784u;
            // 0x23e788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E78Cu;
}
