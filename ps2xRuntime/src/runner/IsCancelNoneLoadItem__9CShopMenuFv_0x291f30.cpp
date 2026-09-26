#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsCancelNoneLoadItem__9CShopMenuFv
// Address: 0x291f30 - 0x292040
void IsCancelNoneLoadItem__9CShopMenuFv_0x291f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsCancelNoneLoadItem__9CShopMenuFv_0x291f30");
#endif

    switch (ctx->pc) {
        case 0x291f68u: goto label_291f68;
        case 0x291f74u: goto label_291f74;
        case 0x291f80u: goto label_291f80;
        case 0x291f88u: goto label_291f88;
        case 0x291f94u: goto label_291f94;
        case 0x291fa4u: goto label_291fa4;
        case 0x291fb0u: goto label_291fb0;
        case 0x291fccu: goto label_291fcc;
        case 0x291fdcu: goto label_291fdc;
        case 0x291ff0u: goto label_291ff0;
        case 0x292000u: goto label_292000;
        case 0x292018u: goto label_292018;
        case 0x292028u: goto label_292028;
        default: break;
    }

    ctx->pc = 0x291f30u;

    // 0x291f30: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x291f34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x291f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291f3c: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x291f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x291f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291f44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x291f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x291f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291f4c: 0xa7a2013a  sh          $v0, 0x13A($sp)
    ctx->pc = 0x291f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x291f50: 0xa7a2013e  sh          $v0, 0x13E($sp)
    ctx->pc = 0x291f50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 318), (uint16_t)GPR_U32(ctx, 2));
    // 0x291f54: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x291f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x291f58: 0xa7a0013c  sh          $zero, 0x13C($sp)
    ctx->pc = 0x291f58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 316), (uint16_t)GPR_U32(ctx, 0));
    // 0x291f5c: 0xa7a00138  sh          $zero, 0x138($sp)
    ctx->pc = 0x291f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x291f60: 0xc049c18  jal         func_127060
    ctx->pc = 0x291F60u;
    SET_GPR_U32(ctx, 31, 0x291F68u);
    ctx->pc = 0x291F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F60u;
            // 0x291f64: 0x2445012c  addiu       $a1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F68u; }
        if (ctx->pc != 0x291F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F68u; }
        if (ctx->pc != 0x291F68u) { return; }
    }
    ctx->pc = 0x291F68u;
label_291f68:
    // 0x291f68: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x291f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x291f6c: 0xc08f9e4  jal         func_23E790
    ctx->pc = 0x291F6Cu;
    SET_GPR_U32(ctx, 31, 0x291F74u);
    ctx->pc = 0x291F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F6Cu;
            // 0x291f70: 0xa7a00138  sh          $zero, 0x138($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F74u; }
        if (ctx->pc != 0x291F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F74u; }
        if (ctx->pc != 0x291F74u) { return; }
    }
    ctx->pc = 0x291F74u;
label_291f74:
    // 0x291f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f78: 0xc065c24  jal         func_197090
    ctx->pc = 0x291F78u;
    SET_GPR_U32(ctx, 31, 0x291F80u);
    ctx->pc = 0x291F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F78u;
            // 0x291f7c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F80u; }
        if (ctx->pc != 0x291F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F80u; }
        if (ctx->pc != 0x291F80u) { return; }
    }
    ctx->pc = 0x291F80u;
label_291f80:
    // 0x291f80: 0xc065c24  jal         func_197090
    ctx->pc = 0x291F80u;
    SET_GPR_U32(ctx, 31, 0x291F88u);
    ctx->pc = 0x291F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F80u;
            // 0x291f84: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F88u; }
        if (ctx->pc != 0x291F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F88u; }
        if (ctx->pc != 0x291F88u) { return; }
    }
    ctx->pc = 0x291F88u;
label_291f88:
    // 0x291f88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x291f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291f8c: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x291F8Cu;
    SET_GPR_U32(ctx, 31, 0x291F94u);
    ctx->pc = 0x291F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F8Cu;
            // 0x291f90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F94u; }
        if (ctx->pc != 0x291F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F94u; }
        if (ctx->pc != 0x291F94u) { return; }
    }
    ctx->pc = 0x291F94u;
label_291f94:
    // 0x291f94: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x291f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x291f98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x291f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x291f9c: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x291F9Cu;
    SET_GPR_U32(ctx, 31, 0x291FA4u);
    ctx->pc = 0x291FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F9Cu;
            // 0x291fa0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FA4u; }
        if (ctx->pc != 0x291FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FA4u; }
        if (ctx->pc != 0x291FA4u) { return; }
    }
    ctx->pc = 0x291FA4u;
