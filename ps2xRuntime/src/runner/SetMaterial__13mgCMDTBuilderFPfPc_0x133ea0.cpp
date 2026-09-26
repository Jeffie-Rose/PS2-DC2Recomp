#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMaterial__13mgCMDTBuilderFPfPc
// Address: 0x133ea0 - 0x133fb8
void SetMaterial__13mgCMDTBuilderFPfPc_0x133ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMaterial__13mgCMDTBuilderFPfPc_0x133ea0");
#endif

    switch (ctx->pc) {
        case 0x133ed8u: goto label_133ed8;
        case 0x133f50u: goto label_133f50;
        default: break;
    }

    ctx->pc = 0x133ea0u;

    // 0x133ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133eb0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x133eb4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x133eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133eb8: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x133EB8u;
    {
        const bool branch_taken_0x133eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x133eb8) {
            ctx->pc = 0x133FA4u;
            goto label_133fa4;
        }
    }
    ctx->pc = 0x133EC0u;
    // 0x133ec0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x133ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133ec4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x133ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x133ec8: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x133ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x133ecc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x133eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ed0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x133ED0u;
    SET_GPR_U32(ctx, 31, 0x133ED8u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133ED8u; }
        if (ctx->pc != 0x133ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133ED8u; }
        if (ctx->pc != 0x133ED8u) { return; }
    }
    ctx->pc = 0x133ED8u;
label_133ed8:
    // 0x133ed8: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x133edc: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x133edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133ee0: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x133ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133ee4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x133ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133ee8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x133ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133eec: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x133eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x133ef0: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x133ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x133ef4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x133ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x133ef8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x133ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x133efc: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x133efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133f00: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x133f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133f04: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x133f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f08: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x133f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f0c: 0xe5030010  swc1        $f3, 0x10($t0)
    ctx->pc = 0x133f0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x133f10: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x133f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x133f14: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x133f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x133f18: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x133f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x133f1c: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x133f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133f20: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x133f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133f24: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x133f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f28: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x133f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f2c: 0xe5030020  swc1        $f3, 0x20($t0)
    ctx->pc = 0x133f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x133f30: 0xe5020024  swc1        $f2, 0x24($t0)
    ctx->pc = 0x133f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x133f34: 0xe5010028  swc1        $f1, 0x28($t0)
    ctx->pc = 0x133f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x133f38: 0xe500002c  swc1        $f0, 0x2C($t0)
    ctx->pc = 0x133f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x133f3c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x133f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f40: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x133f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x133f44: 0x26070064  addiu       $a3, $s0, 0x64
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x133f48: 0x25060034  addiu       $a2, $t0, 0x34
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 52));
    // 0x133f4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x133f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_133f50:
    // 0x133f50: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x133f50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x133f54: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x133f54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x133f58: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x133f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x133f5c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x133f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x133f60: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x133f60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x133f64: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x133f64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x133f68: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x133f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x133f6c: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x133F6Cu;
    {
        const bool branch_taken_0x133f6c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x133f6c) {
            ctx->pc = 0x133F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133f50;
        }
    }
    ctx->pc = 0x133F74u;
    // 0x133f74: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x133f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x133f78: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x133f78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x133f7c: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x133f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f80: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x133f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f84: 0xe5010058  swc1        $f1, 0x58($t0)
    ctx->pc = 0x133f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 88), bits); }
    // 0x133f88: 0xe500005c  swc1        $f0, 0x5C($t0)
    ctx->pc = 0x133f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 92), bits); }
    // 0x133f8c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x133f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x133f90: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x133f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x133f94: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x133f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x133f98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x133f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x133f9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133fa0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x133fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_133fa4:
    // 0x133fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133fac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x133FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133FB8u;
}
