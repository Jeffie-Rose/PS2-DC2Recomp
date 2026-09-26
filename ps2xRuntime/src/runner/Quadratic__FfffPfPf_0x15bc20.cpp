#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Quadratic__FfffPfPf
// Address: 0x15bc20 - 0x15bd84
void Quadratic__FfffPfPf_0x15bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quadratic__FfffPfPf_0x15bc20");
#endif

    switch (ctx->pc) {
        case 0x15bc60u: goto label_15bc60;
        case 0x15bc74u: goto label_15bc74;
        case 0x15bc80u: goto label_15bc80;
        case 0x15bc8cu: goto label_15bc8c;
        case 0x15bc98u: goto label_15bc98;
        case 0x15bca4u: goto label_15bca4;
        case 0x15bcacu: goto label_15bcac;
        case 0x15bcb8u: goto label_15bcb8;
        case 0x15bcc0u: goto label_15bcc0;
        case 0x15bcc8u: goto label_15bcc8;
        default: break;
    }

    ctx->pc = 0x15bc20u;

    // 0x15bc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15bc24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15bc28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15bc2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15bc30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15bc30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15bc38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15bc3c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x15bc3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15bc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15bc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x15bc44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15bc48: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x15bc48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x15bc4c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x15bc4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x15bc50: 0x4615ab02  mul.s       $f12, $f21, $f21
    ctx->pc = 0x15bc50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x15bc54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15bc54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15bc58: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x15BC58u;
    SET_GPR_U32(ctx, 31, 0x15BC60u);
    ctx->pc = 0x15BC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC58u;
            // 0x15bc5c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC60u; }
        if (ctx->pc != 0x15BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC60u; }
        if (ctx->pc != 0x15BC60u) { return; }
    }
    ctx->pc = 0x15BC60u;
label_15bc60:
    // 0x15bc60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15bc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc64: 0x3c024010  lui         $v0, 0x4010
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16400 << 16));
    // 0x15bc68: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x15bc68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15bc6c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x15BC6Cu;
    SET_GPR_U32(ctx, 31, 0x15BC74u);
    ctx->pc = 0x15BC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC6Cu;
            // 0x15bc70: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC74u; }
        if (ctx->pc != 0x15BC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC74u; }
        if (ctx->pc != 0x15BC74u) { return; }
    }
    ctx->pc = 0x15BC74u;
label_15bc74:
    // 0x15bc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc78: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x15BC78u;
    SET_GPR_U32(ctx, 31, 0x15BC80u);
    ctx->pc = 0x15BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC78u;
            // 0x15bc7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC80u; }
        if (ctx->pc != 0x15BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC80u; }
        if (ctx->pc != 0x15BC80u) { return; }
    }
    ctx->pc = 0x15BC80u;
label_15bc80:
    // 0x15bc80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15bc80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15bc84: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x15BC84u;
    SET_GPR_U32(ctx, 31, 0x15BC8Cu);
    ctx->pc = 0x15BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC84u;
            // 0x15bc88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC8Cu; }
        if (ctx->pc != 0x15BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC8Cu; }
        if (ctx->pc != 0x15BC8Cu) { return; }
    }
    ctx->pc = 0x15BC8Cu;
label_15bc8c:
    // 0x15bc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc90: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x15BC90u;
    SET_GPR_U32(ctx, 31, 0x15BC98u);
    ctx->pc = 0x15BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC90u;
            // 0x15bc94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC98u; }
        if (ctx->pc != 0x15BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC98u; }
        if (ctx->pc != 0x15BC98u) { return; }
    }
    ctx->pc = 0x15BC98u;
label_15bc98:
    // 0x15bc98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc9c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x15BC9Cu;
    SET_GPR_U32(ctx, 31, 0x15BCA4u);
    ctx->pc = 0x15BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC9Cu;
            // 0x15bca0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCA4u; }
        if (ctx->pc != 0x15BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCA4u; }
        if (ctx->pc != 0x15BCA4u) { return; }
    }
    ctx->pc = 0x15BCA4u;
label_15bca4:
    // 0x15bca4: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x15BCA4u;
    SET_GPR_U32(ctx, 31, 0x15BCACu);
    ctx->pc = 0x15BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCA4u;
            // 0x15bca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCACu; }
        if (ctx->pc != 0x15BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCACu; }
        if (ctx->pc != 0x15BCACu) { return; }
    }
    ctx->pc = 0x15BCACu;
