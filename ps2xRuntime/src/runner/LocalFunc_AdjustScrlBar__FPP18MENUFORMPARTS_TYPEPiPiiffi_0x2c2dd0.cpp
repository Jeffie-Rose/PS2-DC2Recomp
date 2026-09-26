#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi
// Address: 0x2c2dd0 - 0x2c2f24
void LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi_0x2c2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi_0x2c2dd0");
#endif

    switch (ctx->pc) {
        case 0x2c2e64u: goto label_2c2e64;
        case 0x2c2eccu: goto label_2c2ecc;
        default: break;
    }

    ctx->pc = 0x2c2dd0u;

    // 0x2c2dd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c2dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c2dd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c2dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c2dd8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c2dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c2ddc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c2ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c2de0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c2de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2de4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c2de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c2de8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c2decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c2df0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c2df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2df4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2df8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c2df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dfc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c2dfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c2e00: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2c2e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e04: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c2e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c2e08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2e0c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2c2e0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2c2e10: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C2E10u;
    {
        const bool branch_taken_0x2c2e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E10u;
            // 0x2c2e14: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e10) {
            ctx->pc = 0x2C2EFCu;
            goto label_2c2efc;
        }
    }
    ctx->pc = 0x2C2E18u;
    // 0x2c2e18: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2c2e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c2e1c: 0x10e00037  beqz        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C2E1Cu;
    {
        const bool branch_taken_0x2c2e1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e1c) {
            ctx->pc = 0x2C2EFCu;
            goto label_2c2efc;
        }
    }
    ctx->pc = 0x2C2E24u;
    // 0x2c2e24: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2c2e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c2e28: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C2E28u;
    {
        const bool branch_taken_0x2c2e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e28) {
            ctx->pc = 0x2C2EFCu;
            goto label_2c2efc;
        }
    }
    ctx->pc = 0x2C2E30u;
    // 0x2c2e30: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2c2e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2e34: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2c2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2e38: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2c2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2e3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c2e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c2e40: 0x46151083  div.s       $f2, $f2, $f21
    ctx->pc = 0x2c2e40u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[21]); }
    // 0x2c2e44: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2c2e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2c2e48: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2c2e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c2e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c2e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c2e50: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x2c2e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x2c2e54: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c2e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2e5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C2E5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2E64u);
    ctx->pc = 0x2C2E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E5Cu;
            // 0x2c2e60: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E64u; }
        if (ctx->pc != 0x2C2E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E64u; }
        if (ctx->pc != 0x2C2E64u) { return; }
    }
    ctx->pc = 0x2C2E64u;
label_2c2e64:
    // 0x2c2e64: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2c2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2c2e68: 0x4614a8c1  sub.s       $f3, $f21, $f20
    ctx->pc = 0x2c2e68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2c2e6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e74: 0x0  nop
    ctx->pc = 0x2c2e74u;
    // NOP
    // 0x2c2e78: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c2e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2e7c: 0x0  nop
    ctx->pc = 0x2c2e7cu;
    // NOP
    // 0x2c2e80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2E80u;
    {
        const bool branch_taken_0x2c2e80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2e80) {
            ctx->pc = 0x2C2E8Cu;
            goto label_2c2e8c;
        }
    }
    ctx->pc = 0x2C2E88u;
    // 0x2c2e88: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2c2e88u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2c2e8c:
    // 0x2c2e8c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2c2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2e90: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c2e94: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2c2e94u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2e98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2c2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2c2e9c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2c2e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ea4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c2ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c2ea8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2c2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c2eac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c2eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c2eb0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2c2eb0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x2c2eb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2eb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2c2eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c2ebc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c2ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c2ec0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2c2ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c2ec4: 0xc094514  jal         func_251450
    ctx->pc = 0x2C2EC4u;
    SET_GPR_U32(ctx, 31, 0x2C2ECCu);
    ctx->pc = 0x2C2EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2EC4u;
            // 0x2c2ec8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2ECCu; }
        if (ctx->pc != 0x2C2ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2ECCu; }
        if (ctx->pc != 0x2C2ECCu) { return; }
    }
    ctx->pc = 0x2C2ECCu;
label_2c2ecc:
    // 0x2c2ecc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c2ed0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2c2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c2ed4: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2c2ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2ed8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2c2ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2edc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c2edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c2ee0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c2ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2c2ee4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c2ee8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2c2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c2eec: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2c2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2ef0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2c2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2ef4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c2ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c2ef8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2c2efc:
    // 0x2c2efc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c2efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2f00: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c2f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c2f04: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c2f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2f08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2f0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c2f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2f10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c2f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2f14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2f18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F1Cu;
            // 0x2c2f20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2F24u;
}
