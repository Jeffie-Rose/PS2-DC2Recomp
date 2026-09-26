#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FLYING_SEARCH_AREA__FP12RS_STACKDATAi
// Address: 0x1e4f20 - 0x1e5038
void ps2__FLYING_SEARCH_AREA__FP12RS_STACKDATAi_0x1e4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FLYING_SEARCH_AREA__FP12RS_STACKDATAi_0x1e4f20");
#endif

    switch (ctx->pc) {
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f24u: goto label_1e4f24;
        case 0x1e4f28u: goto label_1e4f28;
        case 0x1e4f2cu: goto label_1e4f2c;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        case 0x1e4fd0u: goto label_1e4fd0;
        case 0x1e4fd4u: goto label_1e4fd4;
        case 0x1e4fd8u: goto label_1e4fd8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4fe0u: goto label_1e4fe0;
        case 0x1e4fe4u: goto label_1e4fe4;
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e4fecu: goto label_1e4fec;
        case 0x1e4ff0u: goto label_1e4ff0;
        case 0x1e4ff4u: goto label_1e4ff4;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e4ffcu: goto label_1e4ffc;
        case 0x1e5000u: goto label_1e5000;
        case 0x1e5004u: goto label_1e5004;
        case 0x1e5008u: goto label_1e5008;
        case 0x1e500cu: goto label_1e500c;
        case 0x1e5010u: goto label_1e5010;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e501cu: goto label_1e501c;
        case 0x1e5020u: goto label_1e5020;
        case 0x1e5024u: goto label_1e5024;
        case 0x1e5028u: goto label_1e5028;
        case 0x1e502cu: goto label_1e502c;
        case 0x1e5030u: goto label_1e5030;
        case 0x1e5034u: goto label_1e5034;
        default: break;
    }

    ctx->pc = 0x1e4f20u;

label_1e4f20:
    // 0x1e4f20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e4f24:
    // 0x1e4f24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4f28:
    // 0x1e4f28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e4f2c:
    // 0x1e4f2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e4f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e4f30:
    // 0x1e4f30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e4f34:
    // 0x1e4f34: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e4f34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e4f38:
    // 0x1e4f38: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4f3c:
    if (ctx->pc == 0x1E4F3Cu) {
        ctx->pc = 0x1E4F3Cu;
            // 0x1e4f3c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1E4F40u;
        goto label_1e4f40;
    }
    ctx->pc = 0x1E4F38u;
    {
        const bool branch_taken_0x1e4f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F38u;
            // 0x1e4f3c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f38) {
            ctx->pc = 0x1E4F48u;
            goto label_1e4f48;
        }
    }
    ctx->pc = 0x1E4F40u;
label_1e4f40:
    // 0x1e4f40: 0x10000036  b           . + 4 + (0x36 << 2)
label_1e4f44:
    if (ctx->pc == 0x1E4F44u) {
        ctx->pc = 0x1E4F44u;
            // 0x1e4f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F48u;
        goto label_1e4f48;
    }
    ctx->pc = 0x1E4F40u;
    {
        const bool branch_taken_0x1e4f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F40u;
            // 0x1e4f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f40) {
            ctx->pc = 0x1E501Cu;
            goto label_1e501c;
        }
    }
    ctx->pc = 0x1E4F48u;
label_1e4f48:
    // 0x1e4f48: 0xc0781ac  jal         func_1E06B0
label_1e4f4c:
    if (ctx->pc == 0x1E4F4Cu) {
        ctx->pc = 0x1E4F4Cu;
            // 0x1e4f4c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4F50u;
        goto label_1e4f50;
    }
    ctx->pc = 0x1E4F48u;
    SET_GPR_U32(ctx, 31, 0x1E4F50u);
    ctx->pc = 0x1E4F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F48u;
            // 0x1e4f4c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F50u; }
        if (ctx->pc != 0x1E4F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F50u; }
        if (ctx->pc != 0x1E4F50u) { return; }
    }
    ctx->pc = 0x1E4F50u;
label_1e4f50:
    // 0x1e4f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f54:
    // 0x1e4f54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e4f54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e4f58:
    // 0x1e4f58: 0xc0781ac  jal         func_1E06B0
label_1e4f5c:
    if (ctx->pc == 0x1E4F5Cu) {
        ctx->pc = 0x1E4F5Cu;
            // 0x1e4f5c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4F60u;
        goto label_1e4f60;
    }
    ctx->pc = 0x1E4F58u;
    SET_GPR_U32(ctx, 31, 0x1E4F60u);
    ctx->pc = 0x1E4F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F58u;
            // 0x1e4f5c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F60u; }
        if (ctx->pc != 0x1E4F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F60u; }
        if (ctx->pc != 0x1E4F60u) { return; }
    }
    ctx->pc = 0x1E4F60u;
