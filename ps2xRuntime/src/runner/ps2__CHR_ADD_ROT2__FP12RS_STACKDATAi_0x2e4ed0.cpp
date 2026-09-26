#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_ADD_ROT2__FP12RS_STACKDATAi
// Address: 0x2e4ed0 - 0x2e4fa4
void ps2__CHR_ADD_ROT2__FP12RS_STACKDATAi_0x2e4ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_ADD_ROT2__FP12RS_STACKDATAi_0x2e4ed0");
#endif

    switch (ctx->pc) {
        case 0x2e4ed0u: goto label_2e4ed0;
        case 0x2e4ed4u: goto label_2e4ed4;
        case 0x2e4ed8u: goto label_2e4ed8;
        case 0x2e4edcu: goto label_2e4edc;
        case 0x2e4ee0u: goto label_2e4ee0;
        case 0x2e4ee4u: goto label_2e4ee4;
        case 0x2e4ee8u: goto label_2e4ee8;
        case 0x2e4eecu: goto label_2e4eec;
        case 0x2e4ef0u: goto label_2e4ef0;
        case 0x2e4ef4u: goto label_2e4ef4;
        case 0x2e4ef8u: goto label_2e4ef8;
        case 0x2e4efcu: goto label_2e4efc;
        case 0x2e4f00u: goto label_2e4f00;
        case 0x2e4f04u: goto label_2e4f04;
        case 0x2e4f08u: goto label_2e4f08;
        case 0x2e4f0cu: goto label_2e4f0c;
        case 0x2e4f10u: goto label_2e4f10;
        case 0x2e4f14u: goto label_2e4f14;
        case 0x2e4f18u: goto label_2e4f18;
        case 0x2e4f1cu: goto label_2e4f1c;
        case 0x2e4f20u: goto label_2e4f20;
        case 0x2e4f24u: goto label_2e4f24;
        case 0x2e4f28u: goto label_2e4f28;
        case 0x2e4f2cu: goto label_2e4f2c;
        case 0x2e4f30u: goto label_2e4f30;
        case 0x2e4f34u: goto label_2e4f34;
        case 0x2e4f38u: goto label_2e4f38;
        case 0x2e4f3cu: goto label_2e4f3c;
        case 0x2e4f40u: goto label_2e4f40;
        case 0x2e4f44u: goto label_2e4f44;
        case 0x2e4f48u: goto label_2e4f48;
        case 0x2e4f4cu: goto label_2e4f4c;
        case 0x2e4f50u: goto label_2e4f50;
        case 0x2e4f54u: goto label_2e4f54;
        case 0x2e4f58u: goto label_2e4f58;
        case 0x2e4f5cu: goto label_2e4f5c;
        case 0x2e4f60u: goto label_2e4f60;
        case 0x2e4f64u: goto label_2e4f64;
        case 0x2e4f68u: goto label_2e4f68;
        case 0x2e4f6cu: goto label_2e4f6c;
        case 0x2e4f70u: goto label_2e4f70;
        case 0x2e4f74u: goto label_2e4f74;
        case 0x2e4f78u: goto label_2e4f78;
        case 0x2e4f7cu: goto label_2e4f7c;
        case 0x2e4f80u: goto label_2e4f80;
        case 0x2e4f84u: goto label_2e4f84;
        case 0x2e4f88u: goto label_2e4f88;
        case 0x2e4f8cu: goto label_2e4f8c;
        case 0x2e4f90u: goto label_2e4f90;
        case 0x2e4f94u: goto label_2e4f94;
        case 0x2e4f98u: goto label_2e4f98;
        case 0x2e4f9cu: goto label_2e4f9c;
        case 0x2e4fa0u: goto label_2e4fa0;
        default: break;
    }

    ctx->pc = 0x2e4ed0u;

label_2e4ed0:
    // 0x2e4ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e4ed4:
    // 0x2e4ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e4ed8:
    // 0x2e4ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e4edc:
    // 0x2e4edc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2e4edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2e4ee0:
    // 0x2e4ee0: 0xc0b8ca0  jal         func_2E3280
