#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_SETUP_MAIN_UNIT__FP12RS_STACKDATAi
// Address: 0x279830 - 0x279a98
void ps2__DNG_SETUP_MAIN_UNIT__FP12RS_STACKDATAi_0x279830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_SETUP_MAIN_UNIT__FP12RS_STACKDATAi_0x279830");
#endif

    switch (ctx->pc) {
        case 0x27984cu: goto label_27984c;
        case 0x279854u: goto label_279854;
        case 0x2798a0u: goto label_2798a0;
        case 0x2798acu: goto label_2798ac;
        case 0x2798b8u: goto label_2798b8;
        case 0x2798d4u: goto label_2798d4;
        case 0x2798e8u: goto label_2798e8;
        case 0x2798f4u: goto label_2798f4;
        case 0x279900u: goto label_279900;
        case 0x27992cu: goto label_27992c;
        case 0x279934u: goto label_279934;
        case 0x279958u: goto label_279958;
        case 0x279970u: goto label_279970;
        case 0x279984u: goto label_279984;
        case 0x27999cu: goto label_27999c;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799f8u: goto label_2799f8;
        case 0x279a20u: goto label_279a20;
        case 0x279a44u: goto label_279a44;
        case 0x279a64u: goto label_279a64;
        case 0x279a78u: goto label_279a78;
        default: break;
    }

    ctx->pc = 0x279830u;

    // 0x279830: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x279830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x279834: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x279838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27983c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x279840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279844: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279844u;
    SET_GPR_U32(ctx, 31, 0x27984Cu);
    ctx->pc = 0x279848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279844u;
            // 0x279848: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27984Cu; }
        if (ctx->pc != 0x27984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27984Cu; }
        if (ctx->pc != 0x27984Cu) { return; }
    }
    ctx->pc = 0x27984Cu;
label_27984c:
    // 0x27984c: 0xc064220  jal         func_190880
    ctx->pc = 0x27984Cu;
    SET_GPR_U32(ctx, 31, 0x279854u);
    ctx->pc = 0x279850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27984Cu;
            // 0x279850: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279854u; }
        if (ctx->pc != 0x279854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279854u; }
        if (ctx->pc != 0x279854u) { return; }
    }
    ctx->pc = 0x279854u;
label_279854:
    // 0x279854: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279854u;
    {
        const bool branch_taken_0x279854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279854u;
            // 0x279858: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279854) {
            ctx->pc = 0x279864u;
            goto label_279864;
        }
    }
    ctx->pc = 0x27985Cu;
    // 0x27985c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x27985Cu;
    {
        const bool branch_taken_0x27985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27985Cu;
            // 0x279860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27985c) {
            ctx->pc = 0x279A7Cu;
            goto label_279a7c;
        }
    }
    ctx->pc = 0x279864u;
label_279864:
    // 0x279864: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x279864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x279868: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x279868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27986c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27986Cu;
    {
        const bool branch_taken_0x27986c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27986Cu;
            // 0x279870: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27986c) {
            ctx->pc = 0x27987Cu;
            goto label_27987c;
        }
    }
    ctx->pc = 0x279874u;
    // 0x279874: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x279874u;
    {
        const bool branch_taken_0x279874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279874u;
            // 0x279878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279874) {
            ctx->pc = 0x279A7Cu;
            goto label_279a7c;
        }
    }
    ctx->pc = 0x27987Cu;
label_27987c:
    // 0x27987c: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x27987cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x279880: 0x84224d96  lh          $v0, 0x4D96($at)
    ctx->pc = 0x279880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x279884: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279884u;
    {
        const bool branch_taken_0x279884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x279888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279884u;
            // 0x279888: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279884) {
            ctx->pc = 0x279894u;
            goto label_279894;
        }
    }
    ctx->pc = 0x27988Cu;
    // 0x27988c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x27988Cu;
    {
        const bool branch_taken_0x27988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27988Cu;
            // 0x279890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27988c) {
            ctx->pc = 0x279A7Cu;
            goto label_279a7c;
        }
    }
    ctx->pc = 0x279894u;
label_279894:
    // 0x279894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279898: 0xc06e9f4  jal         func_1BA7D0
    ctx->pc = 0x279898u;
    SET_GPR_U32(ctx, 31, 0x2798A0u);
    ctx->pc = 0x27989Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279898u;
            // 0x27989c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA7D0u;
    if (runtime->hasFunction(0x1BA7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798A0u; }
        if (ctx->pc != 0x2798A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__11CColPrimManFi_0x1ba7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798A0u; }
        if (ctx->pc != 0x2798A0u) { return; }
    }
    ctx->pc = 0x2798A0u;
