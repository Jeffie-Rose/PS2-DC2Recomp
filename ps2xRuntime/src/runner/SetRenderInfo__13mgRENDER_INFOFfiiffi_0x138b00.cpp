#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRenderInfo__13mgRENDER_INFOFfiiffi
// Address: 0x138b00 - 0x138fbc
void SetRenderInfo__13mgRENDER_INFOFfiiffi_0x138b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRenderInfo__13mgRENDER_INFOFfiiffi_0x138b00");
#endif

    switch (ctx->pc) {
        case 0x138d74u: goto label_138d74;
        case 0x138dbcu: goto label_138dbc;
        case 0x138dc4u: goto label_138dc4;
        case 0x138e5cu: goto label_138e5c;
        case 0x138e64u: goto label_138e64;
        case 0x138e9cu: goto label_138e9c;
        case 0x138ea4u: goto label_138ea4;
        case 0x138f0cu: goto label_138f0c;
        case 0x138f28u: goto label_138f28;
        case 0x138f60u: goto label_138f60;
        case 0x138f70u: goto label_138f70;
        default: break;
    }

    ctx->pc = 0x138b00u;

    // 0x138b00: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x138b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x138b04: 0x3c024b7e  lui         $v0, 0x4B7E
    ctx->pc = 0x138b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19326 << 16));
    // 0x138b08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x138b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x138b0c: 0x3443d260  ori         $v1, $v0, 0xD260
    ctx->pc = 0x138b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53856);
    // 0x138b10: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x138b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x138b14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x138b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138b18: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x138b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x138b1c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x138b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x138b20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x138b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x138b24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x138b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x138b28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x138b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x138b2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x138b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b30: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x138b30u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x138b34: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x138b34u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x138b38: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x138b38u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x138b3c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x138b3cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x138b40: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x138b40u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x138b44: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x138b44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x138b48: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x138b48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x138b4c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x138b4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x138b50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x138b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x138b54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x138b54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x138b58: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x138b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x138b5c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138B5Cu;
    {
        const bool branch_taken_0x138b5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x138B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B5Cu;
            // 0x138b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b5c) {
            ctx->pc = 0x138B6Cu;
            goto label_138b6c;
        }
    }
    ctx->pc = 0x138B64u;
    // 0x138b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138B64u;
    {
        const bool branch_taken_0x138b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b64) {
            ctx->pc = 0x138B78u;
            goto label_138b78;
        }
    }
    ctx->pc = 0x138B6Cu;
label_138b6c:
    // 0x138b6c: 0x3c02477d  lui         $v0, 0x477D
    ctx->pc = 0x138b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18301 << 16));
    // 0x138b70: 0x3442e800  ori         $v0, $v0, 0xE800
    ctx->pc = 0x138b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    // 0x138b74: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x138b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_138b78:
    // 0x138b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138b7c: 0x0  nop
    ctx->pc = 0x138b7cu;
    // NOP
    // 0x138b80: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x138b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138b84: 0x0  nop
    ctx->pc = 0x138b84u;
    // NOP
    // 0x138b88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x138B88u;
    {
        const bool branch_taken_0x138b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138b88) {
            ctx->pc = 0x138B98u;
            goto label_138b98;
        }
    }
    ctx->pc = 0x138B90u;
    // 0x138b90: 0xc60d0e88  lwc1        $f13, 0xE88($s0)
    ctx->pc = 0x138b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x138b94: 0x0  nop
    ctx->pc = 0x138b94u;
    // NOP
label_138b98:
    // 0x138b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138b9c: 0x0  nop
    ctx->pc = 0x138b9cu;
    // NOP
    // 0x138ba0: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x138ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138ba4: 0x0  nop
    ctx->pc = 0x138ba4u;
    // NOP
    // 0x138ba8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x138BA8u;
    {
        const bool branch_taken_0x138ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138ba8) {
            ctx->pc = 0x138BB8u;
            goto label_138bb8;
        }
    }
    ctx->pc = 0x138BB0u;
    // 0x138bb0: 0xc60e0e98  lwc1        $f14, 0xE98($s0)
    ctx->pc = 0x138bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x138bb4: 0x0  nop
    ctx->pc = 0x138bb4u;
    // NOP
