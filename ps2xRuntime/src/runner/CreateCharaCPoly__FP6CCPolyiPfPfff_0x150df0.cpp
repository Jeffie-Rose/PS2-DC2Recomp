#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateCharaCPoly__FP6CCPolyiPfPfff
// Address: 0x150df0 - 0x150fec
void CreateCharaCPoly__FP6CCPolyiPfPfff_0x150df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateCharaCPoly__FP6CCPolyiPfPfff_0x150df0");
#endif

    switch (ctx->pc) {
        case 0x150e3cu: goto label_150e3c;
        case 0x150e48u: goto label_150e48;
        case 0x150e88u: goto label_150e88;
        case 0x150ec0u: goto label_150ec0;
        case 0x150ee4u: goto label_150ee4;
        case 0x150ef8u: goto label_150ef8;
        case 0x150f0cu: goto label_150f0c;
        case 0x150f1cu: goto label_150f1c;
        case 0x150f2cu: goto label_150f2c;
        case 0x150f3cu: goto label_150f3c;
        case 0x150f4cu: goto label_150f4c;
        case 0x150f5cu: goto label_150f5c;
        case 0x150f6cu: goto label_150f6c;
        case 0x150f78u: goto label_150f78;
        case 0x150f84u: goto label_150f84;
        case 0x150f90u: goto label_150f90;
        case 0x150fa0u: goto label_150fa0;
        case 0x150facu: goto label_150fac;
        case 0x150fb8u: goto label_150fb8;
        case 0x150fc4u: goto label_150fc4;
        default: break;
    }

    ctx->pc = 0x150df0u;

    // 0x150df0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x150df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x150df4: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x150df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x150df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x150dfc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x150dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x150e00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x150e04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x150e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150e0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x150e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e10: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x150e10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x150e14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x150e14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x150e18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x150e18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x150e1c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x150e1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x150e20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E20u;
    {
        const bool branch_taken_0x150e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E20u;
            // 0x150e24: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e20) {
            ctx->pc = 0x150E30u;
            goto label_150e30;
        }
    }
    ctx->pc = 0x150E28u;
    // 0x150e28: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x150E28u;
    {
        const bool branch_taken_0x150e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E28u;
            // 0x150e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e28) {
            ctx->pc = 0x150FC8u;
            goto label_150fc8;
        }
    }
    ctx->pc = 0x150E30u;
label_150e30:
    // 0x150e30: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x150e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e34: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x150E34u;
    SET_GPR_U32(ctx, 31, 0x150E3Cu);
    ctx->pc = 0x150E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E34u;
            // 0x150e38: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E3Cu; }
        if (ctx->pc != 0x150E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E3Cu; }
        if (ctx->pc != 0x150E3Cu) { return; }
    }
    ctx->pc = 0x150E3Cu;
label_150e3c:
    // 0x150e3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x150e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150e40: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x150E40u;
    SET_GPR_U32(ctx, 31, 0x150E48u);
    ctx->pc = 0x150E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E40u;
            // 0x150e44: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E48u; }
        if (ctx->pc != 0x150E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E48u; }
        if (ctx->pc != 0x150E48u) { return; }
    }
    ctx->pc = 0x150E48u;
label_150e48:
    // 0x150e48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x150e48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x150e4c: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x150e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150e50: 0x0  nop
    ctx->pc = 0x150e50u;
    // NOP
    // 0x150e54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x150E54u;
    {
        const bool branch_taken_0x150e54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150e54) {
            ctx->pc = 0x150E60u;
            goto label_150e60;
        }
    }
    ctx->pc = 0x150E5Cu;
    // 0x150e5c: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x150e5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_150e60:
    // 0x150e60: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x150e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150e64: 0x0  nop
    ctx->pc = 0x150e64u;
    // NOP
    // 0x150e68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x150E68u;
    {
        const bool branch_taken_0x150e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E68u;
            // 0x150e6c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e68) {
            ctx->pc = 0x150E80u;
            goto label_150e80;
        }
    }
    ctx->pc = 0x150E70u;
    // 0x150e70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e78: 0x0  nop
    ctx->pc = 0x150e78u;
    // NOP
    // 0x150e7c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x150e7cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_150e80:
    // 0x150e80: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150E80u;
    SET_GPR_U32(ctx, 31, 0x150E88u);
    ctx->pc = 0x150E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E80u;
            // 0x150e84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E88u; }
        if (ctx->pc != 0x150E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E88u; }
        if (ctx->pc != 0x150E88u) { return; }
    }
    ctx->pc = 0x150E88u;
