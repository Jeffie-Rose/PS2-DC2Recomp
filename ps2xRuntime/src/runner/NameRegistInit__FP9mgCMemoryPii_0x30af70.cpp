#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NameRegistInit__FP9mgCMemoryPii
// Address: 0x30af70 - 0x30b4e4
void NameRegistInit__FP9mgCMemoryPii_0x30af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NameRegistInit__FP9mgCMemoryPii_0x30af70");
#endif

    switch (ctx->pc) {
        case 0x30afb0u: goto label_30afb0;
        case 0x30afc0u: goto label_30afc0;
        case 0x30afccu: goto label_30afcc;
        case 0x30afdcu: goto label_30afdc;
        case 0x30afecu: goto label_30afec;
        case 0x30aff8u: goto label_30aff8;
        case 0x30b024u: goto label_30b024;
        case 0x30b044u: goto label_30b044;
        case 0x30b060u: goto label_30b060;
        case 0x30b074u: goto label_30b074;
        case 0x30b088u: goto label_30b088;
        case 0x30b0a0u: goto label_30b0a0;
        case 0x30b0c0u: goto label_30b0c0;
        case 0x30b0dcu: goto label_30b0dc;
        case 0x30b0f0u: goto label_30b0f0;
        case 0x30b0fcu: goto label_30b0fc;
        case 0x30b11cu: goto label_30b11c;
        case 0x30b130u: goto label_30b130;
        case 0x30b148u: goto label_30b148;
        case 0x30b1acu: goto label_30b1ac;
        case 0x30b1d8u: goto label_30b1d8;
        case 0x30b1e0u: goto label_30b1e0;
        case 0x30b258u: goto label_30b258;
        case 0x30b260u: goto label_30b260;
        case 0x30b268u: goto label_30b268;
        case 0x30b280u: goto label_30b280;
        case 0x30b28cu: goto label_30b28c;
        case 0x30b298u: goto label_30b298;
        case 0x30b348u: goto label_30b348;
        case 0x30b358u: goto label_30b358;
        case 0x30b360u: goto label_30b360;
        case 0x30b3b8u: goto label_30b3b8;
        case 0x30b3d4u: goto label_30b3d4;
        case 0x30b3e4u: goto label_30b3e4;
        case 0x30b400u: goto label_30b400;
        case 0x30b40cu: goto label_30b40c;
        case 0x30b468u: goto label_30b468;
        case 0x30b478u: goto label_30b478;
        case 0x30b488u: goto label_30b488;
        case 0x30b498u: goto label_30b498;
        case 0x30b4acu: goto label_30b4ac;
        case 0x30b4b8u: goto label_30b4b8;
        case 0x30b4c8u: goto label_30b4c8;
        default: break;
    }

    ctx->pc = 0x30af70u;

    // 0x30af70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30af74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30af78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30af7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30af80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30af80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30af84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30af84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30af88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30af88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af8c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30af90: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x30af90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30af94: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x30af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30af98: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x30af98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30af9c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x30af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30afa0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30afa4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x30afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30afa8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x30AFA8u;
    SET_GPR_U32(ctx, 31, 0x30AFB0u);
    ctx->pc = 0x30AFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFA8u;
            // 0x30afac: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFB0u; }
        if (ctx->pc != 0x30AFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFB0u; }
        if (ctx->pc != 0x30AFB0u) { return; }
    }
    ctx->pc = 0x30AFB0u;
label_30afb0:
    // 0x30afb0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30afb4: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x30afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x30afb8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30AFB8u;
    SET_GPR_U32(ctx, 31, 0x30AFC0u);
    ctx->pc = 0x30AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFB8u;
            // 0x30afbc: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFC0u; }
        if (ctx->pc != 0x30AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFC0u; }
        if (ctx->pc != 0x30AFC0u) { return; }
    }
    ctx->pc = 0x30AFC0u;
label_30afc0:
    // 0x30afc0: 0x24040bb8  addiu       $a0, $zero, 0xBB8
    ctx->pc = 0x30afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x30afc4: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x30AFC4u;
    SET_GPR_U32(ctx, 31, 0x30AFCCu);
    ctx->pc = 0x30AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFC4u;
            // 0x30afc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFCCu; }
        if (ctx->pc != 0x30AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFCCu; }
        if (ctx->pc != 0x30AFCCu) { return; }
    }
    ctx->pc = 0x30AFCCu;
label_30afcc:
    // 0x30afcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AFCCu;
    {
        const bool branch_taken_0x30afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFCCu;
            // 0x30afd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afcc) {
            ctx->pc = 0x30AFE0u;
            goto label_30afe0;
        }
    }
    ctx->pc = 0x30AFD4u;
    // 0x30afd4: 0xc0c29b4  jal         func_30A6D0
    ctx->pc = 0x30AFD4u;
    SET_GPR_U32(ctx, 31, 0x30AFDCu);
    ctx->pc = 0x30AFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFD4u;
            // 0x30afd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A6D0u;
    if (runtime->hasFunction(0x30A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFDCu; }
        if (ctx->pc != 0x30AFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CNameRegiMenuFv_0x30a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFDCu; }
        if (ctx->pc != 0x30AFDCu) { return; }
    }
    ctx->pc = 0x30AFDCu;
