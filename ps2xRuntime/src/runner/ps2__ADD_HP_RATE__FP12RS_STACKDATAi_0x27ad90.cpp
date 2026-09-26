#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_HP_RATE__FP12RS_STACKDATAi
// Address: 0x27ad90 - 0x27ae38
void ps2__ADD_HP_RATE__FP12RS_STACKDATAi_0x27ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_HP_RATE__FP12RS_STACKDATAi_0x27ad90");
#endif

    switch (ctx->pc) {
        case 0x27adb8u: goto label_27adb8;
        case 0x27add8u: goto label_27add8;
        case 0x27ade8u: goto label_27ade8;
        case 0x27ae00u: goto label_27ae00;
        case 0x27ae14u: goto label_27ae14;
        default: break;
    }

    ctx->pc = 0x27ad90u;

    // 0x27ad90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27ad94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ad98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27ad9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ada0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27ada0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ada4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ada8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27ada8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27adac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27adacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27adb0: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x27ADB0u;
    SET_GPR_U32(ctx, 31, 0x27ADB8u);
    ctx->pc = 0x27ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADB0u;
            // 0x27adb4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADB8u; }
        if (ctx->pc != 0x27ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADB8u; }
        if (ctx->pc != 0x27ADB8u) { return; }
    }
    ctx->pc = 0x27ADB8u;
label_27adb8:
    // 0x27adb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27ADB8u;
    {
        const bool branch_taken_0x27adb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADB8u;
            // 0x27adbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adb8) {
            ctx->pc = 0x27ADC8u;
            goto label_27adc8;
        }
    }
    ctx->pc = 0x27ADC0u;
    // 0x27adc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27ADC0u;
    {
        const bool branch_taken_0x27adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADC0u;
            // 0x27adc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adc0) {
            ctx->pc = 0x27AE18u;
            goto label_27ae18;
        }
    }
    ctx->pc = 0x27ADC8u;
label_27adc8:
    // 0x27adc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27adc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27adcc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27adccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27add0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27ADD0u;
    SET_GPR_U32(ctx, 31, 0x27ADD8u);
    ctx->pc = 0x27ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADD0u;
            // 0x27add4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADD8u; }
        if (ctx->pc != 0x27ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADD8u; }
        if (ctx->pc != 0x27ADD8u) { return; }
    }
    ctx->pc = 0x27ADD8u;
label_27add8:
    // 0x27add8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27add8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27addc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27addcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27ade0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27ADE0u;
    SET_GPR_U32(ctx, 31, 0x27ADE8u);
    ctx->pc = 0x27ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADE0u;
            // 0x27ade4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADE8u; }
        if (ctx->pc != 0x27ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADE8u; }
        if (ctx->pc != 0x27ADE8u) { return; }
    }
    ctx->pc = 0x27ADE8u;
label_27ade8:
    // 0x27ade8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27adec: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x27adecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27adf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27ADF0u;
    {
        const bool branch_taken_0x27adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADF0u;
            // 0x27adf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adf0) {
            ctx->pc = 0x27AE08u;
            goto label_27ae08;
        }
    }
    ctx->pc = 0x27ADF8u;
    // 0x27adf8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27ADF8u;
    SET_GPR_U32(ctx, 31, 0x27AE00u);
    ctx->pc = 0x27ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADF8u;
            // 0x27adfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE00u; }
        if (ctx->pc != 0x27AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE00u; }
        if (ctx->pc != 0x27AE00u) { return; }
    }
    ctx->pc = 0x27AE00u;
label_27ae00:
    // 0x27ae00: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27ae00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27ae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ae08:
    // 0x27ae08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27ae08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ae0c: 0xc06806c  jal         func_1A01B0
    ctx->pc = 0x27AE0Cu;
    SET_GPR_U32(ctx, 31, 0x27AE14u);
    ctx->pc = 0x27AE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE0Cu;
            // 0x27ae10: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A01B0u;
    if (runtime->hasFunction(0x1A01B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A01B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE14u; }
        if (ctx->pc != 0x27AE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Rate__16CBattleCharaInfoFfif_0x1a01b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE14u; }
        if (ctx->pc != 0x27AE14u) { return; }
    }
    ctx->pc = 0x27AE14u;
label_27ae14:
    // 0x27ae14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ae18:
    // 0x27ae18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ae18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ae1c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ae20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ae20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ae24: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ae28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ae28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ae2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ae2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ae30: 0x3e00008  jr          $ra
    ctx->pc = 0x27AE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE30u;
            // 0x27ae34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AE38u;
}