label_2e4ee4:
    if (ctx->pc == 0x2E4EE4u) {
        ctx->pc = 0x2E4EE4u;
            // 0x2e4ee4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2E4EE8u;
        goto label_2e4ee8;
    }
    ctx->pc = 0x2E4EE0u;
    SET_GPR_U32(ctx, 31, 0x2E4EE8u);
    ctx->pc = 0x2E4EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EE0u;
            // 0x2e4ee4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4EE8u; }
        if (ctx->pc != 0x2E4EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4EE8u; }
        if (ctx->pc != 0x2E4EE8u) { return; }
    }
    ctx->pc = 0x2E4EE8u;
label_2e4ee8:
    // 0x2e4ee8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2e4ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4eec:
    // 0x2e4eec: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4ef0:
    // 0x2e4ef0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4ef4:
    // 0x2e4ef4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4ef8:
    // 0x2e4ef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4efc:
    if (ctx->pc == 0x2E4EFCu) {
        ctx->pc = 0x2E4EFCu;
            // 0x2e4efc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F00u;
        goto label_2e4f00;
    }
    ctx->pc = 0x2E4EF8u;
    {
        const bool branch_taken_0x2e4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EF8u;
            // 0x2e4efc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ef8) {
            ctx->pc = 0x2E4F08u;
            goto label_2e4f08;
        }
    }
    ctx->pc = 0x2E4F00u;
label_2e4f00:
    // 0x2e4f00: 0x10000023  b           . + 4 + (0x23 << 2)
label_2e4f04:
    if (ctx->pc == 0x2E4F04u) {
        ctx->pc = 0x2E4F04u;
            // 0x2e4f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F08u;
        goto label_2e4f08;
    }
    ctx->pc = 0x2E4F00u;
    {
        const bool branch_taken_0x2e4f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F00u;
            // 0x2e4f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f00) {
            ctx->pc = 0x2E4F90u;
            goto label_2e4f90;
        }
    }
    ctx->pc = 0x2E4F08u;
label_2e4f08:
    // 0x2e4f08: 0xc0b8cbc  jal         func_2E32F0
label_2e4f0c:
    if (ctx->pc == 0x2E4F0Cu) {
        ctx->pc = 0x2E4F0Cu;
            // 0x2e4f0c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4F10u;
        goto label_2e4f10;
    }
    ctx->pc = 0x2E4F08u;
    SET_GPR_U32(ctx, 31, 0x2E4F10u);
    ctx->pc = 0x2E4F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F08u;
            // 0x2e4f0c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F10u; }
        if (ctx->pc != 0x2E4F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F10u; }
        if (ctx->pc != 0x2E4F10u) { return; }
    }
    ctx->pc = 0x2E4F10u;
label_2e4f10:
    // 0x2e4f10: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4f14:
    // 0x2e4f14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4f18:
    // 0x2e4f18: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4f1c:
    // 0x2e4f1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4f20:
    // 0x2e4f20: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2e4f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2e4f24:
    // 0x2e4f24: 0x320f809  jalr        $t9
label_2e4f28:
    if (ctx->pc == 0x2E4F28u) {
        ctx->pc = 0x2E4F28u;
            // 0x2e4f28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E4F2Cu;
        goto label_2e4f2c;
    }
    ctx->pc = 0x2E4F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4F2Cu);
        ctx->pc = 0x2E4F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F24u;
            // 0x2e4f28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4F2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F2Cu; }
            if (ctx->pc != 0x2E4F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E4F2Cu;
label_2e4f2c:
    // 0x2e4f2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e4f30:
    // 0x2e4f30: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e4f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e4f34:
    // 0x2e4f34: 0xc041c38  jal         func_1070E0
label_2e4f38:
    if (ctx->pc == 0x2E4F38u) {
        ctx->pc = 0x2E4F38u;
            // 0x2e4f38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F3Cu;
        goto label_2e4f3c;
    }
    ctx->pc = 0x2E4F34u;
    SET_GPR_U32(ctx, 31, 0x2E4F3Cu);
    ctx->pc = 0x2E4F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F34u;
            // 0x2e4f38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F3Cu; }
        if (ctx->pc != 0x2E4F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F3Cu; }
        if (ctx->pc != 0x2E4F3Cu) { return; }
    }
    ctx->pc = 0x2E4F3Cu;