label_30afdc:
    // 0x30afdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30afdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30afe0:
    // 0x30afe0: 0xaf82a1d8  sw          $v0, -0x5E28($gp)
    ctx->pc = 0x30afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943192), GPR_U32(ctx, 2));
    // 0x30afe4: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x30AFE4u;
    SET_GPR_U32(ctx, 31, 0x30AFECu);
    ctx->pc = 0x30AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFE4u;
            // 0x30afe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFECu; }
        if (ctx->pc != 0x30AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFECu; }
        if (ctx->pc != 0x30AFECu) { return; }
    }
    ctx->pc = 0x30AFECu;
label_30afec:
    // 0x30afec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30afecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30aff0: 0xc04e780  jal         func_139E00
    ctx->pc = 0x30AFF0u;
    SET_GPR_U32(ctx, 31, 0x30AFF8u);
    ctx->pc = 0x30AFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFF0u;
            // 0x30aff4: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFF8u; }
        if (ctx->pc != 0x30AFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFF8u; }
        if (ctx->pc != 0x30AFF8u) { return; }
    }
    ctx->pc = 0x30AFF8u;
label_30aff8:
    // 0x30aff8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30affc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x30affcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x30b000: 0x8c23dd94  lw          $v1, -0x226C($at)
    ctx->pc = 0x30b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958484)));
    // 0x30b004: 0x248424d0  addiu       $a0, $a0, 0x24D0
    ctx->pc = 0x30b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9424));
    // 0x30b008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30b008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b00c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30b00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30b010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30b010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30b014: 0x8c22dd90  lw          $v0, -0x2270($at)
    ctx->pc = 0x30b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958480)));
    // 0x30b018: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x30b018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b01c: 0xc094440  jal         func_251100
    ctx->pc = 0x30B01Cu;
    SET_GPR_U32(ctx, 31, 0x30B024u);
    ctx->pc = 0x30B020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B01Cu;
            // 0x30b020: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B024u; }
        if (ctx->pc != 0x30B024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B024u; }
        if (ctx->pc != 0x30B024u) { return; }
    }
    ctx->pc = 0x30B024u;
label_30b024:
    // 0x30b024: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x30b024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x30b028: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B028u;
    {
        const bool branch_taken_0x30b028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B028u;
            // 0x30b02c: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b028) {
            ctx->pc = 0x30B038u;
            goto label_30b038;
        }
    }
    ctx->pc = 0x30B030u;
    // 0x30b030: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x30b030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x30b034: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x30b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30b038:
    // 0x30b038: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30b038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30b03c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30B03Cu;
    SET_GPR_U32(ctx, 31, 0x30B044u);
    ctx->pc = 0x30B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B03Cu;
            // 0x30b040: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B044u; }
        if (ctx->pc != 0x30B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B044u; }
        if (ctx->pc != 0x30B044u) { return; }
    }
    ctx->pc = 0x30B044u;
label_30b044:
    // 0x30b044: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b048: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x30b048u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x30b04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b050: 0x24a524e0  addiu       $a1, $a1, 0x24E0
    ctx->pc = 0x30b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
    // 0x30b054: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x30b054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x30b058: 0xc052734  jal         func_149CD0
    ctx->pc = 0x30B058u;
    SET_GPR_U32(ctx, 31, 0x30B060u);
    ctx->pc = 0x30B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B058u;
            // 0x30b05c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B060u; }
        if (ctx->pc != 0x30B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B060u; }
        if (ctx->pc != 0x30B060u) { return; }
    }
    ctx->pc = 0x30B060u;
label_30b060:
    // 0x30b060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b064: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b068: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x30b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x30b06c: 0xc0944e8  jal         func_2513A0
    ctx->pc = 0x30B06Cu;
    SET_GPR_U32(ctx, 31, 0x30B074u);
    ctx->pc = 0x30B070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B06Cu;
            // 0x30b070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2513A0u;
    if (runtime->hasFunction(0x2513A0u)) {
        auto targetFn = runtime->lookupFunction(0x2513A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B074u; }
        if (ctx->pc != 0x30B074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEnterIMG__FiPUcPc_0x2513a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B074u; }
        if (ctx->pc != 0x30B074u) { return; }
    }
    ctx->pc = 0x30B074u;
label_30b074:
    // 0x30b074: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b07c: 0x24a524e8  addiu       $a1, $a1, 0x24E8
    ctx->pc = 0x30b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9448));
    // 0x30b080: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30B080u;
    SET_GPR_U32(ctx, 31, 0x30B088u);
    ctx->pc = 0x30B084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B080u;
            // 0x30b084: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B088u; }
        if (ctx->pc != 0x30B088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B088u; }
        if (ctx->pc != 0x30B088u) { return; }
    }
    ctx->pc = 0x30B088u;
