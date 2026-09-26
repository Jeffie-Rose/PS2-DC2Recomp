#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuTimeStepEnvFunc__FP6CSceneP12CActionCharai
// Address: 0x2b8f40 - 0x2b902c
void MenuTimeStepEnvFunc__FP6CSceneP12CActionCharai_0x2b8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuTimeStepEnvFunc__FP6CSceneP12CActionCharai_0x2b8f40");
#endif

    switch (ctx->pc) {
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b9004u: goto label_2b9004;
        case 0x2b9014u: goto label_2b9014;
        default: break;
    }

    ctx->pc = 0x2b8f40u;

    // 0x2b8f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b8f44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b8f48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8f50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8f58: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B8F58u;
    {
        const bool branch_taken_0x2b8f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F58u;
            // 0x2b8f5c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f58) {
            ctx->pc = 0x2B9014u;
            goto label_2b9014;
        }
    }
    ctx->pc = 0x2B8F60u;
    // 0x2b8f60: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8F60u;
    {
        const bool branch_taken_0x2b8f60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F60u;
            // 0x2b8f64: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f60) {
            ctx->pc = 0x2B8F74u;
            goto label_2b8f74;
        }
    }
    ctx->pc = 0x2B8F68u;
    // 0x2b8f68: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2B8F68u;
    {
        const bool branch_taken_0x2b8f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F68u;
            // 0x2b8f6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f68) {
            ctx->pc = 0x2B9018u;
            goto label_2b9018;
        }
    }
    ctx->pc = 0x2B8F70u;
    // 0x2b8f70: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x2b8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2b8f74:
    // 0x2b8f74: 0x14c30027  bne         $a2, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B8F74u;
    {
        const bool branch_taken_0x2b8f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b8f74) {
            ctx->pc = 0x2B9014u;
            goto label_2b9014;
        }
    }
    ctx->pc = 0x2B8F7Cu;
    // 0x2b8f7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b8f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f84: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2B8F84u;
    SET_GPR_U32(ctx, 31, 0x2B8F8Cu);
    ctx->pc = 0x2B8F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F84u;
            // 0x2b8f88: 0x24a5f3e8  addiu       $a1, $a1, -0xC18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F8Cu; }
        if (ctx->pc != 0x2B8F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F8Cu; }
        if (ctx->pc != 0x2B8F8Cu) { return; }
    }
    ctx->pc = 0x2B8F8Cu;
label_2b8f8c:
    // 0x2b8f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b8f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f98: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2B8F98u;
    SET_GPR_U32(ctx, 31, 0x2B8FA0u);
    ctx->pc = 0x2B8F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F98u;
            // 0x2b8f9c: 0x24a5f3f0  addiu       $a1, $a1, -0xC10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FA0u; }
        if (ctx->pc != 0x2B8FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FA0u; }
        if (ctx->pc != 0x2B8FA0u) { return; }
    }
    ctx->pc = 0x2B8FA0u;
label_2b8fa0:
    // 0x2b8fa0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B8FA0u;
    {
        const bool branch_taken_0x2b8fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FA0u;
            // 0x2b8fa4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fa0) {
            ctx->pc = 0x2B9014u;
            goto label_2b9014;
        }
    }
    ctx->pc = 0x2B8FA8u;
    // 0x2b8fa8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8FA8u;
    {
        const bool branch_taken_0x2b8fa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fa8) {
            ctx->pc = 0x2B8FB8u;
            goto label_2b8fb8;
        }
    }
    ctx->pc = 0x2B8FB0u;
    // 0x2b8fb0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B8FB0u;
    {
        const bool branch_taken_0x2b8fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fb0) {
            ctx->pc = 0x2B9014u;
            goto label_2b9014;
        }
    }
    ctx->pc = 0x2B8FB8u;
label_2b8fb8:
    // 0x2b8fb8: 0xc05831c  jal         func_160C70
    ctx->pc = 0x2B8FB8u;
    SET_GPR_U32(ctx, 31, 0x2B8FC0u);
    ctx->pc = 0x2B8FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FB8u;
            // 0x2b8fbc: 0xc64c2f6c  lwc1        $f12, 0x2F6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FC0u; }
        if (ctx->pc != 0x2B8FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FC0u; }
        if (ctx->pc != 0x2B8FC0u) { return; }
    }
    ctx->pc = 0x2B8FC0u;
label_2b8fc0:
    // 0x2b8fc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8fc4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8FC4u;
    {
        const bool branch_taken_0x2b8fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FC4u;
            // 0x2b8fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fc4) {
            ctx->pc = 0x2B8FF8u;
            goto label_2b8ff8;
        }
    }
    ctx->pc = 0x2B8FCCu;
    // 0x2b8fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8fd4: 0xc04df68  jal         func_137DA0
    ctx->pc = 0x2B8FD4u;
    SET_GPR_U32(ctx, 31, 0x2B8FDCu);
    ctx->pc = 0x2B8FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FD4u;
            // 0x2b8fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FDCu; }
        if (ctx->pc != 0x2B8FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FDCu; }
        if (ctx->pc != 0x2B8FDCu) { return; }
    }
    ctx->pc = 0x2B8FDCu;
label_2b8fdc:
    // 0x2b8fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fe4: 0xc04df68  jal         func_137DA0
    ctx->pc = 0x2B8FE4u;
    SET_GPR_U32(ctx, 31, 0x2B8FECu);
    ctx->pc = 0x2B8FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FE4u;
            // 0x2b8fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FECu; }
        if (ctx->pc != 0x2B8FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FECu; }
        if (ctx->pc != 0x2B8FECu) { return; }
    }
    ctx->pc = 0x2B8FECu;
label_2b8fec:
    // 0x2b8fec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8FECu;
    {
        const bool branch_taken_0x2b8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fec) {
            ctx->pc = 0x2B9014u;
            goto label_2b9014;
        }
    }
    ctx->pc = 0x2B8FF4u;
    // 0x2b8ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ff8:
    // 0x2b8ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ffc: 0xc04df68  jal         func_137DA0
    ctx->pc = 0x2B8FFCu;
    SET_GPR_U32(ctx, 31, 0x2B9004u);
    ctx->pc = 0x2B9000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FFCu;
            // 0x2b9000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9004u; }
        if (ctx->pc != 0x2B9004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9004u; }
        if (ctx->pc != 0x2B9004u) { return; }
    }
    ctx->pc = 0x2B9004u;
label_2b9004:
    // 0x2b9004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b900c: 0xc04df68  jal         func_137DA0
    ctx->pc = 0x2B900Cu;
    SET_GPR_U32(ctx, 31, 0x2B9014u);
    ctx->pc = 0x2B9010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B900Cu;
            // 0x2b9010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9014u; }
        if (ctx->pc != 0x2B9014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9014u; }
        if (ctx->pc != 0x2B9014u) { return; }
    }
    ctx->pc = 0x2B9014u;
label_2b9014:
    // 0x2b9014: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b9014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9018:
    // 0x2b9018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b9018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b901c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b901cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9024: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9024u;
            // 0x2b9028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B902Cu;
}
