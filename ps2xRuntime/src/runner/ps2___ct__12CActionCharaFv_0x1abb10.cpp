#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CActionCharaFv
// Address: 0x1abb10 - 0x1abbd0
void ps2___ct__12CActionCharaFv_0x1abb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CActionCharaFv_0x1abb10");
#endif

    switch (ctx->pc) {
        case 0x1abb10u: goto label_1abb10;
        case 0x1abb14u: goto label_1abb14;
        case 0x1abb18u: goto label_1abb18;
        case 0x1abb1cu: goto label_1abb1c;
        case 0x1abb20u: goto label_1abb20;
        case 0x1abb24u: goto label_1abb24;
        case 0x1abb28u: goto label_1abb28;
        case 0x1abb2cu: goto label_1abb2c;
        case 0x1abb30u: goto label_1abb30;
        case 0x1abb34u: goto label_1abb34;
        case 0x1abb38u: goto label_1abb38;
        case 0x1abb3cu: goto label_1abb3c;
        case 0x1abb40u: goto label_1abb40;
        case 0x1abb44u: goto label_1abb44;
        case 0x1abb48u: goto label_1abb48;
        case 0x1abb4cu: goto label_1abb4c;
        case 0x1abb50u: goto label_1abb50;
        case 0x1abb54u: goto label_1abb54;
        case 0x1abb58u: goto label_1abb58;
        case 0x1abb5cu: goto label_1abb5c;
        case 0x1abb60u: goto label_1abb60;
        case 0x1abb64u: goto label_1abb64;
        case 0x1abb68u: goto label_1abb68;
        case 0x1abb6cu: goto label_1abb6c;
        case 0x1abb70u: goto label_1abb70;
        case 0x1abb74u: goto label_1abb74;
        case 0x1abb78u: goto label_1abb78;
        case 0x1abb7cu: goto label_1abb7c;
        case 0x1abb80u: goto label_1abb80;
        case 0x1abb84u: goto label_1abb84;
        case 0x1abb88u: goto label_1abb88;
        case 0x1abb8cu: goto label_1abb8c;
        case 0x1abb90u: goto label_1abb90;
        case 0x1abb94u: goto label_1abb94;
        case 0x1abb98u: goto label_1abb98;
        case 0x1abb9cu: goto label_1abb9c;
        case 0x1abba0u: goto label_1abba0;
        case 0x1abba4u: goto label_1abba4;
        case 0x1abba8u: goto label_1abba8;
        case 0x1abbacu: goto label_1abbac;
        case 0x1abbb0u: goto label_1abbb0;
        case 0x1abbb4u: goto label_1abbb4;
        case 0x1abbb8u: goto label_1abbb8;
        case 0x1abbbcu: goto label_1abbbc;
        case 0x1abbc0u: goto label_1abbc0;
        case 0x1abbc4u: goto label_1abbc4;
        case 0x1abbc8u: goto label_1abbc8;
        case 0x1abbccu: goto label_1abbcc;
        default: break;
    }

    ctx->pc = 0x1abb10u;

label_1abb10:
    // 0x1abb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1abb14:
    // 0x1abb14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1abb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1abb18:
    // 0x1abb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1abb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1abb1c:
    // 0x1abb1c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1abb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1abb20:
    // 0x1abb20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1abb24:
    // 0x1abb24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1abb24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1abb28:
    // 0x1abb28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1abb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abb2c:
    // 0x1abb2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1abb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1abb30:
    // 0x1abb30: 0x320f809  jalr        $t9