label_30b088:
    // 0x30b088: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b08c: 0xaf82a1e0  sw          $v0, -0x5E20($gp)
    ctx->pc = 0x30b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943200), GPR_U32(ctx, 2));
    // 0x30b090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b094: 0x24a524e8  addiu       $a1, $a1, 0x24E8
    ctx->pc = 0x30b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9448));
    // 0x30b098: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30B098u;
    SET_GPR_U32(ctx, 31, 0x30B0A0u);
    ctx->pc = 0x30B09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B098u;
            // 0x30b09c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0A0u; }
        if (ctx->pc != 0x30B0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0A0u; }
        if (ctx->pc != 0x30B0A0u) { return; }
    }
    ctx->pc = 0x30B0A0u;
label_30b0a0:
    // 0x30b0a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0a8: 0xaf82a1e4  sw          $v0, -0x5E1C($gp)
    ctx->pc = 0x30b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943204), GPR_U32(ctx, 2));
    // 0x30b0ac: 0x24a524f8  addiu       $a1, $a1, 0x24F8
    ctx->pc = 0x30b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9464));
    // 0x30b0b0: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x30b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x30b0b4: 0xaf80a1ec  sw          $zero, -0x5E14($gp)
    ctx->pc = 0x30b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943212), GPR_U32(ctx, 0));
    // 0x30b0b8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x30B0B8u;
    SET_GPR_U32(ctx, 31, 0x30B0C0u);
    ctx->pc = 0x30B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0B8u;
            // 0x30b0bc: 0xaf80a1e8  sw          $zero, -0x5E18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0C0u; }
        if (ctx->pc != 0x30B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0C0u; }
        if (ctx->pc != 0x30B0C0u) { return; }
    }
    ctx->pc = 0x30B0C0u;
label_30b0c0:
    // 0x30b0c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B0C0u;
    {
        const bool branch_taken_0x30b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0C0u;
            // 0x30b0c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0c0) {
            ctx->pc = 0x30B0F4u;
            goto label_30b0f4;
        }
    }
    ctx->pc = 0x30B0C8u;
    // 0x30b0c8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x30b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x30b0cc: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b0d0: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x30b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x30b0d4: 0xc0944e8  jal         func_2513A0
    ctx->pc = 0x30B0D4u;
    SET_GPR_U32(ctx, 31, 0x30B0DCu);
    ctx->pc = 0x30B0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0D4u;
            // 0x30b0d8: 0x24c62508  addiu       $a2, $a2, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2513A0u;
    if (runtime->hasFunction(0x2513A0u)) {
        auto targetFn = runtime->lookupFunction(0x2513A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0DCu; }
        if (ctx->pc != 0x30B0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEnterIMG__FiPUcPc_0x2513a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0DCu; }
        if (ctx->pc != 0x30B0DCu) { return; }
    }
    ctx->pc = 0x30B0DCu;
label_30b0dc:
    // 0x30b0dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0e4: 0x24a52510  addiu       $a1, $a1, 0x2510
    ctx->pc = 0x30b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9488));
    // 0x30b0e8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30B0E8u;
    SET_GPR_U32(ctx, 31, 0x30B0F0u);
    ctx->pc = 0x30B0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0E8u;
            // 0x30b0ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0F0u; }
        if (ctx->pc != 0x30B0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0F0u; }
        if (ctx->pc != 0x30B0F0u) { return; }
    }
    ctx->pc = 0x30B0F0u;
label_30b0f0:
    // 0x30b0f0: 0xaf82a1ec  sw          $v0, -0x5E14($gp)
    ctx->pc = 0x30b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943212), GPR_U32(ctx, 2));
label_30b0f4:
    // 0x30b0f4: 0xc08d1c8  jal         func_234720
    ctx->pc = 0x30B0F4u;
    SET_GPR_U32(ctx, 31, 0x30B0FCu);
    ctx->pc = 0x234720u;
    if (runtime->hasFunction(0x234720u)) {
        auto targetFn = runtime->lookupFunction(0x234720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0FCu; }
        if (ctx->pc != 0x30B0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIMGPtr__Fv_0x234720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0FCu; }
        if (ctx->pc != 0x30B0FCu) { return; }
    }
    ctx->pc = 0x30B0FCu;
label_30b0fc:
    // 0x30b0fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30B0FCu;
    {
        const bool branch_taken_0x30b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b0fc) {
            ctx->pc = 0x30B134u;
            goto label_30b134;
        }
    }
    ctx->pc = 0x30B104u;
    // 0x30b104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b108: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x30b108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x30b10c: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b110: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x30b110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x30b114: 0xc0944e8  jal         func_2513A0
    ctx->pc = 0x30B114u;
    SET_GPR_U32(ctx, 31, 0x30B11Cu);
    ctx->pc = 0x30B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B114u;
            // 0x30b118: 0x24c62508  addiu       $a2, $a2, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2513A0u;
    if (runtime->hasFunction(0x2513A0u)) {
        auto targetFn = runtime->lookupFunction(0x2513A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B11Cu; }
        if (ctx->pc != 0x30B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEnterIMG__FiPUcPc_0x2513a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B11Cu; }
        if (ctx->pc != 0x30B11Cu) { return; }
    }
    ctx->pc = 0x30B11Cu;
