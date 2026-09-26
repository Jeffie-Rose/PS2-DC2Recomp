#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFogParam__13mgRENDER_INFOFffUcUcUcff
// Address: 0x139800 - 0x139884
void SetFogParam__13mgRENDER_INFOFffUcUcUcff_0x139800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFogParam__13mgRENDER_INFOFffUcUcUcff_0x139800");
#endif

    ctx->pc = 0x139800u;

    // 0x139800: 0x460f7081  sub.s       $f2, $f14, $f15
    ctx->pc = 0x139800u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[15]);
    // 0x139804: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x139808: 0x460c6800  add.s       $f0, $f13, $f12
    ctx->pc = 0x139808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x13980c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13980cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x139810: 0x460c6901  sub.s       $f4, $f13, $f12
    ctx->pc = 0x139810u;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x139814: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x139814u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x139818: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x139818u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x13981c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x13981cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x139820: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x139820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x139824: 0x460f7080  add.s       $f2, $f14, $f15
    ctx->pc = 0x139824u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x139828: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x139828u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x13982c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139830: 0x0  nop
    ctx->pc = 0x139830u;
    // NOP
    // 0x139834: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x139834u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x139838: 0xe48c0fd0  swc1        $f12, 0xFD0($a0)
    ctx->pc = 0x139838u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4048), bits); }
    // 0x13983c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x13983cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x139840: 0xe48d0fd4  swc1        $f13, 0xFD4($a0)
    ctx->pc = 0x139840u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4052), bits); }
    // 0x139844: 0xe4810fdc  swc1        $f1, 0xFDC($a0)
    ctx->pc = 0x139844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4060), bits); }
    // 0x139848: 0xe48e0fe0  swc1        $f14, 0xFE0($a0)
    ctx->pc = 0x139848u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4064), bits); }
    // 0x13984c: 0xe48f0fe4  swc1        $f15, 0xFE4($a0)
    ctx->pc = 0x13984cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4068), bits); }
    // 0x139850: 0xe4800fe8  swc1        $f0, 0xFE8($a0)
    ctx->pc = 0x139850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4072), bits); }
    // 0x139854: 0xc4800fdc  lwc1        $f0, 0xFDC($a0)
    ctx->pc = 0x139854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139858: 0xe4800ff0  swc1        $f0, 0xFF0($a0)
    ctx->pc = 0x139858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4080), bits); }
    // 0x13985c: 0xc4800fe0  lwc1        $f0, 0xFE0($a0)
    ctx->pc = 0x13985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139860: 0xe4800ff4  swc1        $f0, 0xFF4($a0)
    ctx->pc = 0x139860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4084), bits); }
    // 0x139864: 0xc4800fe4  lwc1        $f0, 0xFE4($a0)
    ctx->pc = 0x139864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139868: 0xe4800ff8  swc1        $f0, 0xFF8($a0)
    ctx->pc = 0x139868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4088), bits); }
    // 0x13986c: 0xc4800fe8  lwc1        $f0, 0xFE8($a0)
    ctx->pc = 0x13986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139870: 0xe4800ffc  swc1        $f0, 0xFFC($a0)
    ctx->pc = 0x139870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4092), bits); }
    // 0x139874: 0xa0850fd8  sb          $a1, 0xFD8($a0)
    ctx->pc = 0x139874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4056), (uint8_t)GPR_U32(ctx, 5));
    // 0x139878: 0xa0860fd9  sb          $a2, 0xFD9($a0)
    ctx->pc = 0x139878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4057), (uint8_t)GPR_U32(ctx, 6));
    // 0x13987c: 0x3e00008  jr          $ra
    ctx->pc = 0x13987Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13987Cu;
            // 0x139880: 0xa0870fda  sb          $a3, 0xFDA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4058), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139884u;
}
