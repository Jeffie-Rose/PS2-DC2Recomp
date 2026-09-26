#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParabolicInitialVector__FPfPfPfff
// Address: 0x2cddb0 - 0x2cde28
void ParabolicInitialVector__FPfPfPfff_0x2cddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParabolicInitialVector__FPfPfPfff_0x2cddb0");
#endif

    ctx->pc = 0x2cddb0u;

    // 0x2cddb0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2cddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cddb4: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x2cddb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x2cddb8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2cddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cddbc: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2cddbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2cddc0: 0x44882800  mtc1        $t0, $f5
    ctx->pc = 0x2cddc0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2cddc4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2cddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2cddc8: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x2cddc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2cddcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cddccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cddd0: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x2cddd0u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x2cddd4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2cddd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2cddd8: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2cddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cdddc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2cdddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdde0: 0x460d2802  mul.s       $f0, $f5, $f13
    ctx->pc = 0x2cdde0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x2cdde4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2cdde4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2cdde8: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x2cdde8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2cddec: 0x4602689d  msub.s      $f2, $f13, $f2
    ctx->pc = 0x2cddecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[2]));
    // 0x2cddf0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2cddf0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2cddf4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2cddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2cddf8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2cddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cddfc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2cddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cde00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cde00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cde04: 0x0  nop
    ctx->pc = 0x2cde04u;
    // NOP
    // 0x2cde08: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2cde08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cde0c: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x2cde0cu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x2cde10: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2cde10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2cde14: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2cde14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2cde18: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2cde18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cde1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cde1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cde20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE20u;
            // 0x2cde24: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDE28u;
}