label_30b11c:
    // 0x30b11c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b124: 0x24a52520  addiu       $a1, $a1, 0x2520
    ctx->pc = 0x30b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9504));
    // 0x30b128: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30B128u;
    SET_GPR_U32(ctx, 31, 0x30B130u);
    ctx->pc = 0x30B12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B128u;
            // 0x30b12c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B130u; }
        if (ctx->pc != 0x30B130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B130u; }
        if (ctx->pc != 0x30B130u) { return; }
    }
    ctx->pc = 0x30B130u;
label_30b130:
    // 0x30b130: 0xaf82a1e8  sw          $v0, -0x5E18($gp)
    ctx->pc = 0x30b130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943208), GPR_U32(ctx, 2));
label_30b134:
    // 0x30b134: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30b134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30b138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b13c: 0x24a52528  addiu       $a1, $a1, 0x2528
    ctx->pc = 0x30b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9512));
    // 0x30b140: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30B140u;
    SET_GPR_U32(ctx, 31, 0x30B148u);
    ctx->pc = 0x30B144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B140u;
            // 0x30b144: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B148u; }
        if (ctx->pc != 0x30B148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B148u; }
        if (ctx->pc != 0x30B148u) { return; }
    }
    ctx->pc = 0x30B148u;
label_30b148:
    // 0x30b148: 0xaf82a1f0  sw          $v0, -0x5E10($gp)
    ctx->pc = 0x30b148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943216), GPR_U32(ctx, 2));
    // 0x30b14c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x30b14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x30b150: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x30b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30b154: 0xa78285f8  sh          $v0, -0x7A08($gp)
    ctx->pc = 0x30b154u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936056), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b158: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30b158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30b15c: 0x2442dd60  addiu       $v0, $v0, -0x22A0
    ctx->pc = 0x30b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x30b160: 0xac22deb0  sw          $v0, -0x2150($at)
    ctx->pc = 0x30b160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958768), GPR_U32(ctx, 2));
    // 0x30b164: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30b164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30b168: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x30b168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x30b16c: 0x2442dda0  addiu       $v0, $v0, -0x2260
    ctx->pc = 0x30b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x30b170: 0xac22deb4  sw          $v0, -0x214C($at)
    ctx->pc = 0x30b170u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958772), GPR_U32(ctx, 2));
    // 0x30b174: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30b178: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30B178u;
    {
        const bool branch_taken_0x30b178 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B178u;
            // 0x30b17c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b178) {
            ctx->pc = 0x30B1A4u;
            goto label_30b1a4;
        }
    }
    ctx->pc = 0x30B180u;
    // 0x30b180: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30b184: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30b188: 0x2463ddc0  addiu       $v1, $v1, -0x2240
    ctx->pc = 0x30b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958528));
    // 0x30b18c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x30b18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x30b190: 0xa78285f8  sh          $v0, -0x7A08($gp)
    ctx->pc = 0x30b190u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936056), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b194: 0xac23deb0  sw          $v1, -0x2150($at)
    ctx->pc = 0x30b194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958768), GPR_U32(ctx, 3));
    // 0x30b198: 0x278285fc  addiu       $v0, $gp, -0x7A04
    ctx->pc = 0x30b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936060));
    // 0x30b19c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x30b19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x30b1a0: 0xac22deb4  sw          $v0, -0x214C($at)
    ctx->pc = 0x30b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958772), GPR_U32(ctx, 2));
label_30b1a4:
    // 0x30b1a4: 0xc04e640  jal         func_139900
    ctx->pc = 0x30B1A4u;
    SET_GPR_U32(ctx, 31, 0x30B1ACu);
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1ACu; }
        if (ctx->pc != 0x30B1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1ACu; }
        if (ctx->pc != 0x30B1ACu) { return; }
    }
    ctx->pc = 0x30B1ACu;
label_30b1ac:
    // 0x30b1ac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30b1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30b1b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30b1b4: 0x8c23dd98  lw          $v1, -0x2268($at)
    ctx->pc = 0x30b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958488)));
    // 0x30b1b8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30b1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30b1bc: 0x8c25dd94  lw          $a1, -0x226C($at)
    ctx->pc = 0x30b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958484)));
    // 0x30b1c0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30b1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30b1c4: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x30b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30b1c8: 0x8c22dd90  lw          $v0, -0x2270($at)
    ctx->pc = 0x30b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958480)));
    // 0x30b1cc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x30b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30b1d0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x30B1D0u;
    SET_GPR_U32(ctx, 31, 0x30B1D8u);
    ctx->pc = 0x30B1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B1D0u;
            // 0x30b1d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1D8u; }
        if (ctx->pc != 0x30B1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1D8u; }
        if (ctx->pc != 0x30B1D8u) { return; }
    }
    ctx->pc = 0x30B1D8u;
label_30b1d8:
    // 0x30b1d8: 0xc0c2aa8  jal         func_30AAA0
    ctx->pc = 0x30B1D8u;
    SET_GPR_U32(ctx, 31, 0x30B1E0u);
    ctx->pc = 0x30B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B1D8u;
            // 0x30b1dc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AAA0u;
    if (runtime->hasFunction(0x30AAA0u)) {
        auto targetFn = runtime->lookupFunction(0x30AAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1E0u; }
        if (ctx->pc != 0x30B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckChronicleKanjiFont__FP9mgCMemory_0x30aaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1E0u; }
        if (ctx->pc != 0x30B1E0u) { return; }
    }
    ctx->pc = 0x30B1E0u;
