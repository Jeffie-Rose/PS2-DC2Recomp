#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ThrowItemObject__12CActionCharaFv
// Address: 0x16af40 - 0x16b01c
void ThrowItemObject__12CActionCharaFv_0x16af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThrowItemObject__12CActionCharaFv_0x16af40");
#endif

    switch (ctx->pc) {
        case 0x16af40u: goto label_16af40;
        case 0x16af44u: goto label_16af44;
        case 0x16af48u: goto label_16af48;
        case 0x16af4cu: goto label_16af4c;
        case 0x16af50u: goto label_16af50;
        case 0x16af54u: goto label_16af54;
        case 0x16af58u: goto label_16af58;
        case 0x16af5cu: goto label_16af5c;
        case 0x16af60u: goto label_16af60;
        case 0x16af64u: goto label_16af64;
        case 0x16af68u: goto label_16af68;
        case 0x16af6cu: goto label_16af6c;
        case 0x16af70u: goto label_16af70;
        case 0x16af74u: goto label_16af74;
        case 0x16af78u: goto label_16af78;
        case 0x16af7cu: goto label_16af7c;
        case 0x16af80u: goto label_16af80;
        case 0x16af84u: goto label_16af84;
        case 0x16af88u: goto label_16af88;
        case 0x16af8cu: goto label_16af8c;
        case 0x16af90u: goto label_16af90;
        case 0x16af94u: goto label_16af94;
        case 0x16af98u: goto label_16af98;
        case 0x16af9cu: goto label_16af9c;
        case 0x16afa0u: goto label_16afa0;
        case 0x16afa4u: goto label_16afa4;
        case 0x16afa8u: goto label_16afa8;
        case 0x16afacu: goto label_16afac;
        case 0x16afb0u: goto label_16afb0;
        case 0x16afb4u: goto label_16afb4;
        case 0x16afb8u: goto label_16afb8;
        case 0x16afbcu: goto label_16afbc;
        case 0x16afc0u: goto label_16afc0;
        case 0x16afc4u: goto label_16afc4;
        case 0x16afc8u: goto label_16afc8;
        case 0x16afccu: goto label_16afcc;
        case 0x16afd0u: goto label_16afd0;
        case 0x16afd4u: goto label_16afd4;
        case 0x16afd8u: goto label_16afd8;
        case 0x16afdcu: goto label_16afdc;
        case 0x16afe0u: goto label_16afe0;
        case 0x16afe4u: goto label_16afe4;
        case 0x16afe8u: goto label_16afe8;
        case 0x16afecu: goto label_16afec;
        case 0x16aff0u: goto label_16aff0;
        case 0x16aff4u: goto label_16aff4;
        case 0x16aff8u: goto label_16aff8;
        case 0x16affcu: goto label_16affc;
        case 0x16b000u: goto label_16b000;
        case 0x16b004u: goto label_16b004;
        case 0x16b008u: goto label_16b008;
        case 0x16b00cu: goto label_16b00c;
        case 0x16b010u: goto label_16b010;
        case 0x16b014u: goto label_16b014;
        case 0x16b018u: goto label_16b018;
        default: break;
    }

    ctx->pc = 0x16af40u;

label_16af40:
    // 0x16af40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16af44:
    // 0x16af44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16af48:
    // 0x16af48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16af4c:
    // 0x16af4c: 0x8483071c  lh          $v1, 0x71C($a0)
    ctx->pc = 0x16af4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1820)));
label_16af50:
    // 0x16af50: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_16af54:
    if (ctx->pc == 0x16AF54u) {
        ctx->pc = 0x16AF54u;
            // 0x16af54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AF58u;
        goto label_16af58;
    }
    ctx->pc = 0x16AF50u;
    {
        const bool branch_taken_0x16af50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF50u;
            // 0x16af54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af50) {
            ctx->pc = 0x16B00Cu;
            goto label_16b00c;
        }
    }
    ctx->pc = 0x16AF58u;
label_16af58:
    // 0x16af58: 0x820707e0  lb          $a3, 0x7E0($s0)
    ctx->pc = 0x16af58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2016)));
label_16af5c:
    // 0x16af5c: 0x4e0002b  bltz        $a3, . + 4 + (0x2B << 2)
