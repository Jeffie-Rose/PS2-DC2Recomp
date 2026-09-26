#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInstallProgress__Fv
// Address: 0x31c120 - 0x31c150
void GetInstallProgress__Fv_0x31c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstallProgress__Fv_0x31c120");
#endif

    ctx->pc = 0x31c120u;

    // 0x31c120: 0xc781a3dc  lwc1        $f1, -0x5C24($gp)
    ctx->pc = 0x31c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c124: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x31c128: 0xc780a3e0  lwc1        $f0, -0x5C20($gp)
    ctx->pc = 0x31c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c12c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31c12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31c130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31c130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31c134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c138: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31c138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31c13c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31c13cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x31c140: 0x0  nop
    ctx->pc = 0x31c140u;
    // NOP
    // 0x31c144: 0x0  nop
    ctx->pc = 0x31c144u;
    // NOP
    // 0x31c148: 0x3e00008  jr          $ra
    ctx->pc = 0x31C148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C150u;
}
