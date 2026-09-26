#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreDraw__12CObjectFrameFv
// Address: 0x169f30 - 0x169fd0
void PreDraw__12CObjectFrameFv_0x169f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreDraw__12CObjectFrameFv_0x169f30");
#endif

    switch (ctx->pc) {
        case 0x169f30u: goto label_169f30;
        case 0x169f34u: goto label_169f34;
        case 0x169f38u: goto label_169f38;
        case 0x169f3cu: goto label_169f3c;
        case 0x169f40u: goto label_169f40;
        case 0x169f44u: goto label_169f44;
        case 0x169f48u: goto label_169f48;
        case 0x169f4cu: goto label_169f4c;
        case 0x169f50u: goto label_169f50;
        case 0x169f54u: goto label_169f54;
        case 0x169f58u: goto label_169f58;
        case 0x169f5cu: goto label_169f5c;
        case 0x169f60u: goto label_169f60;
        case 0x169f64u: goto label_169f64;
        case 0x169f68u: goto label_169f68;
        case 0x169f6cu: goto label_169f6c;
        case 0x169f70u: goto label_169f70;
        case 0x169f74u: goto label_169f74;
        case 0x169f78u: goto label_169f78;
        case 0x169f7cu: goto label_169f7c;
        case 0x169f80u: goto label_169f80;
        case 0x169f84u: goto label_169f84;
        case 0x169f88u: goto label_169f88;
        case 0x169f8cu: goto label_169f8c;
        case 0x169f90u: goto label_169f90;
        case 0x169f94u: goto label_169f94;
        case 0x169f98u: goto label_169f98;
        case 0x169f9cu: goto label_169f9c;
        case 0x169fa0u: goto label_169fa0;
        case 0x169fa4u: goto label_169fa4;
        case 0x169fa8u: goto label_169fa8;
        case 0x169facu: goto label_169fac;
        case 0x169fb0u: goto label_169fb0;
        case 0x169fb4u: goto label_169fb4;
        case 0x169fb8u: goto label_169fb8;
        case 0x169fbcu: goto label_169fbc;
        case 0x169fc0u: goto label_169fc0;
        case 0x169fc4u: goto label_169fc4;
        case 0x169fc8u: goto label_169fc8;
        case 0x169fccu: goto label_169fcc;
        default: break;
    }

    ctx->pc = 0x169f30u;

label_169f30:
    // 0x169f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_169f34:
    // 0x169f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_169f38:
    // 0x169f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_169f3c:
    // 0x169f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169f40:
    // 0x169f40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169f44:
    // 0x169f44: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x169f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_169f48:
    // 0x169f48: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_169f4c:
    if (ctx->pc == 0x169F4Cu) {
        ctx->pc = 0x169F4Cu;
            // 0x169f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169F50u;
        goto label_169f50;
    }
    ctx->pc = 0x169F48u;
    {
        const bool branch_taken_0x169f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F48u;
            // 0x169f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f48) {
            ctx->pc = 0x169FB8u;
            goto label_169fb8;
        }
    }
    ctx->pc = 0x169F50u;
label_169f50:
    // 0x169f50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169f54:
    // 0x169f54: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x169f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_169f58:
    // 0x169f58: 0x320f809  jalr        $t9
label_169f5c:
    if (ctx->pc == 0x169F5Cu) {
        ctx->pc = 0x169F60u;
        goto label_169f60;
    }
    ctx->pc = 0x169F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169F60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x169F60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169F60u; }
            if (ctx->pc != 0x169F60u) { return; }
        }
        }
    }
    ctx->pc = 0x169F60u;
label_169f60:
    // 0x169f60: 0xc05a76c  jal         func_169DB0
label_169f64:
    if (ctx->pc == 0x169F64u) {
        ctx->pc = 0x169F64u;
            // 0x169f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169F68u;
        goto label_169f68;
    }
    ctx->pc = 0x169F60u;
    SET_GPR_U32(ctx, 31, 0x169F68u);
    ctx->pc = 0x169F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F60u;
            // 0x169f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DB0u;
    if (runtime->hasFunction(0x169DB0u)) {
        auto targetFn = runtime->lookupFunction(0x169DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F68u; }
        if (ctx->pc != 0x169F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreDraw__7CObjectFv_0x169db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F68u; }
        if (ctx->pc != 0x169F68u) { return; }
    }
    ctx->pc = 0x169F68u;