label_30b1e0:
    // 0x30b1e0: 0x8f83a1d8  lw          $v1, -0x5E28($gp)
    ctx->pc = 0x30b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b1e4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x30b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x30b1e8: 0x3c028fb8  lui         $v0, 0x8FB8
    ctx->pc = 0x30b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36792 << 16));
    // 0x30b1ec: 0x344223ef  ori         $v0, $v0, 0x23EF
    ctx->pc = 0x30b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9199);
    // 0x30b1f0: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x30b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x30b1f4: 0x8f85a1d8  lw          $a1, -0x5E28($gp)
    ctx->pc = 0x30b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b1f8: 0x8ca40124  lw          $a0, 0x124($a1)
    ctx->pc = 0x30b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x30b1fc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x30b1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30b200: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30b200u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30b204: 0x0  nop
    ctx->pc = 0x30b204u;
    // NOP
    // 0x30b208: 0x1010  mfhi        $v0
    ctx->pc = 0x30b208u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30b20c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30b210: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30b210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30b214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b218: 0xaca20128  sw          $v0, 0x128($a1)
    ctx->pc = 0x30b218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
    // 0x30b21c: 0x8f84a1d8  lw          $a0, -0x5E28($gp)
    ctx->pc = 0x30b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b220: 0x8c830128  lw          $v1, 0x128($a0)
    ctx->pc = 0x30b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x30b224: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30b224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b22c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30b230: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x30b230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x30b234: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x30b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x30b238: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x30b238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x30b23c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B23Cu;
    {
        const bool branch_taken_0x30b23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B23Cu;
            // 0x30b240: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b23c) {
            ctx->pc = 0x30B24Cu;
            goto label_30b24c;
        }
    }
    ctx->pc = 0x30B244u;
    // 0x30b244: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x30b244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x30b248: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x30b248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30b24c:
    // 0x30b24c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30b250: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30B250u;
    SET_GPR_U32(ctx, 31, 0x30B258u);
    ctx->pc = 0x30B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B250u;
            // 0x30b254: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B258u; }
        if (ctx->pc != 0x30B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B258u; }
        if (ctx->pc != 0x30B258u) { return; }
    }
    ctx->pc = 0x30B258u;
label_30b258:
    // 0x30b258: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x30B258u;
    SET_GPR_U32(ctx, 31, 0x30B260u);
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B260u; }
        if (ctx->pc != 0x30B260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B260u; }
        if (ctx->pc != 0x30B260u) { return; }
    }
    ctx->pc = 0x30B260u;
label_30b260:
    // 0x30b260: 0xc065a18  jal         func_196860
    ctx->pc = 0x30B260u;
    SET_GPR_U32(ctx, 31, 0x30B268u);
    ctx->pc = 0x30B264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B260u;
            // 0x30b264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B268u; }
        if (ctx->pc != 0x30B268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B268u; }
        if (ctx->pc != 0x30B268u) { return; }
    }
    ctx->pc = 0x30B268u;
label_30b268:
    // 0x30b268: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30b268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30b26c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30b26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b270: 0x8c32ca58  lw          $s2, -0x35A8($at)
    ctx->pc = 0x30b270u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x30b274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b278: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x30B278u;
    SET_GPR_U32(ctx, 31, 0x30B280u);
    ctx->pc = 0x30B27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B278u;
            // 0x30b27c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B280u; }
        if (ctx->pc != 0x30B280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B280u; }
        if (ctx->pc != 0x30B280u) { return; }
    }
    ctx->pc = 0x30B280u;
label_30b280:
    // 0x30b280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b284: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x30B284u;
    SET_GPR_U32(ctx, 31, 0x30B28Cu);
    ctx->pc = 0x30B288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B284u;
            // 0x30b288: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B28Cu; }
        if (ctx->pc != 0x30B28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B28Cu; }
        if (ctx->pc != 0x30B28Cu) { return; }
    }
    ctx->pc = 0x30B28Cu;
label_30b28c:
    // 0x30b28c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b290: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x30B290u;
    SET_GPR_U32(ctx, 31, 0x30B298u);
    ctx->pc = 0x30B294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B290u;
            // 0x30b294: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B298u; }
        if (ctx->pc != 0x30B298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B298u; }
        if (ctx->pc != 0x30B298u) { return; }
    }
    ctx->pc = 0x30B298u;