label_138bb8:
    // 0x138bb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x138bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138bbc: 0x460e6882  mul.s       $f2, $f13, $f14
    ctx->pc = 0x138bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x138bc0: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x138bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x138bc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x138bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x138bc8: 0x460d70c1  sub.s       $f3, $f14, $f13
    ctx->pc = 0x138bc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x138bcc: 0x46030543  div.s       $f21, $f0, $f3
    ctx->pc = 0x138bccu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x138bd0: 0x460da01a  mula.s      $f20, $f13
    ctx->pc = 0x138bd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x138bd4: 0x460e081d  msub.s      $f0, $f1, $f14
    ctx->pc = 0x138bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[14]));
    // 0x138bd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x138bd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x138bdc: 0x46030583  div.s       $f22, $f0, $f3
    ctx->pc = 0x138bdcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x138be0: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x138be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138be4: 0x0  nop
    ctx->pc = 0x138be4u;
    // NOP
    // 0x138be8: 0x0  nop
    ctx->pc = 0x138be8u;
    // NOP
    // 0x138bec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x138BECu;
    {
        const bool branch_taken_0x138bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138bec) {
            ctx->pc = 0x138BF8u;
            goto label_138bf8;
        }
    }
    ctx->pc = 0x138BF4u;
    // 0x138bf4: 0xe60c0000  swc1        $f12, 0x0($s0)
    ctx->pc = 0x138bf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_138bf8:
    // 0x138bf8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x138bf8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138bfc: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x138bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x138c00: 0xae000e80  sw          $zero, 0xE80($s0)
    ctx->pc = 0x138c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3712), GPR_U32(ctx, 0));
    // 0x138c04: 0x3443fe66  ori         $v1, $v0, 0xFE66
    ctx->pc = 0x138c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65126);
    // 0x138c08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138c0c: 0x3444f000  ori         $a0, $v0, 0xF000
    ctx->pc = 0x138c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x138c10: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x138c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x138c14: 0xae000e84  sw          $zero, 0xE84($s0)
    ctx->pc = 0x138c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3716), GPR_U32(ctx, 0));
    // 0x138c18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x138c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x138c1c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x138c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x138c20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x138c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138c24: 0xe60d0e88  swc1        $f13, 0xE88($s0)
    ctx->pc = 0x138c24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3720), bits); }
    // 0x138c28: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x138c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x138c2c: 0xae030e90  sw          $v1, 0xE90($s0)
    ctx->pc = 0x138c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3728), GPR_U32(ctx, 3));
    // 0x138c30: 0x460015c2  mul.s       $f23, $f2, $f0
    ctx->pc = 0x138c30u;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x138c34: 0xae030e94  sw          $v1, 0xE94($s0)
    ctx->pc = 0x138c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3732), GPR_U32(ctx, 3));
    // 0x138c38: 0x111823  negu        $v1, $s1
    ctx->pc = 0x138c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x138c3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x138c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138c40: 0xe60e0e98  swc1        $f14, 0xE98($s0)
    ctx->pc = 0x138c40u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3736), bits); }
    // 0x138c44: 0x46171801  sub.s       $f0, $f3, $f23
    ctx->pc = 0x138c44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[23]);
    // 0x138c48: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x138c48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x138c4c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x138c4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138c50: 0x0  nop
    ctx->pc = 0x138c50u;
    // NOP
    // 0x138c54: 0xe6000eb0  swc1        $f0, 0xEB0($s0)
    ctx->pc = 0x138c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3760), bits); }
    // 0x138c58: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x138c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138c5c: 0x46001602  mul.s       $f24, $f2, $f0
    ctx->pc = 0x138c5cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x138c60: 0x46181801  sub.s       $f0, $f3, $f24
    ctx->pc = 0x138c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[24]);
    // 0x138c64: 0xe6000eb4  swc1        $f0, 0xEB4($s0)
    ctx->pc = 0x138c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3764), bits); }
    // 0x138c68: 0xae000eb8  sw          $zero, 0xEB8($s0)
    ctx->pc = 0x138c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3768), GPR_U32(ctx, 0));
    // 0x138c6c: 0x46171840  add.s       $f1, $f3, $f23
    ctx->pc = 0x138c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[23]);
    // 0x138c70: 0xc6020e88  lwc1        $f2, 0xE88($s0)
    ctx->pc = 0x138c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138c74: 0x46181800  add.s       $f0, $f3, $f24
    ctx->pc = 0x138c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[24]);
    // 0x138c78: 0xe6020ebc  swc1        $f2, 0xEBC($s0)
    ctx->pc = 0x138c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3772), bits); }
    // 0x138c7c: 0xe6010ea0  swc1        $f1, 0xEA0($s0)
    ctx->pc = 0x138c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3744), bits); }
    // 0x138c80: 0xe6000ea4  swc1        $f0, 0xEA4($s0)
    ctx->pc = 0x138c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3748), bits); }
    // 0x138c84: 0xae000ea8  sw          $zero, 0xEA8($s0)
    ctx->pc = 0x138c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3752), GPR_U32(ctx, 0));
    // 0x138c88: 0xc6000e98  lwc1        $f0, 0xE98($s0)
    ctx->pc = 0x138c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138c8c: 0xe6000eac  swc1        $f0, 0xEAC($s0)
    ctx->pc = 0x138c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3756), bits); }
    // 0x138c90: 0xae050ed0  sw          $a1, 0xED0($s0)
    ctx->pc = 0x138c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3792), GPR_U32(ctx, 5));
    // 0x138c94: 0xae050ed4  sw          $a1, 0xED4($s0)
    ctx->pc = 0x138c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3796), GPR_U32(ctx, 5));
    // 0x138c98: 0xae000ed8  sw          $zero, 0xED8($s0)
    ctx->pc = 0x138c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3800), GPR_U32(ctx, 0));
    // 0x138c9c: 0xc6000e88  lwc1        $f0, 0xE88($s0)
    ctx->pc = 0x138c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ca0: 0xe6000edc  swc1        $f0, 0xEDC($s0)
    ctx->pc = 0x138ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3804), bits); }
    // 0x138ca4: 0xae040ec0  sw          $a0, 0xEC0($s0)
    ctx->pc = 0x138ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3776), GPR_U32(ctx, 4));
    // 0x138ca8: 0xae040ec4  sw          $a0, 0xEC4($s0)
    ctx->pc = 0x138ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3780), GPR_U32(ctx, 4));
    // 0x138cac: 0xae000ec8  sw          $zero, 0xEC8($s0)
    ctx->pc = 0x138cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3784), GPR_U32(ctx, 0));
    // 0x138cb0: 0xc6000e98  lwc1        $f0, 0xE98($s0)
    ctx->pc = 0x138cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138cb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138CB4u;
    {
        const bool branch_taken_0x138cb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138CB4u;
            // 0x138cb8: 0xe6000ecc  swc1        $f0, 0xECC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cb4) {
            ctx->pc = 0x138CC4u;
            goto label_138cc4;
        }
    }
    ctx->pc = 0x138CBCu;
    // 0x138cbc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138cc0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_138cc4:
    // 0x138cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138cc8: 0x61823  negu        $v1, $a2
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x138ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138cd0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x138cd4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138CD4u;
    {
        const bool branch_taken_0x138cd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138CD4u;
            // 0x138cd8: 0xe6000ef0  swc1        $f0, 0xEF0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cd4) {
            ctx->pc = 0x138CE4u;
            goto label_138ce4;
        }
    }
    ctx->pc = 0x138CDCu;
    // 0x138cdc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138ce0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x138ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_138ce4:
    // 0x138ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138ce8: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x138ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x138cec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x138cecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138cf0: 0x0  nop
    ctx->pc = 0x138cf0u;
    // NOP
    // 0x138cf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x138cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138cf8: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x138cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x138cfc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x138cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x138d00: 0xe6010ef4  swc1        $f1, 0xEF4($s0)
    ctx->pc = 0x138d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3828), bits); }
    // 0x138d04: 0xae000ef8  sw          $zero, 0xEF8($s0)
    ctx->pc = 0x138d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3832), GPR_U32(ctx, 0));
    // 0x138d08: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x138d08u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138d0c: 0xc6020e88  lwc1        $f2, 0xE88($s0)
    ctx->pc = 0x138d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138d10: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x138d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138d14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x138d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x138d18: 0xe6020efc  swc1        $f2, 0xEFC($s0)
    ctx->pc = 0x138d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3836), bits); }
    // 0x138d1c: 0xc6020ef0  lwc1        $f2, 0xEF0($s0)
    ctx->pc = 0x138d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138d24: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x138d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138d28: 0xe6010ee0  swc1        $f1, 0xEE0($s0)
    ctx->pc = 0x138d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3808), bits); }
    // 0x138d2c: 0xc6010ef4  lwc1        $f1, 0xEF4($s0)
    ctx->pc = 0x138d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138d30: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x138d30u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x138d34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x138d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x138d38: 0xe6000ee4  swc1        $f0, 0xEE4($s0)
    ctx->pc = 0x138d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3812), bits); }
    // 0x138d3c: 0xae000ee8  sw          $zero, 0xEE8($s0)
    ctx->pc = 0x138d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3816), GPR_U32(ctx, 0));
    // 0x138d40: 0xc6000e98  lwc1        $f0, 0xE98($s0)
    ctx->pc = 0x138d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138d44: 0xe6000eec  swc1        $f0, 0xEEC($s0)
    ctx->pc = 0x138d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3820), bits); }
    // 0x138d48: 0xe6030f10  swc1        $f3, 0xF10($s0)
    ctx->pc = 0x138d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3856), bits); }
    // 0x138d4c: 0xe6030f14  swc1        $f3, 0xF14($s0)
    ctx->pc = 0x138d4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3860), bits); }
    // 0x138d50: 0xae000f18  sw          $zero, 0xF18($s0)
    ctx->pc = 0x138d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3864), GPR_U32(ctx, 0));
    // 0x138d54: 0xc6000e88  lwc1        $f0, 0xE88($s0)
    ctx->pc = 0x138d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138d58: 0xe6000f1c  swc1        $f0, 0xF1C($s0)
    ctx->pc = 0x138d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3868), bits); }
    // 0x138d5c: 0xae020f00  sw          $v0, 0xF00($s0)
    ctx->pc = 0x138d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3840), GPR_U32(ctx, 2));
    // 0x138d60: 0xae020f04  sw          $v0, 0xF04($s0)
    ctx->pc = 0x138d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3844), GPR_U32(ctx, 2));
    // 0x138d64: 0xae000f08  sw          $zero, 0xF08($s0)
    ctx->pc = 0x138d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3848), GPR_U32(ctx, 0));
    // 0x138d68: 0xc6000e98  lwc1        $f0, 0xE98($s0)
    ctx->pc = 0x138d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138d6c: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x138D6Cu;
    SET_GPR_U32(ctx, 31, 0x138D74u);
    ctx->pc = 0x138D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D6Cu;
            // 0x138d70: 0xe6000f0c  swc1        $f0, 0xF0C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3852), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D74u; }
        if (ctx->pc != 0x138D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D74u; }
        if (ctx->pc != 0x138D74u) { return; }
    }
    ctx->pc = 0x138D74u;
