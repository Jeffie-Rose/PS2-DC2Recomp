#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_ADD_ROT__FP12RS_STACKDATAi
// Address: 0x2e4a40 - 0x2e4af4
void ps2__CHR_ADD_ROT__FP12RS_STACKDATAi_0x2e4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_ADD_ROT__FP12RS_STACKDATAi_0x2e4a40");
#endif

    switch (ctx->pc) {
        case 0x2e4a40u: goto label_2e4a40;
        case 0x2e4a44u: goto label_2e4a44;
        case 0x2e4a48u: goto label_2e4a48;
        case 0x2e4a4cu: goto label_2e4a4c;
        case 0x2e4a50u: goto label_2e4a50;
        case 0x2e4a54u: goto label_2e4a54;
        case 0x2e4a58u: goto label_2e4a58;
        case 0x2e4a5cu: goto label_2e4a5c;
        case 0x2e4a60u: goto label_2e4a60;
        case 0x2e4a64u: goto label_2e4a64;
        case 0x2e4a68u: goto label_2e4a68;
        case 0x2e4a6cu: goto label_2e4a6c;
        case 0x2e4a70u: goto label_2e4a70;
        case 0x2e4a74u: goto label_2e4a74;
        case 0x2e4a78u: goto label_2e4a78;
        case 0x2e4a7cu: goto label_2e4a7c;
        case 0x2e4a80u: goto label_2e4a80;
        case 0x2e4a84u: goto label_2e4a84;
        case 0x2e4a88u: goto label_2e4a88;
        case 0x2e4a8cu: goto label_2e4a8c;
        case 0x2e4a90u: goto label_2e4a90;
        case 0x2e4a94u: goto label_2e4a94;
        case 0x2e4a98u: goto label_2e4a98;
        case 0x2e4a9cu: goto label_2e4a9c;
        case 0x2e4aa0u: goto label_2e4aa0;
        case 0x2e4aa4u: goto label_2e4aa4;
        case 0x2e4aa8u: goto label_2e4aa8;
        case 0x2e4aacu: goto label_2e4aac;
        case 0x2e4ab0u: goto label_2e4ab0;
        case 0x2e4ab4u: goto label_2e4ab4;
        case 0x2e4ab8u: goto label_2e4ab8;
        case 0x2e4abcu: goto label_2e4abc;
        case 0x2e4ac0u: goto label_2e4ac0;
        case 0x2e4ac4u: goto label_2e4ac4;
        case 0x2e4ac8u: goto label_2e4ac8;
        case 0x2e4accu: goto label_2e4acc;
        case 0x2e4ad0u: goto label_2e4ad0;
        case 0x2e4ad4u: goto label_2e4ad4;
        case 0x2e4ad8u: goto label_2e4ad8;
        case 0x2e4adcu: goto label_2e4adc;
        case 0x2e4ae0u: goto label_2e4ae0;
        case 0x2e4ae4u: goto label_2e4ae4;
        case 0x2e4ae8u: goto label_2e4ae8;
        case 0x2e4aecu: goto label_2e4aec;
        case 0x2e4af0u: goto label_2e4af0;
        default: break;
    }

    ctx->pc = 0x2e4a40u;

label_2e4a40:
    // 0x2e4a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e4a44:
    // 0x2e4a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e4a48:
    // 0x2e4a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4a4c:
    // 0x2e4a4c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4a50:
    // 0x2e4a50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4a54:
    // 0x2e4a54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4a58:
    if (ctx->pc == 0x2E4A58u) {
        ctx->pc = 0x2E4A58u;
            // 0x2e4a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A5Cu;
        goto label_2e4a5c;
    }
    ctx->pc = 0x2E4A54u;
    {
        const bool branch_taken_0x2e4a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A54u;
            // 0x2e4a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a54) {
            ctx->pc = 0x2E4A64u;
            goto label_2e4a64;
        }
    }
    ctx->pc = 0x2E4A5Cu;
label_2e4a5c:
    // 0x2e4a5c: 0x10000021  b           . + 4 + (0x21 << 2)
label_2e4a60:
    if (ctx->pc == 0x2E4A60u) {
        ctx->pc = 0x2E4A60u;
            // 0x2e4a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A64u;
        goto label_2e4a64;
    }
    ctx->pc = 0x2E4A5Cu;
    {
        const bool branch_taken_0x2e4a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A5Cu;
            // 0x2e4a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a5c) {
            ctx->pc = 0x2E4AE4u;
            goto label_2e4ae4;
        }
    }
    ctx->pc = 0x2E4A64u;
label_2e4a64:
    // 0x2e4a64: 0xc0b8cbc  jal         func_2E32F0
label_2e4a68:
    if (ctx->pc == 0x2E4A68u) {
        ctx->pc = 0x2E4A68u;
            // 0x2e4a68: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4A6Cu;
        goto label_2e4a6c;
    }
    ctx->pc = 0x2E4A64u;
    SET_GPR_U32(ctx, 31, 0x2E4A6Cu);
    ctx->pc = 0x2E4A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A64u;
            // 0x2e4a68: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A6Cu; }
        if (ctx->pc != 0x2E4A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A6Cu; }
        if (ctx->pc != 0x2E4A6Cu) { return; }
    }
    ctx->pc = 0x2E4A6Cu;
