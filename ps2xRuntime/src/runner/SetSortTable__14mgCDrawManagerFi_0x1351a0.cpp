#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSortTable__14mgCDrawManagerFi
// Address: 0x1351a0 - 0x135224
void SetSortTable__14mgCDrawManagerFi_0x1351a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSortTable__14mgCDrawManagerFi_0x1351a0");
#endif

    ctx->pc = 0x1351a0u;

    // 0x1351a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1351a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1351a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1351a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1351a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1351a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1351ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1351acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1351b0: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1351b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1351b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1351B4u;
    {
        const bool branch_taken_0x1351b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1351b4) {
            ctx->pc = 0x1351C8u;
            goto label_1351c8;
        }
    }
    ctx->pc = 0x1351BCu;
    // 0x1351bc: 0xc4610e88  lwc1        $f1, 0xE88($v1)
    ctx->pc = 0x1351bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1351c0: 0xc4620e98  lwc1        $f2, 0xE98($v1)
    ctx->pc = 0x1351c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1351c4: 0x0  nop
    ctx->pc = 0x1351c4u;
    // NOP
label_1351c8:
    // 0x1351c8: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x1351c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1351cc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1351ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1351d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1351d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1351d4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1351d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1351d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1351d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1351dc: 0x0  nop
    ctx->pc = 0x1351dcu;
    // NOP
    // 0x1351e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1351e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1351e4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1351e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1351e8: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1351e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1351ec: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x1351ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1351f0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1351f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1351f4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1351f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1351f8: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x1351f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1351fc: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1351fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135200: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x135200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x135204: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x135204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135208: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x135208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13520c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13520cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x135210: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x135210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x135214: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x135214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135218: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x135218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x13521c: 0x3e00008  jr          $ra
    ctx->pc = 0x13521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135224u;
}