label_138d74:
    // 0x138d74: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x138d74u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138d7c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x138d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x138d80: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x138d84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138d88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x138d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x138d8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x138d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138d94: 0x0  nop
    ctx->pc = 0x138d94u;
    // NOP
    // 0x138d98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x138d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x138d9c: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x138d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x138da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138da4: 0x0  nop
    ctx->pc = 0x138da4u;
    // NOP
    // 0x138da8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x138da8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x138dac: 0x0  nop
    ctx->pc = 0x138dacu;
    // NOP
    // 0x138db0: 0x0  nop
    ctx->pc = 0x138db0u;
    // NOP
    // 0x138db4: 0xc041c60  jal         func_107180
    ctx->pc = 0x138DB4u;
    SET_GPR_U32(ctx, 31, 0x138DBCu);
    ctx->pc = 0x138DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DB4u;
            // 0x138db8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DBCu; }
        if (ctx->pc != 0x138DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DBCu; }
        if (ctx->pc != 0x138DBCu) { return; }
    }
    ctx->pc = 0x138DBCu;
label_138dbc:
    // 0x138dbc: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x138DBCu;
    SET_GPR_U32(ctx, 31, 0x138DC4u);
    ctx->pc = 0x138DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DBCu;
            // 0x138dc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DC4u; }
        if (ctx->pc != 0x138DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DC4u; }
        if (ctx->pc != 0x138DC4u) { return; }
    }
    ctx->pc = 0x138DC4u;