label_2e4a6c:
    // 0x2e4a6c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4a70:
    // 0x2e4a70: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4a74:
    // 0x2e4a74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4a78:
    // 0x2e4a78: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2e4a7c:
    // 0x2e4a7c: 0x320f809  jalr        $t9
label_2e4a80:
    if (ctx->pc == 0x2E4A80u) {
        ctx->pc = 0x2E4A80u;
            // 0x2e4a80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4A84u;
        goto label_2e4a84;
    }
    ctx->pc = 0x2E4A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4A84u);
        ctx->pc = 0x2E4A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A7Cu;
            // 0x2e4a80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A84u; }
            if (ctx->pc != 0x2E4A84u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4A84u;
label_2e4a84:
    // 0x2e4a84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e4a88:
    // 0x2e4a88: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e4a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4a8c:
    // 0x2e4a8c: 0xc041c38  jal         func_1070E0
label_2e4a90:
    if (ctx->pc == 0x2E4A90u) {
        ctx->pc = 0x2E4A90u;
            // 0x2e4a90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A94u;
        goto label_2e4a94;
    }
    ctx->pc = 0x2E4A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E4A94u);
    ctx->pc = 0x2E4A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A8Cu;
            // 0x2e4a90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A94u; }
        if (ctx->pc != 0x2E4A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A94u; }
        if (ctx->pc != 0x2E4A94u) { return; }
    }
    ctx->pc = 0x2E4A94u;
label_2e4a94:
    // 0x2e4a94: 0xc04c374  jal         func_130DD0
label_2e4a98:
    if (ctx->pc == 0x2E4A98u) {
        ctx->pc = 0x2E4A98u;
            // 0x2e4a98: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4A9Cu;
        goto label_2e4a9c;
    }
    ctx->pc = 0x2E4A94u;
    SET_GPR_U32(ctx, 31, 0x2E4A9Cu);
    ctx->pc = 0x2E4A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4A94u;
            // 0x2e4a98: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A9Cu; }
        if (ctx->pc != 0x2E4A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4A9Cu; }
        if (ctx->pc != 0x2E4A9Cu) { return; }
    }
    ctx->pc = 0x2E4A9Cu;
label_2e4a9c:
    // 0x2e4a9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e4a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2e4aa0:
    // 0x2e4aa0: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x2e4aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2e4aa4:
    // 0x2e4aa4: 0xc04c374  jal         func_130DD0
label_2e4aa8:
    if (ctx->pc == 0x2E4AA8u) {
        ctx->pc = 0x2E4AA8u;
            // 0x2e4aa8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4AACu;
        goto label_2e4aac;
    }
    ctx->pc = 0x2E4AA4u;
    SET_GPR_U32(ctx, 31, 0x2E4AACu);
    ctx->pc = 0x2E4AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AA4u;
            // 0x2e4aa8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AACu; }
        if (ctx->pc != 0x2E4AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AACu; }
        if (ctx->pc != 0x2E4AACu) { return; }
    }
    ctx->pc = 0x2E4AACu;
label_2e4aac:
    // 0x2e4aac: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e4aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2e4ab0:
    // 0x2e4ab0: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x2e4ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2e4ab4:
    // 0x2e4ab4: 0xc04c374  jal         func_130DD0
label_2e4ab8:
    if (ctx->pc == 0x2E4AB8u) {
        ctx->pc = 0x2E4AB8u;
            // 0x2e4ab8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4ABCu;
        goto label_2e4abc;
    }
    ctx->pc = 0x2E4AB4u;
    SET_GPR_U32(ctx, 31, 0x2E4ABCu);
    ctx->pc = 0x2E4AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AB4u;
            // 0x2e4ab8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4ABCu; }
        if (ctx->pc != 0x2E4ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4ABCu; }
        if (ctx->pc != 0x2E4ABCu) { return; }
    }
    ctx->pc = 0x2E4ABCu;
label_2e4abc:
    // 0x2e4abc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e4abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2e4ac0:
    // 0x2e4ac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e4ac4:
    // 0x2e4ac4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2e4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_2e4ac8:
    // 0x2e4ac8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4acc:
    // 0x2e4acc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4ad0:
    // 0x2e4ad0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4ad4:
    // 0x2e4ad4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2e4ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2e4ad8:
    // 0x2e4ad8: 0x320f809  jalr        $t9
label_2e4adc:
    if (ctx->pc == 0x2E4ADCu) {
        ctx->pc = 0x2E4ADCu;
            // 0x2e4adc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4AE0u;
        goto label_2e4ae0;
    }
    ctx->pc = 0x2E4AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4AE0u);
        ctx->pc = 0x2E4ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AD8u;
            // 0x2e4adc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4AE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4AE0u; }
            if (ctx->pc != 0x2E4AE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4AE0u;
label_2e4ae0:
    // 0x2e4ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4ae4:
    // 0x2e4ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4ae8:
    // 0x2e4ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4aec:
    // 0x2e4aec: 0x3e00008  jr          $ra
label_2e4af0:
    if (ctx->pc == 0x2E4AF0u) {
        ctx->pc = 0x2E4AF0u;
            // 0x2e4af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E4AF4u;
        goto label_fallthrough_0x2e4aec;
    }
    ctx->pc = 0x2E4AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4AECu;
            // 0x2e4af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4aec:
    ctx->pc = 0x2E4AF4u;
}
