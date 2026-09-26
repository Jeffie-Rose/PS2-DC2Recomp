#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvColor__Ff
// Address: 0x2d8890 - 0x2d88b0
void ConvColor__Ff_0x2d8890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvColor__Ff_0x2d8890");
#endif

    ctx->pc = 0x2d8890u;

    // 0x2d8890: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d8894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8898: 0x0  nop
    ctx->pc = 0x2d8898u;
    // NOP
    // 0x2d889c: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x2d889cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x2d88a0: 0x0  nop
    ctx->pc = 0x2d88a0u;
    // NOP
    // 0x2d88a4: 0x0  nop
    ctx->pc = 0x2d88a4u;
    // NOP
    // 0x2d88a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D88A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D88B0u;
}