label_138dc4:
    // 0x138dc4: 0xc6190e88  lwc1        $f25, 0xE88($s0)
    ctx->pc = 0x138dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x138dc8: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x138dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x138dcc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x138dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x138dd0: 0x27b100b4  addiu       $s1, $sp, 0xB4
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x138dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138dd8: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x138dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138ddc: 0xc61a0000  lwc1        $f26, 0x0($s0)
    ctx->pc = 0x138ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x138de0: 0x27b300d8  addiu       $s3, $sp, 0xD8
    ctx->pc = 0x138de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x138de4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x138de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x138de8: 0x27b400cc  addiu       $s4, $sp, 0xCC
    ctx->pc = 0x138de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x138dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138df0: 0x27b500dc  addiu       $s5, $sp, 0xDC
    ctx->pc = 0x138df0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x138df4: 0x4617c882  mul.s       $f2, $f25, $f23
    ctx->pc = 0x138df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[23]);
    // 0x138df8: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x138dfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138e00: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x138e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138e04: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x138e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x138e08: 0x4601c842  mul.s       $f1, $f25, $f1
    ctx->pc = 0x138e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x138e0c: 0x461a15c3  div.s       $f23, $f2, $f26
    ctx->pc = 0x138e0cu;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[2], ctx->f[26]); }
    // 0x138e10: 0x461a0ec3  div.s       $f27, $f1, $f26
    ctx->pc = 0x138e10u;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[27] = FPU_DIV_S(ctx->f[1], ctx->f[26]); }
    // 0x138e14: 0x4618c882  mul.s       $f2, $f25, $f24
    ctx->pc = 0x138e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[24]);
    // 0x138e18: 0x4617c843  div.s       $f1, $f25, $f23
    ctx->pc = 0x138e18u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[25], ctx->f[23]); }
    // 0x138e1c: 0xc6030e98  lwc1        $f3, 0xE98($s0)
    ctx->pc = 0x138e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x138e20: 0x461a1603  div.s       $f24, $f2, $f26
    ctx->pc = 0x138e20u;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[2], ctx->f[26]); }
    // 0x138e24: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x138e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x138e28: 0x4618c843  div.s       $f1, $f25, $f24
    ctx->pc = 0x138e28u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[25], ctx->f[24]); }
    // 0x138e2c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x138e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x138e30: 0x46191840  add.s       $f1, $f3, $f25
    ctx->pc = 0x138e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[25]);
    // 0x138e34: 0x46191881  sub.s       $f2, $f3, $f25
    ctx->pc = 0x138e34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[25]);
    // 0x138e38: 0x46020f03  div.s       $f28, $f1, $f2
    ctx->pc = 0x138e38u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x138e3c: 0x46191842  mul.s       $f1, $f3, $f25
    ctx->pc = 0x138e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x138e40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x138e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x138e44: 0x46020743  div.s       $f29, $f0, $f2
    ctx->pc = 0x138e44u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x138e48: 0xe65c0000  swc1        $f28, 0x0($s2)
    ctx->pc = 0x138e48u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x138e4c: 0xe67d0000  swc1        $f29, 0x0($s3)
    ctx->pc = 0x138e4cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x138e50: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x138e50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x138e54: 0xc04c094  jal         func_130250
    ctx->pc = 0x138E54u;
    SET_GPR_U32(ctx, 31, 0x138E5Cu);
    ctx->pc = 0x138E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E54u;
            // 0x138e58: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E5Cu; }
        if (ctx->pc != 0x138E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E5Cu; }
        if (ctx->pc != 0x138E5Cu) { return; }
    }
    ctx->pc = 0x138E5Cu;
