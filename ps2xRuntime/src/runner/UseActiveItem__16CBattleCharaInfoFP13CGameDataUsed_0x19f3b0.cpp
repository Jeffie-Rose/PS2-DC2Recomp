#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UseActiveItem__16CBattleCharaInfoFP13CGameDataUsed
// Address: 0x19f3b0 - 0x19f474
void UseActiveItem__16CBattleCharaInfoFP13CGameDataUsed_0x19f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseActiveItem__16CBattleCharaInfoFP13CGameDataUsed_0x19f3b0");
#endif

    switch (ctx->pc) {
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f45cu: goto label_19f45c;
        default: break;
    }

    ctx->pc = 0x19f3b0u;

    // 0x19f3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f3b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f3b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f3bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f3c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3c8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F3C8u;
    {
        const bool branch_taken_0x19f3c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3C8u;
            // 0x19f3cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3c8) {
            ctx->pc = 0x19F3D8u;
            goto label_19f3d8;
        }
    }
    ctx->pc = 0x19F3D0u;
    // 0x19f3d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19F3D0u;
    {
        const bool branch_taken_0x19f3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3D0u;
            // 0x19f3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3d0) {
            ctx->pc = 0x19F45Cu;
            goto label_19f45c;
        }
    }
    ctx->pc = 0x19F3D8u;
label_19f3d8:
    // 0x19f3d8: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19f3dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f3e0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19f3e4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x19f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x19f3e8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x19f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19f3ec: 0xc0659c4  jal         func_196710
    ctx->pc = 0x19F3ECu;
    SET_GPR_U32(ctx, 31, 0x19F3F4u);
    ctx->pc = 0x19F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3ECu;
            // 0x19f3f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3F4u; }
        if (ctx->pc != 0x19F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3F4u; }
        if (ctx->pc != 0x19F3F4u) { return; }
    }
    ctx->pc = 0x19F3F4u;
label_19f3f4:
    // 0x19f3f4: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x19f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x19f3f8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F3F8u;
    {
        const bool branch_taken_0x19f3f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3F8u;
            // 0x19f3fc: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3f8) {
            ctx->pc = 0x19F420u;
            goto label_19f420;
        }
    }
    ctx->pc = 0x19F400u;
    // 0x19f400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f404: 0xc067bf4  jal         func_19EFD0
    ctx->pc = 0x19F404u;
    SET_GPR_U32(ctx, 31, 0x19F40Cu);
    ctx->pc = 0x19F408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F404u;
            // 0x19f408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFD0u;
    if (runtime->hasFunction(0x19EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F40Cu; }
        if (ctx->pc != 0x19F40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEquipTablePtr__16CBattleCharaInfoFi_0x19efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F40Cu; }
        if (ctx->pc != 0x19F40Cu) { return; }
    }
    ctx->pc = 0x19F40Cu;
label_19f40c:
    // 0x19f40c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19f40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f410: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19f414: 0xc0659c4  jal         func_196710
    ctx->pc = 0x19F414u;
    SET_GPR_U32(ctx, 31, 0x19F41Cu);
    ctx->pc = 0x19F418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F414u;
            // 0x19f418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F41Cu; }
        if (ctx->pc != 0x19F41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F41Cu; }
        if (ctx->pc != 0x19F41Cu) { return; }
    }
    ctx->pc = 0x19F41Cu;
label_19f41c:
    // 0x19f41c: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x19f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
label_19f420:
    // 0x19f420: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F420u;
    {
        const bool branch_taken_0x19f420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F420u;
            // 0x19f424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f420) {
            ctx->pc = 0x19F434u;
            goto label_19f434;
        }
    }
    ctx->pc = 0x19F428u;
    // 0x19f428: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x19f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x19f42c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F42Cu;
    {
        const bool branch_taken_0x19f42c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f42c) {
            ctx->pc = 0x19F44Cu;
            goto label_19f44c;
        }
    }
    ctx->pc = 0x19F434u;
label_19f434:
    // 0x19f434: 0xc067bf4  jal         func_19EFD0
    ctx->pc = 0x19F434u;
    SET_GPR_U32(ctx, 31, 0x19F43Cu);
    ctx->pc = 0x19F438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F434u;
            // 0x19f438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFD0u;
    if (runtime->hasFunction(0x19EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F43Cu; }
        if (ctx->pc != 0x19F43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEquipTablePtr__16CBattleCharaInfoFi_0x19efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F43Cu; }
        if (ctx->pc != 0x19F43Cu) { return; }
    }
    ctx->pc = 0x19F43Cu;
label_19f43c:
    // 0x19f43c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19f43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f440: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x19f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19f444: 0xc0659c4  jal         func_196710
    ctx->pc = 0x19F444u;
    SET_GPR_U32(ctx, 31, 0x19F44Cu);
    ctx->pc = 0x19F448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F444u;
            // 0x19f448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F44Cu; }
        if (ctx->pc != 0x19F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F44Cu; }
        if (ctx->pc != 0x19F44Cu) { return; }
    }
    ctx->pc = 0x19F44Cu;
label_19f44c:
    // 0x19f44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f450: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x19f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19f454: 0xc087a30  jal         func_21E8C0
    ctx->pc = 0x19F454u;
    SET_GPR_U32(ctx, 31, 0x19F45Cu);
    ctx->pc = 0x19F458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F454u;
            // 0x19f458: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (runtime->hasFunction(0x21E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F45Cu; }
        if (ctx->pc != 0x19F45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F45Cu; }
        if (ctx->pc != 0x19F45Cu) { return; }
    }
    ctx->pc = 0x19F45Cu;
label_19f45c:
    // 0x19f45c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f460: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F46Cu;
            // 0x19f470: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F474u;
}
