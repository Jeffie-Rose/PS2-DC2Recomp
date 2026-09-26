#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaSoundLoad__FP9mgCMemoryii
// Address: 0x2b9f20 - 0x2ba01c
void MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20");
#endif

    switch (ctx->pc) {
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9facu: goto label_2b9fac;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2ba000u: goto label_2ba000;
        default: break;
    }

    ctx->pc = 0x2b9f20u;

    // 0x2b9f20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b9f24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b9f28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b9f2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b9f30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b9f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9f38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b9f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b9f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f40: 0xaf809bdc  sw          $zero, -0x6424($gp)
    ctx->pc = 0x2b9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941660), GPR_U32(ctx, 0));
    // 0x2b9f44: 0xaf918488  sw          $s1, -0x7B78($gp)
    ctx->pc = 0x2b9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935688), GPR_U32(ctx, 17));
    // 0x2b9f48: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B9F48u;
    SET_GPR_U32(ctx, 31, 0x2B9F50u);
    ctx->pc = 0x2B9F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F48u;
            // 0x2b9f4c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F50u; }
        if (ctx->pc != 0x2B9F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F50u; }
        if (ctx->pc != 0x2B9F50u) { return; }
    }
    ctx->pc = 0x2B9F50u;
label_2b9f50:
    // 0x2b9f50: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2b9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2b9f54: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2b9f54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b9f58: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2b9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b9f5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b9f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b9f64: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9F64u;
    {
        const bool branch_taken_0x2b9f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F64u;
            // 0x2b9f68: 0xaf829bdc  sw          $v0, -0x6424($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f64) {
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9F6Cu;
    // 0x2b9f6c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2B9F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F74u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F74u; }
        if (ctx->pc != 0x2B9F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F74u; }
        if (ctx->pc != 0x2B9F74u) { return; }
    }
    ctx->pc = 0x2B9F74u;
label_2b9f74:
    // 0x2b9f74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f7c: 0xc07a38c  jal         func_1E8E30
    ctx->pc = 0x2B9F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F84u);
    ctx->pc = 0x2B9F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F7Cu;
            // 0x2b9f80: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E30u;
    if (runtime->hasFunction(0x1E8E30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F84u; }
        if (ctx->pc != 0x2B9F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacterSnd__FP16CUserDataManageriPc_0x1e8e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F84u; }
        if (ctx->pc != 0x2B9F84u) { return; }
    }
    ctx->pc = 0x2B9F84u;
label_2b9f84:
    // 0x2b9f84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9F84u;
    {
        const bool branch_taken_0x2b9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f84) {
            ctx->pc = 0x2B9FACu;
            goto label_2b9fac;
        }
    }
    ctx->pc = 0x2B9F8Cu;
label_2b9f8c:
    // 0x2b9f8c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2B9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F94u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F94u; }
        if (ctx->pc != 0x2B9F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F94u; }
        if (ctx->pc != 0x2B9F94u) { return; }
    }
    ctx->pc = 0x2B9F94u;
label_2b9f94:
    // 0x2b9f94: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b9f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2b9f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9f9c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2b9fa0: 0x84244d98  lh          $a0, 0x4D98($at)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x2b9fa4: 0xc0ad77c  jal         func_2B5DF0
    ctx->pc = 0x2B9FA4u;
    SET_GPR_U32(ctx, 31, 0x2B9FACu);
    ctx->pc = 0x2B9FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FA4u;
            // 0x2b9fa8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FACu; }
        if (ctx->pc != 0x2B9FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FACu; }
        if (ctx->pc != 0x2B9FACu) { return; }
    }
    ctx->pc = 0x2B9FACu;
label_2b9fac:
    // 0x2b9fac: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9FACu;
    {
        const bool branch_taken_0x2b9fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9fac) {
            ctx->pc = 0x2B9FCCu;
            goto label_2b9fcc;
        }
    }
    ctx->pc = 0x2B9FB4u;
    // 0x2b9fb4: 0x8f859bdc  lw          $a1, -0x6424($gp)
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941660)));
    // 0x2b9fb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b9fbc: 0xc05224c  jal         func_148930
    ctx->pc = 0x2B9FBCu;
    SET_GPR_U32(ctx, 31, 0x2B9FC4u);
    ctx->pc = 0x2B9FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FBCu;
            // 0x2b9fc0: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FC4u; }
        if (ctx->pc != 0x2B9FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FC4u; }
        if (ctx->pc != 0x2B9FC4u) { return; }
    }
    ctx->pc = 0x2B9FC4u;
label_2b9fc4:
    // 0x2b9fc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9FC4u;
    {
        const bool branch_taken_0x2b9fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FC4u;
            // 0x2b9fc8: 0x8fa300ac  lw          $v1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fc4) {
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9FCCu;
label_2b9fcc:
    // 0x2b9fcc: 0x8f859bdc  lw          $a1, -0x6424($gp)
    ctx->pc = 0x2b9fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941660)));
    // 0x2b9fd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b9fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b9fd4: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x2b9fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2b9fd8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2B9FD8u;
    SET_GPR_U32(ctx, 31, 0x2B9FE0u);
    ctx->pc = 0x2B9FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FD8u;
            // 0x2b9fdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FE0u; }
        if (ctx->pc != 0x2B9FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FE0u; }
        if (ctx->pc != 0x2B9FE0u) { return; }
    }
    ctx->pc = 0x2B9FE0u;
label_2b9fe0:
    // 0x2b9fe0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2b9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2b9fe4:
    // 0x2b9fe4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2b9fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b9fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9FE8u;
    {
        const bool branch_taken_0x2b9fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FE8u;
            // 0x2b9fec: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fe8) {
            ctx->pc = 0x2B9FF8u;
            goto label_2b9ff8;
        }
    }
    ctx->pc = 0x2B9FF0u;
    // 0x2b9ff0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b9ff4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9ff8:
    // 0x2b9ff8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B9FF8u;
    SET_GPR_U32(ctx, 31, 0x2BA000u);
    ctx->pc = 0x2B9FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FF8u;
            // 0x2b9ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA000u; }
        if (ctx->pc != 0x2BA000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA000u; }
        if (ctx->pc != 0x2BA000u) { return; }
    }
    ctx->pc = 0x2BA000u;
label_2ba000:
    // 0x2ba000: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2ba000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2ba004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ba004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba014: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA014u;
            // 0x2ba018: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA01Cu;
}