label_138e5c:
    // 0x138e5c: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x138E5Cu;
    SET_GPR_U32(ctx, 31, 0x138E64u);
    ctx->pc = 0x138E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E5Cu;
            // 0x138e60: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E64u; }
        if (ctx->pc != 0x138E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E64u; }
        if (ctx->pc != 0x138E64u) { return; }
    }
    ctx->pc = 0x138E64u;
label_138e64:
    // 0x138e64: 0x0  nop
    ctx->pc = 0x138e64u;
    // NOP
    // 0x138e68: 0x0  nop
    ctx->pc = 0x138e68u;
    // NOP
    // 0x138e6c: 0x461bc803  div.s       $f0, $f25, $f27
    ctx->pc = 0x138e6cu;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[25], ctx->f[27]); }
    // 0x138e70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138e74: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x138e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x138e78: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138e7c: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x138e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x138e80: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x138e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x138e84: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x138e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x138e88: 0xe65c0000  swc1        $f28, 0x0($s2)
    ctx->pc = 0x138e88u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x138e8c: 0xe67d0000  swc1        $f29, 0x0($s3)
    ctx->pc = 0x138e8cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x138e90: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x138e90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x138e94: 0xc04c094  jal         func_130250
    ctx->pc = 0x138E94u;
    SET_GPR_U32(ctx, 31, 0x138E9Cu);
    ctx->pc = 0x138E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E94u;
            // 0x138e98: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E9Cu; }
        if (ctx->pc != 0x138E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E9Cu; }
        if (ctx->pc != 0x138E9Cu) { return; }
    }
    ctx->pc = 0x138E9Cu;