label_2e4f3c:
    // 0x2e4f3c: 0xc04c374  jal         func_130DD0
label_2e4f40:
    if (ctx->pc == 0x2E4F40u) {
        ctx->pc = 0x2E4F40u;
            // 0x2e4f40: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4F44u;
        goto label_2e4f44;
    }
    ctx->pc = 0x2E4F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F44u);
    ctx->pc = 0x2E4F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F3Cu;
            // 0x2e4f40: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F44u; }
        if (ctx->pc != 0x2E4F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F44u; }
        if (ctx->pc != 0x2E4F44u) { return; }
    }
    ctx->pc = 0x2E4F44u;
label_2e4f44:
    // 0x2e4f44: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e4f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e4f48:
    // 0x2e4f48: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x2e4f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2e4f4c:
    // 0x2e4f4c: 0xc04c374  jal         func_130DD0
label_2e4f50:
    if (ctx->pc == 0x2E4F50u) {
        ctx->pc = 0x2E4F50u;
            // 0x2e4f50: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4F54u;
        goto label_2e4f54;
    }
    ctx->pc = 0x2E4F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F54u);
    ctx->pc = 0x2E4F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F4Cu;
            // 0x2e4f50: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F54u; }
        if (ctx->pc != 0x2E4F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F54u; }
        if (ctx->pc != 0x2E4F54u) { return; }
    }
    ctx->pc = 0x2E4F54u;
label_2e4f54:
    // 0x2e4f54: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e4f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2e4f58:
    // 0x2e4f58: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x2e4f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2e4f5c:
    // 0x2e4f5c: 0xc04c374  jal         func_130DD0
label_2e4f60:
    if (ctx->pc == 0x2E4F60u) {
        ctx->pc = 0x2E4F60u;
            // 0x2e4f60: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4F64u;
        goto label_2e4f64;
    }
    ctx->pc = 0x2E4F5Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F64u);
    ctx->pc = 0x2E4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F5Cu;
            // 0x2e4f60: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F64u; }
        if (ctx->pc != 0x2E4F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F64u; }
        if (ctx->pc != 0x2E4F64u) { return; }
    }
    ctx->pc = 0x2E4F64u;
label_2e4f64:
    // 0x2e4f64: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e4f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2e4f68:
    // 0x2e4f68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e4f6c:
    // 0x2e4f6c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2e4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2e4f70:
    // 0x2e4f70: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4f74:
    // 0x2e4f74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4f78:
    // 0x2e4f78: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4f7c:
    // 0x2e4f7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4f80:
    // 0x2e4f80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2e4f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2e4f84:
    // 0x2e4f84: 0x320f809  jalr        $t9
label_2e4f88:
    if (ctx->pc == 0x2E4F88u) {
        ctx->pc = 0x2E4F88u;
            // 0x2e4f88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E4F8Cu;
        goto label_2e4f8c;
    }
    ctx->pc = 0x2E4F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4F8Cu);
        ctx->pc = 0x2E4F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F84u;
            // 0x2e4f88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4F8Cu; }
            if (ctx->pc != 0x2E4F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E4F8Cu;
label_2e4f8c:
    // 0x2e4f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4f90:
    // 0x2e4f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4f94:
    // 0x2e4f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4f98:
    // 0x2e4f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4f9c:
    // 0x2e4f9c: 0x3e00008  jr          $ra
label_2e4fa0:
    if (ctx->pc == 0x2E4FA0u) {
        ctx->pc = 0x2E4FA0u;
            // 0x2e4fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E4FA4u;
        goto label_fallthrough_0x2e4f9c;
    }
    ctx->pc = 0x2E4F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F9Cu;
            // 0x2e4fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4f9c:
    ctx->pc = 0x2E4FA4u;
}
