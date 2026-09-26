#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RING_COLOR__FP12RS_STACKDATAi
// Address: 0x2d16d0 - 0x2d1798
void ps2__GET_RING_COLOR__FP12RS_STACKDATAi_0x2d16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RING_COLOR__FP12RS_STACKDATAi_0x2d16d0");
#endif

    switch (ctx->pc) {
        case 0x2d16f8u: goto label_2d16f8;
        case 0x2d1710u: goto label_2d1710;
        case 0x2d1768u: goto label_2d1768;
        case 0x2d1778u: goto label_2d1778;
        case 0x2d1784u: goto label_2d1784;
        default: break;
    }

    ctx->pc = 0x2d16d0u;

    // 0x2d16d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d16d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d16d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d16d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d16d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d16dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d16dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d16e0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D16E0u;
    {
        const bool branch_taken_0x2d16e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D16E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D16E0u;
            // 0x2d16e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16e0) {
            ctx->pc = 0x2D16F0u;
            goto label_2d16f0;
        }
    }
    ctx->pc = 0x2D16E8u;
    // 0x2d16e8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D16E8u;
    {
        const bool branch_taken_0x2d16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D16E8u;
            // 0x2d16ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16e8) {
            ctx->pc = 0x2D1788u;
            goto label_2d1788;
        }
    }
    ctx->pc = 0x2D16F0u;
label_2d16f0:
    // 0x2d16f0: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D16F0u;
    SET_GPR_U32(ctx, 31, 0x2D16F8u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D16F8u; }
        if (ctx->pc != 0x2D16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D16F8u; }
        if (ctx->pc != 0x2D16F8u) { return; }
    }
    ctx->pc = 0x2D16F8u;
label_2d16f8:
    // 0x2d16f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2d16fc: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x2d16fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d1700: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2d1700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d1704: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2d1704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2d1708: 0xc065f9c  jal         func_197E70
    ctx->pc = 0x2D1708u;
    SET_GPR_U32(ctx, 31, 0x2D1710u);
    ctx->pc = 0x2D170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1708u;
            // 0x2d170c: 0x2444006c  addiu       $a0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197E70u;
    if (runtime->hasFunction(0x197E70u)) {
        auto targetFn = runtime->lookupFunction(0x197E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1710u; }
        if (ctx->pc != 0x2D1710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffectReadType__13CGameDataUsedFPPcPPcPi_0x197e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1710u; }
        if (ctx->pc != 0x2D1710u) { return; }
    }
    ctx->pc = 0x2D1710u;
label_2d1710:
    // 0x2d1710: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1710u;
    {
        const bool branch_taken_0x2d1710 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D1714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1710u;
            // 0x2d1714: 0x28410004  slti        $at, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1710) {
            ctx->pc = 0x2D1720u;
            goto label_2d1720;
        }
    }
    ctx->pc = 0x2D1718u;
    // 0x2d1718: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1718u;
    {
        const bool branch_taken_0x2d1718 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1718u;
            // 0x2d171c: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1718) {
            ctx->pc = 0x2D1728u;
            goto label_2d1728;
        }
    }
    ctx->pc = 0x2D1720u;
label_2d1720:
    // 0x2d1720: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1720u;
    {
        const bool branch_taken_0x2d1720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1720u;
            // 0x2d1724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1720) {
            ctx->pc = 0x2D1788u;
            goto label_2d1788;
        }
    }
    ctx->pc = 0x2D1728u;
label_2d1728:
    // 0x2d1728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d172c: 0x24636110  addiu       $v1, $v1, 0x6110
    ctx->pc = 0x2d172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24848));
    // 0x2d1730: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d1730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1734: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2d1734u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1738: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x2d1738u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d173c: 0x78650020  lq          $a1, 0x20($v1)
    ctx->pc = 0x2d173cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d1740: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d1740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d1744: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2d1744u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x2d1748: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d174c: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x2d174cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x2d1750: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2d1750u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d1754: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x2d1754u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x2d1758: 0x13d1021  addu        $v0, $t1, $sp
    ctx->pc = 0x2d1758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x2d175c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2d175cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d1760: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2D1760u;
    SET_GPR_U32(ctx, 31, 0x2D1768u);
    ctx->pc = 0x2D1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1760u;
            // 0x2d1764: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1768u; }
        if (ctx->pc != 0x2D1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1768u; }
        if (ctx->pc != 0x2D1768u) { return; }
    }
    ctx->pc = 0x2D1768u;
label_2d1768:
    // 0x2d1768: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2d1768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d176c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1770: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2D1770u;
    SET_GPR_U32(ctx, 31, 0x2D1778u);
    ctx->pc = 0x2D1774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1770u;
            // 0x2d1774: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1778u; }
        if (ctx->pc != 0x2D1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1778u; }
        if (ctx->pc != 0x2D1778u) { return; }
    }
    ctx->pc = 0x2D1778u;
label_2d1778:
    // 0x2d1778: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2d1778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2d177c: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2D177Cu;
    SET_GPR_U32(ctx, 31, 0x2D1784u);
    ctx->pc = 0x2D1780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D177Cu;
            // 0x2d1780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1784u; }
        if (ctx->pc != 0x2D1784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1784u; }
        if (ctx->pc != 0x2D1784u) { return; }
    }
    ctx->pc = 0x2D1784u;
label_2d1784:
    // 0x2d1784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1788:
    // 0x2d1788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d178c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d178cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1790: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1790u;
            // 0x2d1794: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1798u;
}