label_150e88:
    // 0x150e88: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x150e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150e8c: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x150e90: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x150e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150e94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150e98: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x150e98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x150e9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x150e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x150ea0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x150ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x150ea4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x150ea4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x150ea8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x150ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x150eac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x150eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x150eb0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x150eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x150eb4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x150eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x150eb8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150EB8u;
    SET_GPR_U32(ctx, 31, 0x150EC0u);
    ctx->pc = 0x150EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150EB8u;
            // 0x150ebc: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EC0u; }
        if (ctx->pc != 0x150EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EC0u; }
        if (ctx->pc != 0x150EC0u) { return; }
    }
    ctx->pc = 0x150EC0u;
label_150ec0:
    // 0x150ec0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x150ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150ec4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150ec8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x150ecc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x150eccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x150ed0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x150ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x150ed4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x150ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150ed8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x150ed8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x150edc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150EDCu;
    SET_GPR_U32(ctx, 31, 0x150EE4u);
    ctx->pc = 0x150EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150EDCu;
            // 0x150ee0: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EE4u; }
        if (ctx->pc != 0x150EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EE4u; }
        if (ctx->pc != 0x150EE4u) { return; }
    }
    ctx->pc = 0x150EE4u;
label_150ee4:
    // 0x150ee4: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x150ee4u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    // 0x150ee8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150eec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x150eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x150ef0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150EF0u;
    SET_GPR_U32(ctx, 31, 0x150EF8u);
    ctx->pc = 0x150EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150EF0u;
            // 0x150ef4: 0xe7b50094  swc1        $f21, 0x94($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EF8u; }
        if (ctx->pc != 0x150EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EF8u; }
        if (ctx->pc != 0x150EF8u) { return; }
    }
    ctx->pc = 0x150EF8u;
label_150ef8:
    // 0x150ef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x150ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x150efc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x150efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f00: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x150f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x150f04: 0xc041c4a  jal         func_107128
    ctx->pc = 0x150F04u;
    SET_GPR_U32(ctx, 31, 0x150F0Cu);
    ctx->pc = 0x150F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F04u;
            // 0x150f08: 0xe7b500a4  swc1        $f21, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F0Cu; }
        if (ctx->pc != 0x150F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F0Cu; }
        if (ctx->pc != 0x150F0Cu) { return; }
    }
    ctx->pc = 0x150F0Cu;
label_150f0c:
    // 0x150f0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x150f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x150f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f14: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x150F14u;
    SET_GPR_U32(ctx, 31, 0x150F1Cu);
    ctx->pc = 0x150F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F14u;
            // 0x150f18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F1Cu; }
        if (ctx->pc != 0x150F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F1Cu; }
        if (ctx->pc != 0x150F1Cu) { return; }
    }
    ctx->pc = 0x150F1Cu;
label_150f1c:
    // 0x150f1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x150f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x150f20: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f24: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x150F24u;
    SET_GPR_U32(ctx, 31, 0x150F2Cu);
    ctx->pc = 0x150F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F24u;
            // 0x150f28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F2Cu; }
        if (ctx->pc != 0x150F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F2Cu; }
        if (ctx->pc != 0x150F2Cu) { return; }
    }
    ctx->pc = 0x150F2Cu;
label_150f2c:
    // 0x150f2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x150f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x150f30: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x150f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f34: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x150F34u;
    SET_GPR_U32(ctx, 31, 0x150F3Cu);
    ctx->pc = 0x150F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F34u;
            // 0x150f38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F3Cu; }
        if (ctx->pc != 0x150F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F3Cu; }
        if (ctx->pc != 0x150F3Cu) { return; }
    }
    ctx->pc = 0x150F3Cu;
label_150f3c:
    // 0x150f3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x150f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150f40: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f44: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x150F44u;
    SET_GPR_U32(ctx, 31, 0x150F4Cu);
    ctx->pc = 0x150F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F44u;
            // 0x150f48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F4Cu; }
        if (ctx->pc != 0x150F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F4Cu; }
        if (ctx->pc != 0x150F4Cu) { return; }
    }
    ctx->pc = 0x150F4Cu;
