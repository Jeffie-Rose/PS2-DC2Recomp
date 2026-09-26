#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Throw__4CPotFv
// Address: 0x2ccef0 - 0x2ccffc
void Throw__4CPotFv_0x2ccef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Throw__4CPotFv_0x2ccef0");
#endif

    switch (ctx->pc) {
        case 0x2ccef0u: goto label_2ccef0;
        case 0x2ccef4u: goto label_2ccef4;
        case 0x2ccef8u: goto label_2ccef8;
        case 0x2ccefcu: goto label_2ccefc;
        case 0x2ccf00u: goto label_2ccf00;
        case 0x2ccf04u: goto label_2ccf04;
        case 0x2ccf08u: goto label_2ccf08;
        case 0x2ccf0cu: goto label_2ccf0c;
        case 0x2ccf10u: goto label_2ccf10;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf18u: goto label_2ccf18;
        case 0x2ccf1cu: goto label_2ccf1c;
        case 0x2ccf20u: goto label_2ccf20;
        case 0x2ccf24u: goto label_2ccf24;
        case 0x2ccf28u: goto label_2ccf28;
        case 0x2ccf2cu: goto label_2ccf2c;
        case 0x2ccf30u: goto label_2ccf30;
        case 0x2ccf34u: goto label_2ccf34;
        case 0x2ccf38u: goto label_2ccf38;
        case 0x2ccf3cu: goto label_2ccf3c;
        case 0x2ccf40u: goto label_2ccf40;
        case 0x2ccf44u: goto label_2ccf44;
        case 0x2ccf48u: goto label_2ccf48;
        case 0x2ccf4cu: goto label_2ccf4c;
        case 0x2ccf50u: goto label_2ccf50;
        case 0x2ccf54u: goto label_2ccf54;
        case 0x2ccf58u: goto label_2ccf58;
        case 0x2ccf5cu: goto label_2ccf5c;
        case 0x2ccf60u: goto label_2ccf60;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf68u: goto label_2ccf68;
        case 0x2ccf6cu: goto label_2ccf6c;
        case 0x2ccf70u: goto label_2ccf70;
        case 0x2ccf74u: goto label_2ccf74;
        case 0x2ccf78u: goto label_2ccf78;
        case 0x2ccf7cu: goto label_2ccf7c;
        case 0x2ccf80u: goto label_2ccf80;
        case 0x2ccf84u: goto label_2ccf84;
        case 0x2ccf88u: goto label_2ccf88;
        case 0x2ccf8cu: goto label_2ccf8c;
        case 0x2ccf90u: goto label_2ccf90;
        case 0x2ccf94u: goto label_2ccf94;
        case 0x2ccf98u: goto label_2ccf98;
        case 0x2ccf9cu: goto label_2ccf9c;
        case 0x2ccfa0u: goto label_2ccfa0;
        case 0x2ccfa4u: goto label_2ccfa4;
        case 0x2ccfa8u: goto label_2ccfa8;
        case 0x2ccfacu: goto label_2ccfac;
        case 0x2ccfb0u: goto label_2ccfb0;
        case 0x2ccfb4u: goto label_2ccfb4;
        case 0x2ccfb8u: goto label_2ccfb8;
        case 0x2ccfbcu: goto label_2ccfbc;
        case 0x2ccfc0u: goto label_2ccfc0;
        case 0x2ccfc4u: goto label_2ccfc4;
        case 0x2ccfc8u: goto label_2ccfc8;
        case 0x2ccfccu: goto label_2ccfcc;
        case 0x2ccfd0u: goto label_2ccfd0;
        case 0x2ccfd4u: goto label_2ccfd4;
        case 0x2ccfd8u: goto label_2ccfd8;
        case 0x2ccfdcu: goto label_2ccfdc;
        case 0x2ccfe0u: goto label_2ccfe0;
        case 0x2ccfe4u: goto label_2ccfe4;
        case 0x2ccfe8u: goto label_2ccfe8;
        case 0x2ccfecu: goto label_2ccfec;
        case 0x2ccff0u: goto label_2ccff0;
        case 0x2ccff4u: goto label_2ccff4;
        case 0x2ccff8u: goto label_2ccff8;
        default: break;
    }

    ctx->pc = 0x2ccef0u;