label_169f68:
    // 0x169f68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x169f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_169f6c:
    // 0x169f6c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x169f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_169f70:
    // 0x169f70: 0x320f809  jalr        $t9
label_169f74:
    if (ctx->pc == 0x169F74u) {
        ctx->pc = 0x169F74u;
            // 0x169f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169F78u;
        goto label_169f78;
    }
    ctx->pc = 0x169F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169F78u);
        ctx->pc = 0x169F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F70u;
            // 0x169f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169F78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169F78u; }
            if (ctx->pc != 0x169F78u) { return; }
        }
        }
    }
    ctx->pc = 0x169F78u;
label_169f78:
    // 0x169f78: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x169f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_169f7c:
    // 0x169f7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x169f7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_169f80:
    // 0x169f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_169f84:
    // 0x169f84: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_169f88:
    // 0x169f88: 0x320f809  jalr        $t9
label_169f8c:
    if (ctx->pc == 0x169F8Cu) {
        ctx->pc = 0x169F8Cu;
            // 0x169f8c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x169F90u;
        goto label_169f90;
    }
    ctx->pc = 0x169F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169F90u);
        ctx->pc = 0x169F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F88u;
            // 0x169f8c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169F90u; }
            if (ctx->pc != 0x169F90u) { return; }
        }
        }
    }
    ctx->pc = 0x169F90u;
label_169f90:
    // 0x169f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169f94:
    // 0x169f94: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_169f98:
    if (ctx->pc == 0x169F98u) {
        ctx->pc = 0x169F98u;
            // 0x169f98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169F9Cu;
        goto label_169f9c;
    }
    ctx->pc = 0x169F94u;
    {
        const bool branch_taken_0x169f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F94u;
            // 0x169f98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f94) {
            ctx->pc = 0x169FBCu;
            goto label_169fbc;
        }
    }
    ctx->pc = 0x169F9Cu;
label_169f9c:
    // 0x169f9c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x169f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_169fa0:
    // 0x169fa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_169fa4:
    if (ctx->pc == 0x169FA4u) {
        ctx->pc = 0x169FA8u;
        goto label_169fa8;
    }
    ctx->pc = 0x169FA0u;
    {
        const bool branch_taken_0x169fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fa0) {
            ctx->pc = 0x169FB8u;
            goto label_169fb8;
        }
    }
    ctx->pc = 0x169FA8u;
label_169fa8:
    // 0x169fa8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_169fac:
    // 0x169fac: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x169facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_169fb0:
    // 0x169fb0: 0xc04df4c  jal         func_137D30
label_169fb4:
    if (ctx->pc == 0x169FB4u) {
        ctx->pc = 0x169FB4u;
            // 0x169fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x169FB8u;
        goto label_169fb8;
    }
    ctx->pc = 0x169FB0u;
    SET_GPR_U32(ctx, 31, 0x169FB8u);
    ctx->pc = 0x169FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FB0u;
            // 0x169fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137D30u;
    if (runtime->hasFunction(0x137D30u)) {
        auto targetFn = runtime->lookupFunction(0x137D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FB8u; }
        if (ctx->pc != 0x169FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FB8u; }
        if (ctx->pc != 0x169FB8u) { return; }
    }
    ctx->pc = 0x169FB8u;
label_169fb8:
    // 0x169fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169fbc:
    // 0x169fbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_169fc0:
    // 0x169fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169fc4:
    // 0x169fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169fc8:
    // 0x169fc8: 0x3e00008  jr          $ra
label_169fcc:
    if (ctx->pc == 0x169FCCu) {
        ctx->pc = 0x169FCCu;
            // 0x169fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x169FD0u;
        goto label_fallthrough_0x169fc8;
    }
    ctx->pc = 0x169FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169FC8u;
            // 0x169fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169fc8:
    ctx->pc = 0x169FD0u;
}
