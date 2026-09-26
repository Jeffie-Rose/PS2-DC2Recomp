#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetVolPan__FPfPfPfff
// Address: 0x18eef0 - 0x18f0b8
void sndGetVolPan__FPfPfPfff_0x18eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetVolPan__FPfPfPfff_0x18eef0");
#endif

    switch (ctx->pc) {
        case 0x18ef34u: goto label_18ef34;
        case 0x18ef8cu: goto label_18ef8c;
        case 0x18efa0u: goto label_18efa0;
        case 0x18efccu: goto label_18efcc;
        case 0x18efdcu: goto label_18efdc;
        case 0x18efe8u: goto label_18efe8;
        default: break;
    }

    ctx->pc = 0x18eef0u;

    // 0x18eef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18eef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18eef8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18eefc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18ef00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18ef00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18ef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18ef08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ef0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18ef10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18ef14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18ef14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18ef18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18ef1c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x18ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x18ef20: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18ef20u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18ef24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef28: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x18ef28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x18ef2c: 0xc04c018  jal         func_130060
    ctx->pc = 0x18EF2Cu;
    SET_GPR_U32(ctx, 31, 0x18EF34u);
    ctx->pc = 0x18EF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF2Cu;
            // 0x18ef30: 0x24a57680  addiu       $a1, $a1, 0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF34u; }
        if (ctx->pc != 0x18EF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF34u; }
        if (ctx->pc != 0x18EF34u) { return; }
    }
    ctx->pc = 0x18EF34u;
label_18ef34:
    // 0x18ef34: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x18ef34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x18ef38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ef3c: 0x46150081  sub.s       $f2, $f0, $f21
    ctx->pc = 0x18ef3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x18ef40: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18ef40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x18ef44: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18ef44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ef48: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x18ef48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ef4c: 0x0  nop
    ctx->pc = 0x18ef4cu;
    // NOP
    // 0x18ef50: 0x0  nop
    ctx->pc = 0x18ef50u;
    // NOP
    // 0x18ef54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18EF54u;
    {
        const bool branch_taken_0x18ef54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF54u;
            // 0x18ef58: 0x46011841  sub.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef54) {
            ctx->pc = 0x18EF60u;
            goto label_18ef60;
        }
    }
    ctx->pc = 0x18EF5Cu;
    // 0x18ef5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18ef5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ef60:
    // 0x18ef60: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x18ef60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ef64: 0x0  nop
    ctx->pc = 0x18ef64u;
    // NOP
    // 0x18ef68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18EF68u;
    {
        const bool branch_taken_0x18ef68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF68u;
            // 0x18ef6c: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef68) {
            ctx->pc = 0x18EF78u;
            goto label_18ef78;
        }
    }
    ctx->pc = 0x18EF70u;
    // 0x18ef70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ef74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ef74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ef78:
    // 0x18ef78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18ef7c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x18ef7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18ef80: 0x24a57690  addiu       $a1, $a1, 0x7690
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30352));
    // 0x18ef84: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18EF84u;
    SET_GPR_U32(ctx, 31, 0x18EF8Cu);
    ctx->pc = 0x18EF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF84u;
            // 0x18ef88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF8Cu; }
        if (ctx->pc != 0x18EF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF8Cu; }
        if (ctx->pc != 0x18EF8Cu) { return; }
    }
    ctx->pc = 0x18EF8Cu;
label_18ef8c:
    // 0x18ef8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18ef90: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x18ef90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x18ef94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18ef94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef98: 0xc041be0  jal         func_106F80
    ctx->pc = 0x18EF98u;
    SET_GPR_U32(ctx, 31, 0x18EFA0u);
    ctx->pc = 0x18EF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF98u;
            // 0x18ef9c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFA0u; }
        if (ctx->pc != 0x18EFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFA0u; }
        if (ctx->pc != 0x18EFA0u) { return; }
    }
    ctx->pc = 0x18EFA0u;
