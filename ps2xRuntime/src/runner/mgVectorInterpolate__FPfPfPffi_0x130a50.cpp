#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorInterpolate__FPfPfPffi
// Address: 0x130a50 - 0x130b5c
void mgVectorInterpolate__FPfPfPffi_0x130a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorInterpolate__FPfPfPffi_0x130a50");
#endif

    switch (ctx->pc) {
        case 0x130a90u: goto label_130a90;
        case 0x130ab4u: goto label_130ab4;
        case 0x130ad8u: goto label_130ad8;
        case 0x130ae8u: goto label_130ae8;
        case 0x130af8u: goto label_130af8;
        default: break;
    }

    ctx->pc = 0x130a50u;

    // 0x130a50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130a54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x130a58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x130a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x130a5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x130a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x130a60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x130a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x130a68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x130a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x130a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x130a70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x130a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x130a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130a78: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x130a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a7c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x130a7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x130a80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a88: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x130A88u;
    SET_GPR_U32(ctx, 31, 0x130A90u);
    ctx->pc = 0x130A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130A88u;
            // 0x130a8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A90u; }
        if (ctx->pc != 0x130A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A90u; }
        if (ctx->pc != 0x130A90u) { return; }
    }
    ctx->pc = 0x130A90u;
label_130a90:
    // 0x130a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130a94: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x130A94u;
    {
        const bool branch_taken_0x130a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x130a94) {
            ctx->pc = 0x130B00u;
            goto label_130b00;
        }
    }
    ctx->pc = 0x130A9Cu;
    // 0x130a9c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130A9Cu;
    {
        const bool branch_taken_0x130a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A9Cu;
            // 0x130aa0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a9c) {
            ctx->pc = 0x130AACu;
            goto label_130aac;
        }
    }
    ctx->pc = 0x130AA4u;
    // 0x130aa4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x130AA4u;
    {
        const bool branch_taken_0x130aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AA4u;
            // 0x130aa8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130aa4) {
            ctx->pc = 0x130B40u;
            goto label_130b40;
        }
    }
    ctx->pc = 0x130AACu;
label_130aac:
    // 0x130aac: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x130AACu;
    SET_GPR_U32(ctx, 31, 0x130AB4u);
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AB4u; }
        if (ctx->pc != 0x130AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AB4u; }
        if (ctx->pc != 0x130AB4u) { return; }
    }
    ctx->pc = 0x130AB4u;
label_130ab4:
    // 0x130ab4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x130ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ab8: 0x0  nop
    ctx->pc = 0x130ab8u;
    // NOP
    // 0x130abc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130ABCu;
    {
        const bool branch_taken_0x130abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130ABCu;
            // 0x130ac0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130abc) {
            ctx->pc = 0x130AD0u;
            goto label_130ad0;
        }
    }
    ctx->pc = 0x130AC4u;
    // 0x130ac4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x130ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130ac8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x130AC8u;
    {
        const bool branch_taken_0x130ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AC8u;
            // 0x130acc: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ac8) {
            ctx->pc = 0x130B3Cu;
            goto label_130b3c;
        }
    }
    ctx->pc = 0x130AD0u;
label_130ad0:
    // 0x130ad0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x130AD0u;
    SET_GPR_U32(ctx, 31, 0x130AD8u);
    ctx->pc = 0x130AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130AD0u;
            // 0x130ad4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AD8u; }
        if (ctx->pc != 0x130AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AD8u; }
        if (ctx->pc != 0x130AD8u) { return; }
    }
    ctx->pc = 0x130AD8u;
label_130ad8:
    // 0x130ad8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x130ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130adc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x130adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x130ae0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x130AE0u;
    SET_GPR_U32(ctx, 31, 0x130AE8u);
    ctx->pc = 0x130AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130AE0u;
            // 0x130ae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AE8u; }
        if (ctx->pc != 0x130AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AE8u; }
        if (ctx->pc != 0x130AE8u) { return; }
    }
    ctx->pc = 0x130AE8u;
label_130ae8:
    // 0x130ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130af0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x130AF0u;
    SET_GPR_U32(ctx, 31, 0x130AF8u);
    ctx->pc = 0x130AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130AF0u;
            // 0x130af4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AF8u; }
        if (ctx->pc != 0x130AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AF8u; }
        if (ctx->pc != 0x130AF8u) { return; }
    }
    ctx->pc = 0x130AF8u;
label_130af8:
    // 0x130af8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x130AF8u;
    {
        const bool branch_taken_0x130af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130af8) {
            ctx->pc = 0x130B3Cu;
            goto label_130b3c;
        }
    }
    ctx->pc = 0x130B00u;
label_130b00:
    // 0x130b00: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x130b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b04: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x130b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b08: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x130b08u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x130b0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x130b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x130b10: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x130b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x130b14: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x130b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b18: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x130b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b1c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x130b1cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x130b20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x130b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x130b24: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x130b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x130b28: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x130b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b2c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x130b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b30: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x130b30u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x130b34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x130b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x130b38: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x130b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_130b3c:
    // 0x130b3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x130b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_130b40:
    // 0x130b40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130b44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x130b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130b48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x130b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130b4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x130b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x130b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130b54: 0x3e00008  jr          $ra
    ctx->pc = 0x130B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B54u;
            // 0x130b58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130B5Cu;
}