label_30b298:
    // 0x30b298: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x30b298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x30b29c: 0xae4017f4  sw          $zero, 0x17F4($s2)
    ctx->pc = 0x30b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6132), GPR_U32(ctx, 0));
    // 0x30b2a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b2a4: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x30b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x30b2a8: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x30b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x30b2ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b2b0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x30b2b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b2b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30b2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b2b8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30b2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30b2bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b2c0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x30b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x30b2c4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x30b2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x30b2c8: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30b2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30b2cc: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x30B2CCu;
    {
        const bool branch_taken_0x30b2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2CCu;
            // 0x30b2d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2cc) {
            ctx->pc = 0x30B3A0u;
            goto label_30b3a0;
        }
    }
    ctx->pc = 0x30B2D4u;
    // 0x30b2d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30b2d8: 0x1065002e  beq         $v1, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x30B2D8u;
    {
        const bool branch_taken_0x30b2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x30B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2D8u;
            // 0x30b2dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2d8) {
            ctx->pc = 0x30B394u;
            goto label_30b394;
        }
    }
    ctx->pc = 0x30B2E0u;
    // 0x30b2e0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30B2E0u;
    {
        const bool branch_taken_0x30b2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2E0u;
            // 0x30b2e4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2e0) {
            ctx->pc = 0x30B368u;
            goto label_30b368;
        }
    }
    ctx->pc = 0x30B2E8u;
    // 0x30b2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b2ec: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30B2ECu;
    {
        const bool branch_taken_0x30b2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b2ec) {
            ctx->pc = 0x30B350u;
            goto label_30b350;
        }
    }
    ctx->pc = 0x30B2F4u;
    // 0x30b2f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B2F4u;
    {
        const bool branch_taken_0x30b2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2F4u;
            // 0x30b2f8: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2f4) {
            ctx->pc = 0x30B304u;
            goto label_30b304;
        }
    }
    ctx->pc = 0x30B2FCu;
    // 0x30b2fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30B2FCu;
    {
        const bool branch_taken_0x30b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2FCu;
            // 0x30b300: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2fc) {
            ctx->pc = 0x30B3C0u;
            goto label_30b3c0;
        }
    }
    ctx->pc = 0x30B304u;
label_30b304:
    // 0x30b304: 0x8c24dce4  lw          $a0, -0x231C($at)
    ctx->pc = 0x30b304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
    // 0x30b308: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x30B308u;
    {
        const bool branch_taken_0x30b308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b308) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B310u;
    // 0x30b310: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30b310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b314: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30B314u;
    {
        const bool branch_taken_0x30b314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B314u;
            // 0x30b318: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b314) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B31Cu;
    // 0x30b31c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B31Cu;
    {
        const bool branch_taken_0x30b31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B31Cu;
            // 0x30b320: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b31c) {
            ctx->pc = 0x30B33Cu;
            goto label_30b33c;
        }
    }
    ctx->pc = 0x30B324u;
    // 0x30b324: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B324u;
    {
        const bool branch_taken_0x30b324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b324) {
            ctx->pc = 0x30B33Cu;
            goto label_30b33c;
        }
    }
    ctx->pc = 0x30B32Cu;
    // 0x30b32c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B32Cu;
    {
        const bool branch_taken_0x30b32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x30B330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B32Cu;
            // 0x30b330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b32c) {
            ctx->pc = 0x30B340u;
            goto label_30b340;
        }
    }
    ctx->pc = 0x30B334u;
    // 0x30b334: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x30B334u;
    {
        const bool branch_taken_0x30b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b334) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B33Cu;
label_30b33c:
    // 0x30b33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b340:
    // 0x30b340: 0xc065dc0  jal         func_197700
    ctx->pc = 0x30B340u;
    SET_GPR_U32(ctx, 31, 0x30B348u);
    ctx->pc = 0x30B344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B340u;
            // 0x30b344: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B348u; }
        if (ctx->pc != 0x30B348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B348u; }
        if (ctx->pc != 0x30B348u) { return; }
    }
    ctx->pc = 0x30B348u;
label_30b348:
    // 0x30b348: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x30B348u;
    {
        const bool branch_taken_0x30b348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B348u;
            // 0x30b34c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b348) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B350u;
label_30b350:
    // 0x30b350: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x30B350u;
    SET_GPR_U32(ctx, 31, 0x30B358u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B358u; }
        if (ctx->pc != 0x30B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B358u; }
        if (ctx->pc != 0x30B358u) { return; }
    }
    ctx->pc = 0x30B358u;
label_30b358:
    // 0x30b358: 0xc067110  jal         func_19C440
    ctx->pc = 0x30B358u;
    SET_GPR_U32(ctx, 31, 0x30B360u);
    ctx->pc = 0x30B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B358u;
            // 0x30b35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C440u;
    if (runtime->hasFunction(0x19C440u)) {
        auto targetFn = runtime->lookupFunction(0x19C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B360u; }
        if (ctx->pc != 0x30B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboName__16CUserDataManagerFv_0x19c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B360u; }
        if (ctx->pc != 0x30B360u) { return; }
    }
    ctx->pc = 0x30B360u;