label_15bcac:
    // 0x15bcac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15bcacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15bcb0: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x15BCB0u;
    SET_GPR_U32(ctx, 31, 0x15BCB8u);
    ctx->pc = 0x15BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCB0u;
            // 0x15bcb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCB8u; }
        if (ctx->pc != 0x15BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCB8u; }
        if (ctx->pc != 0x15BCB8u) { return; }
    }
    ctx->pc = 0x15BCB8u;
label_15bcb8:
    // 0x15bcb8: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x15BCB8u;
    SET_GPR_U32(ctx, 31, 0x15BCC0u);
    ctx->pc = 0x15BCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCB8u;
            // 0x15bcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCC0u; }
        if (ctx->pc != 0x15BCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCC0u; }
        if (ctx->pc != 0x15BCC0u) { return; }
    }
    ctx->pc = 0x15BCC0u;
label_15bcc0:
    // 0x15bcc0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x15BCC0u;
    SET_GPR_U32(ctx, 31, 0x15BCC8u);
    ctx->pc = 0x15BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCC0u;
            // 0x15bcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCC8u; }
        if (ctx->pc != 0x15BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BCC8u; }
        if (ctx->pc != 0x15BCC8u) { return; }
    }
    ctx->pc = 0x15BCC8u;
label_15bcc8:
    // 0x15bcc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15bcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bccc: 0x0  nop
    ctx->pc = 0x15bcccu;
    // NOP
    // 0x15bcd0: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x15bcd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bcd4: 0x0  nop
    ctx->pc = 0x15bcd4u;
    // NOP
    // 0x15bcd8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x15BCD8u;
    {
        const bool branch_taken_0x15bcd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCD8u;
            // 0x15bcdc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcd8) {
            ctx->pc = 0x15BD1Cu;
            goto label_15bd1c;
        }
    }
    ctx->pc = 0x15BCE0u;
    // 0x15bce0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bce4: 0x4600a8c7  neg.s       $f3, $f21
    ctx->pc = 0x15bce4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[21]);
    // 0x15bce8: 0x46160902  mul.s       $f4, $f1, $f22
    ctx->pc = 0x15bce8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x15bcec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bcf0: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x15bcf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15bcf4: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x15bcf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15bcf8: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x15bcf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x15bcfc: 0x46001086  mov.s       $f2, $f2
    ctx->pc = 0x15bcfcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[2]);
    // 0x15bd00: 0x46041003  div.s       $f0, $f2, $f4
    ctx->pc = 0x15bd00u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x15bd04: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15bd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15bd08: 0x46040803  div.s       $f0, $f1, $f4
    ctx->pc = 0x15bd08u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x15bd0c: 0x0  nop
    ctx->pc = 0x15bd0cu;
    // NOP
    // 0x15bd10: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x15bd10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x15bd14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15BD14u;
    {
        const bool branch_taken_0x15bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD14u;
            // 0x15bd18: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd14) {
            ctx->pc = 0x15BD5Cu;
            goto label_15bd5c;
        }
    }
    ctx->pc = 0x15BD1Cu;
label_15bd1c:
    // 0x15bd1c: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x15bd1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bd20: 0x0  nop
    ctx->pc = 0x15bd20u;
    // NOP
    // 0x15bd24: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15BD24u;
    {
        const bool branch_taken_0x15bd24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD24u;
            // 0x15bd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd24) {
            ctx->pc = 0x15BD5Cu;
            goto label_15bd5c;
        }
    }
    ctx->pc = 0x15BD2Cu;
    // 0x15bd2c: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x15bd2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x15bd30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15bd34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bd38: 0x0  nop
    ctx->pc = 0x15bd38u;
    // NOP
    // 0x15bd3c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15bd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15bd40: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd48: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x15bd48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x15bd4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15bd4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15bd50: 0x0  nop
    ctx->pc = 0x15bd50u;
    // NOP
    // 0x15bd54: 0x0  nop
    ctx->pc = 0x15bd54u;
    // NOP
    // 0x15bd58: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15bd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_15bd5c:
    // 0x15bd5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15bd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bd60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x15bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15bd64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15bd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bd68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x15bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15bd6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15bd6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bd70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15bd74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15bd74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15bd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD7Cu;
            // 0x15bd80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BD84u;
}