label_2798a0:
    // 0x2798a0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2798a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2798a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2798a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798a8: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x2798a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
label_2798ac:
    // 0x2798ac: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x2798acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2798b0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2798B0u;
    SET_GPR_U32(ctx, 31, 0x2798B8u);
    ctx->pc = 0x2798B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798B0u;
            // 0x2798b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798B8u; }
        if (ctx->pc != 0x2798B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798B8u; }
        if (ctx->pc != 0x2798B8u) { return; }
    }
    ctx->pc = 0x2798B8u;
label_2798b8:
    // 0x2798b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2798b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2798bc: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x2798bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2798c0: 0x0  nop
    ctx->pc = 0x2798c0u;
    // NOP
    // 0x2798c4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2798C4u;
    {
        const bool branch_taken_0x2798c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2798c4) {
            ctx->pc = 0x2798ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2798ac;
        }
    }
    ctx->pc = 0x2798CCu;
    // 0x2798cc: 0xc0b8554  jal         func_2E1550
    ctx->pc = 0x2798CCu;
    SET_GPR_U32(ctx, 31, 0x2798D4u);
    ctx->pc = 0x2798D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798CCu;
            // 0x2798d0: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1550u;
    if (runtime->hasFunction(0x2E1550u)) {
        auto targetFn = runtime->lookupFunction(0x2E1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798D4u; }
        if (ctx->pc != 0x2798D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllClearEffSpt__16CEffectScriptManFv_0x2e1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798D4u; }
        if (ctx->pc != 0x2798D4u) { return; }
    }
    ctx->pc = 0x2798D4u;
label_2798d4:
    // 0x2798d4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x2798d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2798d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2798d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2798dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2798dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798e0: 0xc0b8054  jal         func_2E0150
    ctx->pc = 0x2798E0u;
    SET_GPR_U32(ctx, 31, 0x2798E8u);
    ctx->pc = 0x2798E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798E0u;
            // 0x2798e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0150u;
    if (runtime->hasFunction(0x2E0150u)) {
        auto targetFn = runtime->lookupFunction(0x2E0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798E8u; }
        if (ctx->pc != 0x2798E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798E8u; }
        if (ctx->pc != 0x2798E8u) { return; }
    }
    ctx->pc = 0x2798E8u;
label_2798e8:
    // 0x2798e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2798e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798ec: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2798ECu;
    SET_GPR_U32(ctx, 31, 0x2798F4u);
    ctx->pc = 0x2798F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798ECu;
            // 0x2798f0: 0x240500aa  addiu       $a1, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798F4u; }
        if (ctx->pc != 0x2798F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798F4u; }
        if (ctx->pc != 0x2798F4u) { return; }
    }
    ctx->pc = 0x2798F4u;
label_2798f4:
    // 0x2798f4: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x2798f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x2798f8: 0xc0670f4  jal         func_19C3D0
    ctx->pc = 0x2798F8u;
    SET_GPR_U32(ctx, 31, 0x279900u);
    ctx->pc = 0x2798FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798F8u;
            // 0x2798fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279900u; }
        if (ctx->pc != 0x279900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279900u; }
        if (ctx->pc != 0x279900u) { return; }
    }
    ctx->pc = 0x279900u;
label_279900:
    // 0x279900: 0x8f848ac0  lw          $a0, -0x7540($gp)
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x279904: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x279904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x279908: 0x8f8897dc  lw          $t0, -0x6824($gp)
    ctx->pc = 0x279908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27990c: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x27990cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
    // 0x279910: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x279910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279914: 0x24a5f3e0  addiu       $a1, $a1, -0xC20
    ctx->pc = 0x279914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
    // 0x279918: 0x24c6f410  addiu       $a2, $a2, -0xBF0
    ctx->pc = 0x279918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
    // 0x27991c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x27991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x279920: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x279920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279924: 0xc07a3cc  jal         func_1E8F30
    ctx->pc = 0x279924u;
    SET_GPR_U32(ctx, 31, 0x27992Cu);
    ctx->pc = 0x279928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279924u;
            // 0x279928: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F30u;
    if (runtime->hasFunction(0x1E8F30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27992Cu; }
        if (ctx->pc != 0x27992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27992Cu; }
        if (ctx->pc != 0x27992Cu) { return; }
    }
    ctx->pc = 0x27992Cu;
label_27992c:
    // 0x27992c: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x27992Cu;
    SET_GPR_U32(ctx, 31, 0x279934u);
    ctx->pc = 0x279930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27992Cu;
            // 0x279930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279934u; }
        if (ctx->pc != 0x279934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279934u; }
        if (ctx->pc != 0x279934u) { return; }
    }
    ctx->pc = 0x279934u;