label_16af60:
    if (ctx->pc == 0x16AF60u) {
        ctx->pc = 0x16AF64u;
        goto label_16af64;
    }
    ctx->pc = 0x16AF5Cu;
    {
        const bool branch_taken_0x16af5c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x16af5c) {
            ctx->pc = 0x16B00Cu;
            goto label_16b00c;
        }
    }
    ctx->pc = 0x16AF64u;
label_16af64:
    // 0x16af64: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x16af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
label_16af68:
    // 0x16af68: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_16af6c:
    // 0x16af6c: 0xc0b8854  jal         func_2E2150
label_16af70:
    if (ctx->pc == 0x16AF70u) {
        ctx->pc = 0x16AF70u;
            // 0x16af70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AF74u;
        goto label_16af74;
    }
    ctx->pc = 0x16AF6Cu;
    SET_GPR_U32(ctx, 31, 0x16AF74u);
    ctx->pc = 0x16AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF6Cu;
            // 0x16af70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2150u;
    if (runtime->hasFunction(0x2E2150u)) {
        auto targetFn = runtime->lookupFunction(0x2E2150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF74u; }
        if (ctx->pc != 0x16AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptProgNo__16CEffectScriptManFiii_0x2e2150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF74u; }
        if (ctx->pc != 0x16AF74u) { return; }
    }
    ctx->pc = 0x16AF74u;
label_16af74:
    // 0x16af74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16af74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16af78:
    // 0x16af78: 0xc041c5c  jal         func_107170
label_16af7c:
    if (ctx->pc == 0x16AF7Cu) {
        ctx->pc = 0x16AF7Cu;
            // 0x16af7c: 0x26050690  addiu       $a1, $s0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
        ctx->pc = 0x16AF80u;
        goto label_16af80;
    }
    ctx->pc = 0x16AF78u;
    SET_GPR_U32(ctx, 31, 0x16AF80u);
    ctx->pc = 0x16AF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF78u;
            // 0x16af7c: 0x26050690  addiu       $a1, $s0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF80u; }
        if (ctx->pc != 0x16AF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF80u; }
        if (ctx->pc != 0x16AF80u) { return; }
    }
    ctx->pc = 0x16AF80u;
label_16af80:
    // 0x16af80: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16af80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16af84:
    // 0x16af84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16af88:
    // 0x16af88: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16af88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16af8c:
    // 0x16af8c: 0x320f809  jalr        $t9
label_16af90:
    if (ctx->pc == 0x16AF90u) {
        ctx->pc = 0x16AF90u;
            // 0x16af90: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16AF94u;
        goto label_16af94;
    }
    ctx->pc = 0x16AF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16AF94u);
        ctx->pc = 0x16AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF8Cu;
            // 0x16af90: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16AF94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AF94u; }
            if (ctx->pc != 0x16AF94u) { return; }
        }
        }
    }
    ctx->pc = 0x16AF94u;
label_16af94:
    // 0x16af94: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x16af94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_16af98:
    // 0x16af98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16af9c:
    // 0x16af9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16af9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16afa0:
    // 0x16afa0: 0xc041c4a  jal         func_107128
label_16afa4:
    if (ctx->pc == 0x16AFA4u) {
        ctx->pc = 0x16AFA4u;
            // 0x16afa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AFA8u;
        goto label_16afa8;
    }
    ctx->pc = 0x16AFA0u;
    SET_GPR_U32(ctx, 31, 0x16AFA8u);
    ctx->pc = 0x16AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFA0u;
            // 0x16afa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFA8u; }
        if (ctx->pc != 0x16AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFA8u; }
        if (ctx->pc != 0x16AFA8u) { return; }
    }
    ctx->pc = 0x16AFA8u;
label_16afa8:
    // 0x16afa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16afac:
    // 0x16afac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16afb0:
    // 0x16afb0: 0xc041c38  jal         func_1070E0
label_16afb4:
    if (ctx->pc == 0x16AFB4u) {
        ctx->pc = 0x16AFB4u;
            // 0x16afb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AFB8u;
        goto label_16afb8;
    }
    ctx->pc = 0x16AFB0u;
    SET_GPR_U32(ctx, 31, 0x16AFB8u);
    ctx->pc = 0x16AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFB0u;
            // 0x16afb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFB8u; }
        if (ctx->pc != 0x16AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFB8u; }
        if (ctx->pc != 0x16AFB8u) { return; }
    }
    ctx->pc = 0x16AFB8u;