label_138e9c:
    // 0x138e9c: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x138E9Cu;
    SET_GPR_U32(ctx, 31, 0x138EA4u);
    ctx->pc = 0x138EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E9Cu;
            // 0x138ea0: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EA4u; }
        if (ctx->pc != 0x138EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EA4u; }
        if (ctx->pc != 0x138EA4u) { return; }
    }
    ctx->pc = 0x138EA4u;
label_138ea4:
    // 0x138ea4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x138ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x138ea8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x138eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138eb0: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x138eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x138eb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x138eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138eb8: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x138eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x138ebc: 0x4600d682  mul.s       $f26, $f26, $f0
    ctx->pc = 0x138ebcu;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x138ec0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x138ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x138ec4: 0x461ab802  mul.s       $f0, $f23, $f26
    ctx->pc = 0x138ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
    // 0x138ec8: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x138ec8u;
    { if (ctx->f[25] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[25]); }
    // 0x138ecc: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x138eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x138ed0: 0x461ac002  mul.s       $f0, $f24, $f26
    ctx->pc = 0x138ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[26]);
    // 0x138ed4: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x138ed4u;
    { if (ctx->f[25] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[25]); }
    // 0x138ed8: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x138ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x138edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138ee0: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x138ee0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x138ee4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x138ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x138ee8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x138ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x138eec: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x138eecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x138ef0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x138ef0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x138ef4: 0xe6010288  swc1        $f1, 0x288($s0)
    ctx->pc = 0x138ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x138ef8: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x138ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x138efc: 0xae020290  sw          $v0, 0x290($s0)
    ctx->pc = 0x138efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    // 0x138f00: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x138f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    // 0x138f04: 0xc041c60  jal         func_107180
    ctx->pc = 0x138F04u;
    SET_GPR_U32(ctx, 31, 0x138F0Cu);
    ctx->pc = 0x138F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F04u;
            // 0x138f08: 0xae03029c  sw          $v1, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F0Cu; }
        if (ctx->pc != 0x138F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F0Cu; }
        if (ctx->pc != 0x138F0Cu) { return; }
    }
    ctx->pc = 0x138F0Cu;