label_18efa0:
    // 0x18efa0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x18efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18efa4: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x18efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x18efa8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x18efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18efac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18efacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18efb4: 0x24c67680  addiu       $a2, $a2, 0x7680
    ctx->pc = 0x18efb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30336));
    // 0x18efb8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x18efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x18efbc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18efbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18efc0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x18efc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18efc4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x18EFC4u;
    SET_GPR_U32(ctx, 31, 0x18EFCCu);
    ctx->pc = 0x18EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFC4u;
            // 0x18efc8: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFCCu; }
        if (ctx->pc != 0x18EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFCCu; }
        if (ctx->pc != 0x18EFCCu) { return; }
    }
    ctx->pc = 0x18EFCCu;
label_18efcc:
    // 0x18efcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18efd0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18efd4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x18EFD4u;
    SET_GPR_U32(ctx, 31, 0x18EFDCu);
    ctx->pc = 0x18EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFD4u;
            // 0x18efd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFDCu; }
        if (ctx->pc != 0x18EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFDCu; }
        if (ctx->pc != 0x18EFDCu) { return; }
    }
    ctx->pc = 0x18EFDCu;
label_18efdc:
    // 0x18efdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18efe0: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x18EFE0u;
    SET_GPR_U32(ctx, 31, 0x18EFE8u);
    ctx->pc = 0x18EFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFE0u;
            // 0x18efe4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFE8u; }
        if (ctx->pc != 0x18EFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFE8u; }
        if (ctx->pc != 0x18EFE8u) { return; }
    }
    ctx->pc = 0x18EFE8u;
label_18efe8:
    // 0x18efe8: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x18efe8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x18efec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18efecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18eff0: 0x0  nop
    ctx->pc = 0x18eff0u;
    // NOP
    // 0x18eff4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x18eff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18eff8: 0x0  nop
    ctx->pc = 0x18eff8u;
    // NOP
    // 0x18effc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18EFFCu;
    {
        const bool branch_taken_0x18effc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFFCu;
            // 0x18f000: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18effc) {
            ctx->pc = 0x18F008u;
            goto label_18f008;
        }
    }
    ctx->pc = 0x18F004u;
    // 0x18f004: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18f008:
    // 0x18f008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f00c: 0x0  nop
    ctx->pc = 0x18f00cu;
    // NOP
    // 0x18f010: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x18f010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f014: 0x0  nop
    ctx->pc = 0x18f014u;
    // NOP
    // 0x18f018: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18F018u;
    {
        const bool branch_taken_0x18f018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f018) {
            ctx->pc = 0x18F024u;
            goto label_18f024;
        }
    }
    ctx->pc = 0x18F020u;
    // 0x18f020: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x18f020u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_18f024:
    // 0x18f024: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x18f024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x18f028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18f028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f02c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x18f02cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x18f030: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x18f034: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x18f034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x18f038: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18f038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18f03c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18f03cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18f040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18f040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f044: 0x0  nop
    ctx->pc = 0x18f044u;
    // NOP
    // 0x18f048: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x18f048u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f04c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f050: 0x0  nop
    ctx->pc = 0x18f050u;
    // NOP
    // 0x18f054: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x18f054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f058: 0x0  nop
    ctx->pc = 0x18f058u;
    // NOP
    // 0x18f05c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18F05Cu;
    {
        const bool branch_taken_0x18f05c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F05Cu;
            // 0x18f060: 0xe6030000  swc1        $f3, 0x0($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f05c) {
            ctx->pc = 0x18F068u;
            goto label_18f068;
        }
    }
    ctx->pc = 0x18F064u;
    // 0x18f064: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x18f064u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_18f068:
    // 0x18f068: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x18f06c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18f070: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x18f070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x18f074: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x18f074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f078: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x18f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f07c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x18f07cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x18f080: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18f080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f084: 0x0  nop
    ctx->pc = 0x18f084u;
    // NOP
    // 0x18f088: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18f088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18f08c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f090: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x18f090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18f094: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18f094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f098: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18f09c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18f09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f0a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f0a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18f0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f0a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18f0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f0ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0B0u;
            // 0x18f0b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F0B8u;
}