label_279934:
    // 0x279934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279934u;
    {
        const bool branch_taken_0x279934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279934u;
            // 0x279938: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279934) {
            ctx->pc = 0x279944u;
            goto label_279944;
        }
    }
    ctx->pc = 0x27993Cu;
    // 0x27993c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x27993Cu;
    {
        const bool branch_taken_0x27993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27993Cu;
            // 0x279940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27993c) {
            ctx->pc = 0x279A7Cu;
            goto label_279a7c;
        }
    }
    ctx->pc = 0x279944u;
label_279944:
    // 0x279944: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x279944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x279948: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x279948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x27994c: 0x2484cbc0  addiu       $a0, $a0, -0x3440
    ctx->pc = 0x27994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953920));
    // 0x279950: 0xc0524c8  jal         func_149320
    ctx->pc = 0x279950u;
    SET_GPR_U32(ctx, 31, 0x279958u);
    ctx->pc = 0x279954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279950u;
            // 0x279954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279958u; }
        if (ctx->pc != 0x279958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279958u; }
        if (ctx->pc != 0x279958u) { return; }
    }
    ctx->pc = 0x279958u;
label_279958:
    // 0x279958: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x279958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x27995c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279960: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x279960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x279964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x279964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279968: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x279968u;
    SET_GPR_U32(ctx, 31, 0x279970u);
    ctx->pc = 0x27996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279968u;
            // 0x27996c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279970u; }
        if (ctx->pc != 0x279970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279970u; }
        if (ctx->pc != 0x279970u) { return; }
    }
    ctx->pc = 0x279970u;
label_279970:
    // 0x279970: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x279970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x279974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279978: 0x24a5cbd0  addiu       $a1, $a1, -0x3430
    ctx->pc = 0x279978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953936));
    // 0x27997c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x27997Cu;
    SET_GPR_U32(ctx, 31, 0x279984u);
    ctx->pc = 0x279980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27997Cu;
            // 0x279980: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279984u; }
        if (ctx->pc != 0x279984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279984u; }
        if (ctx->pc != 0x279984u) { return; }
    }
    ctx->pc = 0x279984u;
label_279984:
    // 0x279984: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x279984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x279988: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x279988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x27998c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279990: 0x24a5cbe0  addiu       $a1, $a1, -0x3420
    ctx->pc = 0x279990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953952));
    // 0x279994: 0xc04b414  jal         func_12D050
    ctx->pc = 0x279994u;
    SET_GPR_U32(ctx, 31, 0x27999Cu);
    ctx->pc = 0x279998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279994u;
            // 0x279998: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27999Cu; }
        if (ctx->pc != 0x27999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27999Cu; }
        if (ctx->pc != 0x27999Cu) { return; }
    }
    ctx->pc = 0x27999Cu;
label_27999c:
    // 0x27999c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x27999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2799a0: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2799a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2799a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2799a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799a8: 0xc08dab0  jal         func_236AC0
    ctx->pc = 0x2799A8u;
    SET_GPR_U32(ctx, 31, 0x2799B0u);
    ctx->pc = 0x2799ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2799A8u;
            // 0x2799ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236AC0u;
    if (runtime->hasFunction(0x236AC0u)) {
        auto targetFn = runtime->lookupFunction(0x236AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799B0u; }
        if (ctx->pc != 0x2799B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyActiveIconTexture__FPP10mgCTextureiPUi_0x236ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799B0u; }
        if (ctx->pc != 0x2799B0u) { return; }
    }
    ctx->pc = 0x2799B0u;
label_2799b0:
    // 0x2799b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2799b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799b4: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2799B4u;
    SET_GPR_U32(ctx, 31, 0x2799BCu);
    ctx->pc = 0x2799B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2799B4u;
            // 0x2799b8: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799BCu; }
        if (ctx->pc != 0x2799BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799BCu; }
        if (ctx->pc != 0x2799BCu) { return; }
    }
    ctx->pc = 0x2799BCu;
label_2799bc:
    // 0x2799bc: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2799bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2799c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2799c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2799c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2799c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2799c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2799c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799cc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2799ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2799d0: 0x8c23a498  lw          $v1, -0x5B68($at)
    ctx->pc = 0x2799d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
    // 0x2799d4: 0xae23057c  sw          $v1, 0x57C($s1)
    ctx->pc = 0x2799d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1404), GPR_U32(ctx, 3));
    // 0x2799d8: 0xae220580  sw          $v0, 0x580($s1)
    ctx->pc = 0x2799d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 2));
    // 0x2799dc: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x2799dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x2799e0: 0xc07a38c  jal         func_1E8E30
    ctx->pc = 0x2799E0u;
    SET_GPR_U32(ctx, 31, 0x2799E8u);
    ctx->pc = 0x2799E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2799E0u;
            // 0x2799e4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E30u;
    if (runtime->hasFunction(0x1E8E30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799E8u; }
        if (ctx->pc != 0x2799E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacterSnd__FP16CUserDataManageriPc_0x1e8e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799E8u; }
        if (ctx->pc != 0x2799E8u) { return; }
    }
    ctx->pc = 0x2799E8u;
