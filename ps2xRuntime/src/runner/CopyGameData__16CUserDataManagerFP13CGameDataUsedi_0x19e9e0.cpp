#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyGameData__16CUserDataManagerFP13CGameDataUsedi
// Address: 0x19e9e0 - 0x19eae8
void CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0");
#endif

    switch (ctx->pc) {
        case 0x19ea0cu: goto label_19ea0c;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea58u: goto label_19ea58;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea94u: goto label_19ea94;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19ead0u: goto label_19ead0;
        default: break;
    }

    ctx->pc = 0x19e9e0u;

    // 0x19e9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e9e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e9f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e9f4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E9F4u;
    {
        const bool branch_taken_0x19e9f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9F4u;
            // 0x19e9f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9f4) {
            ctx->pc = 0x19EA04u;
            goto label_19ea04;
        }
    }
    ctx->pc = 0x19E9FCu;
    // 0x19e9fc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x19E9FCu;
    {
        const bool branch_taken_0x19e9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9FCu;
            // 0x19ea00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9fc) {
            ctx->pc = 0x19EAD4u;
            goto label_19ead4;
        }
    }
    ctx->pc = 0x19EA04u;
label_19ea04:
    // 0x19ea04: 0xc065708  jal         func_195C20
    ctx->pc = 0x19EA04u;
    SET_GPR_U32(ctx, 31, 0x19EA0Cu);
    ctx->pc = 0x19EA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA04u;
            // 0x19ea08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA0Cu; }
        if (ctx->pc != 0x19EA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA0Cu; }
        if (ctx->pc != 0x19EA0Cu) { return; }
    }
    ctx->pc = 0x19EA0Cu;
label_19ea0c:
    // 0x19ea0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EA0Cu;
    {
        const bool branch_taken_0x19ea0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ea0c) {
            ctx->pc = 0x19EA1Cu;
            goto label_19ea1c;
        }
    }
    ctx->pc = 0x19EA14u;
    // 0x19ea14: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x19EA14u;
    {
        const bool branch_taken_0x19ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA14u;
            // 0x19ea18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea14) {
            ctx->pc = 0x19EAD4u;
            goto label_19ead4;
        }
    }
    ctx->pc = 0x19EA1Cu;
label_19ea1c:
    // 0x19ea1c: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x19EA1Cu;
    SET_GPR_U32(ctx, 31, 0x19EA24u);
    ctx->pc = 0x19EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA1Cu;
            // 0x19ea20: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA24u; }
        if (ctx->pc != 0x19EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA24u; }
        if (ctx->pc != 0x19EA24u) { return; }
    }
    ctx->pc = 0x19EA24u;
label_19ea24:
    // 0x19ea24: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x19ea24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x19ea28: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x19EA28u;
    {
        const bool branch_taken_0x19ea28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA28u;
            // 0x19ea2c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea28) {
            ctx->pc = 0x19EAC4u;
            goto label_19eac4;
        }
    }
    ctx->pc = 0x19EA30u;
    // 0x19ea30: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x19ea34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ea38: 0x24635ab0  addiu       $v1, $v1, 0x5AB0
    ctx->pc = 0x19ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23216));
    // 0x19ea3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ea40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ea44: 0x400008  jr          $v0
    ctx->pc = 0x19EA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EA4Cu: goto label_19ea4c;
            case 0x19EA60u: goto label_19ea60;
            case 0x19EA74u: goto label_19ea74;
            case 0x19EA88u: goto label_19ea88;
            case 0x19EA9Cu: goto label_19ea9c;
            case 0x19EAB0u: goto label_19eab0;
            case 0x19EAC4u: goto label_19eac4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EA4Cu;
label_19ea4c:
    // 0x19ea4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea50: 0xc066724  jal         func_199C90
    ctx->pc = 0x19EA50u;
    SET_GPR_U32(ctx, 31, 0x19EA58u);
    ctx->pc = 0x19EA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA50u;
            // 0x19ea54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199C90u;
    if (runtime->hasFunction(0x199C90u)) {
        auto targetFn = runtime->lookupFunction(0x199C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA58u; }
        if (ctx->pc != 0x19EA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFi_0x199c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA58u; }
        if (ctx->pc != 0x19EA58u) { return; }
    }
    ctx->pc = 0x19EA58u;
label_19ea58:
    // 0x19ea58: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19EA58u;
    {
        const bool branch_taken_0x19ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA58u;
            // 0x19ea5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea58) {
            ctx->pc = 0x19EAD4u;
            goto label_19ead4;
        }
    }
    ctx->pc = 0x19EA60u;
label_19ea60:
    // 0x19ea60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea64: 0xc0666e0  jal         func_199B80
    ctx->pc = 0x19EA64u;
    SET_GPR_U32(ctx, 31, 0x19EA6Cu);
    ctx->pc = 0x19EA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA64u;
            // 0x19ea68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199B80u;
    if (runtime->hasFunction(0x199B80u)) {
        auto targetFn = runtime->lookupFunction(0x199B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA6Cu; }
        if (ctx->pc != 0x19EA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataAttach__13CGameDataUsedFi_0x199b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA6Cu; }
        if (ctx->pc != 0x19EA6Cu) { return; }
    }
    ctx->pc = 0x19EA6Cu;