label_291fa4:
    // 0x291fa4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x291fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x291fa8: 0xc08fa24  jal         func_23E890
    ctx->pc = 0x291FA8u;
    SET_GPR_U32(ctx, 31, 0x291FB0u);
    ctx->pc = 0x291FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FA8u;
            // 0x291fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E890u;
    if (runtime->hasFunction(0x23E890u)) {
        auto targetFn = runtime->lookupFunction(0x23E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FB0u; }
        if (ctx->pc != 0x291FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnItemMenu__12CMenuKeyFuncFi_0x23e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FB0u; }
        if (ctx->pc != 0x291FB0u) { return; }
    }
    ctx->pc = 0x291FB0u;
label_291fb0:
    // 0x291fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fb4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x291fb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x291fb8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x291FB8u;
    {
        const bool branch_taken_0x291fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x291FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291FB8u;
            // 0x291fbc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fb8) {
            ctx->pc = 0x292020u;
            goto label_292020;
        }
    }
    ctx->pc = 0x291FC0u;
    // 0x291fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fc4: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x291FC4u;
    SET_GPR_U32(ctx, 31, 0x291FCCu);
    ctx->pc = 0x291FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FC4u;
            // 0x291fc8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FCCu; }
        if (ctx->pc != 0x291FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FCCu; }
        if (ctx->pc != 0x291FCCu) { return; }
    }
    ctx->pc = 0x291FCCu;
label_291fcc:
    // 0x291fcc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x291fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x291fd0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x291fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x291fd4: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x291FD4u;
    SET_GPR_U32(ctx, 31, 0x291FDCu);
    ctx->pc = 0x291FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FD4u;
            // 0x291fd8: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FDCu; }
        if (ctx->pc != 0x291FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FDCu; }
        if (ctx->pc != 0x291FDCu) { return; }
    }
    ctx->pc = 0x291FDCu;
label_291fdc:
    // 0x291fdc: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x291fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x291fe0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x291fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x291fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fe8: 0xc08ec14  jal         func_23B050
    ctx->pc = 0x291FE8u;
    SET_GPR_U32(ctx, 31, 0x291FF0u);
    ctx->pc = 0x291FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FE8u;
            // 0x291fec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B050u;
    if (runtime->hasFunction(0x23B050u)) {
        auto targetFn = runtime->lookupFunction(0x23B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FF0u; }
        if (ctx->pc != 0x291FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii_0x23b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FF0u; }
        if (ctx->pc != 0x291FF0u) { return; }
    }
    ctx->pc = 0x291FF0u;
label_291ff0:
    // 0x291ff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291FF0u;
    {
        const bool branch_taken_0x291ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ff0) {
            ctx->pc = 0x292000u;
            goto label_292000;
        }
    }
    ctx->pc = 0x291FF8u;
    // 0x291ff8: 0xc090adc  jal         func_242B70
    ctx->pc = 0x291FF8u;
    SET_GPR_U32(ctx, 31, 0x292000u);
    ctx->pc = 0x291FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FF8u;
            // 0x291ffc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292000u; }
        if (ctx->pc != 0x292000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292000u; }
        if (ctx->pc != 0x292000u) { return; }
    }
    ctx->pc = 0x292000u;
label_292000:
    // 0x292000: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x292000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x292004: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x292004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x292008: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x292008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x29200c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292010: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292010u;
    SET_GPR_U32(ctx, 31, 0x292018u);
    ctx->pc = 0x292014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292010u;
            // 0x292014: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292018u; }
        if (ctx->pc != 0x292018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292018u; }
        if (ctx->pc != 0x292018u) { return; }
    }
    ctx->pc = 0x292018u;
label_292018:
    // 0x292018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292018u;
    {
        const bool branch_taken_0x292018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292018u;
            // 0x29201c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292018) {
            ctx->pc = 0x29202Cu;
            goto label_29202c;
        }
    }
    ctx->pc = 0x292020u;
label_292020:
    // 0x292020: 0xc094274  jal         func_2509D0
    ctx->pc = 0x292020u;
    SET_GPR_U32(ctx, 31, 0x292028u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292028u; }
        if (ctx->pc != 0x292028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292028u; }
        if (ctx->pc != 0x292028u) { return; }
    }
    ctx->pc = 0x292028u;
label_292028:
    // 0x292028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29202c:
    // 0x29202c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29202cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292038: 0x3e00008  jr          $ra
    ctx->pc = 0x292038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292038u;
            // 0x29203c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x292040u;
}