label_2ccef0:
    // 0x2ccef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ccef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ccef4:
    // 0x2ccef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ccef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ccef8:
    // 0x2ccef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ccefc:
    // 0x2ccefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ccf00:
    // 0x2ccf00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ccf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ccf04:
    // 0x2ccf04: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_2ccf08:
    if (ctx->pc == 0x2CCF08u) {
        ctx->pc = 0x2CCF08u;
            // 0x2ccf08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF0Cu;
        goto label_2ccf0c;
    }
    ctx->pc = 0x2CCF04u;
    {
        const bool branch_taken_0x2ccf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF04u;
            // 0x2ccf08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf04) {
            ctx->pc = 0x2CCFE8u;
            goto label_2ccfe8;
        }
    }
    ctx->pc = 0x2CCF0Cu;
label_2ccf0c:
    // 0x2ccf0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ccf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ccf10:
    // 0x2ccf10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ccf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ccf14:
    // 0x2ccf14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ccf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2ccf18:
    // 0x2ccf18: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2ccf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2ccf1c:
    // 0x2ccf1c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2ccf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccf20:
    // 0x2ccf20: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2ccf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ccf24:
    // 0x2ccf24: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2ccf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccf28:
    // 0x2ccf28: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2ccf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2ccf2c:
    // 0x2ccf2c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2ccf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccf30:
    // 0x2ccf30: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2ccf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2ccf34:
    // 0x2ccf34: 0xc06421c  jal         func_190870
label_2ccf38:
    if (ctx->pc == 0x2CCF38u) {
        ctx->pc = 0x2CCF38u;
            // 0x2ccf38: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2CCF3Cu;
        goto label_2ccf3c;
    }
    ctx->pc = 0x2CCF34u;
    SET_GPR_U32(ctx, 31, 0x2CCF3Cu);
    ctx->pc = 0x2CCF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF34u;
            // 0x2ccf38: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF3Cu; }
        if (ctx->pc != 0x2CCF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF3Cu; }
        if (ctx->pc != 0x2CCF3Cu) { return; }
    }
    ctx->pc = 0x2CCF3Cu;
label_2ccf3c:
    // 0x2ccf3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccf40:
    // 0x2ccf40: 0xc0a0ed8  jal         func_283B60
label_2ccf44:
    if (ctx->pc == 0x2CCF44u) {
        ctx->pc = 0x2CCF44u;
            // 0x2ccf44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF48u;
        goto label_2ccf48;
    }
    ctx->pc = 0x2CCF40u;
    SET_GPR_U32(ctx, 31, 0x2CCF48u);
    ctx->pc = 0x2CCF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF40u;
            // 0x2ccf44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF48u; }
        if (ctx->pc != 0x2CCF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF48u; }
        if (ctx->pc != 0x2CCF48u) { return; }
    }
    ctx->pc = 0x2CCF48u;
label_2ccf48:
    // 0x2ccf48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccf4c:
    // 0x2ccf4c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_2ccf50:
    if (ctx->pc == 0x2CCF50u) {
        ctx->pc = 0x2CCF54u;
        goto label_2ccf54;
    }
    ctx->pc = 0x2CCF4Cu;
    {
        const bool branch_taken_0x2ccf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf4c) {
            ctx->pc = 0x2CCFD0u;
            goto label_2ccfd0;
        }
    }
    ctx->pc = 0x2CCF54u;
label_2ccf54:
    // 0x2ccf54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccf54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccf58:
    // 0x2ccf58: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ccf58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ccf5c:
    // 0x2ccf5c: 0x320f809  jalr        $t9