label_30b360:
    // 0x30b360: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30B360u;
    {
        const bool branch_taken_0x30b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B360u;
            // 0x30b364: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b360) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B368u;
label_30b368:
    // 0x30b368: 0x8383a1d4  lb          $v1, -0x5E2C($gp)
    ctx->pc = 0x30b368u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943188)));
    // 0x30b36c: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x30b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
    // 0x30b370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b374: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30b374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30b378: 0x8c24d648  lw          $a0, -0x29B8($at)
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
    // 0x30b37c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30B37Cu;
    {
        const bool branch_taken_0x30b37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B37Cu;
            // 0x30b380: 0x2493000a  addiu       $s3, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b37c) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B384u;
    // 0x30b384: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30b384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30b388: 0x2442dce8  addiu       $v0, $v0, -0x2318
    ctx->pc = 0x30b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958312));
    // 0x30b38c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30B38Cu;
    {
        const bool branch_taken_0x30b38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B38Cu;
            // 0x30b390: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b38c) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B394u;
label_30b394:
    // 0x30b394: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x30b394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x30b398: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30B398u;
    {
        const bool branch_taken_0x30b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B398u;
            // 0x30b39c: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b398) {
            ctx->pc = 0x30B3BCu;
            goto label_30b3bc;
        }
    }
    ctx->pc = 0x30B3A0u;
label_30b3a0:
    // 0x30b3a0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30b3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3a8: 0x2484dce8  addiu       $a0, $a0, -0x2318
    ctx->pc = 0x30b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958312));
    // 0x30b3ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x30b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30b3b0: 0xc049c86  jal         func_127218
    ctx->pc = 0x30B3B0u;
    SET_GPR_U32(ctx, 31, 0x30B3B8u);
    ctx->pc = 0x30B3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3B0u;
            // 0x30b3b4: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3B8u; }
        if (ctx->pc != 0x30B3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3B8u; }
        if (ctx->pc != 0x30B3B8u) { return; }
    }
    ctx->pc = 0x30B3B8u;
label_30b3b8:
    // 0x30b3b8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x30b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_30b3bc:
    // 0x30b3bc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x30b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_30b3c0:
    // 0x30b3c0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x30B3C0u;
    {
        const bool branch_taken_0x30b3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b3c0) {
            ctx->pc = 0x30B400u;
            goto label_30b400;
        }
    }
    ctx->pc = 0x30B3C8u;
    // 0x30b3c8: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b3cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30B3CCu;
    SET_GPR_U32(ctx, 31, 0x30B3D4u);
    ctx->pc = 0x30B3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3CCu;
            // 0x30b3d0: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3D4u; }
        if (ctx->pc != 0x30B3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3D4u; }
        if (ctx->pc != 0x30B3D4u) { return; }
    }
    ctx->pc = 0x30B3D4u;
label_30b3d4:
    // 0x30b3d4: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b3d8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x30b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30b3dc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30B3DCu;
    SET_GPR_U32(ctx, 31, 0x30B3E4u);
    ctx->pc = 0x30B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3DCu;
            // 0x30b3e0: 0x24440299  addiu       $a0, $v0, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3E4u; }
        if (ctx->pc != 0x30B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3E4u; }
        if (ctx->pc != 0x30B3E4u) { return; }
    }
    ctx->pc = 0x30B3E4u;
label_30b3e4:
    // 0x30b3e4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30b3e8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B3E8u;
    {
        const bool branch_taken_0x30b3e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30b3e8) {
            ctx->pc = 0x30B400u;
            goto label_30b400;
        }
    }
    ctx->pc = 0x30B3F0u;
    // 0x30b3f0: 0x8f84a1d8  lw          $a0, -0x5E28($gp)
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b3f4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x30b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30b3f8: 0xc0c2a48  jal         func_30A920
    ctx->pc = 0x30B3F8u;
    SET_GPR_U32(ctx, 31, 0x30B400u);
    ctx->pc = 0x30B3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3F8u;
            // 0x30b3fc: 0x24860299  addiu       $a2, $a0, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A920u;
    if (runtime->hasFunction(0x30A920u)) {
        auto targetFn = runtime->lookupFunction(0x30A920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B400u; }
        if (ctx->pc != 0x30B400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyAsciiToJis__13CNameRegiMenuFPcPc_0x30a920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B400u; }
        if (ctx->pc != 0x30B400u) { return; }
    }
    ctx->pc = 0x30B400u;
label_30b400:
    // 0x30b400: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b404: 0xc04a422  jal         func_129088
    ctx->pc = 0x30B404u;
    SET_GPR_U32(ctx, 31, 0x30B40Cu);
    ctx->pc = 0x30B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B404u;
            // 0x30b408: 0x24440299  addiu       $a0, $v0, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B40Cu; }
        if (ctx->pc != 0x30B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B40Cu; }
        if (ctx->pc != 0x30B40Cu) { return; }
    }
    ctx->pc = 0x30B40Cu;