label_16afb8:
    // 0x16afb8: 0x820707e0  lb          $a3, 0x7E0($s0)
    ctx->pc = 0x16afb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2016)));
label_16afbc:
    // 0x16afbc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16afc0:
    // 0x16afc0: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x16afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
label_16afc4:
    // 0x16afc4: 0xc0b8894  jal         func_2E2250
label_16afc8:
    if (ctx->pc == 0x16AFC8u) {
        ctx->pc = 0x16AFC8u;
            // 0x16afc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AFCCu;
        goto label_16afcc;
    }
    ctx->pc = 0x16AFC4u;
    SET_GPR_U32(ctx, 31, 0x16AFCCu);
    ctx->pc = 0x16AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFC4u;
            // 0x16afc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFCCu; }
        if (ctx->pc != 0x16AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFCCu; }
        if (ctx->pc != 0x16AFCCu) { return; }
    }
    ctx->pc = 0x16AFCCu;
label_16afcc:
    // 0x16afcc: 0xc0683a8  jal         func_1A0EA0
label_16afd0:
    if (ctx->pc == 0x16AFD0u) {
        ctx->pc = 0x16AFD0u;
            // 0x16afd0: 0xa600071c  sh          $zero, 0x71C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1820), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16AFD4u;
        goto label_16afd4;
    }
    ctx->pc = 0x16AFCCu;
    SET_GPR_U32(ctx, 31, 0x16AFD4u);
    ctx->pc = 0x16AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFCCu;
            // 0x16afd0: 0xa600071c  sh          $zero, 0x71C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1820), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFD4u; }
        if (ctx->pc != 0x16AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFD4u; }
        if (ctx->pc != 0x16AFD4u) { return; }
    }
    ctx->pc = 0x16AFD4u;
label_16afd4:
    // 0x16afd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16afd8:
    // 0x16afd8: 0xc067ce0  jal         func_19F380
label_16afdc:
    if (ctx->pc == 0x16AFDCu) {
        ctx->pc = 0x16AFDCu;
            // 0x16afdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AFE0u;
        goto label_16afe0;
    }
    ctx->pc = 0x16AFD8u;
    SET_GPR_U32(ctx, 31, 0x16AFE0u);
    ctx->pc = 0x16AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFD8u;
            // 0x16afdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFE0u; }
        if (ctx->pc != 0x16AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFE0u; }
        if (ctx->pc != 0x16AFE0u) { return; }
    }
    ctx->pc = 0x16AFE0u;
label_16afe0:
    // 0x16afe0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16afe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16afe4:
    // 0x16afe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16afe8:
    // 0x16afe8: 0x8c24f6ec  lw          $a0, -0x914($at)
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
label_16afec:
    // 0x16afec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x16afecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_16aff0:
    // 0x16aff0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16aff4:
    // 0x16aff4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16aff8:
    // 0x16aff8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16affc:
    // 0x16affc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16affcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16b000:
    // 0x16b000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16b004:
    // 0x16b004: 0xc065f4c  jal         func_197D30
label_16b008:
    if (ctx->pc == 0x16B008u) {
        ctx->pc = 0x16B008u;
            // 0x16b008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16B00Cu;
        goto label_16b00c;
    }
    ctx->pc = 0x16B004u;
    SET_GPR_U32(ctx, 31, 0x16B00Cu);
    ctx->pc = 0x16B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B004u;
            // 0x16b008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B00Cu; }
        if (ctx->pc != 0x16B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B00Cu; }
        if (ctx->pc != 0x16B00Cu) { return; }
    }
    ctx->pc = 0x16B00Cu;
label_16b00c:
    // 0x16b00c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16b010:
    // 0x16b010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b014:
    // 0x16b014: 0x3e00008  jr          $ra
label_16b018:
    if (ctx->pc == 0x16B018u) {
        ctx->pc = 0x16B018u;
            // 0x16b018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16B01Cu;
        goto label_fallthrough_0x16b014;
    }
    ctx->pc = 0x16B014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B014u;
            // 0x16b018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16b014:
    ctx->pc = 0x16B01Cu;
}