label_2ccf60:
    if (ctx->pc == 0x2CCF60u) {
        ctx->pc = 0x2CCF60u;
            // 0x2ccf60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CCF64u;
        goto label_2ccf64;
    }
    ctx->pc = 0x2CCF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCF64u);
        ctx->pc = 0x2CCF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF5Cu;
            // 0x2ccf60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF64u; }
            if (ctx->pc != 0x2CCF64u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCF64u;
label_2ccf64:
    // 0x2ccf64: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x2ccf64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2ccf68:
    // 0x2ccf68: 0xc0a24f0  jal         func_2893C0
label_2ccf6c:
    if (ctx->pc == 0x2CCF6Cu) {
        ctx->pc = 0x2CCF6Cu;
            // 0x2ccf6c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2CCF70u;
        goto label_2ccf70;
    }
    ctx->pc = 0x2CCF68u;
    SET_GPR_U32(ctx, 31, 0x2CCF70u);
    ctx->pc = 0x2CCF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF68u;
            // 0x2ccf6c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF70u; }
        if (ctx->pc != 0x2CCF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF70u; }
        if (ctx->pc != 0x2CCF70u) { return; }
    }
    ctx->pc = 0x2CCF70u;
label_2ccf70:
    // 0x2ccf70: 0xc047870  jal         func_11E1C0
label_2ccf74:
    if (ctx->pc == 0x2CCF74u) {
        ctx->pc = 0x2CCF74u;
            // 0x2ccf74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF78u;
        goto label_2ccf78;
    }
    ctx->pc = 0x2CCF70u;
    SET_GPR_U32(ctx, 31, 0x2CCF78u);
    ctx->pc = 0x2CCF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF70u;
            // 0x2ccf74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E1C0u;
    if (runtime->hasFunction(0x11E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x11E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF78u; }
        if (ctx->pc != 0x2CCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sin_0x11e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF78u; }
        if (ctx->pc != 0x2CCF78u) { return; }
    }
    ctx->pc = 0x2CCF78u;
label_2ccf78:
    // 0x2ccf78: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x2ccf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_2ccf7c:
    // 0x2ccf7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ccf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccf80:
    // 0x2ccf80: 0xc0a1ffe  jal         func_287FF8
label_2ccf84:
    if (ctx->pc == 0x2CCF84u) {
        ctx->pc = 0x2CCF84u;
            // 0x2ccf84: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x2CCF88u;
        goto label_2ccf88;
    }
    ctx->pc = 0x2CCF80u;
    SET_GPR_U32(ctx, 31, 0x2CCF88u);
    ctx->pc = 0x2CCF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF80u;
            // 0x2ccf84: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF88u; }
        if (ctx->pc != 0x2CCF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF88u; }
        if (ctx->pc != 0x2CCF88u) { return; }
    }
    ctx->pc = 0x2CCF88u;
label_2ccf88:
    // 0x2ccf88: 0xc0a21f2  jal         func_2887C8
label_2ccf8c:
    if (ctx->pc == 0x2CCF8Cu) {
        ctx->pc = 0x2CCF8Cu;
            // 0x2ccf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF90u;
        goto label_2ccf90;
    }
    ctx->pc = 0x2CCF88u;
    SET_GPR_U32(ctx, 31, 0x2CCF90u);
    ctx->pc = 0x2CCF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF88u;
            // 0x2ccf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF90u; }
        if (ctx->pc != 0x2CCF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF90u; }
        if (ctx->pc != 0x2CCF90u) { return; }
    }
    ctx->pc = 0x2CCF90u;
label_2ccf90:
    // 0x2ccf90: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2ccf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2ccf94:
    // 0x2ccf94: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_2ccf98:
    // 0x2ccf98: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2ccf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2ccf9c:
    // 0x2ccf9c: 0xc0a24f0  jal         func_2893C0
label_2ccfa0:
    if (ctx->pc == 0x2CCFA0u) {
        ctx->pc = 0x2CCFA0u;
            // 0x2ccfa0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2CCFA4u;
        goto label_2ccfa4;
    }
    ctx->pc = 0x2CCF9Cu;
    SET_GPR_U32(ctx, 31, 0x2CCFA4u);
    ctx->pc = 0x2CCFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF9Cu;
            // 0x2ccfa0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFA4u; }
        if (ctx->pc != 0x2CCFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFA4u; }
        if (ctx->pc != 0x2CCFA4u) { return; }
    }
    ctx->pc = 0x2CCFA4u;