label_19ea6c:
    // 0x19ea6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19EA6Cu;
    {
        const bool branch_taken_0x19ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea6c) {
            ctx->pc = 0x19EAD0u;
            goto label_19ead0;
        }
    }
    ctx->pc = 0x19EA74u;
label_19ea74:
    // 0x19ea74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea78: 0xc066694  jal         func_199A50
    ctx->pc = 0x19EA78u;
    SET_GPR_U32(ctx, 31, 0x19EA80u);
    ctx->pc = 0x19EA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA78u;
            // 0x19ea7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199A50u;
    if (runtime->hasFunction(0x199A50u)) {
        auto targetFn = runtime->lookupFunction(0x199A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA80u; }
        if (ctx->pc != 0x19EA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataWeapon__13CGameDataUsedFi_0x199a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA80u; }
        if (ctx->pc != 0x19EA80u) { return; }
    }
    ctx->pc = 0x19EA80u;
label_19ea80:
    // 0x19ea80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19EA80u;
    {
        const bool branch_taken_0x19ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea80) {
            ctx->pc = 0x19EAD0u;
            goto label_19ead0;
        }
    }
    ctx->pc = 0x19EA88u;
label_19ea88:
    // 0x19ea88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea8c: 0xc066810  jal         func_19A040
    ctx->pc = 0x19EA8Cu;
    SET_GPR_U32(ctx, 31, 0x19EA94u);
    ctx->pc = 0x19EA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EA8Cu;
            // 0x19ea90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (runtime->hasFunction(0x19A040u)) {
        auto targetFn = runtime->lookupFunction(0x19A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA94u; }
        if (ctx->pc != 0x19EA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataRoboPart__13CGameDataUsedFi_0x19a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EA94u; }
        if (ctx->pc != 0x19EA94u) { return; }
    }
    ctx->pc = 0x19EA94u;
label_19ea94:
    // 0x19ea94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19EA94u;
    {
        const bool branch_taken_0x19ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea94) {
            ctx->pc = 0x19EAD0u;
            goto label_19ead0;
        }
    }
    ctx->pc = 0x19EA9Cu;
label_19ea9c:
    // 0x19ea9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eaa0: 0xc0667b4  jal         func_199ED0
    ctx->pc = 0x19EAA0u;
    SET_GPR_U32(ctx, 31, 0x19EAA8u);
    ctx->pc = 0x19EAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAA0u;
            // 0x19eaa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199ED0u;
    if (runtime->hasFunction(0x199ED0u)) {
        auto targetFn = runtime->lookupFunction(0x199ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAA8u; }
        if (ctx->pc != 0x19EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataGiftBox__13CGameDataUsedFi_0x199ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAA8u; }
        if (ctx->pc != 0x19EAA8u) { return; }
    }
    ctx->pc = 0x19EAA8u;
label_19eaa8:
    // 0x19eaa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19EAA8u;
    {
        const bool branch_taken_0x19eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eaa8) {
            ctx->pc = 0x19EAD0u;
            goto label_19ead0;
        }
    }
    ctx->pc = 0x19EAB0u;
label_19eab0:
    // 0x19eab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eab4: 0xc066750  jal         func_199D40
    ctx->pc = 0x19EAB4u;
    SET_GPR_U32(ctx, 31, 0x19EABCu);
    ctx->pc = 0x19EAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAB4u;
            // 0x19eab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199D40u;
    if (runtime->hasFunction(0x199D40u)) {
        auto targetFn = runtime->lookupFunction(0x199D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EABCu; }
        if (ctx->pc != 0x19EABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataFish__13CGameDataUsedFi_0x199d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EABCu; }
        if (ctx->pc != 0x19EABCu) { return; }
    }
    ctx->pc = 0x19EABCu;
label_19eabc:
    // 0x19eabc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19EABCu;
    {
        const bool branch_taken_0x19eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eabc) {
            ctx->pc = 0x19EAD0u;
            goto label_19ead0;
        }
    }
    ctx->pc = 0x19EAC4u;
label_19eac4:
    // 0x19eac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19eac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eac8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19EAC8u;
    SET_GPR_U32(ctx, 31, 0x19EAD0u);
    ctx->pc = 0x19EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAC8u;
            // 0x19eacc: 0x24845a98  addiu       $a0, $a0, 0x5A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAD0u; }
        if (ctx->pc != 0x19EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EAD0u; }
        if (ctx->pc != 0x19EAD0u) { return; }
    }
    ctx->pc = 0x19EAD0u;
label_19ead0:
    // 0x19ead0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ead4:
    // 0x19ead4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ead4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ead8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ead8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19eadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x19EAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EAE0u;
            // 0x19eae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EAE8u;
}