label_1e4f60:
    // 0x1e4f60: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1e4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1e4f64:
    // 0x1e4f64: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1e4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4f68:
    // 0x1e4f68: 0x2442d330  addiu       $v0, $v0, -0x2CD0
    ctx->pc = 0x1e4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
label_1e4f6c:
    // 0x1e4f6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e4f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e4f70:
    // 0x1e4f70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e4f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4f74:
    // 0x1e4f74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e4f74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1e4f78:
    // 0x1e4f78: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4f7c:
    // 0x1e4f7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4f80:
    // 0x1e4f80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4f84:
    // 0x1e4f84: 0x320f809  jalr        $t9
label_1e4f88:
    if (ctx->pc == 0x1E4F88u) {
        ctx->pc = 0x1E4F88u;
            // 0x1e4f88: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4F8Cu;
        goto label_1e4f8c;
    }
    ctx->pc = 0x1E4F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4F8Cu);
        ctx->pc = 0x1E4F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F84u;
            // 0x1e4f88: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F8Cu; }
            if (ctx->pc != 0x1E4F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E4F8Cu;
label_1e4f8c:
    // 0x1e4f8c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4f90:
    // 0x1e4f90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4f94:
    // 0x1e4f94: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e4f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e4f98:
    // 0x1e4f98: 0x320f809  jalr        $t9
label_1e4f9c:
    if (ctx->pc == 0x1E4F9Cu) {
        ctx->pc = 0x1E4F9Cu;
            // 0x1e4f9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E4FA0u;
        goto label_1e4fa0;
    }
    ctx->pc = 0x1E4F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4FA0u);
        ctx->pc = 0x1E4F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F98u;
            // 0x1e4f9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4FA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FA0u; }
            if (ctx->pc != 0x1E4FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4FA0u;
label_1e4fa0:
    // 0x1e4fa0: 0xc04c374  jal         func_130DD0
label_1e4fa4:
    if (ctx->pc == 0x1E4FA4u) {
        ctx->pc = 0x1E4FA4u;
            // 0x1e4fa4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x1E4FA8u;
        goto label_1e4fa8;
    }
    ctx->pc = 0x1E4FA0u;
    SET_GPR_U32(ctx, 31, 0x1E4FA8u);
    ctx->pc = 0x1E4FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FA0u;
            // 0x1e4fa4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FA8u; }
        if (ctx->pc != 0x1E4FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FA8u; }
        if (ctx->pc != 0x1E4FA8u) { return; }
    }
    ctx->pc = 0x1E4FA8u;
label_1e4fa8:
    // 0x1e4fa8: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x1e4fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e4fac:
    // 0x1e4fac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e4facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e4fb0:
    // 0x1e4fb0: 0xc041c7a  jal         func_1071E8
label_1e4fb4:
    if (ctx->pc == 0x1E4FB4u) {
        ctx->pc = 0x1E4FB4u;
            // 0x1e4fb4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x1E4FB8u;
        goto label_1e4fb8;
    }
    ctx->pc = 0x1E4FB0u;
    SET_GPR_U32(ctx, 31, 0x1E4FB8u);
    ctx->pc = 0x1E4FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FB0u;
            // 0x1e4fb4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FB8u; }
        if (ctx->pc != 0x1E4FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FB8u; }
        if (ctx->pc != 0x1E4FB8u) { return; }
    }
    ctx->pc = 0x1E4FB8u;
label_1e4fb8:
    // 0x1e4fb8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1e4fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4fbc:
    // 0x1e4fbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e4fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e4fc0:
    // 0x1e4fc0: 0xc041cf6  jal         func_1073D8
label_1e4fc4:
    if (ctx->pc == 0x1E4FC4u) {
        ctx->pc = 0x1E4FC4u;
            // 0x1e4fc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FC8u;
        goto label_1e4fc8;
    }
    ctx->pc = 0x1E4FC0u;
    SET_GPR_U32(ctx, 31, 0x1E4FC8u);
    ctx->pc = 0x1E4FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FC0u;
            // 0x1e4fc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FC8u; }
        if (ctx->pc != 0x1E4FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FC8u; }
        if (ctx->pc != 0x1E4FC8u) { return; }
    }
    ctx->pc = 0x1E4FC8u;
label_1e4fc8:
    // 0x1e4fc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4fcc:
    // 0x1e4fcc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e4fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e4fd0:
    // 0x1e4fd0: 0xc041bb0  jal         func_106EC0
