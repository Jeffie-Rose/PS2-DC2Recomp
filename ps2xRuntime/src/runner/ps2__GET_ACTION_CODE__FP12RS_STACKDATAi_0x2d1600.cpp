#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTION_CODE__FP12RS_STACKDATAi
// Address: 0x2d1600 - 0x2d165c
void ps2__GET_ACTION_CODE__FP12RS_STACKDATAi_0x2d1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTION_CODE__FP12RS_STACKDATAi_0x2d1600");
#endif

    switch (ctx->pc) {
        case 0x2d1628u: goto label_2d1628;
        case 0x2d1634u: goto label_2d1634;
        case 0x2d163cu: goto label_2d163c;
        case 0x2d1648u: goto label_2d1648;
        default: break;
    }

    ctx->pc = 0x2d1600u;

    // 0x2d1600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d160c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1610: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1610u;
    {
        const bool branch_taken_0x2d1610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1610u;
            // 0x2d1614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1610) {
            ctx->pc = 0x2D1620u;
            goto label_2d1620;
        }
    }
    ctx->pc = 0x2D1618u;
    // 0x2d1618: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D1618u;
    {
        const bool branch_taken_0x2d1618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1618u;
            // 0x2d161c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1618) {
            ctx->pc = 0x2D164Cu;
            goto label_2d164c;
        }
    }
    ctx->pc = 0x2D1620u;
label_2d1620:
    // 0x2d1620: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D1620u;
    SET_GPR_U32(ctx, 31, 0x2D1628u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1628u; }
        if (ctx->pc != 0x2D1628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1628u; }
        if (ctx->pc != 0x2D1628u) { return; }
    }
    ctx->pc = 0x2D1628u;
label_2d1628:
    // 0x2d1628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d162c: 0xc067bf4  jal         func_19EFD0
    ctx->pc = 0x2D162Cu;
    SET_GPR_U32(ctx, 31, 0x2D1634u);
    ctx->pc = 0x2D1630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D162Cu;
            // 0x2d1630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFD0u;
    if (runtime->hasFunction(0x19EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1634u; }
        if (ctx->pc != 0x2D1634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEquipTablePtr__16CBattleCharaInfoFi_0x19efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1634u; }
        if (ctx->pc != 0x2D1634u) { return; }
    }
    ctx->pc = 0x2D1634u;
label_2d1634:
    // 0x2d1634: 0xc0664ec  jal         func_1993B0
    ctx->pc = 0x2D1634u;
    SET_GPR_U32(ctx, 31, 0x2D163Cu);
    ctx->pc = 0x2D1638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1634u;
            // 0x2d1638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993B0u;
    if (runtime->hasFunction(0x1993B0u)) {
        auto targetFn = runtime->lookupFunction(0x1993B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D163Cu; }
        if (ctx->pc != 0x2D163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetModelNo__13CGameDataUsedFv_0x1993b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D163Cu; }
        if (ctx->pc != 0x2D163Cu) { return; }
    }
    ctx->pc = 0x2D163Cu;
label_2d163c:
    // 0x2d163c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d163cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1640: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2D1640u;
    SET_GPR_U32(ctx, 31, 0x2D1648u);
    ctx->pc = 0x2D1644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1640u;
            // 0x2d1644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1648u; }
        if (ctx->pc != 0x2D1648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1648u; }
        if (ctx->pc != 0x2D1648u) { return; }
    }
    ctx->pc = 0x2D1648u;
label_2d1648:
    // 0x2d1648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d164c:
    // 0x2d164c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1654: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1654u;
            // 0x2d1658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D165Cu;
}