label_1abb34:
    if (ctx->pc == 0x1ABB34u) {
        ctx->pc = 0x1ABB34u;
            // 0x1abb34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB38u;
        goto label_1abb38;
    }
    ctx->pc = 0x1ABB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ABB38u);
        ctx->pc = 0x1ABB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB30u;
            // 0x1abb34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB38u; }
            if (ctx->pc != 0x1ABB38u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABB38u;
label_1abb38:
    // 0x1abb38: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1abb3c:
    // 0x1abb3c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1abb40:
    // 0x1abb40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1abb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1abb44:
    // 0x1abb44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1abb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abb48:
    // 0x1abb48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1abb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1abb4c:
    // 0x1abb4c: 0x320f809  jalr        $t9
label_1abb50:
    if (ctx->pc == 0x1ABB50u) {
        ctx->pc = 0x1ABB50u;
            // 0x1abb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB54u;
        goto label_1abb54;
    }
    ctx->pc = 0x1ABB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ABB54u);
        ctx->pc = 0x1ABB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB4Cu;
            // 0x1abb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABB54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB54u; }
            if (ctx->pc != 0x1ABB54u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABB54u;
label_1abb54:
    // 0x1abb54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1abb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1abb58:
    // 0x1abb58: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1abb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1abb5c:
    // 0x1abb5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1abb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1abb60:
    // 0x1abb60: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1abb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abb64:
    // 0x1abb64: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1abb68:
    // 0x1abb68: 0x320f809  jalr        $t9
label_1abb6c:
    if (ctx->pc == 0x1ABB6Cu) {
        ctx->pc = 0x1ABB6Cu;
            // 0x1abb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB70u;
        goto label_1abb70;
    }
    ctx->pc = 0x1ABB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ABB70u);
        ctx->pc = 0x1ABB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB68u;
            // 0x1abb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB70u; }
            if (ctx->pc != 0x1ABB70u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABB70u;
label_1abb70:
    // 0x1abb70: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1abb74:
    // 0x1abb74: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1abb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1abb78:
    // 0x1abb78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1abb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1abb7c:
    // 0x1abb7c: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1abb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_1abb80:
    // 0x1abb80: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1abb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1abb84:
    // 0x1abb84: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1abb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_1abb88:
    // 0x1abb88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abb8c:
    // 0x1abb8c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1abb90:
    // 0x1abb90: 0x320f809  jalr        $t9
label_1abb94:
    if (ctx->pc == 0x1ABB94u) {
        ctx->pc = 0x1ABB94u;
            // 0x1abb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB98u;
        goto label_1abb98;
    }
    ctx->pc = 0x1ABB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ABB98u);
        ctx->pc = 0x1ABB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB90u;
            // 0x1abb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABB98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB98u; }
            if (ctx->pc != 0x1ABB98u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABB98u;
label_1abb98:
    // 0x1abb98: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1abb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1abb9c:
    // 0x1abb9c: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x1abb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_1abba0:
    // 0x1abba0: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_1abba4:
    // 0x1abba4: 0xc061b34  jal         func_186CD0
label_1abba8:
    if (ctx->pc == 0x1ABBA8u) {
        ctx->pc = 0x1ABBA8u;
            // 0x1abba8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1ABBACu;
        goto label_1abbac;
    }
    ctx->pc = 0x1ABBA4u;
    SET_GPR_U32(ctx, 31, 0x1ABBACu);
    ctx->pc = 0x1ABBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBA4u;
            // 0x1abba8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBACu; }
        if (ctx->pc != 0x1ABBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBACu; }
        if (ctx->pc != 0x1ABBACu) { return; }
    }
    ctx->pc = 0x1ABBACu;
label_1abbac:
    // 0x1abbac: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x1abbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_1abbb0:
    // 0x1abbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abbb4:
    // 0x1abbb4: 0xc049c86  jal         func_127218
label_1abbb8:
    if (ctx->pc == 0x1ABBB8u) {
        ctx->pc = 0x1ABBB8u;
            // 0x1abbb8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1ABBBCu;
        goto label_1abbbc;
    }
    ctx->pc = 0x1ABBB4u;
    SET_GPR_U32(ctx, 31, 0x1ABBBCu);
    ctx->pc = 0x1ABBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBB4u;
            // 0x1abbb8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBBCu; }
        if (ctx->pc != 0x1ABBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBBCu; }
        if (ctx->pc != 0x1ABBBCu) { return; }
    }
    ctx->pc = 0x1ABBBCu;
label_1abbbc:
    // 0x1abbbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abbc0:
    // 0x1abbc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1abbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abbc4:
    // 0x1abbc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1abbc8:
    // 0x1abbc8: 0x3e00008  jr          $ra
label_1abbcc:
    if (ctx->pc == 0x1ABBCCu) {
        ctx->pc = 0x1ABBCCu;
            // 0x1abbcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1ABBD0u;
        goto label_fallthrough_0x1abbc8;
    }
    ctx->pc = 0x1ABBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBC8u;
            // 0x1abbcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1abbc8:
    ctx->pc = 0x1ABBD0u;
}
