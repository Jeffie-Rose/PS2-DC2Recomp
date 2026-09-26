#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AdjustWaku__FP7CDC2MesP4RECT
// Address: 0x30ad40 - 0x30adcc
void AdjustWaku__FP7CDC2MesP4RECT_0x30ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AdjustWaku__FP7CDC2MesP4RECT_0x30ad40");
#endif

    switch (ctx->pc) {
        case 0x30ad60u: goto label_30ad60;
        case 0x30ad88u: goto label_30ad88;
        default: break;
    }

    ctx->pc = 0x30ad40u;

    // 0x30ad40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30ad44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30ad48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ad4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ad50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30ad50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30ad54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad58: 0xc087898  jal         func_21E260
    ctx->pc = 0x30AD58u;
    SET_GPR_U32(ctx, 31, 0x30AD60u);
    ctx->pc = 0x30AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD58u;
            // 0x30ad5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD60u; }
        if (ctx->pc != 0x30AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD60u; }
        if (ctx->pc != 0x30AD60u) { return; }
    }
    ctx->pc = 0x30AD60u;
label_30ad60:
    // 0x30ad60: 0x8e501e14  lw          $s0, 0x1E14($s2)
    ctx->pc = 0x30ad60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7700)));
    // 0x30ad64: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x30ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x30ad68: 0xdf828608  ld          $v0, -0x79F8($gp)
    ctx->pc = 0x30ad68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x30ad6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad70: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30ad70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30ad74: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x30ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30ad78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x30ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30ad7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30ad7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30ad80: 0xc0876b0  jal         func_21DAC0
    ctx->pc = 0x30AD80u;
    SET_GPR_U32(ctx, 31, 0x30AD88u);
    ctx->pc = 0x30AD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD80u;
            // 0x30ad84: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD88u; }
        if (ctx->pc != 0x30AD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AD88u; }
        if (ctx->pc != 0x30AD88u) { return; }
    }
    ctx->pc = 0x30AD88u;
label_30ad88:
    // 0x30ad88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ad8c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x30ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x30ad90: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x30ad94: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30ad98: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x30ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x30ad9c: 0x2484ffea  addiu       $a0, $a0, -0x16
    ctx->pc = 0x30ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967274));
    // 0x30ada0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x30ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x30ada4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x30ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x30ada8: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x30ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x30adac: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x30adacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x30adb0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x30adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x30adb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30adb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30adb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30adb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30adbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30adbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30adc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30adc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30adc4: 0x3e00008  jr          $ra
    ctx->pc = 0x30ADC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ADC4u;
            // 0x30adc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30ADCCu;
}