label_30b40c:
    // 0x30b40c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B40Cu;
    {
        const bool branch_taken_0x30b40c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B40Cu;
            // 0x30b410: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b40c) {
            ctx->pc = 0x30B41Cu;
            goto label_30b41c;
        }
    }
    ctx->pc = 0x30B414u;
    // 0x30b414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b418: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x30b418u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_30b41c:
    // 0x30b41c: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b420: 0xac4302fc  sw          $v1, 0x2FC($v0)
    ctx->pc = 0x30b420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 764), GPR_U32(ctx, 3));
    // 0x30b424: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b428: 0x878385f8  lh          $v1, -0x7A08($gp)
    ctx->pc = 0x30b428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30b42c: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x30b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x30b430: 0x8c4202fc  lw          $v0, 0x2FC($v0)
    ctx->pc = 0x30b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
    // 0x30b434: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x30b434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b438: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B438u;
    {
        const bool branch_taken_0x30b438 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B438u;
            // 0x30b43c: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b438) {
            ctx->pc = 0x30B448u;
            goto label_30b448;
        }
    }
    ctx->pc = 0x30B440u;
    // 0x30b440: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x30b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30b444: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30b444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30b448:
    // 0x30b448: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b44c: 0x8423dce0  lh          $v1, -0x2320($at)
    ctx->pc = 0x30b44cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958304)));
    // 0x30b450: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B450u;
    {
        const bool branch_taken_0x30b450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B450u;
            // 0x30b454: 0x26650fa0  addiu       $a1, $s3, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b450) {
            ctx->pc = 0x30B470u;
            goto label_30b470;
        }
    }
    ctx->pc = 0x30B458u;
    // 0x30b458: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x30b458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x30b45c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b460: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x30B460u;
    SET_GPR_U32(ctx, 31, 0x30B468u);
    ctx->pc = 0x30B464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B460u;
            // 0x30b464: 0x24a5dd30  addiu       $a1, $a1, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B468u; }
        if (ctx->pc != 0x30B468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B468u; }
        if (ctx->pc != 0x30B468u) { return; }
    }
    ctx->pc = 0x30B468u;
label_30b468:
    // 0x30b468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30B468u;
    {
        const bool branch_taken_0x30b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B468u;
            // 0x30b46c: 0x8f82a1d8  lw          $v0, -0x5E28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b468) {
            ctx->pc = 0x30B48Cu;
            goto label_30b48c;
        }
    }
    ctx->pc = 0x30B470u;
label_30b470:
    // 0x30b470: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x30B470u;
    SET_GPR_U32(ctx, 31, 0x30B478u);
    ctx->pc = 0x30B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B470u;
            // 0x30b474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B478u; }
        if (ctx->pc != 0x30B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B478u; }
        if (ctx->pc != 0x30B478u) { return; }
    }
    ctx->pc = 0x30B478u;
label_30b478:
    // 0x30b478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b47c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b480: 0xc087720  jal         func_21DC80
    ctx->pc = 0x30B480u;
    SET_GPR_U32(ctx, 31, 0x30B488u);
    ctx->pc = 0x30B484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B480u;
            // 0x30b484: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B488u; }
        if (ctx->pc != 0x30B488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B488u; }
        if (ctx->pc != 0x30B488u) { return; }
    }
    ctx->pc = 0x30B488u;
label_30b488:
    // 0x30b488: 0x8f82a1d8  lw          $v0, -0x5E28($gp)
    ctx->pc = 0x30b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
label_30b48c:
    // 0x30b48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b490: 0xc0c2b50  jal         func_30AD40
    ctx->pc = 0x30B490u;
    SET_GPR_U32(ctx, 31, 0x30B498u);
    ctx->pc = 0x30B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B490u;
            // 0x30b494: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AD40u;
    if (runtime->hasFunction(0x30AD40u)) {
        auto targetFn = runtime->lookupFunction(0x30AD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B498u; }
        if (ctx->pc != 0x30B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustWaku__FP7CDC2MesP4RECT_0x30ad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B498u; }
        if (ctx->pc != 0x30B498u) { return; }
    }
    ctx->pc = 0x30B498u;
label_30b498:
    // 0x30b498: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b49c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30b4a0: 0x8c30ca5c  lw          $s0, -0x35A4($at)
    ctx->pc = 0x30b4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x30b4a4: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x30B4A4u;
    SET_GPR_U32(ctx, 31, 0x30B4ACu);
    ctx->pc = 0x30B4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4A4u;
            // 0x30b4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4ACu; }
        if (ctx->pc != 0x30B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4ACu; }
        if (ctx->pc != 0x30B4ACu) { return; }
    }
    ctx->pc = 0x30B4ACu;
label_30b4ac:
    // 0x30b4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b4b0: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x30B4B0u;
    SET_GPR_U32(ctx, 31, 0x30B4B8u);
    ctx->pc = 0x30B4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4B0u;
            // 0x30b4b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4B8u; }
        if (ctx->pc != 0x30B4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4B8u; }
        if (ctx->pc != 0x30B4B8u) { return; }
    }
    ctx->pc = 0x30B4B8u;
label_30b4b8:
    // 0x30b4b8: 0x8f84a1d8  lw          $a0, -0x5E28($gp)
    ctx->pc = 0x30b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b4bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b4c0: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x30B4C0u;
    SET_GPR_U32(ctx, 31, 0x30B4C8u);
    ctx->pc = 0x30B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4C0u;
            // 0x30b4c4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4C8u; }
        if (ctx->pc != 0x30B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4C8u; }
        if (ctx->pc != 0x30B4C8u) { return; }
    }
    ctx->pc = 0x30B4C8u;
label_30b4c8:
    // 0x30b4c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30b4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b4cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b4d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30B4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4DCu;
            // 0x30b4e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B4E4u;
}