label_2799e8:
    // 0x2799e8: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x2799e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x2799ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2799ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2799f0: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2799F0u;
    SET_GPR_U32(ctx, 31, 0x2799F8u);
    ctx->pc = 0x2799F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2799F0u;
            // 0x2799f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799F8u; }
        if (ctx->pc != 0x2799F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2799F8u; }
        if (ctx->pc != 0x2799F8u) { return; }
    }
    ctx->pc = 0x2799F8u;
label_2799f8:
    // 0x2799f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2799fc: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2799FCu;
    {
        const bool branch_taken_0x2799fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x279A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2799FCu;
            // 0x279a00: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799fc) {
            ctx->pc = 0x279A08u;
            goto label_279a08;
        }
    }
    ctx->pc = 0x279A04u;
    // 0x279a04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x279a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279a08:
    // 0x279a08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x279a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279a0c: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x279A0Cu;
    {
        const bool branch_taken_0x279a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x279A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A0Cu;
            // 0x279a10: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a0c) {
            ctx->pc = 0x279A18u;
            goto label_279a18;
        }
    }
    ctx->pc = 0x279A14u;
    // 0x279a14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x279a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279a18:
    // 0x279a18: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x279A18u;
    SET_GPR_U32(ctx, 31, 0x279A20u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A20u; }
        if (ctx->pc != 0x279A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A20u; }
        if (ctx->pc != 0x279A20u) { return; }
    }
    ctx->pc = 0x279A20u;
label_279a20:
    // 0x279a20: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x279a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x279a24: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x279a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x279a28: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x279a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x279a2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x279a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x279a30: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x279a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x279a34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x279a38: 0x2442f410  addiu       $v0, $v0, -0xBF0
    ctx->pc = 0x279a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
    // 0x279a3c: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x279A3Cu;
    SET_GPR_U32(ctx, 31, 0x279A44u);
    ctx->pc = 0x279A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279A3Cu;
            // 0x279a40: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A44u; }
        if (ctx->pc != 0x279A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A44u; }
        if (ctx->pc != 0x279A44u) { return; }
    }
    ctx->pc = 0x279A44u;
label_279a44:
    // 0x279a44: 0xae220588  sw          $v0, 0x588($s1)
    ctx->pc = 0x279a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 2));
    // 0x279a48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x279a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x279a4c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x279a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x279a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a54: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x279a54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x279a58: 0x8c22c4d0  lw          $v0, -0x3B30($at)
    ctx->pc = 0x279a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x279a5c: 0xc05aa9c  jal         func_16AA70
    ctx->pc = 0x279A5Cu;
    SET_GPR_U32(ctx, 31, 0x279A64u);
    ctx->pc = 0x279A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279A5Cu;
            // 0x279a60: 0xae22058c  sw          $v0, 0x58C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AA70u;
    if (runtime->hasFunction(0x16AA70u)) {
        auto targetFn = runtime->lookupFunction(0x16AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A64u; }
        if (ctx->pc != 0x279A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSoundInfoCopy__12CActionCharaFv_0x16aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A64u; }
        if (ctx->pc != 0x279A64u) { return; }
    }
    ctx->pc = 0x279A64u;
label_279a64:
    // 0x279a64: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x279a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x279a68: 0xae2207dc  sw          $v0, 0x7DC($s1)
    ctx->pc = 0x279a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 2));
    // 0x279a6c: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x279a70: 0xc0670f4  jal         func_19C3D0
    ctx->pc = 0x279A70u;
    SET_GPR_U32(ctx, 31, 0x279A78u);
    ctx->pc = 0x279A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279A70u;
            // 0x279a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A78u; }
        if (ctx->pc != 0x279A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A78u; }
        if (ctx->pc != 0x279A78u) { return; }
    }
    ctx->pc = 0x279A78u;
label_279a78:
    // 0x279a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279a7c:
    // 0x279a7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x279a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279a80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x279a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279a84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279a90: 0x3e00008  jr          $ra
    ctx->pc = 0x279A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A90u;
            // 0x279a94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279A98u;
}