label_138f0c:
    // 0x138f0c: 0x461ad802  mul.s       $f0, $f27, $f26
    ctx->pc = 0x138f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[26]);
    // 0x138f10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x138f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x138f14: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x138f14u;
    { if (ctx->f[25] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[25]); }
    // 0x138f18: 0x0  nop
    ctx->pc = 0x138f18u;
    // NOP
    // 0x138f1c: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x138f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x138f20: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x138F20u;
    SET_GPR_U32(ctx, 31, 0x138F28u);
    ctx->pc = 0x138F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F20u;
            // 0x138f24: 0xe60002f4  swc1        $f0, 0x2F4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F28u; }
        if (ctx->pc != 0x138F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F28u; }
        if (ctx->pc != 0x138F28u) { return; }
    }
    ctx->pc = 0x138F28u;
label_138f28:
    // 0x138f28: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x138f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f2c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x138f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x138f30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138f34: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x138f38: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x138f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x138f3c: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x138f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x138f40: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x138f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x138f44: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x138f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x138f48: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x138f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x138f4c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x138f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x138f50: 0xe7b60108  swc1        $f22, 0x108($sp)
    ctx->pc = 0x138f50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x138f54: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x138f54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x138f58: 0xc041c60  jal         func_107180
    ctx->pc = 0x138F58u;
    SET_GPR_U32(ctx, 31, 0x138F60u);
    ctx->pc = 0x138F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F58u;
            // 0x138f5c: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F60u; }
        if (ctx->pc != 0x138F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F60u; }
        if (ctx->pc != 0x138F60u) { return; }
    }
    ctx->pc = 0x138F60u;
label_138f60:
    // 0x138f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f64: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x138f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x138f68: 0xc04e3f0  jal         func_138FC0
    ctx->pc = 0x138F68u;
    SET_GPR_U32(ctx, 31, 0x138F70u);
    ctx->pc = 0x138F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F68u;
            // 0x138f6c: 0x260603a0  addiu       $a2, $s0, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138FC0u;
    if (runtime->hasFunction(0x138FC0u)) {
        auto targetFn = runtime->lookupFunction(0x138FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F70u; }
        if (ctx->pc != 0x138F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetViewMatrix__13mgRENDER_INFOFPA4_fPf_0x138fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F70u; }
        if (ctx->pc != 0x138F70u) { return; }
    }
    ctx->pc = 0x138F70u;
label_138f70:
    // 0x138f70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x138f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x138f74: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x138f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x138f78: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x138f78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138f7c: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x138f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x138f80: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x138f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138f84: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x138f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x138f88: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x138f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138f8c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x138f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x138f90: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x138f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138f94: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x138f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x138f98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x138f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138f9c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x138f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x138fa0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x138fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138fa4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x138fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x138fa8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x138fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x138fac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x138facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x138fb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x138fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x138FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FB4u;
            // 0x138fb8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138FBCu;
}
