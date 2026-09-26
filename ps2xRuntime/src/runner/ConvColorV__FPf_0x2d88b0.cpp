#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvColorV__FPf
// Address: 0x2d88b0 - 0x2d88ec
void ConvColorV__FPf_0x2d88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvColorV__FPf_0x2d88b0");
#endif

    ctx->pc = 0x2d88b0u;

    // 0x2d88b0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2d88b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d88b4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2d88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2d88b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d88b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d88bc: 0x0  nop
    ctx->pc = 0x2d88bcu;
    // NOP
    // 0x2d88c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d88c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d88c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2d88c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d88c8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2d88c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d88cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d88ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d88d0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2d88d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d88d4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2d88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d88d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d88d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d88dc: 0x0  nop
    ctx->pc = 0x2d88dcu;
    // NOP
    // 0x2d88e0: 0x0  nop
    ctx->pc = 0x2d88e0u;
    // NOP
    // 0x2d88e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D88E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D88E4u;
            // 0x2d88e8: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D88ECu;
}