label_150f4c:
    // 0x150f4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150f50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x150f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f54: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x150F54u;
    SET_GPR_U32(ctx, 31, 0x150F5Cu);
    ctx->pc = 0x150F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F54u;
            // 0x150f58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F5Cu; }
        if (ctx->pc != 0x150F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F5Cu; }
        if (ctx->pc != 0x150F5Cu) { return; }
    }
    ctx->pc = 0x150F5Cu;
label_150f5c:
    // 0x150f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x150f64: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150F64u;
    SET_GPR_U32(ctx, 31, 0x150F6Cu);
    ctx->pc = 0x150F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F64u;
            // 0x150f68: 0x7e400040  sq          $zero, 0x40($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F6Cu; }
        if (ctx->pc != 0x150F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F6Cu; }
        if (ctx->pc != 0x150F6Cu) { return; }
    }
    ctx->pc = 0x150F6Cu;
label_150f6c:
    // 0x150f6c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x150f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x150f70: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150F70u;
    SET_GPR_U32(ctx, 31, 0x150F78u);
    ctx->pc = 0x150F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F70u;
            // 0x150f74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F78u; }
        if (ctx->pc != 0x150F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F78u; }
        if (ctx->pc != 0x150F78u) { return; }
    }
    ctx->pc = 0x150F78u;
label_150f78:
    // 0x150f78: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x150f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x150f7c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150F7Cu;
    SET_GPR_U32(ctx, 31, 0x150F84u);
    ctx->pc = 0x150F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F7Cu;
            // 0x150f80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F84u; }
        if (ctx->pc != 0x150F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F84u; }
        if (ctx->pc != 0x150F84u) { return; }
    }
    ctx->pc = 0x150F84u;
label_150f84:
    // 0x150f84: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x150f88: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150F88u;
    SET_GPR_U32(ctx, 31, 0x150F90u);
    ctx->pc = 0x150F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F88u;
            // 0x150f8c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F90u; }
        if (ctx->pc != 0x150F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F90u; }
        if (ctx->pc != 0x150F90u) { return; }
    }
    ctx->pc = 0x150F90u;
label_150f90:
    // 0x150f90: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x150f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x150f94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150f98: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150F98u;
    SET_GPR_U32(ctx, 31, 0x150FA0u);
    ctx->pc = 0x150F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150F98u;
            // 0x150f9c: 0x7e400090  sq          $zero, 0x90($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 144), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FA0u; }
        if (ctx->pc != 0x150FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FA0u; }
        if (ctx->pc != 0x150FA0u) { return; }
    }
    ctx->pc = 0x150FA0u;
label_150fa0:
    // 0x150fa0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x150fa4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150FA4u;
    SET_GPR_U32(ctx, 31, 0x150FACu);
    ctx->pc = 0x150FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FA4u;
            // 0x150fa8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FACu; }
        if (ctx->pc != 0x150FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FACu; }
        if (ctx->pc != 0x150FACu) { return; }
    }
    ctx->pc = 0x150FACu;
label_150fac:
    // 0x150fac: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x150facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x150fb0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150FB0u;
    SET_GPR_U32(ctx, 31, 0x150FB8u);
    ctx->pc = 0x150FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FB0u;
            // 0x150fb4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FB8u; }
        if (ctx->pc != 0x150FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FB8u; }
        if (ctx->pc != 0x150FB8u) { return; }
    }
    ctx->pc = 0x150FB8u;
label_150fb8:
    // 0x150fb8: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x150fbc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150FBCu;
    SET_GPR_U32(ctx, 31, 0x150FC4u);
    ctx->pc = 0x150FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FBCu;
            // 0x150fc0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FC4u; }
        if (ctx->pc != 0x150FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FC4u; }
        if (ctx->pc != 0x150FC4u) { return; }
    }
    ctx->pc = 0x150FC4u;
label_150fc4:
    // 0x150fc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_150fc8:
    // 0x150fc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150fcc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x150fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x150fd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150fd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x150fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150fd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150fdc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x150fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150fe0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x150FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150FE4u;
            // 0x150fe8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150FECu;
}
