#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuWeaponRealStepEnvFunc__FP12CActionCharai
// Address: 0x2b9030 - 0x2b90c4
void MenuWeaponRealStepEnvFunc__FP12CActionCharai_0x2b9030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuWeaponRealStepEnvFunc__FP12CActionCharai_0x2b9030");
#endif

    switch (ctx->pc) {
        case 0x2b9030u: goto label_2b9030;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9038u: goto label_2b9038;
        case 0x2b903cu: goto label_2b903c;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9044u: goto label_2b9044;
        case 0x2b9048u: goto label_2b9048;
        case 0x2b904cu: goto label_2b904c;
        case 0x2b9050u: goto label_2b9050;
        case 0x2b9054u: goto label_2b9054;
        case 0x2b9058u: goto label_2b9058;
        case 0x2b905cu: goto label_2b905c;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9088u: goto label_2b9088;
        case 0x2b908cu: goto label_2b908c;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b909cu: goto label_2b909c;
        case 0x2b90a0u: goto label_2b90a0;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90a8u: goto label_2b90a8;
        case 0x2b90acu: goto label_2b90ac;
        case 0x2b90b0u: goto label_2b90b0;
        case 0x2b90b4u: goto label_2b90b4;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b90bcu: goto label_2b90bc;
        case 0x2b90c0u: goto label_2b90c0;
        default: break;
    }

    ctx->pc = 0x2b9030u;

label_2b9030:
    // 0x2b9030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b9030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b9034:
    // 0x2b9034: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x2b9034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2b9038:
    // 0x2b9038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b903c:
    // 0x2b903c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9040:
    // 0x2b9040: 0x14a3001b  bne         $a1, $v1, . + 4 + (0x1B << 2)
label_2b9044:
    if (ctx->pc == 0x2B9044u) {
        ctx->pc = 0x2B9044u;
            // 0x2b9044: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2B9048u;
        goto label_2b9048;
    }
    ctx->pc = 0x2B9040u;
    {
        const bool branch_taken_0x2b9040 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9040u;
            // 0x2b9044: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9040) {
            ctx->pc = 0x2B90B0u;
            goto label_2b90b0;
        }
    }
    ctx->pc = 0x2B9048u;
label_2b9048:
    // 0x2b9048: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b9048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b904c:
    // 0x2b904c: 0xc05af3c  jal         func_16BCF0
label_2b9050:
    if (ctx->pc == 0x2B9050u) {
        ctx->pc = 0x2B9050u;
            // 0x2b9050: 0x24a5f3f8  addiu       $a1, $a1, -0xC08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964216));
        ctx->pc = 0x2B9054u;
        goto label_2b9054;
    }
    ctx->pc = 0x2B904Cu;
    SET_GPR_U32(ctx, 31, 0x2B9054u);
    ctx->pc = 0x2B9050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B904Cu;
            // 0x2b9050: 0x24a5f3f8  addiu       $a1, $a1, -0xC08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9054u; }
        if (ctx->pc != 0x2B9054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9054u; }
        if (ctx->pc != 0x2B9054u) { return; }
    }
    ctx->pc = 0x2B9054u;
label_2b9054:
    // 0x2b9054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9058:
    // 0x2b9058: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2b905c:
    if (ctx->pc == 0x2B905Cu) {
        ctx->pc = 0x2B9060u;
        goto label_2b9060;
    }
    ctx->pc = 0x2B9058u;
    {
        const bool branch_taken_0x2b9058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9058) {
            ctx->pc = 0x2B90B0u;
            goto label_2b90b0;
        }
    }
    ctx->pc = 0x2B9060u;
label_2b9060:
    // 0x2b9060: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2b9060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9064:
    // 0x2b9064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9068:
    // 0x2b9068: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2b9068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2b906c:
    // 0x2b906c: 0x320f809  jalr        $t9
label_2b9070:
    if (ctx->pc == 0x2B9070u) {
        ctx->pc = 0x2B9070u;
            // 0x2b9070: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B9074u;
        goto label_2b9074;
    }
    ctx->pc = 0x2B906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9074u);
        ctx->pc = 0x2B9070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B906Cu;
            // 0x2b9070: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9074u; }
            if (ctx->pc != 0x2B9074u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9074u;
label_2b9074:
    // 0x2b9074: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x2b9074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2b9078:
    // 0x2b9078: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2b9078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_2b907c:
    // 0x2b907c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b9080:
    // 0x2b9080: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2b9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2b9084:
    // 0x2b9084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b9088:
    // 0x2b9088: 0x0  nop
    ctx->pc = 0x2b9088u;
    // NOP
label_2b908c:
    // 0x2b908c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2b908cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b9090:
    // 0x2b9090: 0xc04c374  jal         func_130DD0
label_2b9094:
    if (ctx->pc == 0x2B9094u) {
        ctx->pc = 0x2B9094u;
            // 0x2b9094: 0xe62c0000  swc1        $f12, 0x0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x2B9098u;
        goto label_2b9098;
    }
    ctx->pc = 0x2B9090u;
    SET_GPR_U32(ctx, 31, 0x2B9098u);
    ctx->pc = 0x2B9094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9090u;
            // 0x2b9094: 0xe62c0000  swc1        $f12, 0x0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9098u; }
        if (ctx->pc != 0x2B9098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9098u; }
        if (ctx->pc != 0x2B9098u) { return; }
    }
    ctx->pc = 0x2B9098u;
label_2b9098:
    // 0x2b9098: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b9098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2b909c:
    // 0x2b909c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b90a0:
    // 0x2b90a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2b90a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b90a4:
    // 0x2b90a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2b90a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2b90a8:
    // 0x2b90a8: 0x320f809  jalr        $t9
label_2b90ac:
    if (ctx->pc == 0x2B90ACu) {
        ctx->pc = 0x2B90ACu;
            // 0x2b90ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B90B0u;
        goto label_2b90b0;
    }
    ctx->pc = 0x2B90A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B90B0u);
        ctx->pc = 0x2B90ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B90A8u;
            // 0x2b90ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B90B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B90B0u; }
            if (ctx->pc != 0x2B90B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B90B0u;
label_2b90b0:
    // 0x2b90b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b90b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b90b4:
    // 0x2b90b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b90b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b90b8:
    // 0x2b90b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b90b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b90bc:
    // 0x2b90bc: 0x3e00008  jr          $ra
label_2b90c0:
    if (ctx->pc == 0x2B90C0u) {
        ctx->pc = 0x2B90C0u;
            // 0x2b90c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2B90C4u;
        goto label_fallthrough_0x2b90bc;
    }
    ctx->pc = 0x2B90BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B90C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B90BCu;
            // 0x2b90c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b90bc:
    ctx->pc = 0x2B90C4u;
}