label_2ccfa4:
    // 0x2ccfa4: 0xc04768a  jal         func_11DA28
label_2ccfa8:
    if (ctx->pc == 0x2CCFA8u) {
        ctx->pc = 0x2CCFA8u;
            // 0x2ccfa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFACu;
        goto label_2ccfac;
    }
    ctx->pc = 0x2CCFA4u;
    SET_GPR_U32(ctx, 31, 0x2CCFACu);
    ctx->pc = 0x2CCFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFA4u;
            // 0x2ccfa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA28u;
    if (runtime->hasFunction(0x11DA28u)) {
        auto targetFn = runtime->lookupFunction(0x11DA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFACu; }
        if (ctx->pc != 0x2CCFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cos_0x11da28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFACu; }
        if (ctx->pc != 0x2CCFACu) { return; }
    }
    ctx->pc = 0x2CCFACu;
label_2ccfac:
    // 0x2ccfac: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x2ccfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
label_2ccfb0:
    // 0x2ccfb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ccfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccfb4:
    // 0x2ccfb4: 0xc0a1ffe  jal         func_287FF8
label_2ccfb8:
    if (ctx->pc == 0x2CCFB8u) {
        ctx->pc = 0x2CCFB8u;
            // 0x2ccfb8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x2CCFBCu;
        goto label_2ccfbc;
    }
    ctx->pc = 0x2CCFB4u;
    SET_GPR_U32(ctx, 31, 0x2CCFBCu);
    ctx->pc = 0x2CCFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFB4u;
            // 0x2ccfb8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFBCu; }
        if (ctx->pc != 0x2CCFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFBCu; }
        if (ctx->pc != 0x2CCFBCu) { return; }
    }
    ctx->pc = 0x2CCFBCu;
label_2ccfbc:
    // 0x2ccfbc: 0xc0a21f2  jal         func_2887C8
label_2ccfc0:
    if (ctx->pc == 0x2CCFC0u) {
        ctx->pc = 0x2CCFC0u;
            // 0x2ccfc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFC4u;
        goto label_2ccfc4;
    }
    ctx->pc = 0x2CCFBCu;
    SET_GPR_U32(ctx, 31, 0x2CCFC4u);
    ctx->pc = 0x2CCFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFBCu;
            // 0x2ccfc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFC4u; }
        if (ctx->pc != 0x2CCFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFC4u; }
        if (ctx->pc != 0x2CCFC4u) { return; }
    }
    ctx->pc = 0x2CCFC4u;
label_2ccfc4:
    // 0x2ccfc4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2ccfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2ccfc8:
    // 0x2ccfc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ccfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2ccfcc:
    // 0x2ccfcc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2ccfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_2ccfd0:
    // 0x2ccfd0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2ccfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2ccfd4:
    // 0x2ccfd4: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2ccfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_2ccfd8:
    // 0x2ccfd8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2ccfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2ccfdc:
    // 0x2ccfdc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ccfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2ccfe0:
    // 0x2ccfe0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2ccfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2ccfe4:
    // 0x2ccfe4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2ccfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_2ccfe8:
    // 0x2ccfe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ccfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ccfec:
    // 0x2ccfec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccfecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ccff0:
    // 0x2ccff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ccff4:
    // 0x2ccff4: 0x3e00008  jr          $ra
label_2ccff8:
    if (ctx->pc == 0x2CCFF8u) {
        ctx->pc = 0x2CCFF8u;
            // 0x2ccff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CCFFCu;
        goto label_fallthrough_0x2ccff4;
    }
    ctx->pc = 0x2CCFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFF4u;
            // 0x2ccff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ccff4:
    ctx->pc = 0x2CCFFCu;
}