label_1e4fd4:
    if (ctx->pc == 0x1E4FD4u) {
        ctx->pc = 0x1E4FD4u;
            // 0x1e4fd4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FD8u;
        goto label_1e4fd8;
    }
    ctx->pc = 0x1E4FD0u;
    SET_GPR_U32(ctx, 31, 0x1E4FD8u);
    ctx->pc = 0x1E4FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FD0u;
            // 0x1e4fd4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FD8u; }
        if (ctx->pc != 0x1E4FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FD8u; }
        if (ctx->pc != 0x1E4FD8u) { return; }
    }
    ctx->pc = 0x1E4FD8u;
label_1e4fd8:
    // 0x1e4fd8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4fdc:
    // 0x1e4fdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e4fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e4fe0:
    // 0x1e4fe0: 0xc041c4a  jal         func_107128
label_1e4fe4:
    if (ctx->pc == 0x1E4FE4u) {
        ctx->pc = 0x1E4FE4u;
            // 0x1e4fe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FE8u;
        goto label_1e4fe8;
    }
    ctx->pc = 0x1E4FE0u;
    SET_GPR_U32(ctx, 31, 0x1E4FE8u);
    ctx->pc = 0x1E4FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FE0u;
            // 0x1e4fe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FE8u; }
        if (ctx->pc != 0x1E4FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FE8u; }
        if (ctx->pc != 0x1E4FE8u) { return; }
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4fec:
    // 0x1e4fec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e4fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e4ff0:
    // 0x1e4ff0: 0xc041c38  jal         func_1070E0
label_1e4ff4:
    if (ctx->pc == 0x1E4FF4u) {
        ctx->pc = 0x1E4FF4u;
            // 0x1e4ff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FF8u;
        goto label_1e4ff8;
    }
    ctx->pc = 0x1E4FF0u;
    SET_GPR_U32(ctx, 31, 0x1E4FF8u);
    ctx->pc = 0x1E4FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FF0u;
            // 0x1e4ff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FF8u; }
        if (ctx->pc != 0x1E4FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FF8u; }
        if (ctx->pc != 0x1E4FF8u) { return; }
    }
    ctx->pc = 0x1E4FF8u;
label_1e4ff8:
    // 0x1e4ff8: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e4ffc:
    // 0x1e4ffc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e4ffcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e5000:
    // 0x1e5000: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e5004:
    // 0x1e5004: 0xc07763c  jal         func_1DD8F0
label_1e5008:
    if (ctx->pc == 0x1E5008u) {
        ctx->pc = 0x1E5008u;
            // 0x1e5008: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E500Cu;
        goto label_1e500c;
    }
    ctx->pc = 0x1E5004u;
    SET_GPR_U32(ctx, 31, 0x1E500Cu);
    ctx->pc = 0x1E5008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5004u;
            // 0x1e5008: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8F0u;
    if (runtime->hasFunction(0x1DD8F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E500Cu; }
        if (ctx->pc != 0x1E500Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchArea__FP6CScenePfPff_0x1dd8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E500Cu; }
        if (ctx->pc != 0x1E500Cu) { return; }
    }
    ctx->pc = 0x1E500Cu;
label_1e500c:
    // 0x1e500c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5010:
    // 0x1e5010: 0xc0781c4  jal         func_1E0710
label_1e5014:
    if (ctx->pc == 0x1E5014u) {
        ctx->pc = 0x1E5014u;
            // 0x1e5014: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E5018u;
        goto label_1e5018;
    }
    ctx->pc = 0x1E5010u;
    SET_GPR_U32(ctx, 31, 0x1E5018u);
    ctx->pc = 0x1E5014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5010u;
            // 0x1e5014: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5018u; }
        if (ctx->pc != 0x1E5018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5018u; }
        if (ctx->pc != 0x1E5018u) { return; }
    }
    ctx->pc = 0x1E5018u;
label_1e5018:
    // 0x1e5018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e501c:
    // 0x1e501c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e501cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5020:
    // 0x1e5020: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e5020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e5024:
    // 0x1e5024: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5028:
    // 0x1e5028: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e502c:
    // 0x1e502c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e502cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5030:
    // 0x1e5030: 0x3e00008  jr          $ra
label_1e5034:
    if (ctx->pc == 0x1E5034u) {
        ctx->pc = 0x1E5034u;
            // 0x1e5034: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E5038u;
        goto label_fallthrough_0x1e5030;
    }
    ctx->pc = 0x1E5030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5030u;
            // 0x1e5034: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e5030:
    ctx->pc = 0x1E5038u;
}
